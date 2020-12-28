
test_exec:     file format elf32-i386


Disassembly of section .text:

80000000 <printf>:
80000000:	55                   	push   %ebp
80000001:	89 e5                	mov    %esp,%ebp
80000003:	83 ec 38             	sub    $0x38,%esp
80000006:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
8000000a:	8d 45 0c             	lea    0xc(%ebp),%eax
8000000d:	89 45 f4             	mov    %eax,-0xc(%ebp)
80000010:	e9 da 02 00 00       	jmp    800002ef <printf+0x2ef>
80000015:	8b 45 08             	mov    0x8(%ebp),%eax
80000018:	0f b6 00             	movzbl (%eax),%eax
8000001b:	3c 25                	cmp    $0x25,%al
8000001d:	0f 85 aa 02 00 00    	jne    800002cd <printf+0x2cd>
80000023:	90                   	nop
80000024:	8b 45 08             	mov    0x8(%ebp),%eax
80000027:	83 c0 01             	add    $0x1,%eax
8000002a:	89 45 08             	mov    %eax,0x8(%ebp)
8000002d:	8b 45 08             	mov    0x8(%ebp),%eax
80000030:	0f b6 00             	movzbl (%eax),%eax
80000033:	0f be c0             	movsbl %al,%eax
80000036:	83 e8 30             	sub    $0x30,%eax
80000039:	83 f8 48             	cmp    $0x48,%eax
8000003c:	0f 87 6f 02 00 00    	ja     800002b1 <printf+0x2b1>
80000042:	8b 04 85 4c 06 00 80 	mov    -0x7ffff9b4(,%eax,4),%eax
80000049:	ff e0                	jmp    *%eax
8000004b:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
8000004f:	8b 45 f4             	mov    -0xc(%ebp),%eax
80000052:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
80000056:	88 45 d7             	mov    %al,-0x29(%ebp)
80000059:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
8000005d:	83 ec 0c             	sub    $0xc,%esp
80000060:	50                   	push   %eax
80000061:	e8 06 03 00 00       	call   8000036c <user_print_char>
80000066:	83 c4 10             	add    $0x10,%esp
80000069:	e9 54 02 00 00       	jmp    800002c2 <printf+0x2c2>
8000006e:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
80000072:	8b 45 f4             	mov    -0xc(%ebp),%eax
80000075:	8b 40 fc             	mov    -0x4(%eax),%eax
80000078:	89 45 dc             	mov    %eax,-0x24(%ebp)
8000007b:	83 ec 0c             	sub    $0xc,%esp
8000007e:	ff 75 dc             	pushl  -0x24(%ebp)
80000081:	e8 04 03 00 00       	call   8000038a <user_print_string>
80000086:	83 c4 10             	add    $0x10,%esp
80000089:	e9 34 02 00 00       	jmp    800002c2 <printf+0x2c2>
8000008e:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
80000092:	8b 45 f4             	mov    -0xc(%ebp),%eax
80000095:	8b 40 fc             	mov    -0x4(%eax),%eax
80000098:	89 45 d8             	mov    %eax,-0x28(%ebp)
8000009b:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
8000009f:	74 19                	je     800000ba <printf+0xba>
800000a1:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
800000a5:	6a 01                	push   $0x1
800000a7:	50                   	push   %eax
800000a8:	6a 0a                	push   $0xa
800000aa:	ff 75 d8             	pushl  -0x28(%ebp)
800000ad:	e8 eb 02 00 00       	call   8000039d <user_print_num>
800000b2:	83 c4 10             	add    $0x10,%esp
800000b5:	e9 08 02 00 00       	jmp    800002c2 <printf+0x2c2>
800000ba:	6a 00                	push   $0x0
800000bc:	6a 14                	push   $0x14
800000be:	6a 0a                	push   $0xa
800000c0:	ff 75 d8             	pushl  -0x28(%ebp)
800000c3:	e8 d5 02 00 00       	call   8000039d <user_print_num>
800000c8:	83 c4 10             	add    $0x10,%esp
800000cb:	e9 f2 01 00 00       	jmp    800002c2 <printf+0x2c2>
800000d0:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
800000d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
800000d7:	8b 40 fc             	mov    -0x4(%eax),%eax
800000da:	89 45 d0             	mov    %eax,-0x30(%ebp)
800000dd:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
800000e1:	74 19                	je     800000fc <printf+0xfc>
800000e3:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
800000e7:	6a 01                	push   $0x1
800000e9:	50                   	push   %eax
800000ea:	6a 10                	push   $0x10
800000ec:	ff 75 d0             	pushl  -0x30(%ebp)
800000ef:	e8 a9 02 00 00       	call   8000039d <user_print_num>
800000f4:	83 c4 10             	add    $0x10,%esp
800000f7:	e9 c6 01 00 00       	jmp    800002c2 <printf+0x2c2>
800000fc:	6a 00                	push   $0x0
800000fe:	6a 14                	push   $0x14
80000100:	6a 10                	push   $0x10
80000102:	ff 75 d0             	pushl  -0x30(%ebp)
80000105:	e8 93 02 00 00       	call   8000039d <user_print_num>
8000010a:	83 c4 10             	add    $0x10,%esp
8000010d:	e9 b0 01 00 00       	jmp    800002c2 <printf+0x2c2>
80000112:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
80000116:	8b 45 f4             	mov    -0xc(%ebp),%eax
80000119:	8b 50 fc             	mov    -0x4(%eax),%edx
8000011c:	8b 40 f8             	mov    -0x8(%eax),%eax
8000011f:	89 45 c8             	mov    %eax,-0x38(%ebp)
80000122:	89 55 cc             	mov    %edx,-0x34(%ebp)
80000125:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
80000129:	74 1a                	je     80000145 <printf+0x145>
8000012b:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
8000012f:	8b 45 c8             	mov    -0x38(%ebp),%eax
80000132:	6a 01                	push   $0x1
80000134:	52                   	push   %edx
80000135:	6a 10                	push   $0x10
80000137:	50                   	push   %eax
80000138:	e8 60 02 00 00       	call   8000039d <user_print_num>
8000013d:	83 c4 10             	add    $0x10,%esp
80000140:	e9 7d 01 00 00       	jmp    800002c2 <printf+0x2c2>
80000145:	8b 45 c8             	mov    -0x38(%ebp),%eax
80000148:	6a 00                	push   $0x0
8000014a:	6a 14                	push   $0x14
8000014c:	6a 10                	push   $0x10
8000014e:	50                   	push   %eax
8000014f:	e8 49 02 00 00       	call   8000039d <user_print_num>
80000154:	83 c4 10             	add    $0x10,%esp
80000157:	e9 66 01 00 00       	jmp    800002c2 <printf+0x2c2>
8000015c:	8b 45 08             	mov    0x8(%ebp),%eax
8000015f:	83 c0 01             	add    $0x1,%eax
80000162:	89 45 08             	mov    %eax,0x8(%ebp)
80000165:	8b 45 08             	mov    0x8(%ebp),%eax
80000168:	0f b6 00             	movzbl (%eax),%eax
8000016b:	0f be c0             	movsbl %al,%eax
8000016e:	83 f8 78             	cmp    $0x78,%eax
80000171:	0f 84 80 00 00 00    	je     800001f7 <printf+0x1f7>
80000177:	83 f8 78             	cmp    $0x78,%eax
8000017a:	0f 8f f9 00 00 00    	jg     80000279 <printf+0x279>
80000180:	83 f8 6c             	cmp    $0x6c,%eax
80000183:	0f 84 ac 00 00 00    	je     80000235 <printf+0x235>
80000189:	83 f8 6c             	cmp    $0x6c,%eax
8000018c:	0f 8f e7 00 00 00    	jg     80000279 <printf+0x279>
80000192:	83 f8 64             	cmp    $0x64,%eax
80000195:	74 1c                	je     800001b3 <printf+0x1b3>
80000197:	83 f8 64             	cmp    $0x64,%eax
8000019a:	0f 8f d9 00 00 00    	jg     80000279 <printf+0x279>
800001a0:	83 f8 4c             	cmp    $0x4c,%eax
800001a3:	0f 84 8c 00 00 00    	je     80000235 <printf+0x235>
800001a9:	83 f8 58             	cmp    $0x58,%eax
800001ac:	74 49                	je     800001f7 <printf+0x1f7>
800001ae:	e9 c6 00 00 00       	jmp    80000279 <printf+0x279>
800001b3:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
800001b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
800001ba:	8b 40 fc             	mov    -0x4(%eax),%eax
800001bd:	89 45 ec             	mov    %eax,-0x14(%ebp)
800001c0:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
800001c4:	74 1a                	je     800001e0 <printf+0x1e0>
800001c6:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
800001ca:	8b 45 ec             	mov    -0x14(%ebp),%eax
800001cd:	6a 01                	push   $0x1
800001cf:	52                   	push   %edx
800001d0:	6a 0a                	push   $0xa
800001d2:	50                   	push   %eax
800001d3:	e8 c5 01 00 00       	call   8000039d <user_print_num>
800001d8:	83 c4 10             	add    $0x10,%esp
800001db:	e9 9a 00 00 00       	jmp    8000027a <printf+0x27a>
800001e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
800001e3:	6a 00                	push   $0x0
800001e5:	6a 14                	push   $0x14
800001e7:	6a 0a                	push   $0xa
800001e9:	50                   	push   %eax
800001ea:	e8 ae 01 00 00       	call   8000039d <user_print_num>
800001ef:	83 c4 10             	add    $0x10,%esp
800001f2:	e9 83 00 00 00       	jmp    8000027a <printf+0x27a>
800001f7:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
800001fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
800001fe:	8b 40 fc             	mov    -0x4(%eax),%eax
80000201:	89 45 e8             	mov    %eax,-0x18(%ebp)
80000204:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
80000208:	74 17                	je     80000221 <printf+0x221>
8000020a:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
8000020e:	8b 45 e8             	mov    -0x18(%ebp),%eax
80000211:	6a 01                	push   $0x1
80000213:	52                   	push   %edx
80000214:	6a 10                	push   $0x10
80000216:	50                   	push   %eax
80000217:	e8 81 01 00 00       	call   8000039d <user_print_num>
8000021c:	83 c4 10             	add    $0x10,%esp
8000021f:	eb 59                	jmp    8000027a <printf+0x27a>
80000221:	8b 45 e8             	mov    -0x18(%ebp),%eax
80000224:	6a 00                	push   $0x0
80000226:	6a 14                	push   $0x14
80000228:	6a 10                	push   $0x10
8000022a:	50                   	push   %eax
8000022b:	e8 6d 01 00 00       	call   8000039d <user_print_num>
80000230:	83 c4 10             	add    $0x10,%esp
80000233:	eb 45                	jmp    8000027a <printf+0x27a>
80000235:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
80000239:	8b 45 f4             	mov    -0xc(%ebp),%eax
8000023c:	8b 50 fc             	mov    -0x4(%eax),%edx
8000023f:	8b 40 f8             	mov    -0x8(%eax),%eax
80000242:	89 45 e0             	mov    %eax,-0x20(%ebp)
80000245:	89 55 e4             	mov    %edx,-0x1c(%ebp)
80000248:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
8000024c:	74 17                	je     80000265 <printf+0x265>
8000024e:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
80000252:	8b 45 e0             	mov    -0x20(%ebp),%eax
80000255:	6a 01                	push   $0x1
80000257:	52                   	push   %edx
80000258:	6a 10                	push   $0x10
8000025a:	50                   	push   %eax
8000025b:	e8 3d 01 00 00       	call   8000039d <user_print_num>
80000260:	83 c4 10             	add    $0x10,%esp
80000263:	eb 15                	jmp    8000027a <printf+0x27a>
80000265:	8b 45 e0             	mov    -0x20(%ebp),%eax
80000268:	6a 00                	push   $0x0
8000026a:	6a 14                	push   $0x14
8000026c:	6a 10                	push   $0x10
8000026e:	50                   	push   %eax
8000026f:	e8 29 01 00 00       	call   8000039d <user_print_num>
80000274:	83 c4 10             	add    $0x10,%esp
80000277:	eb 01                	jmp    8000027a <printf+0x27a>
80000279:	90                   	nop
8000027a:	eb 46                	jmp    800002c2 <printf+0x2c2>
8000027c:	8b 45 08             	mov    0x8(%ebp),%eax
8000027f:	0f b6 00             	movzbl (%eax),%eax
80000282:	0f be c0             	movsbl %al,%eax
80000285:	83 e8 30             	sub    $0x30,%eax
80000288:	89 c2                	mov    %eax,%edx
8000028a:	89 d0                	mov    %edx,%eax
8000028c:	c1 e0 02             	shl    $0x2,%eax
8000028f:	01 d0                	add    %edx,%eax
80000291:	01 c0                	add    %eax,%eax
80000293:	89 c2                	mov    %eax,%edx
80000295:	8b 45 08             	mov    0x8(%ebp),%eax
80000298:	83 c0 01             	add    $0x1,%eax
8000029b:	89 45 08             	mov    %eax,0x8(%ebp)
8000029e:	8b 45 08             	mov    0x8(%ebp),%eax
800002a1:	0f b6 00             	movzbl (%eax),%eax
800002a4:	01 d0                	add    %edx,%eax
800002a6:	83 e8 30             	sub    $0x30,%eax
800002a9:	88 45 f3             	mov    %al,-0xd(%ebp)
800002ac:	e9 73 fd ff ff       	jmp    80000024 <printf+0x24>
800002b1:	83 ec 0c             	sub    $0xc,%esp
800002b4:	68 2c 06 00 80       	push   $0x8000062c
800002b9:	e8 cc 00 00 00       	call   8000038a <user_print_string>
800002be:	83 c4 10             	add    $0x10,%esp
800002c1:	90                   	nop
800002c2:	8b 45 08             	mov    0x8(%ebp),%eax
800002c5:	83 c0 01             	add    $0x1,%eax
800002c8:	89 45 08             	mov    %eax,0x8(%ebp)
800002cb:	eb 1e                	jmp    800002eb <printf+0x2eb>
800002cd:	8b 45 08             	mov    0x8(%ebp),%eax
800002d0:	0f b6 00             	movzbl (%eax),%eax
800002d3:	0f be c0             	movsbl %al,%eax
800002d6:	83 ec 0c             	sub    $0xc,%esp
800002d9:	50                   	push   %eax
800002da:	e8 8d 00 00 00       	call   8000036c <user_print_char>
800002df:	83 c4 10             	add    $0x10,%esp
800002e2:	8b 45 08             	mov    0x8(%ebp),%eax
800002e5:	83 c0 01             	add    $0x1,%eax
800002e8:	89 45 08             	mov    %eax,0x8(%ebp)
800002eb:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
800002ef:	8b 45 08             	mov    0x8(%ebp),%eax
800002f2:	0f b6 00             	movzbl (%eax),%eax
800002f5:	84 c0                	test   %al,%al
800002f7:	0f 85 18 fd ff ff    	jne    80000015 <printf+0x15>
800002fd:	90                   	nop
800002fe:	90                   	nop
800002ff:	c9                   	leave  
80000300:	c3                   	ret    

80000301 <user_syscall>:
80000301:	55                   	push   %ebp
80000302:	89 e5                	mov    %esp,%ebp
80000304:	57                   	push   %edi
80000305:	56                   	push   %esi
80000306:	53                   	push   %ebx
80000307:	83 ec 20             	sub    $0x20,%esp
8000030a:	8d 45 0c             	lea    0xc(%ebp),%eax
8000030d:	89 45 f0             	mov    %eax,-0x10(%ebp)
80000310:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
80000317:	eb 15                	jmp    8000032e <user_syscall+0x2d>
80000319:	83 45 f0 04          	addl   $0x4,-0x10(%ebp)
8000031d:	8b 45 f0             	mov    -0x10(%ebp),%eax
80000320:	8b 50 fc             	mov    -0x4(%eax),%edx
80000323:	8b 45 ec             	mov    -0x14(%ebp),%eax
80000326:	89 54 85 d4          	mov    %edx,-0x2c(%ebp,%eax,4)
8000032a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
8000032e:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
80000332:	7e e5                	jle    80000319 <user_syscall+0x18>
80000334:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
8000033b:	8b 45 08             	mov    0x8(%ebp),%eax
8000033e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
80000341:	8b 4d d8             	mov    -0x28(%ebp),%ecx
80000344:	8b 5d dc             	mov    -0x24(%ebp),%ebx
80000347:	8b 7d e0             	mov    -0x20(%ebp),%edi
8000034a:	8b 75 e4             	mov    -0x1c(%ebp),%esi
8000034d:	cd 80                	int    $0x80
8000034f:	89 45 e8             	mov    %eax,-0x18(%ebp)
80000352:	8b 45 e8             	mov    -0x18(%ebp),%eax
80000355:	83 c4 20             	add    $0x20,%esp
80000358:	5b                   	pop    %ebx
80000359:	5e                   	pop    %esi
8000035a:	5f                   	pop    %edi
8000035b:	5d                   	pop    %ebp
8000035c:	c3                   	ret    

8000035d <user_sys_getpid>:
8000035d:	55                   	push   %ebp
8000035e:	89 e5                	mov    %esp,%ebp
80000360:	6a 12                	push   $0x12
80000362:	e8 9a ff ff ff       	call   80000301 <user_syscall>
80000367:	83 c4 04             	add    $0x4,%esp
8000036a:	c9                   	leave  
8000036b:	c3                   	ret    

8000036c <user_print_char>:
8000036c:	55                   	push   %ebp
8000036d:	89 e5                	mov    %esp,%ebp
8000036f:	83 ec 04             	sub    $0x4,%esp
80000372:	8b 45 08             	mov    0x8(%ebp),%eax
80000375:	88 45 fc             	mov    %al,-0x4(%ebp)
80000378:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
8000037c:	50                   	push   %eax
8000037d:	6a 24                	push   $0x24
8000037f:	e8 7d ff ff ff       	call   80000301 <user_syscall>
80000384:	83 c4 08             	add    $0x8,%esp
80000387:	90                   	nop
80000388:	c9                   	leave  
80000389:	c3                   	ret    

8000038a <user_print_string>:
8000038a:	55                   	push   %ebp
8000038b:	89 e5                	mov    %esp,%ebp
8000038d:	ff 75 08             	pushl  0x8(%ebp)
80000390:	6a 25                	push   $0x25
80000392:	e8 6a ff ff ff       	call   80000301 <user_syscall>
80000397:	83 c4 08             	add    $0x8,%esp
8000039a:	90                   	nop
8000039b:	c9                   	leave  
8000039c:	c3                   	ret    

8000039d <user_print_num>:
8000039d:	55                   	push   %ebp
8000039e:	89 e5                	mov    %esp,%ebp
800003a0:	83 ec 08             	sub    $0x8,%esp
800003a3:	8b 55 0c             	mov    0xc(%ebp),%edx
800003a6:	8b 45 10             	mov    0x10(%ebp),%eax
800003a9:	88 55 fc             	mov    %dl,-0x4(%ebp)
800003ac:	88 45 f8             	mov    %al,-0x8(%ebp)
800003af:	0f be 55 f8          	movsbl -0x8(%ebp),%edx
800003b3:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
800003b7:	ff 75 14             	pushl  0x14(%ebp)
800003ba:	52                   	push   %edx
800003bb:	50                   	push   %eax
800003bc:	ff 75 08             	pushl  0x8(%ebp)
800003bf:	6a 26                	push   $0x26
800003c1:	e8 3b ff ff ff       	call   80000301 <user_syscall>
800003c6:	83 c4 14             	add    $0x14,%esp
800003c9:	90                   	nop
800003ca:	c9                   	leave  
800003cb:	c3                   	ret    

800003cc <user_backtrace>:
800003cc:	55                   	push   %ebp
800003cd:	89 e5                	mov    %esp,%ebp
800003cf:	6a 27                	push   $0x27
800003d1:	e8 2b ff ff ff       	call   80000301 <user_syscall>
800003d6:	83 c4 04             	add    $0x4,%esp
800003d9:	90                   	nop
800003da:	c9                   	leave  
800003db:	c3                   	ret    

800003dc <read>:
800003dc:	55                   	push   %ebp
800003dd:	89 e5                	mov    %esp,%ebp
800003df:	ff 75 10             	pushl  0x10(%ebp)
800003e2:	ff 75 0c             	pushl  0xc(%ebp)
800003e5:	ff 75 08             	pushl  0x8(%ebp)
800003e8:	6a 18                	push   $0x18
800003ea:	e8 12 ff ff ff       	call   80000301 <user_syscall>
800003ef:	83 c4 10             	add    $0x10,%esp
800003f2:	c9                   	leave  
800003f3:	c3                   	ret    

800003f4 <open>:
800003f4:	55                   	push   %ebp
800003f5:	89 e5                	mov    %esp,%ebp
800003f7:	83 ec 04             	sub    $0x4,%esp
800003fa:	8b 45 0c             	mov    0xc(%ebp),%eax
800003fd:	88 45 fc             	mov    %al,-0x4(%ebp)
80000400:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
80000404:	50                   	push   %eax
80000405:	ff 75 08             	pushl  0x8(%ebp)
80000408:	6a 28                	push   $0x28
8000040a:	e8 f2 fe ff ff       	call   80000301 <user_syscall>
8000040f:	83 c4 0c             	add    $0xc,%esp
80000412:	c9                   	leave  
80000413:	c3                   	ret    

80000414 <close>:
80000414:	55                   	push   %ebp
80000415:	89 e5                	mov    %esp,%ebp
80000417:	ff 75 08             	pushl  0x8(%ebp)
8000041a:	6a 29                	push   $0x29
8000041c:	e8 e0 fe ff ff       	call   80000301 <user_syscall>
80000421:	83 c4 08             	add    $0x8,%esp
80000424:	c9                   	leave  
80000425:	c3                   	ret    

80000426 <write>:
80000426:	55                   	push   %ebp
80000427:	89 e5                	mov    %esp,%ebp
80000429:	ff 75 10             	pushl  0x10(%ebp)
8000042c:	ff 75 0c             	pushl  0xc(%ebp)
8000042f:	ff 75 08             	pushl  0x8(%ebp)
80000432:	6a 2a                	push   $0x2a
80000434:	e8 c8 fe ff ff       	call   80000301 <user_syscall>
80000439:	83 c4 10             	add    $0x10,%esp
8000043c:	c9                   	leave  
8000043d:	c3                   	ret    

8000043e <lseek>:
8000043e:	55                   	push   %ebp
8000043f:	89 e5                	mov    %esp,%ebp
80000441:	83 ec 04             	sub    $0x4,%esp
80000444:	8b 45 10             	mov    0x10(%ebp),%eax
80000447:	88 45 fc             	mov    %al,-0x4(%ebp)
8000044a:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
8000044e:	50                   	push   %eax
8000044f:	ff 75 0c             	pushl  0xc(%ebp)
80000452:	ff 75 08             	pushl  0x8(%ebp)
80000455:	6a 2b                	push   $0x2b
80000457:	e8 a5 fe ff ff       	call   80000301 <user_syscall>
8000045c:	83 c4 10             	add    $0x10,%esp
8000045f:	c9                   	leave  
80000460:	c3                   	ret    

80000461 <unlink>:
80000461:	55                   	push   %ebp
80000462:	89 e5                	mov    %esp,%ebp
80000464:	ff 75 08             	pushl  0x8(%ebp)
80000467:	6a 2c                	push   $0x2c
80000469:	e8 93 fe ff ff       	call   80000301 <user_syscall>
8000046e:	83 c4 08             	add    $0x8,%esp
80000471:	c9                   	leave  
80000472:	c3                   	ret    

80000473 <mkdir>:
80000473:	55                   	push   %ebp
80000474:	89 e5                	mov    %esp,%ebp
80000476:	ff 75 08             	pushl  0x8(%ebp)
80000479:	6a 2d                	push   $0x2d
8000047b:	e8 81 fe ff ff       	call   80000301 <user_syscall>
80000480:	83 c4 08             	add    $0x8,%esp
80000483:	c9                   	leave  
80000484:	c3                   	ret    

80000485 <rmdir>:
80000485:	55                   	push   %ebp
80000486:	89 e5                	mov    %esp,%ebp
80000488:	ff 75 08             	pushl  0x8(%ebp)
8000048b:	6a 2e                	push   $0x2e
8000048d:	e8 6f fe ff ff       	call   80000301 <user_syscall>
80000492:	83 c4 08             	add    $0x8,%esp
80000495:	c9                   	leave  
80000496:	c3                   	ret    

80000497 <rewinddir>:
80000497:	55                   	push   %ebp
80000498:	89 e5                	mov    %esp,%ebp
8000049a:	ff 75 08             	pushl  0x8(%ebp)
8000049d:	6a 2f                	push   $0x2f
8000049f:	e8 5d fe ff ff       	call   80000301 <user_syscall>
800004a4:	83 c4 08             	add    $0x8,%esp
800004a7:	90                   	nop
800004a8:	c9                   	leave  
800004a9:	c3                   	ret    

800004aa <getcwd>:
800004aa:	55                   	push   %ebp
800004ab:	89 e5                	mov    %esp,%ebp
800004ad:	ff 75 0c             	pushl  0xc(%ebp)
800004b0:	ff 75 08             	pushl  0x8(%ebp)
800004b3:	6a 30                	push   $0x30
800004b5:	e8 47 fe ff ff       	call   80000301 <user_syscall>
800004ba:	83 c4 0c             	add    $0xc,%esp
800004bd:	c9                   	leave  
800004be:	c3                   	ret    

800004bf <chdir>:
800004bf:	55                   	push   %ebp
800004c0:	89 e5                	mov    %esp,%ebp
800004c2:	ff 75 08             	pushl  0x8(%ebp)
800004c5:	6a 31                	push   $0x31
800004c7:	e8 35 fe ff ff       	call   80000301 <user_syscall>
800004cc:	83 c4 08             	add    $0x8,%esp
800004cf:	c9                   	leave  
800004d0:	c3                   	ret    

800004d1 <stat>:
800004d1:	55                   	push   %ebp
800004d2:	89 e5                	mov    %esp,%ebp
800004d4:	ff 75 0c             	pushl  0xc(%ebp)
800004d7:	ff 75 08             	pushl  0x8(%ebp)
800004da:	6a 32                	push   $0x32
800004dc:	e8 20 fe ff ff       	call   80000301 <user_syscall>
800004e1:	83 c4 0c             	add    $0xc,%esp
800004e4:	c9                   	leave  
800004e5:	c3                   	ret    

800004e6 <opendir>:
800004e6:	55                   	push   %ebp
800004e7:	89 e5                	mov    %esp,%ebp
800004e9:	ff 75 08             	pushl  0x8(%ebp)
800004ec:	6a 33                	push   $0x33
800004ee:	e8 0e fe ff ff       	call   80000301 <user_syscall>
800004f3:	83 c4 08             	add    $0x8,%esp
800004f6:	c9                   	leave  
800004f7:	c3                   	ret    

800004f8 <closedir>:
800004f8:	55                   	push   %ebp
800004f9:	89 e5                	mov    %esp,%ebp
800004fb:	ff 75 08             	pushl  0x8(%ebp)
800004fe:	6a 34                	push   $0x34
80000500:	e8 fc fd ff ff       	call   80000301 <user_syscall>
80000505:	83 c4 08             	add    $0x8,%esp
80000508:	c9                   	leave  
80000509:	c3                   	ret    

8000050a <readdir>:
8000050a:	55                   	push   %ebp
8000050b:	89 e5                	mov    %esp,%ebp
8000050d:	ff 75 08             	pushl  0x8(%ebp)
80000510:	6a 35                	push   $0x35
80000512:	e8 ea fd ff ff       	call   80000301 <user_syscall>
80000517:	83 c4 08             	add    $0x8,%esp
8000051a:	c9                   	leave  
8000051b:	c3                   	ret    

8000051c <ps>:
8000051c:	55                   	push   %ebp
8000051d:	89 e5                	mov    %esp,%ebp
8000051f:	6a 36                	push   $0x36
80000521:	e8 db fd ff ff       	call   80000301 <user_syscall>
80000526:	83 c4 04             	add    $0x4,%esp
80000529:	c9                   	leave  
8000052a:	c3                   	ret    

8000052b <malloc>:
8000052b:	55                   	push   %ebp
8000052c:	89 e5                	mov    %esp,%ebp
8000052e:	ff 75 08             	pushl  0x8(%ebp)
80000531:	6a 37                	push   $0x37
80000533:	e8 c9 fd ff ff       	call   80000301 <user_syscall>
80000538:	83 c4 08             	add    $0x8,%esp
8000053b:	c9                   	leave  
8000053c:	c3                   	ret    

8000053d <free>:
8000053d:	55                   	push   %ebp
8000053e:	89 e5                	mov    %esp,%ebp
80000540:	ff 75 0c             	pushl  0xc(%ebp)
80000543:	ff 75 08             	pushl  0x8(%ebp)
80000546:	6a 38                	push   $0x38
80000548:	e8 b4 fd ff ff       	call   80000301 <user_syscall>
8000054d:	83 c4 0c             	add    $0xc,%esp
80000550:	90                   	nop
80000551:	c9                   	leave  
80000552:	c3                   	ret    

80000553 <fork>:
80000553:	55                   	push   %ebp
80000554:	89 e5                	mov    %esp,%ebp
80000556:	6a 02                	push   $0x2
80000558:	e8 a4 fd ff ff       	call   80000301 <user_syscall>
8000055d:	83 c4 04             	add    $0x4,%esp
80000560:	c9                   	leave  
80000561:	c3                   	ret    

80000562 <mmap>:
80000562:	55                   	push   %ebp
80000563:	89 e5                	mov    %esp,%ebp
80000565:	ff 75 10             	pushl  0x10(%ebp)
80000568:	ff 75 0c             	pushl  0xc(%ebp)
8000056b:	ff 75 08             	pushl  0x8(%ebp)
8000056e:	6a 39                	push   $0x39
80000570:	e8 8c fd ff ff       	call   80000301 <user_syscall>
80000575:	83 c4 10             	add    $0x10,%esp
80000578:	c9                   	leave  
80000579:	c3                   	ret    

8000057a <exec>:
8000057a:	55                   	push   %ebp
8000057b:	89 e5                	mov    %esp,%ebp
8000057d:	ff 75 0c             	pushl  0xc(%ebp)
80000580:	ff 75 08             	pushl  0x8(%ebp)
80000583:	6a 04                	push   $0x4
80000585:	e8 77 fd ff ff       	call   80000301 <user_syscall>
8000058a:	83 c4 0c             	add    $0xc,%esp
8000058d:	c9                   	leave  
8000058e:	c3                   	ret    

8000058f <wait>:
8000058f:	55                   	push   %ebp
80000590:	89 e5                	mov    %esp,%ebp
80000592:	ff 75 08             	pushl  0x8(%ebp)
80000595:	6a 03                	push   $0x3
80000597:	e8 65 fd ff ff       	call   80000301 <user_syscall>
8000059c:	83 c4 08             	add    $0x8,%esp
8000059f:	c9                   	leave  
800005a0:	c3                   	ret    

800005a1 <exit>:
800005a1:	55                   	push   %ebp
800005a2:	89 e5                	mov    %esp,%ebp
800005a4:	ff 75 08             	pushl  0x8(%ebp)
800005a7:	6a 01                	push   $0x1
800005a9:	e8 53 fd ff ff       	call   80000301 <user_syscall>
800005ae:	83 c4 08             	add    $0x8,%esp
800005b1:	c9                   	leave  
800005b2:	c3                   	ret    

800005b3 <pipe>:
800005b3:	55                   	push   %ebp
800005b4:	89 e5                	mov    %esp,%ebp
800005b6:	ff 75 08             	pushl  0x8(%ebp)
800005b9:	6a 3a                	push   $0x3a
800005bb:	e8 41 fd ff ff       	call   80000301 <user_syscall>
800005c0:	83 c4 08             	add    $0x8,%esp
800005c3:	c9                   	leave  
800005c4:	c3                   	ret    

800005c5 <main>:
800005c5:	8d 4c 24 04          	lea    0x4(%esp),%ecx
800005c9:	83 e4 f0             	and    $0xfffffff0,%esp
800005cc:	ff 71 fc             	pushl  -0x4(%ecx)
800005cf:	55                   	push   %ebp
800005d0:	89 e5                	mov    %esp,%ebp
800005d2:	53                   	push   %ebx
800005d3:	51                   	push   %ecx
800005d4:	83 ec 10             	sub    $0x10,%esp
800005d7:	89 cb                	mov    %ecx,%ebx
800005d9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
800005e0:	eb 29                	jmp    8000060b <main+0x46>
800005e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
800005e5:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
800005ec:	8b 43 04             	mov    0x4(%ebx),%eax
800005ef:	01 d0                	add    %edx,%eax
800005f1:	8b 00                	mov    (%eax),%eax
800005f3:	83 ec 04             	sub    $0x4,%esp
800005f6:	50                   	push   %eax
800005f7:	ff 75 f4             	pushl  -0xc(%ebp)
800005fa:	68 70 07 00 80       	push   $0x80000770
800005ff:	e8 fc f9 ff ff       	call   80000000 <printf>
80000604:	83 c4 10             	add    $0x10,%esp
80000607:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
8000060b:	8b 45 f4             	mov    -0xc(%ebp),%eax
8000060e:	3b 03                	cmp    (%ebx),%eax
80000610:	7c d0                	jl     800005e2 <main+0x1d>
80000612:	83 ec 0c             	sub    $0xc,%esp
80000615:	68 80 07 00 80       	push   $0x80000780
8000061a:	e8 e1 f9 ff ff       	call   80000000 <printf>
8000061f:	83 c4 10             	add    $0x10,%esp
80000622:	eb fe                	jmp    80000622 <main+0x5d>

80000624 <_start>:
80000624:	53                   	push   %ebx
80000625:	51                   	push   %ecx
80000626:	e8 9a ff ff ff       	call   800005c5 <main>
