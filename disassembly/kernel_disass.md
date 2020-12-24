
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
  100252:	68 d8 a7 00 c1       	push   $0xc100a7d8
  100257:	68 44 a8 00 c1       	push   $0xc100a844
  10025c:	6a 51                	push   $0x51
  10025e:	68 10 a8 00 c1       	push   $0xc100a810
  100263:	e8 03 01 f0 c0       	call   c100036b <__PANIC>
  100268:	e8 da 1c f0 c0       	call   c1001f47 <main>
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
40000043:	68 20 16 00 40       	push   $0x40001620
40000048:	e8 1f 03 00 00       	call   4000036c <printf>
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
400000b2:	e8 48 07 00 00       	call   400007ff <my_shell>
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

4000036c <printf>:
4000036c:	55                   	push   %ebp
4000036d:	89 e5                	mov    %esp,%ebp
4000036f:	83 ec 38             	sub    $0x38,%esp
40000372:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
40000376:	8d 45 0c             	lea    0xc(%ebp),%eax
40000379:	89 45 f4             	mov    %eax,-0xc(%ebp)
4000037c:	e9 da 02 00 00       	jmp    4000065b <printf+0x2ef>
40000381:	8b 45 08             	mov    0x8(%ebp),%eax
40000384:	0f b6 00             	movzbl (%eax),%eax
40000387:	3c 25                	cmp    $0x25,%al
40000389:	0f 85 aa 02 00 00    	jne    40000639 <printf+0x2cd>
4000038f:	90                   	nop
40000390:	8b 45 08             	mov    0x8(%ebp),%eax
40000393:	83 c0 01             	add    $0x1,%eax
40000396:	89 45 08             	mov    %eax,0x8(%ebp)
40000399:	8b 45 08             	mov    0x8(%ebp),%eax
4000039c:	0f b6 00             	movzbl (%eax),%eax
4000039f:	0f be c0             	movsbl %al,%eax
400003a2:	83 e8 30             	sub    $0x30,%eax
400003a5:	83 f8 48             	cmp    $0x48,%eax
400003a8:	0f 87 6f 02 00 00    	ja     4000061d <printf+0x2b1>
400003ae:	8b 04 85 50 16 00 40 	mov    0x40001650(,%eax,4),%eax
400003b5:	ff e0                	jmp    *%eax
400003b7:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400003bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
400003be:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
400003c2:	88 45 d7             	mov    %al,-0x29(%ebp)
400003c5:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
400003c9:	83 ec 0c             	sub    $0xc,%esp
400003cc:	50                   	push   %eax
400003cd:	e8 53 fd ff ff       	call   40000125 <user_print_char>
400003d2:	83 c4 10             	add    $0x10,%esp
400003d5:	e9 54 02 00 00       	jmp    4000062e <printf+0x2c2>
400003da:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400003de:	8b 45 f4             	mov    -0xc(%ebp),%eax
400003e1:	8b 40 fc             	mov    -0x4(%eax),%eax
400003e4:	89 45 dc             	mov    %eax,-0x24(%ebp)
400003e7:	83 ec 0c             	sub    $0xc,%esp
400003ea:	ff 75 dc             	pushl  -0x24(%ebp)
400003ed:	e8 51 fd ff ff       	call   40000143 <user_print_string>
400003f2:	83 c4 10             	add    $0x10,%esp
400003f5:	e9 34 02 00 00       	jmp    4000062e <printf+0x2c2>
400003fa:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400003fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000401:	8b 40 fc             	mov    -0x4(%eax),%eax
40000404:	89 45 d8             	mov    %eax,-0x28(%ebp)
40000407:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
4000040b:	74 19                	je     40000426 <printf+0xba>
4000040d:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
40000411:	6a 01                	push   $0x1
40000413:	50                   	push   %eax
40000414:	6a 0a                	push   $0xa
40000416:	ff 75 d8             	pushl  -0x28(%ebp)
40000419:	e8 38 fd ff ff       	call   40000156 <user_print_num>
4000041e:	83 c4 10             	add    $0x10,%esp
40000421:	e9 08 02 00 00       	jmp    4000062e <printf+0x2c2>
40000426:	6a 00                	push   $0x0
40000428:	6a 14                	push   $0x14
4000042a:	6a 0a                	push   $0xa
4000042c:	ff 75 d8             	pushl  -0x28(%ebp)
4000042f:	e8 22 fd ff ff       	call   40000156 <user_print_num>
40000434:	83 c4 10             	add    $0x10,%esp
40000437:	e9 f2 01 00 00       	jmp    4000062e <printf+0x2c2>
4000043c:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000440:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000443:	8b 40 fc             	mov    -0x4(%eax),%eax
40000446:	89 45 d0             	mov    %eax,-0x30(%ebp)
40000449:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
4000044d:	74 19                	je     40000468 <printf+0xfc>
4000044f:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
40000453:	6a 01                	push   $0x1
40000455:	50                   	push   %eax
40000456:	6a 10                	push   $0x10
40000458:	ff 75 d0             	pushl  -0x30(%ebp)
4000045b:	e8 f6 fc ff ff       	call   40000156 <user_print_num>
40000460:	83 c4 10             	add    $0x10,%esp
40000463:	e9 c6 01 00 00       	jmp    4000062e <printf+0x2c2>
40000468:	6a 00                	push   $0x0
4000046a:	6a 14                	push   $0x14
4000046c:	6a 10                	push   $0x10
4000046e:	ff 75 d0             	pushl  -0x30(%ebp)
40000471:	e8 e0 fc ff ff       	call   40000156 <user_print_num>
40000476:	83 c4 10             	add    $0x10,%esp
40000479:	e9 b0 01 00 00       	jmp    4000062e <printf+0x2c2>
4000047e:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
40000482:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000485:	8b 50 fc             	mov    -0x4(%eax),%edx
40000488:	8b 40 f8             	mov    -0x8(%eax),%eax
4000048b:	89 45 c8             	mov    %eax,-0x38(%ebp)
4000048e:	89 55 cc             	mov    %edx,-0x34(%ebp)
40000491:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000495:	74 1a                	je     400004b1 <printf+0x145>
40000497:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
4000049b:	8b 45 c8             	mov    -0x38(%ebp),%eax
4000049e:	6a 01                	push   $0x1
400004a0:	52                   	push   %edx
400004a1:	6a 10                	push   $0x10
400004a3:	50                   	push   %eax
400004a4:	e8 ad fc ff ff       	call   40000156 <user_print_num>
400004a9:	83 c4 10             	add    $0x10,%esp
400004ac:	e9 7d 01 00 00       	jmp    4000062e <printf+0x2c2>
400004b1:	8b 45 c8             	mov    -0x38(%ebp),%eax
400004b4:	6a 00                	push   $0x0
400004b6:	6a 14                	push   $0x14
400004b8:	6a 10                	push   $0x10
400004ba:	50                   	push   %eax
400004bb:	e8 96 fc ff ff       	call   40000156 <user_print_num>
400004c0:	83 c4 10             	add    $0x10,%esp
400004c3:	e9 66 01 00 00       	jmp    4000062e <printf+0x2c2>
400004c8:	8b 45 08             	mov    0x8(%ebp),%eax
400004cb:	83 c0 01             	add    $0x1,%eax
400004ce:	89 45 08             	mov    %eax,0x8(%ebp)
400004d1:	8b 45 08             	mov    0x8(%ebp),%eax
400004d4:	0f b6 00             	movzbl (%eax),%eax
400004d7:	0f be c0             	movsbl %al,%eax
400004da:	83 f8 78             	cmp    $0x78,%eax
400004dd:	0f 84 80 00 00 00    	je     40000563 <printf+0x1f7>
400004e3:	83 f8 78             	cmp    $0x78,%eax
400004e6:	0f 8f f9 00 00 00    	jg     400005e5 <printf+0x279>
400004ec:	83 f8 6c             	cmp    $0x6c,%eax
400004ef:	0f 84 ac 00 00 00    	je     400005a1 <printf+0x235>
400004f5:	83 f8 6c             	cmp    $0x6c,%eax
400004f8:	0f 8f e7 00 00 00    	jg     400005e5 <printf+0x279>
400004fe:	83 f8 64             	cmp    $0x64,%eax
40000501:	74 1c                	je     4000051f <printf+0x1b3>
40000503:	83 f8 64             	cmp    $0x64,%eax
40000506:	0f 8f d9 00 00 00    	jg     400005e5 <printf+0x279>
4000050c:	83 f8 4c             	cmp    $0x4c,%eax
4000050f:	0f 84 8c 00 00 00    	je     400005a1 <printf+0x235>
40000515:	83 f8 58             	cmp    $0x58,%eax
40000518:	74 49                	je     40000563 <printf+0x1f7>
4000051a:	e9 c6 00 00 00       	jmp    400005e5 <printf+0x279>
4000051f:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000523:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000526:	8b 40 fc             	mov    -0x4(%eax),%eax
40000529:	89 45 ec             	mov    %eax,-0x14(%ebp)
4000052c:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000530:	74 1a                	je     4000054c <printf+0x1e0>
40000532:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
40000536:	8b 45 ec             	mov    -0x14(%ebp),%eax
40000539:	6a 01                	push   $0x1
4000053b:	52                   	push   %edx
4000053c:	6a 0a                	push   $0xa
4000053e:	50                   	push   %eax
4000053f:	e8 12 fc ff ff       	call   40000156 <user_print_num>
40000544:	83 c4 10             	add    $0x10,%esp
40000547:	e9 9a 00 00 00       	jmp    400005e6 <printf+0x27a>
4000054c:	8b 45 ec             	mov    -0x14(%ebp),%eax
4000054f:	6a 00                	push   $0x0
40000551:	6a 14                	push   $0x14
40000553:	6a 0a                	push   $0xa
40000555:	50                   	push   %eax
40000556:	e8 fb fb ff ff       	call   40000156 <user_print_num>
4000055b:	83 c4 10             	add    $0x10,%esp
4000055e:	e9 83 00 00 00       	jmp    400005e6 <printf+0x27a>
40000563:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000567:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000056a:	8b 40 fc             	mov    -0x4(%eax),%eax
4000056d:	89 45 e8             	mov    %eax,-0x18(%ebp)
40000570:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000574:	74 17                	je     4000058d <printf+0x221>
40000576:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
4000057a:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000057d:	6a 01                	push   $0x1
4000057f:	52                   	push   %edx
40000580:	6a 10                	push   $0x10
40000582:	50                   	push   %eax
40000583:	e8 ce fb ff ff       	call   40000156 <user_print_num>
40000588:	83 c4 10             	add    $0x10,%esp
4000058b:	eb 59                	jmp    400005e6 <printf+0x27a>
4000058d:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000590:	6a 00                	push   $0x0
40000592:	6a 14                	push   $0x14
40000594:	6a 10                	push   $0x10
40000596:	50                   	push   %eax
40000597:	e8 ba fb ff ff       	call   40000156 <user_print_num>
4000059c:	83 c4 10             	add    $0x10,%esp
4000059f:	eb 45                	jmp    400005e6 <printf+0x27a>
400005a1:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
400005a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
400005a8:	8b 50 fc             	mov    -0x4(%eax),%edx
400005ab:	8b 40 f8             	mov    -0x8(%eax),%eax
400005ae:	89 45 e0             	mov    %eax,-0x20(%ebp)
400005b1:	89 55 e4             	mov    %edx,-0x1c(%ebp)
400005b4:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400005b8:	74 17                	je     400005d1 <printf+0x265>
400005ba:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
400005be:	8b 45 e0             	mov    -0x20(%ebp),%eax
400005c1:	6a 01                	push   $0x1
400005c3:	52                   	push   %edx
400005c4:	6a 10                	push   $0x10
400005c6:	50                   	push   %eax
400005c7:	e8 8a fb ff ff       	call   40000156 <user_print_num>
400005cc:	83 c4 10             	add    $0x10,%esp
400005cf:	eb 15                	jmp    400005e6 <printf+0x27a>
400005d1:	8b 45 e0             	mov    -0x20(%ebp),%eax
400005d4:	6a 00                	push   $0x0
400005d6:	6a 14                	push   $0x14
400005d8:	6a 10                	push   $0x10
400005da:	50                   	push   %eax
400005db:	e8 76 fb ff ff       	call   40000156 <user_print_num>
400005e0:	83 c4 10             	add    $0x10,%esp
400005e3:	eb 01                	jmp    400005e6 <printf+0x27a>
400005e5:	90                   	nop
400005e6:	eb 46                	jmp    4000062e <printf+0x2c2>
400005e8:	8b 45 08             	mov    0x8(%ebp),%eax
400005eb:	0f b6 00             	movzbl (%eax),%eax
400005ee:	0f be c0             	movsbl %al,%eax
400005f1:	83 e8 30             	sub    $0x30,%eax
400005f4:	89 c2                	mov    %eax,%edx
400005f6:	89 d0                	mov    %edx,%eax
400005f8:	c1 e0 02             	shl    $0x2,%eax
400005fb:	01 d0                	add    %edx,%eax
400005fd:	01 c0                	add    %eax,%eax
400005ff:	89 c2                	mov    %eax,%edx
40000601:	8b 45 08             	mov    0x8(%ebp),%eax
40000604:	83 c0 01             	add    $0x1,%eax
40000607:	89 45 08             	mov    %eax,0x8(%ebp)
4000060a:	8b 45 08             	mov    0x8(%ebp),%eax
4000060d:	0f b6 00             	movzbl (%eax),%eax
40000610:	01 d0                	add    %edx,%eax
40000612:	83 e8 30             	sub    $0x30,%eax
40000615:	88 45 f3             	mov    %al,-0xd(%ebp)
40000618:	e9 73 fd ff ff       	jmp    40000390 <printf+0x24>
4000061d:	83 ec 0c             	sub    $0xc,%esp
40000620:	68 30 16 00 40       	push   $0x40001630
40000625:	e8 19 fb ff ff       	call   40000143 <user_print_string>
4000062a:	83 c4 10             	add    $0x10,%esp
4000062d:	90                   	nop
4000062e:	8b 45 08             	mov    0x8(%ebp),%eax
40000631:	83 c0 01             	add    $0x1,%eax
40000634:	89 45 08             	mov    %eax,0x8(%ebp)
40000637:	eb 1e                	jmp    40000657 <printf+0x2eb>
40000639:	8b 45 08             	mov    0x8(%ebp),%eax
4000063c:	0f b6 00             	movzbl (%eax),%eax
4000063f:	0f be c0             	movsbl %al,%eax
40000642:	83 ec 0c             	sub    $0xc,%esp
40000645:	50                   	push   %eax
40000646:	e8 da fa ff ff       	call   40000125 <user_print_char>
4000064b:	83 c4 10             	add    $0x10,%esp
4000064e:	8b 45 08             	mov    0x8(%ebp),%eax
40000651:	83 c0 01             	add    $0x1,%eax
40000654:	89 45 08             	mov    %eax,0x8(%ebp)
40000657:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
4000065b:	8b 45 08             	mov    0x8(%ebp),%eax
4000065e:	0f b6 00             	movzbl (%eax),%eax
40000661:	84 c0                	test   %al,%al
40000663:	0f 85 18 fd ff ff    	jne    40000381 <printf+0x15>
40000669:	90                   	nop
4000066a:	90                   	nop
4000066b:	c9                   	leave  
4000066c:	c3                   	ret    

4000066d <print_prompt>:
4000066d:	55                   	push   %ebp
4000066e:	89 e5                	mov    %esp,%ebp
40000670:	83 ec 08             	sub    $0x8,%esp
40000673:	83 ec 08             	sub    $0x8,%esp
40000676:	68 20 1b 00 40       	push   $0x40001b20
4000067b:	68 74 17 00 40       	push   $0x40001774
40000680:	e8 e7 fc ff ff       	call   4000036c <printf>
40000685:	83 c4 10             	add    $0x10,%esp
40000688:	90                   	nop
40000689:	c9                   	leave  
4000068a:	c3                   	ret    

4000068b <user_readline>:
4000068b:	55                   	push   %ebp
4000068c:	89 e5                	mov    %esp,%ebp
4000068e:	83 ec 18             	sub    $0x18,%esp
40000691:	8b 45 08             	mov    0x8(%ebp),%eax
40000694:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000697:	eb 6a                	jmp    40000703 <user_readline+0x78>
40000699:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000069c:	0f b6 00             	movzbl (%eax),%eax
4000069f:	0f be c0             	movsbl %al,%eax
400006a2:	83 f8 0d             	cmp    $0xd,%eax
400006a5:	74 0f                	je     400006b6 <user_readline+0x2b>
400006a7:	83 f8 0d             	cmp    $0xd,%eax
400006aa:	7f 34                	jg     400006e0 <user_readline+0x55>
400006ac:	83 f8 08             	cmp    $0x8,%eax
400006af:	74 1a                	je     400006cb <user_readline+0x40>
400006b1:	83 f8 0a             	cmp    $0xa,%eax
400006b4:	75 2a                	jne    400006e0 <user_readline+0x55>
400006b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006b9:	c6 00 00             	movb   $0x0,(%eax)
400006bc:	83 ec 0c             	sub    $0xc,%esp
400006bf:	6a 0a                	push   $0xa
400006c1:	e8 5f fa ff ff       	call   40000125 <user_print_char>
400006c6:	83 c4 10             	add    $0x10,%esp
400006c9:	eb 6e                	jmp    40000739 <user_readline+0xae>
400006cb:	8b 45 08             	mov    0x8(%ebp),%eax
400006ce:	0f b6 00             	movzbl (%eax),%eax
400006d1:	3c 08                	cmp    $0x8,%al
400006d3:	74 2e                	je     40000703 <user_readline+0x78>
400006d5:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
400006d9:	e8 a7 fa ff ff       	call   40000185 <user_backtrace>
400006de:	eb 23                	jmp    40000703 <user_readline+0x78>
400006e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006e3:	0f b6 00             	movzbl (%eax),%eax
400006e6:	84 c0                	test   %al,%al
400006e8:	74 19                	je     40000703 <user_readline+0x78>
400006ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006ed:	0f b6 00             	movzbl (%eax),%eax
400006f0:	0f be c0             	movsbl %al,%eax
400006f3:	83 ec 0c             	sub    $0xc,%esp
400006f6:	50                   	push   %eax
400006f7:	e8 29 fa ff ff       	call   40000125 <user_print_char>
400006fc:	83 c4 10             	add    $0x10,%esp
400006ff:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
40000703:	83 ec 04             	sub    $0x4,%esp
40000706:	6a 01                	push   $0x1
40000708:	ff 75 f4             	pushl  -0xc(%ebp)
4000070b:	6a 00                	push   $0x0
4000070d:	e8 83 fa ff ff       	call   40000195 <read>
40000712:	83 c4 10             	add    $0x10,%esp
40000715:	83 f8 ff             	cmp    $0xffffffff,%eax
40000718:	74 0f                	je     40000729 <user_readline+0x9e>
4000071a:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000071d:	2b 45 08             	sub    0x8(%ebp),%eax
40000720:	39 45 0c             	cmp    %eax,0xc(%ebp)
40000723:	0f 8f 70 ff ff ff    	jg     40000699 <user_readline+0xe>
40000729:	83 ec 0c             	sub    $0xc,%esp
4000072c:	68 8c 17 00 40       	push   $0x4000178c
40000731:	e8 36 fc ff ff       	call   4000036c <printf>
40000736:	83 c4 10             	add    $0x10,%esp
40000739:	c9                   	leave  
4000073a:	c3                   	ret    

4000073b <cmd_parse>:
4000073b:	55                   	push   %ebp
4000073c:	89 e5                	mov    %esp,%ebp
4000073e:	83 ec 14             	sub    $0x14,%esp
40000741:	8b 45 10             	mov    0x10(%ebp),%eax
40000744:	88 45 ec             	mov    %al,-0x14(%ebp)
40000747:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
4000074e:	eb 19                	jmp    40000769 <cmd_parse+0x2e>
40000750:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000753:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
4000075a:	8b 45 0c             	mov    0xc(%ebp),%eax
4000075d:	01 d0                	add    %edx,%eax
4000075f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
40000765:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
40000769:	83 7d fc 0f          	cmpl   $0xf,-0x4(%ebp)
4000076d:	7e e1                	jle    40000750 <cmd_parse+0x15>
4000076f:	8b 45 08             	mov    0x8(%ebp),%eax
40000772:	89 45 f8             	mov    %eax,-0x8(%ebp)
40000775:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000077c:	eb 6f                	jmp    400007ed <cmd_parse+0xb2>
4000077e:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
40000782:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000785:	0f b6 00             	movzbl (%eax),%eax
40000788:	38 45 ec             	cmp    %al,-0x14(%ebp)
4000078b:	74 f1                	je     4000077e <cmd_parse+0x43>
4000078d:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000790:	0f b6 00             	movzbl (%eax),%eax
40000793:	84 c0                	test   %al,%al
40000795:	74 62                	je     400007f9 <cmd_parse+0xbe>
40000797:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000079a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
400007a1:	8b 45 0c             	mov    0xc(%ebp),%eax
400007a4:	01 c2                	add    %eax,%edx
400007a6:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007a9:	89 02                	mov    %eax,(%edx)
400007ab:	eb 04                	jmp    400007b1 <cmd_parse+0x76>
400007ad:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
400007b1:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007b4:	0f b6 00             	movzbl (%eax),%eax
400007b7:	84 c0                	test   %al,%al
400007b9:	74 0b                	je     400007c6 <cmd_parse+0x8b>
400007bb:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007be:	0f b6 00             	movzbl (%eax),%eax
400007c1:	38 45 ec             	cmp    %al,-0x14(%ebp)
400007c4:	75 e7                	jne    400007ad <cmd_parse+0x72>
400007c6:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007c9:	0f b6 00             	movzbl (%eax),%eax
400007cc:	84 c0                	test   %al,%al
400007ce:	74 0c                	je     400007dc <cmd_parse+0xa1>
400007d0:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007d3:	8d 50 01             	lea    0x1(%eax),%edx
400007d6:	89 55 f8             	mov    %edx,-0x8(%ebp)
400007d9:	c6 00 00             	movb   $0x0,(%eax)
400007dc:	83 7d f4 10          	cmpl   $0x10,-0xc(%ebp)
400007e0:	7e 07                	jle    400007e9 <cmd_parse+0xae>
400007e2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
400007e7:	eb 14                	jmp    400007fd <cmd_parse+0xc2>
400007e9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
400007ed:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007f0:	0f b6 00             	movzbl (%eax),%eax
400007f3:	84 c0                	test   %al,%al
400007f5:	75 8b                	jne    40000782 <cmd_parse+0x47>
400007f7:	eb 01                	jmp    400007fa <cmd_parse+0xbf>
400007f9:	90                   	nop
400007fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
400007fd:	c9                   	leave  
400007fe:	c3                   	ret    

400007ff <my_shell>:
400007ff:	55                   	push   %ebp
40000800:	89 e5                	mov    %esp,%ebp
40000802:	83 ec 28             	sub    $0x28,%esp
40000805:	c6 05 20 1b 00 40 2f 	movb   $0x2f,0x40001b20
4000080c:	c6 05 21 1b 00 40 00 	movb   $0x0,0x40001b21
40000813:	e8 55 fe ff ff       	call   4000066d <print_prompt>
40000818:	83 ec 04             	sub    $0x4,%esp
4000081b:	68 00 02 00 00       	push   $0x200
40000820:	6a 00                	push   $0x0
40000822:	68 20 1d 00 40       	push   $0x40001d20
40000827:	e8 5b 03 00 00       	call   40000b87 <user_memset>
4000082c:	83 c4 10             	add    $0x10,%esp
4000082f:	83 ec 04             	sub    $0x4,%esp
40000832:	68 80 00 00 00       	push   $0x80
40000837:	6a 00                	push   $0x0
40000839:	68 20 1f 00 40       	push   $0x40001f20
4000083e:	e8 44 03 00 00       	call   40000b87 <user_memset>
40000843:	83 c4 10             	add    $0x10,%esp
40000846:	83 ec 08             	sub    $0x8,%esp
40000849:	68 80 00 00 00       	push   $0x80
4000084e:	68 20 1f 00 40       	push   $0x40001f20
40000853:	e8 33 fe ff ff       	call   4000068b <user_readline>
40000858:	83 c4 10             	add    $0x10,%esp
4000085b:	0f b6 05 20 1f 00 40 	movzbl 0x40001f20,%eax
40000862:	84 c0                	test   %al,%al
40000864:	0f 84 eb 02 00 00    	je     40000b55 <my_shell+0x356>
4000086a:	c7 05 1c 16 00 40 ff 	movl   $0xffffffff,0x4000161c
40000871:	ff ff ff 
40000874:	83 ec 04             	sub    $0x4,%esp
40000877:	6a 20                	push   $0x20
40000879:	68 a0 1f 00 40       	push   $0x40001fa0
4000087e:	68 20 1f 00 40       	push   $0x40001f20
40000883:	e8 b3 fe ff ff       	call   4000073b <cmd_parse>
40000888:	83 c4 10             	add    $0x10,%esp
4000088b:	a3 1c 16 00 40       	mov    %eax,0x4000161c
40000890:	a1 1c 16 00 40       	mov    0x4000161c,%eax
40000895:	83 f8 ff             	cmp    $0xffffffff,%eax
40000898:	75 17                	jne    400008b1 <my_shell+0xb2>
4000089a:	83 ec 08             	sub    $0x8,%esp
4000089d:	6a 10                	push   $0x10
4000089f:	68 d4 17 00 40       	push   $0x400017d4
400008a4:	e8 c3 fa ff ff       	call   4000036c <printf>
400008a9:	83 c4 10             	add    $0x10,%esp
400008ac:	e9 a5 02 00 00       	jmp    40000b56 <my_shell+0x357>
400008b1:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
400008b6:	83 ec 08             	sub    $0x8,%esp
400008b9:	50                   	push   %eax
400008ba:	68 f0 17 00 40       	push   $0x400017f0
400008bf:	e8 66 03 00 00       	call   40000c2a <user_strcmp>
400008c4:	83 c4 10             	add    $0x10,%esp
400008c7:	85 c0                	test   %eax,%eax
400008c9:	75 1b                	jne    400008e6 <my_shell+0xe7>
400008cb:	a1 1c 16 00 40       	mov    0x4000161c,%eax
400008d0:	83 ec 08             	sub    $0x8,%esp
400008d3:	68 a0 1f 00 40       	push   $0x40001fa0
400008d8:	50                   	push   %eax
400008d9:	e8 9e 07 00 00       	call   4000107c <buildin_ls>
400008de:	83 c4 10             	add    $0x10,%esp
400008e1:	e9 49 02 00 00       	jmp    40000b2f <my_shell+0x330>
400008e6:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
400008eb:	83 ec 08             	sub    $0x8,%esp
400008ee:	50                   	push   %eax
400008ef:	68 f3 17 00 40       	push   $0x400017f3
400008f4:	e8 31 03 00 00       	call   40000c2a <user_strcmp>
400008f9:	83 c4 10             	add    $0x10,%esp
400008fc:	85 c0                	test   %eax,%eax
400008fe:	75 4f                	jne    4000094f <my_shell+0x150>
40000900:	a1 1c 16 00 40       	mov    0x4000161c,%eax
40000905:	83 ec 08             	sub    $0x8,%esp
40000908:	68 a0 1f 00 40       	push   $0x40001fa0
4000090d:	50                   	push   %eax
4000090e:	e8 df 06 00 00       	call   40000ff2 <buildin_cd>
40000913:	83 c4 10             	add    $0x10,%esp
40000916:	85 c0                	test   %eax,%eax
40000918:	0f 84 11 02 00 00    	je     40000b2f <my_shell+0x330>
4000091e:	83 ec 04             	sub    $0x4,%esp
40000921:	68 00 02 00 00       	push   $0x200
40000926:	6a 00                	push   $0x0
40000928:	68 20 1b 00 40       	push   $0x40001b20
4000092d:	e8 55 02 00 00       	call   40000b87 <user_memset>
40000932:	83 c4 10             	add    $0x10,%esp
40000935:	83 ec 08             	sub    $0x8,%esp
40000938:	68 20 1d 00 40       	push   $0x40001d20
4000093d:	68 20 1b 00 40       	push   $0x40001b20
40000942:	e8 b0 03 00 00       	call   40000cf7 <user_strcpy>
40000947:	83 c4 10             	add    $0x10,%esp
4000094a:	e9 e0 01 00 00       	jmp    40000b2f <my_shell+0x330>
4000094f:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
40000954:	83 ec 08             	sub    $0x8,%esp
40000957:	50                   	push   %eax
40000958:	68 f6 17 00 40       	push   $0x400017f6
4000095d:	e8 c8 02 00 00       	call   40000c2a <user_strcmp>
40000962:	83 c4 10             	add    $0x10,%esp
40000965:	85 c0                	test   %eax,%eax
40000967:	75 1b                	jne    40000984 <my_shell+0x185>
40000969:	a1 1c 16 00 40       	mov    0x4000161c,%eax
4000096e:	83 ec 08             	sub    $0x8,%esp
40000971:	68 a0 1f 00 40       	push   $0x40001fa0
40000976:	50                   	push   %eax
40000977:	e8 c5 0a 00 00       	call   40001441 <buildin_ps>
4000097c:	83 c4 10             	add    $0x10,%esp
4000097f:	e9 ab 01 00 00       	jmp    40000b2f <my_shell+0x330>
40000984:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
40000989:	83 ec 08             	sub    $0x8,%esp
4000098c:	50                   	push   %eax
4000098d:	68 f9 17 00 40       	push   $0x400017f9
40000992:	e8 93 02 00 00       	call   40000c2a <user_strcmp>
40000997:	83 c4 10             	add    $0x10,%esp
4000099a:	85 c0                	test   %eax,%eax
4000099c:	75 1b                	jne    400009b9 <my_shell+0x1ba>
4000099e:	a1 1c 16 00 40       	mov    0x4000161c,%eax
400009a3:	83 ec 08             	sub    $0x8,%esp
400009a6:	68 a0 1f 00 40       	push   $0x40001fa0
400009ab:	50                   	push   %eax
400009ac:	e8 e1 05 00 00       	call   40000f92 <buildin_pwd>
400009b1:	83 c4 10             	add    $0x10,%esp
400009b4:	e9 76 01 00 00       	jmp    40000b2f <my_shell+0x330>
400009b9:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
400009be:	83 ec 08             	sub    $0x8,%esp
400009c1:	50                   	push   %eax
400009c2:	68 fd 17 00 40       	push   $0x400017fd
400009c7:	e8 5e 02 00 00       	call   40000c2a <user_strcmp>
400009cc:	83 c4 10             	add    $0x10,%esp
400009cf:	85 c0                	test   %eax,%eax
400009d1:	75 1b                	jne    400009ee <my_shell+0x1ef>
400009d3:	a1 1c 16 00 40       	mov    0x4000161c,%eax
400009d8:	83 ec 08             	sub    $0x8,%esp
400009db:	68 a0 1f 00 40       	push   $0x40001fa0
400009e0:	50                   	push   %eax
400009e1:	e8 80 0a 00 00       	call   40001466 <buildin_mkdir>
400009e6:	83 c4 10             	add    $0x10,%esp
400009e9:	e9 41 01 00 00       	jmp    40000b2f <my_shell+0x330>
400009ee:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
400009f3:	83 ec 08             	sub    $0x8,%esp
400009f6:	50                   	push   %eax
400009f7:	68 03 18 00 40       	push   $0x40001803
400009fc:	e8 29 02 00 00       	call   40000c2a <user_strcmp>
40000a01:	83 c4 10             	add    $0x10,%esp
40000a04:	85 c0                	test   %eax,%eax
40000a06:	75 1b                	jne    40000a23 <my_shell+0x224>
40000a08:	a1 1c 16 00 40       	mov    0x4000161c,%eax
40000a0d:	83 ec 08             	sub    $0x8,%esp
40000a10:	68 a0 1f 00 40       	push   $0x40001fa0
40000a15:	50                   	push   %eax
40000a16:	e8 dd 0a 00 00       	call   400014f8 <buildin_rmdir>
40000a1b:	83 c4 10             	add    $0x10,%esp
40000a1e:	e9 0c 01 00 00       	jmp    40000b2f <my_shell+0x330>
40000a23:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
40000a28:	83 ec 08             	sub    $0x8,%esp
40000a2b:	50                   	push   %eax
40000a2c:	68 09 18 00 40       	push   $0x40001809
40000a31:	e8 f4 01 00 00       	call   40000c2a <user_strcmp>
40000a36:	83 c4 10             	add    $0x10,%esp
40000a39:	85 c0                	test   %eax,%eax
40000a3b:	75 1b                	jne    40000a58 <my_shell+0x259>
40000a3d:	a1 1c 16 00 40       	mov    0x4000161c,%eax
40000a42:	83 ec 08             	sub    $0x8,%esp
40000a45:	68 a0 1f 00 40       	push   $0x40001fa0
40000a4a:	50                   	push   %eax
40000a4b:	e8 3a 0b 00 00       	call   4000158a <buildin_rm>
40000a50:	83 c4 10             	add    $0x10,%esp
40000a53:	e9 d7 00 00 00       	jmp    40000b2f <my_shell+0x330>
40000a58:	e8 af f8 ff ff       	call   4000030c <fork>
40000a5d:	89 45 f0             	mov    %eax,-0x10(%ebp)
40000a60:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
40000a64:	74 44                	je     40000aaa <my_shell+0x2ab>
40000a66:	83 ec 0c             	sub    $0xc,%esp
40000a69:	8d 45 e8             	lea    -0x18(%ebp),%eax
40000a6c:	50                   	push   %eax
40000a6d:	e8 d6 f8 ff ff       	call   40000348 <wait>
40000a72:	83 c4 10             	add    $0x10,%esp
40000a75:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000a78:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
40000a7c:	75 10                	jne    40000a8e <my_shell+0x28f>
40000a7e:	83 ec 0c             	sub    $0xc,%esp
40000a81:	68 0c 18 00 40       	push   $0x4000180c
40000a86:	e8 e1 f8 ff ff       	call   4000036c <printf>
40000a8b:	83 c4 10             	add    $0x10,%esp
40000a8e:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000a91:	83 ec 04             	sub    $0x4,%esp
40000a94:	50                   	push   %eax
40000a95:	ff 75 ec             	pushl  -0x14(%ebp)
40000a98:	68 14 18 00 40       	push   $0x40001814
40000a9d:	e8 ca f8 ff ff       	call   4000036c <printf>
40000aa2:	83 c4 10             	add    $0x10,%esp
40000aa5:	e9 85 00 00 00       	jmp    40000b2f <my_shell+0x330>
40000aaa:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
40000aaf:	83 ec 08             	sub    $0x8,%esp
40000ab2:	68 20 1d 00 40       	push   $0x40001d20
40000ab7:	50                   	push   %eax
40000ab8:	e8 12 04 00 00       	call   40000ecf <make_clear_abs_path>
40000abd:	83 c4 10             	add    $0x10,%esp
40000ac0:	c7 05 a0 1f 00 40 20 	movl   $0x40001d20,0x40001fa0
40000ac7:	1d 00 40 
40000aca:	83 ec 04             	sub    $0x4,%esp
40000acd:	6a 0c                	push   $0xc
40000acf:	6a 00                	push   $0x0
40000ad1:	8d 45 dc             	lea    -0x24(%ebp),%eax
40000ad4:	50                   	push   %eax
40000ad5:	e8 ad 00 00 00       	call   40000b87 <user_memset>
40000ada:	83 c4 10             	add    $0x10,%esp
40000add:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
40000ae2:	83 ec 08             	sub    $0x8,%esp
40000ae5:	8d 55 dc             	lea    -0x24(%ebp),%edx
40000ae8:	52                   	push   %edx
40000ae9:	50                   	push   %eax
40000aea:	e8 9b f7 ff ff       	call   4000028a <stat>
40000aef:	83 c4 10             	add    $0x10,%esp
40000af2:	83 f8 ff             	cmp    $0xffffffff,%eax
40000af5:	75 18                	jne    40000b0f <my_shell+0x310>
40000af7:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
40000afc:	83 ec 08             	sub    $0x8,%esp
40000aff:	50                   	push   %eax
40000b00:	68 38 18 00 40       	push   $0x40001838
40000b05:	e8 62 f8 ff ff       	call   4000036c <printf>
40000b0a:	83 c4 10             	add    $0x10,%esp
40000b0d:	eb 16                	jmp    40000b25 <my_shell+0x326>
40000b0f:	a1 a0 1f 00 40       	mov    0x40001fa0,%eax
40000b14:	83 ec 08             	sub    $0x8,%esp
40000b17:	68 a0 1f 00 40       	push   $0x40001fa0
40000b1c:	50                   	push   %eax
40000b1d:	e8 11 f8 ff ff       	call   40000333 <exec>
40000b22:	83 c4 10             	add    $0x10,%esp
40000b25:	83 ec 0c             	sub    $0xc,%esp
40000b28:	6a ff                	push   $0xffffffff
40000b2a:	e8 2b f8 ff ff       	call   4000035a <exit>
40000b2f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
40000b36:	eb 12                	jmp    40000b4a <my_shell+0x34b>
40000b38:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000b3b:	c7 04 85 a0 1f 00 40 	movl   $0x0,0x40001fa0(,%eax,4)
40000b42:	00 00 00 00 
40000b46:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
40000b4a:	83 7d f4 0f          	cmpl   $0xf,-0xc(%ebp)
40000b4e:	7e e8                	jle    40000b38 <my_shell+0x339>
40000b50:	e9 be fc ff ff       	jmp    40000813 <my_shell+0x14>
40000b55:	90                   	nop
40000b56:	e9 b8 fc ff ff       	jmp    40000813 <my_shell+0x14>

40000b5b <__memset>:
40000b5b:	55                   	push   %ebp
40000b5c:	89 e5                	mov    %esp,%ebp
40000b5e:	57                   	push   %edi
40000b5f:	83 ec 14             	sub    $0x14,%esp
40000b62:	8b 45 0c             	mov    0xc(%ebp),%eax
40000b65:	88 45 e8             	mov    %al,-0x18(%ebp)
40000b68:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000b6b:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
40000b6f:	8b 55 08             	mov    0x8(%ebp),%edx
40000b72:	89 d7                	mov    %edx,%edi
40000b74:	f3 aa                	rep stos %al,%es:(%edi)
40000b76:	89 fa                	mov    %edi,%edx
40000b78:	89 4d f8             	mov    %ecx,-0x8(%ebp)
40000b7b:	89 55 f4             	mov    %edx,-0xc(%ebp)
40000b7e:	8b 45 08             	mov    0x8(%ebp),%eax
40000b81:	83 c4 14             	add    $0x14,%esp
40000b84:	5f                   	pop    %edi
40000b85:	5d                   	pop    %ebp
40000b86:	c3                   	ret    

40000b87 <user_memset>:
40000b87:	55                   	push   %ebp
40000b88:	89 e5                	mov    %esp,%ebp
40000b8a:	83 ec 04             	sub    $0x4,%esp
40000b8d:	8b 45 0c             	mov    0xc(%ebp),%eax
40000b90:	88 45 fc             	mov    %al,-0x4(%ebp)
40000b93:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
40000b97:	ff 75 10             	pushl  0x10(%ebp)
40000b9a:	50                   	push   %eax
40000b9b:	ff 75 08             	pushl  0x8(%ebp)
40000b9e:	e8 b8 ff ff ff       	call   40000b5b <__memset>
40000ba3:	83 c4 0c             	add    $0xc,%esp
40000ba6:	c9                   	leave  
40000ba7:	c3                   	ret    

40000ba8 <user_strcat>:
40000ba8:	55                   	push   %ebp
40000ba9:	89 e5                	mov    %esp,%ebp
40000bab:	83 ec 10             	sub    $0x10,%esp
40000bae:	8b 45 08             	mov    0x8(%ebp),%eax
40000bb1:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000bb4:	90                   	nop
40000bb5:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000bb8:	8d 50 01             	lea    0x1(%eax),%edx
40000bbb:	89 55 fc             	mov    %edx,-0x4(%ebp)
40000bbe:	0f b6 00             	movzbl (%eax),%eax
40000bc1:	84 c0                	test   %al,%al
40000bc3:	75 f0                	jne    40000bb5 <user_strcat+0xd>
40000bc5:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
40000bc9:	90                   	nop
40000bca:	8b 55 0c             	mov    0xc(%ebp),%edx
40000bcd:	8d 42 01             	lea    0x1(%edx),%eax
40000bd0:	89 45 0c             	mov    %eax,0xc(%ebp)
40000bd3:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000bd6:	8d 48 01             	lea    0x1(%eax),%ecx
40000bd9:	89 4d fc             	mov    %ecx,-0x4(%ebp)
40000bdc:	0f b6 12             	movzbl (%edx),%edx
40000bdf:	88 10                	mov    %dl,(%eax)
40000be1:	0f b6 00             	movzbl (%eax),%eax
40000be4:	84 c0                	test   %al,%al
40000be6:	75 e2                	jne    40000bca <user_strcat+0x22>
40000be8:	8b 45 08             	mov    0x8(%ebp),%eax
40000beb:	c9                   	leave  
40000bec:	c3                   	ret    

40000bed <__strcmp>:
40000bed:	55                   	push   %ebp
40000bee:	89 e5                	mov    %esp,%ebp
40000bf0:	57                   	push   %edi
40000bf1:	56                   	push   %esi
40000bf2:	83 ec 10             	sub    $0x10,%esp
40000bf5:	8b 55 08             	mov    0x8(%ebp),%edx
40000bf8:	8b 45 0c             	mov    0xc(%ebp),%eax
40000bfb:	89 d1                	mov    %edx,%ecx
40000bfd:	89 c2                	mov    %eax,%edx
40000bff:	89 ce                	mov    %ecx,%esi
40000c01:	89 d7                	mov    %edx,%edi
40000c03:	ac                   	lods   %ds:(%esi),%al
40000c04:	ae                   	scas   %es:(%edi),%al
40000c05:	75 08                	jne    40000c0f <__strcmp+0x22>
40000c07:	84 c0                	test   %al,%al
40000c09:	75 f8                	jne    40000c03 <__strcmp+0x16>
40000c0b:	31 c0                	xor    %eax,%eax
40000c0d:	eb 04                	jmp    40000c13 <__strcmp+0x26>
40000c0f:	19 c0                	sbb    %eax,%eax
40000c11:	0c 01                	or     $0x1,%al
40000c13:	89 fa                	mov    %edi,%edx
40000c15:	89 f1                	mov    %esi,%ecx
40000c17:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000c1a:	89 4d f0             	mov    %ecx,-0x10(%ebp)
40000c1d:	89 55 ec             	mov    %edx,-0x14(%ebp)
40000c20:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000c23:	83 c4 10             	add    $0x10,%esp
40000c26:	5e                   	pop    %esi
40000c27:	5f                   	pop    %edi
40000c28:	5d                   	pop    %ebp
40000c29:	c3                   	ret    

40000c2a <user_strcmp>:
40000c2a:	55                   	push   %ebp
40000c2b:	89 e5                	mov    %esp,%ebp
40000c2d:	ff 75 0c             	pushl  0xc(%ebp)
40000c30:	ff 75 08             	pushl  0x8(%ebp)
40000c33:	e8 b5 ff ff ff       	call   40000bed <__strcmp>
40000c38:	83 c4 08             	add    $0x8,%esp
40000c3b:	c9                   	leave  
40000c3c:	c3                   	ret    

40000c3d <user_strrchr>:
40000c3d:	55                   	push   %ebp
40000c3e:	89 e5                	mov    %esp,%ebp
40000c40:	83 ec 14             	sub    $0x14,%esp
40000c43:	8b 45 0c             	mov    0xc(%ebp),%eax
40000c46:	88 45 ec             	mov    %al,-0x14(%ebp)
40000c49:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000c50:	eb 1b                	jmp    40000c6d <user_strrchr+0x30>
40000c52:	8b 45 08             	mov    0x8(%ebp),%eax
40000c55:	0f b6 00             	movzbl (%eax),%eax
40000c58:	0f be d0             	movsbl %al,%edx
40000c5b:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
40000c5f:	39 c2                	cmp    %eax,%edx
40000c61:	75 06                	jne    40000c69 <user_strrchr+0x2c>
40000c63:	8b 45 08             	mov    0x8(%ebp),%eax
40000c66:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000c69:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000c6d:	8b 45 08             	mov    0x8(%ebp),%eax
40000c70:	0f b6 00             	movzbl (%eax),%eax
40000c73:	84 c0                	test   %al,%al
40000c75:	75 db                	jne    40000c52 <user_strrchr+0x15>
40000c77:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000c7a:	c9                   	leave  
40000c7b:	c3                   	ret    

40000c7c <user_strlen>:
40000c7c:	55                   	push   %ebp
40000c7d:	89 e5                	mov    %esp,%ebp
40000c7f:	83 ec 10             	sub    $0x10,%esp
40000c82:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000c89:	eb 04                	jmp    40000c8f <user_strlen+0x13>
40000c8b:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
40000c8f:	8b 45 08             	mov    0x8(%ebp),%eax
40000c92:	8d 50 01             	lea    0x1(%eax),%edx
40000c95:	89 55 08             	mov    %edx,0x8(%ebp)
40000c98:	0f b6 00             	movzbl (%eax),%eax
40000c9b:	84 c0                	test   %al,%al
40000c9d:	75 ec                	jne    40000c8b <user_strlen+0xf>
40000c9f:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000ca2:	c9                   	leave  
40000ca3:	c3                   	ret    

40000ca4 <__memcpy>:
40000ca4:	55                   	push   %ebp
40000ca5:	89 e5                	mov    %esp,%ebp
40000ca7:	57                   	push   %edi
40000ca8:	56                   	push   %esi
40000ca9:	83 ec 10             	sub    $0x10,%esp
40000cac:	8b 45 10             	mov    0x10(%ebp),%eax
40000caf:	c1 e8 02             	shr    $0x2,%eax
40000cb2:	89 c1                	mov    %eax,%ecx
40000cb4:	8b 55 08             	mov    0x8(%ebp),%edx
40000cb7:	8b 45 0c             	mov    0xc(%ebp),%eax
40000cba:	89 d7                	mov    %edx,%edi
40000cbc:	89 c6                	mov    %eax,%esi
40000cbe:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
40000cc0:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000cc3:	83 e1 03             	and    $0x3,%ecx
40000cc6:	74 02                	je     40000cca <__memcpy+0x26>
40000cc8:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
40000cca:	89 f0                	mov    %esi,%eax
40000ccc:	89 fa                	mov    %edi,%edx
40000cce:	89 4d f4             	mov    %ecx,-0xc(%ebp)
40000cd1:	89 55 f0             	mov    %edx,-0x10(%ebp)
40000cd4:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000cd7:	8b 45 08             	mov    0x8(%ebp),%eax
40000cda:	83 c4 10             	add    $0x10,%esp
40000cdd:	5e                   	pop    %esi
40000cde:	5f                   	pop    %edi
40000cdf:	5d                   	pop    %ebp
40000ce0:	c3                   	ret    

40000ce1 <user_memcpy>:
40000ce1:	55                   	push   %ebp
40000ce2:	89 e5                	mov    %esp,%ebp
40000ce4:	ff 75 10             	pushl  0x10(%ebp)
40000ce7:	ff 75 0c             	pushl  0xc(%ebp)
40000cea:	ff 75 08             	pushl  0x8(%ebp)
40000ced:	e8 b2 ff ff ff       	call   40000ca4 <__memcpy>
40000cf2:	83 c4 0c             	add    $0xc,%esp
40000cf5:	c9                   	leave  
40000cf6:	c3                   	ret    

40000cf7 <user_strcpy>:
40000cf7:	55                   	push   %ebp
40000cf8:	89 e5                	mov    %esp,%ebp
40000cfa:	83 ec 10             	sub    $0x10,%esp
40000cfd:	8b 45 08             	mov    0x8(%ebp),%eax
40000d00:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000d03:	90                   	nop
40000d04:	8b 55 0c             	mov    0xc(%ebp),%edx
40000d07:	8d 42 01             	lea    0x1(%edx),%eax
40000d0a:	89 45 0c             	mov    %eax,0xc(%ebp)
40000d0d:	8b 45 08             	mov    0x8(%ebp),%eax
40000d10:	8d 48 01             	lea    0x1(%eax),%ecx
40000d13:	89 4d 08             	mov    %ecx,0x8(%ebp)
40000d16:	0f b6 12             	movzbl (%edx),%edx
40000d19:	88 10                	mov    %dl,(%eax)
40000d1b:	0f b6 00             	movzbl (%eax),%eax
40000d1e:	84 c0                	test   %al,%al
40000d20:	75 e2                	jne    40000d04 <user_strcpy+0xd>
40000d22:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000d25:	c9                   	leave  
40000d26:	c3                   	ret    

40000d27 <path_parse>:
40000d27:	55                   	push   %ebp
40000d28:	89 e5                	mov    %esp,%ebp
40000d2a:	8b 45 08             	mov    0x8(%ebp),%eax
40000d2d:	0f b6 00             	movzbl (%eax),%eax
40000d30:	3c 2f                	cmp    $0x2f,%al
40000d32:	75 27                	jne    40000d5b <path_parse+0x34>
40000d34:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000d38:	8b 45 08             	mov    0x8(%ebp),%eax
40000d3b:	0f b6 00             	movzbl (%eax),%eax
40000d3e:	3c 2f                	cmp    $0x2f,%al
40000d40:	74 f2                	je     40000d34 <path_parse+0xd>
40000d42:	eb 17                	jmp    40000d5b <path_parse+0x34>
40000d44:	8b 55 08             	mov    0x8(%ebp),%edx
40000d47:	8d 42 01             	lea    0x1(%edx),%eax
40000d4a:	89 45 08             	mov    %eax,0x8(%ebp)
40000d4d:	8b 45 0c             	mov    0xc(%ebp),%eax
40000d50:	8d 48 01             	lea    0x1(%eax),%ecx
40000d53:	89 4d 0c             	mov    %ecx,0xc(%ebp)
40000d56:	0f b6 12             	movzbl (%edx),%edx
40000d59:	88 10                	mov    %dl,(%eax)
40000d5b:	8b 45 08             	mov    0x8(%ebp),%eax
40000d5e:	0f b6 00             	movzbl (%eax),%eax
40000d61:	3c 2f                	cmp    $0x2f,%al
40000d63:	74 0a                	je     40000d6f <path_parse+0x48>
40000d65:	8b 45 08             	mov    0x8(%ebp),%eax
40000d68:	0f b6 00             	movzbl (%eax),%eax
40000d6b:	84 c0                	test   %al,%al
40000d6d:	75 d5                	jne    40000d44 <path_parse+0x1d>
40000d6f:	8b 45 08             	mov    0x8(%ebp),%eax
40000d72:	0f b6 00             	movzbl (%eax),%eax
40000d75:	84 c0                	test   %al,%al
40000d77:	75 07                	jne    40000d80 <path_parse+0x59>
40000d79:	b8 00 00 00 00       	mov    $0x0,%eax
40000d7e:	eb 03                	jmp    40000d83 <path_parse+0x5c>
40000d80:	8b 45 08             	mov    0x8(%ebp),%eax
40000d83:	5d                   	pop    %ebp
40000d84:	c3                   	ret    

40000d85 <wash_path>:
40000d85:	55                   	push   %ebp
40000d86:	89 e5                	mov    %esp,%ebp
40000d88:	83 ec 28             	sub    $0x28,%esp
40000d8b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
40000d92:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
40000d99:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
40000da0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
40000da7:	8b 45 08             	mov    0x8(%ebp),%eax
40000daa:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000dad:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000db0:	50                   	push   %eax
40000db1:	ff 75 f4             	pushl  -0xc(%ebp)
40000db4:	e8 6e ff ff ff       	call   40000d27 <path_parse>
40000db9:	83 c4 08             	add    $0x8,%esp
40000dbc:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000dbf:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000dc3:	84 c0                	test   %al,%al
40000dc5:	75 14                	jne    40000ddb <wash_path+0x56>
40000dc7:	8b 45 0c             	mov    0xc(%ebp),%eax
40000dca:	c6 00 2f             	movb   $0x2f,(%eax)
40000dcd:	8b 45 0c             	mov    0xc(%ebp),%eax
40000dd0:	83 c0 01             	add    $0x1,%eax
40000dd3:	c6 00 00             	movb   $0x0,(%eax)
40000dd6:	e9 f2 00 00 00       	jmp    40000ecd <wash_path+0x148>
40000ddb:	8b 45 0c             	mov    0xc(%ebp),%eax
40000dde:	c6 00 00             	movb   $0x0,(%eax)
40000de1:	83 ec 08             	sub    $0x8,%esp
40000de4:	68 70 18 00 40       	push   $0x40001870
40000de9:	ff 75 0c             	pushl  0xc(%ebp)
40000dec:	e8 b7 fd ff ff       	call   40000ba8 <user_strcat>
40000df1:	83 c4 10             	add    $0x10,%esp
40000df4:	e9 c8 00 00 00       	jmp    40000ec1 <wash_path+0x13c>
40000df9:	83 ec 08             	sub    $0x8,%esp
40000dfc:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000dff:	50                   	push   %eax
40000e00:	68 72 18 00 40       	push   $0x40001872
40000e05:	e8 20 fe ff ff       	call   40000c2a <user_strcmp>
40000e0a:	83 c4 10             	add    $0x10,%esp
40000e0d:	85 c0                	test   %eax,%eax
40000e0f:	75 2e                	jne    40000e3f <wash_path+0xba>
40000e11:	83 ec 08             	sub    $0x8,%esp
40000e14:	6a 2f                	push   $0x2f
40000e16:	ff 75 0c             	pushl  0xc(%ebp)
40000e19:	e8 1f fe ff ff       	call   40000c3d <user_strrchr>
40000e1e:	83 c4 10             	add    $0x10,%esp
40000e21:	89 45 f0             	mov    %eax,-0x10(%ebp)
40000e24:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000e27:	3b 45 0c             	cmp    0xc(%ebp),%eax
40000e2a:	74 08                	je     40000e34 <wash_path+0xaf>
40000e2c:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000e2f:	c6 00 00             	movb   $0x0,(%eax)
40000e32:	eb 5f                	jmp    40000e93 <wash_path+0x10e>
40000e34:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000e37:	83 c0 01             	add    $0x1,%eax
40000e3a:	c6 00 00             	movb   $0x0,(%eax)
40000e3d:	eb 54                	jmp    40000e93 <wash_path+0x10e>
40000e3f:	83 ec 08             	sub    $0x8,%esp
40000e42:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e45:	50                   	push   %eax
40000e46:	68 75 18 00 40       	push   $0x40001875
40000e4b:	e8 da fd ff ff       	call   40000c2a <user_strcmp>
40000e50:	83 c4 10             	add    $0x10,%esp
40000e53:	85 c0                	test   %eax,%eax
40000e55:	74 3c                	je     40000e93 <wash_path+0x10e>
40000e57:	83 ec 08             	sub    $0x8,%esp
40000e5a:	68 70 18 00 40       	push   $0x40001870
40000e5f:	ff 75 0c             	pushl  0xc(%ebp)
40000e62:	e8 c3 fd ff ff       	call   40000c2a <user_strcmp>
40000e67:	83 c4 10             	add    $0x10,%esp
40000e6a:	85 c0                	test   %eax,%eax
40000e6c:	74 13                	je     40000e81 <wash_path+0xfc>
40000e6e:	83 ec 08             	sub    $0x8,%esp
40000e71:	68 70 18 00 40       	push   $0x40001870
40000e76:	ff 75 0c             	pushl  0xc(%ebp)
40000e79:	e8 2a fd ff ff       	call   40000ba8 <user_strcat>
40000e7e:	83 c4 10             	add    $0x10,%esp
40000e81:	83 ec 08             	sub    $0x8,%esp
40000e84:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e87:	50                   	push   %eax
40000e88:	ff 75 0c             	pushl  0xc(%ebp)
40000e8b:	e8 18 fd ff ff       	call   40000ba8 <user_strcat>
40000e90:	83 c4 10             	add    $0x10,%esp
40000e93:	83 ec 04             	sub    $0x4,%esp
40000e96:	6a 10                	push   $0x10
40000e98:	6a 00                	push   $0x0
40000e9a:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e9d:	50                   	push   %eax
40000e9e:	e8 e4 fc ff ff       	call   40000b87 <user_memset>
40000ea3:	83 c4 10             	add    $0x10,%esp
40000ea6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
40000eaa:	74 15                	je     40000ec1 <wash_path+0x13c>
40000eac:	83 ec 08             	sub    $0x8,%esp
40000eaf:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000eb2:	50                   	push   %eax
40000eb3:	ff 75 f4             	pushl  -0xc(%ebp)
40000eb6:	e8 6c fe ff ff       	call   40000d27 <path_parse>
40000ebb:	83 c4 10             	add    $0x10,%esp
40000ebe:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000ec1:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000ec5:	84 c0                	test   %al,%al
40000ec7:	0f 85 2c ff ff ff    	jne    40000df9 <wash_path+0x74>
40000ecd:	c9                   	leave  
40000ece:	c3                   	ret    

40000ecf <make_clear_abs_path>:
40000ecf:	55                   	push   %ebp
40000ed0:	89 e5                	mov    %esp,%ebp
40000ed2:	57                   	push   %edi
40000ed3:	81 ec 04 02 00 00    	sub    $0x204,%esp
40000ed9:	c7 85 f8 fd ff ff 00 	movl   $0x0,-0x208(%ebp)
40000ee0:	00 00 00 
40000ee3:	8d 95 fc fd ff ff    	lea    -0x204(%ebp),%edx
40000ee9:	b8 00 00 00 00       	mov    $0x0,%eax
40000eee:	b9 7f 00 00 00       	mov    $0x7f,%ecx
40000ef3:	89 d7                	mov    %edx,%edi
40000ef5:	f3 ab                	rep stos %eax,%es:(%edi)
40000ef7:	8b 45 08             	mov    0x8(%ebp),%eax
40000efa:	0f b6 00             	movzbl (%eax),%eax
40000efd:	3c 2f                	cmp    $0x2f,%al
40000eff:	74 61                	je     40000f62 <make_clear_abs_path+0x93>
40000f01:	83 ec 04             	sub    $0x4,%esp
40000f04:	68 00 02 00 00       	push   $0x200
40000f09:	6a 00                	push   $0x0
40000f0b:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f11:	50                   	push   %eax
40000f12:	e8 70 fc ff ff       	call   40000b87 <user_memset>
40000f17:	83 c4 10             	add    $0x10,%esp
40000f1a:	83 ec 08             	sub    $0x8,%esp
40000f1d:	68 00 02 00 00       	push   $0x200
40000f22:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f28:	50                   	push   %eax
40000f29:	e8 35 f3 ff ff       	call   40000263 <getcwd>
40000f2e:	83 c4 10             	add    $0x10,%esp
40000f31:	85 c0                	test   %eax,%eax
40000f33:	74 2d                	je     40000f62 <make_clear_abs_path+0x93>
40000f35:	0f b6 85 f8 fd ff ff 	movzbl -0x208(%ebp),%eax
40000f3c:	3c 2f                	cmp    $0x2f,%al
40000f3e:	75 0b                	jne    40000f4b <make_clear_abs_path+0x7c>
40000f40:	0f b6 85 f9 fd ff ff 	movzbl -0x207(%ebp),%eax
40000f47:	84 c0                	test   %al,%al
40000f49:	74 17                	je     40000f62 <make_clear_abs_path+0x93>
40000f4b:	83 ec 08             	sub    $0x8,%esp
40000f4e:	68 70 18 00 40       	push   $0x40001870
40000f53:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f59:	50                   	push   %eax
40000f5a:	e8 49 fc ff ff       	call   40000ba8 <user_strcat>
40000f5f:	83 c4 10             	add    $0x10,%esp
40000f62:	83 ec 08             	sub    $0x8,%esp
40000f65:	ff 75 08             	pushl  0x8(%ebp)
40000f68:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f6e:	50                   	push   %eax
40000f6f:	e8 34 fc ff ff       	call   40000ba8 <user_strcat>
40000f74:	83 c4 10             	add    $0x10,%esp
40000f77:	83 ec 08             	sub    $0x8,%esp
40000f7a:	ff 75 0c             	pushl  0xc(%ebp)
40000f7d:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f83:	50                   	push   %eax
40000f84:	e8 fc fd ff ff       	call   40000d85 <wash_path>
40000f89:	83 c4 10             	add    $0x10,%esp
40000f8c:	90                   	nop
40000f8d:	8b 7d fc             	mov    -0x4(%ebp),%edi
40000f90:	c9                   	leave  
40000f91:	c3                   	ret    

40000f92 <buildin_pwd>:
40000f92:	55                   	push   %ebp
40000f93:	89 e5                	mov    %esp,%ebp
40000f95:	83 ec 08             	sub    $0x8,%esp
40000f98:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40000f9c:	74 12                	je     40000fb0 <buildin_pwd+0x1e>
40000f9e:	83 ec 0c             	sub    $0xc,%esp
40000fa1:	68 77 18 00 40       	push   $0x40001877
40000fa6:	e8 c1 f3 ff ff       	call   4000036c <printf>
40000fab:	83 c4 10             	add    $0x10,%esp
40000fae:	eb 40                	jmp    40000ff0 <buildin_pwd+0x5e>
40000fb0:	83 ec 08             	sub    $0x8,%esp
40000fb3:	68 00 02 00 00       	push   $0x200
40000fb8:	68 20 1d 00 40       	push   $0x40001d20
40000fbd:	e8 a1 f2 ff ff       	call   40000263 <getcwd>
40000fc2:	83 c4 10             	add    $0x10,%esp
40000fc5:	85 c0                	test   %eax,%eax
40000fc7:	74 17                	je     40000fe0 <buildin_pwd+0x4e>
40000fc9:	83 ec 08             	sub    $0x8,%esp
40000fcc:	68 20 1d 00 40       	push   $0x40001d20
40000fd1:	68 92 18 00 40       	push   $0x40001892
40000fd6:	e8 91 f3 ff ff       	call   4000036c <printf>
40000fdb:	83 c4 10             	add    $0x10,%esp
40000fde:	eb 10                	jmp    40000ff0 <buildin_pwd+0x5e>
40000fe0:	83 ec 0c             	sub    $0xc,%esp
40000fe3:	68 98 18 00 40       	push   $0x40001898
40000fe8:	e8 7f f3 ff ff       	call   4000036c <printf>
40000fed:	83 c4 10             	add    $0x10,%esp
40000ff0:	c9                   	leave  
40000ff1:	c3                   	ret    

40000ff2 <buildin_cd>:
40000ff2:	55                   	push   %ebp
40000ff3:	89 e5                	mov    %esp,%ebp
40000ff5:	83 ec 08             	sub    $0x8,%esp
40000ff8:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40000ffc:	7e 17                	jle    40001015 <buildin_cd+0x23>
40000ffe:	83 ec 0c             	sub    $0xc,%esp
40001001:	68 c1 18 00 40       	push   $0x400018c1
40001006:	e8 61 f3 ff ff       	call   4000036c <printf>
4000100b:	83 c4 10             	add    $0x10,%esp
4000100e:	b8 00 00 00 00       	mov    $0x0,%eax
40001013:	eb 65                	jmp    4000107a <buildin_cd+0x88>
40001015:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40001019:	75 10                	jne    4000102b <buildin_cd+0x39>
4000101b:	c6 05 20 1d 00 40 2f 	movb   $0x2f,0x40001d20
40001022:	c6 05 21 1d 00 40 00 	movb   $0x0,0x40001d21
40001029:	eb 19                	jmp    40001044 <buildin_cd+0x52>
4000102b:	8b 45 0c             	mov    0xc(%ebp),%eax
4000102e:	83 c0 04             	add    $0x4,%eax
40001031:	8b 00                	mov    (%eax),%eax
40001033:	83 ec 08             	sub    $0x8,%esp
40001036:	68 20 1d 00 40       	push   $0x40001d20
4000103b:	50                   	push   %eax
4000103c:	e8 8e fe ff ff       	call   40000ecf <make_clear_abs_path>
40001041:	83 c4 10             	add    $0x10,%esp
40001044:	83 ec 0c             	sub    $0xc,%esp
40001047:	68 20 1d 00 40       	push   $0x40001d20
4000104c:	e8 27 f2 ff ff       	call   40000278 <chdir>
40001051:	83 c4 10             	add    $0x10,%esp
40001054:	83 f8 ff             	cmp    $0xffffffff,%eax
40001057:	75 1c                	jne    40001075 <buildin_cd+0x83>
40001059:	83 ec 08             	sub    $0x8,%esp
4000105c:	68 20 1d 00 40       	push   $0x40001d20
40001061:	68 df 18 00 40       	push   $0x400018df
40001066:	e8 01 f3 ff ff       	call   4000036c <printf>
4000106b:	83 c4 10             	add    $0x10,%esp
4000106e:	b8 00 00 00 00       	mov    $0x0,%eax
40001073:	eb 05                	jmp    4000107a <buildin_cd+0x88>
40001075:	b8 20 1d 00 40       	mov    $0x40001d20,%eax
4000107a:	c9                   	leave  
4000107b:	c3                   	ret    

4000107c <buildin_ls>:
4000107c:	55                   	push   %ebp
4000107d:	89 e5                	mov    %esp,%ebp
4000107f:	57                   	push   %edi
40001080:	53                   	push   %ebx
40001081:	81 ec 30 02 00 00    	sub    $0x230,%esp
40001087:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000108e:	83 ec 04             	sub    $0x4,%esp
40001091:	6a 0c                	push   $0xc
40001093:	6a 00                	push   $0x0
40001095:	8d 45 c8             	lea    -0x38(%ebp),%eax
40001098:	50                   	push   %eax
40001099:	e8 e9 fa ff ff       	call   40000b87 <user_memset>
4000109e:	83 c4 10             	add    $0x10,%esp
400010a1:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
400010a5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
400010ac:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
400010b3:	e9 e9 00 00 00       	jmp    400011a1 <buildin_ls+0x125>
400010b8:	8b 45 e8             	mov    -0x18(%ebp),%eax
400010bb:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
400010c2:	8b 45 0c             	mov    0xc(%ebp),%eax
400010c5:	01 d0                	add    %edx,%eax
400010c7:	8b 00                	mov    (%eax),%eax
400010c9:	0f b6 00             	movzbl (%eax),%eax
400010cc:	3c 2d                	cmp    $0x2d,%al
400010ce:	0f 85 91 00 00 00    	jne    40001165 <buildin_ls+0xe9>
400010d4:	8b 45 e8             	mov    -0x18(%ebp),%eax
400010d7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
400010de:	8b 45 0c             	mov    0xc(%ebp),%eax
400010e1:	01 d0                	add    %edx,%eax
400010e3:	8b 00                	mov    (%eax),%eax
400010e5:	83 ec 08             	sub    $0x8,%esp
400010e8:	50                   	push   %eax
400010e9:	68 f9 18 00 40       	push   $0x400018f9
400010ee:	e8 37 fb ff ff       	call   40000c2a <user_strcmp>
400010f3:	83 c4 10             	add    $0x10,%esp
400010f6:	85 c0                	test   %eax,%eax
400010f8:	75 09                	jne    40001103 <buildin_ls+0x87>
400010fa:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
400010fe:	e9 9a 00 00 00       	jmp    4000119d <buildin_ls+0x121>
40001103:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001106:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
4000110d:	8b 45 0c             	mov    0xc(%ebp),%eax
40001110:	01 d0                	add    %edx,%eax
40001112:	8b 00                	mov    (%eax),%eax
40001114:	83 ec 08             	sub    $0x8,%esp
40001117:	50                   	push   %eax
40001118:	68 fc 18 00 40       	push   $0x400018fc
4000111d:	e8 08 fb ff ff       	call   40000c2a <user_strcmp>
40001122:	83 c4 10             	add    $0x10,%esp
40001125:	85 c0                	test   %eax,%eax
40001127:	75 15                	jne    4000113e <buildin_ls+0xc2>
40001129:	83 ec 0c             	sub    $0xc,%esp
4000112c:	68 00 19 00 40       	push   $0x40001900
40001131:	e8 36 f2 ff ff       	call   4000036c <printf>
40001136:	83 c4 10             	add    $0x10,%esp
40001139:	e9 fc 02 00 00       	jmp    4000143a <buildin_ls+0x3be>
4000113e:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001141:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40001148:	8b 45 0c             	mov    0xc(%ebp),%eax
4000114b:	01 d0                	add    %edx,%eax
4000114d:	8b 00                	mov    (%eax),%eax
4000114f:	83 ec 08             	sub    $0x8,%esp
40001152:	50                   	push   %eax
40001153:	68 70 19 00 40       	push   $0x40001970
40001158:	e8 0f f2 ff ff       	call   4000036c <printf>
4000115d:	83 c4 10             	add    $0x10,%esp
40001160:	e9 d5 02 00 00       	jmp    4000143a <buildin_ls+0x3be>
40001165:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
40001169:	75 1d                	jne    40001188 <buildin_ls+0x10c>
4000116b:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000116e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40001175:	8b 45 0c             	mov    0xc(%ebp),%eax
40001178:	01 d0                	add    %edx,%eax
4000117a:	8b 00                	mov    (%eax),%eax
4000117c:	89 45 f4             	mov    %eax,-0xc(%ebp)
4000117f:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
40001186:	eb 15                	jmp    4000119d <buildin_ls+0x121>
40001188:	83 ec 0c             	sub    $0xc,%esp
4000118b:	68 a9 19 00 40       	push   $0x400019a9
40001190:	e8 d7 f1 ff ff       	call   4000036c <printf>
40001195:	83 c4 10             	add    $0x10,%esp
40001198:	e9 9d 02 00 00       	jmp    4000143a <buildin_ls+0x3be>
4000119d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
400011a1:	8b 45 e8             	mov    -0x18(%ebp),%eax
400011a4:	3b 45 08             	cmp    0x8(%ebp),%eax
400011a7:	0f 8c 0b ff ff ff    	jl     400010b8 <buildin_ls+0x3c>
400011ad:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
400011b1:	75 37                	jne    400011ea <buildin_ls+0x16e>
400011b3:	83 ec 08             	sub    $0x8,%esp
400011b6:	68 00 02 00 00       	push   $0x200
400011bb:	68 20 1d 00 40       	push   $0x40001d20
400011c0:	e8 9e f0 ff ff       	call   40000263 <getcwd>
400011c5:	83 c4 10             	add    $0x10,%esp
400011c8:	85 c0                	test   %eax,%eax
400011ca:	74 09                	je     400011d5 <buildin_ls+0x159>
400011cc:	c7 45 f4 20 1d 00 40 	movl   $0x40001d20,-0xc(%ebp)
400011d3:	eb 2f                	jmp    40001204 <buildin_ls+0x188>
400011d5:	83 ec 0c             	sub    $0xc,%esp
400011d8:	68 c4 19 00 40       	push   $0x400019c4
400011dd:	e8 8a f1 ff ff       	call   4000036c <printf>
400011e2:	83 c4 10             	add    $0x10,%esp
400011e5:	e9 50 02 00 00       	jmp    4000143a <buildin_ls+0x3be>
400011ea:	83 ec 08             	sub    $0x8,%esp
400011ed:	68 20 1d 00 40       	push   $0x40001d20
400011f2:	ff 75 f4             	pushl  -0xc(%ebp)
400011f5:	e8 d5 fc ff ff       	call   40000ecf <make_clear_abs_path>
400011fa:	83 c4 10             	add    $0x10,%esp
400011fd:	c7 45 f4 20 1d 00 40 	movl   $0x40001d20,-0xc(%ebp)
40001204:	83 ec 08             	sub    $0x8,%esp
40001207:	8d 45 c8             	lea    -0x38(%ebp),%eax
4000120a:	50                   	push   %eax
4000120b:	ff 75 f4             	pushl  -0xc(%ebp)
4000120e:	e8 77 f0 ff ff       	call   4000028a <stat>
40001213:	83 c4 10             	add    $0x10,%esp
40001216:	83 f8 ff             	cmp    $0xffffffff,%eax
40001219:	75 18                	jne    40001233 <buildin_ls+0x1b7>
4000121b:	83 ec 08             	sub    $0x8,%esp
4000121e:	ff 75 f4             	pushl  -0xc(%ebp)
40001221:	68 e8 19 00 40       	push   $0x400019e8
40001226:	e8 41 f1 ff ff       	call   4000036c <printf>
4000122b:	83 c4 10             	add    $0x10,%esp
4000122e:	e9 07 02 00 00       	jmp    4000143a <buildin_ls+0x3be>
40001233:	8b 45 d0             	mov    -0x30(%ebp),%eax
40001236:	83 f8 02             	cmp    $0x2,%eax
40001239:	0f 85 c8 01 00 00    	jne    40001407 <buildin_ls+0x38b>
4000123f:	83 ec 0c             	sub    $0xc,%esp
40001242:	ff 75 f4             	pushl  -0xc(%ebp)
40001245:	e8 55 f0 ff ff       	call   4000029f <opendir>
4000124a:	83 c4 10             	add    $0x10,%esp
4000124d:	89 45 dc             	mov    %eax,-0x24(%ebp)
40001250:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
40001257:	c7 85 c8 fd ff ff 00 	movl   $0x0,-0x238(%ebp)
4000125e:	00 00 00 
40001261:	8d 95 cc fd ff ff    	lea    -0x234(%ebp),%edx
40001267:	b8 00 00 00 00       	mov    $0x0,%eax
4000126c:	b9 7f 00 00 00       	mov    $0x7f,%ecx
40001271:	89 d7                	mov    %edx,%edi
40001273:	f3 ab                	rep stos %eax,%es:(%edi)
40001275:	83 ec 0c             	sub    $0xc,%esp
40001278:	ff 75 f4             	pushl  -0xc(%ebp)
4000127b:	e8 fc f9 ff ff       	call   40000c7c <user_strlen>
40001280:	83 c4 10             	add    $0x10,%esp
40001283:	89 45 e4             	mov    %eax,-0x1c(%ebp)
40001286:	8b 45 e4             	mov    -0x1c(%ebp),%eax
40001289:	83 e8 01             	sub    $0x1,%eax
4000128c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
4000128f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
40001292:	83 ec 04             	sub    $0x4,%esp
40001295:	50                   	push   %eax
40001296:	ff 75 f4             	pushl  -0xc(%ebp)
40001299:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
4000129f:	50                   	push   %eax
400012a0:	e8 3c fa ff ff       	call   40000ce1 <user_memcpy>
400012a5:	83 c4 10             	add    $0x10,%esp
400012a8:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
400012ae:	8b 45 d4             	mov    -0x2c(%ebp),%eax
400012b1:	01 d0                	add    %edx,%eax
400012b3:	0f b6 00             	movzbl (%eax),%eax
400012b6:	3c 2f                	cmp    $0x2f,%al
400012b8:	74 12                	je     400012cc <buildin_ls+0x250>
400012ba:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
400012c0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
400012c3:	01 d0                	add    %edx,%eax
400012c5:	c6 00 2f             	movb   $0x2f,(%eax)
400012c8:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
400012cc:	83 ec 0c             	sub    $0xc,%esp
400012cf:	ff 75 dc             	pushl  -0x24(%ebp)
400012d2:	e8 79 ef ff ff       	call   40000250 <rewinddir>
400012d7:	83 c4 10             	add    $0x10,%esp
400012da:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400012de:	0f 84 ec 00 00 00    	je     400013d0 <buildin_ls+0x354>
400012e4:	8b 45 cc             	mov    -0x34(%ebp),%eax
400012e7:	83 ec 08             	sub    $0x8,%esp
400012ea:	50                   	push   %eax
400012eb:	68 19 1a 00 40       	push   $0x40001a19
400012f0:	e8 77 f0 ff ff       	call   4000036c <printf>
400012f5:	83 c4 10             	add    $0x10,%esp
400012f8:	e9 a2 00 00 00       	jmp    4000139f <buildin_ls+0x323>
400012fd:	c6 45 e3 64          	movb   $0x64,-0x1d(%ebp)
40001301:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001304:	8b 40 14             	mov    0x14(%eax),%eax
40001307:	83 f8 01             	cmp    $0x1,%eax
4000130a:	75 04                	jne    40001310 <buildin_ls+0x294>
4000130c:	c6 45 e3 2d          	movb   $0x2d,-0x1d(%ebp)
40001310:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
40001316:	8b 45 e4             	mov    -0x1c(%ebp),%eax
40001319:	01 d0                	add    %edx,%eax
4000131b:	c6 00 00             	movb   $0x0,(%eax)
4000131e:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001321:	83 ec 08             	sub    $0x8,%esp
40001324:	50                   	push   %eax
40001325:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
4000132b:	50                   	push   %eax
4000132c:	e8 77 f8 ff ff       	call   40000ba8 <user_strcat>
40001331:	83 c4 10             	add    $0x10,%esp
40001334:	83 ec 04             	sub    $0x4,%esp
40001337:	6a 0c                	push   $0xc
40001339:	6a 00                	push   $0x0
4000133b:	8d 45 c8             	lea    -0x38(%ebp),%eax
4000133e:	50                   	push   %eax
4000133f:	e8 43 f8 ff ff       	call   40000b87 <user_memset>
40001344:	83 c4 10             	add    $0x10,%esp
40001347:	83 ec 08             	sub    $0x8,%esp
4000134a:	8d 45 c8             	lea    -0x38(%ebp),%eax
4000134d:	50                   	push   %eax
4000134e:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
40001354:	50                   	push   %eax
40001355:	e8 30 ef ff ff       	call   4000028a <stat>
4000135a:	83 c4 10             	add    $0x10,%esp
4000135d:	83 f8 ff             	cmp    $0xffffffff,%eax
40001360:	75 19                	jne    4000137b <buildin_ls+0x2ff>
40001362:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001365:	83 ec 08             	sub    $0x8,%esp
40001368:	50                   	push   %eax
40001369:	68 e8 19 00 40       	push   $0x400019e8
4000136e:	e8 f9 ef ff ff       	call   4000036c <printf>
40001373:	83 c4 10             	add    $0x10,%esp
40001376:	e9 bf 00 00 00       	jmp    4000143a <buildin_ls+0x3be>
4000137b:	8b 5d d8             	mov    -0x28(%ebp),%ebx
4000137e:	8b 4d cc             	mov    -0x34(%ebp),%ecx
40001381:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001384:	8b 50 10             	mov    0x10(%eax),%edx
40001387:	0f be 45 e3          	movsbl -0x1d(%ebp),%eax
4000138b:	83 ec 0c             	sub    $0xc,%esp
4000138e:	53                   	push   %ebx
4000138f:	51                   	push   %ecx
40001390:	52                   	push   %edx
40001391:	50                   	push   %eax
40001392:	68 24 1a 00 40       	push   $0x40001a24
40001397:	e8 d0 ef ff ff       	call   4000036c <printf>
4000139c:	83 c4 20             	add    $0x20,%esp
4000139f:	83 ec 0c             	sub    $0xc,%esp
400013a2:	ff 75 dc             	pushl  -0x24(%ebp)
400013a5:	e8 19 ef ff ff       	call   400002c3 <readdir>
400013aa:	83 c4 10             	add    $0x10,%esp
400013ad:	89 45 d8             	mov    %eax,-0x28(%ebp)
400013b0:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
400013b4:	0f 85 43 ff ff ff    	jne    400012fd <buildin_ls+0x281>
400013ba:	eb 3b                	jmp    400013f7 <buildin_ls+0x37b>
400013bc:	8b 45 d8             	mov    -0x28(%ebp),%eax
400013bf:	83 ec 08             	sub    $0x8,%esp
400013c2:	50                   	push   %eax
400013c3:	68 34 1a 00 40       	push   $0x40001a34
400013c8:	e8 9f ef ff ff       	call   4000036c <printf>
400013cd:	83 c4 10             	add    $0x10,%esp
400013d0:	83 ec 0c             	sub    $0xc,%esp
400013d3:	ff 75 dc             	pushl  -0x24(%ebp)
400013d6:	e8 e8 ee ff ff       	call   400002c3 <readdir>
400013db:	83 c4 10             	add    $0x10,%esp
400013de:	89 45 d8             	mov    %eax,-0x28(%ebp)
400013e1:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
400013e5:	75 d5                	jne    400013bc <buildin_ls+0x340>
400013e7:	83 ec 0c             	sub    $0xc,%esp
400013ea:	68 38 1a 00 40       	push   $0x40001a38
400013ef:	e8 78 ef ff ff       	call   4000036c <printf>
400013f4:	83 c4 10             	add    $0x10,%esp
400013f7:	83 ec 0c             	sub    $0xc,%esp
400013fa:	ff 75 dc             	pushl  -0x24(%ebp)
400013fd:	e8 af ee ff ff       	call   400002b1 <closedir>
40001402:	83 c4 10             	add    $0x10,%esp
40001405:	eb 33                	jmp    4000143a <buildin_ls+0x3be>
40001407:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
4000140b:	74 1a                	je     40001427 <buildin_ls+0x3ab>
4000140d:	8b 55 cc             	mov    -0x34(%ebp),%edx
40001410:	8b 45 c8             	mov    -0x38(%ebp),%eax
40001413:	ff 75 f4             	pushl  -0xc(%ebp)
40001416:	52                   	push   %edx
40001417:	50                   	push   %eax
40001418:	68 3a 1a 00 40       	push   $0x40001a3a
4000141d:	e8 4a ef ff ff       	call   4000036c <printf>
40001422:	83 c4 10             	add    $0x10,%esp
40001425:	eb 13                	jmp    4000143a <buildin_ls+0x3be>
40001427:	83 ec 08             	sub    $0x8,%esp
4000142a:	ff 75 f4             	pushl  -0xc(%ebp)
4000142d:	68 92 18 00 40       	push   $0x40001892
40001432:	e8 35 ef ff ff       	call   4000036c <printf>
40001437:	83 c4 10             	add    $0x10,%esp
4000143a:	8d 65 f8             	lea    -0x8(%ebp),%esp
4000143d:	5b                   	pop    %ebx
4000143e:	5f                   	pop    %edi
4000143f:	5d                   	pop    %ebp
40001440:	c3                   	ret    

40001441 <buildin_ps>:
40001441:	55                   	push   %ebp
40001442:	89 e5                	mov    %esp,%ebp
40001444:	83 ec 08             	sub    $0x8,%esp
40001447:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
4000144b:	74 12                	je     4000145f <buildin_ps+0x1e>
4000144d:	83 ec 0c             	sub    $0xc,%esp
40001450:	68 49 1a 00 40       	push   $0x40001a49
40001455:	e8 12 ef ff ff       	call   4000036c <printf>
4000145a:	83 c4 10             	add    $0x10,%esp
4000145d:	eb 05                	jmp    40001464 <buildin_ps+0x23>
4000145f:	e8 71 ee ff ff       	call   400002d5 <ps>
40001464:	c9                   	leave  
40001465:	c3                   	ret    

40001466 <buildin_mkdir>:
40001466:	55                   	push   %ebp
40001467:	89 e5                	mov    %esp,%ebp
40001469:	83 ec 18             	sub    $0x18,%esp
4000146c:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
40001473:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40001477:	74 12                	je     4000148b <buildin_mkdir+0x25>
40001479:	83 ec 0c             	sub    $0xc,%esp
4000147c:	68 64 1a 00 40       	push   $0x40001a64
40001481:	e8 e6 ee ff ff       	call   4000036c <printf>
40001486:	83 c4 10             	add    $0x10,%esp
40001489:	eb 68                	jmp    400014f3 <buildin_mkdir+0x8d>
4000148b:	8b 45 0c             	mov    0xc(%ebp),%eax
4000148e:	83 c0 04             	add    $0x4,%eax
40001491:	8b 00                	mov    (%eax),%eax
40001493:	83 ec 08             	sub    $0x8,%esp
40001496:	68 20 1d 00 40       	push   $0x40001d20
4000149b:	50                   	push   %eax
4000149c:	e8 2e fa ff ff       	call   40000ecf <make_clear_abs_path>
400014a1:	83 c4 10             	add    $0x10,%esp
400014a4:	83 ec 08             	sub    $0x8,%esp
400014a7:	68 20 1d 00 40       	push   $0x40001d20
400014ac:	68 70 18 00 40       	push   $0x40001870
400014b1:	e8 74 f7 ff ff       	call   40000c2a <user_strcmp>
400014b6:	83 c4 10             	add    $0x10,%esp
400014b9:	85 c0                	test   %eax,%eax
400014bb:	74 36                	je     400014f3 <buildin_mkdir+0x8d>
400014bd:	83 ec 0c             	sub    $0xc,%esp
400014c0:	68 20 1d 00 40       	push   $0x40001d20
400014c5:	e8 62 ed ff ff       	call   4000022c <mkdir>
400014ca:	83 c4 10             	add    $0x10,%esp
400014cd:	85 c0                	test   %eax,%eax
400014cf:	75 09                	jne    400014da <buildin_mkdir+0x74>
400014d1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400014d8:	eb 19                	jmp    400014f3 <buildin_mkdir+0x8d>
400014da:	8b 45 0c             	mov    0xc(%ebp),%eax
400014dd:	83 c0 04             	add    $0x4,%eax
400014e0:	8b 00                	mov    (%eax),%eax
400014e2:	83 ec 08             	sub    $0x8,%esp
400014e5:	50                   	push   %eax
400014e6:	68 88 1a 00 40       	push   $0x40001a88
400014eb:	e8 7c ee ff ff       	call   4000036c <printf>
400014f0:	83 c4 10             	add    $0x10,%esp
400014f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
400014f6:	c9                   	leave  
400014f7:	c3                   	ret    

400014f8 <buildin_rmdir>:
400014f8:	55                   	push   %ebp
400014f9:	89 e5                	mov    %esp,%ebp
400014fb:	83 ec 18             	sub    $0x18,%esp
400014fe:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
40001505:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40001509:	74 12                	je     4000151d <buildin_rmdir+0x25>
4000150b:	83 ec 0c             	sub    $0xc,%esp
4000150e:	68 ac 1a 00 40       	push   $0x40001aac
40001513:	e8 54 ee ff ff       	call   4000036c <printf>
40001518:	83 c4 10             	add    $0x10,%esp
4000151b:	eb 68                	jmp    40001585 <buildin_rmdir+0x8d>
4000151d:	8b 45 0c             	mov    0xc(%ebp),%eax
40001520:	83 c0 04             	add    $0x4,%eax
40001523:	8b 00                	mov    (%eax),%eax
40001525:	83 ec 08             	sub    $0x8,%esp
40001528:	68 20 1d 00 40       	push   $0x40001d20
4000152d:	50                   	push   %eax
4000152e:	e8 9c f9 ff ff       	call   40000ecf <make_clear_abs_path>
40001533:	83 c4 10             	add    $0x10,%esp
40001536:	83 ec 08             	sub    $0x8,%esp
40001539:	68 20 1d 00 40       	push   $0x40001d20
4000153e:	68 70 18 00 40       	push   $0x40001870
40001543:	e8 e2 f6 ff ff       	call   40000c2a <user_strcmp>
40001548:	83 c4 10             	add    $0x10,%esp
4000154b:	85 c0                	test   %eax,%eax
4000154d:	74 36                	je     40001585 <buildin_rmdir+0x8d>
4000154f:	83 ec 0c             	sub    $0xc,%esp
40001552:	68 20 1d 00 40       	push   $0x40001d20
40001557:	e8 e2 ec ff ff       	call   4000023e <rmdir>
4000155c:	83 c4 10             	add    $0x10,%esp
4000155f:	85 c0                	test   %eax,%eax
40001561:	75 09                	jne    4000156c <buildin_rmdir+0x74>
40001563:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000156a:	eb 19                	jmp    40001585 <buildin_rmdir+0x8d>
4000156c:	8b 45 0c             	mov    0xc(%ebp),%eax
4000156f:	83 c0 04             	add    $0x4,%eax
40001572:	8b 00                	mov    (%eax),%eax
40001574:	83 ec 08             	sub    $0x8,%esp
40001577:	50                   	push   %eax
40001578:	68 cd 1a 00 40       	push   $0x40001acd
4000157d:	e8 ea ed ff ff       	call   4000036c <printf>
40001582:	83 c4 10             	add    $0x10,%esp
40001585:	8b 45 f4             	mov    -0xc(%ebp),%eax
40001588:	c9                   	leave  
40001589:	c3                   	ret    

4000158a <buildin_rm>:
4000158a:	55                   	push   %ebp
4000158b:	89 e5                	mov    %esp,%ebp
4000158d:	83 ec 18             	sub    $0x18,%esp
40001590:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
40001597:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
4000159b:	74 12                	je     400015af <buildin_rm+0x25>
4000159d:	83 ec 0c             	sub    $0xc,%esp
400015a0:	68 e7 1a 00 40       	push   $0x40001ae7
400015a5:	e8 c2 ed ff ff       	call   4000036c <printf>
400015aa:	83 c4 10             	add    $0x10,%esp
400015ad:	eb 68                	jmp    40001617 <buildin_rm+0x8d>
400015af:	8b 45 0c             	mov    0xc(%ebp),%eax
400015b2:	83 c0 04             	add    $0x4,%eax
400015b5:	8b 00                	mov    (%eax),%eax
400015b7:	83 ec 08             	sub    $0x8,%esp
400015ba:	68 20 1d 00 40       	push   $0x40001d20
400015bf:	50                   	push   %eax
400015c0:	e8 0a f9 ff ff       	call   40000ecf <make_clear_abs_path>
400015c5:	83 c4 10             	add    $0x10,%esp
400015c8:	83 ec 08             	sub    $0x8,%esp
400015cb:	68 20 1d 00 40       	push   $0x40001d20
400015d0:	68 70 18 00 40       	push   $0x40001870
400015d5:	e8 50 f6 ff ff       	call   40000c2a <user_strcmp>
400015da:	83 c4 10             	add    $0x10,%esp
400015dd:	85 c0                	test   %eax,%eax
400015df:	74 36                	je     40001617 <buildin_rm+0x8d>
400015e1:	83 ec 0c             	sub    $0xc,%esp
400015e4:	68 20 1d 00 40       	push   $0x40001d20
400015e9:	e8 2c ec ff ff       	call   4000021a <unlink>
400015ee:	83 c4 10             	add    $0x10,%esp
400015f1:	85 c0                	test   %eax,%eax
400015f3:	75 09                	jne    400015fe <buildin_rm+0x74>
400015f5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400015fc:	eb 19                	jmp    40001617 <buildin_rm+0x8d>
400015fe:	8b 45 0c             	mov    0xc(%ebp),%eax
40001601:	83 c0 04             	add    $0x4,%eax
40001604:	8b 00                	mov    (%eax),%eax
40001606:	83 ec 08             	sub    $0x8,%esp
40001609:	50                   	push   %eax
4000160a:	68 05 1b 00 40       	push   $0x40001b05
4000160f:	e8 58 ed ff ff       	call   4000036c <printf>
40001614:	83 c4 10             	add    $0x10,%esp
40001617:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000161a:	c9                   	leave  
4000161b:	c3                   	ret    

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
c10002e3:	68 4c a8 00 c1       	push   $0xc100a84c
c10002e8:	e8 76 52 00 00       	call   c1005563 <printk>
c10002ed:	83 c4 10             	add    $0x10,%esp
c10002f0:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10002f4:	0f b7 c0             	movzwl %ax,%eax
c10002f7:	83 ec 08             	sub    $0x8,%esp
c10002fa:	50                   	push   %eax
c10002fb:	68 55 a8 00 c1       	push   $0xc100a855
c1000300:	e8 5e 52 00 00       	call   c1005563 <printk>
c1000305:	83 c4 10             	add    $0x10,%esp
c1000308:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c100030c:	0f b7 c0             	movzwl %ax,%eax
c100030f:	83 ec 08             	sub    $0x8,%esp
c1000312:	50                   	push   %eax
c1000313:	68 5e a8 00 c1       	push   $0xc100a85e
c1000318:	e8 46 52 00 00       	call   c1005563 <printk>
c100031d:	83 c4 10             	add    $0x10,%esp
c1000320:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
c1000324:	0f b7 c0             	movzwl %ax,%eax
c1000327:	83 ec 08             	sub    $0x8,%esp
c100032a:	50                   	push   %eax
c100032b:	68 67 a8 00 c1       	push   $0xc100a867
c1000330:	e8 2e 52 00 00       	call   c1005563 <printk>
c1000335:	83 c4 10             	add    $0x10,%esp
c1000338:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
c100033c:	0f b7 c0             	movzwl %ax,%eax
c100033f:	83 ec 08             	sub    $0x8,%esp
c1000342:	50                   	push   %eax
c1000343:	68 70 a8 00 c1       	push   $0xc100a870
c1000348:	e8 16 52 00 00       	call   c1005563 <printk>
c100034d:	83 c4 10             	add    $0x10,%esp
c1000350:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c1000354:	0f b7 c0             	movzwl %ax,%eax
c1000357:	83 ec 08             	sub    $0x8,%esp
c100035a:	50                   	push   %eax
c100035b:	68 79 a8 00 c1       	push   $0xc100a879
c1000360:	e8 fe 51 00 00       	call   c1005563 <printk>
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
c100037f:	68 82 a8 00 c1       	push   $0xc100a882
c1000384:	e8 da 51 00 00       	call   c1005563 <printk>
c1000389:	83 c4 10             	add    $0x10,%esp
c100038c:	83 ec 04             	sub    $0x4,%esp
c100038f:	ff 75 14             	pushl  0x14(%ebp)
c1000392:	ff 75 10             	pushl  0x10(%ebp)
c1000395:	68 a0 a8 00 c1       	push   $0xc100a8a0
c100039a:	e8 c4 51 00 00       	call   c1005563 <printk>
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
c10003bc:	68 47 a9 00 c1       	push   $0xc100a947
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
c100044b:	68 4a a9 00 c1       	push   $0xc100a94a
c1000450:	e8 0e 51 00 00       	call   c1005563 <printk>
c1000455:	83 c4 10             	add    $0x10,%esp
c1000458:	83 ec 0c             	sub    $0xc,%esp
c100045b:	68 50 a9 00 c1       	push   $0xc100a950
c1000460:	e8 fe 50 00 00       	call   c1005563 <printk>
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
c100047a:	68 4a a9 00 c1       	push   $0xc100a94a
c100047f:	e8 df 50 00 00       	call   c1005563 <printk>
c1000484:	83 c4 10             	add    $0x10,%esp
c1000487:	83 ec 0c             	sub    $0xc,%esp
c100048a:	68 80 a9 00 c1       	push   $0xc100a980
c100048f:	e8 cf 50 00 00       	call   c1005563 <printk>
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
c10004cb:	68 9f a9 00 c1       	push   $0xc100a99f
c10004d0:	e8 8e 50 00 00       	call   c1005563 <printk>
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
c10004fe:	68 4a a9 00 c1       	push   $0xc100a94a
c1000503:	e8 5b 50 00 00       	call   c1005563 <printk>
c1000508:	83 c4 10             	add    $0x10,%esp
c100050b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1000512:	83 ec 0c             	sub    $0xc,%esp
c1000515:	68 aa a9 00 c1       	push   $0xc100a9aa
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
c1000565:	68 c8 a9 00 c1       	push   $0xc100a9c8
c100056a:	e8 f4 4f 00 00       	call   c1005563 <printk>
c100056f:	83 c4 10             	add    $0x10,%esp
c1000572:	eb 32                	jmp    c10005a6 <instr_game+0xbe>
c1000574:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000577:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c100057a:	7d 15                	jge    c1000591 <instr_game+0xa9>
c100057c:	83 ec 0c             	sub    $0xc,%esp
c100057f:	68 f7 a9 00 c1       	push   $0xc100a9f7
c1000584:	e8 da 4f 00 00       	call   c1005563 <printk>
c1000589:	83 c4 10             	add    $0x10,%esp
c100058c:	e9 7a ff ff ff       	jmp    c100050b <instr_game+0x23>
c1000591:	83 ec 0c             	sub    $0xc,%esp
c1000594:	68 0f aa 00 c1       	push   $0xc100aa0f
c1000599:	e8 c5 4f 00 00       	call   c1005563 <printk>
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
c10005b0:	e8 81 53 00 00       	call   c1005936 <cons_getc>
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
c10005d5:	68 26 aa 00 c1       	push   $0xc100aa26
c10005da:	e8 84 4f 00 00       	call   c1005563 <printk>
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
c1000616:	e8 dd 52 00 00       	call   c10058f8 <cons_putc>
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
c1000644:	e8 af 52 00 00       	call   c10058f8 <cons_putc>
c1000649:	83 c4 10             	add    $0x10,%esp
c100064c:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
c1000650:	eb 2c                	jmp    c100067e <readline+0xbb>
c1000652:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
c1000656:	74 06                	je     c100065e <readline+0x9b>
c1000658:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
c100065c:	75 8b                	jne    c10005e9 <readline+0x26>
c100065e:	83 ec 0c             	sub    $0xc,%esp
c1000661:	ff 75 f0             	pushl  -0x10(%ebp)
c1000664:	e8 8f 52 00 00       	call   c10058f8 <cons_putc>
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
c10009f3:	68 5e aa 00 c1       	push   $0xc100aa5e
c10009f8:	e8 66 4b 00 00       	call   c1005563 <printk>
c10009fd:	83 c4 10             	add    $0x10,%esp
c1000a00:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a03:	8b 40 04             	mov    0x4(%eax),%eax
c1000a06:	83 ec 08             	sub    $0x8,%esp
c1000a09:	50                   	push   %eax
c1000a0a:	68 6e aa 00 c1       	push   $0xc100aa6e
c1000a0f:	e8 4f 4b 00 00       	call   c1005563 <printk>
c1000a14:	83 c4 10             	add    $0x10,%esp
c1000a17:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a1a:	8b 40 08             	mov    0x8(%eax),%eax
c1000a1d:	83 ec 08             	sub    $0x8,%esp
c1000a20:	50                   	push   %eax
c1000a21:	68 7e aa 00 c1       	push   $0xc100aa7e
c1000a26:	e8 38 4b 00 00       	call   c1005563 <printk>
c1000a2b:	83 c4 10             	add    $0x10,%esp
c1000a2e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a31:	8b 40 0c             	mov    0xc(%eax),%eax
c1000a34:	83 ec 08             	sub    $0x8,%esp
c1000a37:	50                   	push   %eax
c1000a38:	68 8e aa 00 c1       	push   $0xc100aa8e
c1000a3d:	e8 21 4b 00 00       	call   c1005563 <printk>
c1000a42:	83 c4 10             	add    $0x10,%esp
c1000a45:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a48:	8b 40 10             	mov    0x10(%eax),%eax
c1000a4b:	83 ec 08             	sub    $0x8,%esp
c1000a4e:	50                   	push   %eax
c1000a4f:	68 9e aa 00 c1       	push   $0xc100aa9e
c1000a54:	e8 0a 4b 00 00       	call   c1005563 <printk>
c1000a59:	83 c4 10             	add    $0x10,%esp
c1000a5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a5f:	8b 40 14             	mov    0x14(%eax),%eax
c1000a62:	83 ec 08             	sub    $0x8,%esp
c1000a65:	50                   	push   %eax
c1000a66:	68 ae aa 00 c1       	push   $0xc100aaae
c1000a6b:	e8 f3 4a 00 00       	call   c1005563 <printk>
c1000a70:	83 c4 10             	add    $0x10,%esp
c1000a73:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a76:	8b 40 18             	mov    0x18(%eax),%eax
c1000a79:	83 ec 08             	sub    $0x8,%esp
c1000a7c:	50                   	push   %eax
c1000a7d:	68 be aa 00 c1       	push   $0xc100aabe
c1000a82:	e8 dc 4a 00 00       	call   c1005563 <printk>
c1000a87:	83 c4 10             	add    $0x10,%esp
c1000a8a:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a8d:	8b 40 1c             	mov    0x1c(%eax),%eax
c1000a90:	83 ec 08             	sub    $0x8,%esp
c1000a93:	50                   	push   %eax
c1000a94:	68 ce aa 00 c1       	push   $0xc100aace
c1000a99:	e8 c5 4a 00 00       	call   c1005563 <printk>
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
c1000ac7:	68 de aa 00 c1       	push   $0xc100aade
c1000acc:	e8 92 4a 00 00       	call   c1005563 <printk>
c1000ad1:	83 c4 10             	add    $0x10,%esp
c1000ad4:	8b 45 08             	mov    0x8(%ebp),%eax
c1000ad7:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1000adb:	0f b7 c0             	movzwl %ax,%eax
c1000ade:	83 ec 08             	sub    $0x8,%esp
c1000ae1:	50                   	push   %eax
c1000ae2:	68 f2 aa 00 c1       	push   $0xc100aaf2
c1000ae7:	e8 77 4a 00 00       	call   c1005563 <printk>
c1000aec:	83 c4 10             	add    $0x10,%esp
c1000aef:	8b 45 08             	mov    0x8(%ebp),%eax
c1000af2:	0f b7 40 24          	movzwl 0x24(%eax),%eax
c1000af6:	0f b7 c0             	movzwl %ax,%eax
c1000af9:	83 ec 08             	sub    $0x8,%esp
c1000afc:	50                   	push   %eax
c1000afd:	68 06 ab 00 c1       	push   $0xc100ab06
c1000b02:	e8 5c 4a 00 00       	call   c1005563 <printk>
c1000b07:	83 c4 10             	add    $0x10,%esp
c1000b0a:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b0d:	0f b7 40 20          	movzwl 0x20(%eax),%eax
c1000b11:	0f b7 c0             	movzwl %ax,%eax
c1000b14:	83 ec 08             	sub    $0x8,%esp
c1000b17:	50                   	push   %eax
c1000b18:	68 1a ab 00 c1       	push   $0xc100ab1a
c1000b1d:	e8 41 4a 00 00       	call   c1005563 <printk>
c1000b22:	83 c4 10             	add    $0x10,%esp
c1000b25:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b28:	8b 40 34             	mov    0x34(%eax),%eax
c1000b2b:	83 ec 08             	sub    $0x8,%esp
c1000b2e:	50                   	push   %eax
c1000b2f:	68 2e ab 00 c1       	push   $0xc100ab2e
c1000b34:	e8 2a 4a 00 00       	call   c1005563 <printk>
c1000b39:	83 c4 10             	add    $0x10,%esp
c1000b3c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b3f:	8b 40 38             	mov    0x38(%eax),%eax
c1000b42:	83 ec 08             	sub    $0x8,%esp
c1000b45:	50                   	push   %eax
c1000b46:	68 3e ab 00 c1       	push   $0xc100ab3e
c1000b4b:	e8 13 4a 00 00       	call   c1005563 <printk>
c1000b50:	83 c4 10             	add    $0x10,%esp
c1000b53:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b56:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
c1000b5a:	0f b7 c0             	movzwl %ax,%eax
c1000b5d:	83 ec 08             	sub    $0x8,%esp
c1000b60:	50                   	push   %eax
c1000b61:	68 4e ab 00 c1       	push   $0xc100ab4e
c1000b66:	e8 f8 49 00 00       	call   c1005563 <printk>
c1000b6b:	83 c4 10             	add    $0x10,%esp
c1000b6e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b71:	8b 40 40             	mov    0x40(%eax),%eax
c1000b74:	83 ec 08             	sub    $0x8,%esp
c1000b77:	50                   	push   %eax
c1000b78:	68 62 ab 00 c1       	push   $0xc100ab62
c1000b7d:	e8 e1 49 00 00       	call   c1005563 <printk>
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
c1000bc0:	68 72 ab 00 c1       	push   $0xc100ab72
c1000bc5:	e8 99 49 00 00       	call   c1005563 <printk>
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
c1000bec:	68 76 ab 00 c1       	push   $0xc100ab76
c1000bf1:	e8 6d 49 00 00       	call   c1005563 <printk>
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
c1000c33:	8b 04 85 ac ab 00 c1 	mov    -0x3eff5454(,%eax,4),%eax
c1000c3a:	ff e0                	jmp    *%eax
c1000c3c:	83 f8 60             	cmp    $0x60,%eax
c1000c3f:	0f 85 c9 00 00 00    	jne    c1000d0e <trap_dispatch+0x113>
c1000c45:	83 ec 0c             	sub    $0xc,%esp
c1000c48:	68 7f ab 00 c1       	push   $0xc100ab7f
c1000c4d:	e8 11 49 00 00       	call   c1005563 <printk>
c1000c52:	83 c4 10             	add    $0x10,%esp
c1000c55:	e9 cd 00 00 00       	jmp    c1000d27 <trap_dispatch+0x12c>
c1000c5a:	83 ec 0c             	sub    $0xc,%esp
c1000c5d:	ff 75 08             	pushl  0x8(%ebp)
c1000c60:	e8 3f fe ff ff       	call   c1000aa4 <print_trapframe>
c1000c65:	83 c4 10             	add    $0x10,%esp
c1000c68:	e9 ba 00 00 00       	jmp    c1000d27 <trap_dispatch+0x12c>
c1000c6d:	83 ec 0c             	sub    $0xc,%esp
c1000c70:	ff 75 08             	pushl  0x8(%ebp)
c1000c73:	e8 3e 10 00 00       	call   c1001cb6 <syscall_trap>
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
c1000cd3:	e8 28 2f 00 00       	call   c1003c00 <schedule>
c1000cd8:	eb 49                	jmp    c1000d23 <trap_dispatch+0x128>
c1000cda:	e8 57 4c 00 00       	call   c1005936 <cons_getc>
c1000cdf:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000ce2:	eb 43                	jmp    c1000d27 <trap_dispatch+0x12c>
c1000ce4:	e8 4d 4c 00 00       	call   c1005936 <cons_getc>
c1000ce9:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000cec:	0f b6 05 b4 1c 01 c1 	movzbl 0xc1011cb4,%eax
c1000cf3:	84 c0                	test   %al,%al
c1000cf5:	75 2f                	jne    c1000d26 <trap_dispatch+0x12b>
c1000cf7:	83 ec 0c             	sub    $0xc,%esp
c1000cfa:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1000cff:	e8 f3 4d 00 00       	call   c1005af7 <sema_up>
c1000d04:	83 c4 10             	add    $0x10,%esp
c1000d07:	e8 f4 2e 00 00       	call   c1003c00 <schedule>
c1000d0c:	eb 18                	jmp    c1000d26 <trap_dispatch+0x12b>
c1000d0e:	83 ec 0c             	sub    $0xc,%esp
c1000d11:	68 8f ab 00 c1       	push   $0xc100ab8f
c1000d16:	e8 48 48 00 00       	call   c1005563 <printk>
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
c10018a0:	e8 2c 2b 00 00       	call   c10043d1 <sys_exit>
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
c10018d4:	e8 e8 20 00 00       	call   c10039c1 <do_fork>
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
c10018f2:	e8 34 2a 00 00       	call   c100432b <sys_wait>
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
c100191e:	e8 8c 31 00 00       	call   c1004aaf <sys_execv>
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
c1001966:	e8 73 38 00 00       	call   c10051de <print_char>
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
c100198d:	e8 69 39 00 00       	call   c10052fb <print_string>
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
c10019e6:	e8 47 39 00 00       	call   c1005332 <print_num>
c10019eb:	83 c4 20             	add    $0x20,%esp
c10019ee:	b8 00 00 00 00       	mov    $0x0,%eax
c10019f3:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10019f6:	c9                   	leave  
c10019f7:	c3                   	ret    

c10019f8 <sys_backtrace>:
c10019f8:	55                   	push   %ebp
c10019f9:	89 e5                	mov    %esp,%ebp
c10019fb:	83 ec 08             	sub    $0x8,%esp
c10019fe:	e8 ae 3a 00 00       	call   c10054b1 <backtrace>
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
c1001a42:	e8 26 55 00 00       	call   c1006f6d <sys_read>
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
c1001a70:	e8 fa 50 00 00       	call   c1006b6f <sys_open>
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
c1001a8e:	e8 7a 53 00 00       	call   c1006e0d <sys_close>
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
c1001ac6:	e8 9f 53 00 00       	call   c1006e6a <sys_write>
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
c1001b02:	e8 5e 55 00 00       	call   c1007065 <sys_lseek>
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
c1001b20:	e8 2c 56 00 00       	call   c1007151 <sys_unlink>
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
c1001b3e:	e8 2e 58 00 00       	call   c1007371 <sys_mkdir>
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
c1001b5c:	e8 c9 5d 00 00       	call   c100792a <sys_rmdir>
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
c1001b7a:	e8 9b 5d 00 00       	call   c100791a <sys_rewinddir>
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
c1001ba9:	e8 fb 60 00 00       	call   c1007ca9 <sys_getcwd>
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
c1001bc7:	e8 f6 63 00 00       	call   c1007fc2 <sys_chdir>
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
c1001bf3:	e8 9e 62 00 00       	call   c1007e96 <sys_stat>
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
c1001c11:	e8 95 5b 00 00       	call   c10077ab <sys_opendir>
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
c1001c2f:	e8 84 5c 00 00       	call   c10078b8 <sys_closedir>
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
c1001c4d:	e8 93 5c 00 00       	call   c10078e5 <sys_readdir>
c1001c52:	83 c4 10             	add    $0x10,%esp
c1001c55:	c9                   	leave  
c1001c56:	c3                   	ret    

c1001c57 <syscall_print_task>:
c1001c57:	55                   	push   %ebp
c1001c58:	89 e5                	mov    %esp,%ebp
c1001c5a:	83 ec 08             	sub    $0x8,%esp
c1001c5d:	e8 05 2b 00 00       	call   c1004767 <sys_print_task>
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
c1001c7d:	e8 f3 12 00 00       	call   c1002f75 <sys_malloc>
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
c1001ca7:	e8 28 13 00 00       	call   c1002fd4 <sys_free>
c1001cac:	83 c4 10             	add    $0x10,%esp
c1001caf:	b8 00 00 00 00       	mov    $0x0,%eax
c1001cb4:	c9                   	leave  
c1001cb5:	c3                   	ret    

c1001cb6 <syscall_trap>:
c1001cb6:	55                   	push   %ebp
c1001cb7:	89 e5                	mov    %esp,%ebp
c1001cb9:	83 ec 28             	sub    $0x28,%esp
c1001cbc:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cbf:	8b 40 1c             	mov    0x1c(%eax),%eax
c1001cc2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001cc5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1001cc9:	78 60                	js     c1001d2b <syscall_trap+0x75>
c1001ccb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001cce:	83 f8 39             	cmp    $0x39,%eax
c1001cd1:	77 58                	ja     c1001d2b <syscall_trap+0x75>
c1001cd3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001cd6:	8b 04 85 00 d5 00 c1 	mov    -0x3eff2b00(,%eax,4),%eax
c1001cdd:	85 c0                	test   %eax,%eax
c1001cdf:	74 4a                	je     c1001d2b <syscall_trap+0x75>
c1001ce1:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ce4:	8b 40 14             	mov    0x14(%eax),%eax
c1001ce7:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1001cea:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ced:	8b 40 18             	mov    0x18(%eax),%eax
c1001cf0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1001cf3:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cf6:	8b 40 10             	mov    0x10(%eax),%eax
c1001cf9:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1001cfc:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cff:	8b 00                	mov    (%eax),%eax
c1001d01:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001d04:	8b 45 08             	mov    0x8(%ebp),%eax
c1001d07:	8b 40 04             	mov    0x4(%eax),%eax
c1001d0a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001d0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001d10:	8b 04 85 00 d5 00 c1 	mov    -0x3eff2b00(,%eax,4),%eax
c1001d17:	83 ec 0c             	sub    $0xc,%esp
c1001d1a:	8d 55 e0             	lea    -0x20(%ebp),%edx
c1001d1d:	52                   	push   %edx
c1001d1e:	ff d0                	call   *%eax
c1001d20:	83 c4 10             	add    $0x10,%esp
c1001d23:	89 c2                	mov    %eax,%edx
c1001d25:	8b 45 08             	mov    0x8(%ebp),%eax
c1001d28:	89 50 1c             	mov    %edx,0x1c(%eax)
c1001d2b:	c9                   	leave  
c1001d2c:	c3                   	ret    

c1001d2d <kbd_proc_data>:
c1001d2d:	55                   	push   %ebp
c1001d2e:	89 e5                	mov    %esp,%ebp
c1001d30:	83 ec 18             	sub    $0x18,%esp
c1001d33:	83 ec 0c             	sub    $0xc,%esp
c1001d36:	6a 64                	push   $0x64
c1001d38:	e8 c3 e2 ff ff       	call   c1000000 <inb>
c1001d3d:	83 c4 10             	add    $0x10,%esp
c1001d40:	83 e0 01             	and    $0x1,%eax
c1001d43:	85 c0                	test   %eax,%eax
c1001d45:	75 0a                	jne    c1001d51 <kbd_proc_data+0x24>
c1001d47:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1001d4c:	e9 55 01 00 00       	jmp    c1001ea6 <kbd_proc_data+0x179>
c1001d51:	83 ec 0c             	sub    $0xc,%esp
c1001d54:	6a 60                	push   $0x60
c1001d56:	e8 a5 e2 ff ff       	call   c1000000 <inb>
c1001d5b:	83 c4 10             	add    $0x10,%esp
c1001d5e:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001d61:	80 7d f3 e0          	cmpb   $0xe0,-0xd(%ebp)
c1001d65:	75 17                	jne    c1001d7e <kbd_proc_data+0x51>
c1001d67:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001d6c:	83 c8 40             	or     $0x40,%eax
c1001d6f:	a3 68 fc 00 c1       	mov    %eax,0xc100fc68
c1001d74:	b8 00 00 00 00       	mov    $0x0,%eax
c1001d79:	e9 28 01 00 00       	jmp    c1001ea6 <kbd_proc_data+0x179>
c1001d7e:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d82:	84 c0                	test   %al,%al
c1001d84:	79 47                	jns    c1001dcd <kbd_proc_data+0xa0>
c1001d86:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001d8b:	83 e0 40             	and    $0x40,%eax
c1001d8e:	85 c0                	test   %eax,%eax
c1001d90:	75 09                	jne    c1001d9b <kbd_proc_data+0x6e>
c1001d92:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d96:	83 e0 7f             	and    $0x7f,%eax
c1001d99:	eb 04                	jmp    c1001d9f <kbd_proc_data+0x72>
c1001d9b:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d9f:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001da2:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001da6:	0f b6 80 00 d6 00 c1 	movzbl -0x3eff2a00(%eax),%eax
c1001dad:	83 c8 40             	or     $0x40,%eax
c1001db0:	0f b6 c0             	movzbl %al,%eax
c1001db3:	f7 d0                	not    %eax
c1001db5:	89 c2                	mov    %eax,%edx
c1001db7:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001dbc:	21 d0                	and    %edx,%eax
c1001dbe:	a3 68 fc 00 c1       	mov    %eax,0xc100fc68
c1001dc3:	b8 00 00 00 00       	mov    $0x0,%eax
c1001dc8:	e9 d9 00 00 00       	jmp    c1001ea6 <kbd_proc_data+0x179>
c1001dcd:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001dd2:	83 e0 40             	and    $0x40,%eax
c1001dd5:	85 c0                	test   %eax,%eax
c1001dd7:	74 11                	je     c1001dea <kbd_proc_data+0xbd>
c1001dd9:	80 4d f3 80          	orb    $0x80,-0xd(%ebp)
c1001ddd:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001de2:	83 e0 bf             	and    $0xffffffbf,%eax
c1001de5:	a3 68 fc 00 c1       	mov    %eax,0xc100fc68
c1001dea:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001dee:	0f b6 80 00 d6 00 c1 	movzbl -0x3eff2a00(%eax),%eax
c1001df5:	0f b6 d0             	movzbl %al,%edx
c1001df8:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001dfd:	09 d0                	or     %edx,%eax
c1001dff:	a3 68 fc 00 c1       	mov    %eax,0xc100fc68
c1001e04:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001e08:	0f b6 80 00 d7 00 c1 	movzbl -0x3eff2900(%eax),%eax
c1001e0f:	0f b6 d0             	movzbl %al,%edx
c1001e12:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001e17:	31 d0                	xor    %edx,%eax
c1001e19:	a3 68 fc 00 c1       	mov    %eax,0xc100fc68
c1001e1e:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001e23:	83 e0 03             	and    $0x3,%eax
c1001e26:	8b 14 85 00 db 00 c1 	mov    -0x3eff2500(,%eax,4),%edx
c1001e2d:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001e31:	01 d0                	add    %edx,%eax
c1001e33:	0f b6 00             	movzbl (%eax),%eax
c1001e36:	0f b6 c0             	movzbl %al,%eax
c1001e39:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001e3c:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001e41:	83 e0 08             	and    $0x8,%eax
c1001e44:	85 c0                	test   %eax,%eax
c1001e46:	74 22                	je     c1001e6a <kbd_proc_data+0x13d>
c1001e48:	83 7d f4 60          	cmpl   $0x60,-0xc(%ebp)
c1001e4c:	7e 0c                	jle    c1001e5a <kbd_proc_data+0x12d>
c1001e4e:	83 7d f4 7a          	cmpl   $0x7a,-0xc(%ebp)
c1001e52:	7f 06                	jg     c1001e5a <kbd_proc_data+0x12d>
c1001e54:	83 6d f4 20          	subl   $0x20,-0xc(%ebp)
c1001e58:	eb 10                	jmp    c1001e6a <kbd_proc_data+0x13d>
c1001e5a:	83 7d f4 40          	cmpl   $0x40,-0xc(%ebp)
c1001e5e:	7e 0a                	jle    c1001e6a <kbd_proc_data+0x13d>
c1001e60:	83 7d f4 5a          	cmpl   $0x5a,-0xc(%ebp)
c1001e64:	7f 04                	jg     c1001e6a <kbd_proc_data+0x13d>
c1001e66:	83 45 f4 20          	addl   $0x20,-0xc(%ebp)
c1001e6a:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001e6f:	f7 d0                	not    %eax
c1001e71:	83 e0 06             	and    $0x6,%eax
c1001e74:	85 c0                	test   %eax,%eax
c1001e76:	75 2b                	jne    c1001ea3 <kbd_proc_data+0x176>
c1001e78:	81 7d f4 e9 00 00 00 	cmpl   $0xe9,-0xc(%ebp)
c1001e7f:	75 22                	jne    c1001ea3 <kbd_proc_data+0x176>
c1001e81:	83 ec 0c             	sub    $0xc,%esp
c1001e84:	68 34 ac 00 c1       	push   $0xc100ac34
c1001e89:	e8 d5 36 00 00       	call   c1005563 <printk>
c1001e8e:	83 c4 10             	add    $0x10,%esp
c1001e91:	83 ec 08             	sub    $0x8,%esp
c1001e94:	6a 03                	push   $0x3
c1001e96:	68 92 00 00 00       	push   $0x92
c1001e9b:	e8 9c e1 ff ff       	call   c100003c <outb>
c1001ea0:	83 c4 10             	add    $0x10,%esp
c1001ea3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001ea6:	c9                   	leave  
c1001ea7:	c3                   	ret    

c1001ea8 <kbd_intr>:
c1001ea8:	55                   	push   %ebp
c1001ea9:	89 e5                	mov    %esp,%ebp
c1001eab:	83 ec 08             	sub    $0x8,%esp
c1001eae:	83 ec 0c             	sub    $0xc,%esp
c1001eb1:	68 2d 1d 00 c1       	push   $0xc1001d2d
c1001eb6:	e8 45 30 00 00       	call   c1004f00 <cons_intr>
c1001ebb:	83 c4 10             	add    $0x10,%esp
c1001ebe:	90                   	nop
c1001ebf:	c9                   	leave  
c1001ec0:	c3                   	ret    

c1001ec1 <kbd_init>:
c1001ec1:	55                   	push   %ebp
c1001ec2:	89 e5                	mov    %esp,%ebp
c1001ec4:	83 ec 18             	sub    $0x18,%esp
c1001ec7:	c7 05 20 42 a1 c1 00 	movl   $0x0,0xc1a14220
c1001ece:	00 00 00 
c1001ed1:	c7 05 24 42 a1 c1 00 	movl   $0x0,0xc1a14224
c1001ed8:	00 00 00 
c1001edb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1001ee2:	eb 0f                	jmp    c1001ef3 <kbd_init+0x32>
c1001ee4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001ee7:	05 20 40 a1 c1       	add    $0xc1a14020,%eax
c1001eec:	c6 00 00             	movb   $0x0,(%eax)
c1001eef:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1001ef3:	81 7d f4 ff 01 00 00 	cmpl   $0x1ff,-0xc(%ebp)
c1001efa:	7e e8                	jle    c1001ee4 <kbd_init+0x23>
c1001efc:	c6 05 6c fc 00 c1 00 	movb   $0x0,0xc100fc6c
c1001f03:	c7 05 68 fc 00 c1 00 	movl   $0x0,0xc100fc68
c1001f0a:	00 00 00 
c1001f0d:	e8 96 ff ff ff       	call   c1001ea8 <kbd_intr>
c1001f12:	83 ec 0c             	sub    $0xc,%esp
c1001f15:	6a 01                	push   $0x1
c1001f17:	e8 a3 2c 00 00       	call   c1004bbf <pic_enable>
c1001f1c:	83 c4 10             	add    $0x10,%esp
c1001f1f:	90                   	nop
c1001f20:	c9                   	leave  
c1001f21:	c3                   	ret    

c1001f22 <hash32>:
c1001f22:	55                   	push   %ebp
c1001f23:	89 e5                	mov    %esp,%ebp
c1001f25:	83 ec 10             	sub    $0x10,%esp
c1001f28:	8b 45 08             	mov    0x8(%ebp),%eax
c1001f2b:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1001f31:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1001f34:	b8 20 00 00 00       	mov    $0x20,%eax
c1001f39:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001f3c:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001f3f:	89 c1                	mov    %eax,%ecx
c1001f41:	d3 ea                	shr    %cl,%edx
c1001f43:	89 d0                	mov    %edx,%eax
c1001f45:	c9                   	leave  
c1001f46:	c3                   	ret    

c1001f47 <main>:
c1001f47:	8d 4c 24 04          	lea    0x4(%esp),%ecx
c1001f4b:	83 e4 f0             	and    $0xfffffff0,%esp
c1001f4e:	ff 71 fc             	pushl  -0x4(%ecx)
c1001f51:	55                   	push   %ebp
c1001f52:	89 e5                	mov    %esp,%ebp
c1001f54:	51                   	push   %ecx
c1001f55:	83 ec 04             	sub    $0x4,%esp
c1001f58:	e8 09 32 00 00       	call   c1005166 <clear>
c1001f5d:	83 ec 0c             	sub    $0xc,%esp
c1001f60:	68 40 ac 00 c1       	push   $0xc100ac40
c1001f65:	e8 f9 35 00 00       	call   c1005563 <printk>
c1001f6a:	83 c4 10             	add    $0x10,%esp
c1001f6d:	e8 60 e7 ff ff       	call   c10006d2 <gdt_init>
c1001f72:	e8 7b 2c 00 00       	call   c1004bf2 <pic_init>
c1001f77:	e8 4a e8 ff ff       	call   c10007c6 <idt_init>
c1001f7c:	e8 c7 ed ff ff       	call   c1000d48 <enable_interupt>
c1001f81:	e8 d5 2d 00 00       	call   c1004d5b <serial_init>
c1001f86:	e8 36 ff ff ff       	call   c1001ec1 <kbd_init>
c1001f8b:	e8 a7 0b 00 00       	call   c1002b37 <setup_vpt>
c1001f90:	e8 ba 05 00 00       	call   c100254f <pmm_init>
c1001f95:	e8 ff 01 00 00       	call   c1002199 <test_pmm>
c1001f9a:	e8 e3 02 00 00       	call   c1002282 <test_vmm>
c1001f9f:	e8 ab 60 00 00       	call   c100804f <fs_init>
c1001fa4:	83 ec 0c             	sub    $0xc,%esp
c1001fa7:	68 94 21 00 c1       	push   $0xc1002194
c1001fac:	e8 cb 10 00 00       	call   c100307c <kernel_task_init>
c1001fb1:	83 c4 10             	add    $0x10,%esp
c1001fb4:	e8 3b 00 00 00       	call   c1001ff4 <write2fs>
c1001fb9:	e8 a8 31 00 00       	call   c1005166 <clear>
c1001fbe:	83 ec 0c             	sub    $0xc,%esp
c1001fc1:	6a 64                	push   $0x64
c1001fc3:	e8 9b 30 00 00       	call   c1005063 <timer_init>
c1001fc8:	83 c4 10             	add    $0x10,%esp
c1001fcb:	83 ec 08             	sub    $0x8,%esp
c1001fce:	6a 00                	push   $0x0
c1001fd0:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1001fd5:	e8 dd 39 00 00       	call   c10059b7 <sema_init>
c1001fda:	83 c4 10             	add    $0x10,%esp
c1001fdd:	e8 8a ed ff ff       	call   c1000d6c <intr_enable>
c1001fe2:	83 ec 0c             	sub    $0xc,%esp
c1001fe5:	68 52 00 00 40       	push   $0x40000052
c1001fea:	e8 79 24 00 00       	call   c1004468 <user_task_init>
c1001fef:	83 c4 10             	add    $0x10,%esp
c1001ff2:	eb fe                	jmp    c1001ff2 <main+0xab>

c1001ff4 <write2fs>:
c1001ff4:	55                   	push   %ebp
c1001ff5:	89 e5                	mov    %esp,%ebp
c1001ff7:	83 ec 38             	sub    $0x38,%esp
c1001ffa:	c7 45 f4 1c 36 00 00 	movl   $0x361c,-0xc(%ebp)
c1002001:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002004:	05 ff 01 00 00       	add    $0x1ff,%eax
c1002009:	c1 e8 09             	shr    $0x9,%eax
c100200c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100200f:	83 ec 08             	sub    $0x8,%esp
c1002012:	6a 01                	push   $0x1
c1002014:	ff 75 f4             	pushl  -0xc(%ebp)
c1002017:	e8 f3 0b 00 00       	call   c1002c0f <vmm_malloc>
c100201c:	83 c4 10             	add    $0x10,%esp
c100201f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002022:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002025:	83 ec 04             	sub    $0x4,%esp
c1002028:	ff 75 f0             	pushl  -0x10(%ebp)
c100202b:	68 f4 01 00 00       	push   $0x1f4
c1002030:	50                   	push   %eax
c1002031:	e8 d5 3d 00 00       	call   c1005e0b <ide_read>
c1002036:	83 c4 10             	add    $0x10,%esp
c1002039:	83 ec 08             	sub    $0x8,%esp
c100203c:	6a 06                	push   $0x6
c100203e:	68 56 ac 00 c1       	push   $0xc100ac56
c1002043:	e8 27 4b 00 00       	call   c1006b6f <sys_open>
c1002048:	83 c4 10             	add    $0x10,%esp
c100204b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100204e:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1002052:	74 2c                	je     c1002080 <write2fs+0x8c>
c1002054:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002057:	83 ec 04             	sub    $0x4,%esp
c100205a:	ff 75 f4             	pushl  -0xc(%ebp)
c100205d:	50                   	push   %eax
c100205e:	ff 75 e8             	pushl  -0x18(%ebp)
c1002061:	e8 04 4e 00 00       	call   c1006e6a <sys_write>
c1002066:	83 c4 10             	add    $0x10,%esp
c1002069:	83 f8 ff             	cmp    $0xffffffff,%eax
c100206c:	75 12                	jne    c1002080 <write2fs+0x8c>
c100206e:	83 ec 0c             	sub    $0xc,%esp
c1002071:	68 5c ac 00 c1       	push   $0xc100ac5c
c1002076:	e8 e8 34 00 00       	call   c1005563 <printk>
c100207b:	83 c4 10             	add    $0x10,%esp
c100207e:	eb fe                	jmp    c100207e <write2fs+0x8a>
c1002080:	83 ec 08             	sub    $0x8,%esp
c1002083:	ff 75 f4             	pushl  -0xc(%ebp)
c1002086:	ff 75 ec             	pushl  -0x14(%ebp)
c1002089:	e8 a6 0c 00 00       	call   c1002d34 <vmm_free>
c100208e:	83 c4 10             	add    $0x10,%esp
c1002091:	c7 45 f4 dc 44 00 00 	movl   $0x44dc,-0xc(%ebp)
c1002098:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100209b:	05 ff 01 00 00       	add    $0x1ff,%eax
c10020a0:	c1 e8 09             	shr    $0x9,%eax
c10020a3:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10020a6:	83 ec 08             	sub    $0x8,%esp
c10020a9:	6a 01                	push   $0x1
c10020ab:	ff 75 f4             	pushl  -0xc(%ebp)
c10020ae:	e8 5c 0b 00 00       	call   c1002c0f <vmm_malloc>
c10020b3:	83 c4 10             	add    $0x10,%esp
c10020b6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10020b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10020bc:	83 ec 04             	sub    $0x4,%esp
c10020bf:	ff 75 f0             	pushl  -0x10(%ebp)
c10020c2:	68 12 02 00 00       	push   $0x212
c10020c7:	50                   	push   %eax
c10020c8:	e8 3e 3d 00 00       	call   c1005e0b <ide_read>
c10020cd:	83 c4 10             	add    $0x10,%esp
c10020d0:	83 ec 08             	sub    $0x8,%esp
c10020d3:	6a 06                	push   $0x6
c10020d5:	68 6f ac 00 c1       	push   $0xc100ac6f
c10020da:	e8 90 4a 00 00       	call   c1006b6f <sys_open>
c10020df:	83 c4 10             	add    $0x10,%esp
c10020e2:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10020e5:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c10020e9:	74 2c                	je     c1002117 <write2fs+0x123>
c10020eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10020ee:	83 ec 04             	sub    $0x4,%esp
c10020f1:	ff 75 f4             	pushl  -0xc(%ebp)
c10020f4:	50                   	push   %eax
c10020f5:	ff 75 e8             	pushl  -0x18(%ebp)
c10020f8:	e8 6d 4d 00 00       	call   c1006e6a <sys_write>
c10020fd:	83 c4 10             	add    $0x10,%esp
c1002100:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002103:	75 12                	jne    c1002117 <write2fs+0x123>
c1002105:	83 ec 0c             	sub    $0xc,%esp
c1002108:	68 5c ac 00 c1       	push   $0xc100ac5c
c100210d:	e8 51 34 00 00       	call   c1005563 <printk>
c1002112:	83 c4 10             	add    $0x10,%esp
c1002115:	eb fe                	jmp    c1002115 <write2fs+0x121>
c1002117:	83 ec 08             	sub    $0x8,%esp
c100211a:	ff 75 f4             	pushl  -0xc(%ebp)
c100211d:	ff 75 ec             	pushl  -0x14(%ebp)
c1002120:	e8 0f 0c 00 00       	call   c1002d34 <vmm_free>
c1002125:	83 c4 10             	add    $0x10,%esp
c1002128:	83 ec 08             	sub    $0x8,%esp
c100212b:	6a 06                	push   $0x6
c100212d:	68 74 ac 00 c1       	push   $0xc100ac74
c1002132:	e8 38 4a 00 00       	call   c1006b6f <sys_open>
c1002137:	83 c4 10             	add    $0x10,%esp
c100213a:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100213d:	c7 45 d4 48 65 6c 6c 	movl   $0x6c6c6548,-0x2c(%ebp)
c1002144:	c7 45 d8 6f 20 49 27 	movl   $0x2749206f,-0x28(%ebp)
c100214b:	c7 45 dc 6d 20 61 20 	movl   $0x2061206d,-0x24(%ebp)
c1002152:	c7 45 e0 66 69 6c 65 	movl   $0x656c6966,-0x20(%ebp)
c1002159:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002160:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1002164:	74 2b                	je     c1002191 <write2fs+0x19d>
c1002166:	83 ec 04             	sub    $0x4,%esp
c1002169:	6a 14                	push   $0x14
c100216b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
c100216e:	50                   	push   %eax
c100216f:	ff 75 e8             	pushl  -0x18(%ebp)
c1002172:	e8 f3 4c 00 00       	call   c1006e6a <sys_write>
c1002177:	83 c4 10             	add    $0x10,%esp
c100217a:	83 f8 ff             	cmp    $0xffffffff,%eax
c100217d:	75 12                	jne    c1002191 <write2fs+0x19d>
c100217f:	83 ec 0c             	sub    $0xc,%esp
c1002182:	68 5c ac 00 c1       	push   $0xc100ac5c
c1002187:	e8 d7 33 00 00       	call   c1005563 <printk>
c100218c:	83 c4 10             	add    $0x10,%esp
c100218f:	eb fe                	jmp    c100218f <write2fs+0x19b>
c1002191:	90                   	nop
c1002192:	c9                   	leave  
c1002193:	c3                   	ret    

c1002194 <kernel_main>:
c1002194:	55                   	push   %ebp
c1002195:	89 e5                	mov    %esp,%ebp
c1002197:	eb fe                	jmp    c1002197 <kernel_main+0x3>

c1002199 <test_pmm>:
c1002199:	55                   	push   %ebp
c100219a:	89 e5                	mov    %esp,%ebp
c100219c:	83 ec 18             	sub    $0x18,%esp
c100219f:	83 ec 08             	sub    $0x8,%esp
c10021a2:	6a 01                	push   $0x1
c10021a4:	68 00 02 00 00       	push   $0x200
c10021a9:	e8 c1 07 00 00       	call   c100296f <pmm_alloc>
c10021ae:	83 c4 10             	add    $0x10,%esp
c10021b1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10021b4:	83 ec 08             	sub    $0x8,%esp
c10021b7:	6a 00                	push   $0x0
c10021b9:	68 00 20 00 00       	push   $0x2000
c10021be:	e8 ac 07 00 00       	call   c100296f <pmm_alloc>
c10021c3:	83 c4 10             	add    $0x10,%esp
c10021c6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10021c9:	83 ec 08             	sub    $0x8,%esp
c10021cc:	6a 02                	push   $0x2
c10021ce:	68 00 30 00 00       	push   $0x3000
c10021d3:	e8 97 07 00 00       	call   c100296f <pmm_alloc>
c10021d8:	83 c4 10             	add    $0x10,%esp
c10021db:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10021de:	83 ec 08             	sub    $0x8,%esp
c10021e1:	ff 75 f0             	pushl  -0x10(%ebp)
c10021e4:	68 7a ac 00 c1       	push   $0xc100ac7a
c10021e9:	e8 75 33 00 00       	call   c1005563 <printk>
c10021ee:	83 c4 10             	add    $0x10,%esp
c10021f1:	83 ec 08             	sub    $0x8,%esp
c10021f4:	ff 75 f4             	pushl  -0xc(%ebp)
c10021f7:	68 90 ac 00 c1       	push   $0xc100ac90
c10021fc:	e8 62 33 00 00       	call   c1005563 <printk>
c1002201:	83 c4 10             	add    $0x10,%esp
c1002204:	8b 0d c8 1c 01 c1    	mov    0xc1011cc8,%ecx
c100220a:	8b 15 e8 1c 61 c1    	mov    0xc1611ce8,%edx
c1002210:	a1 f4 1c 61 c1       	mov    0xc1611cf4,%eax
c1002215:	51                   	push   %ecx
c1002216:	52                   	push   %edx
c1002217:	50                   	push   %eax
c1002218:	68 ac ac 00 c1       	push   $0xc100acac
c100221d:	e8 41 33 00 00       	call   c1005563 <printk>
c1002222:	83 c4 10             	add    $0x10,%esp
c1002225:	83 ec 08             	sub    $0x8,%esp
c1002228:	68 00 02 00 00       	push   $0x200
c100222d:	ff 75 f4             	pushl  -0xc(%ebp)
c1002230:	e8 36 08 00 00       	call   c1002a6b <pmm_free>
c1002235:	83 c4 10             	add    $0x10,%esp
c1002238:	83 ec 08             	sub    $0x8,%esp
c100223b:	68 00 20 00 00       	push   $0x2000
c1002240:	ff 75 f0             	pushl  -0x10(%ebp)
c1002243:	e8 23 08 00 00       	call   c1002a6b <pmm_free>
c1002248:	83 c4 10             	add    $0x10,%esp
c100224b:	83 ec 08             	sub    $0x8,%esp
c100224e:	68 00 30 00 00       	push   $0x3000
c1002253:	ff 75 ec             	pushl  -0x14(%ebp)
c1002256:	e8 10 08 00 00       	call   c1002a6b <pmm_free>
c100225b:	83 c4 10             	add    $0x10,%esp
c100225e:	8b 0d c8 1c 01 c1    	mov    0xc1011cc8,%ecx
c1002264:	8b 15 e8 1c 61 c1    	mov    0xc1611ce8,%edx
c100226a:	a1 f4 1c 61 c1       	mov    0xc1611cf4,%eax
c100226f:	51                   	push   %ecx
c1002270:	52                   	push   %edx
c1002271:	50                   	push   %eax
c1002272:	68 ac ac 00 c1       	push   $0xc100acac
c1002277:	e8 e7 32 00 00       	call   c1005563 <printk>
c100227c:	83 c4 10             	add    $0x10,%esp
c100227f:	90                   	nop
c1002280:	c9                   	leave  
c1002281:	c3                   	ret    

c1002282 <test_vmm>:
c1002282:	55                   	push   %ebp
c1002283:	89 e5                	mov    %esp,%ebp
c1002285:	83 ec 38             	sub    $0x38,%esp
c1002288:	83 ec 0c             	sub    $0xc,%esp
c100228b:	68 f3 ac 00 c1       	push   $0xc100acf3
c1002290:	e8 ce 32 00 00       	call   c1005563 <printk>
c1002295:	83 c4 10             	add    $0x10,%esp
c1002298:	83 ec 08             	sub    $0x8,%esp
c100229b:	6a 00                	push   $0x0
c100229d:	68 00 01 00 00       	push   $0x100
c10022a2:	e8 68 09 00 00       	call   c1002c0f <vmm_malloc>
c10022a7:	83 c4 10             	add    $0x10,%esp
c10022aa:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10022ad:	83 ec 08             	sub    $0x8,%esp
c10022b0:	6a 01                	push   $0x1
c10022b2:	68 00 20 00 00       	push   $0x2000
c10022b7:	e8 53 09 00 00       	call   c1002c0f <vmm_malloc>
c10022bc:	83 c4 10             	add    $0x10,%esp
c10022bf:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10022c2:	83 ec 08             	sub    $0x8,%esp
c10022c5:	6a 02                	push   $0x2
c10022c7:	68 00 30 00 00       	push   $0x3000
c10022cc:	e8 3e 09 00 00       	call   c1002c0f <vmm_malloc>
c10022d1:	83 c4 10             	add    $0x10,%esp
c10022d4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10022d7:	83 ec 08             	sub    $0x8,%esp
c10022da:	ff 75 f4             	pushl  -0xc(%ebp)
c10022dd:	68 7a ac 00 c1       	push   $0xc100ac7a
c10022e2:	e8 7c 32 00 00       	call   c1005563 <printk>
c10022e7:	83 c4 10             	add    $0x10,%esp
c10022ea:	83 ec 08             	sub    $0x8,%esp
c10022ed:	ff 75 f0             	pushl  -0x10(%ebp)
c10022f0:	68 90 ac 00 c1       	push   $0xc100ac90
c10022f5:	e8 69 32 00 00       	call   c1005563 <printk>
c10022fa:	83 c4 10             	add    $0x10,%esp
c10022fd:	83 ec 08             	sub    $0x8,%esp
c1002300:	ff 75 ec             	pushl  -0x14(%ebp)
c1002303:	68 0a ad 00 c1       	push   $0xc100ad0a
c1002308:	e8 56 32 00 00       	call   c1005563 <printk>
c100230d:	83 c4 10             	add    $0x10,%esp
c1002310:	83 ec 0c             	sub    $0xc,%esp
c1002313:	68 25 ad 00 c1       	push   $0xc100ad25
c1002318:	e8 46 32 00 00       	call   c1005563 <printk>
c100231d:	83 c4 10             	add    $0x10,%esp
c1002320:	83 ec 08             	sub    $0x8,%esp
c1002323:	6a 00                	push   $0x0
c1002325:	68 00 01 00 00       	push   $0x100
c100232a:	e8 e0 08 00 00       	call   c1002c0f <vmm_malloc>
c100232f:	83 c4 10             	add    $0x10,%esp
c1002332:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002335:	83 ec 08             	sub    $0x8,%esp
c1002338:	6a 01                	push   $0x1
c100233a:	68 00 20 00 00       	push   $0x2000
c100233f:	e8 cb 08 00 00       	call   c1002c0f <vmm_malloc>
c1002344:	83 c4 10             	add    $0x10,%esp
c1002347:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100234a:	83 ec 08             	sub    $0x8,%esp
c100234d:	6a 02                	push   $0x2
c100234f:	68 00 30 00 00       	push   $0x3000
c1002354:	e8 b6 08 00 00       	call   c1002c0f <vmm_malloc>
c1002359:	83 c4 10             	add    $0x10,%esp
c100235c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100235f:	83 ec 08             	sub    $0x8,%esp
c1002362:	ff 75 e8             	pushl  -0x18(%ebp)
c1002365:	68 7a ac 00 c1       	push   $0xc100ac7a
c100236a:	e8 f4 31 00 00       	call   c1005563 <printk>
c100236f:	83 c4 10             	add    $0x10,%esp
c1002372:	83 ec 08             	sub    $0x8,%esp
c1002375:	ff 75 e4             	pushl  -0x1c(%ebp)
c1002378:	68 90 ac 00 c1       	push   $0xc100ac90
c100237d:	e8 e1 31 00 00       	call   c1005563 <printk>
c1002382:	83 c4 10             	add    $0x10,%esp
c1002385:	83 ec 08             	sub    $0x8,%esp
c1002388:	ff 75 e0             	pushl  -0x20(%ebp)
c100238b:	68 0a ad 00 c1       	push   $0xc100ad0a
c1002390:	e8 ce 31 00 00       	call   c1005563 <printk>
c1002395:	83 c4 10             	add    $0x10,%esp
c1002398:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100239b:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100239e:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10023a1:	c6 00 ff             	movb   $0xff,(%eax)
c10023a4:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10023a7:	0f b6 00             	movzbl (%eax),%eax
c10023aa:	0f b6 c0             	movzbl %al,%eax
c10023ad:	83 ec 08             	sub    $0x8,%esp
c10023b0:	50                   	push   %eax
c10023b1:	68 3c ad 00 c1       	push   $0xc100ad3c
c10023b6:	e8 a8 31 00 00       	call   c1005563 <printk>
c10023bb:	83 c4 10             	add    $0x10,%esp
c10023be:	83 ec 08             	sub    $0x8,%esp
c10023c1:	68 00 01 00 00       	push   $0x100
c10023c6:	ff 75 f4             	pushl  -0xc(%ebp)
c10023c9:	e8 66 09 00 00       	call   c1002d34 <vmm_free>
c10023ce:	83 c4 10             	add    $0x10,%esp
c10023d1:	83 ec 08             	sub    $0x8,%esp
c10023d4:	68 00 20 00 00       	push   $0x2000
c10023d9:	ff 75 f0             	pushl  -0x10(%ebp)
c10023dc:	e8 53 09 00 00       	call   c1002d34 <vmm_free>
c10023e1:	83 c4 10             	add    $0x10,%esp
c10023e4:	83 ec 08             	sub    $0x8,%esp
c10023e7:	68 00 30 00 00       	push   $0x3000
c10023ec:	ff 75 ec             	pushl  -0x14(%ebp)
c10023ef:	e8 40 09 00 00       	call   c1002d34 <vmm_free>
c10023f4:	83 c4 10             	add    $0x10,%esp
c10023f7:	83 ec 08             	sub    $0x8,%esp
c10023fa:	6a 00                	push   $0x0
c10023fc:	68 00 01 00 00       	push   $0x100
c1002401:	e8 09 08 00 00       	call   c1002c0f <vmm_malloc>
c1002406:	83 c4 10             	add    $0x10,%esp
c1002409:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100240c:	83 ec 08             	sub    $0x8,%esp
c100240f:	6a 01                	push   $0x1
c1002411:	68 00 20 00 00       	push   $0x2000
c1002416:	e8 f4 07 00 00       	call   c1002c0f <vmm_malloc>
c100241b:	83 c4 10             	add    $0x10,%esp
c100241e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1002421:	83 ec 08             	sub    $0x8,%esp
c1002424:	6a 02                	push   $0x2
c1002426:	68 00 30 00 00       	push   $0x3000
c100242b:	e8 df 07 00 00       	call   c1002c0f <vmm_malloc>
c1002430:	83 c4 10             	add    $0x10,%esp
c1002433:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1002436:	83 ec 08             	sub    $0x8,%esp
c1002439:	ff 75 d8             	pushl  -0x28(%ebp)
c100243c:	68 7a ac 00 c1       	push   $0xc100ac7a
c1002441:	e8 1d 31 00 00       	call   c1005563 <printk>
c1002446:	83 c4 10             	add    $0x10,%esp
c1002449:	83 ec 08             	sub    $0x8,%esp
c100244c:	ff 75 d4             	pushl  -0x2c(%ebp)
c100244f:	68 90 ac 00 c1       	push   $0xc100ac90
c1002454:	e8 0a 31 00 00       	call   c1005563 <printk>
c1002459:	83 c4 10             	add    $0x10,%esp
c100245c:	83 ec 08             	sub    $0x8,%esp
c100245f:	ff 75 d0             	pushl  -0x30(%ebp)
c1002462:	68 0a ad 00 c1       	push   $0xc100ad0a
c1002467:	e8 f7 30 00 00       	call   c1005563 <printk>
c100246c:	83 c4 10             	add    $0x10,%esp
c100246f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1002472:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1002475:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1002478:	c6 00 ff             	movb   $0xff,(%eax)
c100247b:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100247e:	0f b6 00             	movzbl (%eax),%eax
c1002481:	0f b6 c0             	movzbl %al,%eax
c1002484:	83 ec 08             	sub    $0x8,%esp
c1002487:	50                   	push   %eax
c1002488:	68 48 ad 00 c1       	push   $0xc100ad48
c100248d:	e8 d1 30 00 00       	call   c1005563 <printk>
c1002492:	83 c4 10             	add    $0x10,%esp
c1002495:	90                   	nop
c1002496:	c9                   	leave  
c1002497:	c3                   	ret    

c1002498 <test_schedule>:
c1002498:	55                   	push   %ebp
c1002499:	89 e5                	mov    %esp,%ebp
c100249b:	83 ec 08             	sub    $0x8,%esp
c100249e:	e8 c9 e8 ff ff       	call   c1000d6c <intr_enable>
c10024a3:	eb fe                	jmp    c10024a3 <test_schedule+0xb>

c10024a5 <print_task1>:
c10024a5:	55                   	push   %ebp
c10024a6:	89 e5                	mov    %esp,%ebp
c10024a8:	83 ec 18             	sub    $0x18,%esp
c10024ab:	8b 45 08             	mov    0x8(%ebp),%eax
c10024ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10024b1:	83 ec 08             	sub    $0x8,%esp
c10024b4:	ff 75 f4             	pushl  -0xc(%ebp)
c10024b7:	68 54 ad 00 c1       	push   $0xc100ad54
c10024bc:	e8 a2 30 00 00       	call   c1005563 <printk>
c10024c1:	83 c4 10             	add    $0x10,%esp
c10024c4:	83 ec 0c             	sub    $0xc,%esp
c10024c7:	68 40 42 0f 00       	push   $0xf4240
c10024cc:	e8 36 00 00 00       	call   c1002507 <delay>
c10024d1:	83 c4 10             	add    $0x10,%esp
c10024d4:	eb db                	jmp    c10024b1 <print_task1+0xc>

c10024d6 <print_task2>:
c10024d6:	55                   	push   %ebp
c10024d7:	89 e5                	mov    %esp,%ebp
c10024d9:	83 ec 18             	sub    $0x18,%esp
c10024dc:	8b 45 08             	mov    0x8(%ebp),%eax
c10024df:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10024e2:	83 ec 08             	sub    $0x8,%esp
c10024e5:	ff 75 f4             	pushl  -0xc(%ebp)
c10024e8:	68 54 ad 00 c1       	push   $0xc100ad54
c10024ed:	e8 71 30 00 00       	call   c1005563 <printk>
c10024f2:	83 c4 10             	add    $0x10,%esp
c10024f5:	83 ec 0c             	sub    $0xc,%esp
c10024f8:	68 40 42 0f 00       	push   $0xf4240
c10024fd:	e8 05 00 00 00       	call   c1002507 <delay>
c1002502:	83 c4 10             	add    $0x10,%esp
c1002505:	eb db                	jmp    c10024e2 <print_task2+0xc>

c1002507 <delay>:
c1002507:	55                   	push   %ebp
c1002508:	89 e5                	mov    %esp,%ebp
c100250a:	83 ec 10             	sub    $0x10,%esp
c100250d:	8b 45 08             	mov    0x8(%ebp),%eax
c1002510:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002513:	eb 17                	jmp    c100252c <delay+0x25>
c1002515:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c100251c:	eb 04                	jmp    c1002522 <delay+0x1b>
c100251e:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c1002522:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c1002526:	75 f6                	jne    c100251e <delay+0x17>
c1002528:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c100252c:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1002530:	75 e3                	jne    c1002515 <delay+0xe>
c1002532:	90                   	nop
c1002533:	90                   	nop
c1002534:	c9                   	leave  
c1002535:	c3                   	ret    

c1002536 <test_user>:
c1002536:	55                   	push   %ebp
c1002537:	89 e5                	mov    %esp,%ebp
c1002539:	83 ec 08             	sub    $0x8,%esp
c100253c:	83 ec 0c             	sub    $0xc,%esp
c100253f:	68 52 00 00 40       	push   $0x40000052
c1002544:	e8 1f 1f 00 00       	call   c1004468 <user_task_init>
c1002549:	83 c4 10             	add    $0x10,%esp
c100254c:	90                   	nop
c100254d:	c9                   	leave  
c100254e:	c3                   	ret    

c100254f <pmm_init>:
c100254f:	55                   	push   %ebp
c1002550:	89 e5                	mov    %esp,%ebp
c1002552:	83 ec 38             	sub    $0x38,%esp
c1002555:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100255c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002563:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100256a:	c7 45 d4 04 80 00 c0 	movl   $0xc0008004,-0x2c(%ebp)
c1002571:	b8 00 80 00 c0       	mov    $0xc0008000,%eax
c1002576:	8b 00                	mov    (%eax),%eax
c1002578:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100257b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002582:	e9 98 02 00 00       	jmp    c100281f <pmm_init+0x2d0>
c1002587:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100258a:	89 d0                	mov    %edx,%eax
c100258c:	c1 e0 02             	shl    $0x2,%eax
c100258f:	01 d0                	add    %edx,%eax
c1002591:	c1 e0 02             	shl    $0x2,%eax
c1002594:	89 c2                	mov    %eax,%edx
c1002596:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1002599:	01 d0                	add    %edx,%eax
c100259b:	8b 50 04             	mov    0x4(%eax),%edx
c100259e:	8b 00                	mov    (%eax),%eax
c10025a0:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10025a3:	e9 40 02 00 00       	jmp    c10027e8 <pmm_init+0x299>
c10025a8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025ab:	85 c0                	test   %eax,%eax
c10025ad:	0f 88 2e 02 00 00    	js     c10027e1 <pmm_init+0x292>
c10025b3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10025b6:	89 d0                	mov    %edx,%eax
c10025b8:	c1 e0 02             	shl    $0x2,%eax
c10025bb:	01 d0                	add    %edx,%eax
c10025bd:	c1 e0 02             	shl    $0x2,%eax
c10025c0:	89 c2                	mov    %eax,%edx
c10025c2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10025c5:	01 d0                	add    %edx,%eax
c10025c7:	8b 40 10             	mov    0x10(%eax),%eax
c10025ca:	83 f8 01             	cmp    $0x1,%eax
c10025cd:	75 59                	jne    c1002628 <pmm_init+0xd9>
c10025cf:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025d2:	c1 e8 0c             	shr    $0xc,%eax
c10025d5:	89 c2                	mov    %eax,%edx
c10025d7:	89 d0                	mov    %edx,%eax
c10025d9:	01 c0                	add    %eax,%eax
c10025db:	01 d0                	add    %edx,%eax
c10025dd:	c1 e0 02             	shl    $0x2,%eax
c10025e0:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c10025e5:	c6 00 00             	movb   $0x0,(%eax)
c10025e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025eb:	c1 e8 0c             	shr    $0xc,%eax
c10025ee:	89 c2                	mov    %eax,%edx
c10025f0:	89 d0                	mov    %edx,%eax
c10025f2:	01 c0                	add    %eax,%eax
c10025f4:	01 d0                	add    %edx,%eax
c10025f6:	c1 e0 02             	shl    $0x2,%eax
c10025f9:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c10025fe:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c1002604:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002607:	c1 e8 0c             	shr    $0xc,%eax
c100260a:	89 c2                	mov    %eax,%edx
c100260c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100260f:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002614:	89 c1                	mov    %eax,%ecx
c1002616:	89 d0                	mov    %edx,%eax
c1002618:	01 c0                	add    %eax,%eax
c100261a:	01 d0                	add    %edx,%eax
c100261c:	c1 e0 02             	shl    $0x2,%eax
c100261f:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c1002624:	89 08                	mov    %ecx,(%eax)
c1002626:	eb 57                	jmp    c100267f <pmm_init+0x130>
c1002628:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100262b:	c1 e8 0c             	shr    $0xc,%eax
c100262e:	89 c2                	mov    %eax,%edx
c1002630:	89 d0                	mov    %edx,%eax
c1002632:	01 c0                	add    %eax,%eax
c1002634:	01 d0                	add    %edx,%eax
c1002636:	c1 e0 02             	shl    $0x2,%eax
c1002639:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c100263e:	c6 00 08             	movb   $0x8,(%eax)
c1002641:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002644:	c1 e8 0c             	shr    $0xc,%eax
c1002647:	89 c2                	mov    %eax,%edx
c1002649:	89 d0                	mov    %edx,%eax
c100264b:	01 c0                	add    %eax,%eax
c100264d:	01 d0                	add    %edx,%eax
c100264f:	c1 e0 02             	shl    $0x2,%eax
c1002652:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c1002657:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100265d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002660:	c1 e8 0c             	shr    $0xc,%eax
c1002663:	89 c2                	mov    %eax,%edx
c1002665:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002668:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100266d:	89 c1                	mov    %eax,%ecx
c100266f:	89 d0                	mov    %edx,%eax
c1002671:	01 c0                	add    %eax,%eax
c1002673:	01 d0                	add    %edx,%eax
c1002675:	c1 e0 02             	shl    $0x2,%eax
c1002678:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c100267d:	89 08                	mov    %ecx,(%eax)
c100267f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002682:	c1 e8 0c             	shr    $0xc,%eax
c1002685:	89 c2                	mov    %eax,%edx
c1002687:	89 d0                	mov    %edx,%eax
c1002689:	01 c0                	add    %eax,%eax
c100268b:	01 d0                	add    %edx,%eax
c100268d:	c1 e0 02             	shl    $0x2,%eax
c1002690:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c1002695:	8b 00                	mov    (%eax),%eax
c1002697:	3d ff ff ff 00       	cmp    $0xffffff,%eax
c100269c:	77 62                	ja     c1002700 <pmm_init+0x1b1>
c100269e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026a1:	c1 e8 0c             	shr    $0xc,%eax
c10026a4:	89 c1                	mov    %eax,%ecx
c10026a6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026a9:	c1 e8 0c             	shr    $0xc,%eax
c10026ac:	89 c2                	mov    %eax,%edx
c10026ae:	89 c8                	mov    %ecx,%eax
c10026b0:	01 c0                	add    %eax,%eax
c10026b2:	01 c8                	add    %ecx,%eax
c10026b4:	c1 e0 02             	shl    $0x2,%eax
c10026b7:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c10026bc:	0f b6 08             	movzbl (%eax),%ecx
c10026bf:	89 d0                	mov    %edx,%eax
c10026c1:	01 c0                	add    %eax,%eax
c10026c3:	01 d0                	add    %edx,%eax
c10026c5:	c1 e0 02             	shl    $0x2,%eax
c10026c8:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c10026cd:	88 08                	mov    %cl,(%eax)
c10026cf:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026d2:	c1 e8 0c             	shr    $0xc,%eax
c10026d5:	89 c2                	mov    %eax,%edx
c10026d7:	89 d0                	mov    %edx,%eax
c10026d9:	01 c0                	add    %eax,%eax
c10026db:	01 d0                	add    %edx,%eax
c10026dd:	c1 e0 02             	shl    $0x2,%eax
c10026e0:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c10026e5:	8b 00                	mov    (%eax),%eax
c10026e7:	83 f8 ff             	cmp    $0xffffffff,%eax
c10026ea:	75 07                	jne    c10026f3 <pmm_init+0x1a4>
c10026ec:	b8 01 00 00 00       	mov    $0x1,%eax
c10026f1:	eb 05                	jmp    c10026f8 <pmm_init+0x1a9>
c10026f3:	b8 00 00 00 00       	mov    $0x0,%eax
c10026f8:	01 45 f4             	add    %eax,-0xc(%ebp)
c10026fb:	e9 e1 00 00 00       	jmp    c10027e1 <pmm_init+0x292>
c1002700:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002703:	c1 e8 0c             	shr    $0xc,%eax
c1002706:	89 c2                	mov    %eax,%edx
c1002708:	89 d0                	mov    %edx,%eax
c100270a:	01 c0                	add    %eax,%eax
c100270c:	01 d0                	add    %edx,%eax
c100270e:	c1 e0 02             	shl    $0x2,%eax
c1002711:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c1002716:	8b 00                	mov    (%eax),%eax
c1002718:	3d ff ff ff 37       	cmp    $0x37ffffff,%eax
c100271d:	77 62                	ja     c1002781 <pmm_init+0x232>
c100271f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002722:	c1 e8 0c             	shr    $0xc,%eax
c1002725:	89 c2                	mov    %eax,%edx
c1002727:	89 d0                	mov    %edx,%eax
c1002729:	01 c0                	add    %eax,%eax
c100272b:	01 d0                	add    %edx,%eax
c100272d:	c1 e0 02             	shl    $0x2,%eax
c1002730:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002735:	0f b6 08             	movzbl (%eax),%ecx
c1002738:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100273b:	c1 e8 0c             	shr    $0xc,%eax
c100273e:	89 c2                	mov    %eax,%edx
c1002740:	83 c9 10             	or     $0x10,%ecx
c1002743:	89 d0                	mov    %edx,%eax
c1002745:	01 c0                	add    %eax,%eax
c1002747:	01 d0                	add    %edx,%eax
c1002749:	c1 e0 02             	shl    $0x2,%eax
c100274c:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002751:	88 08                	mov    %cl,(%eax)
c1002753:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002756:	c1 e8 0c             	shr    $0xc,%eax
c1002759:	89 c2                	mov    %eax,%edx
c100275b:	89 d0                	mov    %edx,%eax
c100275d:	01 c0                	add    %eax,%eax
c100275f:	01 d0                	add    %edx,%eax
c1002761:	c1 e0 02             	shl    $0x2,%eax
c1002764:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c1002769:	8b 00                	mov    (%eax),%eax
c100276b:	83 f8 ff             	cmp    $0xffffffff,%eax
c100276e:	75 07                	jne    c1002777 <pmm_init+0x228>
c1002770:	b8 01 00 00 00       	mov    $0x1,%eax
c1002775:	eb 05                	jmp    c100277c <pmm_init+0x22d>
c1002777:	b8 00 00 00 00       	mov    $0x0,%eax
c100277c:	01 45 f0             	add    %eax,-0x10(%ebp)
c100277f:	eb 60                	jmp    c10027e1 <pmm_init+0x292>
c1002781:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002784:	c1 e8 0c             	shr    $0xc,%eax
c1002787:	89 c2                	mov    %eax,%edx
c1002789:	89 d0                	mov    %edx,%eax
c100278b:	01 c0                	add    %eax,%eax
c100278d:	01 d0                	add    %edx,%eax
c100278f:	c1 e0 02             	shl    $0x2,%eax
c1002792:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002797:	0f b6 08             	movzbl (%eax),%ecx
c100279a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100279d:	c1 e8 0c             	shr    $0xc,%eax
c10027a0:	89 c2                	mov    %eax,%edx
c10027a2:	83 c9 20             	or     $0x20,%ecx
c10027a5:	89 d0                	mov    %edx,%eax
c10027a7:	01 c0                	add    %eax,%eax
c10027a9:	01 d0                	add    %edx,%eax
c10027ab:	c1 e0 02             	shl    $0x2,%eax
c10027ae:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c10027b3:	88 08                	mov    %cl,(%eax)
c10027b5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10027b8:	c1 e8 0c             	shr    $0xc,%eax
c10027bb:	89 c2                	mov    %eax,%edx
c10027bd:	89 d0                	mov    %edx,%eax
c10027bf:	01 c0                	add    %eax,%eax
c10027c1:	01 d0                	add    %edx,%eax
c10027c3:	c1 e0 02             	shl    $0x2,%eax
c10027c6:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c10027cb:	8b 00                	mov    (%eax),%eax
c10027cd:	83 f8 ff             	cmp    $0xffffffff,%eax
c10027d0:	75 07                	jne    c10027d9 <pmm_init+0x28a>
c10027d2:	b8 01 00 00 00       	mov    $0x1,%eax
c10027d7:	eb 05                	jmp    c10027de <pmm_init+0x28f>
c10027d9:	b8 00 00 00 00       	mov    $0x0,%eax
c10027de:	01 45 ec             	add    %eax,-0x14(%ebp)
c10027e1:	81 45 e0 00 10 00 00 	addl   $0x1000,-0x20(%ebp)
c10027e8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10027eb:	89 d0                	mov    %edx,%eax
c10027ed:	c1 e0 02             	shl    $0x2,%eax
c10027f0:	01 d0                	add    %edx,%eax
c10027f2:	c1 e0 02             	shl    $0x2,%eax
c10027f5:	89 c2                	mov    %eax,%edx
c10027f7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10027fa:	01 d0                	add    %edx,%eax
c10027fc:	8b 50 0c             	mov    0xc(%eax),%edx
c10027ff:	8b 40 08             	mov    0x8(%eax),%eax
c1002802:	89 c2                	mov    %eax,%edx
c1002804:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002807:	01 d0                	add    %edx,%eax
c1002809:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100280e:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c1002811:	0f 82 91 fd ff ff    	jb     c10025a8 <pmm_init+0x59>
c1002817:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c100281b:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c100281f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1002823:	0f 85 5e fd ff ff    	jne    c1002587 <pmm_init+0x38>
c1002829:	c7 05 f0 1c 61 c1 00 	movl   $0x1000,0xc1611cf0
c1002830:	10 00 00 
c1002833:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002836:	a3 f4 1c 61 c1       	mov    %eax,0xc1611cf4
c100283b:	c7 05 ec 1c 61 c1 e0 	movl   $0xc1011ce0,0xc1611cec
c1002842:	1c 01 c1 
c1002845:	c7 05 e4 1c 61 c1 00 	movl   $0x37000,0xc1611ce4
c100284c:	70 03 00 
c100284f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002852:	a3 e8 1c 61 c1       	mov    %eax,0xc1611ce8
c1002857:	8b 15 f0 1c 61 c1    	mov    0xc1611cf0,%edx
c100285d:	89 d0                	mov    %edx,%eax
c100285f:	01 c0                	add    %eax,%eax
c1002861:	01 d0                	add    %edx,%eax
c1002863:	c1 e0 02             	shl    $0x2,%eax
c1002866:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c100286b:	a3 e0 1c 61 c1       	mov    %eax,0xc1611ce0
c1002870:	c7 05 c4 1c 01 c1 00 	movl   $0x48000,0xc1011cc4
c1002877:	80 04 00 
c100287a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100287d:	a3 c8 1c 01 c1       	mov    %eax,0xc1011cc8
c1002882:	8b 15 e4 1c 61 c1    	mov    0xc1611ce4,%edx
c1002888:	a1 f0 1c 61 c1       	mov    0xc1611cf0,%eax
c100288d:	01 c2                	add    %eax,%edx
c100288f:	89 d0                	mov    %edx,%eax
c1002891:	01 c0                	add    %eax,%eax
c1002893:	01 d0                	add    %edx,%eax
c1002895:	c1 e0 02             	shl    $0x2,%eax
c1002898:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c100289d:	a3 c0 1c 01 c1       	mov    %eax,0xc1011cc0
c10028a2:	c7 45 d0 00 00 00 40 	movl   $0x40000000,-0x30(%ebp)
c10028a9:	90                   	nop
c10028aa:	c7 45 dc 00 00 00 01 	movl   $0x1000000,-0x24(%ebp)
c10028b1:	eb 39                	jmp    c10028ec <pmm_init+0x39d>
c10028b3:	8b 0d e0 1c 61 c1    	mov    0xc1611ce0,%ecx
c10028b9:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10028bc:	2d 00 00 00 01       	sub    $0x1000000,%eax
c10028c1:	c1 e8 0c             	shr    $0xc,%eax
c10028c4:	89 c2                	mov    %eax,%edx
c10028c6:	89 d0                	mov    %edx,%eax
c10028c8:	01 c0                	add    %eax,%eax
c10028ca:	01 d0                	add    %edx,%eax
c10028cc:	c1 e0 02             	shl    $0x2,%eax
c10028cf:	01 c8                	add    %ecx,%eax
c10028d1:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10028d8:	a1 e8 1c 61 c1       	mov    0xc1611ce8,%eax
c10028dd:	83 e8 01             	sub    $0x1,%eax
c10028e0:	a3 e8 1c 61 c1       	mov    %eax,0xc1611ce8
c10028e5:	81 45 dc 00 10 00 00 	addl   $0x1000,-0x24(%ebp)
c10028ec:	b8 c0 43 a1 c1       	mov    $0xc1a143c0,%eax
c10028f1:	05 ff 0f 00 40       	add    $0x40000fff,%eax
c10028f6:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10028fb:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c10028fe:	72 b3                	jb     c10028b3 <pmm_init+0x364>
c1002900:	c7 45 d8 00 e0 ff 37 	movl   $0x37ffe000,-0x28(%ebp)
c1002907:	eb 39                	jmp    c1002942 <pmm_init+0x3f3>
c1002909:	8b 0d e0 1c 61 c1    	mov    0xc1611ce0,%ecx
c100290f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1002912:	2d 00 00 00 01       	sub    $0x1000000,%eax
c1002917:	c1 e8 0c             	shr    $0xc,%eax
c100291a:	89 c2                	mov    %eax,%edx
c100291c:	89 d0                	mov    %edx,%eax
c100291e:	01 c0                	add    %eax,%eax
c1002920:	01 d0                	add    %edx,%eax
c1002922:	c1 e0 02             	shl    $0x2,%eax
c1002925:	01 c8                	add    %ecx,%eax
c1002927:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c100292e:	a1 e8 1c 61 c1       	mov    0xc1611ce8,%eax
c1002933:	83 e8 01             	sub    $0x1,%eax
c1002936:	a3 e8 1c 61 c1       	mov    %eax,0xc1611ce8
c100293b:	81 45 d8 00 10 00 00 	addl   $0x1000,-0x28(%ebp)
c1002942:	81 7d d8 ff ff ff 37 	cmpl   $0x37ffffff,-0x28(%ebp)
c1002949:	76 be                	jbe    c1002909 <pmm_init+0x3ba>
c100294b:	8b 0d c8 1c 01 c1    	mov    0xc1011cc8,%ecx
c1002951:	8b 15 e8 1c 61 c1    	mov    0xc1611ce8,%edx
c1002957:	a1 f4 1c 61 c1       	mov    0xc1611cf4,%eax
c100295c:	51                   	push   %ecx
c100295d:	52                   	push   %edx
c100295e:	50                   	push   %eax
c100295f:	68 58 ad 00 c1       	push   $0xc100ad58
c1002964:	e8 fa 2b 00 00       	call   c1005563 <printk>
c1002969:	83 c4 10             	add    $0x10,%esp
c100296c:	90                   	nop
c100296d:	c9                   	leave  
c100296e:	c3                   	ret    

c100296f <pmm_alloc>:
c100296f:	55                   	push   %ebp
c1002970:	89 e5                	mov    %esp,%ebp
c1002972:	83 ec 24             	sub    $0x24,%esp
c1002975:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002978:	88 45 dc             	mov    %al,-0x24(%ebp)
c100297b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002982:	8b 45 08             	mov    0x8(%ebp),%eax
c1002985:	05 ff 0f 00 00       	add    $0xfff,%eax
c100298a:	c1 e8 0c             	shr    $0xc,%eax
c100298d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002990:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
c1002994:	75 09                	jne    c100299f <pmm_alloc+0x30>
c1002996:	c7 45 f0 ec 1c 61 c1 	movl   $0xc1611cec,-0x10(%ebp)
c100299d:	eb 16                	jmp    c10029b5 <pmm_alloc+0x46>
c100299f:	80 7d dc 01          	cmpb   $0x1,-0x24(%ebp)
c10029a3:	75 09                	jne    c10029ae <pmm_alloc+0x3f>
c10029a5:	c7 45 f0 e0 1c 61 c1 	movl   $0xc1611ce0,-0x10(%ebp)
c10029ac:	eb 07                	jmp    c10029b5 <pmm_alloc+0x46>
c10029ae:	c7 45 f0 c0 1c 01 c1 	movl   $0xc1011cc0,-0x10(%ebp)
c10029b5:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c10029bc:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10029c3:	eb 43                	jmp    c1002a08 <pmm_alloc+0x99>
c10029c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10029c8:	8b 08                	mov    (%eax),%ecx
c10029ca:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10029cd:	89 d0                	mov    %edx,%eax
c10029cf:	01 c0                	add    %eax,%eax
c10029d1:	01 d0                	add    %edx,%eax
c10029d3:	c1 e0 02             	shl    $0x2,%eax
c10029d6:	01 c8                	add    %ecx,%eax
c10029d8:	8b 40 04             	mov    0x4(%eax),%eax
c10029db:	83 f8 ff             	cmp    $0xffffffff,%eax
c10029de:	75 0c                	jne    c10029ec <pmm_alloc+0x7d>
c10029e0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10029e4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10029e7:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10029ea:	eb 10                	jmp    c10029fc <pmm_alloc+0x8d>
c10029ec:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10029ef:	83 c0 01             	add    $0x1,%eax
c10029f2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10029f5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10029fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10029ff:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002a02:	74 11                	je     c1002a15 <pmm_alloc+0xa6>
c1002a04:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002a08:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002a0b:	8b 40 04             	mov    0x4(%eax),%eax
c1002a0e:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c1002a11:	72 b2                	jb     c10029c5 <pmm_alloc+0x56>
c1002a13:	eb 01                	jmp    c1002a16 <pmm_alloc+0xa7>
c1002a15:	90                   	nop
c1002a16:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002a19:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002a1c:	eb 2d                	jmp    c1002a4b <pmm_alloc+0xdc>
c1002a1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002a21:	8b 08                	mov    (%eax),%ecx
c1002a23:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1002a26:	89 d0                	mov    %edx,%eax
c1002a28:	01 c0                	add    %eax,%eax
c1002a2a:	01 d0                	add    %edx,%eax
c1002a2c:	c1 e0 02             	shl    $0x2,%eax
c1002a2f:	01 c8                	add    %ecx,%eax
c1002a31:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c1002a38:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002a3b:	8b 40 08             	mov    0x8(%eax),%eax
c1002a3e:	8d 50 ff             	lea    -0x1(%eax),%edx
c1002a41:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002a44:	89 50 08             	mov    %edx,0x8(%eax)
c1002a47:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1002a4b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002a4e:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1002a51:	76 cb                	jbe    c1002a1e <pmm_alloc+0xaf>
c1002a53:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002a56:	8b 08                	mov    (%eax),%ecx
c1002a58:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002a5b:	89 d0                	mov    %edx,%eax
c1002a5d:	01 c0                	add    %eax,%eax
c1002a5f:	01 d0                	add    %edx,%eax
c1002a61:	c1 e0 02             	shl    $0x2,%eax
c1002a64:	01 c8                	add    %ecx,%eax
c1002a66:	8b 40 08             	mov    0x8(%eax),%eax
c1002a69:	c9                   	leave  
c1002a6a:	c3                   	ret    

c1002a6b <pmm_free>:
c1002a6b:	55                   	push   %ebp
c1002a6c:	89 e5                	mov    %esp,%ebp
c1002a6e:	83 ec 20             	sub    $0x20,%esp
c1002a71:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002a74:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002a79:	c1 e8 0c             	shr    $0xc,%eax
c1002a7c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002a7f:	81 7d 08 ff ff ff 00 	cmpl   $0xffffff,0x8(%ebp)
c1002a86:	77 09                	ja     c1002a91 <pmm_free+0x26>
c1002a88:	c7 45 fc ec 1c 61 c1 	movl   $0xc1611cec,-0x4(%ebp)
c1002a8f:	eb 27                	jmp    c1002ab8 <pmm_free+0x4d>
c1002a91:	81 7d 08 ff ff ff 37 	cmpl   $0x37ffffff,0x8(%ebp)
c1002a98:	77 10                	ja     c1002aaa <pmm_free+0x3f>
c1002a9a:	81 6d 08 00 00 00 01 	subl   $0x1000000,0x8(%ebp)
c1002aa1:	c7 45 fc e0 1c 61 c1 	movl   $0xc1611ce0,-0x4(%ebp)
c1002aa8:	eb 0e                	jmp    c1002ab8 <pmm_free+0x4d>
c1002aaa:	81 6d 08 00 00 00 38 	subl   $0x38000000,0x8(%ebp)
c1002ab1:	c7 45 fc c0 1c 01 c1 	movl   $0xc1011cc0,-0x4(%ebp)
c1002ab8:	8b 45 08             	mov    0x8(%ebp),%eax
c1002abb:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002ac0:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002ac3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002ac6:	c1 e8 0c             	shr    $0xc,%eax
c1002ac9:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002acc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002ad3:	eb 31                	jmp    c1002b06 <pmm_free+0x9b>
c1002ad5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002ad8:	8b 08                	mov    (%eax),%ecx
c1002ada:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1002add:	89 d0                	mov    %edx,%eax
c1002adf:	01 c0                	add    %eax,%eax
c1002ae1:	01 d0                	add    %edx,%eax
c1002ae3:	c1 e0 02             	shl    $0x2,%eax
c1002ae6:	01 c8                	add    %ecx,%eax
c1002ae8:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
c1002aef:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002af2:	8b 40 08             	mov    0x8(%eax),%eax
c1002af5:	8d 50 01             	lea    0x1(%eax),%edx
c1002af8:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002afb:	89 50 08             	mov    %edx,0x8(%eax)
c1002afe:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1002b02:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002b06:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002b09:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002b0c:	72 c7                	jb     c1002ad5 <pmm_free+0x6a>
c1002b0e:	90                   	nop
c1002b0f:	90                   	nop
c1002b10:	c9                   	leave  
c1002b11:	c3                   	ret    

c1002b12 <hash32>:
c1002b12:	55                   	push   %ebp
c1002b13:	89 e5                	mov    %esp,%ebp
c1002b15:	83 ec 10             	sub    $0x10,%esp
c1002b18:	8b 45 08             	mov    0x8(%ebp),%eax
c1002b1b:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1002b21:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002b24:	b8 20 00 00 00       	mov    $0x20,%eax
c1002b29:	2b 45 0c             	sub    0xc(%ebp),%eax
c1002b2c:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002b2f:	89 c1                	mov    %eax,%ecx
c1002b31:	d3 ea                	shr    %cl,%edx
c1002b33:	89 d0                	mov    %edx,%eax
c1002b35:	c9                   	leave  
c1002b36:	c3                   	ret    

c1002b37 <setup_vpt>:
c1002b37:	55                   	push   %ebp
c1002b38:	89 e5                	mov    %esp,%ebp
c1002b3a:	83 ec 28             	sub    $0x28,%esp
c1002b3d:	c7 45 e0 e0 00 00 00 	movl   $0xe0,-0x20(%ebp)
c1002b44:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002b4b:	eb 27                	jmp    c1002b74 <setup_vpt+0x3d>
c1002b4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002b50:	c1 e0 0c             	shl    $0xc,%eax
c1002b53:	05 00 40 93 c1       	add    $0xc1934000,%eax
c1002b58:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002b5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002b61:	05 00 03 00 00       	add    $0x300,%eax
c1002b66:	83 ca 03             	or     $0x3,%edx
c1002b69:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002b70:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002b74:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002b77:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002b7a:	72 d1                	jb     c1002b4d <setup_vpt+0x16>
c1002b7c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002b83:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002b8a:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002b91:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002b98:	eb 3d                	jmp    c1002bd7 <setup_vpt+0xa0>
c1002b9a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002b9d:	8d 50 01             	lea    0x1(%eax),%edx
c1002ba0:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1002ba3:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1002ba6:	83 ca 03             	or     $0x3,%edx
c1002ba9:	8b 4d ec             	mov    -0x14(%ebp),%ecx
c1002bac:	c1 e1 0a             	shl    $0xa,%ecx
c1002baf:	01 c8                	add    %ecx,%eax
c1002bb1:	89 14 85 00 40 93 c1 	mov    %edx,-0x3e6cc000(,%eax,4)
c1002bb8:	81 7d e8 00 04 00 00 	cmpl   $0x400,-0x18(%ebp)
c1002bbf:	75 0b                	jne    c1002bcc <setup_vpt+0x95>
c1002bc1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002bc5:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002bcc:	81 45 f0 00 10 00 00 	addl   $0x1000,-0x10(%ebp)
c1002bd3:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1002bd7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002bda:	c1 e0 0a             	shl    $0xa,%eax
c1002bdd:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1002be0:	72 b8                	jb     c1002b9a <setup_vpt+0x63>
c1002be2:	b8 e0 1f 00 40       	mov    $0x40001fe0,%eax
c1002be7:	68 00 00 00 40       	push   $0x40000000
c1002bec:	50                   	push   %eax
c1002bed:	68 00 00 00 40       	push   $0x40000000
c1002bf2:	68 00 20 61 c1       	push   $0xc1612000
c1002bf7:	e8 30 02 00 00       	call   c1002e2c <vmm_map>
c1002bfc:	83 c4 10             	add    $0x10,%esp
c1002bff:	b8 00 20 61 c1       	mov    $0xc1612000,%eax
c1002c04:	05 00 00 00 40       	add    $0x40000000,%eax
c1002c09:	0f 22 d8             	mov    %eax,%cr3
c1002c0c:	90                   	nop
c1002c0d:	c9                   	leave  
c1002c0e:	c3                   	ret    

c1002c0f <vmm_malloc>:
c1002c0f:	55                   	push   %ebp
c1002c10:	89 e5                	mov    %esp,%ebp
c1002c12:	53                   	push   %ebx
c1002c13:	83 ec 34             	sub    $0x34,%esp
c1002c16:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002c19:	88 45 d4             	mov    %al,-0x2c(%ebp)
c1002c1c:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
c1002c20:	83 ec 08             	sub    $0x8,%esp
c1002c23:	50                   	push   %eax
c1002c24:	ff 75 08             	pushl  0x8(%ebp)
c1002c27:	e8 43 fd ff ff       	call   c100296f <pmm_alloc>
c1002c2c:	83 c4 10             	add    $0x10,%esp
c1002c2f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002c32:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c35:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002c3a:	c1 e8 0c             	shr    $0xc,%eax
c1002c3d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002c40:	80 7d d4 02          	cmpb   $0x2,-0x2c(%ebp)
c1002c44:	0f 85 db 00 00 00    	jne    c1002d25 <vmm_malloc+0x116>
c1002c4a:	a1 14 db 00 c1       	mov    0xc100db14,%eax
c1002c4f:	a3 00 30 93 c1       	mov    %eax,0xc1933000
c1002c54:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002c5b:	eb 5d                	jmp    c1002cba <vmm_malloc+0xab>
c1002c5d:	8b 15 14 db 00 c1    	mov    0xc100db14,%edx
c1002c63:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002c68:	29 c2                	sub    %eax,%edx
c1002c6a:	89 d0                	mov    %edx,%eax
c1002c6c:	c1 e8 16             	shr    $0x16,%eax
c1002c6f:	89 c3                	mov    %eax,%ebx
c1002c71:	8b 15 14 db 00 c1    	mov    0xc100db14,%edx
c1002c77:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002c7c:	29 c2                	sub    %eax,%edx
c1002c7e:	89 d0                	mov    %edx,%eax
c1002c80:	c1 e8 0c             	shr    $0xc,%eax
c1002c83:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002c88:	89 c1                	mov    %eax,%ecx
c1002c8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002c8d:	83 c8 07             	or     $0x7,%eax
c1002c90:	89 c2                	mov    %eax,%edx
c1002c92:	89 d8                	mov    %ebx,%eax
c1002c94:	c1 e0 0a             	shl    $0xa,%eax
c1002c97:	01 c8                	add    %ecx,%eax
c1002c99:	89 14 85 00 30 91 c1 	mov    %edx,-0x3e6ed000(,%eax,4)
c1002ca0:	a1 14 db 00 c1       	mov    0xc100db14,%eax
c1002ca5:	05 00 10 00 00       	add    $0x1000,%eax
c1002caa:	a3 14 db 00 c1       	mov    %eax,0xc100db14
c1002caf:	81 45 f4 00 10 00 00 	addl   $0x1000,-0xc(%ebp)
c1002cb6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002cba:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002cbd:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1002cc0:	72 9b                	jb     c1002c5d <vmm_malloc+0x4e>
c1002cc2:	8b 15 14 db 00 c1    	mov    0xc100db14,%edx
c1002cc8:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002ccd:	29 c2                	sub    %eax,%edx
c1002ccf:	89 d0                	mov    %edx,%eax
c1002cd1:	05 ff ff 3f 00       	add    $0x3fffff,%eax
c1002cd6:	c1 e8 16             	shr    $0x16,%eax
c1002cd9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002cdc:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002ce3:	eb 2e                	jmp    c1002d13 <vmm_malloc+0x104>
c1002ce5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002ce8:	c1 e0 0c             	shl    $0xc,%eax
c1002ceb:	05 00 30 91 c1       	add    $0xc1913000,%eax
c1002cf0:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002cf6:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002cfb:	c1 e8 16             	shr    $0x16,%eax
c1002cfe:	89 c1                	mov    %eax,%ecx
c1002d00:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d03:	01 c8                	add    %ecx,%eax
c1002d05:	83 ca 07             	or     $0x7,%edx
c1002d08:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002d0f:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002d13:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d16:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002d19:	72 ca                	jb     c1002ce5 <vmm_malloc+0xd6>
c1002d1b:	a1 00 30 93 c1       	mov    0xc1933000,%eax
c1002d20:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002d23:	eb 07                	jmp    c1002d2c <vmm_malloc+0x11d>
c1002d25:	81 6d f4 00 00 00 40 	subl   $0x40000000,-0xc(%ebp)
c1002d2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002d2f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002d32:	c9                   	leave  
c1002d33:	c3                   	ret    

c1002d34 <vmm_free>:
c1002d34:	55                   	push   %ebp
c1002d35:	89 e5                	mov    %esp,%ebp
c1002d37:	53                   	push   %ebx
c1002d38:	83 ec 14             	sub    $0x14,%esp
c1002d3b:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002d3e:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002d43:	c1 e8 0c             	shr    $0xc,%eax
c1002d46:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002d49:	8b 45 08             	mov    0x8(%ebp),%eax
c1002d4c:	05 00 00 00 40       	add    $0x40000000,%eax
c1002d51:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002d54:	81 7d ec ff ff ff 37 	cmpl   $0x37ffffff,-0x14(%ebp)
c1002d5b:	0f 86 ae 00 00 00    	jbe    c1002e0f <vmm_free+0xdb>
c1002d61:	8b 45 08             	mov    0x8(%ebp),%eax
c1002d64:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002d69:	89 c2                	mov    %eax,%edx
c1002d6b:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002d70:	29 c2                	sub    %eax,%edx
c1002d72:	89 d0                	mov    %edx,%eax
c1002d74:	c1 e8 16             	shr    $0x16,%eax
c1002d77:	89 c2                	mov    %eax,%edx
c1002d79:	8b 45 08             	mov    0x8(%ebp),%eax
c1002d7c:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002d81:	89 c1                	mov    %eax,%ecx
c1002d83:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002d88:	29 c1                	sub    %eax,%ecx
c1002d8a:	89 c8                	mov    %ecx,%eax
c1002d8c:	c1 e8 0c             	shr    $0xc,%eax
c1002d8f:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002d94:	c1 e2 0a             	shl    $0xa,%edx
c1002d97:	01 d0                	add    %edx,%eax
c1002d99:	8b 04 85 00 30 91 c1 	mov    -0x3e6ed000(,%eax,4),%eax
c1002da0:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002da5:	83 ec 08             	sub    $0x8,%esp
c1002da8:	ff 75 0c             	pushl  0xc(%ebp)
c1002dab:	50                   	push   %eax
c1002dac:	e8 ba fc ff ff       	call   c1002a6b <pmm_free>
c1002db1:	83 c4 10             	add    $0x10,%esp
c1002db4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002dbb:	eb 48                	jmp    c1002e05 <vmm_free+0xd1>
c1002dbd:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002dc2:	8b 55 08             	mov    0x8(%ebp),%edx
c1002dc5:	29 c2                	sub    %eax,%edx
c1002dc7:	89 d0                	mov    %edx,%eax
c1002dc9:	c1 e8 16             	shr    $0x16,%eax
c1002dcc:	89 c3                	mov    %eax,%ebx
c1002dce:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002dd3:	8b 55 08             	mov    0x8(%ebp),%edx
c1002dd6:	29 c2                	sub    %eax,%edx
c1002dd8:	89 d0                	mov    %edx,%eax
c1002dda:	c1 e8 0c             	shr    $0xc,%eax
c1002ddd:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002de2:	89 c1                	mov    %eax,%ecx
c1002de4:	8b 45 08             	mov    0x8(%ebp),%eax
c1002de7:	83 c8 06             	or     $0x6,%eax
c1002dea:	89 c2                	mov    %eax,%edx
c1002dec:	89 d8                	mov    %ebx,%eax
c1002dee:	c1 e0 0a             	shl    $0xa,%eax
c1002df1:	01 c8                	add    %ecx,%eax
c1002df3:	89 14 85 00 30 91 c1 	mov    %edx,-0x3e6ed000(,%eax,4)
c1002dfa:	81 45 08 00 10 00 00 	addl   $0x1000,0x8(%ebp)
c1002e01:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002e05:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002e08:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002e0b:	72 b0                	jb     c1002dbd <vmm_free+0x89>
c1002e0d:	eb 17                	jmp    c1002e26 <vmm_free+0xf2>
c1002e0f:	8b 45 08             	mov    0x8(%ebp),%eax
c1002e12:	05 00 00 00 40       	add    $0x40000000,%eax
c1002e17:	83 ec 08             	sub    $0x8,%esp
c1002e1a:	ff 75 0c             	pushl  0xc(%ebp)
c1002e1d:	50                   	push   %eax
c1002e1e:	e8 48 fc ff ff       	call   c1002a6b <pmm_free>
c1002e23:	83 c4 10             	add    $0x10,%esp
c1002e26:	90                   	nop
c1002e27:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002e2a:	c9                   	leave  
c1002e2b:	c3                   	ret    

c1002e2c <vmm_map>:
c1002e2c:	55                   	push   %ebp
c1002e2d:	89 e5                	mov    %esp,%ebp
c1002e2f:	53                   	push   %ebx
c1002e30:	83 ec 20             	sub    $0x20,%esp
c1002e33:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002e36:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002e3b:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002e3e:	8b 45 10             	mov    0x10(%ebp),%eax
c1002e41:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002e46:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002e4b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002e4e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002e51:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002e54:	81 65 14 00 f0 ff ff 	andl   $0xfffff000,0x14(%ebp)
c1002e5b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002e5e:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002e61:	c1 e8 0c             	shr    $0xc,%eax
c1002e64:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002e67:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002e6e:	eb 3d                	jmp    c1002ead <vmm_map+0x81>
c1002e70:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002e73:	c1 e8 16             	shr    $0x16,%eax
c1002e76:	89 c3                	mov    %eax,%ebx
c1002e78:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002e7b:	c1 e8 0c             	shr    $0xc,%eax
c1002e7e:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002e83:	89 c1                	mov    %eax,%ecx
c1002e85:	8b 45 14             	mov    0x14(%ebp),%eax
c1002e88:	83 c8 07             	or     $0x7,%eax
c1002e8b:	89 c2                	mov    %eax,%edx
c1002e8d:	89 d8                	mov    %ebx,%eax
c1002e8f:	c1 e0 0a             	shl    $0xa,%eax
c1002e92:	01 c8                	add    %ecx,%eax
c1002e94:	89 14 85 00 30 61 c1 	mov    %edx,-0x3e9ed000(,%eax,4)
c1002e9b:	81 45 14 00 10 00 00 	addl   $0x1000,0x14(%ebp)
c1002ea2:	81 45 f8 00 10 00 00 	addl   $0x1000,-0x8(%ebp)
c1002ea9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002ead:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002eb0:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002eb3:	72 bb                	jb     c1002e70 <vmm_map+0x44>
c1002eb5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002eb8:	05 ff 03 00 00       	add    $0x3ff,%eax
c1002ebd:	c1 e8 0a             	shr    $0xa,%eax
c1002ec0:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002ec3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002eca:	eb 3d                	jmp    c1002f09 <vmm_map+0xdd>
c1002ecc:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002ecf:	c1 e8 16             	shr    $0x16,%eax
c1002ed2:	89 c2                	mov    %eax,%edx
c1002ed4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002ed7:	01 d0                	add    %edx,%eax
c1002ed9:	c1 e0 0c             	shl    $0xc,%eax
c1002edc:	05 00 30 61 c1       	add    $0xc1613000,%eax
c1002ee1:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002ee7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002eea:	c1 e8 16             	shr    $0x16,%eax
c1002eed:	89 c1                	mov    %eax,%ecx
c1002eef:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002ef2:	01 c8                	add    %ecx,%eax
c1002ef4:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
c1002efb:	8b 45 08             	mov    0x8(%ebp),%eax
c1002efe:	01 c8                	add    %ecx,%eax
c1002f00:	83 ca 07             	or     $0x7,%edx
c1002f03:	89 10                	mov    %edx,(%eax)
c1002f05:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002f09:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002f0c:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002f0f:	72 bb                	jb     c1002ecc <vmm_map+0xa0>
c1002f11:	90                   	nop
c1002f12:	90                   	nop
c1002f13:	83 c4 20             	add    $0x20,%esp
c1002f16:	5b                   	pop    %ebx
c1002f17:	5d                   	pop    %ebp
c1002f18:	c3                   	ret    

c1002f19 <setup_pgdir>:
c1002f19:	55                   	push   %ebp
c1002f1a:	89 e5                	mov    %esp,%ebp
c1002f1c:	57                   	push   %edi
c1002f1d:	56                   	push   %esi
c1002f1e:	53                   	push   %ebx
c1002f1f:	83 ec 1c             	sub    $0x1c,%esp
c1002f22:	83 ec 08             	sub    $0x8,%esp
c1002f25:	6a 01                	push   $0x1
c1002f27:	68 00 10 00 00       	push   $0x1000
c1002f2c:	e8 de fc ff ff       	call   c1002c0f <vmm_malloc>
c1002f31:	83 c4 10             	add    $0x10,%esp
c1002f34:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002f37:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f3a:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1002f3f:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002f44:	8b 0b                	mov    (%ebx),%ecx
c1002f46:	89 08                	mov    %ecx,(%eax)
c1002f48:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002f4c:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002f50:	8d 78 04             	lea    0x4(%eax),%edi
c1002f53:	83 e7 fc             	and    $0xfffffffc,%edi
c1002f56:	29 f8                	sub    %edi,%eax
c1002f58:	29 c3                	sub    %eax,%ebx
c1002f5a:	01 c2                	add    %eax,%edx
c1002f5c:	83 e2 fc             	and    $0xfffffffc,%edx
c1002f5f:	89 d0                	mov    %edx,%eax
c1002f61:	c1 e8 02             	shr    $0x2,%eax
c1002f64:	89 de                	mov    %ebx,%esi
c1002f66:	89 c1                	mov    %eax,%ecx
c1002f68:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002f6a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f6d:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002f70:	5b                   	pop    %ebx
c1002f71:	5e                   	pop    %esi
c1002f72:	5f                   	pop    %edi
c1002f73:	5d                   	pop    %ebp
c1002f74:	c3                   	ret    

c1002f75 <sys_malloc>:
c1002f75:	55                   	push   %ebp
c1002f76:	89 e5                	mov    %esp,%ebp
c1002f78:	57                   	push   %edi
c1002f79:	56                   	push   %esi
c1002f7a:	53                   	push   %ebx
c1002f7b:	83 ec 1c             	sub    $0x1c,%esp
c1002f7e:	83 ec 08             	sub    $0x8,%esp
c1002f81:	6a 02                	push   $0x2
c1002f83:	ff 75 08             	pushl  0x8(%ebp)
c1002f86:	e8 84 fc ff ff       	call   c1002c0f <vmm_malloc>
c1002f8b:	83 c4 10             	add    $0x10,%esp
c1002f8e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002f91:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1002f96:	8b 40 30             	mov    0x30(%eax),%eax
c1002f99:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1002f9e:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002fa3:	8b 0b                	mov    (%ebx),%ecx
c1002fa5:	89 08                	mov    %ecx,(%eax)
c1002fa7:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002fab:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002faf:	8d 78 04             	lea    0x4(%eax),%edi
c1002fb2:	83 e7 fc             	and    $0xfffffffc,%edi
c1002fb5:	29 f8                	sub    %edi,%eax
c1002fb7:	29 c3                	sub    %eax,%ebx
c1002fb9:	01 c2                	add    %eax,%edx
c1002fbb:	83 e2 fc             	and    $0xfffffffc,%edx
c1002fbe:	89 d0                	mov    %edx,%eax
c1002fc0:	c1 e8 02             	shr    $0x2,%eax
c1002fc3:	89 de                	mov    %ebx,%esi
c1002fc5:	89 c1                	mov    %eax,%ecx
c1002fc7:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002fc9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002fcc:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002fcf:	5b                   	pop    %ebx
c1002fd0:	5e                   	pop    %esi
c1002fd1:	5f                   	pop    %edi
c1002fd2:	5d                   	pop    %ebp
c1002fd3:	c3                   	ret    

c1002fd4 <sys_free>:
c1002fd4:	55                   	push   %ebp
c1002fd5:	89 e5                	mov    %esp,%ebp
c1002fd7:	57                   	push   %edi
c1002fd8:	56                   	push   %esi
c1002fd9:	53                   	push   %ebx
c1002fda:	83 ec 0c             	sub    $0xc,%esp
c1002fdd:	83 ec 08             	sub    $0x8,%esp
c1002fe0:	ff 75 0c             	pushl  0xc(%ebp)
c1002fe3:	ff 75 08             	pushl  0x8(%ebp)
c1002fe6:	e8 49 fd ff ff       	call   c1002d34 <vmm_free>
c1002feb:	83 c4 10             	add    $0x10,%esp
c1002fee:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1002ff3:	8b 40 30             	mov    0x30(%eax),%eax
c1002ff6:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1002ffb:	ba 00 10 00 00       	mov    $0x1000,%edx
c1003000:	8b 0b                	mov    (%ebx),%ecx
c1003002:	89 08                	mov    %ecx,(%eax)
c1003004:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003008:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c100300c:	8d 78 04             	lea    0x4(%eax),%edi
c100300f:	83 e7 fc             	and    $0xfffffffc,%edi
c1003012:	29 f8                	sub    %edi,%eax
c1003014:	29 c3                	sub    %eax,%ebx
c1003016:	01 c2                	add    %eax,%edx
c1003018:	83 e2 fc             	and    $0xfffffffc,%edx
c100301b:	89 d0                	mov    %edx,%eax
c100301d:	c1 e8 02             	shr    $0x2,%eax
c1003020:	89 de                	mov    %ebx,%esi
c1003022:	89 c1                	mov    %eax,%ecx
c1003024:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003026:	90                   	nop
c1003027:	8d 65 f4             	lea    -0xc(%ebp),%esp
c100302a:	5b                   	pop    %ebx
c100302b:	5e                   	pop    %esi
c100302c:	5f                   	pop    %edi
c100302d:	5d                   	pop    %ebp
c100302e:	c3                   	ret    

c100302f <sys_mmap>:
c100302f:	55                   	push   %ebp
c1003030:	89 e5                	mov    %esp,%ebp
c1003032:	83 ec 10             	sub    $0x10,%esp
c1003035:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100303a:	8b 40 30             	mov    0x30(%eax),%eax
c100303d:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003040:	ff 75 10             	pushl  0x10(%ebp)
c1003043:	ff 75 0c             	pushl  0xc(%ebp)
c1003046:	ff 75 08             	pushl  0x8(%ebp)
c1003049:	ff 75 fc             	pushl  -0x4(%ebp)
c100304c:	e8 db fd ff ff       	call   c1002e2c <vmm_map>
c1003051:	83 c4 10             	add    $0x10,%esp
c1003054:	90                   	nop
c1003055:	c9                   	leave  
c1003056:	c3                   	ret    

c1003057 <hash32>:
c1003057:	55                   	push   %ebp
c1003058:	89 e5                	mov    %esp,%ebp
c100305a:	83 ec 10             	sub    $0x10,%esp
c100305d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003060:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1003066:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003069:	b8 20 00 00 00       	mov    $0x20,%eax
c100306e:	2b 45 0c             	sub    0xc(%ebp),%eax
c1003071:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1003074:	89 c1                	mov    %eax,%ecx
c1003076:	d3 ea                	shr    %cl,%edx
c1003078:	89 d0                	mov    %edx,%eax
c100307a:	c9                   	leave  
c100307b:	c3                   	ret    

c100307c <kernel_task_init>:
c100307c:	55                   	push   %ebp
c100307d:	89 e5                	mov    %esp,%ebp
c100307f:	83 ec 28             	sub    $0x28,%esp
c1003082:	c7 45 e8 84 1c 01 c1 	movl   $0xc1011c84,-0x18(%ebp)
c1003089:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100308c:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100308f:	89 50 04             	mov    %edx,0x4(%eax)
c1003092:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003095:	8b 50 04             	mov    0x4(%eax),%edx
c1003098:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100309b:	89 10                	mov    %edx,(%eax)
c100309d:	90                   	nop
c100309e:	c7 45 ec 8c 1c 01 c1 	movl   $0xc1011c8c,-0x14(%ebp)
c10030a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10030a8:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10030ab:	89 50 04             	mov    %edx,0x4(%eax)
c10030ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10030b1:	8b 50 04             	mov    0x4(%eax),%edx
c10030b4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10030b7:	89 10                	mov    %edx,(%eax)
c10030b9:	90                   	nop
c10030ba:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10030c1:	eb 27                	jmp    c10030ea <kernel_task_init+0x6e>
c10030c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10030c6:	c1 e0 03             	shl    $0x3,%eax
c10030c9:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c10030ce:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10030d1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10030d4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10030d7:	89 50 04             	mov    %edx,0x4(%eax)
c10030da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10030dd:	8b 50 04             	mov    0x4(%eax),%edx
c10030e0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10030e3:	89 10                	mov    %edx,(%eax)
c10030e5:	90                   	nop
c10030e6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10030ea:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%ebp)
c10030f1:	7e d0                	jle    c10030c3 <kernel_task_init+0x47>
c10030f3:	83 ec 0c             	sub    $0xc,%esp
c10030f6:	6a 01                	push   $0x1
c10030f8:	e8 44 06 00 00       	call   c1003741 <alloc_task>
c10030fd:	83 c4 10             	add    $0x10,%esp
c1003100:	a3 00 40 a1 c1       	mov    %eax,0xc1a14000
c1003105:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100310a:	85 c0                	test   %eax,%eax
c100310c:	75 10                	jne    c100311e <kernel_task_init+0xa2>
c100310e:	83 ec 0c             	sub    $0xc,%esp
c1003111:	68 a0 ad 00 c1       	push   $0xc100ada0
c1003116:	e8 48 24 00 00       	call   c1005563 <printk>
c100311b:	83 c4 10             	add    $0x10,%esp
c100311e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003123:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c1003129:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100312e:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003135:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100313a:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1003141:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003146:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c100314d:	c7 05 80 1c 01 c1 00 	movl   $0x0,0xc1011c80
c1003154:	00 00 00 
c1003157:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100315c:	83 ec 08             	sub    $0x8,%esp
c100315f:	68 b3 ad 00 c1       	push   $0xc100adb3
c1003164:	50                   	push   %eax
c1003165:	e8 6e 03 00 00       	call   c10034d8 <set_task_name>
c100316a:	83 c4 10             	add    $0x10,%esp
c100316d:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003172:	89 c2                	mov    %eax,%edx
c1003174:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003179:	81 c2 00 10 00 00    	add    $0x1000,%edx
c100317f:	89 50 28             	mov    %edx,0x28(%eax)
c1003182:	ba 00 20 61 c1       	mov    $0xc1612000,%edx
c1003187:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100318c:	81 c2 00 00 00 40    	add    $0x40000000,%edx
c1003192:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003195:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100319a:	c7 80 f8 00 00 00 00 	movl   $0x0,0xf8(%eax)
c10031a1:	00 00 00 
c10031a4:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031a9:	8b 40 28             	mov    0x28(%eax),%eax
c10031ac:	8d 50 b4             	lea    -0x4c(%eax),%edx
c10031af:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031b4:	89 50 38             	mov    %edx,0x38(%eax)
c10031b7:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031bc:	8b 40 38             	mov    0x38(%eax),%eax
c10031bf:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c10031c6:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031cb:	8b 40 38             	mov    0x38(%eax),%eax
c10031ce:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c10031d5:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031da:	8b 40 38             	mov    0x38(%eax),%eax
c10031dd:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c10031e4:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031e9:	8b 40 38             	mov    0x38(%eax),%eax
c10031ec:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c10031f3:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031f8:	8b 40 38             	mov    0x38(%eax),%eax
c10031fb:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003201:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003206:	8b 40 38             	mov    0x38(%eax),%eax
c1003209:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c1003210:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003215:	8b 40 38             	mov    0x38(%eax),%eax
c1003218:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100321f:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003224:	8b 40 38             	mov    0x38(%eax),%eax
c1003227:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c100322e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003233:	8b 40 38             	mov    0x38(%eax),%eax
c1003236:	66 c7 40 3c 08 00    	movw   $0x8,0x3c(%eax)
c100323c:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003241:	8b 40 38             	mov    0x38(%eax),%eax
c1003244:	66 c7 40 48 10 00    	movw   $0x10,0x48(%eax)
c100324a:	8b 15 00 40 a1 c1    	mov    0xc1a14000,%edx
c1003250:	8b 52 38             	mov    0x38(%edx),%edx
c1003253:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c1003257:	66 89 42 24          	mov    %ax,0x24(%edx)
c100325b:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003260:	8b 40 38             	mov    0x38(%eax),%eax
c1003263:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1003267:	66 89 50 28          	mov    %dx,0x28(%eax)
c100326b:	8b 15 00 40 a1 c1    	mov    0xc1a14000,%edx
c1003271:	8b 52 38             	mov    0x38(%edx),%edx
c1003274:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1003278:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c100327c:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003281:	8b 40 38             	mov    0x38(%eax),%eax
c1003284:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c100328a:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100328f:	8b 40 38             	mov    0x38(%eax),%eax
c1003292:	ba 38 38 00 c1       	mov    $0xc1003838,%edx
c1003297:	89 50 38             	mov    %edx,0x38(%eax)
c100329a:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100329f:	8b 40 38             	mov    0x38(%eax),%eax
c10032a2:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c10032a9:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032ae:	8b 50 28             	mov    0x28(%eax),%edx
c10032b1:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032b6:	8b 40 38             	mov    0x38(%eax),%eax
c10032b9:	83 ea 4c             	sub    $0x4c,%edx
c10032bc:	89 50 44             	mov    %edx,0x44(%eax)
c10032bf:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032c4:	8b 55 08             	mov    0x8(%ebp),%edx
c10032c7:	89 50 3c             	mov    %edx,0x3c(%eax)
c10032ca:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032cf:	8b 50 38             	mov    0x38(%eax),%edx
c10032d2:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032d7:	89 50 40             	mov    %edx,0x40(%eax)
c10032da:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032df:	8b 50 38             	mov    0x38(%eax),%edx
c10032e2:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032e7:	8b 52 10             	mov    0x10(%edx),%edx
c10032ea:	89 50 44             	mov    %edx,0x44(%eax)
c10032ed:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032f2:	8b 50 38             	mov    0x38(%eax),%edx
c10032f5:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032fa:	8b 52 14             	mov    0x14(%edx),%edx
c10032fd:	89 50 4c             	mov    %edx,0x4c(%eax)
c1003300:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003305:	83 c0 5c             	add    $0x5c,%eax
c1003308:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100330b:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100330e:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1003311:	89 50 04             	mov    %edx,0x4(%eax)
c1003314:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003317:	8b 50 04             	mov    0x4(%eax),%edx
c100331a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100331d:	89 10                	mov    %edx,(%eax)
c100331f:	90                   	nop
c1003320:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003325:	83 c0 5c             	add    $0x5c,%eax
c1003328:	83 ec 0c             	sub    $0xc,%esp
c100332b:	50                   	push   %eax
c100332c:	e8 11 02 00 00       	call   c1003542 <add_link>
c1003331:	83 c4 10             	add    $0x10,%esp
c1003334:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003339:	83 c0 64             	add    $0x64,%eax
c100333c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100333f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003342:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1003345:	89 50 04             	mov    %edx,0x4(%eax)
c1003348:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100334b:	8b 50 04             	mov    0x4(%eax),%edx
c100334e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003351:	89 10                	mov    %edx,(%eax)
c1003353:	90                   	nop
c1003354:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003359:	83 c0 64             	add    $0x64,%eax
c100335c:	83 ec 0c             	sub    $0xc,%esp
c100335f:	50                   	push   %eax
c1003360:	e8 2d 02 00 00       	call   c1003592 <add_all_link>
c1003365:	83 c4 10             	add    $0x10,%esp
c1003368:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100336f:	eb 17                	jmp    c1003388 <kernel_task_init+0x30c>
c1003371:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003376:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003379:	83 c2 1c             	add    $0x1c,%edx
c100337c:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c1003383:	ff 
c1003384:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1003388:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c100338c:	7e e3                	jle    c1003371 <kernel_task_init+0x2f5>
c100338e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003393:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c1003398:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100339d:	83 ec 0c             	sub    $0xc,%esp
c10033a0:	50                   	push   %eax
c10033a1:	e8 6f 02 00 00       	call   c1003615 <add_pid_hash>
c10033a6:	83 c4 10             	add    $0x10,%esp
c10033a9:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033ae:	83 ec 0c             	sub    $0xc,%esp
c10033b1:	50                   	push   %eax
c10033b2:	e8 65 07 00 00       	call   c1003b1c <wakeup_task>
c10033b7:	83 c4 10             	add    $0x10,%esp
c10033ba:	c7 05 94 1c 01 c1 01 	movl   $0x1,0xc1011c94
c10033c1:	00 00 00 
c10033c4:	90                   	nop
c10033c5:	c9                   	leave  
c10033c6:	c3                   	ret    

c10033c7 <set_pid_bit>:
c10033c7:	55                   	push   %ebp
c10033c8:	89 e5                	mov    %esp,%ebp
c10033ca:	83 ec 10             	sub    $0x10,%esp
c10033cd:	8b 45 08             	mov    0x8(%ebp),%eax
c10033d0:	8d 50 07             	lea    0x7(%eax),%edx
c10033d3:	85 c0                	test   %eax,%eax
c10033d5:	0f 48 c2             	cmovs  %edx,%eax
c10033d8:	c1 f8 03             	sar    $0x3,%eax
c10033db:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10033de:	8b 45 08             	mov    0x8(%ebp),%eax
c10033e1:	99                   	cltd   
c10033e2:	c1 ea 1d             	shr    $0x1d,%edx
c10033e5:	01 d0                	add    %edx,%eax
c10033e7:	83 e0 07             	and    $0x7,%eax
c10033ea:	29 d0                	sub    %edx,%eax
c10033ec:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10033ef:	90                   	nop
c10033f0:	c9                   	leave  
c10033f1:	c3                   	ret    

c10033f2 <clear_pid_bit>:
c10033f2:	55                   	push   %ebp
c10033f3:	89 e5                	mov    %esp,%ebp
c10033f5:	83 ec 10             	sub    $0x10,%esp
c10033f8:	8b 45 08             	mov    0x8(%ebp),%eax
c10033fb:	8d 50 07             	lea    0x7(%eax),%edx
c10033fe:	85 c0                	test   %eax,%eax
c1003400:	0f 48 c2             	cmovs  %edx,%eax
c1003403:	c1 f8 03             	sar    $0x3,%eax
c1003406:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003409:	8b 45 08             	mov    0x8(%ebp),%eax
c100340c:	99                   	cltd   
c100340d:	c1 ea 1d             	shr    $0x1d,%edx
c1003410:	01 d0                	add    %edx,%eax
c1003412:	83 e0 07             	and    $0x7,%eax
c1003415:	29 d0                	sub    %edx,%eax
c1003417:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100341a:	90                   	nop
c100341b:	c9                   	leave  
c100341c:	c3                   	ret    

c100341d <find_free_pid>:
c100341d:	55                   	push   %ebp
c100341e:	89 e5                	mov    %esp,%ebp
c1003420:	83 ec 10             	sub    $0x10,%esp
c1003423:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100342a:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1003431:	eb 1b                	jmp    c100344e <find_free_pid+0x31>
c1003433:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100343a:	eb 08                	jmp    c1003444 <find_free_pid+0x27>
c100343c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003440:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1003444:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
c1003448:	7e f2                	jle    c100343c <find_free_pid+0x1f>
c100344a:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100344e:	81 7d f8 00 80 00 00 	cmpl   $0x8000,-0x8(%ebp)
c1003455:	75 dc                	jne    c1003433 <find_free_pid+0x16>
c1003457:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100345c:	c9                   	leave  
c100345d:	c3                   	ret    

c100345e <alloc_pid>:
c100345e:	55                   	push   %ebp
c100345f:	89 e5                	mov    %esp,%ebp
c1003461:	83 ec 10             	sub    $0x10,%esp
c1003464:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c1003469:	85 c0                	test   %eax,%eax
c100346b:	75 07                	jne    c1003474 <alloc_pid+0x16>
c100346d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003472:	eb 44                	jmp    c10034b8 <alloc_pid+0x5a>
c1003474:	81 7d fc ff 7f 00 00 	cmpl   $0x7fff,-0x4(%ebp)
c100347b:	75 07                	jne    c1003484 <alloc_pid+0x26>
c100347d:	e8 9b ff ff ff       	call   c100341d <find_free_pid>
c1003482:	eb 08                	jmp    c100348c <alloc_pid+0x2e>
c1003484:	a1 80 1c 01 c1       	mov    0xc1011c80,%eax
c1003489:	83 c0 01             	add    $0x1,%eax
c100348c:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100348f:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1003493:	78 18                	js     c10034ad <alloc_pid+0x4f>
c1003495:	ff 75 fc             	pushl  -0x4(%ebp)
c1003498:	e8 2a ff ff ff       	call   c10033c7 <set_pid_bit>
c100349d:	83 c4 04             	add    $0x4,%esp
c10034a0:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c10034a5:	83 e8 01             	sub    $0x1,%eax
c10034a8:	a3 20 db 00 c1       	mov    %eax,0xc100db20
c10034ad:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10034b0:	a3 80 1c 01 c1       	mov    %eax,0xc1011c80
c10034b5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10034b8:	c9                   	leave  
c10034b9:	c3                   	ret    

c10034ba <free_pid>:
c10034ba:	55                   	push   %ebp
c10034bb:	89 e5                	mov    %esp,%ebp
c10034bd:	ff 75 08             	pushl  0x8(%ebp)
c10034c0:	e8 2d ff ff ff       	call   c10033f2 <clear_pid_bit>
c10034c5:	83 c4 04             	add    $0x4,%esp
c10034c8:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c10034cd:	83 c0 01             	add    $0x1,%eax
c10034d0:	a3 20 db 00 c1       	mov    %eax,0xc100db20
c10034d5:	90                   	nop
c10034d6:	c9                   	leave  
c10034d7:	c3                   	ret    

c10034d8 <set_task_name>:
c10034d8:	55                   	push   %ebp
c10034d9:	89 e5                	mov    %esp,%ebp
c10034db:	83 ec 08             	sub    $0x8,%esp
c10034de:	8b 45 08             	mov    0x8(%ebp),%eax
c10034e1:	83 c0 14             	add    $0x14,%eax
c10034e4:	83 ec 04             	sub    $0x4,%esp
c10034e7:	6a 14                	push   $0x14
c10034e9:	6a 00                	push   $0x0
c10034eb:	50                   	push   %eax
c10034ec:	e8 b9 cb ff ff       	call   c10000aa <memset>
c10034f1:	83 c4 10             	add    $0x10,%esp
c10034f4:	8b 45 08             	mov    0x8(%ebp),%eax
c10034f7:	83 c0 14             	add    $0x14,%eax
c10034fa:	83 ec 04             	sub    $0x4,%esp
c10034fd:	6a 14                	push   $0x14
c10034ff:	ff 75 0c             	pushl  0xc(%ebp)
c1003502:	50                   	push   %eax
c1003503:	e8 00 cc ff ff       	call   c1000108 <memcpy>
c1003508:	83 c4 10             	add    $0x10,%esp
c100350b:	c9                   	leave  
c100350c:	c3                   	ret    

c100350d <get_task_name>:
c100350d:	55                   	push   %ebp
c100350e:	89 e5                	mov    %esp,%ebp
c1003510:	83 ec 08             	sub    $0x8,%esp
c1003513:	83 ec 04             	sub    $0x4,%esp
c1003516:	6a 15                	push   $0x15
c1003518:	6a 00                	push   $0x0
c100351a:	68 98 1c 01 c1       	push   $0xc1011c98
c100351f:	e8 86 cb ff ff       	call   c10000aa <memset>
c1003524:	83 c4 10             	add    $0x10,%esp
c1003527:	8b 45 08             	mov    0x8(%ebp),%eax
c100352a:	83 c0 14             	add    $0x14,%eax
c100352d:	83 ec 04             	sub    $0x4,%esp
c1003530:	6a 14                	push   $0x14
c1003532:	50                   	push   %eax
c1003533:	68 98 1c 01 c1       	push   $0xc1011c98
c1003538:	e8 cb cb ff ff       	call   c1000108 <memcpy>
c100353d:	83 c4 10             	add    $0x10,%esp
c1003540:	c9                   	leave  
c1003541:	c3                   	ret    

c1003542 <add_link>:
c1003542:	55                   	push   %ebp
c1003543:	89 e5                	mov    %esp,%ebp
c1003545:	83 ec 20             	sub    $0x20,%esp
c1003548:	c7 45 fc 84 1c 01 c1 	movl   $0xc1011c84,-0x4(%ebp)
c100354f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003552:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003555:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003558:	8b 00                	mov    (%eax),%eax
c100355a:	8b 55 f8             	mov    -0x8(%ebp),%edx
c100355d:	89 55 f4             	mov    %edx,-0xc(%ebp)
c1003560:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003563:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003566:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003569:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100356c:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100356f:	89 10                	mov    %edx,(%eax)
c1003571:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003574:	8b 10                	mov    (%eax),%edx
c1003576:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003579:	89 50 04             	mov    %edx,0x4(%eax)
c100357c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100357f:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003582:	89 50 04             	mov    %edx,0x4(%eax)
c1003585:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003588:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100358b:	89 10                	mov    %edx,(%eax)
c100358d:	90                   	nop
c100358e:	90                   	nop
c100358f:	90                   	nop
c1003590:	c9                   	leave  
c1003591:	c3                   	ret    

c1003592 <add_all_link>:
c1003592:	55                   	push   %ebp
c1003593:	89 e5                	mov    %esp,%ebp
c1003595:	83 ec 20             	sub    $0x20,%esp
c1003598:	c7 45 fc 8c 1c 01 c1 	movl   $0xc1011c8c,-0x4(%ebp)
c100359f:	8b 45 08             	mov    0x8(%ebp),%eax
c10035a2:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10035a5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10035a8:	8b 00                	mov    (%eax),%eax
c10035aa:	8b 55 f8             	mov    -0x8(%ebp),%edx
c10035ad:	89 55 f4             	mov    %edx,-0xc(%ebp)
c10035b0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10035b3:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10035b6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10035b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10035bc:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10035bf:	89 10                	mov    %edx,(%eax)
c10035c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10035c4:	8b 10                	mov    (%eax),%edx
c10035c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10035c9:	89 50 04             	mov    %edx,0x4(%eax)
c10035cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10035cf:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10035d2:	89 50 04             	mov    %edx,0x4(%eax)
c10035d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10035d8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10035db:	89 10                	mov    %edx,(%eax)
c10035dd:	90                   	nop
c10035de:	90                   	nop
c10035df:	90                   	nop
c10035e0:	c9                   	leave  
c10035e1:	c3                   	ret    

c10035e2 <remove_link>:
c10035e2:	55                   	push   %ebp
c10035e3:	89 e5                	mov    %esp,%ebp
c10035e5:	83 ec 10             	sub    $0x10,%esp
c10035e8:	8b 45 08             	mov    0x8(%ebp),%eax
c10035eb:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10035ee:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10035f1:	8b 40 04             	mov    0x4(%eax),%eax
c10035f4:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10035f7:	8b 12                	mov    (%edx),%edx
c10035f9:	89 55 f8             	mov    %edx,-0x8(%ebp)
c10035fc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10035ff:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1003602:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003605:	89 50 04             	mov    %edx,0x4(%eax)
c1003608:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100360b:	8b 55 f8             	mov    -0x8(%ebp),%edx
c100360e:	89 10                	mov    %edx,(%eax)
c1003610:	90                   	nop
c1003611:	90                   	nop
c1003612:	90                   	nop
c1003613:	c9                   	leave  
c1003614:	c3                   	ret    

c1003615 <add_pid_hash>:
c1003615:	55                   	push   %ebp
c1003616:	89 e5                	mov    %esp,%ebp
c1003618:	53                   	push   %ebx
c1003619:	83 ec 20             	sub    $0x20,%esp
c100361c:	8b 45 08             	mov    0x8(%ebp),%eax
c100361f:	8d 58 6c             	lea    0x6c(%eax),%ebx
c1003622:	8b 45 08             	mov    0x8(%ebp),%eax
c1003625:	8b 40 0c             	mov    0xc(%eax),%eax
c1003628:	6a 0a                	push   $0xa
c100362a:	50                   	push   %eax
c100362b:	e8 27 fa ff ff       	call   c1003057 <hash32>
c1003630:	83 c4 08             	add    $0x8,%esp
c1003633:	c1 e0 03             	shl    $0x3,%eax
c1003636:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c100363b:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100363e:	89 5d f4             	mov    %ebx,-0xc(%ebp)
c1003641:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1003644:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003647:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100364a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100364d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003650:	8b 40 04             	mov    0x4(%eax),%eax
c1003653:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003656:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1003659:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100365c:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c100365f:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003662:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003665:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003668:	89 10                	mov    %edx,(%eax)
c100366a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100366d:	8b 10                	mov    (%eax),%edx
c100366f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003672:	89 50 04             	mov    %edx,0x4(%eax)
c1003675:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003678:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100367b:	89 50 04             	mov    %edx,0x4(%eax)
c100367e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003681:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003684:	89 10                	mov    %edx,(%eax)
c1003686:	90                   	nop
c1003687:	90                   	nop
c1003688:	90                   	nop
c1003689:	90                   	nop
c100368a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100368d:	c9                   	leave  
c100368e:	c3                   	ret    

c100368f <remove_pid_hash>:
c100368f:	55                   	push   %ebp
c1003690:	89 e5                	mov    %esp,%ebp
c1003692:	83 ec 18             	sub    $0x18,%esp
c1003695:	83 ec 0c             	sub    $0xc,%esp
c1003698:	ff 75 08             	pushl  0x8(%ebp)
c100369b:	e8 36 00 00 00       	call   c10036d6 <find_task>
c10036a0:	83 c4 10             	add    $0x10,%esp
c10036a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10036a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036a9:	83 c0 6c             	add    $0x6c,%eax
c10036ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10036af:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10036b2:	8b 40 04             	mov    0x4(%eax),%eax
c10036b5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10036b8:	8b 12                	mov    (%edx),%edx
c10036ba:	89 55 ec             	mov    %edx,-0x14(%ebp)
c10036bd:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10036c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10036c3:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10036c6:	89 50 04             	mov    %edx,0x4(%eax)
c10036c9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10036cc:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10036cf:	89 10                	mov    %edx,(%eax)
c10036d1:	90                   	nop
c10036d2:	90                   	nop
c10036d3:	90                   	nop
c10036d4:	c9                   	leave  
c10036d5:	c3                   	ret    

c10036d6 <find_task>:
c10036d6:	55                   	push   %ebp
c10036d7:	89 e5                	mov    %esp,%ebp
c10036d9:	83 ec 10             	sub    $0x10,%esp
c10036dc:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10036e0:	79 07                	jns    c10036e9 <find_task+0x13>
c10036e2:	b8 00 00 00 00       	mov    $0x0,%eax
c10036e7:	eb 56                	jmp    c100373f <find_task+0x69>
c10036e9:	8b 45 08             	mov    0x8(%ebp),%eax
c10036ec:	6a 0a                	push   $0xa
c10036ee:	50                   	push   %eax
c10036ef:	e8 63 f9 ff ff       	call   c1003057 <hash32>
c10036f4:	83 c4 08             	add    $0x8,%esp
c10036f7:	c1 e0 03             	shl    $0x3,%eax
c10036fa:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c10036ff:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003702:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1003705:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003708:	eb 19                	jmp    c1003723 <find_task+0x4d>
c100370a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100370d:	83 e8 6c             	sub    $0x6c,%eax
c1003710:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003713:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003716:	8b 40 0c             	mov    0xc(%eax),%eax
c1003719:	39 45 08             	cmp    %eax,0x8(%ebp)
c100371c:	75 05                	jne    c1003723 <find_task+0x4d>
c100371e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003721:	eb 1c                	jmp    c100373f <find_task+0x69>
c1003723:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003726:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003729:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100372c:	8b 40 04             	mov    0x4(%eax),%eax
c100372f:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003732:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003735:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1003738:	75 d0                	jne    c100370a <find_task+0x34>
c100373a:	b8 00 00 00 00       	mov    $0x0,%eax
c100373f:	c9                   	leave  
c1003740:	c3                   	ret    

c1003741 <alloc_task>:
c1003741:	55                   	push   %ebp
c1003742:	89 e5                	mov    %esp,%ebp
c1003744:	83 ec 18             	sub    $0x18,%esp
c1003747:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c100374b:	75 17                	jne    c1003764 <alloc_task+0x23>
c100374d:	83 ec 08             	sub    $0x8,%esp
c1003750:	6a 01                	push   $0x1
c1003752:	68 00 20 00 00       	push   $0x2000
c1003757:	e8 b3 f4 ff ff       	call   c1002c0f <vmm_malloc>
c100375c:	83 c4 10             	add    $0x10,%esp
c100375f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003762:	eb 15                	jmp    c1003779 <alloc_task+0x38>
c1003764:	83 ec 08             	sub    $0x8,%esp
c1003767:	6a 02                	push   $0x2
c1003769:	68 00 20 00 00       	push   $0x2000
c100376e:	e8 9c f4 ff ff       	call   c1002c0f <vmm_malloc>
c1003773:	83 c4 10             	add    $0x10,%esp
c1003776:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003779:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100377d:	0f 84 b0 00 00 00    	je     c1003833 <alloc_task+0xf2>
c1003783:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003786:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c100378c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100378f:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003796:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003799:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c10037a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037a3:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
c10037aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037ad:	83 c0 14             	add    $0x14,%eax
c10037b0:	83 ec 04             	sub    $0x4,%esp
c10037b3:	6a 14                	push   $0x14
c10037b5:	6a 00                	push   $0x0
c10037b7:	50                   	push   %eax
c10037b8:	e8 ed c8 ff ff       	call   c10000aa <memset>
c10037bd:	83 c4 10             	add    $0x10,%esp
c10037c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037c3:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
c10037ca:	ba 00 20 61 c1       	mov    $0xc1612000,%edx
c10037cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037d2:	89 50 2c             	mov    %edx,0x2c(%eax)
c10037d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037d8:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
c10037df:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037e2:	83 c0 3c             	add    $0x3c,%eax
c10037e5:	83 ec 04             	sub    $0x4,%esp
c10037e8:	6a 20                	push   $0x20
c10037ea:	6a 00                	push   $0x0
c10037ec:	50                   	push   %eax
c10037ed:	e8 b8 c8 ff ff       	call   c10000aa <memset>
c10037f2:	83 c4 10             	add    $0x10,%esp
c10037f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037f8:	c7 80 f4 00 00 00 11 	movl   $0x19971211,0xf4(%eax)
c10037ff:	12 97 19 
c1003802:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003805:	c7 80 f8 00 00 00 00 	movl   $0x0,0xf8(%eax)
c100380c:	00 00 00 
c100380f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1003816:	eb 15                	jmp    c100382d <alloc_task+0xec>
c1003818:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100381b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100381e:	83 c2 1c             	add    $0x1c,%edx
c1003821:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c1003828:	ff 
c1003829:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100382d:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1003831:	7e e5                	jle    c1003818 <alloc_task+0xd7>
c1003833:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003836:	c9                   	leave  
c1003837:	c3                   	ret    

c1003838 <forkret>:
c1003838:	55                   	push   %ebp
c1003839:	89 e5                	mov    %esp,%ebp
c100383b:	83 ec 08             	sub    $0x8,%esp
c100383e:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003843:	8b 40 38             	mov    0x38(%eax),%eax
c1003846:	83 ec 0c             	sub    $0xc,%esp
c1003849:	50                   	push   %eax
c100384a:	e8 a2 d5 ff ff       	call   c1000df1 <forkrets>
c100384f:	83 c4 10             	add    $0x10,%esp
c1003852:	90                   	nop
c1003853:	c9                   	leave  
c1003854:	c3                   	ret    

c1003855 <copy_thread>:
c1003855:	55                   	push   %ebp
c1003856:	89 e5                	mov    %esp,%ebp
c1003858:	57                   	push   %edi
c1003859:	56                   	push   %esi
c100385a:	53                   	push   %ebx
c100385b:	83 ec 1c             	sub    $0x1c,%esp
c100385e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003861:	8b 40 28             	mov    0x28(%eax),%eax
c1003864:	83 e8 4c             	sub    $0x4c,%eax
c1003867:	89 c2                	mov    %eax,%edx
c1003869:	8b 45 08             	mov    0x8(%ebp),%eax
c100386c:	89 50 38             	mov    %edx,0x38(%eax)
c100386f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003872:	8b 40 38             	mov    0x38(%eax),%eax
c1003875:	8b 55 10             	mov    0x10(%ebp),%edx
c1003878:	89 d3                	mov    %edx,%ebx
c100387a:	ba 4c 00 00 00       	mov    $0x4c,%edx
c100387f:	8b 0b                	mov    (%ebx),%ecx
c1003881:	89 08                	mov    %ecx,(%eax)
c1003883:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003887:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c100388b:	8d 78 04             	lea    0x4(%eax),%edi
c100388e:	83 e7 fc             	and    $0xfffffffc,%edi
c1003891:	29 f8                	sub    %edi,%eax
c1003893:	29 c3                	sub    %eax,%ebx
c1003895:	01 c2                	add    %eax,%edx
c1003897:	83 e2 fc             	and    $0xfffffffc,%edx
c100389a:	89 d0                	mov    %edx,%eax
c100389c:	c1 e8 02             	shr    $0x2,%eax
c100389f:	89 de                	mov    %ebx,%esi
c10038a1:	89 c1                	mov    %eax,%ecx
c10038a3:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c10038a5:	8b 45 08             	mov    0x8(%ebp),%eax
c10038a8:	8b 40 38             	mov    0x38(%eax),%eax
c10038ab:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c10038b2:	8b 45 08             	mov    0x8(%ebp),%eax
c10038b5:	8b 40 38             	mov    0x38(%eax),%eax
c10038b8:	8b 50 40             	mov    0x40(%eax),%edx
c10038bb:	8b 45 08             	mov    0x8(%ebp),%eax
c10038be:	8b 40 38             	mov    0x38(%eax),%eax
c10038c1:	80 ce 02             	or     $0x2,%dh
c10038c4:	89 50 40             	mov    %edx,0x40(%eax)
c10038c7:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10038cc:	05 00 01 00 00       	add    $0x100,%eax
c10038d1:	89 c2                	mov    %eax,%edx
c10038d3:	8b 45 08             	mov    0x8(%ebp),%eax
c10038d6:	05 00 01 00 00       	add    $0x100,%eax
c10038db:	83 ec 04             	sub    $0x4,%esp
c10038de:	68 00 0f 00 00       	push   $0xf00
c10038e3:	52                   	push   %edx
c10038e4:	50                   	push   %eax
c10038e5:	e8 1e c8 ff ff       	call   c1000108 <memcpy>
c10038ea:	83 c4 10             	add    $0x10,%esp
c10038ed:	8b 45 08             	mov    0x8(%ebp),%eax
c10038f0:	05 00 01 00 00       	add    $0x100,%eax
c10038f5:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10038f8:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c10038ff:	eb 5b                	jmp    c100395c <copy_thread+0x107>
c1003901:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003904:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100390b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100390e:	01 d0                	add    %edx,%eax
c1003910:	8b 00                	mov    (%eax),%eax
c1003912:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003918:	31 d0                	xor    %edx,%eax
c100391a:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100391f:	85 c0                	test   %eax,%eax
c1003921:	75 35                	jne    c1003958 <copy_thread+0x103>
c1003923:	8b 45 08             	mov    0x8(%ebp),%eax
c1003926:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100392b:	89 c1                	mov    %eax,%ecx
c100392d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003930:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003937:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100393a:	01 d0                	add    %edx,%eax
c100393c:	8b 00                	mov    (%eax),%eax
c100393e:	25 ff 0f 00 00       	and    $0xfff,%eax
c1003943:	89 c2                	mov    %eax,%edx
c1003945:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003948:	8d 1c 85 00 00 00 00 	lea    0x0(,%eax,4),%ebx
c100394f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003952:	01 d8                	add    %ebx,%eax
c1003954:	09 ca                	or     %ecx,%edx
c1003956:	89 10                	mov    %edx,(%eax)
c1003958:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c100395c:	81 7d e4 bf 03 00 00 	cmpl   $0x3bf,-0x1c(%ebp)
c1003963:	76 9c                	jbe    c1003901 <copy_thread+0xac>
c1003965:	8b 45 08             	mov    0x8(%ebp),%eax
c1003968:	8b 40 38             	mov    0x38(%eax),%eax
c100396b:	8b 40 44             	mov    0x44(%eax),%eax
c100396e:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003974:	29 d0                	sub    %edx,%eax
c1003976:	89 c1                	mov    %eax,%ecx
c1003978:	8b 55 08             	mov    0x8(%ebp),%edx
c100397b:	8b 45 08             	mov    0x8(%ebp),%eax
c100397e:	8b 40 38             	mov    0x38(%eax),%eax
c1003981:	01 ca                	add    %ecx,%edx
c1003983:	89 50 44             	mov    %edx,0x44(%eax)
c1003986:	ba 38 38 00 c1       	mov    $0xc1003838,%edx
c100398b:	8b 45 08             	mov    0x8(%ebp),%eax
c100398e:	89 50 3c             	mov    %edx,0x3c(%eax)
c1003991:	8b 45 10             	mov    0x10(%ebp),%eax
c1003994:	8b 50 10             	mov    0x10(%eax),%edx
c1003997:	8b 45 08             	mov    0x8(%ebp),%eax
c100399a:	89 50 44             	mov    %edx,0x44(%eax)
c100399d:	8b 45 10             	mov    0x10(%ebp),%eax
c10039a0:	8b 50 14             	mov    0x14(%eax),%edx
c10039a3:	8b 45 08             	mov    0x8(%ebp),%eax
c10039a6:	89 50 4c             	mov    %edx,0x4c(%eax)
c10039a9:	8b 45 08             	mov    0x8(%ebp),%eax
c10039ac:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c10039b2:	8b 45 08             	mov    0x8(%ebp),%eax
c10039b5:	89 50 40             	mov    %edx,0x40(%eax)
c10039b8:	90                   	nop
c10039b9:	8d 65 f4             	lea    -0xc(%ebp),%esp
c10039bc:	5b                   	pop    %ebx
c10039bd:	5e                   	pop    %esi
c10039be:	5f                   	pop    %edi
c10039bf:	5d                   	pop    %ebp
c10039c0:	c3                   	ret    

c10039c1 <do_fork>:
c10039c1:	55                   	push   %ebp
c10039c2:	89 e5                	mov    %esp,%ebp
c10039c4:	83 ec 18             	sub    $0x18,%esp
c10039c7:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c10039cc:	3d 00 80 00 00       	cmp    $0x8000,%eax
c10039d1:	76 0a                	jbe    c10039dd <do_fork+0x1c>
c10039d3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10039d8:	e9 3d 01 00 00       	jmp    c1003b1a <do_fork+0x159>
c10039dd:	83 ec 0c             	sub    $0xc,%esp
c10039e0:	6a 00                	push   $0x0
c10039e2:	e8 5a fd ff ff       	call   c1003741 <alloc_task>
c10039e7:	83 c4 10             	add    $0x10,%esp
c10039ea:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10039ed:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10039f1:	75 0a                	jne    c10039fd <do_fork+0x3c>
c10039f3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10039f8:	e9 1d 01 00 00       	jmp    c1003b1a <do_fork+0x159>
c10039fd:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003a03:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003a06:	89 50 34             	mov    %edx,0x34(%eax)
c1003a09:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003a0e:	8b 50 0c             	mov    0xc(%eax),%edx
c1003a11:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003a14:	89 50 10             	mov    %edx,0x10(%eax)
c1003a17:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003a1c:	8b 00                	mov    (%eax),%eax
c1003a1e:	85 c0                	test   %eax,%eax
c1003a20:	74 19                	je     c1003a3b <do_fork+0x7a>
c1003a22:	68 bf ad 00 c1       	push   $0xc100adbf
c1003a27:	68 4c af 00 c1       	push   $0xc100af4c
c1003a2c:	68 6a 01 00 00       	push   $0x16a
c1003a31:	68 d4 ad 00 c1       	push   $0xc100add4
c1003a36:	e8 30 c9 ff ff       	call   c100036b <__PANIC>
c1003a3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003a3e:	8d 90 00 20 00 00    	lea    0x2000(%eax),%edx
c1003a44:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003a47:	89 50 28             	mov    %edx,0x28(%eax)
c1003a4a:	83 ec 0c             	sub    $0xc,%esp
c1003a4d:	ff 75 f4             	pushl  -0xc(%ebp)
c1003a50:	e8 cc 04 00 00       	call   c1003f21 <copy_user_cr3>
c1003a55:	83 c4 10             	add    $0x10,%esp
c1003a58:	83 ec 04             	sub    $0x4,%esp
c1003a5b:	ff 75 10             	pushl  0x10(%ebp)
c1003a5e:	ff 75 0c             	pushl  0xc(%ebp)
c1003a61:	ff 75 f4             	pushl  -0xc(%ebp)
c1003a64:	e8 ec fd ff ff       	call   c1003855 <copy_thread>
c1003a69:	83 c4 10             	add    $0x10,%esp
c1003a6c:	e8 ed f9 ff ff       	call   c100345e <alloc_pid>
c1003a71:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003a74:	89 42 0c             	mov    %eax,0xc(%edx)
c1003a77:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003a7a:	8b 40 0c             	mov    0xc(%eax),%eax
c1003a7d:	85 c0                	test   %eax,%eax
c1003a7f:	79 0a                	jns    c1003a8b <do_fork+0xca>
c1003a81:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003a86:	e9 8f 00 00 00       	jmp    c1003b1a <do_fork+0x159>
c1003a8b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003a8e:	83 c0 5c             	add    $0x5c,%eax
c1003a91:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003a94:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003a97:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003a9a:	89 50 04             	mov    %edx,0x4(%eax)
c1003a9d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003aa0:	8b 50 04             	mov    0x4(%eax),%edx
c1003aa3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003aa6:	89 10                	mov    %edx,(%eax)
c1003aa8:	90                   	nop
c1003aa9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003aac:	83 c0 5c             	add    $0x5c,%eax
c1003aaf:	83 ec 0c             	sub    $0xc,%esp
c1003ab2:	50                   	push   %eax
c1003ab3:	e8 8a fa ff ff       	call   c1003542 <add_link>
c1003ab8:	83 c4 10             	add    $0x10,%esp
c1003abb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003abe:	83 c0 64             	add    $0x64,%eax
c1003ac1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003ac4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003ac7:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003aca:	89 50 04             	mov    %edx,0x4(%eax)
c1003acd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003ad0:	8b 50 04             	mov    0x4(%eax),%edx
c1003ad3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003ad6:	89 10                	mov    %edx,(%eax)
c1003ad8:	90                   	nop
c1003ad9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003adc:	83 c0 64             	add    $0x64,%eax
c1003adf:	83 ec 0c             	sub    $0xc,%esp
c1003ae2:	50                   	push   %eax
c1003ae3:	e8 aa fa ff ff       	call   c1003592 <add_all_link>
c1003ae8:	83 c4 10             	add    $0x10,%esp
c1003aeb:	83 ec 0c             	sub    $0xc,%esp
c1003aee:	ff 75 f4             	pushl  -0xc(%ebp)
c1003af1:	e8 1f fb ff ff       	call   c1003615 <add_pid_hash>
c1003af6:	83 c4 10             	add    $0x10,%esp
c1003af9:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c1003afe:	83 c0 01             	add    $0x1,%eax
c1003b01:	a3 94 1c 01 c1       	mov    %eax,0xc1011c94
c1003b06:	83 ec 0c             	sub    $0xc,%esp
c1003b09:	ff 75 f4             	pushl  -0xc(%ebp)
c1003b0c:	e8 0b 00 00 00       	call   c1003b1c <wakeup_task>
c1003b11:	83 c4 10             	add    $0x10,%esp
c1003b14:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003b17:	8b 40 0c             	mov    0xc(%eax),%eax
c1003b1a:	c9                   	leave  
c1003b1b:	c3                   	ret    

c1003b1c <wakeup_task>:
c1003b1c:	55                   	push   %ebp
c1003b1d:	89 e5                	mov    %esp,%ebp
c1003b1f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003b22:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003b28:	90                   	nop
c1003b29:	5d                   	pop    %ebp
c1003b2a:	c3                   	ret    

c1003b2b <kernel_thread>:
c1003b2b:	55                   	push   %ebp
c1003b2c:	89 e5                	mov    %esp,%ebp
c1003b2e:	83 ec 58             	sub    $0x58,%esp
c1003b31:	83 ec 04             	sub    $0x4,%esp
c1003b34:	6a 4c                	push   $0x4c
c1003b36:	6a 00                	push   $0x0
c1003b38:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003b3b:	50                   	push   %eax
c1003b3c:	e8 69 c5 ff ff       	call   c10000aa <memset>
c1003b41:	83 c4 10             	add    $0x10,%esp
c1003b44:	66 c7 45 e8 08 00    	movw   $0x8,-0x18(%ebp)
c1003b4a:	66 c7 45 f4 10 00    	movw   $0x10,-0xc(%ebp)
c1003b50:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1003b54:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
c1003b58:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
c1003b5c:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
c1003b60:	8b 45 08             	mov    0x8(%ebp),%eax
c1003b63:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1003b66:	8b 45 0c             	mov    0xc(%ebp),%eax
c1003b69:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1003b6c:	b8 19 48 00 c1       	mov    $0xc1004819,%eax
c1003b71:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003b74:	83 ec 04             	sub    $0x4,%esp
c1003b77:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003b7a:	50                   	push   %eax
c1003b7b:	6a 00                	push   $0x0
c1003b7d:	ff 75 10             	pushl  0x10(%ebp)
c1003b80:	e8 3c fe ff ff       	call   c10039c1 <do_fork>
c1003b85:	83 c4 10             	add    $0x10,%esp
c1003b88:	c9                   	leave  
c1003b89:	c3                   	ret    

c1003b8a <task_run>:
c1003b8a:	55                   	push   %ebp
c1003b8b:	89 e5                	mov    %esp,%ebp
c1003b8d:	83 ec 18             	sub    $0x18,%esp
c1003b90:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003b95:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003b98:	74 63                	je     c1003bfd <task_run+0x73>
c1003b9a:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003b9f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003ba2:	8b 45 08             	mov    0x8(%ebp),%eax
c1003ba5:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c1003baa:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003baf:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003bb2:	75 07                	jne    c1003bbb <task_run+0x31>
c1003bb4:	e8 b3 d1 ff ff       	call   c1000d6c <intr_enable>
c1003bb9:	eb 05                	jmp    c1003bc0 <task_run+0x36>
c1003bbb:	e8 cb d1 ff ff       	call   c1000d8b <intr_disable>
c1003bc0:	8b 45 08             	mov    0x8(%ebp),%eax
c1003bc3:	8b 40 28             	mov    0x28(%eax),%eax
c1003bc6:	83 ec 0c             	sub    $0xc,%esp
c1003bc9:	50                   	push   %eax
c1003bca:	e8 e2 cd ff ff       	call   c10009b1 <set_ts_esp0>
c1003bcf:	83 c4 10             	add    $0x10,%esp
c1003bd2:	8b 45 08             	mov    0x8(%ebp),%eax
c1003bd5:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003bd8:	83 ec 0c             	sub    $0xc,%esp
c1003bdb:	50                   	push   %eax
c1003bdc:	e8 75 c6 ff ff       	call   c1000256 <lcr3>
c1003be1:	83 c4 10             	add    $0x10,%esp
c1003be4:	8b 45 08             	mov    0x8(%ebp),%eax
c1003be7:	8d 50 3c             	lea    0x3c(%eax),%edx
c1003bea:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003bed:	83 c0 3c             	add    $0x3c,%eax
c1003bf0:	83 ec 08             	sub    $0x8,%esp
c1003bf3:	52                   	push   %edx
c1003bf4:	50                   	push   %eax
c1003bf5:	e8 24 0c 00 00       	call   c100481e <switch_to>
c1003bfa:	83 c4 10             	add    $0x10,%esp
c1003bfd:	90                   	nop
c1003bfe:	c9                   	leave  
c1003bff:	c3                   	ret    

c1003c00 <schedule>:
c1003c00:	55                   	push   %ebp
c1003c01:	89 e5                	mov    %esp,%ebp
c1003c03:	83 ec 18             	sub    $0x18,%esp
c1003c06:	c7 45 ec 84 1c 01 c1 	movl   $0xc1011c84,-0x14(%ebp)
c1003c0d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003c10:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003c13:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003c18:	8b 00                	mov    (%eax),%eax
c1003c1a:	85 c0                	test   %eax,%eax
c1003c1c:	75 0c                	jne    c1003c2a <schedule+0x2a>
c1003c1e:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003c23:	8b 40 04             	mov    0x4(%eax),%eax
c1003c26:	85 c0                	test   %eax,%eax
c1003c28:	74 0b                	je     c1003c35 <schedule+0x35>
c1003c2a:	0f b6 05 b4 1c 01 c1 	movzbl 0xc1011cb4,%eax
c1003c31:	3c 01                	cmp    $0x1,%al
c1003c33:	75 48                	jne    c1003c7d <schedule+0x7d>
c1003c35:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003c3a:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003c41:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003c46:	83 c0 5c             	add    $0x5c,%eax
c1003c49:	50                   	push   %eax
c1003c4a:	e8 f3 f8 ff ff       	call   c1003542 <add_link>
c1003c4f:	83 c4 04             	add    $0x4,%esp
c1003c52:	eb 29                	jmp    c1003c7d <schedule+0x7d>
c1003c54:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003c57:	83 e8 5c             	sub    $0x5c,%eax
c1003c5a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003c5d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c60:	8b 00                	mov    (%eax),%eax
c1003c62:	85 c0                	test   %eax,%eax
c1003c64:	75 17                	jne    c1003c7d <schedule+0x7d>
c1003c66:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c69:	8b 40 04             	mov    0x4(%eax),%eax
c1003c6c:	85 c0                	test   %eax,%eax
c1003c6e:	74 0d                	je     c1003c7d <schedule+0x7d>
c1003c70:	ff 75 f4             	pushl  -0xc(%ebp)
c1003c73:	e8 6a f9 ff ff       	call   c10035e2 <remove_link>
c1003c78:	83 c4 04             	add    $0x4,%esp
c1003c7b:	eb 17                	jmp    c1003c94 <schedule+0x94>
c1003c7d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003c80:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003c83:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003c86:	8b 40 04             	mov    0x4(%eax),%eax
c1003c89:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003c8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003c8f:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1003c92:	75 c0                	jne    c1003c54 <schedule+0x54>
c1003c94:	83 ec 0c             	sub    $0xc,%esp
c1003c97:	ff 75 f0             	pushl  -0x10(%ebp)
c1003c9a:	e8 eb fe ff ff       	call   c1003b8a <task_run>
c1003c9f:	83 c4 10             	add    $0x10,%esp
c1003ca2:	90                   	nop
c1003ca3:	c9                   	leave  
c1003ca4:	c3                   	ret    

c1003ca5 <thread_block>:
c1003ca5:	55                   	push   %ebp
c1003ca6:	89 e5                	mov    %esp,%ebp
c1003ca8:	83 ec 18             	sub    $0x18,%esp
c1003cab:	e8 fb d0 ff ff       	call   c1000dab <intr_save>
c1003cb0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003cb3:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003cb8:	8b 55 08             	mov    0x8(%ebp),%edx
c1003cbb:	89 10                	mov    %edx,(%eax)
c1003cbd:	e8 3e ff ff ff       	call   c1003c00 <schedule>
c1003cc2:	83 ec 0c             	sub    $0xc,%esp
c1003cc5:	ff 75 f4             	pushl  -0xc(%ebp)
c1003cc8:	e8 f1 d0 ff ff       	call   c1000dbe <intr_restore>
c1003ccd:	83 c4 10             	add    $0x10,%esp
c1003cd0:	90                   	nop
c1003cd1:	c9                   	leave  
c1003cd2:	c3                   	ret    

c1003cd3 <thread_unblock>:
c1003cd3:	55                   	push   %ebp
c1003cd4:	89 e5                	mov    %esp,%ebp
c1003cd6:	83 ec 18             	sub    $0x18,%esp
c1003cd9:	c7 45 f0 84 1c 01 c1 	movl   $0xc1011c84,-0x10(%ebp)
c1003ce0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003ce3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003ce6:	e8 c0 d0 ff ff       	call   c1000dab <intr_save>
c1003ceb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003cee:	8b 45 08             	mov    0x8(%ebp),%eax
c1003cf1:	8b 00                	mov    (%eax),%eax
c1003cf3:	83 f8 01             	cmp    $0x1,%eax
c1003cf6:	74 19                	je     c1003d11 <thread_unblock+0x3e>
c1003cf8:	68 05 ae 00 c1       	push   $0xc100ae05
c1003cfd:	68 54 af 00 c1       	push   $0xc100af54
c1003d02:	68 e0 01 00 00       	push   $0x1e0
c1003d07:	68 d4 ad 00 c1       	push   $0xc100add4
c1003d0c:	e8 5a c6 ff ff       	call   c100036b <__PANIC>
c1003d11:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d14:	8b 00                	mov    (%eax),%eax
c1003d16:	85 c0                	test   %eax,%eax
c1003d18:	74 58                	je     c1003d72 <thread_unblock+0x9f>
c1003d1a:	eb 24                	jmp    c1003d40 <thread_unblock+0x6d>
c1003d1c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003d1f:	83 e8 5c             	sub    $0x5c,%eax
c1003d22:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003d25:	75 19                	jne    c1003d40 <thread_unblock+0x6d>
c1003d27:	68 1c ae 00 c1       	push   $0xc100ae1c
c1003d2c:	68 54 af 00 c1       	push   $0xc100af54
c1003d31:	68 e5 01 00 00       	push   $0x1e5
c1003d36:	68 d4 ad 00 c1       	push   $0xc100add4
c1003d3b:	e8 2b c6 ff ff       	call   c100036b <__PANIC>
c1003d40:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003d43:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003d46:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003d49:	8b 40 04             	mov    0x4(%eax),%eax
c1003d4c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003d4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003d52:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1003d55:	75 c5                	jne    c1003d1c <thread_unblock+0x49>
c1003d57:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d5a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003d60:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d63:	83 c0 5c             	add    $0x5c,%eax
c1003d66:	83 ec 0c             	sub    $0xc,%esp
c1003d69:	50                   	push   %eax
c1003d6a:	e8 d3 f7 ff ff       	call   c1003542 <add_link>
c1003d6f:	83 c4 10             	add    $0x10,%esp
c1003d72:	83 ec 0c             	sub    $0xc,%esp
c1003d75:	ff 75 ec             	pushl  -0x14(%ebp)
c1003d78:	e8 41 d0 ff ff       	call   c1000dbe <intr_restore>
c1003d7d:	83 c4 10             	add    $0x10,%esp
c1003d80:	90                   	nop
c1003d81:	c9                   	leave  
c1003d82:	c3                   	ret    

c1003d83 <print_taskinfo>:
c1003d83:	55                   	push   %ebp
c1003d84:	89 e5                	mov    %esp,%ebp
c1003d86:	83 ec 08             	sub    $0x8,%esp
c1003d89:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003d8e:	83 ec 0c             	sub    $0xc,%esp
c1003d91:	50                   	push   %eax
c1003d92:	e8 76 f7 ff ff       	call   c100350d <get_task_name>
c1003d97:	83 c4 10             	add    $0x10,%esp
c1003d9a:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003da0:	8b 52 0c             	mov    0xc(%edx),%edx
c1003da3:	83 ec 04             	sub    $0x4,%esp
c1003da6:	50                   	push   %eax
c1003da7:	52                   	push   %edx
c1003da8:	68 50 ae 00 c1       	push   $0xc100ae50
c1003dad:	e8 b1 17 00 00       	call   c1005563 <printk>
c1003db2:	83 c4 10             	add    $0x10,%esp
c1003db5:	83 ec 08             	sub    $0x8,%esp
c1003db8:	ff 75 08             	pushl  0x8(%ebp)
c1003dbb:	68 72 ae 00 c1       	push   $0xc100ae72
c1003dc0:	e8 9e 17 00 00       	call   c1005563 <printk>
c1003dc5:	83 c4 10             	add    $0x10,%esp
c1003dc8:	83 ec 0c             	sub    $0xc,%esp
c1003dcb:	68 7f ae 00 c1       	push   $0xc100ae7f
c1003dd0:	e8 8e 17 00 00       	call   c1005563 <printk>
c1003dd5:	83 c4 10             	add    $0x10,%esp
c1003dd8:	b8 00 00 00 00       	mov    $0x0,%eax
c1003ddd:	c9                   	leave  
c1003dde:	c3                   	ret    

c1003ddf <do_exit>:
c1003ddf:	55                   	push   %ebp
c1003de0:	89 e5                	mov    %esp,%ebp
c1003de2:	83 ec 08             	sub    $0x8,%esp
c1003de5:	83 ec 0c             	sub    $0xc,%esp
c1003de8:	68 9b ae 00 c1       	push   $0xc100ae9b
c1003ded:	e8 71 17 00 00       	call   c1005563 <printk>
c1003df2:	83 c4 10             	add    $0x10,%esp
c1003df5:	eb fe                	jmp    c1003df5 <do_exit+0x16>

c1003df7 <do_execve>:
c1003df7:	55                   	push   %ebp
c1003df8:	89 e5                	mov    %esp,%ebp
c1003dfa:	b8 00 00 00 00       	mov    $0x0,%eax
c1003dff:	5d                   	pop    %ebp
c1003e00:	c3                   	ret    

c1003e01 <kernel_execve>:
c1003e01:	55                   	push   %ebp
c1003e02:	89 e5                	mov    %esp,%ebp
c1003e04:	83 ec 18             	sub    $0x18,%esp
c1003e07:	83 ec 0c             	sub    $0xc,%esp
c1003e0a:	ff 75 08             	pushl  0x8(%ebp)
c1003e0d:	e8 0c c3 ff ff       	call   c100011e <strlen>
c1003e12:	83 c4 10             	add    $0x10,%esp
c1003e15:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003e18:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003e1b:	c9                   	leave  
c1003e1c:	c3                   	ret    

c1003e1d <user_main>:
c1003e1d:	55                   	push   %ebp
c1003e1e:	89 e5                	mov    %esp,%ebp
c1003e20:	90                   	nop
c1003e21:	5d                   	pop    %ebp
c1003e22:	c3                   	ret    

c1003e23 <set_user_cr3>:
c1003e23:	55                   	push   %ebp
c1003e24:	89 e5                	mov    %esp,%ebp
c1003e26:	57                   	push   %edi
c1003e27:	56                   	push   %esi
c1003e28:	53                   	push   %ebx
c1003e29:	83 ec 2c             	sub    $0x2c,%esp
c1003e2c:	83 ec 08             	sub    $0x8,%esp
c1003e2f:	6a 02                	push   $0x2
c1003e31:	68 00 10 00 00       	push   $0x1000
c1003e36:	e8 d4 ed ff ff       	call   c1002c0f <vmm_malloc>
c1003e3b:	83 c4 10             	add    $0x10,%esp
c1003e3e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003e41:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003e44:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1003e49:	ba 00 10 00 00       	mov    $0x1000,%edx
c1003e4e:	8b 0b                	mov    (%ebx),%ecx
c1003e50:	89 08                	mov    %ecx,(%eax)
c1003e52:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003e56:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003e5a:	8d 78 04             	lea    0x4(%eax),%edi
c1003e5d:	83 e7 fc             	and    $0xfffffffc,%edi
c1003e60:	29 f8                	sub    %edi,%eax
c1003e62:	29 c3                	sub    %eax,%ebx
c1003e64:	01 c2                	add    %eax,%edx
c1003e66:	83 e2 fc             	and    $0xfffffffc,%edx
c1003e69:	89 d0                	mov    %edx,%eax
c1003e6b:	c1 e8 02             	shr    $0x2,%eax
c1003e6e:	89 de                	mov    %ebx,%esi
c1003e70:	89 c1                	mov    %eax,%ecx
c1003e72:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003e74:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003e77:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003e7a:	a1 00 2c 61 c1       	mov    0xc1612c00,%eax
c1003e7f:	83 ec 08             	sub    $0x8,%esp
c1003e82:	50                   	push   %eax
c1003e83:	68 a7 ae 00 c1       	push   $0xc100aea7
c1003e88:	e8 d6 16 00 00       	call   c1005563 <printk>
c1003e8d:	83 c4 10             	add    $0x10,%esp
c1003e90:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003e93:	05 00 0c 00 00       	add    $0xc00,%eax
c1003e98:	8b 00                	mov    (%eax),%eax
c1003e9a:	83 ec 08             	sub    $0x8,%esp
c1003e9d:	50                   	push   %eax
c1003e9e:	68 bb ae 00 c1       	push   $0xc100aebb
c1003ea3:	e8 bb 16 00 00       	call   c1005563 <printk>
c1003ea8:	83 c4 10             	add    $0x10,%esp
c1003eab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003eae:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1003eb1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003eb4:	c1 e8 16             	shr    $0x16,%eax
c1003eb7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003ebe:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003ec1:	01 d0                	add    %edx,%eax
c1003ec3:	8b 00                	mov    (%eax),%eax
c1003ec5:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003eca:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1003ecf:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1003ed2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003ed5:	c1 e8 0c             	shr    $0xc,%eax
c1003ed8:	25 ff 03 00 00       	and    $0x3ff,%eax
c1003edd:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003ee4:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1003ee7:	01 d0                	add    %edx,%eax
c1003ee9:	8b 00                	mov    (%eax),%eax
c1003eeb:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003ef0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1003ef3:	83 ec 08             	sub    $0x8,%esp
c1003ef6:	ff 75 d4             	pushl  -0x2c(%ebp)
c1003ef9:	68 cb ae 00 c1       	push   $0xc100aecb
c1003efe:	e8 60 16 00 00       	call   c1005563 <printk>
c1003f03:	83 c4 10             	add    $0x10,%esp
c1003f06:	8b 45 08             	mov    0x8(%ebp),%eax
c1003f09:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1003f0c:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003f0f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003f12:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003f15:	89 50 30             	mov    %edx,0x30(%eax)
c1003f18:	90                   	nop
c1003f19:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003f1c:	5b                   	pop    %ebx
c1003f1d:	5e                   	pop    %esi
c1003f1e:	5f                   	pop    %edi
c1003f1f:	5d                   	pop    %ebp
c1003f20:	c3                   	ret    

c1003f21 <copy_user_cr3>:
c1003f21:	55                   	push   %ebp
c1003f22:	89 e5                	mov    %esp,%ebp
c1003f24:	57                   	push   %edi
c1003f25:	56                   	push   %esi
c1003f26:	53                   	push   %ebx
c1003f27:	83 ec 2c             	sub    $0x2c,%esp
c1003f2a:	83 ec 08             	sub    $0x8,%esp
c1003f2d:	6a 02                	push   $0x2
c1003f2f:	68 00 10 00 00       	push   $0x1000
c1003f34:	e8 d6 ec ff ff       	call   c1002c0f <vmm_malloc>
c1003f39:	83 c4 10             	add    $0x10,%esp
c1003f3c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003f3f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003f42:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1003f47:	ba 00 10 00 00       	mov    $0x1000,%edx
c1003f4c:	8b 0b                	mov    (%ebx),%ecx
c1003f4e:	89 08                	mov    %ecx,(%eax)
c1003f50:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003f54:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003f58:	8d 78 04             	lea    0x4(%eax),%edi
c1003f5b:	83 e7 fc             	and    $0xfffffffc,%edi
c1003f5e:	29 f8                	sub    %edi,%eax
c1003f60:	29 c3                	sub    %eax,%ebx
c1003f62:	01 c2                	add    %eax,%edx
c1003f64:	83 e2 fc             	and    $0xfffffffc,%edx
c1003f67:	89 d0                	mov    %edx,%eax
c1003f69:	c1 e8 02             	shr    $0x2,%eax
c1003f6c:	89 de                	mov    %ebx,%esi
c1003f6e:	89 c1                	mov    %eax,%ecx
c1003f70:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003f72:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003f77:	8b 40 30             	mov    0x30(%eax),%eax
c1003f7a:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1003f7d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003f80:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1003f83:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1003f8a:	eb 51                	jmp    c1003fdd <copy_user_cr3+0xbc>
c1003f8c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003f8f:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003f96:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003f99:	01 d0                	add    %edx,%eax
c1003f9b:	8b 00                	mov    (%eax),%eax
c1003f9d:	83 e0 01             	and    $0x1,%eax
c1003fa0:	85 c0                	test   %eax,%eax
c1003fa2:	74 13                	je     c1003fb7 <copy_user_cr3+0x96>
c1003fa4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003fa7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003fae:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003fb1:	01 d0                	add    %edx,%eax
c1003fb3:	8b 00                	mov    (%eax),%eax
c1003fb5:	eb 11                	jmp    c1003fc8 <copy_user_cr3+0xa7>
c1003fb7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003fba:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003fc1:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1003fc4:	01 d0                	add    %edx,%eax
c1003fc6:	8b 00                	mov    (%eax),%eax
c1003fc8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003fcb:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1003fd2:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1003fd5:	01 ca                	add    %ecx,%edx
c1003fd7:	89 02                	mov    %eax,(%edx)
c1003fd9:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1003fdd:	81 7d e4 ff 03 00 00 	cmpl   $0x3ff,-0x1c(%ebp)
c1003fe4:	7e a6                	jle    c1003f8c <copy_user_cr3+0x6b>
c1003fe6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003fe9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1003fec:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003fef:	c1 e8 16             	shr    $0x16,%eax
c1003ff2:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003ff9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1003ffc:	01 d0                	add    %edx,%eax
c1003ffe:	8b 00                	mov    (%eax),%eax
c1004000:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1004005:	2d 00 00 00 40       	sub    $0x40000000,%eax
c100400a:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100400d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004010:	c1 e8 0c             	shr    $0xc,%eax
c1004013:	25 ff 03 00 00       	and    $0x3ff,%eax
c1004018:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100401f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1004022:	01 d0                	add    %edx,%eax
c1004024:	8b 00                	mov    (%eax),%eax
c1004026:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100402b:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100402e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004031:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1004034:	89 50 30             	mov    %edx,0x30(%eax)
c1004037:	8b 45 08             	mov    0x8(%ebp),%eax
c100403a:	8b 55 cc             	mov    -0x34(%ebp),%edx
c100403d:	89 50 2c             	mov    %edx,0x2c(%eax)
c1004040:	90                   	nop
c1004041:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1004044:	5b                   	pop    %ebx
c1004045:	5e                   	pop    %esi
c1004046:	5f                   	pop    %edi
c1004047:	5d                   	pop    %ebp
c1004048:	c3                   	ret    

c1004049 <list_traversal>:
c1004049:	55                   	push   %ebp
c100404a:	89 e5                	mov    %esp,%ebp
c100404c:	83 ec 18             	sub    $0x18,%esp
c100404f:	8b 45 08             	mov    0x8(%ebp),%eax
c1004052:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004055:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004058:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100405b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100405e:	8b 40 04             	mov    0x4(%eax),%eax
c1004061:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1004064:	75 07                	jne    c100406d <list_traversal+0x24>
c1004066:	b8 01 00 00 00       	mov    $0x1,%eax
c100406b:	eb 05                	jmp    c1004072 <list_traversal+0x29>
c100406d:	b8 00 00 00 00       	mov    $0x0,%eax
c1004072:	84 c0                	test   %al,%al
c1004074:	74 21                	je     c1004097 <list_traversal+0x4e>
c1004076:	b8 00 00 00 00       	mov    $0x0,%eax
c100407b:	eb 36                	jmp    c10040b3 <list_traversal+0x6a>
c100407d:	83 ec 08             	sub    $0x8,%esp
c1004080:	ff 75 10             	pushl  0x10(%ebp)
c1004083:	ff 75 f4             	pushl  -0xc(%ebp)
c1004086:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004089:	ff d0                	call   *%eax
c100408b:	83 c4 10             	add    $0x10,%esp
c100408e:	84 c0                	test   %al,%al
c1004090:	74 05                	je     c1004097 <list_traversal+0x4e>
c1004092:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004095:	eb 1c                	jmp    c10040b3 <list_traversal+0x6a>
c1004097:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100409a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100409d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10040a0:	8b 40 04             	mov    0x4(%eax),%eax
c10040a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10040a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10040a9:	3b 45 08             	cmp    0x8(%ebp),%eax
c10040ac:	75 cf                	jne    c100407d <list_traversal+0x34>
c10040ae:	b8 00 00 00 00       	mov    $0x0,%eax
c10040b3:	c9                   	leave  
c10040b4:	c3                   	ret    

c10040b5 <task_exit>:
c10040b5:	55                   	push   %ebp
c10040b6:	89 e5                	mov    %esp,%ebp
c10040b8:	83 ec 48             	sub    $0x48,%esp
c10040bb:	c7 45 f0 84 1c 01 c1 	movl   $0xc1011c84,-0x10(%ebp)
c10040c2:	c7 45 ec 8c 1c 01 c1 	movl   $0xc1011c8c,-0x14(%ebp)
c10040c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10040cc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10040cf:	e8 d7 cc ff ff       	call   c1000dab <intr_save>
c10040d4:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10040d7:	8b 45 08             	mov    0x8(%ebp),%eax
c10040da:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
c10040e0:	eb 59                	jmp    c100413b <task_exit+0x86>
c10040e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10040e5:	83 e8 5c             	sub    $0x5c,%eax
c10040e8:	39 45 08             	cmp    %eax,0x8(%ebp)
c10040eb:	75 4e                	jne    c100413b <task_exit+0x86>
c10040ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10040f0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10040f3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10040f6:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10040f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10040fc:	8b 40 04             	mov    0x4(%eax),%eax
c10040ff:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1004102:	8b 12                	mov    (%edx),%edx
c1004104:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1004107:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100410a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100410d:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1004110:	89 50 04             	mov    %edx,0x4(%eax)
c1004113:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004116:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1004119:	89 10                	mov    %edx,(%eax)
c100411b:	90                   	nop
c100411c:	90                   	nop
c100411d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004120:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1004123:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1004126:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1004129:	89 50 04             	mov    %edx,0x4(%eax)
c100412c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100412f:	8b 50 04             	mov    0x4(%eax),%edx
c1004132:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1004135:	89 10                	mov    %edx,(%eax)
c1004137:	90                   	nop
c1004138:	90                   	nop
c1004139:	eb 17                	jmp    c1004152 <task_exit+0x9d>
c100413b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100413e:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1004141:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1004144:	8b 40 04             	mov    0x4(%eax),%eax
c1004147:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100414a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100414d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1004150:	75 90                	jne    c10040e2 <task_exit+0x2d>
c1004152:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004155:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004158:	eb 59                	jmp    c10041b3 <task_exit+0xfe>
c100415a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100415d:	83 e8 64             	sub    $0x64,%eax
c1004160:	39 45 08             	cmp    %eax,0x8(%ebp)
c1004163:	75 4e                	jne    c10041b3 <task_exit+0xfe>
c1004165:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004168:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100416b:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100416e:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1004171:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004174:	8b 40 04             	mov    0x4(%eax),%eax
c1004177:	8b 55 c8             	mov    -0x38(%ebp),%edx
c100417a:	8b 12                	mov    (%edx),%edx
c100417c:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c100417f:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1004182:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1004185:	8b 55 c0             	mov    -0x40(%ebp),%edx
c1004188:	89 50 04             	mov    %edx,0x4(%eax)
c100418b:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100418e:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c1004191:	89 10                	mov    %edx,(%eax)
c1004193:	90                   	nop
c1004194:	90                   	nop
c1004195:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1004198:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100419b:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100419e:	8b 55 bc             	mov    -0x44(%ebp),%edx
c10041a1:	89 50 04             	mov    %edx,0x4(%eax)
c10041a4:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10041a7:	8b 50 04             	mov    0x4(%eax),%edx
c10041aa:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10041ad:	89 10                	mov    %edx,(%eax)
c10041af:	90                   	nop
c10041b0:	90                   	nop
c10041b1:	eb 17                	jmp    c10041ca <task_exit+0x115>
c10041b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041b6:	89 45 b8             	mov    %eax,-0x48(%ebp)
c10041b9:	8b 45 b8             	mov    -0x48(%ebp),%eax
c10041bc:	8b 40 04             	mov    0x4(%eax),%eax
c10041bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10041c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041c5:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c10041c8:	75 90                	jne    c100415a <task_exit+0xa5>
c10041ca:	8b 45 08             	mov    0x8(%ebp),%eax
c10041cd:	8b 40 0c             	mov    0xc(%eax),%eax
c10041d0:	83 ec 0c             	sub    $0xc,%esp
c10041d3:	50                   	push   %eax
c10041d4:	e8 e1 f2 ff ff       	call   c10034ba <free_pid>
c10041d9:	83 c4 10             	add    $0x10,%esp
c10041dc:	8b 45 08             	mov    0x8(%ebp),%eax
c10041df:	8b 40 30             	mov    0x30(%eax),%eax
c10041e2:	83 ec 08             	sub    $0x8,%esp
c10041e5:	68 00 10 00 00       	push   $0x1000
c10041ea:	50                   	push   %eax
c10041eb:	e8 44 eb ff ff       	call   c1002d34 <vmm_free>
c10041f0:	83 c4 10             	add    $0x10,%esp
c10041f3:	8b 45 08             	mov    0x8(%ebp),%eax
c10041f6:	05 00 10 00 00       	add    $0x1000,%eax
c10041fb:	83 ec 08             	sub    $0x8,%esp
c10041fe:	68 00 10 00 00       	push   $0x1000
c1004203:	50                   	push   %eax
c1004204:	e8 2b eb ff ff       	call   c1002d34 <vmm_free>
c1004209:	83 c4 10             	add    $0x10,%esp
c100420c:	8b 45 08             	mov    0x8(%ebp),%eax
c100420f:	83 ec 08             	sub    $0x8,%esp
c1004212:	68 00 10 00 00       	push   $0x1000
c1004217:	50                   	push   %eax
c1004218:	e8 17 eb ff ff       	call   c1002d34 <vmm_free>
c100421d:	83 c4 10             	add    $0x10,%esp
c1004220:	83 ec 0c             	sub    $0xc,%esp
c1004223:	ff 75 e8             	pushl  -0x18(%ebp)
c1004226:	e8 93 cb ff ff       	call   c1000dbe <intr_restore>
c100422b:	83 c4 10             	add    $0x10,%esp
c100422e:	90                   	nop
c100422f:	c9                   	leave  
c1004230:	c3                   	ret    

c1004231 <pte_ptr>:
c1004231:	55                   	push   %ebp
c1004232:	89 e5                	mov    %esp,%ebp
c1004234:	83 ec 10             	sub    $0x10,%esp
c1004237:	8b 45 08             	mov    0x8(%ebp),%eax
c100423a:	c1 e8 0a             	shr    $0xa,%eax
c100423d:	25 00 f0 3f 00       	and    $0x3ff000,%eax
c1004242:	89 c2                	mov    %eax,%edx
c1004244:	8b 45 08             	mov    0x8(%ebp),%eax
c1004247:	c1 e8 0c             	shr    $0xc,%eax
c100424a:	25 ff 03 00 00       	and    $0x3ff,%eax
c100424f:	c1 e0 02             	shl    $0x2,%eax
c1004252:	01 d0                	add    %edx,%eax
c1004254:	2d 00 00 40 00       	sub    $0x400000,%eax
c1004259:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100425c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100425f:	c9                   	leave  
c1004260:	c3                   	ret    

c1004261 <release_prog_resource>:
c1004261:	55                   	push   %ebp
c1004262:	89 e5                	mov    %esp,%ebp
c1004264:	83 ec 18             	sub    $0x18,%esp
c1004267:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c100426b:	eb 2f                	jmp    c100429c <release_prog_resource+0x3b>
c100426d:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004272:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
c1004276:	83 c2 1c             	add    $0x1c,%edx
c1004279:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c100427d:	83 f8 ff             	cmp    $0xffffffff,%eax
c1004280:	74 10                	je     c1004292 <release_prog_resource+0x31>
c1004282:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004286:	83 ec 0c             	sub    $0xc,%esp
c1004289:	50                   	push   %eax
c100428a:	e8 7e 2b 00 00       	call   c1006e0d <sys_close>
c100428f:	83 c4 10             	add    $0x10,%esp
c1004292:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004296:	83 c0 01             	add    $0x1,%eax
c1004299:	88 45 f7             	mov    %al,-0x9(%ebp)
c100429c:	80 7d f7 1f          	cmpb   $0x1f,-0x9(%ebp)
c10042a0:	76 cb                	jbe    c100426d <release_prog_resource+0xc>
c10042a2:	90                   	nop
c10042a3:	90                   	nop
c10042a4:	c9                   	leave  
c10042a5:	c3                   	ret    

c10042a6 <find_child>:
c10042a6:	55                   	push   %ebp
c10042a7:	89 e5                	mov    %esp,%ebp
c10042a9:	83 ec 10             	sub    $0x10,%esp
c10042ac:	8b 45 08             	mov    0x8(%ebp),%eax
c10042af:	83 e8 64             	sub    $0x64,%eax
c10042b2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10042b5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10042b8:	8b 40 10             	mov    0x10(%eax),%eax
c10042bb:	39 45 0c             	cmp    %eax,0xc(%ebp)
c10042be:	75 07                	jne    c10042c7 <find_child+0x21>
c10042c0:	b8 01 00 00 00       	mov    $0x1,%eax
c10042c5:	eb 05                	jmp    c10042cc <find_child+0x26>
c10042c7:	b8 00 00 00 00       	mov    $0x0,%eax
c10042cc:	c9                   	leave  
c10042cd:	c3                   	ret    

c10042ce <find_hanging_child>:
c10042ce:	55                   	push   %ebp
c10042cf:	89 e5                	mov    %esp,%ebp
c10042d1:	83 ec 10             	sub    $0x10,%esp
c10042d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10042d7:	83 e8 64             	sub    $0x64,%eax
c10042da:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10042dd:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10042e0:	8b 40 10             	mov    0x10(%eax),%eax
c10042e3:	39 45 0c             	cmp    %eax,0xc(%ebp)
c10042e6:	75 11                	jne    c10042f9 <find_hanging_child+0x2b>
c10042e8:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10042eb:	8b 00                	mov    (%eax),%eax
c10042ed:	83 f8 02             	cmp    $0x2,%eax
c10042f0:	75 07                	jne    c10042f9 <find_hanging_child+0x2b>
c10042f2:	b8 01 00 00 00       	mov    $0x1,%eax
c10042f7:	eb 05                	jmp    c10042fe <find_hanging_child+0x30>
c10042f9:	b8 00 00 00 00       	mov    $0x0,%eax
c10042fe:	c9                   	leave  
c10042ff:	c3                   	ret    

c1004300 <task0_adopt_a_child>:
c1004300:	55                   	push   %ebp
c1004301:	89 e5                	mov    %esp,%ebp
c1004303:	83 ec 10             	sub    $0x10,%esp
c1004306:	8b 45 08             	mov    0x8(%ebp),%eax
c1004309:	83 e8 64             	sub    $0x64,%eax
c100430c:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100430f:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004312:	8b 40 10             	mov    0x10(%eax),%eax
c1004315:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1004318:	75 0a                	jne    c1004324 <task0_adopt_a_child+0x24>
c100431a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100431d:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004324:	b8 00 00 00 00       	mov    $0x0,%eax
c1004329:	c9                   	leave  
c100432a:	c3                   	ret    

c100432b <sys_wait>:
c100432b:	55                   	push   %ebp
c100432c:	89 e5                	mov    %esp,%ebp
c100432e:	83 ec 18             	sub    $0x18,%esp
c1004331:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004336:	8b 40 0c             	mov    0xc(%eax),%eax
c1004339:	83 ec 04             	sub    $0x4,%esp
c100433c:	50                   	push   %eax
c100433d:	68 ce 42 00 c1       	push   $0xc10042ce
c1004342:	68 8c 1c 01 c1       	push   $0xc1011c8c
c1004347:	e8 fd fc ff ff       	call   c1004049 <list_traversal>
c100434c:	83 c4 10             	add    $0x10,%esp
c100434f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004352:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1004356:	74 37                	je     c100438f <sys_wait+0x64>
c1004358:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100435b:	83 e8 64             	sub    $0x64,%eax
c100435e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004361:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004364:	0f b6 80 fc 00 00 00 	movzbl 0xfc(%eax),%eax
c100436b:	0f be d0             	movsbl %al,%edx
c100436e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004371:	89 10                	mov    %edx,(%eax)
c1004373:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004376:	8b 40 0c             	mov    0xc(%eax),%eax
c1004379:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100437c:	83 ec 0c             	sub    $0xc,%esp
c100437f:	ff 75 f0             	pushl  -0x10(%ebp)
c1004382:	e8 2e fd ff ff       	call   c10040b5 <task_exit>
c1004387:	83 c4 10             	add    $0x10,%esp
c100438a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100438d:	eb 40                	jmp    c10043cf <sys_wait+0xa4>
c100438f:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004394:	8b 40 0c             	mov    0xc(%eax),%eax
c1004397:	83 ec 04             	sub    $0x4,%esp
c100439a:	50                   	push   %eax
c100439b:	68 a6 42 00 c1       	push   $0xc10042a6
c10043a0:	68 8c 1c 01 c1       	push   $0xc1011c8c
c10043a5:	e8 9f fc ff ff       	call   c1004049 <list_traversal>
c10043aa:	83 c4 10             	add    $0x10,%esp
c10043ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10043b0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10043b4:	75 07                	jne    c10043bd <sys_wait+0x92>
c10043b6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10043bb:	eb 12                	jmp    c10043cf <sys_wait+0xa4>
c10043bd:	83 ec 0c             	sub    $0xc,%esp
c10043c0:	6a 01                	push   $0x1
c10043c2:	e8 de f8 ff ff       	call   c1003ca5 <thread_block>
c10043c7:	83 c4 10             	add    $0x10,%esp
c10043ca:	e9 62 ff ff ff       	jmp    c1004331 <sys_wait+0x6>
c10043cf:	c9                   	leave  
c10043d0:	c3                   	ret    

c10043d1 <sys_exit>:
c10043d1:	55                   	push   %ebp
c10043d2:	89 e5                	mov    %esp,%ebp
c10043d4:	83 ec 18             	sub    $0x18,%esp
c10043d7:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10043dc:	8b 55 08             	mov    0x8(%ebp),%edx
c10043df:	88 90 fc 00 00 00    	mov    %dl,0xfc(%eax)
c10043e5:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10043ea:	8b 40 10             	mov    0x10(%eax),%eax
c10043ed:	83 f8 ff             	cmp    $0xffffffff,%eax
c10043f0:	75 19                	jne    c100440b <sys_exit+0x3a>
c10043f2:	68 dc ae 00 c1       	push   $0xc100aedc
c10043f7:	68 64 af 00 c1       	push   $0xc100af64
c10043fc:	68 16 03 00 00       	push   $0x316
c1004401:	68 d4 ad 00 c1       	push   $0xc100add4
c1004406:	e8 60 bf ff ff       	call   c100036b <__PANIC>
c100440b:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004410:	8b 40 0c             	mov    0xc(%eax),%eax
c1004413:	83 ec 04             	sub    $0x4,%esp
c1004416:	50                   	push   %eax
c1004417:	68 00 43 00 c1       	push   $0xc1004300
c100441c:	68 8c 1c 01 c1       	push   $0xc1011c8c
c1004421:	e8 23 fc ff ff       	call   c1004049 <list_traversal>
c1004426:	83 c4 10             	add    $0x10,%esp
c1004429:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100442e:	8b 40 10             	mov    0x10(%eax),%eax
c1004431:	83 ec 0c             	sub    $0xc,%esp
c1004434:	50                   	push   %eax
c1004435:	e8 9c f2 ff ff       	call   c10036d6 <find_task>
c100443a:	83 c4 10             	add    $0x10,%esp
c100443d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004440:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004443:	8b 00                	mov    (%eax),%eax
c1004445:	83 f8 01             	cmp    $0x1,%eax
c1004448:	75 0e                	jne    c1004458 <sys_exit+0x87>
c100444a:	83 ec 0c             	sub    $0xc,%esp
c100444d:	ff 75 f4             	pushl  -0xc(%ebp)
c1004450:	e8 7e f8 ff ff       	call   c1003cd3 <thread_unblock>
c1004455:	83 c4 10             	add    $0x10,%esp
c1004458:	83 ec 0c             	sub    $0xc,%esp
c100445b:	6a 02                	push   $0x2
c100445d:	e8 43 f8 ff ff       	call   c1003ca5 <thread_block>
c1004462:	83 c4 10             	add    $0x10,%esp
c1004465:	90                   	nop
c1004466:	c9                   	leave  
c1004467:	c3                   	ret    

c1004468 <user_task_init>:
c1004468:	55                   	push   %ebp
c1004469:	89 e5                	mov    %esp,%ebp
c100446b:	53                   	push   %ebx
c100446c:	83 ec 14             	sub    $0x14,%esp
c100446f:	83 ec 0c             	sub    $0xc,%esp
c1004472:	6a 00                	push   $0x0
c1004474:	e8 c8 f2 ff ff       	call   c1003741 <alloc_task>
c1004479:	83 c4 10             	add    $0x10,%esp
c100447c:	a3 0c 40 a1 c1       	mov    %eax,0xc1a1400c
c1004481:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004486:	85 c0                	test   %eax,%eax
c1004488:	75 10                	jne    c100449a <user_task_init+0x32>
c100448a:	83 ec 0c             	sub    $0xc,%esp
c100448d:	68 a0 ad 00 c1       	push   $0xc100ada0
c1004492:	e8 cc 10 00 00       	call   c1005563 <printk>
c1004497:	83 c4 10             	add    $0x10,%esp
c100449a:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100449f:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c10044a5:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10044aa:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c10044b1:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10044b6:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c10044bd:	8b 1d 0c 40 a1 c1    	mov    0xc1a1400c,%ebx
c10044c3:	e8 96 ef ff ff       	call   c100345e <alloc_pid>
c10044c8:	89 43 0c             	mov    %eax,0xc(%ebx)
c10044cb:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10044d0:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c10044d7:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10044dc:	83 ec 08             	sub    $0x8,%esp
c10044df:	68 06 af 00 c1       	push   $0xc100af06
c10044e4:	50                   	push   %eax
c10044e5:	e8 ee ef ff ff       	call   c10034d8 <set_task_name>
c10044ea:	83 c4 10             	add    $0x10,%esp
c10044ed:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10044f2:	89 c2                	mov    %eax,%edx
c10044f4:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10044f9:	81 c2 00 20 00 00    	add    $0x2000,%edx
c10044ff:	89 50 28             	mov    %edx,0x28(%eax)
c1004502:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004507:	83 ec 0c             	sub    $0xc,%esp
c100450a:	50                   	push   %eax
c100450b:	e8 13 f9 ff ff       	call   c1003e23 <set_user_cr3>
c1004510:	83 c4 10             	add    $0x10,%esp
c1004513:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004518:	8d 90 b4 1f 00 00    	lea    0x1fb4(%eax),%edx
c100451e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004523:	89 50 38             	mov    %edx,0x38(%eax)
c1004526:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100452b:	8b 40 38             	mov    0x38(%eax),%eax
c100452e:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1004535:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100453a:	8b 40 38             	mov    0x38(%eax),%eax
c100453d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1004544:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004549:	8b 40 38             	mov    0x38(%eax),%eax
c100454c:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004553:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004558:	8b 40 38             	mov    0x38(%eax),%eax
c100455b:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c1004562:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004567:	8b 40 38             	mov    0x38(%eax),%eax
c100456a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1004570:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004575:	8b 40 38             	mov    0x38(%eax),%eax
c1004578:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c100457f:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004584:	8b 40 38             	mov    0x38(%eax),%eax
c1004587:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100458e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004593:	8b 40 38             	mov    0x38(%eax),%eax
c1004596:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c100459d:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10045a2:	8b 40 38             	mov    0x38(%eax),%eax
c10045a5:	66 c7 40 3c 1b 00    	movw   $0x1b,0x3c(%eax)
c10045ab:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10045b0:	8b 40 38             	mov    0x38(%eax),%eax
c10045b3:	66 c7 40 48 23 00    	movw   $0x23,0x48(%eax)
c10045b9:	8b 15 0c 40 a1 c1    	mov    0xc1a1400c,%edx
c10045bf:	8b 52 38             	mov    0x38(%edx),%edx
c10045c2:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c10045c6:	66 89 42 24          	mov    %ax,0x24(%edx)
c10045ca:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10045cf:	8b 40 38             	mov    0x38(%eax),%eax
c10045d2:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c10045d6:	66 89 50 28          	mov    %dx,0x28(%eax)
c10045da:	8b 15 0c 40 a1 c1    	mov    0xc1a1400c,%edx
c10045e0:	8b 52 38             	mov    0x38(%edx),%edx
c10045e3:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c10045e7:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c10045eb:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10045f0:	8b 40 38             	mov    0x38(%eax),%eax
c10045f3:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c10045f9:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10045fe:	8b 40 38             	mov    0x38(%eax),%eax
c1004601:	8b 55 08             	mov    0x8(%ebp),%edx
c1004604:	89 50 38             	mov    %edx,0x38(%eax)
c1004607:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100460c:	8b 40 38             	mov    0x38(%eax),%eax
c100460f:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1004616:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100461b:	89 c2                	mov    %eax,%edx
c100461d:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004622:	8b 40 38             	mov    0x38(%eax),%eax
c1004625:	81 c2 00 10 00 00    	add    $0x1000,%edx
c100462b:	89 50 44             	mov    %edx,0x44(%eax)
c100462e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004633:	8b 15 e6 0d 00 c1    	mov    0xc1000de6,%edx
c1004639:	89 50 3c             	mov    %edx,0x3c(%eax)
c100463c:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004641:	89 c2                	mov    %eax,%edx
c1004643:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004648:	81 c2 00 10 00 00    	add    $0x1000,%edx
c100464e:	89 50 40             	mov    %edx,0x40(%eax)
c1004651:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004656:	8b 50 38             	mov    0x38(%eax),%edx
c1004659:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100465e:	8b 52 10             	mov    0x10(%edx),%edx
c1004661:	89 50 44             	mov    %edx,0x44(%eax)
c1004664:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004669:	8b 50 38             	mov    0x38(%eax),%edx
c100466c:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004671:	8b 52 14             	mov    0x14(%edx),%edx
c1004674:	89 50 4c             	mov    %edx,0x4c(%eax)
c1004677:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100467e:	eb 17                	jmp    c1004697 <user_task_init+0x22f>
c1004680:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004685:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004688:	83 c2 1c             	add    $0x1c,%edx
c100468b:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c1004692:	ff 
c1004693:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004697:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c100469b:	7e e3                	jle    c1004680 <user_task_init+0x218>
c100469d:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046a2:	83 c0 5c             	add    $0x5c,%eax
c10046a5:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10046a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10046ab:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10046ae:	89 50 04             	mov    %edx,0x4(%eax)
c10046b1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10046b4:	8b 50 04             	mov    0x4(%eax),%edx
c10046b7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10046ba:	89 10                	mov    %edx,(%eax)
c10046bc:	90                   	nop
c10046bd:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046c2:	83 c0 64             	add    $0x64,%eax
c10046c5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10046c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10046cb:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10046ce:	89 50 04             	mov    %edx,0x4(%eax)
c10046d1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10046d4:	8b 50 04             	mov    0x4(%eax),%edx
c10046d7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10046da:	89 10                	mov    %edx,(%eax)
c10046dc:	90                   	nop
c10046dd:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046e2:	83 c0 64             	add    $0x64,%eax
c10046e5:	83 ec 0c             	sub    $0xc,%esp
c10046e8:	50                   	push   %eax
c10046e9:	e8 a4 ee ff ff       	call   c1003592 <add_all_link>
c10046ee:	83 c4 10             	add    $0x10,%esp
c10046f1:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046f6:	83 ec 0c             	sub    $0xc,%esp
c10046f9:	50                   	push   %eax
c10046fa:	e8 16 ef ff ff       	call   c1003615 <add_pid_hash>
c10046ff:	83 c4 10             	add    $0x10,%esp
c1004702:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004707:	83 ec 0c             	sub    $0xc,%esp
c100470a:	50                   	push   %eax
c100470b:	e8 0c f4 ff ff       	call   c1003b1c <wakeup_task>
c1004710:	83 c4 10             	add    $0x10,%esp
c1004713:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c1004718:	83 c0 01             	add    $0x1,%eax
c100471b:	a3 94 1c 01 c1       	mov    %eax,0xc1011c94
c1004720:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004725:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c100472a:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100472f:	8b 40 28             	mov    0x28(%eax),%eax
c1004732:	83 ec 0c             	sub    $0xc,%esp
c1004735:	50                   	push   %eax
c1004736:	e8 76 c2 ff ff       	call   c10009b1 <set_ts_esp0>
c100473b:	83 c4 10             	add    $0x10,%esp
c100473e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004743:	8b 40 2c             	mov    0x2c(%eax),%eax
c1004746:	83 ec 0c             	sub    $0xc,%esp
c1004749:	50                   	push   %eax
c100474a:	e8 07 bb ff ff       	call   c1000256 <lcr3>
c100474f:	83 c4 10             	add    $0x10,%esp
c1004752:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004757:	8b 40 38             	mov    0x38(%eax),%eax
c100475a:	89 c4                	mov    %eax,%esp
c100475c:	e9 85 c6 ff ff       	jmp    c1000de6 <__trapret>
c1004761:	90                   	nop
c1004762:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1004765:	c9                   	leave  
c1004766:	c3                   	ret    

c1004767 <sys_print_task>:
c1004767:	55                   	push   %ebp
c1004768:	89 e5                	mov    %esp,%ebp
c100476a:	83 ec 18             	sub    $0x18,%esp
c100476d:	c7 45 f0 8c 1c 01 c1 	movl   $0xc1011c8c,-0x10(%ebp)
c1004774:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004777:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100477a:	83 ec 0c             	sub    $0xc,%esp
c100477d:	68 10 af 00 c1       	push   $0xc100af10
c1004782:	e8 dc 0d 00 00       	call   c1005563 <printk>
c1004787:	83 c4 10             	add    $0x10,%esp
c100478a:	eb 6e                	jmp    c10047fa <sys_print_task+0x93>
c100478c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100478f:	83 e8 64             	sub    $0x64,%eax
c1004792:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004795:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004798:	8d 50 14             	lea    0x14(%eax),%edx
c100479b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100479e:	8b 40 0c             	mov    0xc(%eax),%eax
c10047a1:	83 ec 04             	sub    $0x4,%esp
c10047a4:	52                   	push   %edx
c10047a5:	50                   	push   %eax
c10047a6:	68 22 af 00 c1       	push   $0xc100af22
c10047ab:	e8 b3 0d 00 00       	call   c1005563 <printk>
c10047b0:	83 c4 10             	add    $0x10,%esp
c10047b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10047b6:	8b 00                	mov    (%eax),%eax
c10047b8:	83 f8 ff             	cmp    $0xffffffff,%eax
c10047bb:	75 12                	jne    c10047cf <sys_print_task+0x68>
c10047bd:	83 ec 0c             	sub    $0xc,%esp
c10047c0:	68 2a af 00 c1       	push   $0xc100af2a
c10047c5:	e8 99 0d 00 00       	call   c1005563 <printk>
c10047ca:	83 c4 10             	add    $0x10,%esp
c10047cd:	eb 2b                	jmp    c10047fa <sys_print_task+0x93>
c10047cf:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10047d2:	8b 00                	mov    (%eax),%eax
c10047d4:	85 c0                	test   %eax,%eax
c10047d6:	75 12                	jne    c10047ea <sys_print_task+0x83>
c10047d8:	83 ec 0c             	sub    $0xc,%esp
c10047db:	68 36 af 00 c1       	push   $0xc100af36
c10047e0:	e8 7e 0d 00 00       	call   c1005563 <printk>
c10047e5:	83 c4 10             	add    $0x10,%esp
c10047e8:	eb 10                	jmp    c10047fa <sys_print_task+0x93>
c10047ea:	83 ec 0c             	sub    $0xc,%esp
c10047ed:	68 40 af 00 c1       	push   $0xc100af40
c10047f2:	e8 6c 0d 00 00       	call   c1005563 <printk>
c10047f7:	83 c4 10             	add    $0x10,%esp
c10047fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10047fd:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004800:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004803:	8b 40 04             	mov    0x4(%eax),%eax
c1004806:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004809:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100480c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c100480f:	0f 85 77 ff ff ff    	jne    c100478c <sys_print_task+0x25>
c1004815:	90                   	nop
c1004816:	90                   	nop
c1004817:	c9                   	leave  
c1004818:	c3                   	ret    

c1004819 <kernel_thread_entry>:
c1004819:	fb                   	sti    
c100481a:	52                   	push   %edx
c100481b:	ff d3                	call   *%ebx
c100481d:	c3                   	ret    

c100481e <switch_to>:
c100481e:	8b 44 24 04          	mov    0x4(%esp),%eax
c1004822:	8f 00                	popl   (%eax)
c1004824:	89 60 04             	mov    %esp,0x4(%eax)
c1004827:	89 58 08             	mov    %ebx,0x8(%eax)
c100482a:	89 48 0c             	mov    %ecx,0xc(%eax)
c100482d:	89 50 10             	mov    %edx,0x10(%eax)
c1004830:	89 70 14             	mov    %esi,0x14(%eax)
c1004833:	89 78 18             	mov    %edi,0x18(%eax)
c1004836:	89 68 1c             	mov    %ebp,0x1c(%eax)
c1004839:	8b 44 24 04          	mov    0x4(%esp),%eax
c100483d:	8b 68 1c             	mov    0x1c(%eax),%ebp
c1004840:	8b 78 18             	mov    0x18(%eax),%edi
c1004843:	8b 70 14             	mov    0x14(%eax),%esi
c1004846:	8b 50 10             	mov    0x10(%eax),%edx
c1004849:	8b 48 0c             	mov    0xc(%eax),%ecx
c100484c:	8b 58 08             	mov    0x8(%eax),%ebx
c100484f:	8b 60 04             	mov    0x4(%eax),%esp
c1004852:	ff 30                	pushl  (%eax)
c1004854:	c3                   	ret    

c1004855 <hash32>:
c1004855:	55                   	push   %ebp
c1004856:	89 e5                	mov    %esp,%ebp
c1004858:	83 ec 10             	sub    $0x10,%esp
c100485b:	8b 45 08             	mov    0x8(%ebp),%eax
c100485e:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1004864:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004867:	b8 20 00 00 00       	mov    $0x20,%eax
c100486c:	2b 45 0c             	sub    0xc(%ebp),%eax
c100486f:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1004872:	89 c1                	mov    %eax,%ecx
c1004874:	d3 ea                	shr    %cl,%edx
c1004876:	89 d0                	mov    %edx,%eax
c1004878:	c9                   	leave  
c1004879:	c3                   	ret    

c100487a <segment_load>:
c100487a:	55                   	push   %ebp
c100487b:	89 e5                	mov    %esp,%ebp
c100487d:	83 ec 18             	sub    $0x18,%esp
c1004880:	8b 45 14             	mov    0x14(%ebp),%eax
c1004883:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1004888:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100488b:	8b 45 14             	mov    0x14(%ebp),%eax
c100488e:	25 ff 0f 00 00       	and    $0xfff,%eax
c1004893:	ba 00 10 00 00       	mov    $0x1000,%edx
c1004898:	29 c2                	sub    %eax,%edx
c100489a:	89 d0                	mov    %edx,%eax
c100489c:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100489f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10048a6:	8b 45 10             	mov    0x10(%ebp),%eax
c10048a9:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c10048ac:	76 1c                	jbe    c10048ca <segment_load+0x50>
c10048ae:	8b 45 10             	mov    0x10(%ebp),%eax
c10048b1:	2b 45 ec             	sub    -0x14(%ebp),%eax
c10048b4:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10048b7:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10048ba:	05 00 10 00 00       	add    $0x1000,%eax
c10048bf:	c1 e8 0c             	shr    $0xc,%eax
c10048c2:	83 c0 01             	add    $0x1,%eax
c10048c5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10048c8:	eb 07                	jmp    c10048d1 <segment_load+0x57>
c10048ca:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c10048d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10048d4:	c1 e0 0c             	shl    $0xc,%eax
c10048d7:	89 c2                	mov    %eax,%edx
c10048d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10048dc:	01 d0                	add    %edx,%eax
c10048de:	83 ec 04             	sub    $0x4,%esp
c10048e1:	68 00 00 00 60       	push   $0x60000000
c10048e6:	50                   	push   %eax
c10048e7:	ff 75 f0             	pushl  -0x10(%ebp)
c10048ea:	e8 40 e7 ff ff       	call   c100302f <sys_mmap>
c10048ef:	83 c4 10             	add    $0x10,%esp
c10048f2:	8b 45 0c             	mov    0xc(%ebp),%eax
c10048f5:	83 ec 04             	sub    $0x4,%esp
c10048f8:	6a 01                	push   $0x1
c10048fa:	50                   	push   %eax
c10048fb:	ff 75 08             	pushl  0x8(%ebp)
c10048fe:	e8 62 27 00 00       	call   c1007065 <sys_lseek>
c1004903:	83 c4 10             	add    $0x10,%esp
c1004906:	8b 45 14             	mov    0x14(%ebp),%eax
c1004909:	83 ec 04             	sub    $0x4,%esp
c100490c:	ff 75 10             	pushl  0x10(%ebp)
c100490f:	50                   	push   %eax
c1004910:	ff 75 08             	pushl  0x8(%ebp)
c1004913:	e8 55 26 00 00       	call   c1006f6d <sys_read>
c1004918:	83 c4 10             	add    $0x10,%esp
c100491b:	b8 01 00 00 00       	mov    $0x1,%eax
c1004920:	c9                   	leave  
c1004921:	c3                   	ret    

c1004922 <load>:
c1004922:	55                   	push   %ebp
c1004923:	89 e5                	mov    %esp,%ebp
c1004925:	83 ec 78             	sub    $0x78,%esp
c1004928:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c100492f:	83 ec 04             	sub    $0x4,%esp
c1004932:	6a 34                	push   $0x34
c1004934:	6a 00                	push   $0x0
c1004936:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004939:	50                   	push   %eax
c100493a:	e8 6b b7 ff ff       	call   c10000aa <memset>
c100493f:	83 c4 10             	add    $0x10,%esp
c1004942:	83 ec 08             	sub    $0x8,%esp
c1004945:	6a 00                	push   $0x0
c1004947:	ff 75 08             	pushl  0x8(%ebp)
c100494a:	e8 20 22 00 00       	call   c1006b6f <sys_open>
c100494f:	83 c4 10             	add    $0x10,%esp
c1004952:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004955:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1004959:	75 0a                	jne    c1004965 <load+0x43>
c100495b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1004960:	e9 48 01 00 00       	jmp    c1004aad <load+0x18b>
c1004965:	83 ec 04             	sub    $0x4,%esp
c1004968:	6a 34                	push   $0x34
c100496a:	8d 45 b0             	lea    -0x50(%ebp),%eax
c100496d:	50                   	push   %eax
c100496e:	ff 75 e8             	pushl  -0x18(%ebp)
c1004971:	e8 f7 25 00 00       	call   c1006f6d <sys_read>
c1004976:	83 c4 10             	add    $0x10,%esp
c1004979:	83 f8 34             	cmp    $0x34,%eax
c100497c:	74 0c                	je     c100498a <load+0x68>
c100497e:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004985:	e9 12 01 00 00       	jmp    c1004a9c <load+0x17a>
c100498a:	83 ec 04             	sub    $0x4,%esp
c100498d:	6a 07                	push   $0x7
c100498f:	68 6d af 00 c1       	push   $0xc100af6d
c1004994:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004997:	50                   	push   %eax
c1004998:	e8 c5 b8 ff ff       	call   c1000262 <memcmp>
c100499d:	83 c4 10             	add    $0x10,%esp
c10049a0:	85 c0                	test   %eax,%eax
c10049a2:	75 30                	jne    c10049d4 <load+0xb2>
c10049a4:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
c10049a8:	66 83 f8 02          	cmp    $0x2,%ax
c10049ac:	75 26                	jne    c10049d4 <load+0xb2>
c10049ae:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
c10049b2:	66 83 f8 03          	cmp    $0x3,%ax
c10049b6:	75 1c                	jne    c10049d4 <load+0xb2>
c10049b8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c10049bb:	83 f8 01             	cmp    $0x1,%eax
c10049be:	75 14                	jne    c10049d4 <load+0xb2>
c10049c0:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
c10049c4:	66 3d 00 04          	cmp    $0x400,%ax
c10049c8:	77 0a                	ja     c10049d4 <load+0xb2>
c10049ca:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c10049ce:	66 83 f8 20          	cmp    $0x20,%ax
c10049d2:	74 0c                	je     c10049e0 <load+0xbe>
c10049d4:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10049db:	e9 bc 00 00 00       	jmp    c1004a9c <load+0x17a>
c10049e0:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10049e3:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10049e6:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c10049ea:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c10049ee:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10049f5:	e9 8c 00 00 00       	jmp    c1004a86 <load+0x164>
c10049fa:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
c10049fe:	83 ec 04             	sub    $0x4,%esp
c1004a01:	50                   	push   %eax
c1004a02:	6a 00                	push   $0x0
c1004a04:	8d 45 90             	lea    -0x70(%ebp),%eax
c1004a07:	50                   	push   %eax
c1004a08:	e8 9d b6 ff ff       	call   c10000aa <memset>
c1004a0d:	83 c4 10             	add    $0x10,%esp
c1004a10:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004a13:	83 ec 04             	sub    $0x4,%esp
c1004a16:	6a 01                	push   $0x1
c1004a18:	50                   	push   %eax
c1004a19:	ff 75 e8             	pushl  -0x18(%ebp)
c1004a1c:	e8 44 26 00 00       	call   c1007065 <sys_lseek>
c1004a21:	83 c4 10             	add    $0x10,%esp
c1004a24:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
c1004a28:	83 ec 04             	sub    $0x4,%esp
c1004a2b:	50                   	push   %eax
c1004a2c:	8d 45 90             	lea    -0x70(%ebp),%eax
c1004a2f:	50                   	push   %eax
c1004a30:	ff 75 e8             	pushl  -0x18(%ebp)
c1004a33:	e8 35 25 00 00       	call   c1006f6d <sys_read>
c1004a38:	83 c4 10             	add    $0x10,%esp
c1004a3b:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c1004a3f:	39 d0                	cmp    %edx,%eax
c1004a41:	74 09                	je     c1004a4c <load+0x12a>
c1004a43:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004a4a:	eb 50                	jmp    c1004a9c <load+0x17a>
c1004a4c:	8b 45 90             	mov    -0x70(%ebp),%eax
c1004a4f:	83 f8 01             	cmp    $0x1,%eax
c1004a52:	75 24                	jne    c1004a78 <load+0x156>
c1004a54:	8b 4d 98             	mov    -0x68(%ebp),%ecx
c1004a57:	8b 55 a0             	mov    -0x60(%ebp),%edx
c1004a5a:	8b 45 94             	mov    -0x6c(%ebp),%eax
c1004a5d:	51                   	push   %ecx
c1004a5e:	52                   	push   %edx
c1004a5f:	50                   	push   %eax
c1004a60:	ff 75 e8             	pushl  -0x18(%ebp)
c1004a63:	e8 12 fe ff ff       	call   c100487a <segment_load>
c1004a68:	83 c4 10             	add    $0x10,%esp
c1004a6b:	84 c0                	test   %al,%al
c1004a6d:	75 09                	jne    c1004a78 <load+0x156>
c1004a6f:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004a76:	eb 24                	jmp    c1004a9c <load+0x17a>
c1004a78:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004a7c:	0f b7 c0             	movzwl %ax,%eax
c1004a7f:	01 45 f0             	add    %eax,-0x10(%ebp)
c1004a82:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1004a86:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
c1004a8a:	0f b7 c0             	movzwl %ax,%eax
c1004a8d:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c1004a90:	0f 82 64 ff ff ff    	jb     c10049fa <load+0xd8>
c1004a96:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004a99:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004a9c:	83 ec 0c             	sub    $0xc,%esp
c1004a9f:	ff 75 e8             	pushl  -0x18(%ebp)
c1004aa2:	e8 66 23 00 00       	call   c1006e0d <sys_close>
c1004aa7:	83 c4 10             	add    $0x10,%esp
c1004aaa:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004aad:	c9                   	leave  
c1004aae:	c3                   	ret    

c1004aaf <sys_execv>:
c1004aaf:	55                   	push   %ebp
c1004ab0:	89 e5                	mov    %esp,%ebp
c1004ab2:	83 ec 18             	sub    $0x18,%esp
c1004ab5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004abc:	eb 04                	jmp    c1004ac2 <sys_execv+0x13>
c1004abe:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004ac2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004ac5:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004acc:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004acf:	01 d0                	add    %edx,%eax
c1004ad1:	8b 00                	mov    (%eax),%eax
c1004ad3:	85 c0                	test   %eax,%eax
c1004ad5:	75 e7                	jne    c1004abe <sys_execv+0xf>
c1004ad7:	83 ec 0c             	sub    $0xc,%esp
c1004ada:	ff 75 08             	pushl  0x8(%ebp)
c1004add:	e8 40 fe ff ff       	call   c1004922 <load>
c1004ae2:	83 c4 10             	add    $0x10,%esp
c1004ae5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004ae8:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1004aec:	75 07                	jne    c1004af5 <sys_execv+0x46>
c1004aee:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1004af3:	eb 6a                	jmp    c1004b5f <sys_execv+0xb0>
c1004af5:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004afa:	83 c0 14             	add    $0x14,%eax
c1004afd:	83 ec 04             	sub    $0x4,%esp
c1004b00:	6a 14                	push   $0x14
c1004b02:	ff 75 08             	pushl  0x8(%ebp)
c1004b05:	50                   	push   %eax
c1004b06:	e8 fd b5 ff ff       	call   c1000108 <memcpy>
c1004b0b:	83 c4 10             	add    $0x10,%esp
c1004b0e:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004b13:	c6 40 27 00          	movb   $0x0,0x27(%eax)
c1004b17:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004b1c:	05 b4 1f 00 00       	add    $0x1fb4,%eax
c1004b21:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004b24:	8b 55 0c             	mov    0xc(%ebp),%edx
c1004b27:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004b2a:	89 50 10             	mov    %edx,0x10(%eax)
c1004b2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004b30:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004b33:	89 50 18             	mov    %edx,0x18(%eax)
c1004b36:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004b39:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004b3c:	89 50 38             	mov    %edx,0x38(%eax)
c1004b3f:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004b44:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c1004b4a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004b4d:	89 50 44             	mov    %edx,0x44(%eax)
c1004b50:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004b53:	89 c4                	mov    %eax,%esp
c1004b55:	e9 8c c2 ff ff       	jmp    c1000de6 <__trapret>
c1004b5a:	b8 00 00 00 00       	mov    $0x0,%eax
c1004b5f:	c9                   	leave  
c1004b60:	c3                   	ret    

c1004b61 <pic_setmask>:
c1004b61:	55                   	push   %ebp
c1004b62:	89 e5                	mov    %esp,%ebp
c1004b64:	83 ec 28             	sub    $0x28,%esp
c1004b67:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b6a:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
c1004b6e:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004b72:	66 a3 24 eb 00 c1    	mov    %ax,0xc100eb24
c1004b78:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004b7c:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004b7f:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004b83:	66 c1 e8 08          	shr    $0x8,%ax
c1004b87:	88 45 f6             	mov    %al,-0xa(%ebp)
c1004b8a:	0f b6 05 ad 1c 01 c1 	movzbl 0xc1011cad,%eax
c1004b91:	84 c0                	test   %al,%al
c1004b93:	74 27                	je     c1004bbc <pic_setmask+0x5b>
c1004b95:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004b99:	83 ec 08             	sub    $0x8,%esp
c1004b9c:	50                   	push   %eax
c1004b9d:	6a 21                	push   $0x21
c1004b9f:	e8 98 b4 ff ff       	call   c100003c <outb>
c1004ba4:	83 c4 10             	add    $0x10,%esp
c1004ba7:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1004bab:	83 ec 08             	sub    $0x8,%esp
c1004bae:	50                   	push   %eax
c1004baf:	68 a1 00 00 00       	push   $0xa1
c1004bb4:	e8 83 b4 ff ff       	call   c100003c <outb>
c1004bb9:	83 c4 10             	add    $0x10,%esp
c1004bbc:	90                   	nop
c1004bbd:	c9                   	leave  
c1004bbe:	c3                   	ret    

c1004bbf <pic_enable>:
c1004bbf:	55                   	push   %ebp
c1004bc0:	89 e5                	mov    %esp,%ebp
c1004bc2:	83 ec 08             	sub    $0x8,%esp
c1004bc5:	8b 45 08             	mov    0x8(%ebp),%eax
c1004bc8:	ba 01 00 00 00       	mov    $0x1,%edx
c1004bcd:	89 c1                	mov    %eax,%ecx
c1004bcf:	d3 e2                	shl    %cl,%edx
c1004bd1:	89 d0                	mov    %edx,%eax
c1004bd3:	f7 d0                	not    %eax
c1004bd5:	89 c2                	mov    %eax,%edx
c1004bd7:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004bde:	21 d0                	and    %edx,%eax
c1004be0:	0f b7 c0             	movzwl %ax,%eax
c1004be3:	83 ec 0c             	sub    $0xc,%esp
c1004be6:	50                   	push   %eax
c1004be7:	e8 75 ff ff ff       	call   c1004b61 <pic_setmask>
c1004bec:	83 c4 10             	add    $0x10,%esp
c1004bef:	90                   	nop
c1004bf0:	c9                   	leave  
c1004bf1:	c3                   	ret    

c1004bf2 <pic_init>:
c1004bf2:	55                   	push   %ebp
c1004bf3:	89 e5                	mov    %esp,%ebp
c1004bf5:	83 ec 08             	sub    $0x8,%esp
c1004bf8:	c6 05 ad 1c 01 c1 01 	movb   $0x1,0xc1011cad
c1004bff:	83 ec 08             	sub    $0x8,%esp
c1004c02:	68 ff 00 00 00       	push   $0xff
c1004c07:	6a 21                	push   $0x21
c1004c09:	e8 2e b4 ff ff       	call   c100003c <outb>
c1004c0e:	83 c4 10             	add    $0x10,%esp
c1004c11:	83 ec 08             	sub    $0x8,%esp
c1004c14:	68 ff 00 00 00       	push   $0xff
c1004c19:	68 a1 00 00 00       	push   $0xa1
c1004c1e:	e8 19 b4 ff ff       	call   c100003c <outb>
c1004c23:	83 c4 10             	add    $0x10,%esp
c1004c26:	83 ec 08             	sub    $0x8,%esp
c1004c29:	6a 11                	push   $0x11
c1004c2b:	6a 20                	push   $0x20
c1004c2d:	e8 0a b4 ff ff       	call   c100003c <outb>
c1004c32:	83 c4 10             	add    $0x10,%esp
c1004c35:	83 ec 08             	sub    $0x8,%esp
c1004c38:	6a 11                	push   $0x11
c1004c3a:	68 a0 00 00 00       	push   $0xa0
c1004c3f:	e8 f8 b3 ff ff       	call   c100003c <outb>
c1004c44:	83 c4 10             	add    $0x10,%esp
c1004c47:	83 ec 08             	sub    $0x8,%esp
c1004c4a:	6a 20                	push   $0x20
c1004c4c:	6a 21                	push   $0x21
c1004c4e:	e8 e9 b3 ff ff       	call   c100003c <outb>
c1004c53:	83 c4 10             	add    $0x10,%esp
c1004c56:	83 ec 08             	sub    $0x8,%esp
c1004c59:	6a 28                	push   $0x28
c1004c5b:	68 a1 00 00 00       	push   $0xa1
c1004c60:	e8 d7 b3 ff ff       	call   c100003c <outb>
c1004c65:	83 c4 10             	add    $0x10,%esp
c1004c68:	83 ec 08             	sub    $0x8,%esp
c1004c6b:	6a 04                	push   $0x4
c1004c6d:	6a 21                	push   $0x21
c1004c6f:	e8 c8 b3 ff ff       	call   c100003c <outb>
c1004c74:	83 c4 10             	add    $0x10,%esp
c1004c77:	83 ec 08             	sub    $0x8,%esp
c1004c7a:	6a 02                	push   $0x2
c1004c7c:	68 a1 00 00 00       	push   $0xa1
c1004c81:	e8 b6 b3 ff ff       	call   c100003c <outb>
c1004c86:	83 c4 10             	add    $0x10,%esp
c1004c89:	83 ec 08             	sub    $0x8,%esp
c1004c8c:	6a 03                	push   $0x3
c1004c8e:	6a 21                	push   $0x21
c1004c90:	e8 a7 b3 ff ff       	call   c100003c <outb>
c1004c95:	83 c4 10             	add    $0x10,%esp
c1004c98:	83 ec 08             	sub    $0x8,%esp
c1004c9b:	6a 03                	push   $0x3
c1004c9d:	68 a1 00 00 00       	push   $0xa1
c1004ca2:	e8 95 b3 ff ff       	call   c100003c <outb>
c1004ca7:	83 c4 10             	add    $0x10,%esp
c1004caa:	83 ec 08             	sub    $0x8,%esp
c1004cad:	6a 68                	push   $0x68
c1004caf:	6a 20                	push   $0x20
c1004cb1:	e8 86 b3 ff ff       	call   c100003c <outb>
c1004cb6:	83 c4 10             	add    $0x10,%esp
c1004cb9:	83 ec 08             	sub    $0x8,%esp
c1004cbc:	6a 68                	push   $0x68
c1004cbe:	68 a0 00 00 00       	push   $0xa0
c1004cc3:	e8 74 b3 ff ff       	call   c100003c <outb>
c1004cc8:	83 c4 10             	add    $0x10,%esp
c1004ccb:	83 ec 08             	sub    $0x8,%esp
c1004cce:	6a 0a                	push   $0xa
c1004cd0:	6a 20                	push   $0x20
c1004cd2:	e8 65 b3 ff ff       	call   c100003c <outb>
c1004cd7:	83 c4 10             	add    $0x10,%esp
c1004cda:	83 ec 08             	sub    $0x8,%esp
c1004cdd:	6a 0a                	push   $0xa
c1004cdf:	68 a0 00 00 00       	push   $0xa0
c1004ce4:	e8 53 b3 ff ff       	call   c100003c <outb>
c1004ce9:	83 c4 10             	add    $0x10,%esp
c1004cec:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004cf3:	66 83 f8 ff          	cmp    $0xffff,%ax
c1004cf7:	74 16                	je     c1004d0f <pic_init+0x11d>
c1004cf9:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004d00:	0f b7 c0             	movzwl %ax,%eax
c1004d03:	83 ec 0c             	sub    $0xc,%esp
c1004d06:	50                   	push   %eax
c1004d07:	e8 55 fe ff ff       	call   c1004b61 <pic_setmask>
c1004d0c:	83 c4 10             	add    $0x10,%esp
c1004d0f:	90                   	nop
c1004d10:	c9                   	leave  
c1004d11:	c3                   	ret    

c1004d12 <delay>:
c1004d12:	55                   	push   %ebp
c1004d13:	89 e5                	mov    %esp,%ebp
c1004d15:	83 ec 08             	sub    $0x8,%esp
c1004d18:	83 ec 0c             	sub    $0xc,%esp
c1004d1b:	68 84 00 00 00       	push   $0x84
c1004d20:	e8 db b2 ff ff       	call   c1000000 <inb>
c1004d25:	83 c4 10             	add    $0x10,%esp
c1004d28:	83 ec 0c             	sub    $0xc,%esp
c1004d2b:	68 84 00 00 00       	push   $0x84
c1004d30:	e8 cb b2 ff ff       	call   c1000000 <inb>
c1004d35:	83 c4 10             	add    $0x10,%esp
c1004d38:	83 ec 0c             	sub    $0xc,%esp
c1004d3b:	68 84 00 00 00       	push   $0x84
c1004d40:	e8 bb b2 ff ff       	call   c1000000 <inb>
c1004d45:	83 c4 10             	add    $0x10,%esp
c1004d48:	83 ec 0c             	sub    $0xc,%esp
c1004d4b:	68 84 00 00 00       	push   $0x84
c1004d50:	e8 ab b2 ff ff       	call   c1000000 <inb>
c1004d55:	83 c4 10             	add    $0x10,%esp
c1004d58:	90                   	nop
c1004d59:	c9                   	leave  
c1004d5a:	c3                   	ret    

c1004d5b <serial_init>:
c1004d5b:	55                   	push   %ebp
c1004d5c:	89 e5                	mov    %esp,%ebp
c1004d5e:	83 ec 08             	sub    $0x8,%esp
c1004d61:	83 ec 08             	sub    $0x8,%esp
c1004d64:	6a 00                	push   $0x0
c1004d66:	68 fa 03 00 00       	push   $0x3fa
c1004d6b:	e8 cc b2 ff ff       	call   c100003c <outb>
c1004d70:	83 c4 10             	add    $0x10,%esp
c1004d73:	83 ec 08             	sub    $0x8,%esp
c1004d76:	68 80 00 00 00       	push   $0x80
c1004d7b:	68 fb 03 00 00       	push   $0x3fb
c1004d80:	e8 b7 b2 ff ff       	call   c100003c <outb>
c1004d85:	83 c4 10             	add    $0x10,%esp
c1004d88:	83 ec 08             	sub    $0x8,%esp
c1004d8b:	6a 0c                	push   $0xc
c1004d8d:	68 f8 03 00 00       	push   $0x3f8
c1004d92:	e8 a5 b2 ff ff       	call   c100003c <outb>
c1004d97:	83 c4 10             	add    $0x10,%esp
c1004d9a:	83 ec 08             	sub    $0x8,%esp
c1004d9d:	6a 00                	push   $0x0
c1004d9f:	68 f9 03 00 00       	push   $0x3f9
c1004da4:	e8 93 b2 ff ff       	call   c100003c <outb>
c1004da9:	83 c4 10             	add    $0x10,%esp
c1004dac:	83 ec 08             	sub    $0x8,%esp
c1004daf:	6a 03                	push   $0x3
c1004db1:	68 fb 03 00 00       	push   $0x3fb
c1004db6:	e8 81 b2 ff ff       	call   c100003c <outb>
c1004dbb:	83 c4 10             	add    $0x10,%esp
c1004dbe:	83 ec 08             	sub    $0x8,%esp
c1004dc1:	6a 00                	push   $0x0
c1004dc3:	68 fc 03 00 00       	push   $0x3fc
c1004dc8:	e8 6f b2 ff ff       	call   c100003c <outb>
c1004dcd:	83 c4 10             	add    $0x10,%esp
c1004dd0:	83 ec 08             	sub    $0x8,%esp
c1004dd3:	6a 01                	push   $0x1
c1004dd5:	68 f9 03 00 00       	push   $0x3f9
c1004dda:	e8 5d b2 ff ff       	call   c100003c <outb>
c1004ddf:	83 c4 10             	add    $0x10,%esp
c1004de2:	83 ec 0c             	sub    $0xc,%esp
c1004de5:	68 fd 03 00 00       	push   $0x3fd
c1004dea:	e8 11 b2 ff ff       	call   c1000000 <inb>
c1004def:	83 c4 10             	add    $0x10,%esp
c1004df2:	3c ff                	cmp    $0xff,%al
c1004df4:	0f 95 c0             	setne  %al
c1004df7:	a2 ae 1c 01 c1       	mov    %al,0xc1011cae
c1004dfc:	83 ec 0c             	sub    $0xc,%esp
c1004dff:	68 fa 03 00 00       	push   $0x3fa
c1004e04:	e8 f7 b1 ff ff       	call   c1000000 <inb>
c1004e09:	83 c4 10             	add    $0x10,%esp
c1004e0c:	83 ec 0c             	sub    $0xc,%esp
c1004e0f:	68 f8 03 00 00       	push   $0x3f8
c1004e14:	e8 e7 b1 ff ff       	call   c1000000 <inb>
c1004e19:	83 c4 10             	add    $0x10,%esp
c1004e1c:	0f b6 05 ae 1c 01 c1 	movzbl 0xc1011cae,%eax
c1004e23:	84 c0                	test   %al,%al
c1004e25:	74 1d                	je     c1004e44 <serial_init+0xe9>
c1004e27:	83 ec 0c             	sub    $0xc,%esp
c1004e2a:	68 75 af 00 c1       	push   $0xc100af75
c1004e2f:	e8 2f 07 00 00       	call   c1005563 <printk>
c1004e34:	83 c4 10             	add    $0x10,%esp
c1004e37:	83 ec 0c             	sub    $0xc,%esp
c1004e3a:	6a 04                	push   $0x4
c1004e3c:	e8 7e fd ff ff       	call   c1004bbf <pic_enable>
c1004e41:	83 c4 10             	add    $0x10,%esp
c1004e44:	90                   	nop
c1004e45:	c9                   	leave  
c1004e46:	c3                   	ret    

c1004e47 <lpt_putc_sub>:
c1004e47:	55                   	push   %ebp
c1004e48:	89 e5                	mov    %esp,%ebp
c1004e4a:	83 ec 18             	sub    $0x18,%esp
c1004e4d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004e54:	eb 09                	jmp    c1004e5f <lpt_putc_sub+0x18>
c1004e56:	e8 b7 fe ff ff       	call   c1004d12 <delay>
c1004e5b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004e5f:	83 ec 0c             	sub    $0xc,%esp
c1004e62:	68 79 03 00 00       	push   $0x379
c1004e67:	e8 94 b1 ff ff       	call   c1000000 <inb>
c1004e6c:	83 c4 10             	add    $0x10,%esp
c1004e6f:	84 c0                	test   %al,%al
c1004e71:	78 09                	js     c1004e7c <lpt_putc_sub+0x35>
c1004e73:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c1004e7a:	7e da                	jle    c1004e56 <lpt_putc_sub+0xf>
c1004e7c:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e7f:	0f b6 c0             	movzbl %al,%eax
c1004e82:	83 ec 08             	sub    $0x8,%esp
c1004e85:	50                   	push   %eax
c1004e86:	68 78 03 00 00       	push   $0x378
c1004e8b:	e8 ac b1 ff ff       	call   c100003c <outb>
c1004e90:	83 c4 10             	add    $0x10,%esp
c1004e93:	83 ec 08             	sub    $0x8,%esp
c1004e96:	6a 0d                	push   $0xd
c1004e98:	68 7a 03 00 00       	push   $0x37a
c1004e9d:	e8 9a b1 ff ff       	call   c100003c <outb>
c1004ea2:	83 c4 10             	add    $0x10,%esp
c1004ea5:	83 ec 08             	sub    $0x8,%esp
c1004ea8:	6a 08                	push   $0x8
c1004eaa:	68 7a 03 00 00       	push   $0x37a
c1004eaf:	e8 88 b1 ff ff       	call   c100003c <outb>
c1004eb4:	83 c4 10             	add    $0x10,%esp
c1004eb7:	90                   	nop
c1004eb8:	c9                   	leave  
c1004eb9:	c3                   	ret    

c1004eba <lpt_putc>:
c1004eba:	55                   	push   %ebp
c1004ebb:	89 e5                	mov    %esp,%ebp
c1004ebd:	83 ec 08             	sub    $0x8,%esp
c1004ec0:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1004ec4:	74 10                	je     c1004ed6 <lpt_putc+0x1c>
c1004ec6:	83 ec 0c             	sub    $0xc,%esp
c1004ec9:	ff 75 08             	pushl  0x8(%ebp)
c1004ecc:	e8 76 ff ff ff       	call   c1004e47 <lpt_putc_sub>
c1004ed1:	83 c4 10             	add    $0x10,%esp
c1004ed4:	eb 27                	jmp    c1004efd <lpt_putc+0x43>
c1004ed6:	83 ec 0c             	sub    $0xc,%esp
c1004ed9:	6a 08                	push   $0x8
c1004edb:	e8 67 ff ff ff       	call   c1004e47 <lpt_putc_sub>
c1004ee0:	83 c4 10             	add    $0x10,%esp
c1004ee3:	83 ec 0c             	sub    $0xc,%esp
c1004ee6:	6a 20                	push   $0x20
c1004ee8:	e8 5a ff ff ff       	call   c1004e47 <lpt_putc_sub>
c1004eed:	83 c4 10             	add    $0x10,%esp
c1004ef0:	83 ec 0c             	sub    $0xc,%esp
c1004ef3:	6a 08                	push   $0x8
c1004ef5:	e8 4d ff ff ff       	call   c1004e47 <lpt_putc_sub>
c1004efa:	83 c4 10             	add    $0x10,%esp
c1004efd:	90                   	nop
c1004efe:	c9                   	leave  
c1004eff:	c3                   	ret    

c1004f00 <cons_intr>:
c1004f00:	55                   	push   %ebp
c1004f01:	89 e5                	mov    %esp,%ebp
c1004f03:	83 ec 18             	sub    $0x18,%esp
c1004f06:	eb 3b                	jmp    c1004f43 <cons_intr+0x43>
c1004f08:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1004f0c:	74 35                	je     c1004f43 <cons_intr+0x43>
c1004f0e:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c1004f13:	8d 50 01             	lea    0x1(%eax),%edx
c1004f16:	89 15 24 42 a1 c1    	mov    %edx,0xc1a14224
c1004f1c:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004f1f:	88 90 20 40 a1 c1    	mov    %dl,-0x3e5ebfe0(%eax)
c1004f25:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004f28:	a2 6c fc 00 c1       	mov    %al,0xc100fc6c
c1004f2d:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c1004f32:	3d 00 02 00 00       	cmp    $0x200,%eax
c1004f37:	75 0a                	jne    c1004f43 <cons_intr+0x43>
c1004f39:	c7 05 24 42 a1 c1 00 	movl   $0x0,0xc1a14224
c1004f40:	00 00 00 
c1004f43:	8b 45 08             	mov    0x8(%ebp),%eax
c1004f46:	ff d0                	call   *%eax
c1004f48:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004f4b:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c1004f4f:	75 b7                	jne    c1004f08 <cons_intr+0x8>
c1004f51:	90                   	nop
c1004f52:	90                   	nop
c1004f53:	c9                   	leave  
c1004f54:	c3                   	ret    

c1004f55 <serial_proc_data>:
c1004f55:	55                   	push   %ebp
c1004f56:	89 e5                	mov    %esp,%ebp
c1004f58:	83 ec 18             	sub    $0x18,%esp
c1004f5b:	83 ec 0c             	sub    $0xc,%esp
c1004f5e:	68 fd 03 00 00       	push   $0x3fd
c1004f63:	e8 98 b0 ff ff       	call   c1000000 <inb>
c1004f68:	83 c4 10             	add    $0x10,%esp
c1004f6b:	0f b6 c0             	movzbl %al,%eax
c1004f6e:	83 e0 01             	and    $0x1,%eax
c1004f71:	85 c0                	test   %eax,%eax
c1004f73:	75 07                	jne    c1004f7c <serial_proc_data+0x27>
c1004f75:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1004f7a:	eb 26                	jmp    c1004fa2 <serial_proc_data+0x4d>
c1004f7c:	83 ec 0c             	sub    $0xc,%esp
c1004f7f:	68 f8 03 00 00       	push   $0x3f8
c1004f84:	e8 77 b0 ff ff       	call   c1000000 <inb>
c1004f89:	83 c4 10             	add    $0x10,%esp
c1004f8c:	0f b6 c0             	movzbl %al,%eax
c1004f8f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004f92:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
c1004f96:	75 07                	jne    c1004f9f <serial_proc_data+0x4a>
c1004f98:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
c1004f9f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004fa2:	c9                   	leave  
c1004fa3:	c3                   	ret    

c1004fa4 <serial_intr>:
c1004fa4:	55                   	push   %ebp
c1004fa5:	89 e5                	mov    %esp,%ebp
c1004fa7:	83 ec 08             	sub    $0x8,%esp
c1004faa:	0f b6 05 ae 1c 01 c1 	movzbl 0xc1011cae,%eax
c1004fb1:	84 c0                	test   %al,%al
c1004fb3:	74 10                	je     c1004fc5 <serial_intr+0x21>
c1004fb5:	83 ec 0c             	sub    $0xc,%esp
c1004fb8:	68 55 4f 00 c1       	push   $0xc1004f55
c1004fbd:	e8 3e ff ff ff       	call   c1004f00 <cons_intr>
c1004fc2:	83 c4 10             	add    $0x10,%esp
c1004fc5:	90                   	nop
c1004fc6:	c9                   	leave  
c1004fc7:	c3                   	ret    

c1004fc8 <serial_putc_sub>:
c1004fc8:	55                   	push   %ebp
c1004fc9:	89 e5                	mov    %esp,%ebp
c1004fcb:	83 ec 18             	sub    $0x18,%esp
c1004fce:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004fd5:	eb 09                	jmp    c1004fe0 <serial_putc_sub+0x18>
c1004fd7:	e8 36 fd ff ff       	call   c1004d12 <delay>
c1004fdc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004fe0:	83 ec 0c             	sub    $0xc,%esp
c1004fe3:	68 fd 03 00 00       	push   $0x3fd
c1004fe8:	e8 13 b0 ff ff       	call   c1000000 <inb>
c1004fed:	83 c4 10             	add    $0x10,%esp
c1004ff0:	0f b6 c0             	movzbl %al,%eax
c1004ff3:	83 e0 20             	and    $0x20,%eax
c1004ff6:	85 c0                	test   %eax,%eax
c1004ff8:	75 09                	jne    c1005003 <serial_putc_sub+0x3b>
c1004ffa:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c1005001:	7e d4                	jle    c1004fd7 <serial_putc_sub+0xf>
c1005003:	8b 45 08             	mov    0x8(%ebp),%eax
c1005006:	0f b6 c0             	movzbl %al,%eax
c1005009:	83 ec 08             	sub    $0x8,%esp
c100500c:	50                   	push   %eax
c100500d:	68 f8 03 00 00       	push   $0x3f8
c1005012:	e8 25 b0 ff ff       	call   c100003c <outb>
c1005017:	83 c4 10             	add    $0x10,%esp
c100501a:	90                   	nop
c100501b:	c9                   	leave  
c100501c:	c3                   	ret    

c100501d <serial_putc>:
c100501d:	55                   	push   %ebp
c100501e:	89 e5                	mov    %esp,%ebp
c1005020:	83 ec 08             	sub    $0x8,%esp
c1005023:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1005027:	74 10                	je     c1005039 <serial_putc+0x1c>
c1005029:	83 ec 0c             	sub    $0xc,%esp
c100502c:	ff 75 08             	pushl  0x8(%ebp)
c100502f:	e8 94 ff ff ff       	call   c1004fc8 <serial_putc_sub>
c1005034:	83 c4 10             	add    $0x10,%esp
c1005037:	eb 27                	jmp    c1005060 <serial_putc+0x43>
c1005039:	83 ec 0c             	sub    $0xc,%esp
c100503c:	6a 08                	push   $0x8
c100503e:	e8 85 ff ff ff       	call   c1004fc8 <serial_putc_sub>
c1005043:	83 c4 10             	add    $0x10,%esp
c1005046:	83 ec 0c             	sub    $0xc,%esp
c1005049:	6a 20                	push   $0x20
c100504b:	e8 78 ff ff ff       	call   c1004fc8 <serial_putc_sub>
c1005050:	83 c4 10             	add    $0x10,%esp
c1005053:	83 ec 0c             	sub    $0xc,%esp
c1005056:	6a 08                	push   $0x8
c1005058:	e8 6b ff ff ff       	call   c1004fc8 <serial_putc_sub>
c100505d:	83 c4 10             	add    $0x10,%esp
c1005060:	90                   	nop
c1005061:	c9                   	leave  
c1005062:	c3                   	ret    

c1005063 <timer_init>:
c1005063:	55                   	push   %ebp
c1005064:	89 e5                	mov    %esp,%ebp
c1005066:	83 ec 18             	sub    $0x18,%esp
c1005069:	b8 dc 34 12 00       	mov    $0x1234dc,%eax
c100506e:	ba 00 00 00 00       	mov    $0x0,%edx
c1005073:	f7 75 08             	divl   0x8(%ebp)
c1005076:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005079:	83 ec 08             	sub    $0x8,%esp
c100507c:	6a 36                	push   $0x36
c100507e:	6a 43                	push   $0x43
c1005080:	e8 b7 af ff ff       	call   c100003c <outb>
c1005085:	83 c4 10             	add    $0x10,%esp
c1005088:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100508b:	88 45 f3             	mov    %al,-0xd(%ebp)
c100508e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005091:	c1 e8 08             	shr    $0x8,%eax
c1005094:	88 45 f2             	mov    %al,-0xe(%ebp)
c1005097:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c100509b:	83 ec 08             	sub    $0x8,%esp
c100509e:	50                   	push   %eax
c100509f:	6a 40                	push   $0x40
c10050a1:	e8 96 af ff ff       	call   c100003c <outb>
c10050a6:	83 c4 10             	add    $0x10,%esp
c10050a9:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
c10050ad:	83 ec 08             	sub    $0x8,%esp
c10050b0:	50                   	push   %eax
c10050b1:	6a 40                	push   $0x40
c10050b3:	e8 84 af ff ff       	call   c100003c <outb>
c10050b8:	83 c4 10             	add    $0x10,%esp
c10050bb:	c7 05 2c 42 a1 c1 00 	movl   $0x0,0xc1a1422c
c10050c2:	00 00 00 
c10050c5:	c7 05 28 42 a1 c1 00 	movl   $0x0,0xc1a14228
c10050cc:	00 00 00 
c10050cf:	83 ec 0c             	sub    $0xc,%esp
c10050d2:	6a 00                	push   $0x0
c10050d4:	e8 e6 fa ff ff       	call   c1004bbf <pic_enable>
c10050d9:	83 c4 10             	add    $0x10,%esp
c10050dc:	90                   	nop
c10050dd:	c9                   	leave  
c10050de:	c3                   	ret    

c10050df <print_cursor>:
c10050df:	55                   	push   %ebp
c10050e0:	89 e5                	mov    %esp,%ebp
c10050e2:	83 ec 28             	sub    $0x28,%esp
c10050e5:	8b 55 08             	mov    0x8(%ebp),%edx
c10050e8:	8b 45 0c             	mov    0xc(%ebp),%eax
c10050eb:	88 55 e4             	mov    %dl,-0x1c(%ebp)
c10050ee:	88 45 e0             	mov    %al,-0x20(%ebp)
c10050f1:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
c10050f5:	89 d0                	mov    %edx,%eax
c10050f7:	c1 e0 02             	shl    $0x2,%eax
c10050fa:	01 d0                	add    %edx,%eax
c10050fc:	c1 e0 04             	shl    $0x4,%eax
c10050ff:	89 c2                	mov    %eax,%edx
c1005101:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1005105:	01 d0                	add    %edx,%eax
c1005107:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c100510b:	83 ec 08             	sub    $0x8,%esp
c100510e:	6a 0e                	push   $0xe
c1005110:	68 d4 03 00 00       	push   $0x3d4
c1005115:	e8 22 af ff ff       	call   c100003c <outb>
c100511a:	83 c4 10             	add    $0x10,%esp
c100511d:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1005121:	66 c1 e8 08          	shr    $0x8,%ax
c1005125:	0f b6 c0             	movzbl %al,%eax
c1005128:	83 ec 08             	sub    $0x8,%esp
c100512b:	50                   	push   %eax
c100512c:	68 d5 03 00 00       	push   $0x3d5
c1005131:	e8 06 af ff ff       	call   c100003c <outb>
c1005136:	83 c4 10             	add    $0x10,%esp
c1005139:	83 ec 08             	sub    $0x8,%esp
c100513c:	6a 0f                	push   $0xf
c100513e:	68 d4 03 00 00       	push   $0x3d4
c1005143:	e8 f4 ae ff ff       	call   c100003c <outb>
c1005148:	83 c4 10             	add    $0x10,%esp
c100514b:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c100514f:	0f b6 c0             	movzbl %al,%eax
c1005152:	83 ec 08             	sub    $0x8,%esp
c1005155:	50                   	push   %eax
c1005156:	68 d5 03 00 00       	push   $0x3d5
c100515b:	e8 dc ae ff ff       	call   c100003c <outb>
c1005160:	83 c4 10             	add    $0x10,%esp
c1005163:	90                   	nop
c1005164:	c9                   	leave  
c1005165:	c3                   	ret    

c1005166 <clear>:
c1005166:	55                   	push   %ebp
c1005167:	89 e5                	mov    %esp,%ebp
c1005169:	83 ec 18             	sub    $0x18,%esp
c100516c:	66 c7 45 f4 00 0f    	movw   $0xf00,-0xc(%ebp)
c1005172:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1005176:	83 c8 20             	or     $0x20,%eax
c1005179:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c100517d:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1005183:	eb 1f                	jmp    c10051a4 <clear+0x3e>
c1005185:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c100518a:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
c100518e:	01 d2                	add    %edx,%edx
c1005190:	01 c2                	add    %eax,%edx
c1005192:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c1005196:	66 89 02             	mov    %ax,(%edx)
c1005199:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c100519d:	83 c0 01             	add    $0x1,%eax
c10051a0:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10051a4:	66 81 7d f6 cf 07    	cmpw   $0x7cf,-0xa(%ebp)
c10051aa:	76 d9                	jbe    c1005185 <clear+0x1f>
c10051ac:	c6 05 af 1c 01 c1 00 	movb   $0x0,0xc1011caf
c10051b3:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c10051ba:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10051c1:	0f b6 d0             	movzbl %al,%edx
c10051c4:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c10051cb:	0f b6 c0             	movzbl %al,%eax
c10051ce:	83 ec 08             	sub    $0x8,%esp
c10051d1:	52                   	push   %edx
c10051d2:	50                   	push   %eax
c10051d3:	e8 07 ff ff ff       	call   c10050df <print_cursor>
c10051d8:	83 c4 10             	add    $0x10,%esp
c10051db:	90                   	nop
c10051dc:	c9                   	leave  
c10051dd:	c3                   	ret    

c10051de <print_char>:
c10051de:	55                   	push   %ebp
c10051df:	89 e5                	mov    %esp,%ebp
c10051e1:	83 ec 28             	sub    $0x28,%esp
c10051e4:	8b 45 08             	mov    0x8(%ebp),%eax
c10051e7:	88 45 e4             	mov    %al,-0x1c(%ebp)
c10051ea:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c10051f0:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c10051f6:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c10051fd:	3c 18                	cmp    $0x18,%al
c10051ff:	76 05                	jbe    c1005206 <print_char+0x28>
c1005201:	e8 60 ff ff ff       	call   c1005166 <clear>
c1005206:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c100520d:	0f b6 d0             	movzbl %al,%edx
c1005210:	89 d0                	mov    %edx,%eax
c1005212:	c1 e0 02             	shl    $0x2,%eax
c1005215:	01 d0                	add    %edx,%eax
c1005217:	c1 e0 04             	shl    $0x4,%eax
c100521a:	89 c2                	mov    %eax,%edx
c100521c:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005223:	0f b6 c0             	movzbl %al,%eax
c1005226:	01 d0                	add    %edx,%eax
c1005228:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c100522c:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
c1005230:	83 f8 09             	cmp    $0x9,%eax
c1005233:	74 20                	je     c1005255 <print_char+0x77>
c1005235:	83 f8 0a             	cmp    $0xa,%eax
c1005238:	75 2f                	jne    c1005269 <print_char+0x8b>
c100523a:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c1005241:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005248:	83 c0 01             	add    $0x1,%eax
c100524b:	a2 af 1c 01 c1       	mov    %al,0xc1011caf
c1005250:	e9 82 00 00 00       	jmp    c10052d7 <print_char+0xf9>
c1005255:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100525c:	83 c0 08             	add    $0x8,%eax
c100525f:	83 e0 f8             	and    $0xfffffff8,%eax
c1005262:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c1005267:	eb 6e                	jmp    c10052d7 <print_char+0xf9>
c1005269:	66 0f be 45 e4       	movsbw -0x1c(%ebp),%ax
c100526e:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
c1005272:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005275:	c1 e0 04             	shl    $0x4,%eax
c1005278:	0f b6 c0             	movzbl %al,%eax
c100527b:	8b 55 10             	mov    0x10(%ebp),%edx
c100527e:	83 e2 0f             	and    $0xf,%edx
c1005281:	09 d0                	or     %edx,%eax
c1005283:	c1 e0 08             	shl    $0x8,%eax
c1005286:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c100528a:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c100528e:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c1005292:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c1005297:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c100529b:	01 d2                	add    %edx,%edx
c100529d:	01 c2                	add    %eax,%edx
c100529f:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10052a3:	66 89 02             	mov    %ax,(%edx)
c10052a6:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10052ad:	83 c0 01             	add    $0x1,%eax
c10052b0:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c10052b5:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10052bc:	3c 4f                	cmp    $0x4f,%al
c10052be:	76 16                	jbe    c10052d6 <print_char+0xf8>
c10052c0:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c10052c7:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c10052ce:	83 c0 01             	add    $0x1,%eax
c10052d1:	a2 af 1c 01 c1       	mov    %al,0xc1011caf
c10052d6:	90                   	nop
c10052d7:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10052de:	0f b6 d0             	movzbl %al,%edx
c10052e1:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c10052e8:	0f b6 c0             	movzbl %al,%eax
c10052eb:	83 ec 08             	sub    $0x8,%esp
c10052ee:	52                   	push   %edx
c10052ef:	50                   	push   %eax
c10052f0:	e8 ea fd ff ff       	call   c10050df <print_cursor>
c10052f5:	83 c4 10             	add    $0x10,%esp
c10052f8:	90                   	nop
c10052f9:	c9                   	leave  
c10052fa:	c3                   	ret    

c10052fb <print_string>:
c10052fb:	55                   	push   %ebp
c10052fc:	89 e5                	mov    %esp,%ebp
c10052fe:	83 ec 08             	sub    $0x8,%esp
c1005301:	eb 21                	jmp    c1005324 <print_string+0x29>
c1005303:	8b 45 08             	mov    0x8(%ebp),%eax
c1005306:	8d 50 01             	lea    0x1(%eax),%edx
c1005309:	89 55 08             	mov    %edx,0x8(%ebp)
c100530c:	0f b6 00             	movzbl (%eax),%eax
c100530f:	0f be c0             	movsbl %al,%eax
c1005312:	83 ec 04             	sub    $0x4,%esp
c1005315:	ff 75 10             	pushl  0x10(%ebp)
c1005318:	ff 75 0c             	pushl  0xc(%ebp)
c100531b:	50                   	push   %eax
c100531c:	e8 bd fe ff ff       	call   c10051de <print_char>
c1005321:	83 c4 10             	add    $0x10,%esp
c1005324:	8b 45 08             	mov    0x8(%ebp),%eax
c1005327:	0f b6 00             	movzbl (%eax),%eax
c100532a:	84 c0                	test   %al,%al
c100532c:	75 d5                	jne    c1005303 <print_string+0x8>
c100532e:	90                   	nop
c100532f:	90                   	nop
c1005330:	c9                   	leave  
c1005331:	c3                   	ret    

c1005332 <print_num>:
c1005332:	55                   	push   %ebp
c1005333:	89 e5                	mov    %esp,%ebp
c1005335:	83 ec 48             	sub    $0x48,%esp
c1005338:	8b 4d 18             	mov    0x18(%ebp),%ecx
c100533b:	8b 55 1c             	mov    0x1c(%ebp),%edx
c100533e:	8b 45 08             	mov    0x8(%ebp),%eax
c1005341:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1005344:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005347:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100534a:	89 c8                	mov    %ecx,%eax
c100534c:	88 45 bc             	mov    %al,-0x44(%ebp)
c100534f:	89 d0                	mov    %edx,%eax
c1005351:	88 45 b8             	mov    %al,-0x48(%ebp)
c1005354:	0f be 45 b8          	movsbl -0x48(%ebp),%eax
c1005358:	c6 44 05 c8 00       	movb   $0x0,-0x38(%ebp,%eax,1)
c100535d:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
c1005361:	83 e8 01             	sub    $0x1,%eax
c1005364:	88 45 f7             	mov    %al,-0x9(%ebp)
c1005367:	e9 c0 00 00 00       	jmp    c100542c <print_num+0xfa>
c100536c:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
c1005370:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1005373:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1005376:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c1005379:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100537c:	89 55 ec             	mov    %edx,-0x14(%ebp)
c100537f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1005382:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005385:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1005389:	74 1c                	je     c10053a7 <print_num+0x75>
c100538b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100538e:	ba 00 00 00 00       	mov    $0x0,%edx
c1005393:	f7 75 e4             	divl   -0x1c(%ebp)
c1005396:	89 55 f0             	mov    %edx,-0x10(%ebp)
c1005399:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100539c:	ba 00 00 00 00       	mov    $0x0,%edx
c10053a1:	f7 75 e4             	divl   -0x1c(%ebp)
c10053a4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10053a7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10053aa:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10053ad:	f7 75 e4             	divl   -0x1c(%ebp)
c10053b0:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10053b3:	89 55 dc             	mov    %edx,-0x24(%ebp)
c10053b6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10053b9:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10053bc:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10053bf:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c10053c2:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10053c5:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10053c9:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c10053cd:	80 7d bc 0a          	cmpb   $0xa,-0x44(%ebp)
c10053d1:	75 16                	jne    c10053e9 <print_num+0xb7>
c10053d3:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10053d7:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c10053dc:	8d 50 30             	lea    0x30(%eax),%edx
c10053df:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10053e3:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c10053e7:	eb 39                	jmp    c1005422 <print_num+0xf0>
c10053e9:	80 7d bc 10          	cmpb   $0x10,-0x44(%ebp)
c10053ed:	75 33                	jne    c1005422 <print_num+0xf0>
c10053ef:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10053f3:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c10053f8:	3c 09                	cmp    $0x9,%al
c10053fa:	7e 10                	jle    c100540c <print_num+0xda>
c10053fc:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005400:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005405:	83 c0 37             	add    $0x37,%eax
c1005408:	89 c2                	mov    %eax,%edx
c100540a:	eb 0e                	jmp    c100541a <print_num+0xe8>
c100540c:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005410:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005415:	83 c0 30             	add    $0x30,%eax
c1005418:	89 c2                	mov    %eax,%edx
c100541a:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100541e:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1005422:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1005426:	83 e8 01             	sub    $0x1,%eax
c1005429:	88 45 f7             	mov    %al,-0x9(%ebp)
c100542c:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
c1005430:	0f 89 36 ff ff ff    	jns    c100536c <print_num+0x3a>
c1005436:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
c100543a:	75 5e                	jne    c100549a <print_num+0x168>
c100543c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1005443:	90                   	nop
c1005444:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005447:	8d 50 01             	lea    0x1(%eax),%edx
c100544a:	89 55 e8             	mov    %edx,-0x18(%ebp)
c100544d:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005452:	3c 30                	cmp    $0x30,%al
c1005454:	74 ee                	je     c1005444 <print_num+0x112>
c1005456:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c100545a:	8d 55 c8             	lea    -0x38(%ebp),%edx
c100545d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005460:	01 d0                	add    %edx,%eax
c1005462:	0f b6 00             	movzbl (%eax),%eax
c1005465:	84 c0                	test   %al,%al
c1005467:	74 1c                	je     c1005485 <print_num+0x153>
c1005469:	8d 55 c8             	lea    -0x38(%ebp),%edx
c100546c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100546f:	01 d0                	add    %edx,%eax
c1005471:	83 ec 04             	sub    $0x4,%esp
c1005474:	ff 75 14             	pushl  0x14(%ebp)
c1005477:	ff 75 10             	pushl  0x10(%ebp)
c100547a:	50                   	push   %eax
c100547b:	e8 7b fe ff ff       	call   c10052fb <print_string>
c1005480:	83 c4 10             	add    $0x10,%esp
c1005483:	eb 2a                	jmp    c10054af <print_num+0x17d>
c1005485:	83 ec 04             	sub    $0x4,%esp
c1005488:	ff 75 14             	pushl  0x14(%ebp)
c100548b:	ff 75 10             	pushl  0x10(%ebp)
c100548e:	6a 30                	push   $0x30
c1005490:	e8 49 fd ff ff       	call   c10051de <print_char>
c1005495:	83 c4 10             	add    $0x10,%esp
c1005498:	eb 15                	jmp    c10054af <print_num+0x17d>
c100549a:	83 ec 04             	sub    $0x4,%esp
c100549d:	ff 75 14             	pushl  0x14(%ebp)
c10054a0:	ff 75 10             	pushl  0x10(%ebp)
c10054a3:	8d 45 c8             	lea    -0x38(%ebp),%eax
c10054a6:	50                   	push   %eax
c10054a7:	e8 4f fe ff ff       	call   c10052fb <print_string>
c10054ac:	83 c4 10             	add    $0x10,%esp
c10054af:	c9                   	leave  
c10054b0:	c3                   	ret    

c10054b1 <backtrace>:
c10054b1:	55                   	push   %ebp
c10054b2:	89 e5                	mov    %esp,%ebp
c10054b4:	83 ec 18             	sub    $0x18,%esp
c10054b7:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10054be:	3c 15                	cmp    $0x15,%al
c10054c0:	0f 86 9a 00 00 00    	jbe    c1005560 <backtrace+0xaf>
c10054c6:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10054cd:	83 e8 01             	sub    $0x1,%eax
c10054d0:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c10054d5:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c10054db:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c10054e1:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c10054e8:	3c 18                	cmp    $0x18,%al
c10054ea:	76 05                	jbe    c10054f1 <backtrace+0x40>
c10054ec:	e8 75 fc ff ff       	call   c1005166 <clear>
c10054f1:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c10054f8:	0f b6 d0             	movzbl %al,%edx
c10054fb:	89 d0                	mov    %edx,%eax
c10054fd:	c1 e0 02             	shl    $0x2,%eax
c1005500:	01 d0                	add    %edx,%eax
c1005502:	c1 e0 04             	shl    $0x4,%eax
c1005505:	89 c2                	mov    %eax,%edx
c1005507:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100550e:	0f b6 c0             	movzbl %al,%eax
c1005511:	01 d0                	add    %edx,%eax
c1005513:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1005517:	66 c7 45 f4 20 00    	movw   $0x20,-0xc(%ebp)
c100551d:	66 c7 45 f6 00 02    	movw   $0x200,-0xa(%ebp)
c1005523:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1005527:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c100552b:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c1005530:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c1005534:	01 d2                	add    %edx,%edx
c1005536:	01 c2                	add    %eax,%edx
c1005538:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c100553c:	66 89 02             	mov    %ax,(%edx)
c100553f:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005546:	0f b6 d0             	movzbl %al,%edx
c1005549:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005550:	0f b6 c0             	movzbl %al,%eax
c1005553:	83 ec 08             	sub    $0x8,%esp
c1005556:	52                   	push   %edx
c1005557:	50                   	push   %eax
c1005558:	e8 82 fb ff ff       	call   c10050df <print_cursor>
c100555d:	83 c4 10             	add    $0x10,%esp
c1005560:	90                   	nop
c1005561:	c9                   	leave  
c1005562:	c3                   	ret    

c1005563 <printk>:
c1005563:	55                   	push   %ebp
c1005564:	89 e5                	mov    %esp,%ebp
c1005566:	83 ec 38             	sub    $0x38,%esp
c1005569:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c100556d:	8d 45 0c             	lea    0xc(%ebp),%eax
c1005570:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005573:	e9 6e 03 00 00       	jmp    c10058e6 <printk+0x383>
c1005578:	8b 45 08             	mov    0x8(%ebp),%eax
c100557b:	0f b6 00             	movzbl (%eax),%eax
c100557e:	3c 25                	cmp    $0x25,%al
c1005580:	0f 85 3a 03 00 00    	jne    c10058c0 <printk+0x35d>
c1005586:	90                   	nop
c1005587:	8b 45 08             	mov    0x8(%ebp),%eax
c100558a:	83 c0 01             	add    $0x1,%eax
c100558d:	89 45 08             	mov    %eax,0x8(%ebp)
c1005590:	8b 45 08             	mov    0x8(%ebp),%eax
c1005593:	0f b6 00             	movzbl (%eax),%eax
c1005596:	0f be c0             	movsbl %al,%eax
c1005599:	83 e8 30             	sub    $0x30,%eax
c100559c:	83 f8 48             	cmp    $0x48,%eax
c100559f:	0f 87 fb 02 00 00    	ja     c10058a0 <printk+0x33d>
c10055a5:	8b 04 85 a4 af 00 c1 	mov    -0x3eff505c(,%eax,4),%eax
c10055ac:	ff e0                	jmp    *%eax
c10055ae:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10055b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10055b5:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
c10055b9:	88 45 d7             	mov    %al,-0x29(%ebp)
c10055bc:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
c10055c0:	83 ec 04             	sub    $0x4,%esp
c10055c3:	6a 02                	push   $0x2
c10055c5:	6a 00                	push   $0x0
c10055c7:	50                   	push   %eax
c10055c8:	e8 11 fc ff ff       	call   c10051de <print_char>
c10055cd:	83 c4 10             	add    $0x10,%esp
c10055d0:	e9 e0 02 00 00       	jmp    c10058b5 <printk+0x352>
c10055d5:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10055d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10055dc:	8b 40 fc             	mov    -0x4(%eax),%eax
c10055df:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10055e2:	83 ec 04             	sub    $0x4,%esp
c10055e5:	6a 02                	push   $0x2
c10055e7:	6a 00                	push   $0x0
c10055e9:	ff 75 dc             	pushl  -0x24(%ebp)
c10055ec:	e8 0a fd ff ff       	call   c10052fb <print_string>
c10055f1:	83 c4 10             	add    $0x10,%esp
c10055f4:	e9 bc 02 00 00       	jmp    c10058b5 <printk+0x352>
c10055f9:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10055fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005600:	8b 40 fc             	mov    -0x4(%eax),%eax
c1005603:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005606:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100560a:	74 23                	je     c100562f <printk+0xcc>
c100560c:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1005610:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005613:	99                   	cltd   
c1005614:	83 ec 04             	sub    $0x4,%esp
c1005617:	6a 01                	push   $0x1
c1005619:	51                   	push   %ecx
c100561a:	6a 0a                	push   $0xa
c100561c:	6a 02                	push   $0x2
c100561e:	6a 00                	push   $0x0
c1005620:	52                   	push   %edx
c1005621:	50                   	push   %eax
c1005622:	e8 0b fd ff ff       	call   c1005332 <print_num>
c1005627:	83 c4 20             	add    $0x20,%esp
c100562a:	e9 86 02 00 00       	jmp    c10058b5 <printk+0x352>
c100562f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005632:	99                   	cltd   
c1005633:	83 ec 04             	sub    $0x4,%esp
c1005636:	6a 00                	push   $0x0
c1005638:	6a 14                	push   $0x14
c100563a:	6a 0a                	push   $0xa
c100563c:	6a 02                	push   $0x2
c100563e:	6a 00                	push   $0x0
c1005640:	52                   	push   %edx
c1005641:	50                   	push   %eax
c1005642:	e8 eb fc ff ff       	call   c1005332 <print_num>
c1005647:	83 c4 20             	add    $0x20,%esp
c100564a:	e9 66 02 00 00       	jmp    c10058b5 <printk+0x352>
c100564f:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005653:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005656:	8b 40 fc             	mov    -0x4(%eax),%eax
c1005659:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100565c:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005660:	74 23                	je     c1005685 <printk+0x122>
c1005662:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1005666:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005669:	99                   	cltd   
c100566a:	83 ec 04             	sub    $0x4,%esp
c100566d:	6a 01                	push   $0x1
c100566f:	51                   	push   %ecx
c1005670:	6a 10                	push   $0x10
c1005672:	6a 02                	push   $0x2
c1005674:	6a 00                	push   $0x0
c1005676:	52                   	push   %edx
c1005677:	50                   	push   %eax
c1005678:	e8 b5 fc ff ff       	call   c1005332 <print_num>
c100567d:	83 c4 20             	add    $0x20,%esp
c1005680:	e9 30 02 00 00       	jmp    c10058b5 <printk+0x352>
c1005685:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005688:	99                   	cltd   
c1005689:	83 ec 04             	sub    $0x4,%esp
c100568c:	6a 00                	push   $0x0
c100568e:	6a 14                	push   $0x14
c1005690:	6a 10                	push   $0x10
c1005692:	6a 02                	push   $0x2
c1005694:	6a 00                	push   $0x0
c1005696:	52                   	push   %edx
c1005697:	50                   	push   %eax
c1005698:	e8 95 fc ff ff       	call   c1005332 <print_num>
c100569d:	83 c4 20             	add    $0x20,%esp
c10056a0:	e9 10 02 00 00       	jmp    c10058b5 <printk+0x352>
c10056a5:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c10056a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10056ac:	8b 50 fc             	mov    -0x4(%eax),%edx
c10056af:	8b 40 f8             	mov    -0x8(%eax),%eax
c10056b2:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10056b5:	89 55 cc             	mov    %edx,-0x34(%ebp)
c10056b8:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10056bc:	74 25                	je     c10056e3 <printk+0x180>
c10056be:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10056c2:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10056c5:	8b 55 cc             	mov    -0x34(%ebp),%edx
c10056c8:	83 ec 04             	sub    $0x4,%esp
c10056cb:	6a 01                	push   $0x1
c10056cd:	51                   	push   %ecx
c10056ce:	6a 10                	push   $0x10
c10056d0:	6a 02                	push   $0x2
c10056d2:	6a 00                	push   $0x0
c10056d4:	52                   	push   %edx
c10056d5:	50                   	push   %eax
c10056d6:	e8 57 fc ff ff       	call   c1005332 <print_num>
c10056db:	83 c4 20             	add    $0x20,%esp
c10056de:	e9 d2 01 00 00       	jmp    c10058b5 <printk+0x352>
c10056e3:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10056e6:	8b 55 cc             	mov    -0x34(%ebp),%edx
c10056e9:	83 ec 04             	sub    $0x4,%esp
c10056ec:	6a 00                	push   $0x0
c10056ee:	6a 14                	push   $0x14
c10056f0:	6a 10                	push   $0x10
c10056f2:	6a 02                	push   $0x2
c10056f4:	6a 00                	push   $0x0
c10056f6:	52                   	push   %edx
c10056f7:	50                   	push   %eax
c10056f8:	e8 35 fc ff ff       	call   c1005332 <print_num>
c10056fd:	83 c4 20             	add    $0x20,%esp
c1005700:	e9 b0 01 00 00       	jmp    c10058b5 <printk+0x352>
c1005705:	8b 45 08             	mov    0x8(%ebp),%eax
c1005708:	83 c0 01             	add    $0x1,%eax
c100570b:	89 45 08             	mov    %eax,0x8(%ebp)
c100570e:	8b 45 08             	mov    0x8(%ebp),%eax
c1005711:	0f b6 00             	movzbl (%eax),%eax
c1005714:	0f be c0             	movsbl %al,%eax
c1005717:	83 f8 78             	cmp    $0x78,%eax
c100571a:	0f 84 9a 00 00 00    	je     c10057ba <printk+0x257>
c1005720:	83 f8 78             	cmp    $0x78,%eax
c1005723:	0f 8f 3f 01 00 00    	jg     c1005868 <printk+0x305>
c1005729:	83 f8 6c             	cmp    $0x6c,%eax
c100572c:	0f 84 e0 00 00 00    	je     c1005812 <printk+0x2af>
c1005732:	83 f8 6c             	cmp    $0x6c,%eax
c1005735:	0f 8f 2d 01 00 00    	jg     c1005868 <printk+0x305>
c100573b:	83 f8 64             	cmp    $0x64,%eax
c100573e:	74 1c                	je     c100575c <printk+0x1f9>
c1005740:	83 f8 64             	cmp    $0x64,%eax
c1005743:	0f 8f 1f 01 00 00    	jg     c1005868 <printk+0x305>
c1005749:	83 f8 4c             	cmp    $0x4c,%eax
c100574c:	0f 84 c0 00 00 00    	je     c1005812 <printk+0x2af>
c1005752:	83 f8 58             	cmp    $0x58,%eax
c1005755:	74 63                	je     c10057ba <printk+0x257>
c1005757:	e9 0c 01 00 00       	jmp    c1005868 <printk+0x305>
c100575c:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005760:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005763:	8b 40 fc             	mov    -0x4(%eax),%eax
c1005766:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005769:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100576d:	74 27                	je     c1005796 <printk+0x233>
c100576f:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1005773:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1005776:	ba 00 00 00 00       	mov    $0x0,%edx
c100577b:	83 ec 04             	sub    $0x4,%esp
c100577e:	6a 01                	push   $0x1
c1005780:	51                   	push   %ecx
c1005781:	6a 0a                	push   $0xa
c1005783:	6a 02                	push   $0x2
c1005785:	6a 00                	push   $0x0
c1005787:	52                   	push   %edx
c1005788:	50                   	push   %eax
c1005789:	e8 a4 fb ff ff       	call   c1005332 <print_num>
c100578e:	83 c4 20             	add    $0x20,%esp
c1005791:	e9 d3 00 00 00       	jmp    c1005869 <printk+0x306>
c1005796:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1005799:	ba 00 00 00 00       	mov    $0x0,%edx
c100579e:	83 ec 04             	sub    $0x4,%esp
c10057a1:	6a 00                	push   $0x0
c10057a3:	6a 14                	push   $0x14
c10057a5:	6a 0a                	push   $0xa
c10057a7:	6a 02                	push   $0x2
c10057a9:	6a 00                	push   $0x0
c10057ab:	52                   	push   %edx
c10057ac:	50                   	push   %eax
c10057ad:	e8 80 fb ff ff       	call   c1005332 <print_num>
c10057b2:	83 c4 20             	add    $0x20,%esp
c10057b5:	e9 af 00 00 00       	jmp    c1005869 <printk+0x306>
c10057ba:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10057be:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10057c1:	8b 40 fc             	mov    -0x4(%eax),%eax
c10057c4:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10057c7:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10057cb:	74 24                	je     c10057f1 <printk+0x28e>
c10057cd:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10057d1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10057d4:	ba 00 00 00 00       	mov    $0x0,%edx
c10057d9:	83 ec 04             	sub    $0x4,%esp
c10057dc:	6a 01                	push   $0x1
c10057de:	51                   	push   %ecx
c10057df:	6a 10                	push   $0x10
c10057e1:	6a 02                	push   $0x2
c10057e3:	6a 00                	push   $0x0
c10057e5:	52                   	push   %edx
c10057e6:	50                   	push   %eax
c10057e7:	e8 46 fb ff ff       	call   c1005332 <print_num>
c10057ec:	83 c4 20             	add    $0x20,%esp
c10057ef:	eb 78                	jmp    c1005869 <printk+0x306>
c10057f1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10057f4:	ba 00 00 00 00       	mov    $0x0,%edx
c10057f9:	83 ec 04             	sub    $0x4,%esp
c10057fc:	6a 00                	push   $0x0
c10057fe:	6a 14                	push   $0x14
c1005800:	6a 10                	push   $0x10
c1005802:	6a 02                	push   $0x2
c1005804:	6a 00                	push   $0x0
c1005806:	52                   	push   %edx
c1005807:	50                   	push   %eax
c1005808:	e8 25 fb ff ff       	call   c1005332 <print_num>
c100580d:	83 c4 20             	add    $0x20,%esp
c1005810:	eb 57                	jmp    c1005869 <printk+0x306>
c1005812:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1005816:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005819:	8b 50 fc             	mov    -0x4(%eax),%edx
c100581c:	8b 40 f8             	mov    -0x8(%eax),%eax
c100581f:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005822:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1005825:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005829:	74 20                	je     c100584b <printk+0x2e8>
c100582b:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c100582f:	83 ec 04             	sub    $0x4,%esp
c1005832:	6a 01                	push   $0x1
c1005834:	50                   	push   %eax
c1005835:	6a 10                	push   $0x10
c1005837:	6a 02                	push   $0x2
c1005839:	6a 00                	push   $0x0
c100583b:	ff 75 e4             	pushl  -0x1c(%ebp)
c100583e:	ff 75 e0             	pushl  -0x20(%ebp)
c1005841:	e8 ec fa ff ff       	call   c1005332 <print_num>
c1005846:	83 c4 20             	add    $0x20,%esp
c1005849:	eb 1e                	jmp    c1005869 <printk+0x306>
c100584b:	83 ec 04             	sub    $0x4,%esp
c100584e:	6a 00                	push   $0x0
c1005850:	6a 14                	push   $0x14
c1005852:	6a 10                	push   $0x10
c1005854:	6a 02                	push   $0x2
c1005856:	6a 00                	push   $0x0
c1005858:	ff 75 e4             	pushl  -0x1c(%ebp)
c100585b:	ff 75 e0             	pushl  -0x20(%ebp)
c100585e:	e8 cf fa ff ff       	call   c1005332 <print_num>
c1005863:	83 c4 20             	add    $0x20,%esp
c1005866:	eb 01                	jmp    c1005869 <printk+0x306>
c1005868:	90                   	nop
c1005869:	eb 4a                	jmp    c10058b5 <printk+0x352>
c100586b:	8b 45 08             	mov    0x8(%ebp),%eax
c100586e:	0f b6 00             	movzbl (%eax),%eax
c1005871:	0f be c0             	movsbl %al,%eax
c1005874:	83 e8 30             	sub    $0x30,%eax
c1005877:	89 c2                	mov    %eax,%edx
c1005879:	89 d0                	mov    %edx,%eax
c100587b:	c1 e0 02             	shl    $0x2,%eax
c100587e:	01 d0                	add    %edx,%eax
c1005880:	01 c0                	add    %eax,%eax
c1005882:	89 c2                	mov    %eax,%edx
c1005884:	8b 45 08             	mov    0x8(%ebp),%eax
c1005887:	83 c0 01             	add    $0x1,%eax
c100588a:	89 45 08             	mov    %eax,0x8(%ebp)
c100588d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005890:	0f b6 00             	movzbl (%eax),%eax
c1005893:	01 d0                	add    %edx,%eax
c1005895:	83 e8 30             	sub    $0x30,%eax
c1005898:	88 45 f3             	mov    %al,-0xd(%ebp)
c100589b:	e9 e7 fc ff ff       	jmp    c1005587 <printk+0x24>
c10058a0:	83 ec 04             	sub    $0x4,%esp
c10058a3:	6a 02                	push   $0x2
c10058a5:	6a 00                	push   $0x0
c10058a7:	68 84 af 00 c1       	push   $0xc100af84
c10058ac:	e8 4a fa ff ff       	call   c10052fb <print_string>
c10058b1:	83 c4 10             	add    $0x10,%esp
c10058b4:	90                   	nop
c10058b5:	8b 45 08             	mov    0x8(%ebp),%eax
c10058b8:	83 c0 01             	add    $0x1,%eax
c10058bb:	89 45 08             	mov    %eax,0x8(%ebp)
c10058be:	eb 22                	jmp    c10058e2 <printk+0x37f>
c10058c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10058c3:	0f b6 00             	movzbl (%eax),%eax
c10058c6:	0f be c0             	movsbl %al,%eax
c10058c9:	83 ec 04             	sub    $0x4,%esp
c10058cc:	6a 02                	push   $0x2
c10058ce:	6a 00                	push   $0x0
c10058d0:	50                   	push   %eax
c10058d1:	e8 08 f9 ff ff       	call   c10051de <print_char>
c10058d6:	83 c4 10             	add    $0x10,%esp
c10058d9:	8b 45 08             	mov    0x8(%ebp),%eax
c10058dc:	83 c0 01             	add    $0x1,%eax
c10058df:	89 45 08             	mov    %eax,0x8(%ebp)
c10058e2:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c10058e6:	8b 45 08             	mov    0x8(%ebp),%eax
c10058e9:	0f b6 00             	movzbl (%eax),%eax
c10058ec:	84 c0                	test   %al,%al
c10058ee:	0f 85 84 fc ff ff    	jne    c1005578 <printk+0x15>
c10058f4:	90                   	nop
c10058f5:	90                   	nop
c10058f6:	c9                   	leave  
c10058f7:	c3                   	ret    

c10058f8 <cons_putc>:
c10058f8:	55                   	push   %ebp
c10058f9:	89 e5                	mov    %esp,%ebp
c10058fb:	83 ec 08             	sub    $0x8,%esp
c10058fe:	83 ec 0c             	sub    $0xc,%esp
c1005901:	ff 75 08             	pushl  0x8(%ebp)
c1005904:	e8 b1 f5 ff ff       	call   c1004eba <lpt_putc>
c1005909:	83 c4 10             	add    $0x10,%esp
c100590c:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1005910:	74 13                	je     c1005925 <cons_putc+0x2d>
c1005912:	83 ec 08             	sub    $0x8,%esp
c1005915:	ff 75 08             	pushl  0x8(%ebp)
c1005918:	68 c8 b0 00 c1       	push   $0xc100b0c8
c100591d:	e8 41 fc ff ff       	call   c1005563 <printk>
c1005922:	83 c4 10             	add    $0x10,%esp
c1005925:	83 ec 0c             	sub    $0xc,%esp
c1005928:	ff 75 08             	pushl  0x8(%ebp)
c100592b:	e8 ed f6 ff ff       	call   c100501d <serial_putc>
c1005930:	83 c4 10             	add    $0x10,%esp
c1005933:	90                   	nop
c1005934:	c9                   	leave  
c1005935:	c3                   	ret    

c1005936 <cons_getc>:
c1005936:	55                   	push   %ebp
c1005937:	89 e5                	mov    %esp,%ebp
c1005939:	83 ec 18             	sub    $0x18,%esp
c100593c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005943:	e8 5c f6 ff ff       	call   c1004fa4 <serial_intr>
c1005948:	e8 5b c5 ff ff       	call   c1001ea8 <kbd_intr>
c100594d:	8b 15 20 42 a1 c1    	mov    0xc1a14220,%edx
c1005953:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c1005958:	39 c2                	cmp    %eax,%edx
c100595a:	74 31                	je     c100598d <cons_getc+0x57>
c100595c:	a1 20 42 a1 c1       	mov    0xc1a14220,%eax
c1005961:	8d 50 01             	lea    0x1(%eax),%edx
c1005964:	89 15 20 42 a1 c1    	mov    %edx,0xc1a14220
c100596a:	0f b6 80 20 40 a1 c1 	movzbl -0x3e5ebfe0(%eax),%eax
c1005971:	0f b6 c0             	movzbl %al,%eax
c1005974:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005977:	a1 20 42 a1 c1       	mov    0xc1a14220,%eax
c100597c:	3d 00 02 00 00       	cmp    $0x200,%eax
c1005981:	75 0a                	jne    c100598d <cons_getc+0x57>
c1005983:	c7 05 20 42 a1 c1 00 	movl   $0x0,0xc1a14220
c100598a:	00 00 00 
c100598d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005990:	c9                   	leave  
c1005991:	c3                   	ret    

c1005992 <hash32>:
c1005992:	55                   	push   %ebp
c1005993:	89 e5                	mov    %esp,%ebp
c1005995:	83 ec 10             	sub    $0x10,%esp
c1005998:	8b 45 08             	mov    0x8(%ebp),%eax
c100599b:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10059a1:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10059a4:	b8 20 00 00 00       	mov    $0x20,%eax
c10059a9:	2b 45 0c             	sub    0xc(%ebp),%eax
c10059ac:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10059af:	89 c1                	mov    %eax,%ecx
c10059b1:	d3 ea                	shr    %cl,%edx
c10059b3:	89 d0                	mov    %edx,%eax
c10059b5:	c9                   	leave  
c10059b6:	c3                   	ret    

c10059b7 <sema_init>:
c10059b7:	55                   	push   %ebp
c10059b8:	89 e5                	mov    %esp,%ebp
c10059ba:	83 ec 14             	sub    $0x14,%esp
c10059bd:	8b 45 0c             	mov    0xc(%ebp),%eax
c10059c0:	88 45 ec             	mov    %al,-0x14(%ebp)
c10059c3:	8b 45 08             	mov    0x8(%ebp),%eax
c10059c6:	0f b6 55 ec          	movzbl -0x14(%ebp),%edx
c10059ca:	88 10                	mov    %dl,(%eax)
c10059cc:	8b 45 08             	mov    0x8(%ebp),%eax
c10059cf:	83 c0 04             	add    $0x4,%eax
c10059d2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10059d5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10059d8:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10059db:	89 50 04             	mov    %edx,0x4(%eax)
c10059de:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10059e1:	8b 50 04             	mov    0x4(%eax),%edx
c10059e4:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10059e7:	89 10                	mov    %edx,(%eax)
c10059e9:	90                   	nop
c10059ea:	90                   	nop
c10059eb:	c9                   	leave  
c10059ec:	c3                   	ret    

c10059ed <lock_init>:
c10059ed:	55                   	push   %ebp
c10059ee:	89 e5                	mov    %esp,%ebp
c10059f0:	8b 45 08             	mov    0x8(%ebp),%eax
c10059f3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10059f9:	8b 45 08             	mov    0x8(%ebp),%eax
c10059fc:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005a03:	8b 45 08             	mov    0x8(%ebp),%eax
c1005a06:	83 c0 04             	add    $0x4,%eax
c1005a09:	6a 01                	push   $0x1
c1005a0b:	50                   	push   %eax
c1005a0c:	e8 a6 ff ff ff       	call   c10059b7 <sema_init>
c1005a11:	83 c4 08             	add    $0x8,%esp
c1005a14:	90                   	nop
c1005a15:	c9                   	leave  
c1005a16:	c3                   	ret    

c1005a17 <sema_down>:
c1005a17:	55                   	push   %ebp
c1005a18:	89 e5                	mov    %esp,%ebp
c1005a1a:	83 ec 38             	sub    $0x38,%esp
c1005a1d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005a20:	83 c0 04             	add    $0x4,%eax
c1005a23:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005a26:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005a29:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005a2c:	e8 7a b3 ff ff       	call   c1000dab <intr_save>
c1005a31:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005a34:	e9 95 00 00 00       	jmp    c1005ace <sema_down+0xb7>
c1005a39:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005a3e:	83 c0 5c             	add    $0x5c,%eax
c1005a41:	39 45 f4             	cmp    %eax,-0xc(%ebp)
c1005a44:	75 16                	jne    c1005a5c <sema_down+0x45>
c1005a46:	68 cc b0 00 c1       	push   $0xc100b0cc
c1005a4b:	68 34 b1 00 c1       	push   $0xc100b134
c1005a50:	6a 26                	push   $0x26
c1005a52:	68 00 b1 00 c1       	push   $0xc100b100
c1005a57:	e8 0f a9 ff ff       	call   c100036b <__PANIC>
c1005a5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005a5f:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005a62:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005a65:	8b 40 04             	mov    0x4(%eax),%eax
c1005a68:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005a6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005a6e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1005a71:	75 c6                	jne    c1005a39 <sema_down+0x22>
c1005a73:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005a78:	83 c0 5c             	add    $0x5c,%eax
c1005a7b:	8b 55 08             	mov    0x8(%ebp),%edx
c1005a7e:	83 c2 04             	add    $0x4,%edx
c1005a81:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1005a84:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005a87:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005a8a:	8b 00                	mov    (%eax),%eax
c1005a8c:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005a8f:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005a92:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005a95:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005a98:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1005a9b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1005a9e:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005aa1:	89 10                	mov    %edx,(%eax)
c1005aa3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1005aa6:	8b 10                	mov    (%eax),%edx
c1005aa8:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005aab:	89 50 04             	mov    %edx,0x4(%eax)
c1005aae:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005ab1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1005ab4:	89 50 04             	mov    %edx,0x4(%eax)
c1005ab7:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005aba:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1005abd:	89 10                	mov    %edx,(%eax)
c1005abf:	90                   	nop
c1005ac0:	90                   	nop
c1005ac1:	83 ec 0c             	sub    $0xc,%esp
c1005ac4:	6a 01                	push   $0x1
c1005ac6:	e8 da e1 ff ff       	call   c1003ca5 <thread_block>
c1005acb:	83 c4 10             	add    $0x10,%esp
c1005ace:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ad1:	0f b6 00             	movzbl (%eax),%eax
c1005ad4:	84 c0                	test   %al,%al
c1005ad6:	74 84                	je     c1005a5c <sema_down+0x45>
c1005ad8:	8b 45 08             	mov    0x8(%ebp),%eax
c1005adb:	0f b6 00             	movzbl (%eax),%eax
c1005ade:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005ae1:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ae4:	88 10                	mov    %dl,(%eax)
c1005ae6:	83 ec 0c             	sub    $0xc,%esp
c1005ae9:	ff 75 ec             	pushl  -0x14(%ebp)
c1005aec:	e8 cd b2 ff ff       	call   c1000dbe <intr_restore>
c1005af1:	83 c4 10             	add    $0x10,%esp
c1005af4:	90                   	nop
c1005af5:	c9                   	leave  
c1005af6:	c3                   	ret    

c1005af7 <sema_up>:
c1005af7:	55                   	push   %ebp
c1005af8:	89 e5                	mov    %esp,%ebp
c1005afa:	83 ec 28             	sub    $0x28,%esp
c1005afd:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b00:	83 c0 04             	add    $0x4,%eax
c1005b03:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005b06:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005b09:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005b0c:	e8 9a b2 ff ff       	call   c1000dab <intr_save>
c1005b11:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005b14:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005b17:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1005b1a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005b1d:	8b 40 04             	mov    0x4(%eax),%eax
c1005b20:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005b23:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005b26:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1005b29:	74 41                	je     c1005b6c <sema_up+0x75>
c1005b2b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005b2e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005b31:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005b34:	8b 40 04             	mov    0x4(%eax),%eax
c1005b37:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005b3a:	8b 12                	mov    (%edx),%edx
c1005b3c:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005b3f:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005b42:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005b45:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1005b48:	89 50 04             	mov    %edx,0x4(%eax)
c1005b4b:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005b4e:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005b51:	89 10                	mov    %edx,(%eax)
c1005b53:	90                   	nop
c1005b54:	90                   	nop
c1005b55:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005b58:	83 e8 5c             	sub    $0x5c,%eax
c1005b5b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005b5e:	83 ec 0c             	sub    $0xc,%esp
c1005b61:	ff 75 e8             	pushl  -0x18(%ebp)
c1005b64:	e8 6a e1 ff ff       	call   c1003cd3 <thread_unblock>
c1005b69:	83 c4 10             	add    $0x10,%esp
c1005b6c:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b6f:	0f b6 00             	movzbl (%eax),%eax
c1005b72:	8d 50 01             	lea    0x1(%eax),%edx
c1005b75:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b78:	88 10                	mov    %dl,(%eax)
c1005b7a:	83 ec 0c             	sub    $0xc,%esp
c1005b7d:	ff 75 ec             	pushl  -0x14(%ebp)
c1005b80:	e8 39 b2 ff ff       	call   c1000dbe <intr_restore>
c1005b85:	83 c4 10             	add    $0x10,%esp
c1005b88:	90                   	nop
c1005b89:	c9                   	leave  
c1005b8a:	c3                   	ret    

c1005b8b <lock_acquire>:
c1005b8b:	55                   	push   %ebp
c1005b8c:	89 e5                	mov    %esp,%ebp
c1005b8e:	83 ec 08             	sub    $0x8,%esp
c1005b91:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b94:	8b 10                	mov    (%eax),%edx
c1005b96:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005b9b:	39 c2                	cmp    %eax,%edx
c1005b9d:	74 29                	je     c1005bc8 <lock_acquire+0x3d>
c1005b9f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ba2:	83 c0 04             	add    $0x4,%eax
c1005ba5:	83 ec 0c             	sub    $0xc,%esp
c1005ba8:	50                   	push   %eax
c1005ba9:	e8 69 fe ff ff       	call   c1005a17 <sema_down>
c1005bae:	83 c4 10             	add    $0x10,%esp
c1005bb1:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1005bb7:	8b 45 08             	mov    0x8(%ebp),%eax
c1005bba:	89 10                	mov    %edx,(%eax)
c1005bbc:	8b 45 08             	mov    0x8(%ebp),%eax
c1005bbf:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
c1005bc6:	eb 0f                	jmp    c1005bd7 <lock_acquire+0x4c>
c1005bc8:	8b 45 08             	mov    0x8(%ebp),%eax
c1005bcb:	8b 40 10             	mov    0x10(%eax),%eax
c1005bce:	8d 50 01             	lea    0x1(%eax),%edx
c1005bd1:	8b 45 08             	mov    0x8(%ebp),%eax
c1005bd4:	89 50 10             	mov    %edx,0x10(%eax)
c1005bd7:	90                   	nop
c1005bd8:	c9                   	leave  
c1005bd9:	c3                   	ret    

c1005bda <lock_release>:
c1005bda:	55                   	push   %ebp
c1005bdb:	89 e5                	mov    %esp,%ebp
c1005bdd:	83 ec 08             	sub    $0x8,%esp
c1005be0:	8b 45 08             	mov    0x8(%ebp),%eax
c1005be3:	8b 40 10             	mov    0x10(%eax),%eax
c1005be6:	83 f8 01             	cmp    $0x1,%eax
c1005be9:	76 11                	jbe    c1005bfc <lock_release+0x22>
c1005beb:	8b 45 08             	mov    0x8(%ebp),%eax
c1005bee:	8b 40 10             	mov    0x10(%eax),%eax
c1005bf1:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005bf4:	8b 45 08             	mov    0x8(%ebp),%eax
c1005bf7:	89 50 10             	mov    %edx,0x10(%eax)
c1005bfa:	eb 25                	jmp    c1005c21 <lock_release+0x47>
c1005bfc:	8b 45 08             	mov    0x8(%ebp),%eax
c1005bff:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005c05:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c08:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005c0f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c12:	83 c0 04             	add    $0x4,%eax
c1005c15:	83 ec 0c             	sub    $0xc,%esp
c1005c18:	50                   	push   %eax
c1005c19:	e8 d9 fe ff ff       	call   c1005af7 <sema_up>
c1005c1e:	83 c4 10             	add    $0x10,%esp
c1005c21:	c9                   	leave  
c1005c22:	c3                   	ret    

c1005c23 <waitdisk>:
c1005c23:	55                   	push   %ebp
c1005c24:	89 e5                	mov    %esp,%ebp
c1005c26:	83 ec 08             	sub    $0x8,%esp
c1005c29:	90                   	nop
c1005c2a:	83 ec 0c             	sub    $0xc,%esp
c1005c2d:	68 f7 01 00 00       	push   $0x1f7
c1005c32:	e8 c9 a3 ff ff       	call   c1000000 <inb>
c1005c37:	83 c4 10             	add    $0x10,%esp
c1005c3a:	0f b6 c0             	movzbl %al,%eax
c1005c3d:	25 c0 00 00 00       	and    $0xc0,%eax
c1005c42:	83 f8 40             	cmp    $0x40,%eax
c1005c45:	75 e3                	jne    c1005c2a <waitdisk+0x7>
c1005c47:	90                   	nop
c1005c48:	90                   	nop
c1005c49:	c9                   	leave  
c1005c4a:	c3                   	ret    

c1005c4b <insl>:
c1005c4b:	55                   	push   %ebp
c1005c4c:	89 e5                	mov    %esp,%ebp
c1005c4e:	57                   	push   %edi
c1005c4f:	53                   	push   %ebx
c1005c50:	8b 55 08             	mov    0x8(%ebp),%edx
c1005c53:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1005c56:	8b 45 10             	mov    0x10(%ebp),%eax
c1005c59:	89 cb                	mov    %ecx,%ebx
c1005c5b:	89 df                	mov    %ebx,%edi
c1005c5d:	89 c1                	mov    %eax,%ecx
c1005c5f:	fc                   	cld    
c1005c60:	f2 6d                	repnz insl (%dx),%es:(%edi)
c1005c62:	89 c8                	mov    %ecx,%eax
c1005c64:	89 fb                	mov    %edi,%ebx
c1005c66:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1005c69:	89 45 10             	mov    %eax,0x10(%ebp)
c1005c6c:	90                   	nop
c1005c6d:	5b                   	pop    %ebx
c1005c6e:	5f                   	pop    %edi
c1005c6f:	5d                   	pop    %ebp
c1005c70:	c3                   	ret    

c1005c71 <outsl>:
c1005c71:	55                   	push   %ebp
c1005c72:	89 e5                	mov    %esp,%ebp
c1005c74:	56                   	push   %esi
c1005c75:	53                   	push   %ebx
c1005c76:	8b 55 08             	mov    0x8(%ebp),%edx
c1005c79:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1005c7c:	8b 45 10             	mov    0x10(%ebp),%eax
c1005c7f:	89 cb                	mov    %ecx,%ebx
c1005c81:	89 de                	mov    %ebx,%esi
c1005c83:	89 c1                	mov    %eax,%ecx
c1005c85:	fc                   	cld    
c1005c86:	f2 6f                	repnz outsl %ds:(%esi),(%dx)
c1005c88:	89 c8                	mov    %ecx,%eax
c1005c8a:	89 f3                	mov    %esi,%ebx
c1005c8c:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1005c8f:	89 45 10             	mov    %eax,0x10(%ebp)
c1005c92:	90                   	nop
c1005c93:	5b                   	pop    %ebx
c1005c94:	5e                   	pop    %esi
c1005c95:	5d                   	pop    %ebp
c1005c96:	c3                   	ret    

c1005c97 <ide_read_sect>:
c1005c97:	55                   	push   %ebp
c1005c98:	89 e5                	mov    %esp,%ebp
c1005c9a:	83 ec 08             	sub    $0x8,%esp
c1005c9d:	e8 81 ff ff ff       	call   c1005c23 <waitdisk>
c1005ca2:	83 ec 08             	sub    $0x8,%esp
c1005ca5:	6a 01                	push   $0x1
c1005ca7:	68 f2 01 00 00       	push   $0x1f2
c1005cac:	e8 8b a3 ff ff       	call   c100003c <outb>
c1005cb1:	83 c4 10             	add    $0x10,%esp
c1005cb4:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005cb7:	0f b6 c0             	movzbl %al,%eax
c1005cba:	83 ec 08             	sub    $0x8,%esp
c1005cbd:	50                   	push   %eax
c1005cbe:	68 f3 01 00 00       	push   $0x1f3
c1005cc3:	e8 74 a3 ff ff       	call   c100003c <outb>
c1005cc8:	83 c4 10             	add    $0x10,%esp
c1005ccb:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005cce:	c1 e8 08             	shr    $0x8,%eax
c1005cd1:	0f b6 c0             	movzbl %al,%eax
c1005cd4:	83 ec 08             	sub    $0x8,%esp
c1005cd7:	50                   	push   %eax
c1005cd8:	68 f4 01 00 00       	push   $0x1f4
c1005cdd:	e8 5a a3 ff ff       	call   c100003c <outb>
c1005ce2:	83 c4 10             	add    $0x10,%esp
c1005ce5:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005ce8:	c1 e8 10             	shr    $0x10,%eax
c1005ceb:	0f b6 c0             	movzbl %al,%eax
c1005cee:	83 ec 08             	sub    $0x8,%esp
c1005cf1:	50                   	push   %eax
c1005cf2:	68 f5 01 00 00       	push   $0x1f5
c1005cf7:	e8 40 a3 ff ff       	call   c100003c <outb>
c1005cfc:	83 c4 10             	add    $0x10,%esp
c1005cff:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005d02:	c1 e8 18             	shr    $0x18,%eax
c1005d05:	83 e0 0f             	and    $0xf,%eax
c1005d08:	83 c8 e0             	or     $0xffffffe0,%eax
c1005d0b:	0f b6 c0             	movzbl %al,%eax
c1005d0e:	83 ec 08             	sub    $0x8,%esp
c1005d11:	50                   	push   %eax
c1005d12:	68 f6 01 00 00       	push   $0x1f6
c1005d17:	e8 20 a3 ff ff       	call   c100003c <outb>
c1005d1c:	83 c4 10             	add    $0x10,%esp
c1005d1f:	83 ec 08             	sub    $0x8,%esp
c1005d22:	6a 20                	push   $0x20
c1005d24:	68 f7 01 00 00       	push   $0x1f7
c1005d29:	e8 0e a3 ff ff       	call   c100003c <outb>
c1005d2e:	83 c4 10             	add    $0x10,%esp
c1005d31:	e8 ed fe ff ff       	call   c1005c23 <waitdisk>
c1005d36:	83 ec 04             	sub    $0x4,%esp
c1005d39:	68 80 00 00 00       	push   $0x80
c1005d3e:	ff 75 08             	pushl  0x8(%ebp)
c1005d41:	68 f0 01 00 00       	push   $0x1f0
c1005d46:	e8 00 ff ff ff       	call   c1005c4b <insl>
c1005d4b:	83 c4 10             	add    $0x10,%esp
c1005d4e:	90                   	nop
c1005d4f:	c9                   	leave  
c1005d50:	c3                   	ret    

c1005d51 <ide_write_sect>:
c1005d51:	55                   	push   %ebp
c1005d52:	89 e5                	mov    %esp,%ebp
c1005d54:	83 ec 08             	sub    $0x8,%esp
c1005d57:	e8 c7 fe ff ff       	call   c1005c23 <waitdisk>
c1005d5c:	83 ec 08             	sub    $0x8,%esp
c1005d5f:	6a 01                	push   $0x1
c1005d61:	68 f2 01 00 00       	push   $0x1f2
c1005d66:	e8 d1 a2 ff ff       	call   c100003c <outb>
c1005d6b:	83 c4 10             	add    $0x10,%esp
c1005d6e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005d71:	0f b6 c0             	movzbl %al,%eax
c1005d74:	83 ec 08             	sub    $0x8,%esp
c1005d77:	50                   	push   %eax
c1005d78:	68 f3 01 00 00       	push   $0x1f3
c1005d7d:	e8 ba a2 ff ff       	call   c100003c <outb>
c1005d82:	83 c4 10             	add    $0x10,%esp
c1005d85:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005d88:	c1 e8 08             	shr    $0x8,%eax
c1005d8b:	0f b6 c0             	movzbl %al,%eax
c1005d8e:	83 ec 08             	sub    $0x8,%esp
c1005d91:	50                   	push   %eax
c1005d92:	68 f4 01 00 00       	push   $0x1f4
c1005d97:	e8 a0 a2 ff ff       	call   c100003c <outb>
c1005d9c:	83 c4 10             	add    $0x10,%esp
c1005d9f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005da2:	c1 e8 10             	shr    $0x10,%eax
c1005da5:	0f b6 c0             	movzbl %al,%eax
c1005da8:	83 ec 08             	sub    $0x8,%esp
c1005dab:	50                   	push   %eax
c1005dac:	68 f5 01 00 00       	push   $0x1f5
c1005db1:	e8 86 a2 ff ff       	call   c100003c <outb>
c1005db6:	83 c4 10             	add    $0x10,%esp
c1005db9:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005dbc:	c1 e8 18             	shr    $0x18,%eax
c1005dbf:	83 e0 0f             	and    $0xf,%eax
c1005dc2:	83 c8 e0             	or     $0xffffffe0,%eax
c1005dc5:	0f b6 c0             	movzbl %al,%eax
c1005dc8:	83 ec 08             	sub    $0x8,%esp
c1005dcb:	50                   	push   %eax
c1005dcc:	68 f6 01 00 00       	push   $0x1f6
c1005dd1:	e8 66 a2 ff ff       	call   c100003c <outb>
c1005dd6:	83 c4 10             	add    $0x10,%esp
c1005dd9:	83 ec 08             	sub    $0x8,%esp
c1005ddc:	6a 30                	push   $0x30
c1005dde:	68 f7 01 00 00       	push   $0x1f7
c1005de3:	e8 54 a2 ff ff       	call   c100003c <outb>
c1005de8:	83 c4 10             	add    $0x10,%esp
c1005deb:	e8 33 fe ff ff       	call   c1005c23 <waitdisk>
c1005df0:	83 ec 04             	sub    $0x4,%esp
c1005df3:	68 80 00 00 00       	push   $0x80
c1005df8:	ff 75 08             	pushl  0x8(%ebp)
c1005dfb:	68 f0 01 00 00       	push   $0x1f0
c1005e00:	e8 6c fe ff ff       	call   c1005c71 <outsl>
c1005e05:	83 c4 10             	add    $0x10,%esp
c1005e08:	90                   	nop
c1005e09:	c9                   	leave  
c1005e0a:	c3                   	ret    

c1005e0b <ide_read>:
c1005e0b:	55                   	push   %ebp
c1005e0c:	89 e5                	mov    %esp,%ebp
c1005e0e:	83 ec 18             	sub    $0x18,%esp
c1005e11:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005e18:	eb 22                	jmp    c1005e3c <ide_read+0x31>
c1005e1a:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005e1d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005e20:	01 d0                	add    %edx,%eax
c1005e22:	83 ec 08             	sub    $0x8,%esp
c1005e25:	50                   	push   %eax
c1005e26:	ff 75 08             	pushl  0x8(%ebp)
c1005e29:	e8 69 fe ff ff       	call   c1005c97 <ide_read_sect>
c1005e2e:	83 c4 10             	add    $0x10,%esp
c1005e31:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1005e38:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1005e3c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005e3f:	39 45 10             	cmp    %eax,0x10(%ebp)
c1005e42:	77 d6                	ja     c1005e1a <ide_read+0xf>
c1005e44:	90                   	nop
c1005e45:	90                   	nop
c1005e46:	c9                   	leave  
c1005e47:	c3                   	ret    

c1005e48 <ide_write>:
c1005e48:	55                   	push   %ebp
c1005e49:	89 e5                	mov    %esp,%ebp
c1005e4b:	83 ec 18             	sub    $0x18,%esp
c1005e4e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005e55:	eb 22                	jmp    c1005e79 <ide_write+0x31>
c1005e57:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005e5a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005e5d:	01 d0                	add    %edx,%eax
c1005e5f:	83 ec 08             	sub    $0x8,%esp
c1005e62:	50                   	push   %eax
c1005e63:	ff 75 08             	pushl  0x8(%ebp)
c1005e66:	e8 e6 fe ff ff       	call   c1005d51 <ide_write_sect>
c1005e6b:	83 c4 10             	add    $0x10,%esp
c1005e6e:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1005e75:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1005e79:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005e7c:	39 45 10             	cmp    %eax,0x10(%ebp)
c1005e7f:	77 d6                	ja     c1005e57 <ide_write+0xf>
c1005e81:	90                   	nop
c1005e82:	90                   	nop
c1005e83:	c9                   	leave  
c1005e84:	c3                   	ret    

c1005e85 <delay>:
c1005e85:	55                   	push   %ebp
c1005e86:	89 e5                	mov    %esp,%ebp
c1005e88:	83 ec 10             	sub    $0x10,%esp
c1005e8b:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e8e:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005e91:	eb 17                	jmp    c1005eaa <delay+0x25>
c1005e93:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c1005e9a:	eb 04                	jmp    c1005ea0 <delay+0x1b>
c1005e9c:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c1005ea0:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c1005ea4:	75 f6                	jne    c1005e9c <delay+0x17>
c1005ea6:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c1005eaa:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1005eae:	75 e3                	jne    c1005e93 <delay+0xe>
c1005eb0:	90                   	nop
c1005eb1:	90                   	nop
c1005eb2:	c9                   	leave  
c1005eb3:	c3                   	ret    

c1005eb4 <read_main_partition>:
c1005eb4:	55                   	push   %ebp
c1005eb5:	89 e5                	mov    %esp,%ebp
c1005eb7:	83 ec 18             	sub    $0x18,%esp
c1005eba:	83 ec 08             	sub    $0x8,%esp
c1005ebd:	6a 02                	push   $0x2
c1005ebf:	68 00 02 00 00       	push   $0x200
c1005ec4:	e8 46 cd ff ff       	call   c1002c0f <vmm_malloc>
c1005ec9:	83 c4 10             	add    $0x10,%esp
c1005ecc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005ecf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005ed2:	83 ec 08             	sub    $0x8,%esp
c1005ed5:	6a 00                	push   $0x0
c1005ed7:	50                   	push   %eax
c1005ed8:	e8 ba fd ff ff       	call   c1005c97 <ide_read_sect>
c1005edd:	83 c4 10             	add    $0x10,%esp
c1005ee0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005ee3:	05 be 01 00 00       	add    $0x1be,%eax
c1005ee8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005eeb:	e8 76 f2 ff ff       	call   c1005166 <clear>
c1005ef0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005ef3:	0f b6 00             	movzbl (%eax),%eax
c1005ef6:	0f b6 c0             	movzbl %al,%eax
c1005ef9:	83 ec 08             	sub    $0x8,%esp
c1005efc:	50                   	push   %eax
c1005efd:	68 3e b1 00 c1       	push   $0xc100b13e
c1005f02:	e8 5c f6 ff ff       	call   c1005563 <printk>
c1005f07:	83 c4 10             	add    $0x10,%esp
c1005f0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005f0d:	0f b6 40 01          	movzbl 0x1(%eax),%eax
c1005f11:	0f b6 c0             	movzbl %al,%eax
c1005f14:	83 ec 08             	sub    $0x8,%esp
c1005f17:	50                   	push   %eax
c1005f18:	68 51 b1 00 c1       	push   $0xc100b151
c1005f1d:	e8 41 f6 ff ff       	call   c1005563 <printk>
c1005f22:	83 c4 10             	add    $0x10,%esp
c1005f25:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005f28:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c1005f2c:	0f b6 c0             	movzbl %al,%eax
c1005f2f:	83 ec 08             	sub    $0x8,%esp
c1005f32:	50                   	push   %eax
c1005f33:	68 67 b1 00 c1       	push   $0xc100b167
c1005f38:	e8 26 f6 ff ff       	call   c1005563 <printk>
c1005f3d:	83 c4 10             	add    $0x10,%esp
c1005f40:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005f43:	0f b6 40 03          	movzbl 0x3(%eax),%eax
c1005f47:	0f b6 c0             	movzbl %al,%eax
c1005f4a:	83 ec 08             	sub    $0x8,%esp
c1005f4d:	50                   	push   %eax
c1005f4e:	68 7b b1 00 c1       	push   $0xc100b17b
c1005f53:	e8 0b f6 ff ff       	call   c1005563 <printk>
c1005f58:	83 c4 10             	add    $0x10,%esp
c1005f5b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005f5e:	0f b6 40 04          	movzbl 0x4(%eax),%eax
c1005f62:	0f b6 c0             	movzbl %al,%eax
c1005f65:	83 ec 08             	sub    $0x8,%esp
c1005f68:	50                   	push   %eax
c1005f69:	68 91 b1 00 c1       	push   $0xc100b191
c1005f6e:	e8 f0 f5 ff ff       	call   c1005563 <printk>
c1005f73:	83 c4 10             	add    $0x10,%esp
c1005f76:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005f79:	0f b6 40 05          	movzbl 0x5(%eax),%eax
c1005f7d:	0f b6 c0             	movzbl %al,%eax
c1005f80:	83 ec 08             	sub    $0x8,%esp
c1005f83:	50                   	push   %eax
c1005f84:	68 a2 b1 00 c1       	push   $0xc100b1a2
c1005f89:	e8 d5 f5 ff ff       	call   c1005563 <printk>
c1005f8e:	83 c4 10             	add    $0x10,%esp
c1005f91:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005f94:	0f b6 40 06          	movzbl 0x6(%eax),%eax
c1005f98:	0f b6 c0             	movzbl %al,%eax
c1005f9b:	83 ec 08             	sub    $0x8,%esp
c1005f9e:	50                   	push   %eax
c1005f9f:	68 b6 b1 00 c1       	push   $0xc100b1b6
c1005fa4:	e8 ba f5 ff ff       	call   c1005563 <printk>
c1005fa9:	83 c4 10             	add    $0x10,%esp
c1005fac:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005faf:	0f b6 40 07          	movzbl 0x7(%eax),%eax
c1005fb3:	0f b6 c0             	movzbl %al,%eax
c1005fb6:	83 ec 08             	sub    $0x8,%esp
c1005fb9:	50                   	push   %eax
c1005fba:	68 c8 b1 00 c1       	push   $0xc100b1c8
c1005fbf:	e8 9f f5 ff ff       	call   c1005563 <printk>
c1005fc4:	83 c4 10             	add    $0x10,%esp
c1005fc7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005fca:	8b 40 08             	mov    0x8(%eax),%eax
c1005fcd:	83 ec 08             	sub    $0x8,%esp
c1005fd0:	50                   	push   %eax
c1005fd1:	68 dc b1 00 c1       	push   $0xc100b1dc
c1005fd6:	e8 88 f5 ff ff       	call   c1005563 <printk>
c1005fdb:	83 c4 10             	add    $0x10,%esp
c1005fde:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005fe1:	8b 40 0c             	mov    0xc(%eax),%eax
c1005fe4:	83 ec 08             	sub    $0x8,%esp
c1005fe7:	50                   	push   %eax
c1005fe8:	68 f0 b1 00 c1       	push   $0xc100b1f0
c1005fed:	e8 71 f5 ff ff       	call   c1005563 <printk>
c1005ff2:	83 c4 10             	add    $0x10,%esp
c1005ff5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005ff8:	c9                   	leave  
c1005ff9:	c3                   	ret    

c1005ffa <test_ide_io>:
c1005ffa:	55                   	push   %ebp
c1005ffb:	89 e5                	mov    %esp,%ebp
c1005ffd:	83 ec 18             	sub    $0x18,%esp
c1006000:	83 ec 08             	sub    $0x8,%esp
c1006003:	68 00 90 10 00       	push   $0x109000
c1006008:	68 03 b2 00 c1       	push   $0xc100b203
c100600d:	e8 51 f5 ff ff       	call   c1005563 <printk>
c1006012:	83 c4 10             	add    $0x10,%esp
c1006015:	83 ec 08             	sub    $0x8,%esp
c1006018:	68 2c eb 00 c1       	push   $0xc100eb2c
c100601d:	68 12 b2 00 c1       	push   $0xc100b212
c1006022:	e8 3c f5 ff ff       	call   c1005563 <printk>
c1006027:	83 c4 10             	add    $0x10,%esp
c100602a:	b8 00 90 10 00       	mov    $0x109000,%eax
c100602f:	2d 01 fe 0f 00       	sub    $0xffe01,%eax
c1006034:	c1 e8 09             	shr    $0x9,%eax
c1006037:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100603a:	b8 2c eb 00 c1       	mov    $0xc100eb2c,%eax
c100603f:	05 ff 01 00 3f       	add    $0x3f0001ff,%eax
c1006044:	c1 e8 09             	shr    $0x9,%eax
c1006047:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100604a:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100604d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006050:	01 d0                	add    %edx,%eax
c1006052:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006055:	83 ec 08             	sub    $0x8,%esp
c1006058:	ff 75 ec             	pushl  -0x14(%ebp)
c100605b:	68 21 b2 00 c1       	push   $0xc100b221
c1006060:	e8 fe f4 ff ff       	call   c1005563 <printk>
c1006065:	83 c4 10             	add    $0x10,%esp
c1006068:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c100606c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1006073:	e8 3c fe ff ff       	call   c1005eb4 <read_main_partition>
c1006078:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100607b:	90                   	nop
c100607c:	c9                   	leave  
c100607d:	c3                   	ret    

c100607e <hash32>:
c100607e:	55                   	push   %ebp
c100607f:	89 e5                	mov    %esp,%ebp
c1006081:	83 ec 10             	sub    $0x10,%esp
c1006084:	8b 45 08             	mov    0x8(%ebp),%eax
c1006087:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100608d:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1006090:	b8 20 00 00 00       	mov    $0x20,%eax
c1006095:	2b 45 0c             	sub    0xc(%ebp),%eax
c1006098:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100609b:	89 c1                	mov    %eax,%ecx
c100609d:	d3 ea                	shr    %cl,%edx
c100609f:	89 d0                	mov    %edx,%eax
c10060a1:	c9                   	leave  
c10060a2:	c3                   	ret    

c10060a3 <partition_format>:
c10060a3:	55                   	push   %ebp
c10060a4:	89 e5                	mov    %esp,%ebp
c10060a6:	53                   	push   %ebx
c10060a7:	81 ec 44 02 00 00    	sub    $0x244,%esp
c10060ad:	e8 02 fe ff ff       	call   c1005eb4 <read_main_partition>
c10060b2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10060b5:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
c10060bc:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
c10060c3:	c7 45 e4 11 00 00 00 	movl   $0x11,-0x1c(%ebp)
c10060ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10060cd:	8b 40 0c             	mov    0xc(%eax),%eax
c10060d0:	2b 45 ec             	sub    -0x14(%ebp),%eax
c10060d3:	2b 45 e8             	sub    -0x18(%ebp),%eax
c10060d6:	2b 45 e4             	sub    -0x1c(%ebp),%eax
c10060d9:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10060dc:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10060df:	05 ff 0f 00 00       	add    $0xfff,%eax
c10060e4:	c1 e8 0c             	shr    $0xc,%eax
c10060e7:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10060ea:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10060ed:	2b 45 dc             	sub    -0x24(%ebp),%eax
c10060f0:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10060f3:	c7 85 bc fd ff ff 18 	movl   $0x19590318,-0x244(%ebp)
c10060fa:	03 59 19 
c10060fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006100:	8b 40 0c             	mov    0xc(%eax),%eax
c1006103:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
c1006109:	c7 85 c4 fd ff ff e8 	movl   $0x3e8,-0x23c(%ebp)
c1006110:	03 00 00 
c1006113:	c7 85 c8 fd ff ff 00 	movl   $0x800,-0x238(%ebp)
c100611a:	08 00 00 
c100611d:	c7 85 cc fd ff ff 01 	movl   $0x801,-0x234(%ebp)
c1006124:	08 00 00 
c1006127:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100612a:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c1006130:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
c1006136:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c100613c:	01 d0                	add    %edx,%eax
c100613e:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
c1006144:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006147:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
c100614d:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
c1006153:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c1006159:	01 d0                	add    %edx,%eax
c100615b:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
c1006161:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006164:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
c100616a:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
c1006170:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1006176:	01 d0                	add    %edx,%eax
c1006178:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
c100617e:	c7 85 e8 fd ff ff 00 	movl   $0x0,-0x218(%ebp)
c1006185:	00 00 00 
c1006188:	c7 85 ec fd ff ff 18 	movl   $0x18,-0x214(%ebp)
c100618f:	00 00 00 
c1006192:	e8 cf ef ff ff       	call   c1005166 <clear>
c1006197:	8b 85 bc fd ff ff    	mov    -0x244(%ebp),%eax
c100619d:	83 ec 08             	sub    $0x8,%esp
c10061a0:	50                   	push   %eax
c10061a1:	68 34 b2 00 c1       	push   $0xc100b234
c10061a6:	e8 b8 f3 ff ff       	call   c1005563 <printk>
c10061ab:	83 c4 10             	add    $0x10,%esp
c10061ae:	8b 85 c0 fd ff ff    	mov    -0x240(%ebp),%eax
c10061b4:	83 ec 08             	sub    $0x8,%esp
c10061b7:	50                   	push   %eax
c10061b8:	68 44 b2 00 c1       	push   $0xc100b244
c10061bd:	e8 a1 f3 ff ff       	call   c1005563 <printk>
c10061c2:	83 c4 10             	add    $0x10,%esp
c10061c5:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
c10061cb:	83 ec 08             	sub    $0x8,%esp
c10061ce:	50                   	push   %eax
c10061cf:	68 56 b2 00 c1       	push   $0xc100b256
c10061d4:	e8 8a f3 ff ff       	call   c1005563 <printk>
c10061d9:	83 c4 10             	add    $0x10,%esp
c10061dc:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c10061e2:	83 ec 08             	sub    $0x8,%esp
c10061e5:	50                   	push   %eax
c10061e6:	68 6a b2 00 c1       	push   $0xc100b26a
c10061eb:	e8 73 f3 ff ff       	call   c1005563 <printk>
c10061f0:	83 c4 10             	add    $0x10,%esp
c10061f3:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c10061f9:	83 ec 08             	sub    $0x8,%esp
c10061fc:	50                   	push   %eax
c10061fd:	68 85 b2 00 c1       	push   $0xc100b285
c1006202:	e8 5c f3 ff ff       	call   c1005563 <printk>
c1006207:	83 c4 10             	add    $0x10,%esp
c100620a:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1006210:	83 ec 08             	sub    $0x8,%esp
c1006213:	50                   	push   %eax
c1006214:	68 a2 b2 00 c1       	push   $0xc100b2a2
c1006219:	e8 45 f3 ff ff       	call   c1005563 <printk>
c100621e:	83 c4 10             	add    $0x10,%esp
c1006221:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c1006227:	83 ec 08             	sub    $0x8,%esp
c100622a:	50                   	push   %eax
c100622b:	68 bd b2 00 c1       	push   $0xc100b2bd
c1006230:	e8 2e f3 ff ff       	call   c1005563 <printk>
c1006235:	83 c4 10             	add    $0x10,%esp
c1006238:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c100623e:	83 ec 08             	sub    $0x8,%esp
c1006241:	50                   	push   %eax
c1006242:	68 da b2 00 c1       	push   $0xc100b2da
c1006247:	e8 17 f3 ff ff       	call   c1005563 <printk>
c100624c:	83 c4 10             	add    $0x10,%esp
c100624f:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1006255:	83 ec 08             	sub    $0x8,%esp
c1006258:	50                   	push   %eax
c1006259:	68 f4 b2 00 c1       	push   $0xc100b2f4
c100625e:	e8 00 f3 ff ff       	call   c1005563 <printk>
c1006263:	83 c4 10             	add    $0x10,%esp
c1006266:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c100626c:	83 ec 08             	sub    $0x8,%esp
c100626f:	50                   	push   %eax
c1006270:	68 10 b3 00 c1       	push   $0xc100b310
c1006275:	e8 e9 f2 ff ff       	call   c1005563 <printk>
c100627a:	83 c4 10             	add    $0x10,%esp
c100627d:	83 ec 04             	sub    $0x4,%esp
c1006280:	6a 01                	push   $0x1
c1006282:	68 00 08 00 00       	push   $0x800
c1006287:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
c100628d:	50                   	push   %eax
c100628e:	e8 b5 fb ff ff       	call   c1005e48 <ide_write>
c1006293:	83 c4 10             	add    $0x10,%esp
c1006296:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c100629c:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c10062a2:	39 c2                	cmp    %eax,%edx
c10062a4:	0f 43 c2             	cmovae %edx,%eax
c10062a7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10062aa:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10062b0:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
c10062b3:	0f 43 45 d4          	cmovae -0x2c(%ebp),%eax
c10062b7:	c1 e0 09             	shl    $0x9,%eax
c10062ba:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10062bd:	83 ec 08             	sub    $0x8,%esp
c10062c0:	6a 02                	push   $0x2
c10062c2:	ff 75 d4             	pushl  -0x2c(%ebp)
c10062c5:	e8 45 c9 ff ff       	call   c1002c0f <vmm_malloc>
c10062ca:	83 c4 10             	add    $0x10,%esp
c10062cd:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10062d0:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10062d3:	0f b6 00             	movzbl (%eax),%eax
c10062d6:	83 c8 01             	or     $0x1,%eax
c10062d9:	89 c2                	mov    %eax,%edx
c10062db:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10062de:	88 10                	mov    %dl,(%eax)
c10062e0:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10062e3:	c1 e8 03             	shr    $0x3,%eax
c10062e6:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10062e9:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10062ec:	83 e0 07             	and    $0x7,%eax
c10062ef:	88 45 cb             	mov    %al,-0x35(%ebp)
c10062f2:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10062f5:	25 ff 01 00 00       	and    $0x1ff,%eax
c10062fa:	ba 00 02 00 00       	mov    $0x200,%edx
c10062ff:	29 c2                	sub    %eax,%edx
c1006301:	89 d0                	mov    %edx,%eax
c1006303:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1006306:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006309:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100630c:	01 d0                	add    %edx,%eax
c100630e:	83 ec 04             	sub    $0x4,%esp
c1006311:	ff 75 c4             	pushl  -0x3c(%ebp)
c1006314:	6a ff                	push   $0xffffffff
c1006316:	50                   	push   %eax
c1006317:	e8 8e 9d ff ff       	call   c10000aa <memset>
c100631c:	83 c4 10             	add    $0x10,%esp
c100631f:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006323:	eb 38                	jmp    c100635d <partition_format+0x2ba>
c1006325:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006328:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100632b:	01 d0                	add    %edx,%eax
c100632d:	0f b6 00             	movzbl (%eax),%eax
c1006330:	89 c2                	mov    %eax,%edx
c1006332:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1006336:	bb 01 00 00 00       	mov    $0x1,%ebx
c100633b:	89 c1                	mov    %eax,%ecx
c100633d:	d3 e3                	shl    %cl,%ebx
c100633f:	89 d8                	mov    %ebx,%eax
c1006341:	f7 d0                	not    %eax
c1006343:	89 d1                	mov    %edx,%ecx
c1006345:	21 c1                	and    %eax,%ecx
c1006347:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100634a:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100634d:	01 d0                	add    %edx,%eax
c100634f:	89 ca                	mov    %ecx,%edx
c1006351:	88 10                	mov    %dl,(%eax)
c1006353:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006357:	83 c0 01             	add    $0x1,%eax
c100635a:	88 45 f7             	mov    %al,-0x9(%ebp)
c100635d:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
c1006361:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1006365:	39 c2                	cmp    %eax,%edx
c1006367:	7c bc                	jl     c1006325 <partition_format+0x282>
c1006369:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
c100636f:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c1006375:	83 ec 04             	sub    $0x4,%esp
c1006378:	52                   	push   %edx
c1006379:	50                   	push   %eax
c100637a:	ff 75 d0             	pushl  -0x30(%ebp)
c100637d:	e8 c6 fa ff ff       	call   c1005e48 <ide_write>
c1006382:	83 c4 10             	add    $0x10,%esp
c1006385:	83 ec 04             	sub    $0x4,%esp
c1006388:	ff 75 d4             	pushl  -0x2c(%ebp)
c100638b:	6a 00                	push   $0x0
c100638d:	ff 75 d0             	pushl  -0x30(%ebp)
c1006390:	e8 15 9d ff ff       	call   c10000aa <memset>
c1006395:	83 c4 10             	add    $0x10,%esp
c1006398:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100639b:	0f b6 00             	movzbl (%eax),%eax
c100639e:	83 c8 01             	or     $0x1,%eax
c10063a1:	89 c2                	mov    %eax,%edx
c10063a3:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10063a6:	88 10                	mov    %dl,(%eax)
c10063a8:	c7 45 cc 7d 00 00 00 	movl   $0x7d,-0x34(%ebp)
c10063af:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
c10063b3:	b8 00 02 00 00       	mov    $0x200,%eax
c10063b8:	2b 45 cc             	sub    -0x34(%ebp),%eax
c10063bb:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c10063be:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10063c1:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10063c4:	01 d0                	add    %edx,%eax
c10063c6:	83 ec 04             	sub    $0x4,%esp
c10063c9:	ff 75 c4             	pushl  -0x3c(%ebp)
c10063cc:	6a ff                	push   $0xffffffff
c10063ce:	50                   	push   %eax
c10063cf:	e8 d6 9c ff ff       	call   c10000aa <memset>
c10063d4:	83 c4 10             	add    $0x10,%esp
c10063d7:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c10063db:	eb 38                	jmp    c1006415 <partition_format+0x372>
c10063dd:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10063e0:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10063e3:	01 d0                	add    %edx,%eax
c10063e5:	0f b6 00             	movzbl (%eax),%eax
c10063e8:	89 c2                	mov    %eax,%edx
c10063ea:	0f be 45 f6          	movsbl -0xa(%ebp),%eax
c10063ee:	bb 01 00 00 00       	mov    $0x1,%ebx
c10063f3:	89 c1                	mov    %eax,%ecx
c10063f5:	d3 e3                	shl    %cl,%ebx
c10063f7:	89 d8                	mov    %ebx,%eax
c10063f9:	f7 d0                	not    %eax
c10063fb:	89 d1                	mov    %edx,%ecx
c10063fd:	21 c1                	and    %eax,%ecx
c10063ff:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006402:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006405:	01 d0                	add    %edx,%eax
c1006407:	89 ca                	mov    %ecx,%edx
c1006409:	88 10                	mov    %dl,(%eax)
c100640b:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c100640f:	83 c0 01             	add    $0x1,%eax
c1006412:	88 45 f6             	mov    %al,-0xa(%ebp)
c1006415:	0f be 55 f6          	movsbl -0xa(%ebp),%edx
c1006419:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c100641d:	39 c2                	cmp    %eax,%edx
c100641f:	7c bc                	jl     c10063dd <partition_format+0x33a>
c1006421:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c1006427:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c100642d:	83 ec 04             	sub    $0x4,%esp
c1006430:	52                   	push   %edx
c1006431:	50                   	push   %eax
c1006432:	ff 75 d0             	pushl  -0x30(%ebp)
c1006435:	e8 0e fa ff ff       	call   c1005e48 <ide_write>
c100643a:	83 c4 10             	add    $0x10,%esp
c100643d:	83 ec 04             	sub    $0x4,%esp
c1006440:	ff 75 d4             	pushl  -0x2c(%ebp)
c1006443:	6a 00                	push   $0x0
c1006445:	ff 75 d0             	pushl  -0x30(%ebp)
c1006448:	e8 5d 9c ff ff       	call   c10000aa <memset>
c100644d:	83 c4 10             	add    $0x10,%esp
c1006450:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006453:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1006456:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
c100645c:	8d 14 00             	lea    (%eax,%eax,1),%edx
c100645f:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1006462:	89 50 04             	mov    %edx,0x4(%eax)
c1006465:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1006468:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100646e:	8b 95 e4 fd ff ff    	mov    -0x21c(%ebp),%edx
c1006474:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1006477:	89 50 10             	mov    %edx,0x10(%eax)
c100647a:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
c1006480:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c1006486:	83 ec 04             	sub    $0x4,%esp
c1006489:	52                   	push   %edx
c100648a:	50                   	push   %eax
c100648b:	ff 75 d0             	pushl  -0x30(%ebp)
c100648e:	e8 b5 f9 ff ff       	call   c1005e48 <ide_write>
c1006493:	83 c4 10             	add    $0x10,%esp
c1006496:	83 ec 04             	sub    $0x4,%esp
c1006499:	ff 75 d4             	pushl  -0x2c(%ebp)
c100649c:	6a 00                	push   $0x0
c100649e:	ff 75 d0             	pushl  -0x30(%ebp)
c10064a1:	e8 04 9c ff ff       	call   c10000aa <memset>
c10064a6:	83 c4 10             	add    $0x10,%esp
c10064a9:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10064ac:	89 45 bc             	mov    %eax,-0x44(%ebp)
c10064af:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10064b2:	83 ec 04             	sub    $0x4,%esp
c10064b5:	6a 01                	push   $0x1
c10064b7:	68 29 b3 00 c1       	push   $0xc100b329
c10064bc:	50                   	push   %eax
c10064bd:	e8 46 9c ff ff       	call   c1000108 <memcpy>
c10064c2:	83 c4 10             	add    $0x10,%esp
c10064c5:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10064c8:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c10064cf:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10064d2:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c10064d9:	83 45 bc 18          	addl   $0x18,-0x44(%ebp)
c10064dd:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10064e0:	83 ec 04             	sub    $0x4,%esp
c10064e3:	6a 02                	push   $0x2
c10064e5:	68 2b b3 00 c1       	push   $0xc100b32b
c10064ea:	50                   	push   %eax
c10064eb:	e8 18 9c ff ff       	call   c1000108 <memcpy>
c10064f0:	83 c4 10             	add    $0x10,%esp
c10064f3:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10064f6:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c10064fd:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006500:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1006507:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c100650d:	83 ec 04             	sub    $0x4,%esp
c1006510:	6a 01                	push   $0x1
c1006512:	50                   	push   %eax
c1006513:	ff 75 d0             	pushl  -0x30(%ebp)
c1006516:	e8 2d f9 ff ff       	call   c1005e48 <ide_write>
c100651b:	83 c4 10             	add    $0x10,%esp
c100651e:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006521:	83 ec 08             	sub    $0x8,%esp
c1006524:	ff 75 d4             	pushl  -0x2c(%ebp)
c1006527:	50                   	push   %eax
c1006528:	e8 07 c8 ff ff       	call   c1002d34 <vmm_free>
c100652d:	83 c4 10             	add    $0x10,%esp
c1006530:	90                   	nop
c1006531:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1006534:	c9                   	leave  
c1006535:	c3                   	ret    

c1006536 <mount_partition>:
c1006536:	55                   	push   %ebp
c1006537:	89 e5                	mov    %esp,%ebp
c1006539:	83 ec 18             	sub    $0x18,%esp
c100653c:	e8 73 f9 ff ff       	call   c1005eb4 <read_main_partition>
c1006541:	a3 30 42 a1 c1       	mov    %eax,0xc1a14230
c1006546:	83 ec 08             	sub    $0x8,%esp
c1006549:	6a 02                	push   $0x2
c100654b:	68 00 02 00 00       	push   $0x200
c1006550:	e8 ba c6 ff ff       	call   c1002c0f <vmm_malloc>
c1006555:	83 c4 10             	add    $0x10,%esp
c1006558:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100655b:	83 ec 04             	sub    $0x4,%esp
c100655e:	68 00 02 00 00       	push   $0x200
c1006563:	6a 00                	push   $0x0
c1006565:	ff 75 f0             	pushl  -0x10(%ebp)
c1006568:	e8 3d 9b ff ff       	call   c10000aa <memset>
c100656d:	83 c4 10             	add    $0x10,%esp
c1006570:	83 ec 04             	sub    $0x4,%esp
c1006573:	6a 01                	push   $0x1
c1006575:	68 00 08 00 00       	push   $0x800
c100657a:	ff 75 f0             	pushl  -0x10(%ebp)
c100657d:	e8 89 f8 ff ff       	call   c1005e0b <ide_read>
c1006582:	83 c4 10             	add    $0x10,%esp
c1006585:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100658a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100658d:	89 50 10             	mov    %edx,0x10(%eax)
c1006590:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006593:	8b 40 14             	mov    0x14(%eax),%eax
c1006596:	c1 e0 09             	shl    $0x9,%eax
c1006599:	83 ec 08             	sub    $0x8,%esp
c100659c:	6a 02                	push   $0x2
c100659e:	50                   	push   %eax
c100659f:	e8 6b c6 ff ff       	call   c1002c0f <vmm_malloc>
c10065a4:	83 c4 10             	add    $0x10,%esp
c10065a7:	89 c2                	mov    %eax,%edx
c10065a9:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10065ae:	89 50 18             	mov    %edx,0x18(%eax)
c10065b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10065b4:	8b 50 14             	mov    0x14(%eax),%edx
c10065b7:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10065bc:	c1 e2 09             	shl    $0x9,%edx
c10065bf:	89 50 14             	mov    %edx,0x14(%eax)
c10065c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10065c5:	8b 48 14             	mov    0x14(%eax),%ecx
c10065c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10065cb:	8b 50 10             	mov    0x10(%eax),%edx
c10065ce:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10065d3:	8b 40 18             	mov    0x18(%eax),%eax
c10065d6:	83 ec 04             	sub    $0x4,%esp
c10065d9:	51                   	push   %ecx
c10065da:	52                   	push   %edx
c10065db:	50                   	push   %eax
c10065dc:	e8 2a f8 ff ff       	call   c1005e0b <ide_read>
c10065e1:	83 c4 10             	add    $0x10,%esp
c10065e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10065e7:	8b 40 1c             	mov    0x1c(%eax),%eax
c10065ea:	c1 e0 09             	shl    $0x9,%eax
c10065ed:	83 ec 08             	sub    $0x8,%esp
c10065f0:	6a 02                	push   $0x2
c10065f2:	50                   	push   %eax
c10065f3:	e8 17 c6 ff ff       	call   c1002c0f <vmm_malloc>
c10065f8:	83 c4 10             	add    $0x10,%esp
c10065fb:	89 c2                	mov    %eax,%edx
c10065fd:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006602:	89 50 20             	mov    %edx,0x20(%eax)
c1006605:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006608:	8b 50 1c             	mov    0x1c(%eax),%edx
c100660b:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006610:	c1 e2 09             	shl    $0x9,%edx
c1006613:	89 50 1c             	mov    %edx,0x1c(%eax)
c1006616:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006619:	8b 48 1c             	mov    0x1c(%eax),%ecx
c100661c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100661f:	8b 50 18             	mov    0x18(%eax),%edx
c1006622:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006627:	8b 40 20             	mov    0x20(%eax),%eax
c100662a:	83 ec 04             	sub    $0x4,%esp
c100662d:	51                   	push   %ecx
c100662e:	52                   	push   %edx
c100662f:	50                   	push   %eax
c1006630:	e8 d6 f7 ff ff       	call   c1005e0b <ide_read>
c1006635:	83 c4 10             	add    $0x10,%esp
c1006638:	e8 29 eb ff ff       	call   c1005166 <clear>
c100663d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006642:	8b 40 10             	mov    0x10(%eax),%eax
c1006645:	8b 00                	mov    (%eax),%eax
c1006647:	83 ec 08             	sub    $0x8,%esp
c100664a:	50                   	push   %eax
c100664b:	68 34 b2 00 c1       	push   $0xc100b234
c1006650:	e8 0e ef ff ff       	call   c1005563 <printk>
c1006655:	83 c4 10             	add    $0x10,%esp
c1006658:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100665d:	8b 40 10             	mov    0x10(%eax),%eax
c1006660:	8b 40 04             	mov    0x4(%eax),%eax
c1006663:	83 ec 08             	sub    $0x8,%esp
c1006666:	50                   	push   %eax
c1006667:	68 44 b2 00 c1       	push   $0xc100b244
c100666c:	e8 f2 ee ff ff       	call   c1005563 <printk>
c1006671:	83 c4 10             	add    $0x10,%esp
c1006674:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006679:	8b 40 10             	mov    0x10(%eax),%eax
c100667c:	8b 40 08             	mov    0x8(%eax),%eax
c100667f:	83 ec 08             	sub    $0x8,%esp
c1006682:	50                   	push   %eax
c1006683:	68 56 b2 00 c1       	push   $0xc100b256
c1006688:	e8 d6 ee ff ff       	call   c1005563 <printk>
c100668d:	83 c4 10             	add    $0x10,%esp
c1006690:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006695:	8b 40 10             	mov    0x10(%eax),%eax
c1006698:	8b 40 10             	mov    0x10(%eax),%eax
c100669b:	83 ec 08             	sub    $0x8,%esp
c100669e:	50                   	push   %eax
c100669f:	68 6a b2 00 c1       	push   $0xc100b26a
c10066a4:	e8 ba ee ff ff       	call   c1005563 <printk>
c10066a9:	83 c4 10             	add    $0x10,%esp
c10066ac:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10066b1:	8b 40 10             	mov    0x10(%eax),%eax
c10066b4:	8b 40 14             	mov    0x14(%eax),%eax
c10066b7:	83 ec 08             	sub    $0x8,%esp
c10066ba:	50                   	push   %eax
c10066bb:	68 85 b2 00 c1       	push   $0xc100b285
c10066c0:	e8 9e ee ff ff       	call   c1005563 <printk>
c10066c5:	83 c4 10             	add    $0x10,%esp
c10066c8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10066cd:	8b 40 10             	mov    0x10(%eax),%eax
c10066d0:	8b 40 18             	mov    0x18(%eax),%eax
c10066d3:	83 ec 08             	sub    $0x8,%esp
c10066d6:	50                   	push   %eax
c10066d7:	68 a2 b2 00 c1       	push   $0xc100b2a2
c10066dc:	e8 82 ee ff ff       	call   c1005563 <printk>
c10066e1:	83 c4 10             	add    $0x10,%esp
c10066e4:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10066e9:	8b 40 10             	mov    0x10(%eax),%eax
c10066ec:	8b 40 1c             	mov    0x1c(%eax),%eax
c10066ef:	83 ec 08             	sub    $0x8,%esp
c10066f2:	50                   	push   %eax
c10066f3:	68 bd b2 00 c1       	push   $0xc100b2bd
c10066f8:	e8 66 ee ff ff       	call   c1005563 <printk>
c10066fd:	83 c4 10             	add    $0x10,%esp
c1006700:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006705:	8b 40 10             	mov    0x10(%eax),%eax
c1006708:	8b 40 20             	mov    0x20(%eax),%eax
c100670b:	83 ec 08             	sub    $0x8,%esp
c100670e:	50                   	push   %eax
c100670f:	68 da b2 00 c1       	push   $0xc100b2da
c1006714:	e8 4a ee ff ff       	call   c1005563 <printk>
c1006719:	83 c4 10             	add    $0x10,%esp
c100671c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006721:	8b 40 10             	mov    0x10(%eax),%eax
c1006724:	8b 40 24             	mov    0x24(%eax),%eax
c1006727:	83 ec 08             	sub    $0x8,%esp
c100672a:	50                   	push   %eax
c100672b:	68 f4 b2 00 c1       	push   $0xc100b2f4
c1006730:	e8 2e ee ff ff       	call   c1005563 <printk>
c1006735:	83 c4 10             	add    $0x10,%esp
c1006738:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100673d:	8b 40 10             	mov    0x10(%eax),%eax
c1006740:	8b 40 28             	mov    0x28(%eax),%eax
c1006743:	83 ec 08             	sub    $0x8,%esp
c1006746:	50                   	push   %eax
c1006747:	68 10 b3 00 c1       	push   $0xc100b310
c100674c:	e8 12 ee ff ff       	call   c1005563 <printk>
c1006751:	83 c4 10             	add    $0x10,%esp
c1006754:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006759:	8b 40 18             	mov    0x18(%eax),%eax
c100675c:	83 ec 08             	sub    $0x8,%esp
c100675f:	50                   	push   %eax
c1006760:	68 30 b3 00 c1       	push   $0xc100b330
c1006765:	e8 f9 ed ff ff       	call   c1005563 <printk>
c100676a:	83 c4 10             	add    $0x10,%esp
c100676d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006772:	8b 40 14             	mov    0x14(%eax),%eax
c1006775:	83 ec 08             	sub    $0x8,%esp
c1006778:	50                   	push   %eax
c1006779:	68 54 b3 00 c1       	push   $0xc100b354
c100677e:	e8 e0 ed ff ff       	call   c1005563 <printk>
c1006783:	83 c4 10             	add    $0x10,%esp
c1006786:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100678b:	8b 40 20             	mov    0x20(%eax),%eax
c100678e:	83 ec 08             	sub    $0x8,%esp
c1006791:	50                   	push   %eax
c1006792:	68 84 b3 00 c1       	push   $0xc100b384
c1006797:	e8 c7 ed ff ff       	call   c1005563 <printk>
c100679c:	83 c4 10             	add    $0x10,%esp
c100679f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10067a4:	8b 40 1c             	mov    0x1c(%eax),%eax
c10067a7:	83 ec 08             	sub    $0x8,%esp
c10067aa:	50                   	push   %eax
c10067ab:	68 a8 b3 00 c1       	push   $0xc100b3a8
c10067b0:	e8 ae ed ff ff       	call   c1005563 <printk>
c10067b5:	83 c4 10             	add    $0x10,%esp
c10067b8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10067bd:	83 ec 0c             	sub    $0xc,%esp
c10067c0:	50                   	push   %eax
c10067c1:	e8 9c 18 00 00       	call   c1008062 <open_root_dir>
c10067c6:	83 c4 10             	add    $0x10,%esp
c10067c9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10067d0:	eb 1d                	jmp    c10067ef <mount_partition+0x2b9>
c10067d2:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10067d5:	8d 42 01             	lea    0x1(%edx),%eax
c10067d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10067db:	89 d0                	mov    %edx,%eax
c10067dd:	01 c0                	add    %eax,%eax
c10067df:	01 d0                	add    %edx,%eax
c10067e1:	c1 e0 02             	shl    $0x2,%eax
c10067e4:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10067e9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10067ef:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c10067f3:	76 dd                	jbe    c10067d2 <mount_partition+0x29c>
c10067f5:	90                   	nop
c10067f6:	90                   	nop
c10067f7:	c9                   	leave  
c10067f8:	c3                   	ret    

c10067f9 <path_parse>:
c10067f9:	55                   	push   %ebp
c10067fa:	89 e5                	mov    %esp,%ebp
c10067fc:	8b 45 08             	mov    0x8(%ebp),%eax
c10067ff:	0f b6 00             	movzbl (%eax),%eax
c1006802:	3c 2f                	cmp    $0x2f,%al
c1006804:	75 27                	jne    c100682d <path_parse+0x34>
c1006806:	83 45 08 01          	addl   $0x1,0x8(%ebp)
c100680a:	8b 45 08             	mov    0x8(%ebp),%eax
c100680d:	0f b6 00             	movzbl (%eax),%eax
c1006810:	3c 2f                	cmp    $0x2f,%al
c1006812:	74 f2                	je     c1006806 <path_parse+0xd>
c1006814:	eb 17                	jmp    c100682d <path_parse+0x34>
c1006816:	8b 55 08             	mov    0x8(%ebp),%edx
c1006819:	8d 42 01             	lea    0x1(%edx),%eax
c100681c:	89 45 08             	mov    %eax,0x8(%ebp)
c100681f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006822:	8d 48 01             	lea    0x1(%eax),%ecx
c1006825:	89 4d 0c             	mov    %ecx,0xc(%ebp)
c1006828:	0f b6 12             	movzbl (%edx),%edx
c100682b:	88 10                	mov    %dl,(%eax)
c100682d:	8b 45 08             	mov    0x8(%ebp),%eax
c1006830:	0f b6 00             	movzbl (%eax),%eax
c1006833:	3c 2f                	cmp    $0x2f,%al
c1006835:	74 0a                	je     c1006841 <path_parse+0x48>
c1006837:	8b 45 08             	mov    0x8(%ebp),%eax
c100683a:	0f b6 00             	movzbl (%eax),%eax
c100683d:	84 c0                	test   %al,%al
c100683f:	75 d5                	jne    c1006816 <path_parse+0x1d>
c1006841:	8b 45 08             	mov    0x8(%ebp),%eax
c1006844:	0f b6 00             	movzbl (%eax),%eax
c1006847:	84 c0                	test   %al,%al
c1006849:	75 07                	jne    c1006852 <path_parse+0x59>
c100684b:	b8 00 00 00 00       	mov    $0x0,%eax
c1006850:	eb 03                	jmp    c1006855 <path_parse+0x5c>
c1006852:	8b 45 08             	mov    0x8(%ebp),%eax
c1006855:	5d                   	pop    %ebp
c1006856:	c3                   	ret    

c1006857 <path_depth_cnt>:
c1006857:	55                   	push   %ebp
c1006858:	89 e5                	mov    %esp,%ebp
c100685a:	83 ec 28             	sub    $0x28,%esp
c100685d:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006861:	75 19                	jne    c100687c <path_depth_cnt+0x25>
c1006863:	68 d5 b3 00 c1       	push   $0xc100b3d5
c1006868:	68 0c ba 00 c1       	push   $0xc100ba0c
c100686d:	68 d1 00 00 00       	push   $0xd1
c1006872:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1006877:	e8 ef 9a ff ff       	call   c100036b <__PANIC>
c100687c:	8b 45 08             	mov    0x8(%ebp),%eax
c100687f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006882:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1006889:	83 ec 08             	sub    $0x8,%esp
c100688c:	8d 45 e0             	lea    -0x20(%ebp),%eax
c100688f:	50                   	push   %eax
c1006890:	ff 75 f4             	pushl  -0xc(%ebp)
c1006893:	e8 61 ff ff ff       	call   c10067f9 <path_parse>
c1006898:	83 c4 10             	add    $0x10,%esp
c100689b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100689e:	eb 32                	jmp    c10068d2 <path_depth_cnt+0x7b>
c10068a0:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10068a4:	83 ec 04             	sub    $0x4,%esp
c10068a7:	6a 10                	push   $0x10
c10068a9:	6a 00                	push   $0x0
c10068ab:	8d 45 e0             	lea    -0x20(%ebp),%eax
c10068ae:	50                   	push   %eax
c10068af:	e8 f6 97 ff ff       	call   c10000aa <memset>
c10068b4:	83 c4 10             	add    $0x10,%esp
c10068b7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10068bb:	74 15                	je     c10068d2 <path_depth_cnt+0x7b>
c10068bd:	83 ec 08             	sub    $0x8,%esp
c10068c0:	8d 45 e0             	lea    -0x20(%ebp),%eax
c10068c3:	50                   	push   %eax
c10068c4:	ff 75 f4             	pushl  -0xc(%ebp)
c10068c7:	e8 2d ff ff ff       	call   c10067f9 <path_parse>
c10068cc:	83 c4 10             	add    $0x10,%esp
c10068cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10068d2:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c10068d6:	84 c0                	test   %al,%al
c10068d8:	75 c6                	jne    c10068a0 <path_depth_cnt+0x49>
c10068da:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10068dd:	c9                   	leave  
c10068de:	c3                   	ret    

c10068df <search_file>:
c10068df:	55                   	push   %ebp
c10068e0:	89 e5                	mov    %esp,%ebp
c10068e2:	57                   	push   %edi
c10068e3:	53                   	push   %ebx
c10068e4:	83 ec 40             	sub    $0x40,%esp
c10068e7:	83 ec 08             	sub    $0x8,%esp
c10068ea:	68 17 b4 00 c1       	push   $0xc100b417
c10068ef:	ff 75 08             	pushl  0x8(%ebp)
c10068f2:	e8 8c 98 ff ff       	call   c1000183 <strcmp>
c10068f7:	83 c4 10             	add    $0x10,%esp
c10068fa:	85 c0                	test   %eax,%eax
c10068fc:	74 2e                	je     c100692c <search_file+0x4d>
c10068fe:	83 ec 08             	sub    $0x8,%esp
c1006901:	68 19 b4 00 c1       	push   $0xc100b419
c1006906:	ff 75 08             	pushl  0x8(%ebp)
c1006909:	e8 75 98 ff ff       	call   c1000183 <strcmp>
c100690e:	83 c4 10             	add    $0x10,%esp
c1006911:	85 c0                	test   %eax,%eax
c1006913:	74 17                	je     c100692c <search_file+0x4d>
c1006915:	83 ec 08             	sub    $0x8,%esp
c1006918:	68 1c b4 00 c1       	push   $0xc100b41c
c100691d:	ff 75 08             	pushl  0x8(%ebp)
c1006920:	e8 5e 98 ff ff       	call   c1000183 <strcmp>
c1006925:	83 c4 10             	add    $0x10,%esp
c1006928:	85 c0                	test   %eax,%eax
c100692a:	75 2c                	jne    c1006958 <search_file+0x79>
c100692c:	8b 15 34 42 a1 c1    	mov    0xc1a14234,%edx
c1006932:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006935:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c100693b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100693e:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1006945:	00 00 00 
c1006948:	8b 45 0c             	mov    0xc(%ebp),%eax
c100694b:	c6 00 00             	movb   $0x0,(%eax)
c100694e:	b8 00 00 00 00       	mov    $0x0,%eax
c1006953:	e9 10 02 00 00       	jmp    c1006b68 <search_file+0x289>
c1006958:	83 ec 0c             	sub    $0xc,%esp
c100695b:	ff 75 08             	pushl  0x8(%ebp)
c100695e:	e8 bb 97 ff ff       	call   c100011e <strlen>
c1006963:	83 c4 10             	add    $0x10,%esp
c1006966:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006969:	8b 45 08             	mov    0x8(%ebp),%eax
c100696c:	0f b6 00             	movzbl (%eax),%eax
c100696f:	3c 2f                	cmp    $0x2f,%al
c1006971:	75 0f                	jne    c1006982 <search_file+0xa3>
c1006973:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1006977:	76 09                	jbe    c1006982 <search_file+0xa3>
c1006979:	81 7d e8 ff 01 00 00 	cmpl   $0x1ff,-0x18(%ebp)
c1006980:	76 19                	jbe    c100699b <search_file+0xbc>
c1006982:	68 20 b4 00 c1       	push   $0xc100b420
c1006987:	68 1c ba 00 c1       	push   $0xc100ba1c
c100698c:	68 ee 00 00 00       	push   $0xee
c1006991:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1006996:	e8 d0 99 ff ff       	call   c100036b <__PANIC>
c100699b:	8b 45 08             	mov    0x8(%ebp),%eax
c100699e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10069a1:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c10069a6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10069a9:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
c10069b0:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
c10069b7:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
c10069be:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
c10069c5:	8b 45 0c             	mov    0xc(%ebp),%eax
c10069c8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10069cb:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c10069d1:	8b 45 0c             	mov    0xc(%ebp),%eax
c10069d4:	c7 80 04 02 00 00 00 	movl   $0x0,0x204(%eax)
c10069db:	00 00 00 
c10069de:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10069e5:	83 ec 08             	sub    $0x8,%esp
c10069e8:	8d 45 c0             	lea    -0x40(%ebp),%eax
c10069eb:	50                   	push   %eax
c10069ec:	ff 75 f4             	pushl  -0xc(%ebp)
c10069ef:	e8 05 fe ff ff       	call   c10067f9 <path_parse>
c10069f4:	83 c4 10             	add    $0x10,%esp
c10069f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10069fa:	e9 1b 01 00 00       	jmp    c1006b1a <search_file+0x23b>
c10069ff:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006a02:	83 ec 0c             	sub    $0xc,%esp
c1006a05:	50                   	push   %eax
c1006a06:	e8 13 97 ff ff       	call   c100011e <strlen>
c1006a0b:	83 c4 10             	add    $0x10,%esp
c1006a0e:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1006a13:	76 19                	jbe    c1006a2e <search_file+0x14f>
c1006a15:	68 60 b4 00 c1       	push   $0xc100b460
c1006a1a:	68 1c ba 00 c1       	push   $0xc100ba1c
c1006a1f:	68 ff 00 00 00       	push   $0xff
c1006a24:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1006a29:	e8 3d 99 ff ff       	call   c100036b <__PANIC>
c1006a2e:	8b 55 0c             	mov    0xc(%ebp),%edx
c1006a31:	89 d0                	mov    %edx,%eax
c1006a33:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1006a38:	89 c3                	mov    %eax,%ebx
c1006a3a:	b8 00 00 00 00       	mov    $0x0,%eax
c1006a3f:	89 df                	mov    %ebx,%edi
c1006a41:	f2 ae                	repnz scas %es:(%edi),%al
c1006a43:	89 c8                	mov    %ecx,%eax
c1006a45:	f7 d0                	not    %eax
c1006a47:	83 e8 01             	sub    $0x1,%eax
c1006a4a:	01 d0                	add    %edx,%eax
c1006a4c:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1006a51:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006a54:	83 ec 08             	sub    $0x8,%esp
c1006a57:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1006a5a:	52                   	push   %edx
c1006a5b:	50                   	push   %eax
c1006a5c:	e8 74 97 ff ff       	call   c10001d5 <strcat>
c1006a61:	83 c4 10             	add    $0x10,%esp
c1006a64:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006a69:	8d 55 d0             	lea    -0x30(%ebp),%edx
c1006a6c:	52                   	push   %edx
c1006a6d:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1006a70:	52                   	push   %edx
c1006a71:	ff 75 f0             	pushl  -0x10(%ebp)
c1006a74:	50                   	push   %eax
c1006a75:	e8 aa 16 00 00       	call   c1008124 <search_dir_entry>
c1006a7a:	83 c4 10             	add    $0x10,%esp
c1006a7d:	84 c0                	test   %al,%al
c1006a7f:	0f 84 8e 00 00 00    	je     c1006b13 <search_file+0x234>
c1006a85:	83 ec 04             	sub    $0x4,%esp
c1006a88:	6a 10                	push   $0x10
c1006a8a:	6a 00                	push   $0x0
c1006a8c:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006a8f:	50                   	push   %eax
c1006a90:	e8 15 96 ff ff       	call   c10000aa <memset>
c1006a95:	83 c4 10             	add    $0x10,%esp
c1006a98:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006a9c:	74 15                	je     c1006ab3 <search_file+0x1d4>
c1006a9e:	83 ec 08             	sub    $0x8,%esp
c1006aa1:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006aa4:	50                   	push   %eax
c1006aa5:	ff 75 f4             	pushl  -0xc(%ebp)
c1006aa8:	e8 4c fd ff ff       	call   c10067f9 <path_parse>
c1006aad:	83 c4 10             	add    $0x10,%esp
c1006ab0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006ab3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006ab6:	83 f8 02             	cmp    $0x2,%eax
c1006ab9:	75 3e                	jne    c1006af9 <search_file+0x21a>
c1006abb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006abe:	8b 00                	mov    (%eax),%eax
c1006ac0:	8b 00                	mov    (%eax),%eax
c1006ac2:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006ac5:	83 ec 0c             	sub    $0xc,%esp
c1006ac8:	ff 75 f0             	pushl  -0x10(%ebp)
c1006acb:	e8 40 18 00 00       	call   c1008310 <dir_close>
c1006ad0:	83 c4 10             	add    $0x10,%esp
c1006ad3:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1006ad6:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006adb:	83 ec 08             	sub    $0x8,%esp
c1006ade:	52                   	push   %edx
c1006adf:	50                   	push   %eax
c1006ae0:	e8 ff 15 00 00       	call   c10080e4 <dir_open>
c1006ae5:	83 c4 10             	add    $0x10,%esp
c1006ae8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006aeb:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006aee:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006af1:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006af7:	eb 21                	jmp    c1006b1a <search_file+0x23b>
c1006af9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006afc:	83 f8 01             	cmp    $0x1,%eax
c1006aff:	75 19                	jne    c1006b1a <search_file+0x23b>
c1006b01:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b04:	c7 80 04 02 00 00 01 	movl   $0x1,0x204(%eax)
c1006b0b:	00 00 00 
c1006b0e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006b11:	eb 55                	jmp    c1006b68 <search_file+0x289>
c1006b13:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006b18:	eb 4e                	jmp    c1006b68 <search_file+0x289>
c1006b1a:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
c1006b1e:	84 c0                	test   %al,%al
c1006b20:	0f 85 d9 fe ff ff    	jne    c10069ff <search_file+0x120>
c1006b26:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b29:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
c1006b2f:	83 ec 0c             	sub    $0xc,%esp
c1006b32:	50                   	push   %eax
c1006b33:	e8 d8 17 00 00       	call   c1008310 <dir_close>
c1006b38:	83 c4 10             	add    $0x10,%esp
c1006b3b:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006b40:	83 ec 08             	sub    $0x8,%esp
c1006b43:	ff 75 ec             	pushl  -0x14(%ebp)
c1006b46:	50                   	push   %eax
c1006b47:	e8 98 15 00 00       	call   c10080e4 <dir_open>
c1006b4c:	83 c4 10             	add    $0x10,%esp
c1006b4f:	8b 55 0c             	mov    0xc(%ebp),%edx
c1006b52:	89 82 00 02 00 00    	mov    %eax,0x200(%edx)
c1006b58:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b5b:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1006b62:	00 00 00 
c1006b65:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006b68:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1006b6b:	5b                   	pop    %ebx
c1006b6c:	5f                   	pop    %edi
c1006b6d:	5d                   	pop    %ebp
c1006b6e:	c3                   	ret    

c1006b6f <sys_open>:
c1006b6f:	55                   	push   %ebp
c1006b70:	89 e5                	mov    %esp,%ebp
c1006b72:	53                   	push   %ebx
c1006b73:	81 ec 34 02 00 00    	sub    $0x234,%esp
c1006b79:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b7c:	88 85 d4 fd ff ff    	mov    %al,-0x22c(%ebp)
c1006b82:	83 ec 0c             	sub    $0xc,%esp
c1006b85:	ff 75 08             	pushl  0x8(%ebp)
c1006b88:	e8 91 95 ff ff       	call   c100011e <strlen>
c1006b8d:	83 c4 10             	add    $0x10,%esp
c1006b90:	8d 50 ff             	lea    -0x1(%eax),%edx
c1006b93:	8b 45 08             	mov    0x8(%ebp),%eax
c1006b96:	01 d0                	add    %edx,%eax
c1006b98:	0f b6 00             	movzbl (%eax),%eax
c1006b9b:	3c 2f                	cmp    $0x2f,%al
c1006b9d:	75 1d                	jne    c1006bbc <sys_open+0x4d>
c1006b9f:	83 ec 08             	sub    $0x8,%esp
c1006ba2:	ff 75 08             	pushl  0x8(%ebp)
c1006ba5:	68 8d b4 00 c1       	push   $0xc100b48d
c1006baa:	e8 b4 e9 ff ff       	call   c1005563 <printk>
c1006baf:	83 c4 10             	add    $0x10,%esp
c1006bb2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006bb7:	e9 0a 02 00 00       	jmp    c1006dc6 <sys_open+0x257>
c1006bbc:	80 bd d4 fd ff ff 07 	cmpb   $0x7,-0x22c(%ebp)
c1006bc3:	76 19                	jbe    c1006bde <sys_open+0x6f>
c1006bc5:	68 a8 b4 00 c1       	push   $0xc100b4a8
c1006bca:	68 28 ba 00 c1       	push   $0xc100ba28
c1006bcf:	68 2d 01 00 00       	push   $0x12d
c1006bd4:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1006bd9:	e8 8d 97 ff ff       	call   c100036b <__PANIC>
c1006bde:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006be5:	83 ec 04             	sub    $0x4,%esp
c1006be8:	68 08 02 00 00       	push   $0x208
c1006bed:	6a 00                	push   $0x0
c1006bef:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006bf5:	50                   	push   %eax
c1006bf6:	e8 af 94 ff ff       	call   c10000aa <memset>
c1006bfb:	83 c4 10             	add    $0x10,%esp
c1006bfe:	83 ec 0c             	sub    $0xc,%esp
c1006c01:	ff 75 08             	pushl  0x8(%ebp)
c1006c04:	e8 4e fc ff ff       	call   c1006857 <path_depth_cnt>
c1006c09:	83 c4 10             	add    $0x10,%esp
c1006c0c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006c0f:	83 ec 08             	sub    $0x8,%esp
c1006c12:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006c18:	50                   	push   %eax
c1006c19:	ff 75 08             	pushl  0x8(%ebp)
c1006c1c:	e8 be fc ff ff       	call   c10068df <search_file>
c1006c21:	83 c4 10             	add    $0x10,%esp
c1006c24:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006c27:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
c1006c2b:	0f 95 c0             	setne  %al
c1006c2e:	88 45 eb             	mov    %al,-0x15(%ebp)
c1006c31:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006c34:	83 f8 02             	cmp    $0x2,%eax
c1006c37:	75 29                	jne    c1006c62 <sys_open+0xf3>
c1006c39:	83 ec 0c             	sub    $0xc,%esp
c1006c3c:	68 b4 b4 00 c1       	push   $0xc100b4b4
c1006c41:	e8 1d e9 ff ff       	call   c1005563 <printk>
c1006c46:	83 c4 10             	add    $0x10,%esp
c1006c49:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006c4c:	83 ec 0c             	sub    $0xc,%esp
c1006c4f:	50                   	push   %eax
c1006c50:	e8 bb 16 00 00       	call   c1008310 <dir_close>
c1006c55:	83 c4 10             	add    $0x10,%esp
c1006c58:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006c5d:	e9 64 01 00 00       	jmp    c1006dc6 <sys_open+0x257>
c1006c62:	83 ec 0c             	sub    $0xc,%esp
c1006c65:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006c6b:	50                   	push   %eax
c1006c6c:	e8 e6 fb ff ff       	call   c1006857 <path_depth_cnt>
c1006c71:	83 c4 10             	add    $0x10,%esp
c1006c74:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006c77:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006c7a:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1006c7d:	74 33                	je     c1006cb2 <sys_open+0x143>
c1006c7f:	83 ec 04             	sub    $0x4,%esp
c1006c82:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006c88:	50                   	push   %eax
c1006c89:	ff 75 08             	pushl  0x8(%ebp)
c1006c8c:	68 f4 b4 00 c1       	push   $0xc100b4f4
c1006c91:	e8 cd e8 ff ff       	call   c1005563 <printk>
c1006c96:	83 c4 10             	add    $0x10,%esp
c1006c99:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006c9c:	83 ec 0c             	sub    $0xc,%esp
c1006c9f:	50                   	push   %eax
c1006ca0:	e8 6b 16 00 00       	call   c1008310 <dir_close>
c1006ca5:	83 c4 10             	add    $0x10,%esp
c1006ca8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006cad:	e9 14 01 00 00       	jmp    c1006dc6 <sys_open+0x257>
c1006cb2:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006cb6:	75 56                	jne    c1006d0e <sys_open+0x19f>
c1006cb8:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006cbf:	83 e0 04             	and    $0x4,%eax
c1006cc2:	85 c0                	test   %eax,%eax
c1006cc4:	75 48                	jne    c1006d0e <sys_open+0x19f>
c1006cc6:	83 ec 08             	sub    $0x8,%esp
c1006cc9:	6a 2f                	push   $0x2f
c1006ccb:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006cd1:	50                   	push   %eax
c1006cd2:	e8 bf 94 ff ff       	call   c1000196 <strrchr>
c1006cd7:	83 c4 10             	add    $0x10,%esp
c1006cda:	83 c0 01             	add    $0x1,%eax
c1006cdd:	83 ec 04             	sub    $0x4,%esp
c1006ce0:	50                   	push   %eax
c1006ce1:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006ce7:	50                   	push   %eax
c1006ce8:	68 30 b5 00 c1       	push   $0xc100b530
c1006ced:	e8 71 e8 ff ff       	call   c1005563 <printk>
c1006cf2:	83 c4 10             	add    $0x10,%esp
c1006cf5:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006cf8:	83 ec 0c             	sub    $0xc,%esp
c1006cfb:	50                   	push   %eax
c1006cfc:	e8 0f 16 00 00       	call   c1008310 <dir_close>
c1006d01:	83 c4 10             	add    $0x10,%esp
c1006d04:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006d09:	e9 b8 00 00 00       	jmp    c1006dc6 <sys_open+0x257>
c1006d0e:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006d12:	74 37                	je     c1006d4b <sys_open+0x1dc>
c1006d14:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006d1b:	83 e0 04             	and    $0x4,%eax
c1006d1e:	85 c0                	test   %eax,%eax
c1006d20:	74 29                	je     c1006d4b <sys_open+0x1dc>
c1006d22:	83 ec 08             	sub    $0x8,%esp
c1006d25:	ff 75 08             	pushl  0x8(%ebp)
c1006d28:	68 50 b5 00 c1       	push   $0xc100b550
c1006d2d:	e8 31 e8 ff ff       	call   c1005563 <printk>
c1006d32:	83 c4 10             	add    $0x10,%esp
c1006d35:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006d38:	83 ec 0c             	sub    $0xc,%esp
c1006d3b:	50                   	push   %eax
c1006d3c:	e8 cf 15 00 00       	call   c1008310 <dir_close>
c1006d41:	83 c4 10             	add    $0x10,%esp
c1006d44:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006d49:	eb 7b                	jmp    c1006dc6 <sys_open+0x257>
c1006d4b:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006d52:	83 e0 04             	and    $0x4,%eax
c1006d55:	83 f8 04             	cmp    $0x4,%eax
c1006d58:	75 4f                	jne    c1006da9 <sys_open+0x23a>
c1006d5a:	83 ec 0c             	sub    $0xc,%esp
c1006d5d:	68 67 b5 00 c1       	push   $0xc100b567
c1006d62:	e8 fc e7 ff ff       	call   c1005563 <printk>
c1006d67:	83 c4 10             	add    $0x10,%esp
c1006d6a:	0f b6 9d d4 fd ff ff 	movzbl -0x22c(%ebp),%ebx
c1006d71:	83 ec 08             	sub    $0x8,%esp
c1006d74:	6a 2f                	push   $0x2f
c1006d76:	ff 75 08             	pushl  0x8(%ebp)
c1006d79:	e8 18 94 ff ff       	call   c1000196 <strrchr>
c1006d7e:	83 c4 10             	add    $0x10,%esp
c1006d81:	8d 50 01             	lea    0x1(%eax),%edx
c1006d84:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006d87:	83 ec 04             	sub    $0x4,%esp
c1006d8a:	53                   	push   %ebx
c1006d8b:	52                   	push   %edx
c1006d8c:	50                   	push   %eax
c1006d8d:	e8 88 24 00 00       	call   c100921a <file_create>
c1006d92:	83 c4 10             	add    $0x10,%esp
c1006d95:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006d98:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006d9b:	83 ec 0c             	sub    $0xc,%esp
c1006d9e:	50                   	push   %eax
c1006d9f:	e8 6c 15 00 00       	call   c1008310 <dir_close>
c1006da4:	83 c4 10             	add    $0x10,%esp
c1006da7:	eb 1a                	jmp    c1006dc3 <sys_open+0x254>
c1006da9:	0f b6 95 d4 fd ff ff 	movzbl -0x22c(%ebp),%edx
c1006db0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006db3:	83 ec 08             	sub    $0x8,%esp
c1006db6:	52                   	push   %edx
c1006db7:	50                   	push   %eax
c1006db8:	e8 3f 27 00 00       	call   c10094fc <file_open>
c1006dbd:	83 c4 10             	add    $0x10,%esp
c1006dc0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006dc3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006dc6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1006dc9:	c9                   	leave  
c1006dca:	c3                   	ret    

c1006dcb <fd_local2global>:
c1006dcb:	55                   	push   %ebp
c1006dcc:	89 e5                	mov    %esp,%ebp
c1006dce:	83 ec 18             	sub    $0x18,%esp
c1006dd1:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1006dd6:	8b 55 08             	mov    0x8(%ebp),%edx
c1006dd9:	83 c2 1c             	add    $0x1c,%edx
c1006ddc:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c1006de0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006de3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006de7:	78 06                	js     c1006def <fd_local2global+0x24>
c1006de9:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006ded:	7e 19                	jle    c1006e08 <fd_local2global+0x3d>
c1006def:	68 78 b5 00 c1       	push   $0xc100b578
c1006df4:	68 34 ba 00 c1       	push   $0xc100ba34
c1006df9:	68 6c 01 00 00       	push   $0x16c
c1006dfe:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1006e03:	e8 63 95 ff ff       	call   c100036b <__PANIC>
c1006e08:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006e0b:	c9                   	leave  
c1006e0c:	c3                   	ret    

c1006e0d <sys_close>:
c1006e0d:	55                   	push   %ebp
c1006e0e:	89 e5                	mov    %esp,%ebp
c1006e10:	83 ec 18             	sub    $0x18,%esp
c1006e13:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006e1a:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c1006e1e:	7e 45                	jle    c1006e65 <sys_close+0x58>
c1006e20:	8b 45 08             	mov    0x8(%ebp),%eax
c1006e23:	83 ec 0c             	sub    $0xc,%esp
c1006e26:	50                   	push   %eax
c1006e27:	e8 9f ff ff ff       	call   c1006dcb <fd_local2global>
c1006e2c:	83 c4 10             	add    $0x10,%esp
c1006e2f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006e32:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006e35:	89 d0                	mov    %edx,%eax
c1006e37:	01 c0                	add    %eax,%eax
c1006e39:	01 d0                	add    %edx,%eax
c1006e3b:	c1 e0 02             	shl    $0x2,%eax
c1006e3e:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1006e43:	83 ec 0c             	sub    $0xc,%esp
c1006e46:	50                   	push   %eax
c1006e47:	e8 c7 27 00 00       	call   c1009613 <file_close>
c1006e4c:	83 c4 10             	add    $0x10,%esp
c1006e4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006e52:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1006e57:	8b 55 08             	mov    0x8(%ebp),%edx
c1006e5a:	83 c2 1c             	add    $0x1c,%edx
c1006e5d:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c1006e64:	ff 
c1006e65:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006e68:	c9                   	leave  
c1006e69:	c3                   	ret    

c1006e6a <sys_write>:
c1006e6a:	55                   	push   %ebp
c1006e6b:	89 e5                	mov    %esp,%ebp
c1006e6d:	57                   	push   %edi
c1006e6e:	81 ec 14 04 00 00    	sub    $0x414,%esp
c1006e74:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006e78:	79 1a                	jns    c1006e94 <sys_write+0x2a>
c1006e7a:	83 ec 0c             	sub    $0xc,%esp
c1006e7d:	68 a4 b5 00 c1       	push   $0xc100b5a4
c1006e82:	e8 dc e6 ff ff       	call   c1005563 <printk>
c1006e87:	83 c4 10             	add    $0x10,%esp
c1006e8a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006e8f:	e9 d4 00 00 00       	jmp    c1006f68 <sys_write+0xfe>
c1006e94:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1006e98:	75 5d                	jne    c1006ef7 <sys_write+0x8d>
c1006e9a:	c7 85 ec fb ff ff 00 	movl   $0x0,-0x414(%ebp)
c1006ea1:	00 00 00 
c1006ea4:	8d 95 f0 fb ff ff    	lea    -0x410(%ebp),%edx
c1006eaa:	b8 00 00 00 00       	mov    $0x0,%eax
c1006eaf:	b9 ff 00 00 00       	mov    $0xff,%ecx
c1006eb4:	89 d7                	mov    %edx,%edi
c1006eb6:	f3 ab                	rep stos %eax,%es:(%edi)
c1006eb8:	83 ec 04             	sub    $0x4,%esp
c1006ebb:	ff 75 10             	pushl  0x10(%ebp)
c1006ebe:	ff 75 0c             	pushl  0xc(%ebp)
c1006ec1:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c1006ec7:	50                   	push   %eax
c1006ec8:	e8 3b 92 ff ff       	call   c1000108 <memcpy>
c1006ecd:	83 c4 10             	add    $0x10,%esp
c1006ed0:	83 ec 0c             	sub    $0xc,%esp
c1006ed3:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c1006ed9:	50                   	push   %eax
c1006eda:	e8 84 e6 ff ff       	call   c1005563 <printk>
c1006edf:	83 c4 10             	add    $0x10,%esp
c1006ee2:	83 ec 0c             	sub    $0xc,%esp
c1006ee5:	68 b9 b5 00 c1       	push   $0xc100b5b9
c1006eea:	e8 74 e6 ff ff       	call   c1005563 <printk>
c1006eef:	83 c4 10             	add    $0x10,%esp
c1006ef2:	8b 45 10             	mov    0x10(%ebp),%eax
c1006ef5:	eb 71                	jmp    c1006f68 <sys_write+0xfe>
c1006ef7:	8b 45 08             	mov    0x8(%ebp),%eax
c1006efa:	83 ec 0c             	sub    $0xc,%esp
c1006efd:	50                   	push   %eax
c1006efe:	e8 c8 fe ff ff       	call   c1006dcb <fd_local2global>
c1006f03:	83 c4 10             	add    $0x10,%esp
c1006f06:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006f09:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006f0c:	89 d0                	mov    %edx,%eax
c1006f0e:	01 c0                	add    %eax,%eax
c1006f10:	01 d0                	add    %edx,%eax
c1006f12:	c1 e0 02             	shl    $0x2,%eax
c1006f15:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1006f1a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006f1d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006f20:	8b 40 04             	mov    0x4(%eax),%eax
c1006f23:	83 e0 01             	and    $0x1,%eax
c1006f26:	85 c0                	test   %eax,%eax
c1006f28:	75 0d                	jne    c1006f37 <sys_write+0xcd>
c1006f2a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006f2d:	8b 40 04             	mov    0x4(%eax),%eax
c1006f30:	83 e0 02             	and    $0x2,%eax
c1006f33:	85 c0                	test   %eax,%eax
c1006f35:	74 1c                	je     c1006f53 <sys_write+0xe9>
c1006f37:	83 ec 04             	sub    $0x4,%esp
c1006f3a:	ff 75 10             	pushl  0x10(%ebp)
c1006f3d:	ff 75 0c             	pushl  0xc(%ebp)
c1006f40:	ff 75 f0             	pushl  -0x10(%ebp)
c1006f43:	e8 0b 27 00 00       	call   c1009653 <file_write>
c1006f48:	83 c4 10             	add    $0x10,%esp
c1006f4b:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006f4e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006f51:	eb 15                	jmp    c1006f68 <sys_write+0xfe>
c1006f53:	83 ec 0c             	sub    $0xc,%esp
c1006f56:	68 bc b5 00 c1       	push   $0xc100b5bc
c1006f5b:	e8 03 e6 ff ff       	call   c1005563 <printk>
c1006f60:	83 c4 10             	add    $0x10,%esp
c1006f63:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006f68:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1006f6b:	c9                   	leave  
c1006f6c:	c3                   	ret    

c1006f6d <sys_read>:
c1006f6d:	55                   	push   %ebp
c1006f6e:	89 e5                	mov    %esp,%ebp
c1006f70:	83 ec 18             	sub    $0x18,%esp
c1006f73:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
c1006f77:	75 19                	jne    c1006f92 <sys_read+0x25>
c1006f79:	68 02 b6 00 c1       	push   $0xc100b602
c1006f7e:	68 44 ba 00 c1       	push   $0xc100ba44
c1006f83:	68 93 01 00 00       	push   $0x193
c1006f88:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1006f8d:	e8 d9 93 ff ff       	call   c100036b <__PANIC>
c1006f92:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006f99:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006f9d:	78 0c                	js     c1006fab <sys_read+0x3e>
c1006f9f:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1006fa3:	74 06                	je     c1006fab <sys_read+0x3e>
c1006fa5:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c1006fa9:	75 15                	jne    c1006fc0 <sys_read+0x53>
c1006fab:	83 ec 0c             	sub    $0xc,%esp
c1006fae:	68 0e b6 00 c1       	push   $0xc100b60e
c1006fb3:	e8 ab e5 ff ff       	call   c1005563 <printk>
c1006fb8:	83 c4 10             	add    $0x10,%esp
c1006fbb:	e9 a0 00 00 00       	jmp    c1007060 <sys_read+0xf3>
c1006fc0:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006fc4:	75 62                	jne    c1007028 <sys_read+0xbb>
c1006fc6:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006fc9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006fcc:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1006fd3:	0f b6 05 6c fc 00 c1 	movzbl 0xc100fc6c,%eax
c1006fda:	84 c0                	test   %al,%al
c1006fdc:	75 2d                	jne    c100700b <sys_read+0x9e>
c1006fde:	83 ec 0c             	sub    $0xc,%esp
c1006fe1:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1006fe6:	e8 2c ea ff ff       	call   c1005a17 <sema_down>
c1006feb:	83 c4 10             	add    $0x10,%esp
c1006fee:	eb 1b                	jmp    c100700b <sys_read+0x9e>
c1006ff0:	0f b6 15 6c fc 00 c1 	movzbl 0xc100fc6c,%edx
c1006ff7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006ffa:	88 10                	mov    %dl,(%eax)
c1006ffc:	c6 05 6c fc 00 c1 00 	movb   $0x0,0xc100fc6c
c1007003:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1007007:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100700b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100700e:	3b 45 10             	cmp    0x10(%ebp),%eax
c1007011:	72 dd                	jb     c1006ff0 <sys_read+0x83>
c1007013:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1007017:	74 05                	je     c100701e <sys_read+0xb1>
c1007019:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100701c:	eb 05                	jmp    c1007023 <sys_read+0xb6>
c100701e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007023:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007026:	eb 38                	jmp    c1007060 <sys_read+0xf3>
c1007028:	8b 45 08             	mov    0x8(%ebp),%eax
c100702b:	83 ec 0c             	sub    $0xc,%esp
c100702e:	50                   	push   %eax
c100702f:	e8 97 fd ff ff       	call   c1006dcb <fd_local2global>
c1007034:	83 c4 10             	add    $0x10,%esp
c1007037:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100703a:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100703d:	89 d0                	mov    %edx,%eax
c100703f:	01 c0                	add    %eax,%eax
c1007041:	01 d0                	add    %edx,%eax
c1007043:	c1 e0 02             	shl    $0x2,%eax
c1007046:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100704b:	83 ec 04             	sub    $0x4,%esp
c100704e:	ff 75 10             	pushl  0x10(%ebp)
c1007051:	ff 75 0c             	pushl  0xc(%ebp)
c1007054:	50                   	push   %eax
c1007055:	e8 5b 2d 00 00       	call   c1009db5 <file_read>
c100705a:	83 c4 10             	add    $0x10,%esp
c100705d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007060:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007063:	c9                   	leave  
c1007064:	c3                   	ret    

c1007065 <sys_lseek>:
c1007065:	55                   	push   %ebp
c1007066:	89 e5                	mov    %esp,%ebp
c1007068:	83 ec 28             	sub    $0x28,%esp
c100706b:	8b 45 10             	mov    0x10(%ebp),%eax
c100706e:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1007071:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007075:	79 1a                	jns    c1007091 <sys_lseek+0x2c>
c1007077:	83 ec 0c             	sub    $0xc,%esp
c100707a:	68 22 b6 00 c1       	push   $0xc100b622
c100707f:	e8 df e4 ff ff       	call   c1005563 <printk>
c1007084:	83 c4 10             	add    $0x10,%esp
c1007087:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100708c:	e9 be 00 00 00       	jmp    c100714f <sys_lseek+0xea>
c1007091:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
c1007095:	74 06                	je     c100709d <sys_lseek+0x38>
c1007097:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
c100709b:	76 19                	jbe    c10070b6 <sys_lseek+0x51>
c100709d:	68 37 b6 00 c1       	push   $0xc100b637
c10070a2:	68 50 ba 00 c1       	push   $0xc100ba50
c10070a7:	68 b3 01 00 00       	push   $0x1b3
c10070ac:	68 e8 b3 00 c1       	push   $0xc100b3e8
c10070b1:	e8 b5 92 ff ff       	call   c100036b <__PANIC>
c10070b6:	8b 45 08             	mov    0x8(%ebp),%eax
c10070b9:	83 ec 0c             	sub    $0xc,%esp
c10070bc:	50                   	push   %eax
c10070bd:	e8 09 fd ff ff       	call   c1006dcb <fd_local2global>
c10070c2:	83 c4 10             	add    $0x10,%esp
c10070c5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10070c8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10070cb:	89 d0                	mov    %edx,%eax
c10070cd:	01 c0                	add    %eax,%eax
c10070cf:	01 d0                	add    %edx,%eax
c10070d1:	c1 e0 02             	shl    $0x2,%eax
c10070d4:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10070d9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10070dc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10070e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10070e6:	8b 40 08             	mov    0x8(%eax),%eax
c10070e9:	8b 40 04             	mov    0x4(%eax),%eax
c10070ec:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10070ef:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10070f3:	83 f8 03             	cmp    $0x3,%eax
c10070f6:	74 2a                	je     c1007122 <sys_lseek+0xbd>
c10070f8:	83 f8 03             	cmp    $0x3,%eax
c10070fb:	7f 30                	jg     c100712d <sys_lseek+0xc8>
c10070fd:	83 f8 01             	cmp    $0x1,%eax
c1007100:	74 07                	je     c1007109 <sys_lseek+0xa4>
c1007102:	83 f8 02             	cmp    $0x2,%eax
c1007105:	74 0a                	je     c1007111 <sys_lseek+0xac>
c1007107:	eb 24                	jmp    c100712d <sys_lseek+0xc8>
c1007109:	8b 45 0c             	mov    0xc(%ebp),%eax
c100710c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100710f:	eb 1c                	jmp    c100712d <sys_lseek+0xc8>
c1007111:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007114:	8b 00                	mov    (%eax),%eax
c1007116:	89 c2                	mov    %eax,%edx
c1007118:	8b 45 0c             	mov    0xc(%ebp),%eax
c100711b:	01 d0                	add    %edx,%eax
c100711d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007120:	eb 0b                	jmp    c100712d <sys_lseek+0xc8>
c1007122:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1007125:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007128:	01 d0                	add    %edx,%eax
c100712a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100712d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1007131:	78 08                	js     c100713b <sys_lseek+0xd6>
c1007133:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007136:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1007139:	7f 07                	jg     c1007142 <sys_lseek+0xdd>
c100713b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007140:	eb 0d                	jmp    c100714f <sys_lseek+0xea>
c1007142:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007145:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007148:	89 10                	mov    %edx,(%eax)
c100714a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100714d:	8b 00                	mov    (%eax),%eax
c100714f:	c9                   	leave  
c1007150:	c3                   	ret    

c1007151 <sys_unlink>:
c1007151:	55                   	push   %ebp
c1007152:	89 e5                	mov    %esp,%ebp
c1007154:	81 ec 28 02 00 00    	sub    $0x228,%esp
c100715a:	83 ec 0c             	sub    $0xc,%esp
c100715d:	ff 75 08             	pushl  0x8(%ebp)
c1007160:	e8 b9 8f ff ff       	call   c100011e <strlen>
c1007165:	83 c4 10             	add    $0x10,%esp
c1007168:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c100716d:	76 19                	jbe    c1007188 <sys_unlink+0x37>
c100716f:	68 50 b6 00 c1       	push   $0xc100b650
c1007174:	68 5c ba 00 c1       	push   $0xc100ba5c
c1007179:	68 cd 01 00 00       	push   $0x1cd
c100717e:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1007183:	e8 e3 91 ff ff       	call   c100036b <__PANIC>
c1007188:	83 ec 04             	sub    $0x4,%esp
c100718b:	68 08 02 00 00       	push   $0x208
c1007190:	6a 00                	push   $0x0
c1007192:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1007198:	50                   	push   %eax
c1007199:	e8 0c 8f ff ff       	call   c10000aa <memset>
c100719e:	83 c4 10             	add    $0x10,%esp
c10071a1:	83 ec 08             	sub    $0x8,%esp
c10071a4:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c10071aa:	50                   	push   %eax
c10071ab:	ff 75 08             	pushl  0x8(%ebp)
c10071ae:	e8 2c f7 ff ff       	call   c10068df <search_file>
c10071b3:	83 c4 10             	add    $0x10,%esp
c10071b6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10071b9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c10071bd:	75 19                	jne    c10071d8 <sys_unlink+0x87>
c10071bf:	68 70 b6 00 c1       	push   $0xc100b670
c10071c4:	68 5c ba 00 c1       	push   $0xc100ba5c
c10071c9:	68 d3 01 00 00       	push   $0x1d3
c10071ce:	68 e8 b3 00 c1       	push   $0xc100b3e8
c10071d3:	e8 93 91 ff ff       	call   c100036b <__PANIC>
c10071d8:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10071dc:	75 2c                	jne    c100720a <sys_unlink+0xb9>
c10071de:	83 ec 08             	sub    $0x8,%esp
c10071e1:	ff 75 08             	pushl  0x8(%ebp)
c10071e4:	68 7e b6 00 c1       	push   $0xc100b67e
c10071e9:	e8 75 e3 ff ff       	call   c1005563 <printk>
c10071ee:	83 c4 10             	add    $0x10,%esp
c10071f1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10071f4:	83 ec 0c             	sub    $0xc,%esp
c10071f7:	50                   	push   %eax
c10071f8:	e8 13 11 00 00       	call   c1008310 <dir_close>
c10071fd:	83 c4 10             	add    $0x10,%esp
c1007200:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007205:	e9 65 01 00 00       	jmp    c100736f <sys_unlink+0x21e>
c100720a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100720d:	83 f8 02             	cmp    $0x2,%eax
c1007210:	75 29                	jne    c100723b <sys_unlink+0xea>
c1007212:	83 ec 0c             	sub    $0xc,%esp
c1007215:	68 94 b6 00 c1       	push   $0xc100b694
c100721a:	e8 44 e3 ff ff       	call   c1005563 <printk>
c100721f:	83 c4 10             	add    $0x10,%esp
c1007222:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007225:	83 ec 0c             	sub    $0xc,%esp
c1007228:	50                   	push   %eax
c1007229:	e8 e2 10 00 00       	call   c1008310 <dir_close>
c100722e:	83 c4 10             	add    $0x10,%esp
c1007231:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007236:	e9 34 01 00 00       	jmp    c100736f <sys_unlink+0x21e>
c100723b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007242:	eb 37                	jmp    c100727b <sys_unlink+0x12a>
c1007244:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007247:	89 d0                	mov    %edx,%eax
c1007249:	01 c0                	add    %eax,%eax
c100724b:	01 d0                	add    %edx,%eax
c100724d:	c1 e0 02             	shl    $0x2,%eax
c1007250:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1007255:	8b 00                	mov    (%eax),%eax
c1007257:	85 c0                	test   %eax,%eax
c1007259:	74 1c                	je     c1007277 <sys_unlink+0x126>
c100725b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100725e:	89 d0                	mov    %edx,%eax
c1007260:	01 c0                	add    %eax,%eax
c1007262:	01 d0                	add    %edx,%eax
c1007264:	c1 e0 02             	shl    $0x2,%eax
c1007267:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100726c:	8b 00                	mov    (%eax),%eax
c100726e:	8b 10                	mov    (%eax),%edx
c1007270:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007273:	39 c2                	cmp    %eax,%edx
c1007275:	74 0c                	je     c1007283 <sys_unlink+0x132>
c1007277:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100727b:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c100727f:	76 c3                	jbe    c1007244 <sys_unlink+0xf3>
c1007281:	eb 01                	jmp    c1007284 <sys_unlink+0x133>
c1007283:	90                   	nop
c1007284:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1007288:	77 2c                	ja     c10072b6 <sys_unlink+0x165>
c100728a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100728d:	83 ec 0c             	sub    $0xc,%esp
c1007290:	50                   	push   %eax
c1007291:	e8 7a 10 00 00       	call   c1008310 <dir_close>
c1007296:	83 c4 10             	add    $0x10,%esp
c1007299:	83 ec 08             	sub    $0x8,%esp
c100729c:	ff 75 08             	pushl  0x8(%ebp)
c100729f:	68 d4 b6 00 c1       	push   $0xc100b6d4
c10072a4:	e8 ba e2 ff ff       	call   c1005563 <printk>
c10072a9:	83 c4 10             	add    $0x10,%esp
c10072ac:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10072b1:	e9 b9 00 00 00       	jmp    c100736f <sys_unlink+0x21e>
c10072b6:	83 7d f4 20          	cmpl   $0x20,-0xc(%ebp)
c10072ba:	74 19                	je     c10072d5 <sys_unlink+0x184>
c10072bc:	68 fd b6 00 c1       	push   $0xc100b6fd
c10072c1:	68 5c ba 00 c1       	push   $0xc100ba5c
c10072c6:	68 ec 01 00 00       	push   $0x1ec
c10072cb:	68 e8 b3 00 c1       	push   $0xc100b3e8
c10072d0:	e8 96 90 ff ff       	call   c100036b <__PANIC>
c10072d5:	83 ec 08             	sub    $0x8,%esp
c10072d8:	6a 02                	push   $0x2
c10072da:	68 00 04 00 00       	push   $0x400
c10072df:	e8 2b b9 ff ff       	call   c1002c0f <vmm_malloc>
c10072e4:	83 c4 10             	add    $0x10,%esp
c10072e7:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10072ea:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10072ee:	75 26                	jne    c1007316 <sys_unlink+0x1c5>
c10072f0:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10072f3:	83 ec 0c             	sub    $0xc,%esp
c10072f6:	50                   	push   %eax
c10072f7:	e8 14 10 00 00       	call   c1008310 <dir_close>
c10072fc:	83 c4 10             	add    $0x10,%esp
c10072ff:	83 ec 0c             	sub    $0xc,%esp
c1007302:	68 18 b7 00 c1       	push   $0xc100b718
c1007307:	e8 57 e2 ff ff       	call   c1005563 <printk>
c100730c:	83 c4 10             	add    $0x10,%esp
c100730f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007314:	eb 59                	jmp    c100736f <sys_unlink+0x21e>
c1007316:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007319:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100731c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007321:	ff 75 ec             	pushl  -0x14(%ebp)
c1007324:	ff 75 f0             	pushl  -0x10(%ebp)
c1007327:	ff 75 e8             	pushl  -0x18(%ebp)
c100732a:	50                   	push   %eax
c100732b:	e8 c1 14 00 00       	call   c10087f1 <delete_dir_entry>
c1007330:	83 c4 10             	add    $0x10,%esp
c1007333:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007338:	83 ec 08             	sub    $0x8,%esp
c100733b:	ff 75 f0             	pushl  -0x10(%ebp)
c100733e:	50                   	push   %eax
c100733f:	e8 7d 31 00 00       	call   c100a4c1 <inode_release>
c1007344:	83 c4 10             	add    $0x10,%esp
c1007347:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100734a:	83 ec 08             	sub    $0x8,%esp
c100734d:	68 00 04 00 00       	push   $0x400
c1007352:	50                   	push   %eax
c1007353:	e8 dc b9 ff ff       	call   c1002d34 <vmm_free>
c1007358:	83 c4 10             	add    $0x10,%esp
c100735b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100735e:	83 ec 0c             	sub    $0xc,%esp
c1007361:	50                   	push   %eax
c1007362:	e8 a9 0f 00 00       	call   c1008310 <dir_close>
c1007367:	83 c4 10             	add    $0x10,%esp
c100736a:	b8 00 00 00 00       	mov    $0x0,%eax
c100736f:	c9                   	leave  
c1007370:	c3                   	ret    

c1007371 <sys_mkdir>:
c1007371:	55                   	push   %ebp
c1007372:	89 e5                	mov    %esp,%ebp
c1007374:	53                   	push   %ebx
c1007375:	81 ec a4 02 00 00    	sub    $0x2a4,%esp
c100737b:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100737f:	83 ec 08             	sub    $0x8,%esp
c1007382:	6a 02                	push   $0x2
c1007384:	68 00 04 00 00       	push   $0x400
c1007389:	e8 81 b8 ff ff       	call   c1002c0f <vmm_malloc>
c100738e:	83 c4 10             	add    $0x10,%esp
c1007391:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007394:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1007398:	75 1a                	jne    c10073b4 <sys_mkdir+0x43>
c100739a:	83 ec 0c             	sub    $0xc,%esp
c100739d:	68 40 b7 00 c1       	push   $0xc100b740
c10073a2:	e8 bc e1 ff ff       	call   c1005563 <printk>
c10073a7:	83 c4 10             	add    $0x10,%esp
c10073aa:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10073af:	e9 f2 03 00 00       	jmp    c10077a6 <sys_mkdir+0x435>
c10073b4:	83 ec 04             	sub    $0x4,%esp
c10073b7:	68 08 02 00 00       	push   $0x208
c10073bc:	6a 00                	push   $0x0
c10073be:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10073c4:	50                   	push   %eax
c10073c5:	e8 e0 8c ff ff       	call   c10000aa <memset>
c10073ca:	83 c4 10             	add    $0x10,%esp
c10073cd:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
c10073d4:	83 ec 08             	sub    $0x8,%esp
c10073d7:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10073dd:	50                   	push   %eax
c10073de:	ff 75 08             	pushl  0x8(%ebp)
c10073e1:	e8 f9 f4 ff ff       	call   c10068df <search_file>
c10073e6:	83 c4 10             	add    $0x10,%esp
c10073e9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10073ec:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10073f0:	74 1c                	je     c100740e <sys_mkdir+0x9d>
c10073f2:	83 ec 08             	sub    $0x8,%esp
c10073f5:	ff 75 08             	pushl  0x8(%ebp)
c10073f8:	68 6c b7 00 c1       	push   $0xc100b76c
c10073fd:	e8 61 e1 ff ff       	call   c1005563 <printk>
c1007402:	83 c4 10             	add    $0x10,%esp
c1007405:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1007409:	e9 08 03 00 00       	jmp    c1007716 <sys_mkdir+0x3a5>
c100740e:	83 ec 0c             	sub    $0xc,%esp
c1007411:	ff 75 08             	pushl  0x8(%ebp)
c1007414:	e8 3e f4 ff ff       	call   c1006857 <path_depth_cnt>
c1007419:	83 c4 10             	add    $0x10,%esp
c100741c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100741f:	83 ec 0c             	sub    $0xc,%esp
c1007422:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1007428:	50                   	push   %eax
c1007429:	e8 29 f4 ff ff       	call   c1006857 <path_depth_cnt>
c100742e:	83 c4 10             	add    $0x10,%esp
c1007431:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007434:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007437:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c100743a:	74 23                	je     c100745f <sys_mkdir+0xee>
c100743c:	83 ec 04             	sub    $0x4,%esp
c100743f:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1007445:	50                   	push   %eax
c1007446:	ff 75 08             	pushl  0x8(%ebp)
c1007449:	68 94 b7 00 c1       	push   $0xc100b794
c100744e:	e8 10 e1 ff ff       	call   c1005563 <printk>
c1007453:	83 c4 10             	add    $0x10,%esp
c1007456:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c100745a:	e9 b7 02 00 00       	jmp    c1007716 <sys_mkdir+0x3a5>
c100745f:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007462:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007465:	83 ec 08             	sub    $0x8,%esp
c1007468:	6a 2f                	push   $0x2f
c100746a:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1007470:	50                   	push   %eax
c1007471:	e8 20 8d ff ff       	call   c1000196 <strrchr>
c1007476:	83 c4 10             	add    $0x10,%esp
c1007479:	83 c0 01             	add    $0x1,%eax
c100747c:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100747f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007484:	83 ec 0c             	sub    $0xc,%esp
c1007487:	50                   	push   %eax
c1007488:	e8 7b 1b 00 00       	call   c1009008 <inode_bitmap_alloc>
c100748d:	83 c4 10             	add    $0x10,%esp
c1007490:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007493:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007497:	75 19                	jne    c10074b2 <sys_mkdir+0x141>
c1007499:	83 ec 0c             	sub    $0xc,%esp
c100749c:	68 c8 b7 00 c1       	push   $0xc100b7c8
c10074a1:	e8 bd e0 ff ff       	call   c1005563 <printk>
c10074a6:	83 c4 10             	add    $0x10,%esp
c10074a9:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10074ad:	e9 64 02 00 00       	jmp    c1007716 <sys_mkdir+0x3a5>
c10074b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10074b5:	83 ec 08             	sub    $0x8,%esp
c10074b8:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c10074be:	52                   	push   %edx
c10074bf:	50                   	push   %eax
c10074c0:	e8 c1 32 00 00       	call   c100a786 <inode_init>
c10074c5:	83 c4 10             	add    $0x10,%esp
c10074c8:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
c10074cf:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
c10074d6:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10074db:	83 ec 0c             	sub    $0xc,%esp
c10074de:	50                   	push   %eax
c10074df:	e8 e4 1b 00 00       	call   c10090c8 <block_bitmap_alloc>
c10074e4:	83 c4 10             	add    $0x10,%esp
c10074e7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10074ea:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
c10074ee:	75 19                	jne    c1007509 <sys_mkdir+0x198>
c10074f0:	83 ec 0c             	sub    $0xc,%esp
c10074f3:	68 ec b7 00 c1       	push   $0xc100b7ec
c10074f8:	e8 66 e0 ff ff       	call   c1005563 <printk>
c10074fd:	83 c4 10             	add    $0x10,%esp
c1007500:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1007504:	e9 0d 02 00 00       	jmp    c1007716 <sys_mkdir+0x3a5>
c1007509:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100750c:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
c1007512:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1007515:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100751a:	8b 40 10             	mov    0x10(%eax),%eax
c100751d:	8b 40 28             	mov    0x28(%eax),%eax
c1007520:	29 c2                	sub    %eax,%edx
c1007522:	89 d0                	mov    %edx,%eax
c1007524:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007527:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
c100752b:	75 19                	jne    c1007546 <sys_mkdir+0x1d5>
c100752d:	68 27 b8 00 c1       	push   $0xc100b827
c1007532:	68 68 ba 00 c1       	push   $0xc100ba68
c1007537:	68 34 02 00 00       	push   $0x234
c100753c:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1007541:	e8 25 8e ff ff       	call   c100036b <__PANIC>
c1007546:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100754b:	83 ec 04             	sub    $0x4,%esp
c100754e:	6a 01                	push   $0x1
c1007550:	ff 75 d8             	pushl  -0x28(%ebp)
c1007553:	50                   	push   %eax
c1007554:	e8 3d 1c 00 00       	call   c1009196 <bitmap_sync>
c1007559:	83 c4 10             	add    $0x10,%esp
c100755c:	83 ec 04             	sub    $0x4,%esp
c100755f:	68 00 04 00 00       	push   $0x400
c1007564:	6a 00                	push   $0x0
c1007566:	ff 75 ec             	pushl  -0x14(%ebp)
c1007569:	e8 3c 8b ff ff       	call   c10000aa <memset>
c100756e:	83 c4 10             	add    $0x10,%esp
c1007571:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007574:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007577:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100757a:	83 ec 04             	sub    $0x4,%esp
c100757d:	6a 01                	push   $0x1
c100757f:	68 29 b3 00 c1       	push   $0xc100b329
c1007584:	50                   	push   %eax
c1007585:	e8 7e 8b ff ff       	call   c1000108 <memcpy>
c100758a:	83 c4 10             	add    $0x10,%esp
c100758d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007590:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007593:	89 50 10             	mov    %edx,0x10(%eax)
c1007596:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007599:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c10075a0:	83 45 d0 18          	addl   $0x18,-0x30(%ebp)
c10075a4:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10075a7:	83 ec 04             	sub    $0x4,%esp
c10075aa:	6a 02                	push   $0x2
c10075ac:	68 2b b3 00 c1       	push   $0xc100b32b
c10075b1:	50                   	push   %eax
c10075b2:	e8 51 8b ff ff       	call   c1000108 <memcpy>
c10075b7:	83 c4 10             	add    $0x10,%esp
c10075ba:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10075bd:	8b 00                	mov    (%eax),%eax
c10075bf:	8b 10                	mov    (%eax),%edx
c10075c1:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10075c4:	89 50 10             	mov    %edx,0x10(%eax)
c10075c7:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10075ca:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c10075d1:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
c10075d7:	83 ec 04             	sub    $0x4,%esp
c10075da:	6a 01                	push   $0x1
c10075dc:	50                   	push   %eax
c10075dd:	ff 75 ec             	pushl  -0x14(%ebp)
c10075e0:	e8 63 e8 ff ff       	call   c1005e48 <ide_write>
c10075e5:	83 c4 10             	add    $0x10,%esp
c10075e8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10075ed:	8b 40 10             	mov    0x10(%eax),%eax
c10075f0:	8b 40 30             	mov    0x30(%eax),%eax
c10075f3:	01 c0                	add    %eax,%eax
c10075f5:	89 85 80 fd ff ff    	mov    %eax,-0x280(%ebp)
c10075fb:	83 ec 04             	sub    $0x4,%esp
c10075fe:	6a 18                	push   $0x18
c1007600:	6a 00                	push   $0x0
c1007602:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c1007608:	50                   	push   %eax
c1007609:	e8 9c 8a ff ff       	call   c10000aa <memset>
c100760e:	83 c4 10             	add    $0x10,%esp
c1007611:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007614:	8d 95 64 fd ff ff    	lea    -0x29c(%ebp),%edx
c100761a:	52                   	push   %edx
c100761b:	6a 02                	push   $0x2
c100761d:	50                   	push   %eax
c100761e:	ff 75 dc             	pushl  -0x24(%ebp)
c1007621:	e8 24 0d 00 00       	call   c100834a <create_dir_entry>
c1007626:	83 c4 10             	add    $0x10,%esp
c1007629:	83 ec 04             	sub    $0x4,%esp
c100762c:	68 00 04 00 00       	push   $0x400
c1007631:	6a 00                	push   $0x0
c1007633:	ff 75 ec             	pushl  -0x14(%ebp)
c1007636:	e8 6f 8a ff ff       	call   c10000aa <memset>
c100763b:	83 c4 10             	add    $0x10,%esp
c100763e:	83 ec 04             	sub    $0x4,%esp
c1007641:	ff 75 ec             	pushl  -0x14(%ebp)
c1007644:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c100764a:	50                   	push   %eax
c100764b:	ff 75 e0             	pushl  -0x20(%ebp)
c100764e:	e8 63 0d 00 00       	call   c10083b6 <sync_dir_entry>
c1007653:	83 c4 10             	add    $0x10,%esp
c1007656:	85 c0                	test   %eax,%eax
c1007658:	75 19                	jne    c1007673 <sys_mkdir+0x302>
c100765a:	83 ec 0c             	sub    $0xc,%esp
c100765d:	68 40 b8 00 c1       	push   $0xc100b840
c1007662:	e8 fc de ff ff       	call   c1005563 <printk>
c1007667:	83 c4 10             	add    $0x10,%esp
c100766a:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c100766e:	e9 a3 00 00 00       	jmp    c1007716 <sys_mkdir+0x3a5>
c1007673:	83 ec 04             	sub    $0x4,%esp
c1007676:	68 00 04 00 00       	push   $0x400
c100767b:	6a 00                	push   $0x0
c100767d:	ff 75 ec             	pushl  -0x14(%ebp)
c1007680:	e8 25 8a ff ff       	call   c10000aa <memset>
c1007685:	83 c4 10             	add    $0x10,%esp
c1007688:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100768b:	8b 10                	mov    (%eax),%edx
c100768d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007692:	83 ec 04             	sub    $0x4,%esp
c1007695:	ff 75 ec             	pushl  -0x14(%ebp)
c1007698:	52                   	push   %edx
c1007699:	50                   	push   %eax
c100769a:	e8 15 2b 00 00       	call   c100a1b4 <inode_sync>
c100769f:	83 c4 10             	add    $0x10,%esp
c10076a2:	83 ec 04             	sub    $0x4,%esp
c10076a5:	68 00 04 00 00       	push   $0x400
c10076aa:	6a 00                	push   $0x0
c10076ac:	ff 75 ec             	pushl  -0x14(%ebp)
c10076af:	e8 f6 89 ff ff       	call   c10000aa <memset>
c10076b4:	83 c4 10             	add    $0x10,%esp
c10076b7:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10076bc:	83 ec 04             	sub    $0x4,%esp
c10076bf:	ff 75 ec             	pushl  -0x14(%ebp)
c10076c2:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c10076c8:	52                   	push   %edx
c10076c9:	50                   	push   %eax
c10076ca:	e8 e5 2a 00 00       	call   c100a1b4 <inode_sync>
c10076cf:	83 c4 10             	add    $0x10,%esp
c10076d2:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10076d5:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10076da:	83 ec 04             	sub    $0x4,%esp
c10076dd:	6a 00                	push   $0x0
c10076df:	52                   	push   %edx
c10076e0:	50                   	push   %eax
c10076e1:	e8 b0 1a 00 00       	call   c1009196 <bitmap_sync>
c10076e6:	83 c4 10             	add    $0x10,%esp
c10076e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10076ec:	83 ec 08             	sub    $0x8,%esp
c10076ef:	68 00 04 00 00       	push   $0x400
c10076f4:	50                   	push   %eax
c10076f5:	e8 3a b6 ff ff       	call   c1002d34 <vmm_free>
c10076fa:	83 c4 10             	add    $0x10,%esp
c10076fd:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007700:	83 ec 0c             	sub    $0xc,%esp
c1007703:	50                   	push   %eax
c1007704:	e8 07 0c 00 00       	call   c1008310 <dir_close>
c1007709:	83 c4 10             	add    $0x10,%esp
c100770c:	b8 00 00 00 00       	mov    $0x0,%eax
c1007711:	e9 90 00 00 00       	jmp    c10077a6 <sys_mkdir+0x435>
c1007716:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100771a:	83 f8 01             	cmp    $0x1,%eax
c100771d:	74 5e                	je     c100777d <sys_mkdir+0x40c>
c100771f:	83 f8 02             	cmp    $0x2,%eax
c1007722:	75 69                	jne    c100778d <sys_mkdir+0x41c>
c1007724:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007727:	8d 50 07             	lea    0x7(%eax),%edx
c100772a:	85 c0                	test   %eax,%eax
c100772c:	0f 48 c2             	cmovs  %edx,%eax
c100772f:	c1 f8 03             	sar    $0x3,%eax
c1007732:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1007735:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007738:	99                   	cltd   
c1007739:	c1 ea 1d             	shr    $0x1d,%edx
c100773c:	01 d0                	add    %edx,%eax
c100773e:	83 e0 07             	and    $0x7,%eax
c1007741:	29 d0                	sub    %edx,%eax
c1007743:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1007746:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100774b:	8b 50 20             	mov    0x20(%eax),%edx
c100774e:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007751:	01 d0                	add    %edx,%eax
c1007753:	0f b6 00             	movzbl (%eax),%eax
c1007756:	89 c2                	mov    %eax,%edx
c1007758:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100775b:	bb 01 00 00 00       	mov    $0x1,%ebx
c1007760:	89 c1                	mov    %eax,%ecx
c1007762:	d3 e3                	shl    %cl,%ebx
c1007764:	89 d8                	mov    %ebx,%eax
c1007766:	f7 d0                	not    %eax
c1007768:	89 d1                	mov    %edx,%ecx
c100776a:	21 c1                	and    %eax,%ecx
c100776c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007771:	8b 50 20             	mov    0x20(%eax),%edx
c1007774:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007777:	01 d0                	add    %edx,%eax
c1007779:	89 ca                	mov    %ecx,%edx
c100777b:	88 10                	mov    %dl,(%eax)
c100777d:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007780:	83 ec 0c             	sub    $0xc,%esp
c1007783:	50                   	push   %eax
c1007784:	e8 87 0b 00 00       	call   c1008310 <dir_close>
c1007789:	83 c4 10             	add    $0x10,%esp
c100778c:	90                   	nop
c100778d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007790:	83 ec 08             	sub    $0x8,%esp
c1007793:	68 00 04 00 00       	push   $0x400
c1007798:	50                   	push   %eax
c1007799:	e8 96 b5 ff ff       	call   c1002d34 <vmm_free>
c100779e:	83 c4 10             	add    $0x10,%esp
c10077a1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10077a6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10077a9:	c9                   	leave  
c10077aa:	c3                   	ret    

c10077ab <sys_opendir>:
c10077ab:	55                   	push   %ebp
c10077ac:	89 e5                	mov    %esp,%ebp
c10077ae:	81 ec 18 02 00 00    	sub    $0x218,%esp
c10077b4:	83 ec 0c             	sub    $0xc,%esp
c10077b7:	ff 75 08             	pushl  0x8(%ebp)
c10077ba:	e8 5f 89 ff ff       	call   c100011e <strlen>
c10077bf:	83 c4 10             	add    $0x10,%esp
c10077c2:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c10077c7:	76 19                	jbe    c10077e2 <sys_opendir+0x37>
c10077c9:	68 6b b8 00 c1       	push   $0xc100b86b
c10077ce:	68 74 ba 00 c1       	push   $0xc100ba74
c10077d3:	68 76 02 00 00       	push   $0x276
c10077d8:	68 e8 b3 00 c1       	push   $0xc100b3e8
c10077dd:	e8 89 8b ff ff       	call   c100036b <__PANIC>
c10077e2:	8b 45 08             	mov    0x8(%ebp),%eax
c10077e5:	0f b6 00             	movzbl (%eax),%eax
c10077e8:	3c 2f                	cmp    $0x2f,%al
c10077ea:	75 21                	jne    c100780d <sys_opendir+0x62>
c10077ec:	8b 45 08             	mov    0x8(%ebp),%eax
c10077ef:	83 c0 01             	add    $0x1,%eax
c10077f2:	0f b6 00             	movzbl (%eax),%eax
c10077f5:	84 c0                	test   %al,%al
c10077f7:	74 0a                	je     c1007803 <sys_opendir+0x58>
c10077f9:	8b 45 08             	mov    0x8(%ebp),%eax
c10077fc:	0f b6 00             	movzbl (%eax),%eax
c10077ff:	3c 2e                	cmp    $0x2e,%al
c1007801:	75 0a                	jne    c100780d <sys_opendir+0x62>
c1007803:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c1007808:	e9 a9 00 00 00       	jmp    c10078b6 <sys_opendir+0x10b>
c100780d:	83 ec 04             	sub    $0x4,%esp
c1007810:	68 08 02 00 00       	push   $0x208
c1007815:	6a 00                	push   $0x0
c1007817:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c100781d:	50                   	push   %eax
c100781e:	e8 87 88 ff ff       	call   c10000aa <memset>
c1007823:	83 c4 10             	add    $0x10,%esp
c1007826:	83 ec 08             	sub    $0x8,%esp
c1007829:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c100782f:	50                   	push   %eax
c1007830:	ff 75 08             	pushl  0x8(%ebp)
c1007833:	e8 a7 f0 ff ff       	call   c10068df <search_file>
c1007838:	83 c4 10             	add    $0x10,%esp
c100783b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100783e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007845:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007849:	75 1c                	jne    c1007867 <sys_opendir+0xbc>
c100784b:	83 ec 04             	sub    $0x4,%esp
c100784e:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007854:	50                   	push   %eax
c1007855:	ff 75 08             	pushl  0x8(%ebp)
c1007858:	68 87 b8 00 c1       	push   $0xc100b887
c100785d:	e8 01 dd ff ff       	call   c1005563 <printk>
c1007862:	83 c4 10             	add    $0x10,%esp
c1007865:	eb 3d                	jmp    c10078a4 <sys_opendir+0xf9>
c1007867:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100786a:	83 f8 01             	cmp    $0x1,%eax
c100786d:	75 15                	jne    c1007884 <sys_opendir+0xd9>
c100786f:	83 ec 08             	sub    $0x8,%esp
c1007872:	ff 75 08             	pushl  0x8(%ebp)
c1007875:	68 a5 b8 00 c1       	push   $0xc100b8a5
c100787a:	e8 e4 dc ff ff       	call   c1005563 <printk>
c100787f:	83 c4 10             	add    $0x10,%esp
c1007882:	eb 20                	jmp    c10078a4 <sys_opendir+0xf9>
c1007884:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007887:	83 f8 02             	cmp    $0x2,%eax
c100788a:	75 18                	jne    c10078a4 <sys_opendir+0xf9>
c100788c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100788f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007894:	83 ec 08             	sub    $0x8,%esp
c1007897:	52                   	push   %edx
c1007898:	50                   	push   %eax
c1007899:	e8 46 08 00 00       	call   c10080e4 <dir_open>
c100789e:	83 c4 10             	add    $0x10,%esp
c10078a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10078a4:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10078a7:	83 ec 0c             	sub    $0xc,%esp
c10078aa:	50                   	push   %eax
c10078ab:	e8 60 0a 00 00       	call   c1008310 <dir_close>
c10078b0:	83 c4 10             	add    $0x10,%esp
c10078b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10078b6:	c9                   	leave  
c10078b7:	c3                   	ret    

c10078b8 <sys_closedir>:
c10078b8:	55                   	push   %ebp
c10078b9:	89 e5                	mov    %esp,%ebp
c10078bb:	83 ec 18             	sub    $0x18,%esp
c10078be:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10078c5:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10078c9:	74 15                	je     c10078e0 <sys_closedir+0x28>
c10078cb:	83 ec 0c             	sub    $0xc,%esp
c10078ce:	ff 75 08             	pushl  0x8(%ebp)
c10078d1:	e8 3a 0a 00 00       	call   c1008310 <dir_close>
c10078d6:	83 c4 10             	add    $0x10,%esp
c10078d9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10078e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10078e3:	c9                   	leave  
c10078e4:	c3                   	ret    

c10078e5 <sys_readdir>:
c10078e5:	55                   	push   %ebp
c10078e6:	89 e5                	mov    %esp,%ebp
c10078e8:	83 ec 08             	sub    $0x8,%esp
c10078eb:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10078ef:	75 19                	jne    c100790a <sys_readdir+0x25>
c10078f1:	68 ba b8 00 c1       	push   $0xc100b8ba
c10078f6:	68 80 ba 00 c1       	push   $0xc100ba80
c10078fb:	68 99 02 00 00       	push   $0x299
c1007900:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1007905:	e8 61 8a ff ff       	call   c100036b <__PANIC>
c100790a:	83 ec 0c             	sub    $0xc,%esp
c100790d:	ff 75 08             	pushl  0x8(%ebp)
c1007910:	e8 7e 13 00 00       	call   c1008c93 <dir_read>
c1007915:	83 c4 10             	add    $0x10,%esp
c1007918:	c9                   	leave  
c1007919:	c3                   	ret    

c100791a <sys_rewinddir>:
c100791a:	55                   	push   %ebp
c100791b:	89 e5                	mov    %esp,%ebp
c100791d:	8b 45 08             	mov    0x8(%ebp),%eax
c1007920:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1007927:	90                   	nop
c1007928:	5d                   	pop    %ebp
c1007929:	c3                   	ret    

c100792a <sys_rmdir>:
c100792a:	55                   	push   %ebp
c100792b:	89 e5                	mov    %esp,%ebp
c100792d:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1007933:	83 ec 04             	sub    $0x4,%esp
c1007936:	68 08 02 00 00       	push   $0x208
c100793b:	6a 00                	push   $0x0
c100793d:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007943:	50                   	push   %eax
c1007944:	e8 61 87 ff ff       	call   c10000aa <memset>
c1007949:	83 c4 10             	add    $0x10,%esp
c100794c:	83 ec 08             	sub    $0x8,%esp
c100794f:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007955:	50                   	push   %eax
c1007956:	ff 75 08             	pushl  0x8(%ebp)
c1007959:	e8 81 ef ff ff       	call   c10068df <search_file>
c100795e:	83 c4 10             	add    $0x10,%esp
c1007961:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007964:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007968:	75 19                	jne    c1007983 <sys_rmdir+0x59>
c100796a:	68 70 b6 00 c1       	push   $0xc100b670
c100796f:	68 8c ba 00 c1       	push   $0xc100ba8c
c1007974:	68 a7 02 00 00       	push   $0x2a7
c1007979:	68 e8 b3 00 c1       	push   $0xc100b3e8
c100797e:	e8 e8 89 ff ff       	call   c100036b <__PANIC>
c1007983:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c100798a:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c100798e:	75 1f                	jne    c10079af <sys_rmdir+0x85>
c1007990:	83 ec 04             	sub    $0x4,%esp
c1007993:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007999:	50                   	push   %eax
c100799a:	ff 75 08             	pushl  0x8(%ebp)
c100799d:	68 87 b8 00 c1       	push   $0xc100b887
c10079a2:	e8 bc db ff ff       	call   c1005563 <printk>
c10079a7:	83 c4 10             	add    $0x10,%esp
c10079aa:	e9 87 00 00 00       	jmp    c1007a36 <sys_rmdir+0x10c>
c10079af:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10079b2:	83 f8 01             	cmp    $0x1,%eax
c10079b5:	75 15                	jne    c10079cc <sys_rmdir+0xa2>
c10079b7:	83 ec 08             	sub    $0x8,%esp
c10079ba:	ff 75 08             	pushl  0x8(%ebp)
c10079bd:	68 a5 b8 00 c1       	push   $0xc100b8a5
c10079c2:	e8 9c db ff ff       	call   c1005563 <printk>
c10079c7:	83 c4 10             	add    $0x10,%esp
c10079ca:	eb 6a                	jmp    c1007a36 <sys_rmdir+0x10c>
c10079cc:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10079cf:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10079d4:	83 ec 08             	sub    $0x8,%esp
c10079d7:	52                   	push   %edx
c10079d8:	50                   	push   %eax
c10079d9:	e8 06 07 00 00       	call   c10080e4 <dir_open>
c10079de:	83 c4 10             	add    $0x10,%esp
c10079e1:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10079e4:	83 ec 0c             	sub    $0xc,%esp
c10079e7:	ff 75 ec             	pushl  -0x14(%ebp)
c10079ea:	e8 79 14 00 00       	call   c1008e68 <dir_is_empty>
c10079ef:	83 c4 10             	add    $0x10,%esp
c10079f2:	85 c0                	test   %eax,%eax
c10079f4:	75 15                	jne    c1007a0b <sys_rmdir+0xe1>
c10079f6:	83 ec 08             	sub    $0x8,%esp
c10079f9:	ff 75 08             	pushl  0x8(%ebp)
c10079fc:	68 c8 b8 00 c1       	push   $0xc100b8c8
c1007a01:	e8 5d db ff ff       	call   c1005563 <printk>
c1007a06:	83 c4 10             	add    $0x10,%esp
c1007a09:	eb 1d                	jmp    c1007a28 <sys_rmdir+0xfe>
c1007a0b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007a0e:	83 ec 08             	sub    $0x8,%esp
c1007a11:	ff 75 ec             	pushl  -0x14(%ebp)
c1007a14:	50                   	push   %eax
c1007a15:	e8 76 14 00 00       	call   c1008e90 <dir_remove>
c1007a1a:	83 c4 10             	add    $0x10,%esp
c1007a1d:	85 c0                	test   %eax,%eax
c1007a1f:	75 07                	jne    c1007a28 <sys_rmdir+0xfe>
c1007a21:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007a28:	83 ec 0c             	sub    $0xc,%esp
c1007a2b:	ff 75 ec             	pushl  -0x14(%ebp)
c1007a2e:	e8 dd 08 00 00       	call   c1008310 <dir_close>
c1007a33:	83 c4 10             	add    $0x10,%esp
c1007a36:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007a39:	83 ec 0c             	sub    $0xc,%esp
c1007a3c:	50                   	push   %eax
c1007a3d:	e8 ce 08 00 00       	call   c1008310 <dir_close>
c1007a42:	83 c4 10             	add    $0x10,%esp
c1007a45:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007a48:	c9                   	leave  
c1007a49:	c3                   	ret    

c1007a4a <get_parent_dir_inode_nr>:
c1007a4a:	55                   	push   %ebp
c1007a4b:	89 e5                	mov    %esp,%ebp
c1007a4d:	83 ec 18             	sub    $0x18,%esp
c1007a50:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007a55:	83 ec 08             	sub    $0x8,%esp
c1007a58:	ff 75 08             	pushl  0x8(%ebp)
c1007a5b:	50                   	push   %eax
c1007a5c:	e8 74 28 00 00       	call   c100a2d5 <inode_open>
c1007a61:	83 c4 10             	add    $0x10,%esp
c1007a64:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007a67:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007a6a:	8b 40 10             	mov    0x10(%eax),%eax
c1007a6d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007a70:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007a75:	8b 40 10             	mov    0x10(%eax),%eax
c1007a78:	8b 40 28             	mov    0x28(%eax),%eax
c1007a7b:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1007a7e:	73 19                	jae    c1007a99 <get_parent_dir_inode_nr+0x4f>
c1007a80:	68 10 b9 00 c1       	push   $0xc100b910
c1007a85:	68 98 ba 00 c1       	push   $0xc100ba98
c1007a8a:	68 c2 02 00 00       	push   $0x2c2
c1007a8f:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1007a94:	e8 d2 88 ff ff       	call   c100036b <__PANIC>
c1007a99:	83 ec 0c             	sub    $0xc,%esp
c1007a9c:	ff 75 f4             	pushl  -0xc(%ebp)
c1007a9f:	e8 07 29 00 00       	call   c100a3ab <inode_close>
c1007aa4:	83 c4 10             	add    $0x10,%esp
c1007aa7:	83 ec 04             	sub    $0x4,%esp
c1007aaa:	6a 01                	push   $0x1
c1007aac:	ff 75 f0             	pushl  -0x10(%ebp)
c1007aaf:	ff 75 0c             	pushl  0xc(%ebp)
c1007ab2:	e8 54 e3 ff ff       	call   c1005e0b <ide_read>
c1007ab7:	83 c4 10             	add    $0x10,%esp
c1007aba:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007abd:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007ac0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007ac3:	83 c0 18             	add    $0x18,%eax
c1007ac6:	8b 40 10             	mov    0x10(%eax),%eax
c1007ac9:	3d ff 0f 00 00       	cmp    $0xfff,%eax
c1007ace:	77 0e                	ja     c1007ade <get_parent_dir_inode_nr+0x94>
c1007ad0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007ad3:	83 c0 18             	add    $0x18,%eax
c1007ad6:	8b 40 14             	mov    0x14(%eax),%eax
c1007ad9:	83 f8 02             	cmp    $0x2,%eax
c1007adc:	74 19                	je     c1007af7 <get_parent_dir_inode_nr+0xad>
c1007ade:	68 3c b9 00 c1       	push   $0xc100b93c
c1007ae3:	68 98 ba 00 c1       	push   $0xc100ba98
c1007ae8:	68 c7 02 00 00       	push   $0x2c7
c1007aed:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1007af2:	e8 74 88 ff ff       	call   c100036b <__PANIC>
c1007af7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007afa:	83 c0 18             	add    $0x18,%eax
c1007afd:	8b 40 10             	mov    0x10(%eax),%eax
c1007b00:	c9                   	leave  
c1007b01:	c3                   	ret    

c1007b02 <get_child_dir_name>:
c1007b02:	55                   	push   %ebp
c1007b03:	89 e5                	mov    %esp,%ebp
c1007b05:	57                   	push   %edi
c1007b06:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1007b0c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007b11:	83 ec 08             	sub    $0x8,%esp
c1007b14:	ff 75 08             	pushl  0x8(%ebp)
c1007b17:	50                   	push   %eax
c1007b18:	e8 b8 27 00 00       	call   c100a2d5 <inode_open>
c1007b1d:	83 c4 10             	add    $0x10,%esp
c1007b20:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007b23:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007b27:	8d 95 ac fd ff ff    	lea    -0x254(%ebp),%edx
c1007b2d:	b8 00 00 00 00       	mov    $0x0,%eax
c1007b32:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007b37:	89 d7                	mov    %edx,%edi
c1007b39:	f3 ab                	rep stos %eax,%es:(%edi)
c1007b3b:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
c1007b42:	eb 22                	jmp    c1007b66 <get_child_dir_name+0x64>
c1007b44:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007b48:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007b4c:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1007b4f:	83 c1 04             	add    $0x4,%ecx
c1007b52:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1007b55:	89 94 85 ac fd ff ff 	mov    %edx,-0x254(%ebp,%eax,4)
c1007b5c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007b60:	83 c0 01             	add    $0x1,%eax
c1007b63:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007b66:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007b6a:	76 d8                	jbe    c1007b44 <get_child_dir_name+0x42>
c1007b6c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007b6f:	8b 40 40             	mov    0x40(%eax),%eax
c1007b72:	85 c0                	test   %eax,%eax
c1007b74:	74 25                	je     c1007b9b <get_child_dir_name+0x99>
c1007b76:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007b79:	8b 50 40             	mov    0x40(%eax),%edx
c1007b7c:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
c1007b82:	83 c0 30             	add    $0x30,%eax
c1007b85:	83 ec 04             	sub    $0x4,%esp
c1007b88:	6a 01                	push   $0x1
c1007b8a:	52                   	push   %edx
c1007b8b:	50                   	push   %eax
c1007b8c:	e8 7a e2 ff ff       	call   c1005e0b <ide_read>
c1007b91:	83 c4 10             	add    $0x10,%esp
c1007b94:	c7 45 f0 8c 00 00 00 	movl   $0x8c,-0x10(%ebp)
c1007b9b:	83 ec 0c             	sub    $0xc,%esp
c1007b9e:	ff 75 e8             	pushl  -0x18(%ebp)
c1007ba1:	e8 05 28 00 00       	call   c100a3ab <inode_close>
c1007ba6:	83 c4 10             	add    $0x10,%esp
c1007ba9:	8b 45 14             	mov    0x14(%ebp),%eax
c1007bac:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007baf:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007bb4:	8b 40 10             	mov    0x10(%eax),%eax
c1007bb7:	8b 40 30             	mov    0x30(%eax),%eax
c1007bba:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007bbd:	b8 00 02 00 00       	mov    $0x200,%eax
c1007bc2:	ba 00 00 00 00       	mov    $0x0,%edx
c1007bc7:	f7 75 e0             	divl   -0x20(%ebp)
c1007bca:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007bcd:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007bd1:	e9 bc 00 00 00       	jmp    c1007c92 <get_child_dir_name+0x190>
c1007bd6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007bda:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1007be1:	85 c0                	test   %eax,%eax
c1007be3:	0f 84 9f 00 00 00    	je     c1007c88 <get_child_dir_name+0x186>
c1007be9:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007bed:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1007bf4:	83 ec 04             	sub    $0x4,%esp
c1007bf7:	6a 01                	push   $0x1
c1007bf9:	50                   	push   %eax
c1007bfa:	ff 75 14             	pushl  0x14(%ebp)
c1007bfd:	e8 09 e2 ff ff       	call   c1005e0b <ide_read>
c1007c02:	83 c4 10             	add    $0x10,%esp
c1007c05:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
c1007c09:	eb 74                	jmp    c1007c7f <get_child_dir_name+0x17d>
c1007c0b:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007c0f:	89 d0                	mov    %edx,%eax
c1007c11:	01 c0                	add    %eax,%eax
c1007c13:	01 d0                	add    %edx,%eax
c1007c15:	c1 e0 03             	shl    $0x3,%eax
c1007c18:	89 c2                	mov    %eax,%edx
c1007c1a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007c1d:	01 d0                	add    %edx,%eax
c1007c1f:	8b 40 10             	mov    0x10(%eax),%eax
c1007c22:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1007c25:	75 4e                	jne    c1007c75 <get_child_dir_name+0x173>
c1007c27:	8b 45 10             	mov    0x10(%ebp),%eax
c1007c2a:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1007c2f:	89 c2                	mov    %eax,%edx
c1007c31:	b8 00 00 00 00       	mov    $0x0,%eax
c1007c36:	89 d7                	mov    %edx,%edi
c1007c38:	f2 ae                	repnz scas %es:(%edi),%al
c1007c3a:	89 c8                	mov    %ecx,%eax
c1007c3c:	f7 d0                	not    %eax
c1007c3e:	8d 50 ff             	lea    -0x1(%eax),%edx
c1007c41:	8b 45 10             	mov    0x10(%ebp),%eax
c1007c44:	01 d0                	add    %edx,%eax
c1007c46:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1007c4b:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007c4f:	89 d0                	mov    %edx,%eax
c1007c51:	01 c0                	add    %eax,%eax
c1007c53:	01 d0                	add    %edx,%eax
c1007c55:	c1 e0 03             	shl    $0x3,%eax
c1007c58:	89 c2                	mov    %eax,%edx
c1007c5a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007c5d:	01 d0                	add    %edx,%eax
c1007c5f:	83 ec 08             	sub    $0x8,%esp
c1007c62:	50                   	push   %eax
c1007c63:	ff 75 10             	pushl  0x10(%ebp)
c1007c66:	e8 6a 85 ff ff       	call   c10001d5 <strcat>
c1007c6b:	83 c4 10             	add    $0x10,%esp
c1007c6e:	b8 00 00 00 00       	mov    $0x0,%eax
c1007c73:	eb 2f                	jmp    c1007ca4 <get_child_dir_name+0x1a2>
c1007c75:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007c79:	83 c0 01             	add    $0x1,%eax
c1007c7c:	88 45 ef             	mov    %al,-0x11(%ebp)
c1007c7f:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007c83:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1007c86:	77 83                	ja     c1007c0b <get_child_dir_name+0x109>
c1007c88:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007c8c:	83 c0 01             	add    $0x1,%eax
c1007c8f:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007c92:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007c96:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1007c99:	0f 87 37 ff ff ff    	ja     c1007bd6 <get_child_dir_name+0xd4>
c1007c9f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007ca4:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1007ca7:	c9                   	leave  
c1007ca8:	c3                   	ret    

c1007ca9 <sys_getcwd>:
c1007ca9:	55                   	push   %ebp
c1007caa:	89 e5                	mov    %esp,%ebp
c1007cac:	57                   	push   %edi
c1007cad:	53                   	push   %ebx
c1007cae:	81 ec 20 02 00 00    	sub    $0x220,%esp
c1007cb4:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007cb8:	75 19                	jne    c1007cd3 <sys_getcwd+0x2a>
c1007cba:	68 02 b6 00 c1       	push   $0xc100b602
c1007cbf:	68 b0 ba 00 c1       	push   $0xc100bab0
c1007cc4:	68 fa 02 00 00       	push   $0x2fa
c1007cc9:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1007cce:	e8 98 86 ff ff       	call   c100036b <__PANIC>
c1007cd3:	83 ec 08             	sub    $0x8,%esp
c1007cd6:	6a 02                	push   $0x2
c1007cd8:	68 00 02 00 00       	push   $0x200
c1007cdd:	e8 2d af ff ff       	call   c1002c0f <vmm_malloc>
c1007ce2:	83 c4 10             	add    $0x10,%esp
c1007ce5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007ce8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007cec:	75 0a                	jne    c1007cf8 <sys_getcwd+0x4f>
c1007cee:	b8 00 00 00 00       	mov    $0x0,%eax
c1007cf3:	e9 97 01 00 00       	jmp    c1007e8f <sys_getcwd+0x1e6>
c1007cf8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007cff:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1007d04:	8b 80 f8 00 00 00    	mov    0xf8(%eax),%eax
c1007d0a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007d0d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1007d11:	78 09                	js     c1007d1c <sys_getcwd+0x73>
c1007d13:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
c1007d1a:	7e 19                	jle    c1007d35 <sys_getcwd+0x8c>
c1007d1c:	68 74 b9 00 c1       	push   $0xc100b974
c1007d21:	68 b0 ba 00 c1       	push   $0xc100bab0
c1007d26:	68 02 03 00 00       	push   $0x302
c1007d2b:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1007d30:	e8 36 86 ff ff       	call   c100036b <__PANIC>
c1007d35:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1007d39:	75 17                	jne    c1007d52 <sys_getcwd+0xa9>
c1007d3b:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d3e:	c6 00 2f             	movb   $0x2f,(%eax)
c1007d41:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d44:	83 c0 01             	add    $0x1,%eax
c1007d47:	c6 00 00             	movb   $0x0,(%eax)
c1007d4a:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d4d:	e9 3d 01 00 00       	jmp    c1007e8f <sys_getcwd+0x1e6>
c1007d52:	83 ec 04             	sub    $0x4,%esp
c1007d55:	ff 75 0c             	pushl  0xc(%ebp)
c1007d58:	6a 00                	push   $0x0
c1007d5a:	ff 75 08             	pushl  0x8(%ebp)
c1007d5d:	e8 48 83 ff ff       	call   c10000aa <memset>
c1007d62:	83 c4 10             	add    $0x10,%esp
c1007d65:	c7 85 e6 fd ff ff 00 	movl   $0x0,-0x21a(%ebp)
c1007d6c:	00 00 00 
c1007d6f:	8d 85 ea fd ff ff    	lea    -0x216(%ebp),%eax
c1007d75:	b9 fc 01 00 00       	mov    $0x1fc,%ecx
c1007d7a:	bb 00 00 00 00       	mov    $0x0,%ebx
c1007d7f:	89 18                	mov    %ebx,(%eax)
c1007d81:	89 5c 08 fc          	mov    %ebx,-0x4(%eax,%ecx,1)
c1007d85:	8d 50 04             	lea    0x4(%eax),%edx
c1007d88:	83 e2 fc             	and    $0xfffffffc,%edx
c1007d8b:	29 d0                	sub    %edx,%eax
c1007d8d:	01 c1                	add    %eax,%ecx
c1007d8f:	83 e1 fc             	and    $0xfffffffc,%ecx
c1007d92:	c1 e9 02             	shr    $0x2,%ecx
c1007d95:	89 d7                	mov    %edx,%edi
c1007d97:	89 d8                	mov    %ebx,%eax
c1007d99:	f3 ab                	rep stos %eax,%es:(%edi)
c1007d9b:	eb 58                	jmp    c1007df5 <sys_getcwd+0x14c>
c1007d9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007da0:	83 ec 08             	sub    $0x8,%esp
c1007da3:	ff 75 f0             	pushl  -0x10(%ebp)
c1007da6:	50                   	push   %eax
c1007da7:	e8 9e fc ff ff       	call   c1007a4a <get_parent_dir_inode_nr>
c1007dac:	83 c4 10             	add    $0x10,%esp
c1007daf:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007db2:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007db5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007db8:	ff 75 f0             	pushl  -0x10(%ebp)
c1007dbb:	8d 8d e6 fd ff ff    	lea    -0x21a(%ebp),%ecx
c1007dc1:	51                   	push   %ecx
c1007dc2:	52                   	push   %edx
c1007dc3:	50                   	push   %eax
c1007dc4:	e8 39 fd ff ff       	call   c1007b02 <get_child_dir_name>
c1007dc9:	83 c4 10             	add    $0x10,%esp
c1007dcc:	83 f8 ff             	cmp    $0xffffffff,%eax
c1007dcf:	75 1e                	jne    c1007def <sys_getcwd+0x146>
c1007dd1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007dd4:	83 ec 08             	sub    $0x8,%esp
c1007dd7:	68 00 02 00 00       	push   $0x200
c1007ddc:	50                   	push   %eax
c1007ddd:	e8 52 af ff ff       	call   c1002d34 <vmm_free>
c1007de2:	83 c4 10             	add    $0x10,%esp
c1007de5:	b8 00 00 00 00       	mov    $0x0,%eax
c1007dea:	e9 a0 00 00 00       	jmp    c1007e8f <sys_getcwd+0x1e6>
c1007def:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007df2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007df5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1007df9:	75 a2                	jne    c1007d9d <sys_getcwd+0xf4>
c1007dfb:	83 ec 0c             	sub    $0xc,%esp
c1007dfe:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c1007e04:	50                   	push   %eax
c1007e05:	e8 14 83 ff ff       	call   c100011e <strlen>
c1007e0a:	83 c4 10             	add    $0x10,%esp
c1007e0d:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1007e10:	73 49                	jae    c1007e5b <sys_getcwd+0x1b2>
c1007e12:	68 a4 b9 00 c1       	push   $0xc100b9a4
c1007e17:	68 b0 ba 00 c1       	push   $0xc100bab0
c1007e1c:	68 18 03 00 00       	push   $0x318
c1007e21:	68 e8 b3 00 c1       	push   $0xc100b3e8
c1007e26:	e8 40 85 ff ff       	call   c100036b <__PANIC>
c1007e2b:	83 ec 0c             	sub    $0xc,%esp
c1007e2e:	ff 75 08             	pushl  0x8(%ebp)
c1007e31:	e8 e8 82 ff ff       	call   c100011e <strlen>
c1007e36:	83 c4 10             	add    $0x10,%esp
c1007e39:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c1007e3d:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c1007e41:	8b 45 08             	mov    0x8(%ebp),%eax
c1007e44:	01 d0                	add    %edx,%eax
c1007e46:	83 ec 08             	sub    $0x8,%esp
c1007e49:	ff 75 e8             	pushl  -0x18(%ebp)
c1007e4c:	50                   	push   %eax
c1007e4d:	e8 c8 83 ff ff       	call   c100021a <strcpy>
c1007e52:	83 c4 10             	add    $0x10,%esp
c1007e55:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007e58:	c6 00 00             	movb   $0x0,(%eax)
c1007e5b:	83 ec 08             	sub    $0x8,%esp
c1007e5e:	6a 2f                	push   $0x2f
c1007e60:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c1007e66:	50                   	push   %eax
c1007e67:	e8 2a 83 ff ff       	call   c1000196 <strrchr>
c1007e6c:	83 c4 10             	add    $0x10,%esp
c1007e6f:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007e72:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1007e76:	75 b3                	jne    c1007e2b <sys_getcwd+0x182>
c1007e78:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007e7b:	83 ec 08             	sub    $0x8,%esp
c1007e7e:	68 00 02 00 00       	push   $0x200
c1007e83:	50                   	push   %eax
c1007e84:	e8 ab ae ff ff       	call   c1002d34 <vmm_free>
c1007e89:	83 c4 10             	add    $0x10,%esp
c1007e8c:	8b 45 08             	mov    0x8(%ebp),%eax
c1007e8f:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1007e92:	5b                   	pop    %ebx
c1007e93:	5f                   	pop    %edi
c1007e94:	5d                   	pop    %ebp
c1007e95:	c3                   	ret    

c1007e96 <sys_stat>:
c1007e96:	55                   	push   %ebp
c1007e97:	89 e5                	mov    %esp,%ebp
c1007e99:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1007e9f:	83 ec 08             	sub    $0x8,%esp
c1007ea2:	68 17 b4 00 c1       	push   $0xc100b417
c1007ea7:	ff 75 08             	pushl  0x8(%ebp)
c1007eaa:	e8 d4 82 ff ff       	call   c1000183 <strcmp>
c1007eaf:	83 c4 10             	add    $0x10,%esp
c1007eb2:	85 c0                	test   %eax,%eax
c1007eb4:	74 2e                	je     c1007ee4 <sys_stat+0x4e>
c1007eb6:	83 ec 08             	sub    $0x8,%esp
c1007eb9:	68 19 b4 00 c1       	push   $0xc100b419
c1007ebe:	ff 75 08             	pushl  0x8(%ebp)
c1007ec1:	e8 bd 82 ff ff       	call   c1000183 <strcmp>
c1007ec6:	83 c4 10             	add    $0x10,%esp
c1007ec9:	85 c0                	test   %eax,%eax
c1007ecb:	74 17                	je     c1007ee4 <sys_stat+0x4e>
c1007ecd:	83 ec 08             	sub    $0x8,%esp
c1007ed0:	68 1c b4 00 c1       	push   $0xc100b41c
c1007ed5:	ff 75 08             	pushl  0x8(%ebp)
c1007ed8:	e8 a6 82 ff ff       	call   c1000183 <strcmp>
c1007edd:	83 c4 10             	add    $0x10,%esp
c1007ee0:	85 c0                	test   %eax,%eax
c1007ee2:	75 2d                	jne    c1007f11 <sys_stat+0x7b>
c1007ee4:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007ee7:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
c1007eee:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007ef1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1007ef7:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c1007efc:	8b 00                	mov    (%eax),%eax
c1007efe:	8b 50 04             	mov    0x4(%eax),%edx
c1007f01:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007f04:	89 50 04             	mov    %edx,0x4(%eax)
c1007f07:	b8 00 00 00 00       	mov    $0x0,%eax
c1007f0c:	e9 af 00 00 00       	jmp    c1007fc0 <sys_stat+0x12a>
c1007f11:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007f18:	83 ec 04             	sub    $0x4,%esp
c1007f1b:	68 08 02 00 00       	push   $0x208
c1007f20:	6a 00                	push   $0x0
c1007f22:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007f28:	50                   	push   %eax
c1007f29:	e8 7c 81 ff ff       	call   c10000aa <memset>
c1007f2e:	83 c4 10             	add    $0x10,%esp
c1007f31:	83 ec 08             	sub    $0x8,%esp
c1007f34:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007f3a:	50                   	push   %eax
c1007f3b:	ff 75 08             	pushl  0x8(%ebp)
c1007f3e:	e8 9c e9 ff ff       	call   c10068df <search_file>
c1007f43:	83 c4 10             	add    $0x10,%esp
c1007f46:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007f49:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007f4d:	74 4c                	je     c1007f9b <sys_stat+0x105>
c1007f4f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007f52:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007f57:	83 ec 08             	sub    $0x8,%esp
c1007f5a:	52                   	push   %edx
c1007f5b:	50                   	push   %eax
c1007f5c:	e8 74 23 00 00       	call   c100a2d5 <inode_open>
c1007f61:	83 c4 10             	add    $0x10,%esp
c1007f64:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007f67:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007f6a:	8b 50 04             	mov    0x4(%eax),%edx
c1007f6d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007f70:	89 50 04             	mov    %edx,0x4(%eax)
c1007f73:	83 ec 0c             	sub    $0xc,%esp
c1007f76:	ff 75 ec             	pushl  -0x14(%ebp)
c1007f79:	e8 2d 24 00 00       	call   c100a3ab <inode_close>
c1007f7e:	83 c4 10             	add    $0x10,%esp
c1007f81:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1007f84:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007f87:	89 50 08             	mov    %edx,0x8(%eax)
c1007f8a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007f8d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007f90:	89 10                	mov    %edx,(%eax)
c1007f92:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007f99:	eb 13                	jmp    c1007fae <sys_stat+0x118>
c1007f9b:	83 ec 08             	sub    $0x8,%esp
c1007f9e:	ff 75 08             	pushl  0x8(%ebp)
c1007fa1:	68 c6 b9 00 c1       	push   $0xc100b9c6
c1007fa6:	e8 b8 d5 ff ff       	call   c1005563 <printk>
c1007fab:	83 c4 10             	add    $0x10,%esp
c1007fae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007fb1:	83 ec 0c             	sub    $0xc,%esp
c1007fb4:	50                   	push   %eax
c1007fb5:	e8 56 03 00 00       	call   c1008310 <dir_close>
c1007fba:	83 c4 10             	add    $0x10,%esp
c1007fbd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007fc0:	c9                   	leave  
c1007fc1:	c3                   	ret    

c1007fc2 <sys_chdir>:
c1007fc2:	55                   	push   %ebp
c1007fc3:	89 e5                	mov    %esp,%ebp
c1007fc5:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1007fcb:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007fd2:	83 ec 04             	sub    $0x4,%esp
c1007fd5:	68 08 02 00 00       	push   $0x208
c1007fda:	6a 00                	push   $0x0
c1007fdc:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007fe2:	50                   	push   %eax
c1007fe3:	e8 c2 80 ff ff       	call   c10000aa <memset>
c1007fe8:	83 c4 10             	add    $0x10,%esp
c1007feb:	83 ec 08             	sub    $0x8,%esp
c1007fee:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007ff4:	50                   	push   %eax
c1007ff5:	ff 75 08             	pushl  0x8(%ebp)
c1007ff8:	e8 e2 e8 ff ff       	call   c10068df <search_file>
c1007ffd:	83 c4 10             	add    $0x10,%esp
c1008000:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008003:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1008007:	74 32                	je     c100803b <sys_chdir+0x79>
c1008009:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100800c:	83 f8 02             	cmp    $0x2,%eax
c100800f:	75 17                	jne    c1008028 <sys_chdir+0x66>
c1008011:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1008016:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008019:	89 90 f8 00 00 00    	mov    %edx,0xf8(%eax)
c100801f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008026:	eb 13                	jmp    c100803b <sys_chdir+0x79>
c1008028:	83 ec 08             	sub    $0x8,%esp
c100802b:	ff 75 08             	pushl  0x8(%ebp)
c100802e:	68 e0 b9 00 c1       	push   $0xc100b9e0
c1008033:	e8 2b d5 ff ff       	call   c1005563 <printk>
c1008038:	83 c4 10             	add    $0x10,%esp
c100803b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100803e:	83 ec 0c             	sub    $0xc,%esp
c1008041:	50                   	push   %eax
c1008042:	e8 c9 02 00 00       	call   c1008310 <dir_close>
c1008047:	83 c4 10             	add    $0x10,%esp
c100804a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100804d:	c9                   	leave  
c100804e:	c3                   	ret    

c100804f <fs_init>:
c100804f:	55                   	push   %ebp
c1008050:	89 e5                	mov    %esp,%ebp
c1008052:	83 ec 08             	sub    $0x8,%esp
c1008055:	e8 49 e0 ff ff       	call   c10060a3 <partition_format>
c100805a:	e8 d7 e4 ff ff       	call   c1006536 <mount_partition>
c100805f:	90                   	nop
c1008060:	c9                   	leave  
c1008061:	c3                   	ret    

c1008062 <open_root_dir>:
c1008062:	55                   	push   %ebp
c1008063:	89 e5                	mov    %esp,%ebp
c1008065:	53                   	push   %ebx
c1008066:	83 ec 04             	sub    $0x4,%esp
c1008069:	83 ec 08             	sub    $0x8,%esp
c100806c:	6a 02                	push   $0x2
c100806e:	68 08 02 00 00       	push   $0x208
c1008073:	e8 97 ab ff ff       	call   c1002c0f <vmm_malloc>
c1008078:	83 c4 10             	add    $0x10,%esp
c100807b:	a3 34 42 a1 c1       	mov    %eax,0xc1a14234
c1008080:	8b 45 08             	mov    0x8(%ebp),%eax
c1008083:	8b 40 10             	mov    0x10(%eax),%eax
c1008086:	8b 40 2c             	mov    0x2c(%eax),%eax
c1008089:	83 ec 08             	sub    $0x8,%esp
c100808c:	50                   	push   %eax
c100808d:	68 bc ba 00 c1       	push   $0xc100babc
c1008092:	e8 cc d4 ff ff       	call   c1005563 <printk>
c1008097:	83 c4 10             	add    $0x10,%esp
c100809a:	8b 45 08             	mov    0x8(%ebp),%eax
c100809d:	8b 40 10             	mov    0x10(%eax),%eax
c10080a0:	8b 40 2c             	mov    0x2c(%eax),%eax
c10080a3:	8b 1d 34 42 a1 c1    	mov    0xc1a14234,%ebx
c10080a9:	83 ec 08             	sub    $0x8,%esp
c10080ac:	50                   	push   %eax
c10080ad:	ff 75 08             	pushl  0x8(%ebp)
c10080b0:	e8 20 22 00 00       	call   c100a2d5 <inode_open>
c10080b5:	83 c4 10             	add    $0x10,%esp
c10080b8:	89 03                	mov    %eax,(%ebx)
c10080ba:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c10080bf:	8b 00                	mov    (%eax),%eax
c10080c1:	83 ec 08             	sub    $0x8,%esp
c10080c4:	50                   	push   %eax
c10080c5:	68 d0 ba 00 c1       	push   $0xc100bad0
c10080ca:	e8 94 d4 ff ff       	call   c1005563 <printk>
c10080cf:	83 c4 10             	add    $0x10,%esp
c10080d2:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c10080d7:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10080de:	90                   	nop
c10080df:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10080e2:	c9                   	leave  
c10080e3:	c3                   	ret    

c10080e4 <dir_open>:
c10080e4:	55                   	push   %ebp
c10080e5:	89 e5                	mov    %esp,%ebp
c10080e7:	83 ec 18             	sub    $0x18,%esp
c10080ea:	83 ec 08             	sub    $0x8,%esp
c10080ed:	6a 02                	push   $0x2
c10080ef:	68 08 02 00 00       	push   $0x208
c10080f4:	e8 16 ab ff ff       	call   c1002c0f <vmm_malloc>
c10080f9:	83 c4 10             	add    $0x10,%esp
c10080fc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10080ff:	83 ec 08             	sub    $0x8,%esp
c1008102:	ff 75 0c             	pushl  0xc(%ebp)
c1008105:	ff 75 08             	pushl  0x8(%ebp)
c1008108:	e8 c8 21 00 00       	call   c100a2d5 <inode_open>
c100810d:	83 c4 10             	add    $0x10,%esp
c1008110:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008113:	89 02                	mov    %eax,(%edx)
c1008115:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008118:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100811f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008122:	c9                   	leave  
c1008123:	c3                   	ret    

c1008124 <search_dir_entry>:
c1008124:	55                   	push   %ebp
c1008125:	89 e5                	mov    %esp,%ebp
c1008127:	83 ec 28             	sub    $0x28,%esp
c100812a:	c7 45 e8 8c 00 00 00 	movl   $0x8c,-0x18(%ebp)
c1008131:	83 ec 08             	sub    $0x8,%esp
c1008134:	6a 02                	push   $0x2
c1008136:	68 30 02 00 00       	push   $0x230
c100813b:	e8 cf aa ff ff       	call   c1002c0f <vmm_malloc>
c1008140:	83 c4 10             	add    $0x10,%esp
c1008143:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008146:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c100814a:	75 1a                	jne    c1008166 <search_dir_entry+0x42>
c100814c:	83 ec 0c             	sub    $0xc,%esp
c100814f:	68 e8 ba 00 c1       	push   $0xc100bae8
c1008154:	e8 0a d4 ff ff       	call   c1005563 <printk>
c1008159:	83 c4 10             	add    $0x10,%esp
c100815c:	b8 00 00 00 00       	mov    $0x0,%eax
c1008161:	e9 a8 01 00 00       	jmp    c100830e <search_dir_entry+0x1ea>
c1008166:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100816d:	eb 23                	jmp    c1008192 <search_dir_entry+0x6e>
c100816f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008172:	8b 00                	mov    (%eax),%eax
c1008174:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008177:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100817e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1008181:	01 ca                	add    %ecx,%edx
c1008183:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c1008186:	83 c1 04             	add    $0x4,%ecx
c1008189:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100818c:	89 02                	mov    %eax,(%edx)
c100818e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008192:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1008196:	76 d7                	jbe    c100816f <search_dir_entry+0x4b>
c1008198:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100819f:	8b 45 0c             	mov    0xc(%ebp),%eax
c10081a2:	8b 00                	mov    (%eax),%eax
c10081a4:	8b 40 40             	mov    0x40(%eax),%eax
c10081a7:	85 c0                	test   %eax,%eax
c10081a9:	74 1d                	je     c10081c8 <search_dir_entry+0xa4>
c10081ab:	8b 45 0c             	mov    0xc(%ebp),%eax
c10081ae:	8b 00                	mov    (%eax),%eax
c10081b0:	8b 40 40             	mov    0x40(%eax),%eax
c10081b3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10081b6:	83 c2 30             	add    $0x30,%edx
c10081b9:	83 ec 04             	sub    $0x4,%esp
c10081bc:	6a 01                	push   $0x1
c10081be:	50                   	push   %eax
c10081bf:	52                   	push   %edx
c10081c0:	e8 46 dc ff ff       	call   c1005e0b <ide_read>
c10081c5:	83 c4 10             	add    $0x10,%esp
c10081c8:	83 ec 08             	sub    $0x8,%esp
c10081cb:	6a 02                	push   $0x2
c10081cd:	68 00 02 00 00       	push   $0x200
c10081d2:	e8 38 aa ff ff       	call   c1002c0f <vmm_malloc>
c10081d7:	83 c4 10             	add    $0x10,%esp
c10081da:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10081dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10081e0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10081e3:	8b 45 08             	mov    0x8(%ebp),%eax
c10081e6:	8b 40 10             	mov    0x10(%eax),%eax
c10081e9:	8b 40 30             	mov    0x30(%eax),%eax
c10081ec:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10081ef:	b8 00 02 00 00       	mov    $0x200,%eax
c10081f4:	ba 00 00 00 00       	mov    $0x0,%edx
c10081f9:	f7 75 dc             	divl   -0x24(%ebp)
c10081fc:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10081ff:	e9 d1 00 00 00       	jmp    c10082d5 <search_dir_entry+0x1b1>
c1008204:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008207:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100820e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008211:	01 d0                	add    %edx,%eax
c1008213:	8b 00                	mov    (%eax),%eax
c1008215:	85 c0                	test   %eax,%eax
c1008217:	75 09                	jne    c1008222 <search_dir_entry+0xfe>
c1008219:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100821d:	e9 b3 00 00 00       	jmp    c10082d5 <search_dir_entry+0x1b1>
c1008222:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008225:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100822c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100822f:	01 d0                	add    %edx,%eax
c1008231:	8b 00                	mov    (%eax),%eax
c1008233:	83 ec 04             	sub    $0x4,%esp
c1008236:	6a 01                	push   $0x1
c1008238:	50                   	push   %eax
c1008239:	ff 75 e0             	pushl  -0x20(%ebp)
c100823c:	e8 ca db ff ff       	call   c1005e0b <ide_read>
c1008241:	83 c4 10             	add    $0x10,%esp
c1008244:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100824b:	eb 61                	jmp    c10082ae <search_dir_entry+0x18a>
c100824d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008250:	83 ec 08             	sub    $0x8,%esp
c1008253:	ff 75 10             	pushl  0x10(%ebp)
c1008256:	50                   	push   %eax
c1008257:	e8 27 7f ff ff       	call   c1000183 <strcmp>
c100825c:	83 c4 10             	add    $0x10,%esp
c100825f:	85 c0                	test   %eax,%eax
c1008261:	75 43                	jne    c10082a6 <search_dir_entry+0x182>
c1008263:	83 ec 04             	sub    $0x4,%esp
c1008266:	ff 75 dc             	pushl  -0x24(%ebp)
c1008269:	ff 75 f0             	pushl  -0x10(%ebp)
c100826c:	ff 75 14             	pushl  0x14(%ebp)
c100826f:	e8 94 7e ff ff       	call   c1000108 <memcpy>
c1008274:	83 c4 10             	add    $0x10,%esp
c1008277:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100827a:	83 ec 08             	sub    $0x8,%esp
c100827d:	68 00 02 00 00       	push   $0x200
c1008282:	50                   	push   %eax
c1008283:	e8 ac aa ff ff       	call   c1002d34 <vmm_free>
c1008288:	83 c4 10             	add    $0x10,%esp
c100828b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100828e:	83 ec 08             	sub    $0x8,%esp
c1008291:	68 30 02 00 00       	push   $0x230
c1008296:	50                   	push   %eax
c1008297:	e8 98 aa ff ff       	call   c1002d34 <vmm_free>
c100829c:	83 c4 10             	add    $0x10,%esp
c100829f:	b8 01 00 00 00       	mov    $0x1,%eax
c10082a4:	eb 68                	jmp    c100830e <search_dir_entry+0x1ea>
c10082a6:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10082aa:	83 45 f0 18          	addl   $0x18,-0x10(%ebp)
c10082ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10082b1:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c10082b4:	72 97                	jb     c100824d <search_dir_entry+0x129>
c10082b6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10082ba:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10082bd:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10082c0:	83 ec 04             	sub    $0x4,%esp
c10082c3:	68 00 02 00 00       	push   $0x200
c10082c8:	6a 00                	push   $0x0
c10082ca:	ff 75 e0             	pushl  -0x20(%ebp)
c10082cd:	e8 d8 7d ff ff       	call   c10000aa <memset>
c10082d2:	83 c4 10             	add    $0x10,%esp
c10082d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10082d8:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c10082db:	0f 82 23 ff ff ff    	jb     c1008204 <search_dir_entry+0xe0>
c10082e1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10082e4:	83 ec 08             	sub    $0x8,%esp
c10082e7:	68 00 02 00 00       	push   $0x200
c10082ec:	50                   	push   %eax
c10082ed:	e8 42 aa ff ff       	call   c1002d34 <vmm_free>
c10082f2:	83 c4 10             	add    $0x10,%esp
c10082f5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10082f8:	83 ec 08             	sub    $0x8,%esp
c10082fb:	68 30 02 00 00       	push   $0x230
c1008300:	50                   	push   %eax
c1008301:	e8 2e aa ff ff       	call   c1002d34 <vmm_free>
c1008306:	83 c4 10             	add    $0x10,%esp
c1008309:	b8 00 00 00 00       	mov    $0x0,%eax
c100830e:	c9                   	leave  
c100830f:	c3                   	ret    

c1008310 <dir_close>:
c1008310:	55                   	push   %ebp
c1008311:	89 e5                	mov    %esp,%ebp
c1008313:	83 ec 08             	sub    $0x8,%esp
c1008316:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c100831b:	39 45 08             	cmp    %eax,0x8(%ebp)
c100831e:	74 27                	je     c1008347 <dir_close+0x37>
c1008320:	8b 45 08             	mov    0x8(%ebp),%eax
c1008323:	8b 00                	mov    (%eax),%eax
c1008325:	83 ec 0c             	sub    $0xc,%esp
c1008328:	50                   	push   %eax
c1008329:	e8 7d 20 00 00       	call   c100a3ab <inode_close>
c100832e:	83 c4 10             	add    $0x10,%esp
c1008331:	8b 45 08             	mov    0x8(%ebp),%eax
c1008334:	83 ec 08             	sub    $0x8,%esp
c1008337:	68 08 02 00 00       	push   $0x208
c100833c:	50                   	push   %eax
c100833d:	e8 f2 a9 ff ff       	call   c1002d34 <vmm_free>
c1008342:	83 c4 10             	add    $0x10,%esp
c1008345:	eb 01                	jmp    c1008348 <dir_close+0x38>
c1008347:	90                   	nop
c1008348:	c9                   	leave  
c1008349:	c3                   	ret    

c100834a <create_dir_entry>:
c100834a:	55                   	push   %ebp
c100834b:	89 e5                	mov    %esp,%ebp
c100834d:	83 ec 18             	sub    $0x18,%esp
c1008350:	8b 45 10             	mov    0x10(%ebp),%eax
c1008353:	88 45 f4             	mov    %al,-0xc(%ebp)
c1008356:	83 ec 0c             	sub    $0xc,%esp
c1008359:	ff 75 08             	pushl  0x8(%ebp)
c100835c:	e8 bd 7d ff ff       	call   c100011e <strlen>
c1008361:	83 c4 10             	add    $0x10,%esp
c1008364:	83 f8 10             	cmp    $0x10,%eax
c1008367:	76 16                	jbe    c100837f <create_dir_entry+0x35>
c1008369:	68 1c bb 00 c1       	push   $0xc100bb1c
c100836e:	68 d0 bc 00 c1       	push   $0xc100bcd0
c1008373:	6a 72                	push   $0x72
c1008375:	68 44 bb 00 c1       	push   $0xc100bb44
c100837a:	e8 ec 7f ff ff       	call   c100036b <__PANIC>
c100837f:	83 ec 0c             	sub    $0xc,%esp
c1008382:	ff 75 08             	pushl  0x8(%ebp)
c1008385:	e8 94 7d ff ff       	call   c100011e <strlen>
c100838a:	83 c4 10             	add    $0x10,%esp
c100838d:	8b 55 14             	mov    0x14(%ebp),%edx
c1008390:	83 ec 04             	sub    $0x4,%esp
c1008393:	50                   	push   %eax
c1008394:	ff 75 08             	pushl  0x8(%ebp)
c1008397:	52                   	push   %edx
c1008398:	e8 6b 7d ff ff       	call   c1000108 <memcpy>
c100839d:	83 c4 10             	add    $0x10,%esp
c10083a0:	8b 45 14             	mov    0x14(%ebp),%eax
c10083a3:	8b 55 0c             	mov    0xc(%ebp),%edx
c10083a6:	89 50 10             	mov    %edx,0x10(%eax)
c10083a9:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
c10083ad:	8b 45 14             	mov    0x14(%ebp),%eax
c10083b0:	89 50 14             	mov    %edx,0x14(%eax)
c10083b3:	90                   	nop
c10083b4:	c9                   	leave  
c10083b5:	c3                   	ret    

c10083b6 <sync_dir_entry>:
c10083b6:	55                   	push   %ebp
c10083b7:	89 e5                	mov    %esp,%ebp
c10083b9:	57                   	push   %edi
c10083ba:	53                   	push   %ebx
c10083bb:	81 ec 60 02 00 00    	sub    $0x260,%esp
c10083c1:	8b 45 08             	mov    0x8(%ebp),%eax
c10083c4:	8b 00                	mov    (%eax),%eax
c10083c6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10083c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10083cc:	8b 40 04             	mov    0x4(%eax),%eax
c10083cf:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10083d2:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10083d7:	8b 40 10             	mov    0x10(%eax),%eax
c10083da:	8b 40 30             	mov    0x30(%eax),%eax
c10083dd:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10083e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10083e3:	ba 00 00 00 00       	mov    $0x0,%edx
c10083e8:	f7 75 e8             	divl   -0x18(%ebp)
c10083eb:	89 d0                	mov    %edx,%eax
c10083ed:	85 c0                	test   %eax,%eax
c10083ef:	74 19                	je     c100840a <sync_dir_entry+0x54>
c10083f1:	68 74 bb 00 c1       	push   $0xc100bb74
c10083f6:	68 e4 bc 00 c1       	push   $0xc100bce4
c10083fb:	68 80 00 00 00       	push   $0x80
c1008400:	68 44 bb 00 c1       	push   $0xc100bb44
c1008405:	e8 61 7f ff ff       	call   c100036b <__PANIC>
c100840a:	b8 00 02 00 00       	mov    $0x200,%eax
c100840f:	ba 00 00 00 00       	mov    $0x0,%edx
c1008414:	f7 75 e8             	divl   -0x18(%ebp)
c1008417:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100841a:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1008421:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1008425:	8d 95 a0 fd ff ff    	lea    -0x260(%ebp),%edx
c100842b:	b8 00 00 00 00       	mov    $0x0,%eax
c1008430:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1008435:	89 d7                	mov    %edx,%edi
c1008437:	f3 ab                	rep stos %eax,%es:(%edi)
c1008439:	eb 22                	jmp    c100845d <sync_dir_entry+0xa7>
c100843b:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c100843f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008443:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008446:	83 c1 04             	add    $0x4,%ecx
c1008449:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c100844c:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1008453:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008457:	83 c0 01             	add    $0x1,%eax
c100845a:	88 45 f7             	mov    %al,-0x9(%ebp)
c100845d:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1008461:	76 d8                	jbe    c100843b <sync_dir_entry+0x85>
c1008463:	8b 45 10             	mov    0x10(%ebp),%eax
c1008466:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008469:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1008470:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1008474:	e9 52 03 00 00       	jmp    c10087cb <sync_dir_entry+0x415>
c1008479:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1008480:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008484:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c100848b:	85 c0                	test   %eax,%eax
c100848d:	0f 85 80 02 00 00    	jne    c1008713 <sync_dir_entry+0x35d>
c1008493:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008498:	83 ec 0c             	sub    $0xc,%esp
c100849b:	50                   	push   %eax
c100849c:	e8 27 0c 00 00       	call   c10090c8 <block_bitmap_alloc>
c10084a1:	83 c4 10             	add    $0x10,%esp
c10084a4:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10084a7:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c10084ab:	75 1a                	jne    c10084c7 <sync_dir_entry+0x111>
c10084ad:	83 ec 0c             	sub    $0xc,%esp
c10084b0:	68 94 bb 00 c1       	push   $0xc100bb94
c10084b5:	e8 a9 d0 ff ff       	call   c1005563 <printk>
c10084ba:	83 c4 10             	add    $0x10,%esp
c10084bd:	b8 00 00 00 00       	mov    $0x0,%eax
c10084c2:	e9 23 03 00 00       	jmp    c10087ea <sync_dir_entry+0x434>
c10084c7:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10084ca:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10084cf:	8b 40 10             	mov    0x10(%eax),%eax
c10084d2:	8b 40 28             	mov    0x28(%eax),%eax
c10084d5:	29 c2                	sub    %eax,%edx
c10084d7:	89 d0                	mov    %edx,%eax
c10084d9:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10084dc:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10084e0:	75 19                	jne    c10084fb <sync_dir_entry+0x145>
c10084e2:	68 c2 bb 00 c1       	push   $0xc100bbc2
c10084e7:	68 e4 bc 00 c1       	push   $0xc100bce4
c10084ec:	68 a3 00 00 00       	push   $0xa3
c10084f1:	68 44 bb 00 c1       	push   $0xc100bb44
c10084f6:	e8 70 7e ff ff       	call   c100036b <__PANIC>
c10084fb:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10084fe:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008503:	83 ec 04             	sub    $0x4,%esp
c1008506:	6a 01                	push   $0x1
c1008508:	52                   	push   %edx
c1008509:	50                   	push   %eax
c100850a:	e8 87 0c 00 00       	call   c1009196 <bitmap_sync>
c100850f:	83 c4 10             	add    $0x10,%esp
c1008512:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1008519:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c100851d:	77 27                	ja     c1008546 <sync_dir_entry+0x190>
c100851f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008523:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008526:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c100852d:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1008531:	8b 94 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%edx
c1008538:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100853b:	83 c1 04             	add    $0x4,%ecx
c100853e:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c1008541:	e9 6d 01 00 00       	jmp    c10086b3 <sync_dir_entry+0x2fd>
c1008546:	80 7d f7 0c          	cmpb   $0xc,-0x9(%ebp)
c100854a:	0f 85 37 01 00 00    	jne    c1008687 <sync_dir_entry+0x2d1>
c1008550:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008553:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008556:	89 50 40             	mov    %edx,0x40(%eax)
c1008559:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1008560:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008565:	83 ec 0c             	sub    $0xc,%esp
c1008568:	50                   	push   %eax
c1008569:	e8 5a 0b 00 00       	call   c10090c8 <block_bitmap_alloc>
c100856e:	83 c4 10             	add    $0x10,%esp
c1008571:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008574:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c1008578:	0f 85 95 00 00 00    	jne    c1008613 <sync_dir_entry+0x25d>
c100857e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008581:	8b 50 40             	mov    0x40(%eax),%edx
c1008584:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008589:	8b 40 10             	mov    0x10(%eax),%eax
c100858c:	8b 40 28             	mov    0x28(%eax),%eax
c100858f:	29 c2                	sub    %eax,%edx
c1008591:	89 d0                	mov    %edx,%eax
c1008593:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008596:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008599:	8d 50 07             	lea    0x7(%eax),%edx
c100859c:	85 c0                	test   %eax,%eax
c100859e:	0f 48 c2             	cmovs  %edx,%eax
c10085a1:	c1 f8 03             	sar    $0x3,%eax
c10085a4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10085a7:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10085aa:	99                   	cltd   
c10085ab:	c1 ea 1d             	shr    $0x1d,%edx
c10085ae:	01 d0                	add    %edx,%eax
c10085b0:	83 e0 07             	and    $0x7,%eax
c10085b3:	29 d0                	sub    %edx,%eax
c10085b5:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10085b8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10085bd:	8b 50 18             	mov    0x18(%eax),%edx
c10085c0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10085c3:	01 d0                	add    %edx,%eax
c10085c5:	0f b6 00             	movzbl (%eax),%eax
c10085c8:	89 c2                	mov    %eax,%edx
c10085ca:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10085cd:	bb 01 00 00 00       	mov    $0x1,%ebx
c10085d2:	89 c1                	mov    %eax,%ecx
c10085d4:	d3 e3                	shl    %cl,%ebx
c10085d6:	89 d8                	mov    %ebx,%eax
c10085d8:	f7 d0                	not    %eax
c10085da:	89 d1                	mov    %edx,%ecx
c10085dc:	21 c1                	and    %eax,%ecx
c10085de:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10085e3:	8b 50 18             	mov    0x18(%eax),%edx
c10085e6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10085e9:	01 d0                	add    %edx,%eax
c10085eb:	89 ca                	mov    %ecx,%edx
c10085ed:	88 10                	mov    %dl,(%eax)
c10085ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10085f2:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c10085f9:	83 ec 0c             	sub    $0xc,%esp
c10085fc:	68 94 bb 00 c1       	push   $0xc100bb94
c1008601:	e8 5d cf ff ff       	call   c1005563 <printk>
c1008606:	83 c4 10             	add    $0x10,%esp
c1008609:	b8 00 00 00 00       	mov    $0x0,%eax
c100860e:	e9 d7 01 00 00       	jmp    c10087ea <sync_dir_entry+0x434>
c1008613:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008616:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100861b:	8b 40 10             	mov    0x10(%eax),%eax
c100861e:	8b 40 28             	mov    0x28(%eax),%eax
c1008621:	29 c2                	sub    %eax,%edx
c1008623:	89 d0                	mov    %edx,%eax
c1008625:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008628:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c100862c:	75 19                	jne    c1008647 <sync_dir_entry+0x291>
c100862e:	68 c2 bb 00 c1       	push   $0xc100bbc2
c1008633:	68 e4 bc 00 c1       	push   $0xc100bce4
c1008638:	68 ba 00 00 00       	push   $0xba
c100863d:	68 44 bb 00 c1       	push   $0xc100bb44
c1008642:	e8 24 7d ff ff       	call   c100036b <__PANIC>
c1008647:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100864a:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100864f:	83 ec 04             	sub    $0x4,%esp
c1008652:	6a 01                	push   $0x1
c1008654:	52                   	push   %edx
c1008655:	50                   	push   %eax
c1008656:	e8 3b 0b 00 00       	call   c1009196 <bitmap_sync>
c100865b:	83 c4 10             	add    $0x10,%esp
c100865e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008661:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c1008667:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100866a:	8b 50 40             	mov    0x40(%eax),%edx
c100866d:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c1008673:	83 c0 30             	add    $0x30,%eax
c1008676:	83 ec 04             	sub    $0x4,%esp
c1008679:	6a 01                	push   $0x1
c100867b:	52                   	push   %edx
c100867c:	50                   	push   %eax
c100867d:	e8 c6 d7 ff ff       	call   c1005e48 <ide_write>
c1008682:	83 c4 10             	add    $0x10,%esp
c1008685:	eb 2c                	jmp    c10086b3 <sync_dir_entry+0x2fd>
c1008687:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100868b:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100868e:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1008695:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008698:	8b 50 40             	mov    0x40(%eax),%edx
c100869b:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c10086a1:	83 c0 30             	add    $0x30,%eax
c10086a4:	83 ec 04             	sub    $0x4,%esp
c10086a7:	6a 01                	push   $0x1
c10086a9:	52                   	push   %edx
c10086aa:	50                   	push   %eax
c10086ab:	e8 98 d7 ff ff       	call   c1005e48 <ide_write>
c10086b0:	83 c4 10             	add    $0x10,%esp
c10086b3:	83 ec 04             	sub    $0x4,%esp
c10086b6:	68 00 02 00 00       	push   $0x200
c10086bb:	6a 00                	push   $0x0
c10086bd:	ff 75 10             	pushl  0x10(%ebp)
c10086c0:	e8 e5 79 ff ff       	call   c10000aa <memset>
c10086c5:	83 c4 10             	add    $0x10,%esp
c10086c8:	83 ec 04             	sub    $0x4,%esp
c10086cb:	ff 75 e8             	pushl  -0x18(%ebp)
c10086ce:	ff 75 0c             	pushl  0xc(%ebp)
c10086d1:	ff 75 10             	pushl  0x10(%ebp)
c10086d4:	e8 2f 7a ff ff       	call   c1000108 <memcpy>
c10086d9:	83 c4 10             	add    $0x10,%esp
c10086dc:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10086e0:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c10086e7:	83 ec 04             	sub    $0x4,%esp
c10086ea:	6a 01                	push   $0x1
c10086ec:	50                   	push   %eax
c10086ed:	ff 75 10             	pushl  0x10(%ebp)
c10086f0:	e8 53 d7 ff ff       	call   c1005e48 <ide_write>
c10086f5:	83 c4 10             	add    $0x10,%esp
c10086f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10086fb:	8b 50 04             	mov    0x4(%eax),%edx
c10086fe:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008701:	01 c2                	add    %eax,%edx
c1008703:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008706:	89 50 04             	mov    %edx,0x4(%eax)
c1008709:	b8 01 00 00 00       	mov    $0x1,%eax
c100870e:	e9 d7 00 00 00       	jmp    c10087ea <sync_dir_entry+0x434>
c1008713:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008717:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c100871e:	83 ec 04             	sub    $0x4,%esp
c1008721:	6a 01                	push   $0x1
c1008723:	50                   	push   %eax
c1008724:	ff 75 10             	pushl  0x10(%ebp)
c1008727:	e8 df d6 ff ff       	call   c1005e0b <ide_read>
c100872c:	83 c4 10             	add    $0x10,%esp
c100872f:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c1008733:	eb 7f                	jmp    c10087b4 <sync_dir_entry+0x3fe>
c1008735:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1008739:	89 d0                	mov    %edx,%eax
c100873b:	01 c0                	add    %eax,%eax
c100873d:	01 d0                	add    %edx,%eax
c100873f:	c1 e0 03             	shl    $0x3,%eax
c1008742:	89 c2                	mov    %eax,%edx
c1008744:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008747:	01 d0                	add    %edx,%eax
c1008749:	8b 40 14             	mov    0x14(%eax),%eax
c100874c:	85 c0                	test   %eax,%eax
c100874e:	75 5a                	jne    c10087aa <sync_dir_entry+0x3f4>
c1008750:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1008754:	89 d0                	mov    %edx,%eax
c1008756:	01 c0                	add    %eax,%eax
c1008758:	01 d0                	add    %edx,%eax
c100875a:	c1 e0 03             	shl    $0x3,%eax
c100875d:	89 c2                	mov    %eax,%edx
c100875f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008762:	01 d0                	add    %edx,%eax
c1008764:	83 ec 04             	sub    $0x4,%esp
c1008767:	ff 75 e8             	pushl  -0x18(%ebp)
c100876a:	ff 75 0c             	pushl  0xc(%ebp)
c100876d:	50                   	push   %eax
c100876e:	e8 95 79 ff ff       	call   c1000108 <memcpy>
c1008773:	83 c4 10             	add    $0x10,%esp
c1008776:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100877a:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1008781:	83 ec 04             	sub    $0x4,%esp
c1008784:	6a 01                	push   $0x1
c1008786:	50                   	push   %eax
c1008787:	ff 75 10             	pushl  0x10(%ebp)
c100878a:	e8 b9 d6 ff ff       	call   c1005e48 <ide_write>
c100878f:	83 c4 10             	add    $0x10,%esp
c1008792:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008795:	8b 50 04             	mov    0x4(%eax),%edx
c1008798:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100879b:	01 c2                	add    %eax,%edx
c100879d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10087a0:	89 50 04             	mov    %edx,0x4(%eax)
c10087a3:	b8 01 00 00 00       	mov    $0x1,%eax
c10087a8:	eb 40                	jmp    c10087ea <sync_dir_entry+0x434>
c10087aa:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c10087ae:	83 c0 01             	add    $0x1,%eax
c10087b1:	88 45 f6             	mov    %al,-0xa(%ebp)
c10087b4:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c10087b8:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c10087bb:	0f 87 74 ff ff ff    	ja     c1008735 <sync_dir_entry+0x37f>
c10087c1:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10087c5:	83 c0 01             	add    $0x1,%eax
c10087c8:	88 45 f7             	mov    %al,-0x9(%ebp)
c10087cb:	80 7d f7 8b          	cmpb   $0x8b,-0x9(%ebp)
c10087cf:	0f 86 a4 fc ff ff    	jbe    c1008479 <sync_dir_entry+0xc3>
c10087d5:	83 ec 0c             	sub    $0xc,%esp
c10087d8:	68 d9 bb 00 c1       	push   $0xc100bbd9
c10087dd:	e8 81 cd ff ff       	call   c1005563 <printk>
c10087e2:	83 c4 10             	add    $0x10,%esp
c10087e5:	b8 00 00 00 00       	mov    $0x0,%eax
c10087ea:	8d 65 f8             	lea    -0x8(%ebp),%esp
c10087ed:	5b                   	pop    %ebx
c10087ee:	5f                   	pop    %edi
c10087ef:	5d                   	pop    %ebp
c10087f0:	c3                   	ret    

c10087f1 <delete_dir_entry>:
c10087f1:	55                   	push   %ebp
c10087f2:	89 e5                	mov    %esp,%ebp
c10087f4:	57                   	push   %edi
c10087f5:	53                   	push   %ebx
c10087f6:	81 ec 60 02 00 00    	sub    $0x260,%esp
c10087fc:	8b 45 0c             	mov    0xc(%ebp),%eax
c10087ff:	8b 00                	mov    (%eax),%eax
c1008801:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008804:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100880b:	8d 95 98 fd ff ff    	lea    -0x268(%ebp),%edx
c1008811:	b8 00 00 00 00       	mov    $0x0,%eax
c1008816:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100881b:	89 d7                	mov    %edx,%edi
c100881d:	f3 ab                	rep stos %eax,%es:(%edi)
c100881f:	eb 1a                	jmp    c100883b <delete_dir_entry+0x4a>
c1008821:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008824:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008827:	83 c2 04             	add    $0x4,%edx
c100882a:	8b 14 90             	mov    (%eax,%edx,4),%edx
c100882d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008830:	89 94 85 98 fd ff ff 	mov    %edx,-0x268(%ebp,%eax,4)
c1008837:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100883b:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c100883f:	76 e0                	jbe    c1008821 <delete_dir_entry+0x30>
c1008841:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008844:	8b 40 40             	mov    0x40(%eax),%eax
c1008847:	85 c0                	test   %eax,%eax
c1008849:	74 1e                	je     c1008869 <delete_dir_entry+0x78>
c100884b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100884e:	8b 50 40             	mov    0x40(%eax),%edx
c1008851:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1008857:	83 c0 30             	add    $0x30,%eax
c100885a:	83 ec 04             	sub    $0x4,%esp
c100885d:	6a 01                	push   $0x1
c100885f:	52                   	push   %edx
c1008860:	50                   	push   %eax
c1008861:	e8 a5 d5 ff ff       	call   c1005e0b <ide_read>
c1008866:	83 c4 10             	add    $0x10,%esp
c1008869:	8b 45 08             	mov    0x8(%ebp),%eax
c100886c:	8b 40 10             	mov    0x10(%eax),%eax
c100886f:	8b 40 30             	mov    0x30(%eax),%eax
c1008872:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008875:	b8 00 02 00 00       	mov    $0x200,%eax
c100887a:	ba 00 00 00 00       	mov    $0x0,%edx
c100887f:	f7 75 e0             	divl   -0x20(%ebp)
c1008882:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008885:	8b 45 14             	mov    0x14(%ebp),%eax
c1008888:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100888b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008892:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1008896:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100889d:	e9 d8 03 00 00       	jmp    c1008c7a <delete_dir_entry+0x489>
c10088a2:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c10088a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10088a9:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c10088b0:	85 c0                	test   %eax,%eax
c10088b2:	75 09                	jne    c10088bd <delete_dir_entry+0xcc>
c10088b4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10088b8:	e9 bd 03 00 00       	jmp    c1008c7a <delete_dir_entry+0x489>
c10088bd:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
c10088c1:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c10088c5:	88 45 ef             	mov    %al,-0x11(%ebp)
c10088c8:	83 ec 04             	sub    $0x4,%esp
c10088cb:	68 00 02 00 00       	push   $0x200
c10088d0:	6a 00                	push   $0x0
c10088d2:	ff 75 14             	pushl  0x14(%ebp)
c10088d5:	e8 d0 77 ff ff       	call   c10000aa <memset>
c10088da:	83 c4 10             	add    $0x10,%esp
c10088dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10088e0:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c10088e7:	83 ec 04             	sub    $0x4,%esp
c10088ea:	6a 01                	push   $0x1
c10088ec:	50                   	push   %eax
c10088ed:	ff 75 14             	pushl  0x14(%ebp)
c10088f0:	e8 16 d5 ff ff       	call   c1005e0b <ide_read>
c10088f5:	83 c4 10             	add    $0x10,%esp
c10088f8:	e9 0d 01 00 00       	jmp    c1008a0a <delete_dir_entry+0x219>
c10088fd:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008901:	89 d0                	mov    %edx,%eax
c1008903:	01 c0                	add    %eax,%eax
c1008905:	01 d0                	add    %edx,%eax
c1008907:	c1 e0 03             	shl    $0x3,%eax
c100890a:	89 c2                	mov    %eax,%edx
c100890c:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100890f:	01 d0                	add    %edx,%eax
c1008911:	8b 40 14             	mov    0x14(%eax),%eax
c1008914:	85 c0                	test   %eax,%eax
c1008916:	0f 84 e4 00 00 00    	je     c1008a00 <delete_dir_entry+0x20f>
c100891c:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008920:	89 d0                	mov    %edx,%eax
c1008922:	01 c0                	add    %eax,%eax
c1008924:	01 d0                	add    %edx,%eax
c1008926:	c1 e0 03             	shl    $0x3,%eax
c1008929:	89 c2                	mov    %eax,%edx
c100892b:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100892e:	01 d0                	add    %edx,%eax
c1008930:	83 ec 08             	sub    $0x8,%esp
c1008933:	68 ed bb 00 c1       	push   $0xc100bbed
c1008938:	50                   	push   %eax
c1008939:	e8 45 78 ff ff       	call   c1000183 <strcmp>
c100893e:	83 c4 10             	add    $0x10,%esp
c1008941:	85 c0                	test   %eax,%eax
c1008943:	75 09                	jne    c100894e <delete_dir_entry+0x15d>
c1008945:	c6 45 ed 01          	movb   $0x1,-0x13(%ebp)
c1008949:	e9 b2 00 00 00       	jmp    c1008a00 <delete_dir_entry+0x20f>
c100894e:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008952:	89 d0                	mov    %edx,%eax
c1008954:	01 c0                	add    %eax,%eax
c1008956:	01 d0                	add    %edx,%eax
c1008958:	c1 e0 03             	shl    $0x3,%eax
c100895b:	89 c2                	mov    %eax,%edx
c100895d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008960:	01 d0                	add    %edx,%eax
c1008962:	83 ec 08             	sub    $0x8,%esp
c1008965:	68 ed bb 00 c1       	push   $0xc100bbed
c100896a:	50                   	push   %eax
c100896b:	e8 13 78 ff ff       	call   c1000183 <strcmp>
c1008970:	83 c4 10             	add    $0x10,%esp
c1008973:	85 c0                	test   %eax,%eax
c1008975:	0f 84 85 00 00 00    	je     c1008a00 <delete_dir_entry+0x20f>
c100897b:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c100897f:	89 d0                	mov    %edx,%eax
c1008981:	01 c0                	add    %eax,%eax
c1008983:	01 d0                	add    %edx,%eax
c1008985:	c1 e0 03             	shl    $0x3,%eax
c1008988:	89 c2                	mov    %eax,%edx
c100898a:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100898d:	01 d0                	add    %edx,%eax
c100898f:	83 ec 08             	sub    $0x8,%esp
c1008992:	68 ef bb 00 c1       	push   $0xc100bbef
c1008997:	50                   	push   %eax
c1008998:	e8 e6 77 ff ff       	call   c1000183 <strcmp>
c100899d:	83 c4 10             	add    $0x10,%esp
c10089a0:	85 c0                	test   %eax,%eax
c10089a2:	74 5c                	je     c1008a00 <delete_dir_entry+0x20f>
c10089a4:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c10089a8:	83 c0 01             	add    $0x1,%eax
c10089ab:	88 45 ee             	mov    %al,-0x12(%ebp)
c10089ae:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c10089b2:	89 d0                	mov    %edx,%eax
c10089b4:	01 c0                	add    %eax,%eax
c10089b6:	01 d0                	add    %edx,%eax
c10089b8:	c1 e0 03             	shl    $0x3,%eax
c10089bb:	89 c2                	mov    %eax,%edx
c10089bd:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10089c0:	01 d0                	add    %edx,%eax
c10089c2:	8b 40 10             	mov    0x10(%eax),%eax
c10089c5:	39 45 10             	cmp    %eax,0x10(%ebp)
c10089c8:	75 36                	jne    c1008a00 <delete_dir_entry+0x20f>
c10089ca:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c10089ce:	74 19                	je     c10089e9 <delete_dir_entry+0x1f8>
c10089d0:	68 f2 bb 00 c1       	push   $0xc100bbf2
c10089d5:	68 f4 bc 00 c1       	push   $0xc100bcf4
c10089da:	68 10 01 00 00       	push   $0x110
c10089df:	68 44 bb 00 c1       	push   $0xc100bb44
c10089e4:	e8 82 79 ff ff       	call   c100036b <__PANIC>
c10089e9:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c10089ed:	89 d0                	mov    %edx,%eax
c10089ef:	01 c0                	add    %eax,%eax
c10089f1:	01 d0                	add    %edx,%eax
c10089f3:	c1 e0 03             	shl    $0x3,%eax
c10089f6:	89 c2                	mov    %eax,%edx
c10089f8:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10089fb:	01 d0                	add    %edx,%eax
c10089fd:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008a00:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008a04:	83 c0 01             	add    $0x1,%eax
c1008a07:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008a0a:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008a0e:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1008a11:	0f 87 e6 fe ff ff    	ja     c10088fd <delete_dir_entry+0x10c>
c1008a17:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1008a1b:	75 09                	jne    c1008a26 <delete_dir_entry+0x235>
c1008a1d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008a21:	e9 54 02 00 00       	jmp    c1008c7a <delete_dir_entry+0x489>
c1008a26:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
c1008a2a:	75 19                	jne    c1008a45 <delete_dir_entry+0x254>
c1008a2c:	68 0a bc 00 c1       	push   $0xc100bc0a
c1008a31:	68 f4 bc 00 c1       	push   $0xc100bcf4
c1008a36:	68 20 01 00 00       	push   $0x120
c1008a3b:	68 44 bb 00 c1       	push   $0xc100bb44
c1008a40:	e8 26 79 ff ff       	call   c100036b <__PANIC>
c1008a45:	80 7d ee 01          	cmpb   $0x1,-0x12(%ebp)
c1008a49:	0f 85 98 01 00 00    	jne    c1008be7 <delete_dir_entry+0x3f6>
c1008a4f:	80 7d ed 00          	cmpb   $0x0,-0x13(%ebp)
c1008a53:	0f 85 8e 01 00 00    	jne    c1008be7 <delete_dir_entry+0x3f6>
c1008a59:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008a5c:	8b 94 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%edx
c1008a63:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a66:	8b 40 10             	mov    0x10(%eax),%eax
c1008a69:	8b 40 28             	mov    0x28(%eax),%eax
c1008a6c:	29 c2                	sub    %eax,%edx
c1008a6e:	89 d0                	mov    %edx,%eax
c1008a70:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008a73:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008a76:	c1 e8 03             	shr    $0x3,%eax
c1008a79:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008a7c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008a7f:	83 e0 07             	and    $0x7,%eax
c1008a82:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008a85:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a88:	8b 50 18             	mov    0x18(%eax),%edx
c1008a8b:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008a8e:	01 d0                	add    %edx,%eax
c1008a90:	0f b6 00             	movzbl (%eax),%eax
c1008a93:	89 c2                	mov    %eax,%edx
c1008a95:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008a98:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008a9d:	89 c1                	mov    %eax,%ecx
c1008a9f:	d3 e3                	shl    %cl,%ebx
c1008aa1:	89 d8                	mov    %ebx,%eax
c1008aa3:	f7 d0                	not    %eax
c1008aa5:	89 d1                	mov    %edx,%ecx
c1008aa7:	21 c1                	and    %eax,%ecx
c1008aa9:	8b 45 08             	mov    0x8(%ebp),%eax
c1008aac:	8b 50 18             	mov    0x18(%eax),%edx
c1008aaf:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008ab2:	01 d0                	add    %edx,%eax
c1008ab4:	89 ca                	mov    %ecx,%edx
c1008ab6:	88 10                	mov    %dl,(%eax)
c1008ab8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008abd:	83 ec 04             	sub    $0x4,%esp
c1008ac0:	6a 01                	push   $0x1
c1008ac2:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008ac5:	50                   	push   %eax
c1008ac6:	e8 cb 06 00 00       	call   c1009196 <bitmap_sync>
c1008acb:	83 c4 10             	add    $0x10,%esp
c1008ace:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1008ad2:	77 15                	ja     c1008ae9 <delete_dir_entry+0x2f8>
c1008ad4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008ad7:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008ada:	83 c2 04             	add    $0x4,%edx
c1008add:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1008ae4:	e9 2c 01 00 00       	jmp    c1008c15 <delete_dir_entry+0x424>
c1008ae9:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1008af0:	c7 45 c8 0c 00 00 00 	movl   $0xc,-0x38(%ebp)
c1008af7:	eb 12                	jmp    c1008b0b <delete_dir_entry+0x31a>
c1008af9:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1008afc:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008b03:	85 c0                	test   %eax,%eax
c1008b05:	74 04                	je     c1008b0b <delete_dir_entry+0x31a>
c1008b07:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008b0b:	81 7d c8 8b 00 00 00 	cmpl   $0x8b,-0x38(%ebp)
c1008b12:	76 e5                	jbe    c1008af9 <delete_dir_entry+0x308>
c1008b14:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1008b18:	75 19                	jne    c1008b33 <delete_dir_entry+0x342>
c1008b1a:	68 1d bc 00 c1       	push   $0xc100bc1d
c1008b1f:	68 f4 bc 00 c1       	push   $0xc100bcf4
c1008b24:	68 36 01 00 00       	push   $0x136
c1008b29:	68 44 bb 00 c1       	push   $0xc100bb44
c1008b2e:	e8 38 78 ff ff       	call   c100036b <__PANIC>
c1008b33:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1008b37:	76 31                	jbe    c1008b6a <delete_dir_entry+0x379>
c1008b39:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008b3c:	c7 84 85 98 fd ff ff 	movl   $0x0,-0x268(%ebp,%eax,4)
c1008b43:	00 00 00 00 
c1008b47:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008b4a:	8b 50 40             	mov    0x40(%eax),%edx
c1008b4d:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1008b53:	83 c0 30             	add    $0x30,%eax
c1008b56:	83 ec 04             	sub    $0x4,%esp
c1008b59:	6a 01                	push   $0x1
c1008b5b:	52                   	push   %edx
c1008b5c:	50                   	push   %eax
c1008b5d:	e8 e6 d2 ff ff       	call   c1005e48 <ide_write>
c1008b62:	83 c4 10             	add    $0x10,%esp
c1008b65:	e9 ab 00 00 00       	jmp    c1008c15 <delete_dir_entry+0x424>
c1008b6a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008b6d:	8b 50 40             	mov    0x40(%eax),%edx
c1008b70:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b73:	8b 40 10             	mov    0x10(%eax),%eax
c1008b76:	8b 40 28             	mov    0x28(%eax),%eax
c1008b79:	29 c2                	sub    %eax,%edx
c1008b7b:	89 d0                	mov    %edx,%eax
c1008b7d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008b80:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008b83:	c1 e8 03             	shr    $0x3,%eax
c1008b86:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008b89:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008b8c:	83 e0 07             	and    $0x7,%eax
c1008b8f:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008b92:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b95:	8b 50 18             	mov    0x18(%eax),%edx
c1008b98:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008b9b:	01 d0                	add    %edx,%eax
c1008b9d:	0f b6 00             	movzbl (%eax),%eax
c1008ba0:	89 c2                	mov    %eax,%edx
c1008ba2:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008ba5:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008baa:	89 c1                	mov    %eax,%ecx
c1008bac:	d3 e3                	shl    %cl,%ebx
c1008bae:	89 d8                	mov    %ebx,%eax
c1008bb0:	f7 d0                	not    %eax
c1008bb2:	89 d1                	mov    %edx,%ecx
c1008bb4:	21 c1                	and    %eax,%ecx
c1008bb6:	8b 45 08             	mov    0x8(%ebp),%eax
c1008bb9:	8b 50 18             	mov    0x18(%eax),%edx
c1008bbc:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008bbf:	01 d0                	add    %edx,%eax
c1008bc1:	89 ca                	mov    %ecx,%edx
c1008bc3:	88 10                	mov    %dl,(%eax)
c1008bc5:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008bca:	83 ec 04             	sub    $0x4,%esp
c1008bcd:	6a 01                	push   $0x1
c1008bcf:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008bd2:	50                   	push   %eax
c1008bd3:	e8 be 05 00 00       	call   c1009196 <bitmap_sync>
c1008bd8:	83 c4 10             	add    $0x10,%esp
c1008bdb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008bde:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1008be5:	eb 2e                	jmp    c1008c15 <delete_dir_entry+0x424>
c1008be7:	83 ec 04             	sub    $0x4,%esp
c1008bea:	ff 75 e0             	pushl  -0x20(%ebp)
c1008bed:	6a 00                	push   $0x0
c1008bef:	ff 75 f0             	pushl  -0x10(%ebp)
c1008bf2:	e8 b3 74 ff ff       	call   c10000aa <memset>
c1008bf7:	83 c4 10             	add    $0x10,%esp
c1008bfa:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008bfd:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008c04:	83 ec 04             	sub    $0x4,%esp
c1008c07:	6a 01                	push   $0x1
c1008c09:	50                   	push   %eax
c1008c0a:	ff 75 14             	pushl  0x14(%ebp)
c1008c0d:	e8 36 d2 ff ff       	call   c1005e48 <ide_write>
c1008c12:	83 c4 10             	add    $0x10,%esp
c1008c15:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008c18:	8b 40 04             	mov    0x4(%eax),%eax
c1008c1b:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c1008c1e:	76 19                	jbe    c1008c39 <delete_dir_entry+0x448>
c1008c20:	68 34 bc 00 c1       	push   $0xc100bc34
c1008c25:	68 f4 bc 00 c1       	push   $0xc100bcf4
c1008c2a:	68 4d 01 00 00       	push   $0x14d
c1008c2f:	68 44 bb 00 c1       	push   $0xc100bb44
c1008c34:	e8 32 77 ff ff       	call   c100036b <__PANIC>
c1008c39:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008c3c:	8b 40 04             	mov    0x4(%eax),%eax
c1008c3f:	2b 45 e0             	sub    -0x20(%ebp),%eax
c1008c42:	89 c2                	mov    %eax,%edx
c1008c44:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008c47:	89 50 04             	mov    %edx,0x4(%eax)
c1008c4a:	83 ec 04             	sub    $0x4,%esp
c1008c4d:	68 00 04 00 00       	push   $0x400
c1008c52:	6a 00                	push   $0x0
c1008c54:	ff 75 14             	pushl  0x14(%ebp)
c1008c57:	e8 4e 74 ff ff       	call   c10000aa <memset>
c1008c5c:	83 c4 10             	add    $0x10,%esp
c1008c5f:	83 ec 04             	sub    $0x4,%esp
c1008c62:	ff 75 14             	pushl  0x14(%ebp)
c1008c65:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008c68:	ff 75 08             	pushl  0x8(%ebp)
c1008c6b:	e8 44 15 00 00       	call   c100a1b4 <inode_sync>
c1008c70:	83 c4 10             	add    $0x10,%esp
c1008c73:	b8 01 00 00 00       	mov    $0x1,%eax
c1008c78:	eb 12                	jmp    c1008c8c <delete_dir_entry+0x49b>
c1008c7a:	81 7d f4 8b 00 00 00 	cmpl   $0x8b,-0xc(%ebp)
c1008c81:	0f 86 1b fc ff ff    	jbe    c10088a2 <delete_dir_entry+0xb1>
c1008c87:	b8 00 00 00 00       	mov    $0x0,%eax
c1008c8c:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1008c8f:	5b                   	pop    %ebx
c1008c90:	5f                   	pop    %edi
c1008c91:	5d                   	pop    %ebp
c1008c92:	c3                   	ret    

c1008c93 <dir_read>:
c1008c93:	55                   	push   %ebp
c1008c94:	89 e5                	mov    %esp,%ebp
c1008c96:	57                   	push   %edi
c1008c97:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1008c9d:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ca0:	83 c0 08             	add    $0x8,%eax
c1008ca3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008ca6:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ca9:	8b 00                	mov    (%eax),%eax
c1008cab:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008cae:	8d 95 a8 fd ff ff    	lea    -0x258(%ebp),%edx
c1008cb4:	b8 00 00 00 00       	mov    $0x0,%eax
c1008cb9:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1008cbe:	89 d7                	mov    %edx,%edi
c1008cc0:	f3 ab                	rep stos %eax,%es:(%edi)
c1008cc2:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
c1008cc9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008cd0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1008cd7:	eb 1a                	jmp    c1008cf3 <dir_read+0x60>
c1008cd9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008cdc:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008cdf:	83 c2 04             	add    $0x4,%edx
c1008ce2:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1008ce5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008ce8:	89 94 85 a8 fd ff ff 	mov    %edx,-0x258(%ebp,%eax,4)
c1008cef:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1008cf3:	83 7d f0 0b          	cmpl   $0xb,-0x10(%ebp)
c1008cf7:	76 e0                	jbe    c1008cd9 <dir_read+0x46>
c1008cf9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008cfc:	8b 40 40             	mov    0x40(%eax),%eax
c1008cff:	85 c0                	test   %eax,%eax
c1008d01:	74 25                	je     c1008d28 <dir_read+0x95>
c1008d03:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008d06:	8b 50 40             	mov    0x40(%eax),%edx
c1008d09:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
c1008d0f:	83 c0 30             	add    $0x30,%eax
c1008d12:	83 ec 04             	sub    $0x4,%esp
c1008d15:	6a 01                	push   $0x1
c1008d17:	52                   	push   %edx
c1008d18:	50                   	push   %eax
c1008d19:	e8 ed d0 ff ff       	call   c1005e0b <ide_read>
c1008d1e:	83 c4 10             	add    $0x10,%esp
c1008d21:	c7 45 f4 8c 00 00 00 	movl   $0x8c,-0xc(%ebp)
c1008d28:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008d2f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1008d36:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008d3b:	8b 40 10             	mov    0x10(%eax),%eax
c1008d3e:	8b 40 30             	mov    0x30(%eax),%eax
c1008d41:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008d44:	b8 00 02 00 00       	mov    $0x200,%eax
c1008d49:	ba 00 00 00 00       	mov    $0x0,%edx
c1008d4e:	f7 75 dc             	divl   -0x24(%ebp)
c1008d51:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008d54:	e9 f9 00 00 00       	jmp    c1008e52 <dir_read+0x1bf>
c1008d59:	8b 45 08             	mov    0x8(%ebp),%eax
c1008d5c:	8b 50 04             	mov    0x4(%eax),%edx
c1008d5f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008d62:	8b 40 04             	mov    0x4(%eax),%eax
c1008d65:	39 c2                	cmp    %eax,%edx
c1008d67:	72 0a                	jb     c1008d73 <dir_read+0xe0>
c1008d69:	b8 00 00 00 00       	mov    $0x0,%eax
c1008d6e:	e9 f0 00 00 00       	jmp    c1008e63 <dir_read+0x1d0>
c1008d73:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008d76:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1008d7d:	85 c0                	test   %eax,%eax
c1008d7f:	75 09                	jne    c1008d8a <dir_read+0xf7>
c1008d81:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1008d85:	e9 c8 00 00 00       	jmp    c1008e52 <dir_read+0x1bf>
c1008d8a:	83 ec 04             	sub    $0x4,%esp
c1008d8d:	68 00 02 00 00       	push   $0x200
c1008d92:	6a 00                	push   $0x0
c1008d94:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008d97:	e8 0e 73 ff ff       	call   c10000aa <memset>
c1008d9c:	83 c4 10             	add    $0x10,%esp
c1008d9f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008da2:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1008da9:	83 ec 04             	sub    $0x4,%esp
c1008dac:	6a 01                	push   $0x1
c1008dae:	50                   	push   %eax
c1008daf:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008db2:	e8 54 d0 ff ff       	call   c1005e0b <ide_read>
c1008db7:	83 c4 10             	add    $0x10,%esp
c1008dba:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1008dc1:	eb 7f                	jmp    c1008e42 <dir_read+0x1af>
c1008dc3:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1008dc6:	89 d0                	mov    %edx,%eax
c1008dc8:	01 c0                	add    %eax,%eax
c1008dca:	01 d0                	add    %edx,%eax
c1008dcc:	c1 e0 03             	shl    $0x3,%eax
c1008dcf:	89 c2                	mov    %eax,%edx
c1008dd1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008dd4:	01 d0                	add    %edx,%eax
c1008dd6:	8b 40 14             	mov    0x14(%eax),%eax
c1008dd9:	85 c0                	test   %eax,%eax
c1008ddb:	74 61                	je     c1008e3e <dir_read+0x1ab>
c1008ddd:	8b 45 08             	mov    0x8(%ebp),%eax
c1008de0:	8b 40 04             	mov    0x4(%eax),%eax
c1008de3:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c1008de6:	73 0c                	jae    c1008df4 <dir_read+0x161>
c1008de8:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008deb:	01 45 e8             	add    %eax,-0x18(%ebp)
c1008dee:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1008df2:	eb 4e                	jmp    c1008e42 <dir_read+0x1af>
c1008df4:	8b 45 08             	mov    0x8(%ebp),%eax
c1008df7:	8b 40 04             	mov    0x4(%eax),%eax
c1008dfa:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c1008dfd:	74 19                	je     c1008e18 <dir_read+0x185>
c1008dff:	68 58 bc 00 c1       	push   $0xc100bc58
c1008e04:	68 08 bd 00 c1       	push   $0xc100bd08
c1008e09:	68 7f 01 00 00       	push   $0x17f
c1008e0e:	68 44 bb 00 c1       	push   $0xc100bb44
c1008e13:	e8 53 75 ff ff       	call   c100036b <__PANIC>
c1008e18:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e1b:	8b 50 04             	mov    0x4(%eax),%edx
c1008e1e:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008e21:	01 c2                	add    %eax,%edx
c1008e23:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e26:	89 50 04             	mov    %edx,0x4(%eax)
c1008e29:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1008e2c:	89 d0                	mov    %edx,%eax
c1008e2e:	01 c0                	add    %eax,%eax
c1008e30:	01 d0                	add    %edx,%eax
c1008e32:	c1 e0 03             	shl    $0x3,%eax
c1008e35:	89 c2                	mov    %eax,%edx
c1008e37:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008e3a:	01 d0                	add    %edx,%eax
c1008e3c:	eb 25                	jmp    c1008e63 <dir_read+0x1d0>
c1008e3e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1008e42:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008e45:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c1008e48:	0f 82 75 ff ff ff    	jb     c1008dc3 <dir_read+0x130>
c1008e4e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1008e52:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008e55:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1008e58:	0f 82 fb fe ff ff    	jb     c1008d59 <dir_read+0xc6>
c1008e5e:	b8 00 00 00 00       	mov    $0x0,%eax
c1008e63:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1008e66:	c9                   	leave  
c1008e67:	c3                   	ret    

c1008e68 <dir_is_empty>:
c1008e68:	55                   	push   %ebp
c1008e69:	89 e5                	mov    %esp,%ebp
c1008e6b:	83 ec 10             	sub    $0x10,%esp
c1008e6e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e71:	8b 00                	mov    (%eax),%eax
c1008e73:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1008e76:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1008e79:	8b 50 04             	mov    0x4(%eax),%edx
c1008e7c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008e81:	8b 40 10             	mov    0x10(%eax),%eax
c1008e84:	8b 40 30             	mov    0x30(%eax),%eax
c1008e87:	01 c0                	add    %eax,%eax
c1008e89:	39 c2                	cmp    %eax,%edx
c1008e8b:	0f 94 c0             	sete   %al
c1008e8e:	c9                   	leave  
c1008e8f:	c3                   	ret    

c1008e90 <dir_remove>:
c1008e90:	55                   	push   %ebp
c1008e91:	89 e5                	mov    %esp,%ebp
c1008e93:	83 ec 18             	sub    $0x18,%esp
c1008e96:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008e99:	8b 00                	mov    (%eax),%eax
c1008e9b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008e9e:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c1008ea5:	eb 2d                	jmp    c1008ed4 <dir_remove+0x44>
c1008ea7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008eaa:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008ead:	83 c2 04             	add    $0x4,%edx
c1008eb0:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008eb3:	85 c0                	test   %eax,%eax
c1008eb5:	74 19                	je     c1008ed0 <dir_remove+0x40>
c1008eb7:	68 7c bc 00 c1       	push   $0xc100bc7c
c1008ebc:	68 14 bd 00 c1       	push   $0xc100bd14
c1008ec1:	68 96 01 00 00       	push   $0x196
c1008ec6:	68 44 bb 00 c1       	push   $0xc100bb44
c1008ecb:	e8 9b 74 ff ff       	call   c100036b <__PANIC>
c1008ed0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008ed4:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
c1008ed8:	7e cd                	jle    c1008ea7 <dir_remove+0x17>
c1008eda:	83 ec 08             	sub    $0x8,%esp
c1008edd:	6a 02                	push   $0x2
c1008edf:	68 00 04 00 00       	push   $0x400
c1008ee4:	e8 26 9d ff ff       	call   c1002c0f <vmm_malloc>
c1008ee9:	83 c4 10             	add    $0x10,%esp
c1008eec:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008eef:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1008ef3:	75 17                	jne    c1008f0c <dir_remove+0x7c>
c1008ef5:	83 ec 0c             	sub    $0xc,%esp
c1008ef8:	68 a8 bc 00 c1       	push   $0xc100bca8
c1008efd:	e8 61 c6 ff ff       	call   c1005563 <printk>
c1008f02:	83 c4 10             	add    $0x10,%esp
c1008f05:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008f0a:	eb 4a                	jmp    c1008f56 <dir_remove+0xc6>
c1008f0c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008f0f:	8b 10                	mov    (%eax),%edx
c1008f11:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008f16:	ff 75 ec             	pushl  -0x14(%ebp)
c1008f19:	52                   	push   %edx
c1008f1a:	ff 75 08             	pushl  0x8(%ebp)
c1008f1d:	50                   	push   %eax
c1008f1e:	e8 ce f8 ff ff       	call   c10087f1 <delete_dir_entry>
c1008f23:	83 c4 10             	add    $0x10,%esp
c1008f26:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008f29:	8b 10                	mov    (%eax),%edx
c1008f2b:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008f30:	83 ec 08             	sub    $0x8,%esp
c1008f33:	52                   	push   %edx
c1008f34:	50                   	push   %eax
c1008f35:	e8 87 15 00 00       	call   c100a4c1 <inode_release>
c1008f3a:	83 c4 10             	add    $0x10,%esp
c1008f3d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008f40:	83 ec 08             	sub    $0x8,%esp
c1008f43:	68 00 04 00 00       	push   $0x400
c1008f48:	50                   	push   %eax
c1008f49:	e8 e6 9d ff ff       	call   c1002d34 <vmm_free>
c1008f4e:	83 c4 10             	add    $0x10,%esp
c1008f51:	b8 00 00 00 00       	mov    $0x0,%eax
c1008f56:	c9                   	leave  
c1008f57:	c3                   	ret    

c1008f58 <hash32>:
c1008f58:	55                   	push   %ebp
c1008f59:	89 e5                	mov    %esp,%ebp
c1008f5b:	83 ec 10             	sub    $0x10,%esp
c1008f5e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f61:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1008f67:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1008f6a:	b8 20 00 00 00       	mov    $0x20,%eax
c1008f6f:	2b 45 0c             	sub    0xc(%ebp),%eax
c1008f72:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1008f75:	89 c1                	mov    %eax,%ecx
c1008f77:	d3 ea                	shr    %cl,%edx
c1008f79:	89 d0                	mov    %edx,%eax
c1008f7b:	c9                   	leave  
c1008f7c:	c3                   	ret    

c1008f7d <get_free_slot_in_global>:
c1008f7d:	55                   	push   %ebp
c1008f7e:	89 e5                	mov    %esp,%ebp
c1008f80:	83 ec 10             	sub    $0x10,%esp
c1008f83:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
c1008f8a:	eb 1b                	jmp    c1008fa7 <get_free_slot_in_global+0x2a>
c1008f8c:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1008f8f:	89 d0                	mov    %edx,%eax
c1008f91:	01 c0                	add    %eax,%eax
c1008f93:	01 d0                	add    %edx,%eax
c1008f95:	c1 e0 02             	shl    $0x2,%eax
c1008f98:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1008f9d:	8b 00                	mov    (%eax),%eax
c1008f9f:	85 c0                	test   %eax,%eax
c1008fa1:	74 0c                	je     c1008faf <get_free_slot_in_global+0x32>
c1008fa3:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1008fa7:	83 7d fc 1f          	cmpl   $0x1f,-0x4(%ebp)
c1008fab:	76 df                	jbe    c1008f8c <get_free_slot_in_global+0xf>
c1008fad:	eb 01                	jmp    c1008fb0 <get_free_slot_in_global+0x33>
c1008faf:	90                   	nop
c1008fb0:	83 7d fc 20          	cmpl   $0x20,-0x4(%ebp)
c1008fb4:	75 07                	jne    c1008fbd <get_free_slot_in_global+0x40>
c1008fb6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008fbb:	eb 03                	jmp    c1008fc0 <get_free_slot_in_global+0x43>
c1008fbd:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1008fc0:	c9                   	leave  
c1008fc1:	c3                   	ret    

c1008fc2 <task_fd_install>:
c1008fc2:	55                   	push   %ebp
c1008fc3:	89 e5                	mov    %esp,%ebp
c1008fc5:	83 ec 10             	sub    $0x10,%esp
c1008fc8:	c6 45 ff 03          	movb   $0x3,-0x1(%ebp)
c1008fcc:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1008fd1:	0f be 55 ff          	movsbl -0x1(%ebp),%edx
c1008fd5:	83 c2 1c             	add    $0x1c,%edx
c1008fd8:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c1008fdc:	83 f8 ff             	cmp    $0xffffffff,%eax
c1008fdf:	75 15                	jne    c1008ff6 <task_fd_install+0x34>
c1008fe1:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1008fe6:	0f be 4d ff          	movsbl -0x1(%ebp),%ecx
c1008fea:	8b 55 08             	mov    0x8(%ebp),%edx
c1008fed:	83 c1 1c             	add    $0x1c,%ecx
c1008ff0:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
c1008ff4:	eb 0c                	jmp    c1009002 <task_fd_install+0x40>
c1008ff6:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
c1008ffa:	83 c0 01             	add    $0x1,%eax
c1008ffd:	88 45 ff             	mov    %al,-0x1(%ebp)
c1009000:	eb ca                	jmp    c1008fcc <task_fd_install+0xa>
c1009002:	0f be 45 ff          	movsbl -0x1(%ebp),%eax
c1009006:	c9                   	leave  
c1009007:	c3                   	ret    

c1009008 <inode_bitmap_alloc>:
c1009008:	55                   	push   %ebp
c1009009:	89 e5                	mov    %esp,%ebp
c100900b:	53                   	push   %ebx
c100900c:	83 ec 10             	sub    $0x10,%esp
c100900f:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1009016:	eb 04                	jmp    c100901c <inode_bitmap_alloc+0x14>
c1009018:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c100901c:	8b 45 08             	mov    0x8(%ebp),%eax
c100901f:	8b 50 20             	mov    0x20(%eax),%edx
c1009022:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009025:	01 d0                	add    %edx,%eax
c1009027:	0f b6 00             	movzbl (%eax),%eax
c100902a:	3c ff                	cmp    $0xff,%al
c100902c:	75 0b                	jne    c1009039 <inode_bitmap_alloc+0x31>
c100902e:	8b 45 08             	mov    0x8(%ebp),%eax
c1009031:	8b 40 1c             	mov    0x1c(%eax),%eax
c1009034:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1009037:	72 df                	jb     c1009018 <inode_bitmap_alloc+0x10>
c1009039:	8b 45 08             	mov    0x8(%ebp),%eax
c100903c:	8b 40 1c             	mov    0x1c(%eax),%eax
c100903f:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1009042:	75 07                	jne    c100904b <inode_bitmap_alloc+0x43>
c1009044:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009049:	eb 77                	jmp    c10090c2 <inode_bitmap_alloc+0xba>
c100904b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1009052:	eb 04                	jmp    c1009058 <inode_bitmap_alloc+0x50>
c1009054:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1009058:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100905b:	ba 01 00 00 00       	mov    $0x1,%edx
c1009060:	89 c1                	mov    %eax,%ecx
c1009062:	d3 e2                	shl    %cl,%edx
c1009064:	89 d0                	mov    %edx,%eax
c1009066:	89 c1                	mov    %eax,%ecx
c1009068:	8b 45 08             	mov    0x8(%ebp),%eax
c100906b:	8b 50 20             	mov    0x20(%eax),%edx
c100906e:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009071:	01 d0                	add    %edx,%eax
c1009073:	0f b6 00             	movzbl (%eax),%eax
c1009076:	21 c8                	and    %ecx,%eax
c1009078:	84 c0                	test   %al,%al
c100907a:	75 d8                	jne    c1009054 <inode_bitmap_alloc+0x4c>
c100907c:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100907f:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c1009086:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009089:	01 d0                	add    %edx,%eax
c100908b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100908e:	8b 45 08             	mov    0x8(%ebp),%eax
c1009091:	8b 50 20             	mov    0x20(%eax),%edx
c1009094:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009097:	01 d0                	add    %edx,%eax
c1009099:	0f b6 00             	movzbl (%eax),%eax
c100909c:	89 c3                	mov    %eax,%ebx
c100909e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10090a1:	ba 01 00 00 00       	mov    $0x1,%edx
c10090a6:	89 c1                	mov    %eax,%ecx
c10090a8:	d3 e2                	shl    %cl,%edx
c10090aa:	89 d0                	mov    %edx,%eax
c10090ac:	09 c3                	or     %eax,%ebx
c10090ae:	89 d9                	mov    %ebx,%ecx
c10090b0:	8b 45 08             	mov    0x8(%ebp),%eax
c10090b3:	8b 50 20             	mov    0x20(%eax),%edx
c10090b6:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10090b9:	01 d0                	add    %edx,%eax
c10090bb:	89 ca                	mov    %ecx,%edx
c10090bd:	88 10                	mov    %dl,(%eax)
c10090bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10090c2:	83 c4 10             	add    $0x10,%esp
c10090c5:	5b                   	pop    %ebx
c10090c6:	5d                   	pop    %ebp
c10090c7:	c3                   	ret    

c10090c8 <block_bitmap_alloc>:
c10090c8:	55                   	push   %ebp
c10090c9:	89 e5                	mov    %esp,%ebp
c10090cb:	53                   	push   %ebx
c10090cc:	83 ec 10             	sub    $0x10,%esp
c10090cf:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c10090d6:	eb 04                	jmp    c10090dc <block_bitmap_alloc+0x14>
c10090d8:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10090dc:	8b 45 08             	mov    0x8(%ebp),%eax
c10090df:	8b 50 18             	mov    0x18(%eax),%edx
c10090e2:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10090e5:	01 d0                	add    %edx,%eax
c10090e7:	0f b6 00             	movzbl (%eax),%eax
c10090ea:	3c ff                	cmp    $0xff,%al
c10090ec:	75 0b                	jne    c10090f9 <block_bitmap_alloc+0x31>
c10090ee:	8b 45 08             	mov    0x8(%ebp),%eax
c10090f1:	8b 40 14             	mov    0x14(%eax),%eax
c10090f4:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10090f7:	72 df                	jb     c10090d8 <block_bitmap_alloc+0x10>
c10090f9:	8b 45 08             	mov    0x8(%ebp),%eax
c10090fc:	8b 40 14             	mov    0x14(%eax),%eax
c10090ff:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1009102:	75 0a                	jne    c100910e <block_bitmap_alloc+0x46>
c1009104:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009109:	e9 82 00 00 00       	jmp    c1009190 <block_bitmap_alloc+0xc8>
c100910e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1009115:	eb 04                	jmp    c100911b <block_bitmap_alloc+0x53>
c1009117:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100911b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100911e:	ba 01 00 00 00       	mov    $0x1,%edx
c1009123:	89 c1                	mov    %eax,%ecx
c1009125:	d3 e2                	shl    %cl,%edx
c1009127:	89 d0                	mov    %edx,%eax
c1009129:	89 c1                	mov    %eax,%ecx
c100912b:	8b 45 08             	mov    0x8(%ebp),%eax
c100912e:	8b 50 18             	mov    0x18(%eax),%edx
c1009131:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009134:	01 d0                	add    %edx,%eax
c1009136:	0f b6 00             	movzbl (%eax),%eax
c1009139:	21 c8                	and    %ecx,%eax
c100913b:	84 c0                	test   %al,%al
c100913d:	75 d8                	jne    c1009117 <block_bitmap_alloc+0x4f>
c100913f:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009142:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c1009149:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100914c:	01 d0                	add    %edx,%eax
c100914e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009151:	8b 45 08             	mov    0x8(%ebp),%eax
c1009154:	8b 50 18             	mov    0x18(%eax),%edx
c1009157:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100915a:	01 d0                	add    %edx,%eax
c100915c:	0f b6 00             	movzbl (%eax),%eax
c100915f:	89 c3                	mov    %eax,%ebx
c1009161:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009164:	ba 01 00 00 00       	mov    $0x1,%edx
c1009169:	89 c1                	mov    %eax,%ecx
c100916b:	d3 e2                	shl    %cl,%edx
c100916d:	89 d0                	mov    %edx,%eax
c100916f:	09 c3                	or     %eax,%ebx
c1009171:	89 d9                	mov    %ebx,%ecx
c1009173:	8b 45 08             	mov    0x8(%ebp),%eax
c1009176:	8b 50 18             	mov    0x18(%eax),%edx
c1009179:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100917c:	01 d0                	add    %edx,%eax
c100917e:	89 ca                	mov    %ecx,%edx
c1009180:	88 10                	mov    %dl,(%eax)
c1009182:	8b 45 08             	mov    0x8(%ebp),%eax
c1009185:	8b 40 10             	mov    0x10(%eax),%eax
c1009188:	8b 50 28             	mov    0x28(%eax),%edx
c100918b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100918e:	01 d0                	add    %edx,%eax
c1009190:	83 c4 10             	add    $0x10,%esp
c1009193:	5b                   	pop    %ebx
c1009194:	5d                   	pop    %ebp
c1009195:	c3                   	ret    

c1009196 <bitmap_sync>:
c1009196:	55                   	push   %ebp
c1009197:	89 e5                	mov    %esp,%ebp
c1009199:	83 ec 28             	sub    $0x28,%esp
c100919c:	8b 45 10             	mov    0x10(%ebp),%eax
c100919f:	88 45 e4             	mov    %al,-0x1c(%ebp)
c10091a2:	8b 45 0c             	mov    0xc(%ebp),%eax
c10091a5:	c1 e8 0c             	shr    $0xc,%eax
c10091a8:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10091ab:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10091ae:	c1 e0 09             	shl    $0x9,%eax
c10091b1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10091b4:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10091b8:	85 c0                	test   %eax,%eax
c10091ba:	74 07                	je     c10091c3 <bitmap_sync+0x2d>
c10091bc:	83 f8 01             	cmp    $0x1,%eax
c10091bf:	74 23                	je     c10091e4 <bitmap_sync+0x4e>
c10091c1:	eb 41                	jmp    c1009204 <bitmap_sync+0x6e>
c10091c3:	8b 45 08             	mov    0x8(%ebp),%eax
c10091c6:	8b 40 10             	mov    0x10(%eax),%eax
c10091c9:	8b 50 18             	mov    0x18(%eax),%edx
c10091cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10091cf:	01 d0                	add    %edx,%eax
c10091d1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10091d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10091d7:	8b 50 20             	mov    0x20(%eax),%edx
c10091da:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10091dd:	01 d0                	add    %edx,%eax
c10091df:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10091e2:	eb 20                	jmp    c1009204 <bitmap_sync+0x6e>
c10091e4:	8b 45 08             	mov    0x8(%ebp),%eax
c10091e7:	8b 40 10             	mov    0x10(%eax),%eax
c10091ea:	8b 50 10             	mov    0x10(%eax),%edx
c10091ed:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10091f0:	01 d0                	add    %edx,%eax
c10091f2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10091f5:	8b 45 08             	mov    0x8(%ebp),%eax
c10091f8:	8b 50 18             	mov    0x18(%eax),%edx
c10091fb:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10091fe:	01 d0                	add    %edx,%eax
c1009200:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009203:	90                   	nop
c1009204:	83 ec 04             	sub    $0x4,%esp
c1009207:	6a 01                	push   $0x1
c1009209:	ff 75 f4             	pushl  -0xc(%ebp)
c100920c:	ff 75 f0             	pushl  -0x10(%ebp)
c100920f:	e8 34 cc ff ff       	call   c1005e48 <ide_write>
c1009214:	83 c4 10             	add    $0x10,%esp
c1009217:	90                   	nop
c1009218:	c9                   	leave  
c1009219:	c3                   	ret    

c100921a <file_create>:
c100921a:	55                   	push   %ebp
c100921b:	89 e5                	mov    %esp,%ebp
c100921d:	83 ec 58             	sub    $0x58,%esp
c1009220:	8b 45 10             	mov    0x10(%ebp),%eax
c1009223:	88 45 b4             	mov    %al,-0x4c(%ebp)
c1009226:	83 ec 08             	sub    $0x8,%esp
c1009229:	6a 02                	push   $0x2
c100922b:	68 00 04 00 00       	push   $0x400
c1009230:	e8 da 99 ff ff       	call   c1002c0f <vmm_malloc>
c1009235:	83 c4 10             	add    $0x10,%esp
c1009238:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100923b:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100923f:	75 1a                	jne    c100925b <file_create+0x41>
c1009241:	83 ec 0c             	sub    $0xc,%esp
c1009244:	68 20 bd 00 c1       	push   $0xc100bd20
c1009249:	e8 15 c3 ff ff       	call   c1005563 <printk>
c100924e:	83 c4 10             	add    $0x10,%esp
c1009251:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009256:	e9 9f 02 00 00       	jmp    c10094fa <file_create+0x2e0>
c100925b:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100925f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009264:	83 ec 0c             	sub    $0xc,%esp
c1009267:	50                   	push   %eax
c1009268:	e8 9b fd ff ff       	call   c1009008 <inode_bitmap_alloc>
c100926d:	83 c4 10             	add    $0x10,%esp
c1009270:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009273:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1009277:	75 1a                	jne    c1009293 <file_create+0x79>
c1009279:	83 ec 0c             	sub    $0xc,%esp
c100927c:	68 50 bd 00 c1       	push   $0xc100bd50
c1009281:	e8 dd c2 ff ff       	call   c1005563 <printk>
c1009286:	83 c4 10             	add    $0x10,%esp
c1009289:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100928e:	e9 67 02 00 00       	jmp    c10094fa <file_create+0x2e0>
c1009293:	83 ec 08             	sub    $0x8,%esp
c1009296:	6a 02                	push   $0x2
c1009298:	6a 44                	push   $0x44
c100929a:	e8 70 99 ff ff       	call   c1002c0f <vmm_malloc>
c100929f:	83 c4 10             	add    $0x10,%esp
c10092a2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10092a5:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c10092a9:	75 19                	jne    c10092c4 <file_create+0xaa>
c10092ab:	83 ec 0c             	sub    $0xc,%esp
c10092ae:	68 78 bd 00 c1       	push   $0xc100bd78
c10092b3:	e8 ab c2 ff ff       	call   c1005563 <printk>
c10092b8:	83 c4 10             	add    $0x10,%esp
c10092bb:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10092bf:	e9 88 01 00 00       	jmp    c100944c <file_create+0x232>
c10092c4:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10092c7:	83 ec 08             	sub    $0x8,%esp
c10092ca:	ff 75 e4             	pushl  -0x1c(%ebp)
c10092cd:	50                   	push   %eax
c10092ce:	e8 b3 14 00 00       	call   c100a786 <inode_init>
c10092d3:	83 c4 10             	add    $0x10,%esp
c10092d6:	e8 a2 fc ff ff       	call   c1008f7d <get_free_slot_in_global>
c10092db:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10092de:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10092e2:	75 19                	jne    c10092fd <file_create+0xe3>
c10092e4:	83 ec 0c             	sub    $0xc,%esp
c10092e7:	68 a3 bd 00 c1       	push   $0xc100bda3
c10092ec:	e8 72 c2 ff ff       	call   c1005563 <printk>
c10092f1:	83 c4 10             	add    $0x10,%esp
c10092f4:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10092f8:	e9 4f 01 00 00       	jmp    c100944c <file_create+0x232>
c10092fd:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009300:	89 d0                	mov    %edx,%eax
c1009302:	01 c0                	add    %eax,%eax
c1009304:	01 d0                	add    %edx,%eax
c1009306:	c1 e0 02             	shl    $0x2,%eax
c1009309:	8d 90 48 42 a1 c1    	lea    -0x3e5ebdb8(%eax),%edx
c100930f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009312:	89 02                	mov    %eax,(%edx)
c1009314:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009317:	89 d0                	mov    %edx,%eax
c1009319:	01 c0                	add    %eax,%eax
c100931b:	01 d0                	add    %edx,%eax
c100931d:	c1 e0 02             	shl    $0x2,%eax
c1009320:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1009325:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100932b:	0f b6 4d b4          	movzbl -0x4c(%ebp),%ecx
c100932f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009332:	89 d0                	mov    %edx,%eax
c1009334:	01 c0                	add    %eax,%eax
c1009336:	01 d0                	add    %edx,%eax
c1009338:	c1 e0 02             	shl    $0x2,%eax
c100933b:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c1009340:	89 08                	mov    %ecx,(%eax)
c1009342:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009345:	89 d0                	mov    %edx,%eax
c1009347:	01 c0                	add    %eax,%eax
c1009349:	01 d0                	add    %edx,%eax
c100934b:	c1 e0 02             	shl    $0x2,%eax
c100934e:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1009353:	8b 00                	mov    (%eax),%eax
c1009355:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1009359:	83 ec 04             	sub    $0x4,%esp
c100935c:	6a 18                	push   $0x18
c100935e:	6a 00                	push   $0x0
c1009360:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1009363:	50                   	push   %eax
c1009364:	e8 41 6d ff ff       	call   c10000aa <memset>
c1009369:	83 c4 10             	add    $0x10,%esp
c100936c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100936f:	8d 55 c4             	lea    -0x3c(%ebp),%edx
c1009372:	52                   	push   %edx
c1009373:	6a 01                	push   $0x1
c1009375:	50                   	push   %eax
c1009376:	ff 75 0c             	pushl  0xc(%ebp)
c1009379:	e8 cc ef ff ff       	call   c100834a <create_dir_entry>
c100937e:	83 c4 10             	add    $0x10,%esp
c1009381:	83 ec 04             	sub    $0x4,%esp
c1009384:	ff 75 ec             	pushl  -0x14(%ebp)
c1009387:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c100938a:	50                   	push   %eax
c100938b:	ff 75 08             	pushl  0x8(%ebp)
c100938e:	e8 23 f0 ff ff       	call   c10083b6 <sync_dir_entry>
c1009393:	83 c4 10             	add    $0x10,%esp
c1009396:	85 c0                	test   %eax,%eax
c1009398:	75 19                	jne    c10093b3 <file_create+0x199>
c100939a:	83 ec 0c             	sub    $0xc,%esp
c100939d:	68 bc bd 00 c1       	push   $0xc100bdbc
c10093a2:	e8 bc c1 ff ff       	call   c1005563 <printk>
c10093a7:	83 c4 10             	add    $0x10,%esp
c10093aa:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c10093ae:	e9 99 00 00 00       	jmp    c100944c <file_create+0x232>
c10093b3:	83 ec 04             	sub    $0x4,%esp
c10093b6:	68 00 04 00 00       	push   $0x400
c10093bb:	6a 00                	push   $0x0
c10093bd:	ff 75 ec             	pushl  -0x14(%ebp)
c10093c0:	e8 e5 6c ff ff       	call   c10000aa <memset>
c10093c5:	83 c4 10             	add    $0x10,%esp
c10093c8:	8b 45 08             	mov    0x8(%ebp),%eax
c10093cb:	8b 10                	mov    (%eax),%edx
c10093cd:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10093d2:	83 ec 04             	sub    $0x4,%esp
c10093d5:	ff 75 ec             	pushl  -0x14(%ebp)
c10093d8:	52                   	push   %edx
c10093d9:	50                   	push   %eax
c10093da:	e8 d5 0d 00 00       	call   c100a1b4 <inode_sync>
c10093df:	83 c4 10             	add    $0x10,%esp
c10093e2:	83 ec 04             	sub    $0x4,%esp
c10093e5:	68 00 04 00 00       	push   $0x400
c10093ea:	6a 00                	push   $0x0
c10093ec:	ff 75 ec             	pushl  -0x14(%ebp)
c10093ef:	e8 b6 6c ff ff       	call   c10000aa <memset>
c10093f4:	83 c4 10             	add    $0x10,%esp
c10093f7:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10093fc:	83 ec 04             	sub    $0x4,%esp
c10093ff:	ff 75 ec             	pushl  -0x14(%ebp)
c1009402:	ff 75 e4             	pushl  -0x1c(%ebp)
c1009405:	50                   	push   %eax
c1009406:	e8 a9 0d 00 00       	call   c100a1b4 <inode_sync>
c100940b:	83 c4 10             	add    $0x10,%esp
c100940e:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009411:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009416:	83 ec 04             	sub    $0x4,%esp
c1009419:	6a 00                	push   $0x0
c100941b:	52                   	push   %edx
c100941c:	50                   	push   %eax
c100941d:	e8 74 fd ff ff       	call   c1009196 <bitmap_sync>
c1009422:	83 c4 10             	add    $0x10,%esp
c1009425:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009428:	83 ec 08             	sub    $0x8,%esp
c100942b:	68 00 04 00 00       	push   $0x400
c1009430:	50                   	push   %eax
c1009431:	e8 fe 98 ff ff       	call   c1002d34 <vmm_free>
c1009436:	83 c4 10             	add    $0x10,%esp
c1009439:	83 ec 0c             	sub    $0xc,%esp
c100943c:	ff 75 f0             	pushl  -0x10(%ebp)
c100943f:	e8 7e fb ff ff       	call   c1008fc2 <task_fd_install>
c1009444:	83 c4 10             	add    $0x10,%esp
c1009447:	e9 ae 00 00 00       	jmp    c10094fa <file_create+0x2e0>
c100944c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009450:	83 f8 03             	cmp    $0x3,%eax
c1009453:	74 15                	je     c100946a <file_create+0x250>
c1009455:	83 f8 03             	cmp    $0x3,%eax
c1009458:	0f 8f 83 00 00 00    	jg     c10094e1 <file_create+0x2c7>
c100945e:	83 f8 01             	cmp    $0x1,%eax
c1009461:	74 39                	je     c100949c <file_create+0x282>
c1009463:	83 f8 02             	cmp    $0x2,%eax
c1009466:	74 23                	je     c100948b <file_create+0x271>
c1009468:	eb 77                	jmp    c10094e1 <file_create+0x2c7>
c100946a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100946d:	89 d0                	mov    %edx,%eax
c100946f:	01 c0                	add    %eax,%eax
c1009471:	01 d0                	add    %edx,%eax
c1009473:	c1 e0 02             	shl    $0x2,%eax
c1009476:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100947b:	83 ec 04             	sub    $0x4,%esp
c100947e:	6a 0c                	push   $0xc
c1009480:	6a 00                	push   $0x0
c1009482:	50                   	push   %eax
c1009483:	e8 22 6c ff ff       	call   c10000aa <memset>
c1009488:	83 c4 10             	add    $0x10,%esp
c100948b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100948e:	83 ec 08             	sub    $0x8,%esp
c1009491:	6a 44                	push   $0x44
c1009493:	50                   	push   %eax
c1009494:	e8 9b 98 ff ff       	call   c1002d34 <vmm_free>
c1009499:	83 c4 10             	add    $0x10,%esp
c100949c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100949f:	8d 50 07             	lea    0x7(%eax),%edx
c10094a2:	85 c0                	test   %eax,%eax
c10094a4:	0f 48 c2             	cmovs  %edx,%eax
c10094a7:	c1 f8 03             	sar    $0x3,%eax
c10094aa:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10094ad:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10094b0:	99                   	cltd   
c10094b1:	c1 ea 1d             	shr    $0x1d,%edx
c10094b4:	01 d0                	add    %edx,%eax
c10094b6:	83 e0 07             	and    $0x7,%eax
c10094b9:	29 d0                	sub    %edx,%eax
c10094bb:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10094be:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10094c3:	8b 50 20             	mov    0x20(%eax),%edx
c10094c6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10094c9:	01 d0                	add    %edx,%eax
c10094cb:	0f b6 10             	movzbl (%eax),%edx
c10094ce:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10094d3:	8b 48 20             	mov    0x20(%eax),%ecx
c10094d6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10094d9:	01 c8                	add    %ecx,%eax
c10094db:	83 e2 fe             	and    $0xfffffffe,%edx
c10094de:	88 10                	mov    %dl,(%eax)
c10094e0:	90                   	nop
c10094e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10094e4:	83 ec 08             	sub    $0x8,%esp
c10094e7:	68 00 04 00 00       	push   $0x400
c10094ec:	50                   	push   %eax
c10094ed:	e8 42 98 ff ff       	call   c1002d34 <vmm_free>
c10094f2:	83 c4 10             	add    $0x10,%esp
c10094f5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10094fa:	c9                   	leave  
c10094fb:	c3                   	ret    

c10094fc <file_open>:
c10094fc:	55                   	push   %ebp
c10094fd:	89 e5                	mov    %esp,%ebp
c10094ff:	83 ec 28             	sub    $0x28,%esp
c1009502:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009505:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1009508:	e8 70 fa ff ff       	call   c1008f7d <get_free_slot_in_global>
c100950d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009510:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c1009514:	75 1a                	jne    c1009530 <file_open+0x34>
c1009516:	83 ec 0c             	sub    $0xc,%esp
c1009519:	68 a3 bd 00 c1       	push   $0xc100bda3
c100951e:	e8 40 c0 ff ff       	call   c1005563 <printk>
c1009523:	83 c4 10             	add    $0x10,%esp
c1009526:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100952b:	e9 e1 00 00 00       	jmp    c1009611 <file_open+0x115>
c1009530:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009535:	83 ec 08             	sub    $0x8,%esp
c1009538:	ff 75 08             	pushl  0x8(%ebp)
c100953b:	50                   	push   %eax
c100953c:	e8 94 0d 00 00       	call   c100a2d5 <inode_open>
c1009541:	83 c4 10             	add    $0x10,%esp
c1009544:	89 c1                	mov    %eax,%ecx
c1009546:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1009549:	89 d0                	mov    %edx,%eax
c100954b:	01 c0                	add    %eax,%eax
c100954d:	01 d0                	add    %edx,%eax
c100954f:	c1 e0 02             	shl    $0x2,%eax
c1009552:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1009557:	89 08                	mov    %ecx,(%eax)
c1009559:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100955c:	89 d0                	mov    %edx,%eax
c100955e:	01 c0                	add    %eax,%eax
c1009560:	01 d0                	add    %edx,%eax
c1009562:	c1 e0 02             	shl    $0x2,%eax
c1009565:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100956a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1009570:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
c1009574:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1009577:	89 d0                	mov    %edx,%eax
c1009579:	01 c0                	add    %eax,%eax
c100957b:	01 d0                	add    %edx,%eax
c100957d:	c1 e0 02             	shl    $0x2,%eax
c1009580:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c1009585:	89 08                	mov    %ecx,(%eax)
c1009587:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100958a:	89 d0                	mov    %edx,%eax
c100958c:	01 c0                	add    %eax,%eax
c100958e:	01 d0                	add    %edx,%eax
c1009590:	c1 e0 02             	shl    $0x2,%eax
c1009593:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1009598:	8b 00                	mov    (%eax),%eax
c100959a:	83 c0 0c             	add    $0xc,%eax
c100959d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10095a0:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10095a4:	83 e0 01             	and    $0x1,%eax
c10095a7:	85 c0                	test   %eax,%eax
c10095a9:	75 0b                	jne    c10095b6 <file_open+0xba>
c10095ab:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10095af:	83 e0 02             	and    $0x2,%eax
c10095b2:	85 c0                	test   %eax,%eax
c10095b4:	74 4d                	je     c1009603 <file_open+0x107>
c10095b6:	e8 f0 77 ff ff       	call   c1000dab <intr_save>
c10095bb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10095be:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10095c1:	0f b6 00             	movzbl (%eax),%eax
c10095c4:	84 c0                	test   %al,%al
c10095c6:	75 16                	jne    c10095de <file_open+0xe2>
c10095c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10095cb:	c6 00 01             	movb   $0x1,(%eax)
c10095ce:	83 ec 0c             	sub    $0xc,%esp
c10095d1:	ff 75 ec             	pushl  -0x14(%ebp)
c10095d4:	e8 e5 77 ff ff       	call   c1000dbe <intr_restore>
c10095d9:	83 c4 10             	add    $0x10,%esp
c10095dc:	eb 25                	jmp    c1009603 <file_open+0x107>
c10095de:	83 ec 0c             	sub    $0xc,%esp
c10095e1:	ff 75 ec             	pushl  -0x14(%ebp)
c10095e4:	e8 d5 77 ff ff       	call   c1000dbe <intr_restore>
c10095e9:	83 c4 10             	add    $0x10,%esp
c10095ec:	83 ec 0c             	sub    $0xc,%esp
c10095ef:	68 dc bd 00 c1       	push   $0xc100bddc
c10095f4:	e8 6a bf ff ff       	call   c1005563 <printk>
c10095f9:	83 c4 10             	add    $0x10,%esp
c10095fc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009601:	eb 0e                	jmp    c1009611 <file_open+0x115>
c1009603:	83 ec 0c             	sub    $0xc,%esp
c1009606:	ff 75 f4             	pushl  -0xc(%ebp)
c1009609:	e8 b4 f9 ff ff       	call   c1008fc2 <task_fd_install>
c100960e:	83 c4 10             	add    $0x10,%esp
c1009611:	c9                   	leave  
c1009612:	c3                   	ret    

c1009613 <file_close>:
c1009613:	55                   	push   %ebp
c1009614:	89 e5                	mov    %esp,%ebp
c1009616:	83 ec 08             	sub    $0x8,%esp
c1009619:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100961d:	75 07                	jne    c1009626 <file_close+0x13>
c100961f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009624:	eb 2b                	jmp    c1009651 <file_close+0x3e>
c1009626:	8b 45 08             	mov    0x8(%ebp),%eax
c1009629:	8b 40 08             	mov    0x8(%eax),%eax
c100962c:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1009630:	8b 45 08             	mov    0x8(%ebp),%eax
c1009633:	8b 40 08             	mov    0x8(%eax),%eax
c1009636:	83 ec 0c             	sub    $0xc,%esp
c1009639:	50                   	push   %eax
c100963a:	e8 6c 0d 00 00       	call   c100a3ab <inode_close>
c100963f:	83 c4 10             	add    $0x10,%esp
c1009642:	8b 45 08             	mov    0x8(%ebp),%eax
c1009645:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100964c:	b8 00 00 00 00       	mov    $0x0,%eax
c1009651:	c9                   	leave  
c1009652:	c3                   	ret    

c1009653 <file_write>:
c1009653:	55                   	push   %ebp
c1009654:	89 e5                	mov    %esp,%ebp
c1009656:	83 ec 58             	sub    $0x58,%esp
c1009659:	8b 45 08             	mov    0x8(%ebp),%eax
c100965c:	8b 40 08             	mov    0x8(%eax),%eax
c100965f:	8b 50 04             	mov    0x4(%eax),%edx
c1009662:	8b 45 10             	mov    0x10(%ebp),%eax
c1009665:	01 d0                	add    %edx,%eax
c1009667:	3d 00 18 01 00       	cmp    $0x11800,%eax
c100966c:	76 1a                	jbe    c1009688 <file_write+0x35>
c100966e:	83 ec 0c             	sub    $0xc,%esp
c1009671:	68 08 be 00 c1       	push   $0xc100be08
c1009676:	e8 e8 be ff ff       	call   c1005563 <printk>
c100967b:	83 c4 10             	add    $0x10,%esp
c100967e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009683:	e9 2b 07 00 00       	jmp    c1009db3 <file_write+0x760>
c1009688:	83 ec 08             	sub    $0x8,%esp
c100968b:	6a 02                	push   $0x2
c100968d:	68 00 02 00 00       	push   $0x200
c1009692:	e8 78 95 ff ff       	call   c1002c0f <vmm_malloc>
c1009697:	83 c4 10             	add    $0x10,%esp
c100969a:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100969d:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c10096a1:	75 1a                	jne    c10096bd <file_write+0x6a>
c10096a3:	83 ec 0c             	sub    $0xc,%esp
c10096a6:	68 40 be 00 c1       	push   $0xc100be40
c10096ab:	e8 b3 be ff ff       	call   c1005563 <printk>
c10096b0:	83 c4 10             	add    $0x10,%esp
c10096b3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10096b8:	e9 f6 06 00 00       	jmp    c1009db3 <file_write+0x760>
c10096bd:	83 ec 08             	sub    $0x8,%esp
c10096c0:	6a 02                	push   $0x2
c10096c2:	68 30 02 00 00       	push   $0x230
c10096c7:	e8 43 95 ff ff       	call   c1002c0f <vmm_malloc>
c10096cc:	83 c4 10             	add    $0x10,%esp
c10096cf:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10096d2:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c10096d6:	75 1a                	jne    c10096f2 <file_write+0x9f>
c10096d8:	83 ec 0c             	sub    $0xc,%esp
c10096db:	68 6c be 00 c1       	push   $0xc100be6c
c10096e0:	e8 7e be ff ff       	call   c1005563 <printk>
c10096e5:	83 c4 10             	add    $0x10,%esp
c10096e8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10096ed:	e9 c1 06 00 00       	jmp    c1009db3 <file_write+0x760>
c10096f2:	8b 45 0c             	mov    0xc(%ebp),%eax
c10096f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10096f8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10096ff:	8b 45 10             	mov    0x10(%ebp),%eax
c1009702:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009705:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c100970c:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
c1009713:	8b 45 08             	mov    0x8(%ebp),%eax
c1009716:	8b 40 08             	mov    0x8(%eax),%eax
c1009719:	8b 40 10             	mov    0x10(%eax),%eax
c100971c:	85 c0                	test   %eax,%eax
c100971e:	0f 85 8a 00 00 00    	jne    c10097ae <file_write+0x15b>
c1009724:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009729:	83 ec 0c             	sub    $0xc,%esp
c100972c:	50                   	push   %eax
c100972d:	e8 96 f9 ff ff       	call   c10090c8 <block_bitmap_alloc>
c1009732:	83 c4 10             	add    $0x10,%esp
c1009735:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009738:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c100973c:	75 1a                	jne    c1009758 <file_write+0x105>
c100973e:	83 ec 0c             	sub    $0xc,%esp
c1009741:	68 9c be 00 c1       	push   $0xc100be9c
c1009746:	e8 18 be ff ff       	call   c1005563 <printk>
c100974b:	83 c4 10             	add    $0x10,%esp
c100974e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009753:	e9 5b 06 00 00       	jmp    c1009db3 <file_write+0x760>
c1009758:	8b 45 08             	mov    0x8(%ebp),%eax
c100975b:	8b 40 08             	mov    0x8(%eax),%eax
c100975e:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009761:	89 50 10             	mov    %edx,0x10(%eax)
c1009764:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009767:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100976c:	8b 40 10             	mov    0x10(%eax),%eax
c100976f:	8b 40 28             	mov    0x28(%eax),%eax
c1009772:	29 c2                	sub    %eax,%edx
c1009774:	89 d0                	mov    %edx,%eax
c1009776:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009779:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
c100977d:	75 19                	jne    c1009798 <file_write+0x145>
c100977f:	68 c3 be 00 c1       	push   $0xc100bec3
c1009784:	68 34 c1 00 c1       	push   $0xc100c134
c1009789:	68 1e 01 00 00       	push   $0x11e
c100978e:	68 dc be 00 c1       	push   $0xc100bedc
c1009793:	e8 d3 6b ff ff       	call   c100036b <__PANIC>
c1009798:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100979d:	83 ec 04             	sub    $0x4,%esp
c10097a0:	6a 01                	push   $0x1
c10097a2:	ff 75 d4             	pushl  -0x2c(%ebp)
c10097a5:	50                   	push   %eax
c10097a6:	e8 eb f9 ff ff       	call   c1009196 <bitmap_sync>
c10097ab:	83 c4 10             	add    $0x10,%esp
c10097ae:	8b 45 08             	mov    0x8(%ebp),%eax
c10097b1:	8b 40 08             	mov    0x8(%eax),%eax
c10097b4:	8b 40 04             	mov    0x4(%eax),%eax
c10097b7:	c1 e8 09             	shr    $0x9,%eax
c10097ba:	83 c0 01             	add    $0x1,%eax
c10097bd:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10097c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10097c3:	8b 40 08             	mov    0x8(%eax),%eax
c10097c6:	8b 50 04             	mov    0x4(%eax),%edx
c10097c9:	8b 45 10             	mov    0x10(%ebp),%eax
c10097cc:	01 d0                	add    %edx,%eax
c10097ce:	c1 e8 09             	shr    $0x9,%eax
c10097d1:	83 c0 01             	add    $0x1,%eax
c10097d4:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10097d7:	81 7d cc 8c 00 00 00 	cmpl   $0x8c,-0x34(%ebp)
c10097de:	76 19                	jbe    c10097f9 <file_write+0x1a6>
c10097e0:	68 0d bf 00 c1       	push   $0xc100bf0d
c10097e5:	68 34 c1 00 c1       	push   $0xc100c134
c10097ea:	68 27 01 00 00       	push   $0x127
c10097ef:	68 dc be 00 c1       	push   $0xc100bedc
c10097f4:	e8 72 6b ff ff       	call   c100036b <__PANIC>
c10097f9:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10097fc:	2b 45 d0             	sub    -0x30(%ebp),%eax
c10097ff:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1009802:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
c1009806:	0f 85 83 00 00 00    	jne    c100988f <file_write+0x23c>
c100980c:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009810:	77 2e                	ja     c1009840 <file_write+0x1ed>
c1009812:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009815:	83 e8 01             	sub    $0x1,%eax
c1009818:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100981b:	8b 45 08             	mov    0x8(%ebp),%eax
c100981e:	8b 40 08             	mov    0x8(%eax),%eax
c1009821:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009824:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100982b:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100982e:	01 ca                	add    %ecx,%edx
c1009830:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009833:	83 c1 04             	add    $0x4,%ecx
c1009836:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009839:	89 02                	mov    %eax,(%edx)
c100983b:	e9 24 04 00 00       	jmp    c1009c64 <file_write+0x611>
c1009840:	8b 45 08             	mov    0x8(%ebp),%eax
c1009843:	8b 40 08             	mov    0x8(%eax),%eax
c1009846:	8b 40 40             	mov    0x40(%eax),%eax
c1009849:	85 c0                	test   %eax,%eax
c100984b:	75 19                	jne    c1009866 <file_write+0x213>
c100984d:	68 2c bf 00 c1       	push   $0xc100bf2c
c1009852:	68 34 c1 00 c1       	push   $0xc100c134
c1009857:	68 35 01 00 00       	push   $0x135
c100985c:	68 dc be 00 c1       	push   $0xc100bedc
c1009861:	e8 05 6b ff ff       	call   c100036b <__PANIC>
c1009866:	8b 45 08             	mov    0x8(%ebp),%eax
c1009869:	8b 40 08             	mov    0x8(%eax),%eax
c100986c:	8b 40 40             	mov    0x40(%eax),%eax
c100986f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009872:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009875:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009878:	83 c2 30             	add    $0x30,%edx
c100987b:	83 ec 04             	sub    $0x4,%esp
c100987e:	6a 01                	push   $0x1
c1009880:	50                   	push   %eax
c1009881:	52                   	push   %edx
c1009882:	e8 84 c5 ff ff       	call   c1005e0b <ide_read>
c1009887:	83 c4 10             	add    $0x10,%esp
c100988a:	e9 d5 03 00 00       	jmp    c1009c64 <file_write+0x611>
c100988f:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009893:	0f 87 25 01 00 00    	ja     c10099be <file_write+0x36b>
c1009899:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100989c:	83 e8 01             	sub    $0x1,%eax
c100989f:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10098a2:	8b 45 08             	mov    0x8(%ebp),%eax
c10098a5:	8b 40 08             	mov    0x8(%eax),%eax
c10098a8:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10098ab:	83 c2 04             	add    $0x4,%edx
c10098ae:	8b 04 90             	mov    (%eax,%edx,4),%eax
c10098b1:	85 c0                	test   %eax,%eax
c10098b3:	75 19                	jne    c10098ce <file_write+0x27b>
c10098b5:	68 50 bf 00 c1       	push   $0xc100bf50
c10098ba:	68 34 c1 00 c1       	push   $0xc100c134
c10098bf:	68 3f 01 00 00       	push   $0x13f
c10098c4:	68 dc be 00 c1       	push   $0xc100bedc
c10098c9:	e8 9d 6a ff ff       	call   c100036b <__PANIC>
c10098ce:	8b 45 08             	mov    0x8(%ebp),%eax
c10098d1:	8b 40 08             	mov    0x8(%eax),%eax
c10098d4:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10098d7:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10098de:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10098e1:	01 ca                	add    %ecx,%edx
c10098e3:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c10098e6:	83 c1 04             	add    $0x4,%ecx
c10098e9:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c10098ec:	89 02                	mov    %eax,(%edx)
c10098ee:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10098f1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10098f4:	e9 b4 00 00 00       	jmp    c10099ad <file_write+0x35a>
c10098f9:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10098fe:	83 ec 0c             	sub    $0xc,%esp
c1009901:	50                   	push   %eax
c1009902:	e8 c1 f7 ff ff       	call   c10090c8 <block_bitmap_alloc>
c1009907:	83 c4 10             	add    $0x10,%esp
c100990a:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100990d:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009911:	75 1a                	jne    c100992d <file_write+0x2da>
c1009913:	83 ec 0c             	sub    $0xc,%esp
c1009916:	68 7c bf 00 c1       	push   $0xc100bf7c
c100991b:	e8 43 bc ff ff       	call   c1005563 <printk>
c1009920:	83 c4 10             	add    $0x10,%esp
c1009923:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009928:	e9 86 04 00 00       	jmp    c1009db3 <file_write+0x760>
c100992d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009930:	8b 40 08             	mov    0x8(%eax),%eax
c1009933:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009936:	83 c2 04             	add    $0x4,%edx
c1009939:	8b 04 90             	mov    (%eax,%edx,4),%eax
c100993c:	85 c0                	test   %eax,%eax
c100993e:	74 19                	je     c1009959 <file_write+0x306>
c1009940:	68 b4 bf 00 c1       	push   $0xc100bfb4
c1009945:	68 34 c1 00 c1       	push   $0xc100c134
c100994a:	68 4c 01 00 00       	push   $0x14c
c100994f:	68 dc be 00 c1       	push   $0xc100bedc
c1009954:	e8 12 6a ff ff       	call   c100036b <__PANIC>
c1009959:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100995c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009963:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009966:	01 d0                	add    %edx,%eax
c1009968:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100996b:	89 10                	mov    %edx,(%eax)
c100996d:	8b 55 08             	mov    0x8(%ebp),%edx
c1009970:	8b 52 08             	mov    0x8(%edx),%edx
c1009973:	8b 00                	mov    (%eax),%eax
c1009975:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009978:	83 c1 04             	add    $0x4,%ecx
c100997b:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c100997e:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009981:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009986:	8b 40 10             	mov    0x10(%eax),%eax
c1009989:	8b 40 28             	mov    0x28(%eax),%eax
c100998c:	29 c2                	sub    %eax,%edx
c100998e:	89 d0                	mov    %edx,%eax
c1009990:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009993:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009998:	83 ec 04             	sub    $0x4,%esp
c100999b:	6a 01                	push   $0x1
c100999d:	ff 75 d4             	pushl  -0x2c(%ebp)
c10099a0:	50                   	push   %eax
c10099a1:	e8 f0 f7 ff ff       	call   c1009196 <bitmap_sync>
c10099a6:	83 c4 10             	add    $0x10,%esp
c10099a9:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c10099ad:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10099b0:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c10099b3:	0f 82 40 ff ff ff    	jb     c10098f9 <file_write+0x2a6>
c10099b9:	e9 a6 02 00 00       	jmp    c1009c64 <file_write+0x611>
c10099be:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c10099c2:	0f 87 a3 01 00 00    	ja     c1009b6b <file_write+0x518>
c10099c8:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c10099cc:	0f 86 99 01 00 00    	jbe    c1009b6b <file_write+0x518>
c10099d2:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10099d5:	83 e8 01             	sub    $0x1,%eax
c10099d8:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10099db:	8b 45 08             	mov    0x8(%ebp),%eax
c10099de:	8b 40 08             	mov    0x8(%eax),%eax
c10099e1:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10099e4:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10099eb:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10099ee:	01 ca                	add    %ecx,%edx
c10099f0:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c10099f3:	83 c1 04             	add    $0x4,%ecx
c10099f6:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c10099f9:	89 02                	mov    %eax,(%edx)
c10099fb:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009a00:	83 ec 0c             	sub    $0xc,%esp
c1009a03:	50                   	push   %eax
c1009a04:	e8 bf f6 ff ff       	call   c10090c8 <block_bitmap_alloc>
c1009a09:	83 c4 10             	add    $0x10,%esp
c1009a0c:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009a0f:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009a13:	75 1a                	jne    c1009a2f <file_write+0x3dc>
c1009a15:	83 ec 0c             	sub    $0xc,%esp
c1009a18:	68 e0 bf 00 c1       	push   $0xc100bfe0
c1009a1d:	e8 41 bb ff ff       	call   c1005563 <printk>
c1009a22:	83 c4 10             	add    $0x10,%esp
c1009a25:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009a2a:	e9 84 03 00 00       	jmp    c1009db3 <file_write+0x760>
c1009a2f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a32:	8b 40 08             	mov    0x8(%eax),%eax
c1009a35:	8b 40 40             	mov    0x40(%eax),%eax
c1009a38:	85 c0                	test   %eax,%eax
c1009a3a:	74 19                	je     c1009a55 <file_write+0x402>
c1009a3c:	68 18 c0 00 c1       	push   $0xc100c018
c1009a41:	68 34 c1 00 c1       	push   $0xc100c134
c1009a46:	68 63 01 00 00       	push   $0x163
c1009a4b:	68 dc be 00 c1       	push   $0xc100bedc
c1009a50:	e8 16 69 ff ff       	call   c100036b <__PANIC>
c1009a55:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a58:	8b 40 08             	mov    0x8(%eax),%eax
c1009a5b:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009a5e:	89 50 40             	mov    %edx,0x40(%eax)
c1009a61:	8b 40 40             	mov    0x40(%eax),%eax
c1009a64:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009a67:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009a6a:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009a6d:	e9 d0 00 00 00       	jmp    c1009b42 <file_write+0x4ef>
c1009a72:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009a77:	83 ec 0c             	sub    $0xc,%esp
c1009a7a:	50                   	push   %eax
c1009a7b:	e8 48 f6 ff ff       	call   c10090c8 <block_bitmap_alloc>
c1009a80:	83 c4 10             	add    $0x10,%esp
c1009a83:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009a86:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009a8a:	75 1a                	jne    c1009aa6 <file_write+0x453>
c1009a8c:	83 ec 0c             	sub    $0xc,%esp
c1009a8f:	68 e0 bf 00 c1       	push   $0xc100bfe0
c1009a94:	e8 ca ba ff ff       	call   c1005563 <printk>
c1009a99:	83 c4 10             	add    $0x10,%esp
c1009a9c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009aa1:	e9 0d 03 00 00       	jmp    c1009db3 <file_write+0x760>
c1009aa6:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1009aaa:	77 53                	ja     c1009aff <file_write+0x4ac>
c1009aac:	8b 45 08             	mov    0x8(%ebp),%eax
c1009aaf:	8b 40 08             	mov    0x8(%eax),%eax
c1009ab2:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009ab5:	83 c2 04             	add    $0x4,%edx
c1009ab8:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009abb:	85 c0                	test   %eax,%eax
c1009abd:	74 19                	je     c1009ad8 <file_write+0x485>
c1009abf:	68 b4 bf 00 c1       	push   $0xc100bfb4
c1009ac4:	68 34 c1 00 c1       	push   $0xc100c134
c1009ac9:	68 70 01 00 00       	push   $0x170
c1009ace:	68 dc be 00 c1       	push   $0xc100bedc
c1009ad3:	e8 93 68 ff ff       	call   c100036b <__PANIC>
c1009ad8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009adb:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009ae2:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009ae5:	01 d0                	add    %edx,%eax
c1009ae7:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009aea:	89 10                	mov    %edx,(%eax)
c1009aec:	8b 55 08             	mov    0x8(%ebp),%edx
c1009aef:	8b 52 08             	mov    0x8(%edx),%edx
c1009af2:	8b 00                	mov    (%eax),%eax
c1009af4:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009af7:	83 c1 04             	add    $0x4,%ecx
c1009afa:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1009afd:	eb 14                	jmp    c1009b13 <file_write+0x4c0>
c1009aff:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009b02:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009b09:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009b0c:	01 c2                	add    %eax,%edx
c1009b0e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009b11:	89 02                	mov    %eax,(%edx)
c1009b13:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009b16:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009b1b:	8b 40 10             	mov    0x10(%eax),%eax
c1009b1e:	8b 40 28             	mov    0x28(%eax),%eax
c1009b21:	29 c2                	sub    %eax,%edx
c1009b23:	89 d0                	mov    %edx,%eax
c1009b25:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009b28:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009b2d:	83 ec 04             	sub    $0x4,%esp
c1009b30:	6a 01                	push   $0x1
c1009b32:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009b35:	50                   	push   %eax
c1009b36:	e8 5b f6 ff ff       	call   c1009196 <bitmap_sync>
c1009b3b:	83 c4 10             	add    $0x10,%esp
c1009b3e:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009b42:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009b45:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009b48:	0f 82 24 ff ff ff    	jb     c1009a72 <file_write+0x41f>
c1009b4e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009b51:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009b54:	83 c2 30             	add    $0x30,%edx
c1009b57:	83 ec 04             	sub    $0x4,%esp
c1009b5a:	6a 01                	push   $0x1
c1009b5c:	50                   	push   %eax
c1009b5d:	52                   	push   %edx
c1009b5e:	e8 e5 c2 ff ff       	call   c1005e48 <ide_write>
c1009b63:	83 c4 10             	add    $0x10,%esp
c1009b66:	e9 f9 00 00 00       	jmp    c1009c64 <file_write+0x611>
c1009b6b:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009b6f:	0f 86 ef 00 00 00    	jbe    c1009c64 <file_write+0x611>
c1009b75:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b78:	8b 40 08             	mov    0x8(%eax),%eax
c1009b7b:	8b 40 40             	mov    0x40(%eax),%eax
c1009b7e:	85 c0                	test   %eax,%eax
c1009b80:	75 19                	jne    c1009b9b <file_write+0x548>
c1009b82:	68 2c bf 00 c1       	push   $0xc100bf2c
c1009b87:	68 34 c1 00 c1       	push   $0xc100c134
c1009b8c:	68 7f 01 00 00       	push   $0x17f
c1009b91:	68 dc be 00 c1       	push   $0xc100bedc
c1009b96:	e8 d0 67 ff ff       	call   c100036b <__PANIC>
c1009b9b:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b9e:	8b 40 08             	mov    0x8(%eax),%eax
c1009ba1:	8b 40 40             	mov    0x40(%eax),%eax
c1009ba4:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009ba7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009baa:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009bad:	83 c2 30             	add    $0x30,%edx
c1009bb0:	83 ec 04             	sub    $0x4,%esp
c1009bb3:	6a 01                	push   $0x1
c1009bb5:	50                   	push   %eax
c1009bb6:	52                   	push   %edx
c1009bb7:	e8 4f c2 ff ff       	call   c1005e0b <ide_read>
c1009bbc:	83 c4 10             	add    $0x10,%esp
c1009bbf:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009bc2:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009bc5:	eb 79                	jmp    c1009c40 <file_write+0x5ed>
c1009bc7:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009bcc:	83 ec 0c             	sub    $0xc,%esp
c1009bcf:	50                   	push   %eax
c1009bd0:	e8 f3 f4 ff ff       	call   c10090c8 <block_bitmap_alloc>
c1009bd5:	83 c4 10             	add    $0x10,%esp
c1009bd8:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009bdb:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009bdf:	75 1a                	jne    c1009bfb <file_write+0x5a8>
c1009be1:	83 ec 0c             	sub    $0xc,%esp
c1009be4:	68 3c c0 00 c1       	push   $0xc100c03c
c1009be9:	e8 75 b9 ff ff       	call   c1005563 <printk>
c1009bee:	83 c4 10             	add    $0x10,%esp
c1009bf1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009bf6:	e9 b8 01 00 00       	jmp    c1009db3 <file_write+0x760>
c1009bfb:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009bfe:	8d 50 01             	lea    0x1(%eax),%edx
c1009c01:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1009c04:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009c0b:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009c0e:	01 c2                	add    %eax,%edx
c1009c10:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009c13:	89 02                	mov    %eax,(%edx)
c1009c15:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009c18:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009c1d:	8b 40 10             	mov    0x10(%eax),%eax
c1009c20:	8b 40 28             	mov    0x28(%eax),%eax
c1009c23:	29 c2                	sub    %eax,%edx
c1009c25:	89 d0                	mov    %edx,%eax
c1009c27:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009c2a:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009c2f:	83 ec 04             	sub    $0x4,%esp
c1009c32:	6a 01                	push   $0x1
c1009c34:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009c37:	50                   	push   %eax
c1009c38:	e8 59 f5 ff ff       	call   c1009196 <bitmap_sync>
c1009c3d:	83 c4 10             	add    $0x10,%esp
c1009c40:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009c43:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009c46:	0f 82 7b ff ff ff    	jb     c1009bc7 <file_write+0x574>
c1009c4c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009c4f:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009c52:	83 c2 30             	add    $0x30,%edx
c1009c55:	83 ec 04             	sub    $0x4,%esp
c1009c58:	6a 01                	push   $0x1
c1009c5a:	50                   	push   %eax
c1009c5b:	52                   	push   %edx
c1009c5c:	e8 e7 c1 ff ff       	call   c1005e48 <ide_write>
c1009c61:	83 c4 10             	add    $0x10,%esp
c1009c64:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
c1009c68:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c6b:	8b 40 08             	mov    0x8(%eax),%eax
c1009c6e:	8b 40 04             	mov    0x4(%eax),%eax
c1009c71:	8d 50 ff             	lea    -0x1(%eax),%edx
c1009c74:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c77:	89 10                	mov    %edx,(%eax)
c1009c79:	e9 e3 00 00 00       	jmp    c1009d61 <file_write+0x70e>
c1009c7e:	83 ec 04             	sub    $0x4,%esp
c1009c81:	68 00 02 00 00       	push   $0x200
c1009c86:	6a 00                	push   $0x0
c1009c88:	ff 75 e0             	pushl  -0x20(%ebp)
c1009c8b:	e8 1a 64 ff ff       	call   c10000aa <memset>
c1009c90:	83 c4 10             	add    $0x10,%esp
c1009c93:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c96:	8b 40 08             	mov    0x8(%eax),%eax
c1009c99:	8b 40 04             	mov    0x4(%eax),%eax
c1009c9c:	c1 e8 09             	shr    $0x9,%eax
c1009c9f:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1009ca2:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1009ca5:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009cac:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009caf:	01 d0                	add    %edx,%eax
c1009cb1:	8b 00                	mov    (%eax),%eax
c1009cb3:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1009cb6:	8b 45 08             	mov    0x8(%ebp),%eax
c1009cb9:	8b 40 08             	mov    0x8(%eax),%eax
c1009cbc:	8b 40 04             	mov    0x4(%eax),%eax
c1009cbf:	25 ff 01 00 00       	and    $0x1ff,%eax
c1009cc4:	89 45 b8             	mov    %eax,-0x48(%ebp)
c1009cc7:	b8 00 02 00 00       	mov    $0x200,%eax
c1009ccc:	2b 45 b8             	sub    -0x48(%ebp),%eax
c1009ccf:	89 45 b4             	mov    %eax,-0x4c(%ebp)
c1009cd2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009cd5:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
c1009cd8:	0f 46 45 b4          	cmovbe -0x4c(%ebp),%eax
c1009cdc:	89 45 b0             	mov    %eax,-0x50(%ebp)
c1009cdf:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
c1009ce3:	74 17                	je     c1009cfc <file_write+0x6a9>
c1009ce5:	83 ec 04             	sub    $0x4,%esp
c1009ce8:	6a 01                	push   $0x1
c1009cea:	ff 75 bc             	pushl  -0x44(%ebp)
c1009ced:	ff 75 e0             	pushl  -0x20(%ebp)
c1009cf0:	e8 16 c1 ff ff       	call   c1005e0b <ide_read>
c1009cf5:	83 c4 10             	add    $0x10,%esp
c1009cf8:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
c1009cfc:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1009cff:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009d02:	01 d0                	add    %edx,%eax
c1009d04:	83 ec 04             	sub    $0x4,%esp
c1009d07:	ff 75 b0             	pushl  -0x50(%ebp)
c1009d0a:	ff 75 f4             	pushl  -0xc(%ebp)
c1009d0d:	50                   	push   %eax
c1009d0e:	e8 f5 63 ff ff       	call   c1000108 <memcpy>
c1009d13:	83 c4 10             	add    $0x10,%esp
c1009d16:	83 ec 04             	sub    $0x4,%esp
c1009d19:	6a 01                	push   $0x1
c1009d1b:	ff 75 bc             	pushl  -0x44(%ebp)
c1009d1e:	ff 75 e0             	pushl  -0x20(%ebp)
c1009d21:	e8 22 c1 ff ff       	call   c1005e48 <ide_write>
c1009d26:	83 c4 10             	add    $0x10,%esp
c1009d29:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009d2c:	01 45 f4             	add    %eax,-0xc(%ebp)
c1009d2f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009d32:	8b 40 08             	mov    0x8(%eax),%eax
c1009d35:	8b 48 04             	mov    0x4(%eax),%ecx
c1009d38:	8b 45 08             	mov    0x8(%ebp),%eax
c1009d3b:	8b 40 08             	mov    0x8(%eax),%eax
c1009d3e:	8b 55 b0             	mov    -0x50(%ebp),%edx
c1009d41:	01 ca                	add    %ecx,%edx
c1009d43:	89 50 04             	mov    %edx,0x4(%eax)
c1009d46:	8b 45 08             	mov    0x8(%ebp),%eax
c1009d49:	8b 10                	mov    (%eax),%edx
c1009d4b:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009d4e:	01 c2                	add    %eax,%edx
c1009d50:	8b 45 08             	mov    0x8(%ebp),%eax
c1009d53:	89 10                	mov    %edx,(%eax)
c1009d55:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009d58:	01 45 f0             	add    %eax,-0x10(%ebp)
c1009d5b:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009d5e:	29 45 ec             	sub    %eax,-0x14(%ebp)
c1009d61:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009d64:	3b 45 10             	cmp    0x10(%ebp),%eax
c1009d67:	0f 82 11 ff ff ff    	jb     c1009c7e <file_write+0x62b>
c1009d6d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009d70:	8b 50 08             	mov    0x8(%eax),%edx
c1009d73:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009d78:	83 ec 04             	sub    $0x4,%esp
c1009d7b:	ff 75 e0             	pushl  -0x20(%ebp)
c1009d7e:	52                   	push   %edx
c1009d7f:	50                   	push   %eax
c1009d80:	e8 2f 04 00 00       	call   c100a1b4 <inode_sync>
c1009d85:	83 c4 10             	add    $0x10,%esp
c1009d88:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009d8b:	83 ec 08             	sub    $0x8,%esp
c1009d8e:	68 30 02 00 00       	push   $0x230
c1009d93:	50                   	push   %eax
c1009d94:	e8 9b 8f ff ff       	call   c1002d34 <vmm_free>
c1009d99:	83 c4 10             	add    $0x10,%esp
c1009d9c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009d9f:	83 ec 08             	sub    $0x8,%esp
c1009da2:	68 00 02 00 00       	push   $0x200
c1009da7:	50                   	push   %eax
c1009da8:	e8 87 8f ff ff       	call   c1002d34 <vmm_free>
c1009dad:	83 c4 10             	add    $0x10,%esp
c1009db0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009db3:	c9                   	leave  
c1009db4:	c3                   	ret    

c1009db5 <file_read>:
c1009db5:	55                   	push   %ebp
c1009db6:	89 e5                	mov    %esp,%ebp
c1009db8:	83 ec 48             	sub    $0x48,%esp
c1009dbb:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009dbe:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009dc1:	8b 45 10             	mov    0x10(%ebp),%eax
c1009dc4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009dc7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009dca:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009dcd:	8b 45 08             	mov    0x8(%ebp),%eax
c1009dd0:	8b 10                	mov    (%eax),%edx
c1009dd2:	8b 45 10             	mov    0x10(%ebp),%eax
c1009dd5:	01 c2                	add    %eax,%edx
c1009dd7:	8b 45 08             	mov    0x8(%ebp),%eax
c1009dda:	8b 40 08             	mov    0x8(%eax),%eax
c1009ddd:	8b 40 04             	mov    0x4(%eax),%eax
c1009de0:	39 c2                	cmp    %eax,%edx
c1009de2:	76 2b                	jbe    c1009e0f <file_read+0x5a>
c1009de4:	8b 45 08             	mov    0x8(%ebp),%eax
c1009de7:	8b 40 08             	mov    0x8(%eax),%eax
c1009dea:	8b 50 04             	mov    0x4(%eax),%edx
c1009ded:	8b 45 08             	mov    0x8(%ebp),%eax
c1009df0:	8b 00                	mov    (%eax),%eax
c1009df2:	29 c2                	sub    %eax,%edx
c1009df4:	89 d0                	mov    %edx,%eax
c1009df6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009df9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009dfc:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009dff:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1009e03:	75 0a                	jne    c1009e0f <file_read+0x5a>
c1009e05:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009e0a:	e9 31 03 00 00       	jmp    c100a140 <file_read+0x38b>
c1009e0f:	83 ec 08             	sub    $0x8,%esp
c1009e12:	6a 02                	push   $0x2
c1009e14:	68 00 02 00 00       	push   $0x200
c1009e19:	e8 f1 8d ff ff       	call   c1002c0f <vmm_malloc>
c1009e1e:	83 c4 10             	add    $0x10,%esp
c1009e21:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009e24:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c1009e28:	75 10                	jne    c1009e3a <file_read+0x85>
c1009e2a:	83 ec 0c             	sub    $0xc,%esp
c1009e2d:	68 74 c0 00 c1       	push   $0xc100c074
c1009e32:	e8 2c b7 ff ff       	call   c1005563 <printk>
c1009e37:	83 c4 10             	add    $0x10,%esp
c1009e3a:	83 ec 08             	sub    $0x8,%esp
c1009e3d:	6a 02                	push   $0x2
c1009e3f:	68 30 02 00 00       	push   $0x230
c1009e44:	e8 c6 8d ff ff       	call   c1002c0f <vmm_malloc>
c1009e49:	83 c4 10             	add    $0x10,%esp
c1009e4c:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1009e4f:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c1009e53:	75 1a                	jne    c1009e6f <file_read+0xba>
c1009e55:	83 ec 0c             	sub    $0xc,%esp
c1009e58:	68 a0 c0 00 c1       	push   $0xc100c0a0
c1009e5d:	e8 01 b7 ff ff       	call   c1005563 <printk>
c1009e62:	83 c4 10             	add    $0x10,%esp
c1009e65:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009e6a:	e9 d1 02 00 00       	jmp    c100a140 <file_read+0x38b>
c1009e6f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009e72:	8b 00                	mov    (%eax),%eax
c1009e74:	c1 e8 09             	shr    $0x9,%eax
c1009e77:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009e7a:	8b 45 08             	mov    0x8(%ebp),%eax
c1009e7d:	8b 10                	mov    (%eax),%edx
c1009e7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009e82:	01 d0                	add    %edx,%eax
c1009e84:	c1 e8 09             	shr    $0x9,%eax
c1009e87:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009e8a:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009e8d:	2b 45 d4             	sub    -0x2c(%ebp),%eax
c1009e90:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1009e93:	81 7d d8 8a 00 00 00 	cmpl   $0x8a,-0x28(%ebp)
c1009e9a:	77 09                	ja     c1009ea5 <file_read+0xf0>
c1009e9c:	81 7d d4 8a 00 00 00 	cmpl   $0x8a,-0x2c(%ebp)
c1009ea3:	76 19                	jbe    c1009ebe <file_read+0x109>
c1009ea5:	68 d0 c0 00 c1       	push   $0xc100c0d0
c1009eaa:	68 40 c1 00 c1       	push   $0xc100c140
c1009eaf:	68 d1 01 00 00       	push   $0x1d1
c1009eb4:	68 dc be 00 c1       	push   $0xc100bedc
c1009eb9:	e8 ad 64 ff ff       	call   c100036b <__PANIC>
c1009ebe:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
c1009ec2:	75 7b                	jne    c1009f3f <file_read+0x18a>
c1009ec4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1009ec7:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c1009eca:	74 19                	je     c1009ee5 <file_read+0x130>
c1009ecc:	68 08 c1 00 c1       	push   $0xc100c108
c1009ed1:	68 40 c1 00 c1       	push   $0xc100c140
c1009ed6:	68 d8 01 00 00       	push   $0x1d8
c1009edb:	68 dc be 00 c1       	push   $0xc100bedc
c1009ee0:	e8 86 64 ff ff       	call   c100036b <__PANIC>
c1009ee5:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c1009ee9:	77 2b                	ja     c1009f16 <file_read+0x161>
c1009eeb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1009eee:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009ef1:	8b 45 08             	mov    0x8(%ebp),%eax
c1009ef4:	8b 40 08             	mov    0x8(%eax),%eax
c1009ef7:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009efa:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009f01:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009f04:	01 ca                	add    %ecx,%edx
c1009f06:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009f09:	83 c1 04             	add    $0x4,%ecx
c1009f0c:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009f0f:	89 02                	mov    %eax,(%edx)
c1009f11:	e9 40 01 00 00       	jmp    c100a056 <file_read+0x2a1>
c1009f16:	8b 45 08             	mov    0x8(%ebp),%eax
c1009f19:	8b 40 08             	mov    0x8(%eax),%eax
c1009f1c:	8b 40 40             	mov    0x40(%eax),%eax
c1009f1f:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009f22:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1009f25:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009f28:	83 c2 30             	add    $0x30,%edx
c1009f2b:	83 ec 04             	sub    $0x4,%esp
c1009f2e:	6a 01                	push   $0x1
c1009f30:	50                   	push   %eax
c1009f31:	52                   	push   %edx
c1009f32:	e8 d4 be ff ff       	call   c1005e0b <ide_read>
c1009f37:	83 c4 10             	add    $0x10,%esp
c1009f3a:	e9 17 01 00 00       	jmp    c100a056 <file_read+0x2a1>
c1009f3f:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c1009f43:	77 39                	ja     c1009f7e <file_read+0x1c9>
c1009f45:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009f48:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009f4b:	eb 24                	jmp    c1009f71 <file_read+0x1bc>
c1009f4d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009f50:	8b 40 08             	mov    0x8(%eax),%eax
c1009f53:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009f56:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009f5d:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009f60:	01 ca                	add    %ecx,%edx
c1009f62:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009f65:	83 c1 04             	add    $0x4,%ecx
c1009f68:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009f6b:	89 02                	mov    %eax,(%edx)
c1009f6d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009f71:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009f74:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
c1009f77:	76 d4                	jbe    c1009f4d <file_read+0x198>
c1009f79:	e9 d8 00 00 00       	jmp    c100a056 <file_read+0x2a1>
c1009f7e:	83 7d d8 0b          	cmpl   $0xb,-0x28(%ebp)
c1009f82:	0f 87 84 00 00 00    	ja     c100a00c <file_read+0x257>
c1009f88:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c1009f8c:	76 7e                	jbe    c100a00c <file_read+0x257>
c1009f8e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009f91:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009f94:	eb 24                	jmp    c1009fba <file_read+0x205>
c1009f96:	8b 45 08             	mov    0x8(%ebp),%eax
c1009f99:	8b 40 08             	mov    0x8(%eax),%eax
c1009f9c:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009f9f:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009fa6:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009fa9:	01 ca                	add    %ecx,%edx
c1009fab:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009fae:	83 c1 04             	add    $0x4,%ecx
c1009fb1:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009fb4:	89 02                	mov    %eax,(%edx)
c1009fb6:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009fba:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1009fbe:	76 d6                	jbe    c1009f96 <file_read+0x1e1>
c1009fc0:	8b 45 08             	mov    0x8(%ebp),%eax
c1009fc3:	8b 40 08             	mov    0x8(%eax),%eax
c1009fc6:	8b 40 40             	mov    0x40(%eax),%eax
c1009fc9:	85 c0                	test   %eax,%eax
c1009fcb:	75 19                	jne    c1009fe6 <file_read+0x231>
c1009fcd:	68 2c bf 00 c1       	push   $0xc100bf2c
c1009fd2:	68 40 c1 00 c1       	push   $0xc100c140
c1009fd7:	68 f0 01 00 00       	push   $0x1f0
c1009fdc:	68 dc be 00 c1       	push   $0xc100bedc
c1009fe1:	e8 85 63 ff ff       	call   c100036b <__PANIC>
c1009fe6:	8b 45 08             	mov    0x8(%ebp),%eax
c1009fe9:	8b 40 08             	mov    0x8(%eax),%eax
c1009fec:	8b 40 40             	mov    0x40(%eax),%eax
c1009fef:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009ff2:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1009ff5:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009ff8:	83 c2 30             	add    $0x30,%edx
c1009ffb:	83 ec 04             	sub    $0x4,%esp
c1009ffe:	6a 01                	push   $0x1
c100a000:	50                   	push   %eax
c100a001:	52                   	push   %edx
c100a002:	e8 04 be ff ff       	call   c1005e0b <ide_read>
c100a007:	83 c4 10             	add    $0x10,%esp
c100a00a:	eb 4a                	jmp    c100a056 <file_read+0x2a1>
c100a00c:	8b 45 08             	mov    0x8(%ebp),%eax
c100a00f:	8b 40 08             	mov    0x8(%eax),%eax
c100a012:	8b 40 40             	mov    0x40(%eax),%eax
c100a015:	85 c0                	test   %eax,%eax
c100a017:	75 19                	jne    c100a032 <file_read+0x27d>
c100a019:	68 2c bf 00 c1       	push   $0xc100bf2c
c100a01e:	68 40 c1 00 c1       	push   $0xc100c140
c100a023:	68 f7 01 00 00       	push   $0x1f7
c100a028:	68 dc be 00 c1       	push   $0xc100bedc
c100a02d:	e8 39 63 ff ff       	call   c100036b <__PANIC>
c100a032:	8b 45 08             	mov    0x8(%ebp),%eax
c100a035:	8b 40 08             	mov    0x8(%eax),%eax
c100a038:	8b 40 40             	mov    0x40(%eax),%eax
c100a03b:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100a03e:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100a041:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a044:	83 c2 30             	add    $0x30,%edx
c100a047:	83 ec 04             	sub    $0x4,%esp
c100a04a:	6a 01                	push   $0x1
c100a04c:	50                   	push   %eax
c100a04d:	52                   	push   %edx
c100a04e:	e8 b8 bd ff ff       	call   c1005e0b <ide_read>
c100a053:	83 c4 10             	add    $0x10,%esp
c100a056:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c100a05d:	e9 a7 00 00 00       	jmp    c100a109 <file_read+0x354>
c100a062:	8b 45 08             	mov    0x8(%ebp),%eax
c100a065:	8b 00                	mov    (%eax),%eax
c100a067:	c1 e8 09             	shr    $0x9,%eax
c100a06a:	89 45 c8             	mov    %eax,-0x38(%ebp)
c100a06d:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100a070:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100a077:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a07a:	01 d0                	add    %edx,%eax
c100a07c:	8b 00                	mov    (%eax),%eax
c100a07e:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100a081:	8b 45 08             	mov    0x8(%ebp),%eax
c100a084:	8b 00                	mov    (%eax),%eax
c100a086:	25 ff 01 00 00       	and    $0x1ff,%eax
c100a08b:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100a08e:	b8 00 02 00 00       	mov    $0x200,%eax
c100a093:	2b 45 c0             	sub    -0x40(%ebp),%eax
c100a096:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100a099:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a09c:	39 45 bc             	cmp    %eax,-0x44(%ebp)
c100a09f:	0f 46 45 bc          	cmovbe -0x44(%ebp),%eax
c100a0a3:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100a0a6:	83 ec 04             	sub    $0x4,%esp
c100a0a9:	68 00 02 00 00       	push   $0x200
c100a0ae:	6a 00                	push   $0x0
c100a0b0:	ff 75 e0             	pushl  -0x20(%ebp)
c100a0b3:	e8 f2 5f ff ff       	call   c10000aa <memset>
c100a0b8:	83 c4 10             	add    $0x10,%esp
c100a0bb:	83 ec 04             	sub    $0x4,%esp
c100a0be:	6a 01                	push   $0x1
c100a0c0:	ff 75 c4             	pushl  -0x3c(%ebp)
c100a0c3:	ff 75 e0             	pushl  -0x20(%ebp)
c100a0c6:	e8 40 bd ff ff       	call   c1005e0b <ide_read>
c100a0cb:	83 c4 10             	add    $0x10,%esp
c100a0ce:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100a0d1:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100a0d4:	01 d0                	add    %edx,%eax
c100a0d6:	83 ec 04             	sub    $0x4,%esp
c100a0d9:	ff 75 b8             	pushl  -0x48(%ebp)
c100a0dc:	50                   	push   %eax
c100a0dd:	ff 75 f4             	pushl  -0xc(%ebp)
c100a0e0:	e8 23 60 ff ff       	call   c1000108 <memcpy>
c100a0e5:	83 c4 10             	add    $0x10,%esp
c100a0e8:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a0eb:	01 45 f4             	add    %eax,-0xc(%ebp)
c100a0ee:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0f1:	8b 10                	mov    (%eax),%edx
c100a0f3:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a0f6:	01 c2                	add    %eax,%edx
c100a0f8:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0fb:	89 10                	mov    %edx,(%eax)
c100a0fd:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a100:	01 45 e4             	add    %eax,-0x1c(%ebp)
c100a103:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a106:	29 45 ec             	sub    %eax,-0x14(%ebp)
c100a109:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a10c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c100a10f:	0f 82 4d ff ff ff    	jb     c100a062 <file_read+0x2ad>
c100a115:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a118:	83 ec 08             	sub    $0x8,%esp
c100a11b:	68 30 02 00 00       	push   $0x230
c100a120:	50                   	push   %eax
c100a121:	e8 0e 8c ff ff       	call   c1002d34 <vmm_free>
c100a126:	83 c4 10             	add    $0x10,%esp
c100a129:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a12c:	83 ec 08             	sub    $0x8,%esp
c100a12f:	68 00 02 00 00       	push   $0x200
c100a134:	50                   	push   %eax
c100a135:	e8 fa 8b ff ff       	call   c1002d34 <vmm_free>
c100a13a:	83 c4 10             	add    $0x10,%esp
c100a13d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a140:	c9                   	leave  
c100a141:	c3                   	ret    

c100a142 <inode_locate>:
c100a142:	55                   	push   %ebp
c100a143:	89 e5                	mov    %esp,%ebp
c100a145:	83 ec 20             	sub    $0x20,%esp
c100a148:	8b 45 08             	mov    0x8(%ebp),%eax
c100a14b:	8b 40 10             	mov    0x10(%eax),%eax
c100a14e:	8b 40 20             	mov    0x20(%eax),%eax
c100a151:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100a154:	c7 45 f8 44 00 00 00 	movl   $0x44,-0x8(%ebp)
c100a15b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a15e:	0f af 45 f8          	imul   -0x8(%ebp),%eax
c100a162:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a165:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a168:	c1 e8 09             	shr    $0x9,%eax
c100a16b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a16e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a171:	25 ff 01 00 00       	and    $0x1ff,%eax
c100a176:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a179:	b8 00 02 00 00       	mov    $0x200,%eax
c100a17e:	2b 45 ec             	sub    -0x14(%ebp),%eax
c100a181:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a184:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a187:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c100a18a:	73 08                	jae    c100a194 <inode_locate+0x52>
c100a18c:	8b 45 10             	mov    0x10(%ebp),%eax
c100a18f:	c6 00 01             	movb   $0x1,(%eax)
c100a192:	eb 06                	jmp    c100a19a <inode_locate+0x58>
c100a194:	8b 45 10             	mov    0x10(%ebp),%eax
c100a197:	c6 00 00             	movb   $0x0,(%eax)
c100a19a:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100a19d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a1a0:	01 c2                	add    %eax,%edx
c100a1a2:	8b 45 10             	mov    0x10(%ebp),%eax
c100a1a5:	89 50 04             	mov    %edx,0x4(%eax)
c100a1a8:	8b 45 10             	mov    0x10(%ebp),%eax
c100a1ab:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a1ae:	89 50 08             	mov    %edx,0x8(%eax)
c100a1b1:	90                   	nop
c100a1b2:	c9                   	leave  
c100a1b3:	c3                   	ret    

c100a1b4 <inode_sync>:
c100a1b4:	55                   	push   %ebp
c100a1b5:	89 e5                	mov    %esp,%ebp
c100a1b7:	57                   	push   %edi
c100a1b8:	56                   	push   %esi
c100a1b9:	53                   	push   %ebx
c100a1ba:	83 ec 6c             	sub    $0x6c,%esp
c100a1bd:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a1c0:	8b 00                	mov    (%eax),%eax
c100a1c2:	88 45 e7             	mov    %al,-0x19(%ebp)
c100a1c5:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
c100a1c9:	8d 55 d4             	lea    -0x2c(%ebp),%edx
c100a1cc:	52                   	push   %edx
c100a1cd:	50                   	push   %eax
c100a1ce:	ff 75 08             	pushl  0x8(%ebp)
c100a1d1:	e8 6c ff ff ff       	call   c100a142 <inode_locate>
c100a1d6:	83 c4 0c             	add    $0xc,%esp
c100a1d9:	83 ec 04             	sub    $0x4,%esp
c100a1dc:	6a 44                	push   $0x44
c100a1de:	ff 75 0c             	pushl  0xc(%ebp)
c100a1e1:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a1e4:	50                   	push   %eax
c100a1e5:	e8 1e 5f ff ff       	call   c1000108 <memcpy>
c100a1ea:	83 c4 10             	add    $0x10,%esp
c100a1ed:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
c100a1f4:	c6 45 9c 00          	movb   $0x0,-0x64(%ebp)
c100a1f8:	8b 45 10             	mov    0x10(%ebp),%eax
c100a1fb:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100a1fe:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
c100a202:	84 c0                	test   %al,%al
c100a204:	74 64                	je     c100a26a <inode_sync+0xb6>
c100a206:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a209:	83 ec 04             	sub    $0x4,%esp
c100a20c:	6a 02                	push   $0x2
c100a20e:	50                   	push   %eax
c100a20f:	ff 75 e0             	pushl  -0x20(%ebp)
c100a212:	e8 f4 bb ff ff       	call   c1005e0b <ide_read>
c100a217:	83 c4 10             	add    $0x10,%esp
c100a21a:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a21d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a220:	01 d0                	add    %edx,%eax
c100a222:	89 c2                	mov    %eax,%edx
c100a224:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a227:	b9 44 00 00 00       	mov    $0x44,%ecx
c100a22c:	8b 18                	mov    (%eax),%ebx
c100a22e:	89 1a                	mov    %ebx,(%edx)
c100a230:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c100a234:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c100a238:	8d 5a 04             	lea    0x4(%edx),%ebx
c100a23b:	83 e3 fc             	and    $0xfffffffc,%ebx
c100a23e:	29 da                	sub    %ebx,%edx
c100a240:	29 d0                	sub    %edx,%eax
c100a242:	01 d1                	add    %edx,%ecx
c100a244:	83 e1 fc             	and    $0xfffffffc,%ecx
c100a247:	c1 e9 02             	shr    $0x2,%ecx
c100a24a:	89 ca                	mov    %ecx,%edx
c100a24c:	89 df                	mov    %ebx,%edi
c100a24e:	89 c6                	mov    %eax,%esi
c100a250:	89 d1                	mov    %edx,%ecx
c100a252:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100a254:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a257:	83 ec 04             	sub    $0x4,%esp
c100a25a:	6a 02                	push   $0x2
c100a25c:	50                   	push   %eax
c100a25d:	ff 75 e0             	pushl  -0x20(%ebp)
c100a260:	e8 e3 bb ff ff       	call   c1005e48 <ide_write>
c100a265:	83 c4 10             	add    $0x10,%esp
c100a268:	eb 62                	jmp    c100a2cc <inode_sync+0x118>
c100a26a:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a26d:	83 ec 04             	sub    $0x4,%esp
c100a270:	6a 01                	push   $0x1
c100a272:	50                   	push   %eax
c100a273:	ff 75 e0             	pushl  -0x20(%ebp)
c100a276:	e8 90 bb ff ff       	call   c1005e0b <ide_read>
c100a27b:	83 c4 10             	add    $0x10,%esp
c100a27e:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a281:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a284:	01 d0                	add    %edx,%eax
c100a286:	89 c2                	mov    %eax,%edx
c100a288:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a28b:	b9 44 00 00 00       	mov    $0x44,%ecx
c100a290:	8b 18                	mov    (%eax),%ebx
c100a292:	89 1a                	mov    %ebx,(%edx)
c100a294:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c100a298:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c100a29c:	8d 5a 04             	lea    0x4(%edx),%ebx
c100a29f:	83 e3 fc             	and    $0xfffffffc,%ebx
c100a2a2:	29 da                	sub    %ebx,%edx
c100a2a4:	29 d0                	sub    %edx,%eax
c100a2a6:	01 d1                	add    %edx,%ecx
c100a2a8:	83 e1 fc             	and    $0xfffffffc,%ecx
c100a2ab:	c1 e9 02             	shr    $0x2,%ecx
c100a2ae:	89 ca                	mov    %ecx,%edx
c100a2b0:	89 df                	mov    %ebx,%edi
c100a2b2:	89 c6                	mov    %eax,%esi
c100a2b4:	89 d1                	mov    %edx,%ecx
c100a2b6:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100a2b8:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a2bb:	83 ec 04             	sub    $0x4,%esp
c100a2be:	6a 01                	push   $0x1
c100a2c0:	50                   	push   %eax
c100a2c1:	ff 75 e0             	pushl  -0x20(%ebp)
c100a2c4:	e8 7f bb ff ff       	call   c1005e48 <ide_write>
c100a2c9:	83 c4 10             	add    $0x10,%esp
c100a2cc:	90                   	nop
c100a2cd:	8d 65 f4             	lea    -0xc(%ebp),%esp
c100a2d0:	5b                   	pop    %ebx
c100a2d1:	5e                   	pop    %esi
c100a2d2:	5f                   	pop    %edi
c100a2d3:	5d                   	pop    %ebp
c100a2d4:	c3                   	ret    

c100a2d5 <inode_open>:
c100a2d5:	55                   	push   %ebp
c100a2d6:	89 e5                	mov    %esp,%ebp
c100a2d8:	83 ec 28             	sub    $0x28,%esp
c100a2db:	8d 45 e4             	lea    -0x1c(%ebp),%eax
c100a2de:	50                   	push   %eax
c100a2df:	ff 75 0c             	pushl  0xc(%ebp)
c100a2e2:	ff 75 08             	pushl  0x8(%ebp)
c100a2e5:	e8 58 fe ff ff       	call   c100a142 <inode_locate>
c100a2ea:	83 c4 0c             	add    $0xc,%esp
c100a2ed:	83 ec 08             	sub    $0x8,%esp
c100a2f0:	6a 02                	push   $0x2
c100a2f2:	6a 44                	push   $0x44
c100a2f4:	e8 16 89 ff ff       	call   c1002c0f <vmm_malloc>
c100a2f9:	83 c4 10             	add    $0x10,%esp
c100a2fc:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a2ff:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100a303:	84 c0                	test   %al,%al
c100a305:	74 2b                	je     c100a332 <inode_open+0x5d>
c100a307:	83 ec 08             	sub    $0x8,%esp
c100a30a:	6a 02                	push   $0x2
c100a30c:	68 00 04 00 00       	push   $0x400
c100a311:	e8 f9 88 ff ff       	call   c1002c0f <vmm_malloc>
c100a316:	83 c4 10             	add    $0x10,%esp
c100a319:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a31c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a31f:	83 ec 04             	sub    $0x4,%esp
c100a322:	6a 02                	push   $0x2
c100a324:	50                   	push   %eax
c100a325:	ff 75 f4             	pushl  -0xc(%ebp)
c100a328:	e8 de ba ff ff       	call   c1005e0b <ide_read>
c100a32d:	83 c4 10             	add    $0x10,%esp
c100a330:	eb 29                	jmp    c100a35b <inode_open+0x86>
c100a332:	83 ec 08             	sub    $0x8,%esp
c100a335:	6a 02                	push   $0x2
c100a337:	68 00 02 00 00       	push   $0x200
c100a33c:	e8 ce 88 ff ff       	call   c1002c0f <vmm_malloc>
c100a341:	83 c4 10             	add    $0x10,%esp
c100a344:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a347:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a34a:	83 ec 04             	sub    $0x4,%esp
c100a34d:	6a 01                	push   $0x1
c100a34f:	50                   	push   %eax
c100a350:	ff 75 f4             	pushl  -0xc(%ebp)
c100a353:	e8 b3 ba ff ff       	call   c1005e0b <ide_read>
c100a358:	83 c4 10             	add    $0x10,%esp
c100a35b:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a35e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a361:	01 d0                	add    %edx,%eax
c100a363:	83 ec 04             	sub    $0x4,%esp
c100a366:	6a 44                	push   $0x44
c100a368:	50                   	push   %eax
c100a369:	ff 75 f0             	pushl  -0x10(%ebp)
c100a36c:	e8 97 5d ff ff       	call   c1000108 <memcpy>
c100a371:	83 c4 10             	add    $0x10,%esp
c100a374:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100a378:	84 c0                	test   %al,%al
c100a37a:	74 16                	je     c100a392 <inode_open+0xbd>
c100a37c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a37f:	83 ec 08             	sub    $0x8,%esp
c100a382:	68 00 04 00 00       	push   $0x400
c100a387:	50                   	push   %eax
c100a388:	e8 a7 89 ff ff       	call   c1002d34 <vmm_free>
c100a38d:	83 c4 10             	add    $0x10,%esp
c100a390:	eb 14                	jmp    c100a3a6 <inode_open+0xd1>
c100a392:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a395:	83 ec 08             	sub    $0x8,%esp
c100a398:	68 00 02 00 00       	push   $0x200
c100a39d:	50                   	push   %eax
c100a39e:	e8 91 89 ff ff       	call   c1002d34 <vmm_free>
c100a3a3:	83 c4 10             	add    $0x10,%esp
c100a3a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a3a9:	c9                   	leave  
c100a3aa:	c3                   	ret    

c100a3ab <inode_close>:
c100a3ab:	55                   	push   %ebp
c100a3ac:	89 e5                	mov    %esp,%ebp
c100a3ae:	83 ec 08             	sub    $0x8,%esp
c100a3b1:	8b 45 08             	mov    0x8(%ebp),%eax
c100a3b4:	83 ec 08             	sub    $0x8,%esp
c100a3b7:	6a 44                	push   $0x44
c100a3b9:	50                   	push   %eax
c100a3ba:	e8 75 89 ff ff       	call   c1002d34 <vmm_free>
c100a3bf:	83 c4 10             	add    $0x10,%esp
c100a3c2:	90                   	nop
c100a3c3:	c9                   	leave  
c100a3c4:	c3                   	ret    

c100a3c5 <inode_delete>:
c100a3c5:	55                   	push   %ebp
c100a3c6:	89 e5                	mov    %esp,%ebp
c100a3c8:	83 ec 18             	sub    $0x18,%esp
c100a3cb:	81 7d 0c ff 0f 00 00 	cmpl   $0xfff,0xc(%ebp)
c100a3d2:	76 16                	jbe    c100a3ea <inode_delete+0x25>
c100a3d4:	68 4c c1 00 c1       	push   $0xc100c14c
c100a3d9:	68 08 c2 00 c1       	push   $0xc100c208
c100a3de:	6a 6b                	push   $0x6b
c100a3e0:	68 5c c1 00 c1       	push   $0xc100c15c
c100a3e5:	e8 81 5f ff ff       	call   c100036b <__PANIC>
c100a3ea:	83 ec 04             	sub    $0x4,%esp
c100a3ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
c100a3f0:	50                   	push   %eax
c100a3f1:	ff 75 0c             	pushl  0xc(%ebp)
c100a3f4:	ff 75 08             	pushl  0x8(%ebp)
c100a3f7:	e8 46 fd ff ff       	call   c100a142 <inode_locate>
c100a3fc:	83 c4 10             	add    $0x10,%esp
c100a3ff:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a402:	8b 45 08             	mov    0x8(%ebp),%eax
c100a405:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c100a409:	0f b6 c8             	movzbl %al,%ecx
c100a40c:	8b 45 08             	mov    0x8(%ebp),%eax
c100a40f:	8b 40 0c             	mov    0xc(%eax),%eax
c100a412:	01 c8                	add    %ecx,%eax
c100a414:	39 c2                	cmp    %eax,%edx
c100a416:	76 16                	jbe    c100a42e <inode_delete+0x69>
c100a418:	68 90 c1 00 c1       	push   $0xc100c190
c100a41d:	68 08 c2 00 c1       	push   $0xc100c208
c100a422:	6a 6e                	push   $0x6e
c100a424:	68 5c c1 00 c1       	push   $0xc100c15c
c100a429:	e8 3d 5f ff ff       	call   c100036b <__PANIC>
c100a42e:	8b 45 10             	mov    0x10(%ebp),%eax
c100a431:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a434:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
c100a438:	84 c0                	test   %al,%al
c100a43a:	74 42                	je     c100a47e <inode_delete+0xb9>
c100a43c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a43f:	83 ec 04             	sub    $0x4,%esp
c100a442:	6a 02                	push   $0x2
c100a444:	50                   	push   %eax
c100a445:	ff 75 f4             	pushl  -0xc(%ebp)
c100a448:	e8 be b9 ff ff       	call   c1005e0b <ide_read>
c100a44d:	83 c4 10             	add    $0x10,%esp
c100a450:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a453:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a456:	01 d0                	add    %edx,%eax
c100a458:	83 ec 04             	sub    $0x4,%esp
c100a45b:	6a 44                	push   $0x44
c100a45d:	6a 00                	push   $0x0
c100a45f:	50                   	push   %eax
c100a460:	e8 45 5c ff ff       	call   c10000aa <memset>
c100a465:	83 c4 10             	add    $0x10,%esp
c100a468:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a46b:	83 ec 04             	sub    $0x4,%esp
c100a46e:	6a 02                	push   $0x2
c100a470:	50                   	push   %eax
c100a471:	ff 75 f4             	pushl  -0xc(%ebp)
c100a474:	e8 cf b9 ff ff       	call   c1005e48 <ide_write>
c100a479:	83 c4 10             	add    $0x10,%esp
c100a47c:	eb 40                	jmp    c100a4be <inode_delete+0xf9>
c100a47e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a481:	83 ec 04             	sub    $0x4,%esp
c100a484:	6a 01                	push   $0x1
c100a486:	50                   	push   %eax
c100a487:	ff 75 f4             	pushl  -0xc(%ebp)
c100a48a:	e8 7c b9 ff ff       	call   c1005e0b <ide_read>
c100a48f:	83 c4 10             	add    $0x10,%esp
c100a492:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a495:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a498:	01 d0                	add    %edx,%eax
c100a49a:	83 ec 04             	sub    $0x4,%esp
c100a49d:	6a 44                	push   $0x44
c100a49f:	6a 00                	push   $0x0
c100a4a1:	50                   	push   %eax
c100a4a2:	e8 03 5c ff ff       	call   c10000aa <memset>
c100a4a7:	83 c4 10             	add    $0x10,%esp
c100a4aa:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a4ad:	83 ec 04             	sub    $0x4,%esp
c100a4b0:	6a 01                	push   $0x1
c100a4b2:	50                   	push   %eax
c100a4b3:	ff 75 f4             	pushl  -0xc(%ebp)
c100a4b6:	e8 8d b9 ff ff       	call   c1005e48 <ide_write>
c100a4bb:	83 c4 10             	add    $0x10,%esp
c100a4be:	90                   	nop
c100a4bf:	c9                   	leave  
c100a4c0:	c3                   	ret    

c100a4c1 <inode_release>:
c100a4c1:	55                   	push   %ebp
c100a4c2:	89 e5                	mov    %esp,%ebp
c100a4c4:	57                   	push   %edi
c100a4c5:	53                   	push   %ebx
c100a4c6:	81 ec 50 02 00 00    	sub    $0x250,%esp
c100a4cc:	83 ec 08             	sub    $0x8,%esp
c100a4cf:	ff 75 0c             	pushl  0xc(%ebp)
c100a4d2:	ff 75 08             	pushl  0x8(%ebp)
c100a4d5:	e8 fb fd ff ff       	call   c100a2d5 <inode_open>
c100a4da:	83 c4 10             	add    $0x10,%esp
c100a4dd:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a4e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a4e3:	8b 00                	mov    (%eax),%eax
c100a4e5:	39 45 0c             	cmp    %eax,0xc(%ebp)
c100a4e8:	74 19                	je     c100a503 <inode_release+0x42>
c100a4ea:	68 d0 c1 00 c1       	push   $0xc100c1d0
c100a4ef:	68 18 c2 00 c1       	push   $0xc100c218
c100a4f4:	68 85 00 00 00       	push   $0x85
c100a4f9:	68 5c c1 00 c1       	push   $0xc100c15c
c100a4fe:	e8 68 5e ff ff       	call   c100036b <__PANIC>
c100a503:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100a507:	c6 45 f6 0c          	movb   $0xc,-0xa(%ebp)
c100a50b:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
c100a511:	b8 00 00 00 00       	mov    $0x0,%eax
c100a516:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100a51b:	89 d7                	mov    %edx,%edi
c100a51d:	f3 ab                	rep stos %eax,%es:(%edi)
c100a51f:	eb 22                	jmp    c100a543 <inode_release+0x82>
c100a521:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c100a525:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a529:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a52c:	83 c1 04             	add    $0x4,%ecx
c100a52f:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c100a532:	89 94 85 b0 fd ff ff 	mov    %edx,-0x250(%ebp,%eax,4)
c100a539:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a53d:	83 c0 01             	add    $0x1,%eax
c100a540:	88 45 f7             	mov    %al,-0x9(%ebp)
c100a543:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c100a547:	76 d8                	jbe    c100a521 <inode_release+0x60>
c100a549:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a54c:	8b 40 40             	mov    0x40(%eax),%eax
c100a54f:	85 c0                	test   %eax,%eax
c100a551:	0f 84 b2 00 00 00    	je     c100a609 <inode_release+0x148>
c100a557:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a55a:	8b 50 40             	mov    0x40(%eax),%edx
c100a55d:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
c100a563:	83 c0 30             	add    $0x30,%eax
c100a566:	83 ec 04             	sub    $0x4,%esp
c100a569:	6a 01                	push   $0x1
c100a56b:	52                   	push   %edx
c100a56c:	50                   	push   %eax
c100a56d:	e8 99 b8 ff ff       	call   c1005e0b <ide_read>
c100a572:	83 c4 10             	add    $0x10,%esp
c100a575:	c6 45 f6 8c          	movb   $0x8c,-0xa(%ebp)
c100a579:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a57c:	8b 50 40             	mov    0x40(%eax),%edx
c100a57f:	8b 45 08             	mov    0x8(%ebp),%eax
c100a582:	8b 40 10             	mov    0x10(%eax),%eax
c100a585:	8b 40 28             	mov    0x28(%eax),%eax
c100a588:	29 c2                	sub    %eax,%edx
c100a58a:	89 d0                	mov    %edx,%eax
c100a58c:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a58f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100a593:	75 19                	jne    c100a5ae <inode_release+0xed>
c100a595:	68 f0 c1 00 c1       	push   $0xc100c1f0
c100a59a:	68 18 c2 00 c1       	push   $0xc100c218
c100a59f:	68 9d 00 00 00       	push   $0x9d
c100a5a4:	68 5c c1 00 c1       	push   $0xc100c15c
c100a5a9:	e8 bd 5d ff ff       	call   c100036b <__PANIC>
c100a5ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a5b1:	c1 e8 03             	shr    $0x3,%eax
c100a5b4:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a5b7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a5ba:	83 e0 07             	and    $0x7,%eax
c100a5bd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a5c0:	8b 45 08             	mov    0x8(%ebp),%eax
c100a5c3:	8b 50 18             	mov    0x18(%eax),%edx
c100a5c6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a5c9:	01 d0                	add    %edx,%eax
c100a5cb:	0f b6 00             	movzbl (%eax),%eax
c100a5ce:	89 c2                	mov    %eax,%edx
c100a5d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a5d3:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a5d8:	89 c1                	mov    %eax,%ecx
c100a5da:	d3 e3                	shl    %cl,%ebx
c100a5dc:	89 d8                	mov    %ebx,%eax
c100a5de:	f7 d0                	not    %eax
c100a5e0:	89 d1                	mov    %edx,%ecx
c100a5e2:	21 c1                	and    %eax,%ecx
c100a5e4:	8b 45 08             	mov    0x8(%ebp),%eax
c100a5e7:	8b 50 18             	mov    0x18(%eax),%edx
c100a5ea:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a5ed:	01 d0                	add    %edx,%eax
c100a5ef:	89 ca                	mov    %ecx,%edx
c100a5f1:	88 10                	mov    %dl,(%eax)
c100a5f3:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a5f8:	83 ec 04             	sub    $0x4,%esp
c100a5fb:	6a 01                	push   $0x1
c100a5fd:	ff 75 ec             	pushl  -0x14(%ebp)
c100a600:	50                   	push   %eax
c100a601:	e8 90 eb ff ff       	call   c1009196 <bitmap_sync>
c100a606:	83 c4 10             	add    $0x10,%esp
c100a609:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100a60d:	e9 b9 00 00 00       	jmp    c100a6cb <inode_release+0x20a>
c100a612:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a616:	8b 84 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%eax
c100a61d:	85 c0                	test   %eax,%eax
c100a61f:	0f 84 9c 00 00 00    	je     c100a6c1 <inode_release+0x200>
c100a625:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100a62c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a630:	8b 94 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%edx
c100a637:	8b 45 08             	mov    0x8(%ebp),%eax
c100a63a:	8b 40 10             	mov    0x10(%eax),%eax
c100a63d:	8b 40 28             	mov    0x28(%eax),%eax
c100a640:	29 c2                	sub    %eax,%edx
c100a642:	89 d0                	mov    %edx,%eax
c100a644:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a647:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100a64b:	75 19                	jne    c100a666 <inode_release+0x1a5>
c100a64d:	68 f0 c1 00 c1       	push   $0xc100c1f0
c100a652:	68 18 c2 00 c1       	push   $0xc100c218
c100a657:	68 aa 00 00 00       	push   $0xaa
c100a65c:	68 5c c1 00 c1       	push   $0xc100c15c
c100a661:	e8 05 5d ff ff       	call   c100036b <__PANIC>
c100a666:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a669:	c1 e8 03             	shr    $0x3,%eax
c100a66c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a66f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a672:	83 e0 07             	and    $0x7,%eax
c100a675:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a678:	8b 45 08             	mov    0x8(%ebp),%eax
c100a67b:	8b 50 18             	mov    0x18(%eax),%edx
c100a67e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a681:	01 d0                	add    %edx,%eax
c100a683:	0f b6 00             	movzbl (%eax),%eax
c100a686:	89 c2                	mov    %eax,%edx
c100a688:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a68b:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a690:	89 c1                	mov    %eax,%ecx
c100a692:	d3 e3                	shl    %cl,%ebx
c100a694:	89 d8                	mov    %ebx,%eax
c100a696:	f7 d0                	not    %eax
c100a698:	89 d1                	mov    %edx,%ecx
c100a69a:	21 c1                	and    %eax,%ecx
c100a69c:	8b 45 08             	mov    0x8(%ebp),%eax
c100a69f:	8b 50 18             	mov    0x18(%eax),%edx
c100a6a2:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a6a5:	01 d0                	add    %edx,%eax
c100a6a7:	89 ca                	mov    %ecx,%edx
c100a6a9:	88 10                	mov    %dl,(%eax)
c100a6ab:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a6b0:	83 ec 04             	sub    $0x4,%esp
c100a6b3:	6a 01                	push   $0x1
c100a6b5:	ff 75 ec             	pushl  -0x14(%ebp)
c100a6b8:	50                   	push   %eax
c100a6b9:	e8 d8 ea ff ff       	call   c1009196 <bitmap_sync>
c100a6be:	83 c4 10             	add    $0x10,%esp
c100a6c1:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a6c5:	83 c0 01             	add    $0x1,%eax
c100a6c8:	88 45 f7             	mov    %al,-0x9(%ebp)
c100a6cb:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a6cf:	3a 45 f6             	cmp    -0xa(%ebp),%al
c100a6d2:	0f 82 3a ff ff ff    	jb     c100a612 <inode_release+0x151>
c100a6d8:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a6db:	c1 e8 03             	shr    $0x3,%eax
c100a6de:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a6e1:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a6e4:	83 e0 07             	and    $0x7,%eax
c100a6e7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a6ea:	8b 45 08             	mov    0x8(%ebp),%eax
c100a6ed:	8b 50 20             	mov    0x20(%eax),%edx
c100a6f0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a6f3:	01 d0                	add    %edx,%eax
c100a6f5:	0f b6 00             	movzbl (%eax),%eax
c100a6f8:	89 c2                	mov    %eax,%edx
c100a6fa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a6fd:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a702:	89 c1                	mov    %eax,%ecx
c100a704:	d3 e3                	shl    %cl,%ebx
c100a706:	89 d8                	mov    %ebx,%eax
c100a708:	f7 d0                	not    %eax
c100a70a:	89 d1                	mov    %edx,%ecx
c100a70c:	21 c1                	and    %eax,%ecx
c100a70e:	8b 45 08             	mov    0x8(%ebp),%eax
c100a711:	8b 50 20             	mov    0x20(%eax),%edx
c100a714:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a717:	01 d0                	add    %edx,%eax
c100a719:	89 ca                	mov    %ecx,%edx
c100a71b:	88 10                	mov    %dl,(%eax)
c100a71d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a722:	83 ec 04             	sub    $0x4,%esp
c100a725:	6a 00                	push   $0x0
c100a727:	ff 75 0c             	pushl  0xc(%ebp)
c100a72a:	50                   	push   %eax
c100a72b:	e8 66 ea ff ff       	call   c1009196 <bitmap_sync>
c100a730:	83 c4 10             	add    $0x10,%esp
c100a733:	83 ec 08             	sub    $0x8,%esp
c100a736:	6a 02                	push   $0x2
c100a738:	68 00 04 00 00       	push   $0x400
c100a73d:	e8 cd 84 ff ff       	call   c1002c0f <vmm_malloc>
c100a742:	83 c4 10             	add    $0x10,%esp
c100a745:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100a748:	83 ec 04             	sub    $0x4,%esp
c100a74b:	ff 75 e0             	pushl  -0x20(%ebp)
c100a74e:	ff 75 0c             	pushl  0xc(%ebp)
c100a751:	ff 75 08             	pushl  0x8(%ebp)
c100a754:	e8 6c fc ff ff       	call   c100a3c5 <inode_delete>
c100a759:	83 c4 10             	add    $0x10,%esp
c100a75c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a75f:	83 ec 08             	sub    $0x8,%esp
c100a762:	68 00 04 00 00       	push   $0x400
c100a767:	50                   	push   %eax
c100a768:	e8 c7 85 ff ff       	call   c1002d34 <vmm_free>
c100a76d:	83 c4 10             	add    $0x10,%esp
c100a770:	83 ec 0c             	sub    $0xc,%esp
c100a773:	ff 75 f0             	pushl  -0x10(%ebp)
c100a776:	e8 30 fc ff ff       	call   c100a3ab <inode_close>
c100a77b:	83 c4 10             	add    $0x10,%esp
c100a77e:	90                   	nop
c100a77f:	8d 65 f8             	lea    -0x8(%ebp),%esp
c100a782:	5b                   	pop    %ebx
c100a783:	5f                   	pop    %edi
c100a784:	5d                   	pop    %ebp
c100a785:	c3                   	ret    

c100a786 <inode_init>:
c100a786:	55                   	push   %ebp
c100a787:	89 e5                	mov    %esp,%ebp
c100a789:	83 ec 10             	sub    $0x10,%esp
c100a78c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a78f:	8b 55 08             	mov    0x8(%ebp),%edx
c100a792:	89 10                	mov    %edx,(%eax)
c100a794:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a797:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100a79e:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a7a1:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100a7a8:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a7ab:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c100a7af:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100a7b6:	eb 14                	jmp    c100a7cc <inode_init+0x46>
c100a7b8:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a7bb:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100a7be:	83 c2 04             	add    $0x4,%edx
c100a7c1:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c100a7c8:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100a7cc:	83 7d fc 0c          	cmpl   $0xc,-0x4(%ebp)
c100a7d0:	7e e6                	jle    c100a7b8 <inode_init+0x32>
c100a7d2:	90                   	nop
c100a7d3:	90                   	nop
c100a7d4:	c9                   	leave  
c100a7d5:	c3                   	ret    
