
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
  1001ed:	b8 e0 35 a1 c1       	mov    $0xc1a135e0,%eax
  1001f2:	3d 00 00 b0 01       	cmp    $0x1b00000,%eax
  1001f7:	77 16                	ja     10020f <init+0x20f>
  1001f9:	68 5c 9b 00 c1       	push   $0xc1009b5c
  1001fe:	68 c8 9b 00 c1       	push   $0xc1009bc8
  100203:	6a 4a                	push   $0x4a
  100205:	68 94 9b 00 c1       	push   $0xc1009b94
  10020a:	e8 fe 00 f0 c0       	call   c100030d <__PANIC>
  10020f:	e8 e0 1a f0 c0       	call   c1001cf4 <main>
  100214:	90                   	nop
  100215:	c9                   	leave  
  100216:	c3                   	ret    

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
c1000285:	68 d0 9b 00 c1       	push   $0xc1009bd0
c100028a:	e8 24 45 00 00       	call   c10047b3 <printk>
c100028f:	83 c4 10             	add    $0x10,%esp
c1000292:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1000296:	0f b7 c0             	movzwl %ax,%eax
c1000299:	83 ec 08             	sub    $0x8,%esp
c100029c:	50                   	push   %eax
c100029d:	68 d9 9b 00 c1       	push   $0xc1009bd9
c10002a2:	e8 0c 45 00 00       	call   c10047b3 <printk>
c10002a7:	83 c4 10             	add    $0x10,%esp
c10002aa:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c10002ae:	0f b7 c0             	movzwl %ax,%eax
c10002b1:	83 ec 08             	sub    $0x8,%esp
c10002b4:	50                   	push   %eax
c10002b5:	68 e2 9b 00 c1       	push   $0xc1009be2
c10002ba:	e8 f4 44 00 00       	call   c10047b3 <printk>
c10002bf:	83 c4 10             	add    $0x10,%esp
c10002c2:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
c10002c6:	0f b7 c0             	movzwl %ax,%eax
c10002c9:	83 ec 08             	sub    $0x8,%esp
c10002cc:	50                   	push   %eax
c10002cd:	68 eb 9b 00 c1       	push   $0xc1009beb
c10002d2:	e8 dc 44 00 00       	call   c10047b3 <printk>
c10002d7:	83 c4 10             	add    $0x10,%esp
c10002da:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
c10002de:	0f b7 c0             	movzwl %ax,%eax
c10002e1:	83 ec 08             	sub    $0x8,%esp
c10002e4:	50                   	push   %eax
c10002e5:	68 f4 9b 00 c1       	push   $0xc1009bf4
c10002ea:	e8 c4 44 00 00       	call   c10047b3 <printk>
c10002ef:	83 c4 10             	add    $0x10,%esp
c10002f2:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c10002f6:	0f b7 c0             	movzwl %ax,%eax
c10002f9:	83 ec 08             	sub    $0x8,%esp
c10002fc:	50                   	push   %eax
c10002fd:	68 fd 9b 00 c1       	push   $0xc1009bfd
c1000302:	e8 ac 44 00 00       	call   c10047b3 <printk>
c1000307:	83 c4 10             	add    $0x10,%esp
c100030a:	90                   	nop
c100030b:	c9                   	leave  
c100030c:	c3                   	ret    

c100030d <__PANIC>:
c100030d:	55                   	push   %ebp
c100030e:	89 e5                	mov    %esp,%ebp
c1000310:	83 ec 08             	sub    $0x8,%esp
c1000313:	e8 15 0a 00 00       	call   c1000d2d <intr_disable>
c1000318:	83 ec 04             	sub    $0x4,%esp
c100031b:	ff 75 0c             	pushl  0xc(%ebp)
c100031e:	ff 75 08             	pushl  0x8(%ebp)
c1000321:	68 06 9c 00 c1       	push   $0xc1009c06
c1000326:	e8 88 44 00 00       	call   c10047b3 <printk>
c100032b:	83 c4 10             	add    $0x10,%esp
c100032e:	83 ec 04             	sub    $0x4,%esp
c1000331:	ff 75 14             	pushl  0x14(%ebp)
c1000334:	ff 75 10             	pushl  0x10(%ebp)
c1000337:	68 24 9c 00 c1       	push   $0xc1009c24
c100033c:	e8 72 44 00 00       	call   c10047b3 <printk>
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
c100035e:	68 cb 9c 00 c1       	push   $0xc1009ccb
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
c10003ed:	68 ce 9c 00 c1       	push   $0xc1009cce
c10003f2:	e8 bc 43 00 00       	call   c10047b3 <printk>
c10003f7:	83 c4 10             	add    $0x10,%esp
c10003fa:	83 ec 0c             	sub    $0xc,%esp
c10003fd:	68 d4 9c 00 c1       	push   $0xc1009cd4
c1000402:	e8 ac 43 00 00       	call   c10047b3 <printk>
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
c100041c:	68 ce 9c 00 c1       	push   $0xc1009cce
c1000421:	e8 8d 43 00 00       	call   c10047b3 <printk>
c1000426:	83 c4 10             	add    $0x10,%esp
c1000429:	83 ec 0c             	sub    $0xc,%esp
c100042c:	68 04 9d 00 c1       	push   $0xc1009d04
c1000431:	e8 7d 43 00 00       	call   c10047b3 <printk>
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
c100046d:	68 23 9d 00 c1       	push   $0xc1009d23
c1000472:	e8 3c 43 00 00       	call   c10047b3 <printk>
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
c10004a0:	68 ce 9c 00 c1       	push   $0xc1009cce
c10004a5:	e8 09 43 00 00       	call   c10047b3 <printk>
c10004aa:	83 c4 10             	add    $0x10,%esp
c10004ad:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10004b4:	83 ec 0c             	sub    $0xc,%esp
c10004b7:	68 2e 9d 00 c1       	push   $0xc1009d2e
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
c1000507:	68 4c 9d 00 c1       	push   $0xc1009d4c
c100050c:	e8 a2 42 00 00       	call   c10047b3 <printk>
c1000511:	83 c4 10             	add    $0x10,%esp
c1000514:	eb 32                	jmp    c1000548 <instr_game+0xbe>
c1000516:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000519:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c100051c:	7d 15                	jge    c1000533 <instr_game+0xa9>
c100051e:	83 ec 0c             	sub    $0xc,%esp
c1000521:	68 7b 9d 00 c1       	push   $0xc1009d7b
c1000526:	e8 88 42 00 00       	call   c10047b3 <printk>
c100052b:	83 c4 10             	add    $0x10,%esp
c100052e:	e9 7a ff ff ff       	jmp    c10004ad <instr_game+0x23>
c1000533:	83 ec 0c             	sub    $0xc,%esp
c1000536:	68 93 9d 00 c1       	push   $0xc1009d93
c100053b:	e8 73 42 00 00       	call   c10047b3 <printk>
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
c1000552:	e8 2f 46 00 00       	call   c1004b86 <cons_getc>
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
c1000577:	68 aa 9d 00 c1       	push   $0xc1009daa
c100057c:	e8 32 42 00 00       	call   c10047b3 <printk>
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
c10005b8:	e8 8b 45 00 00       	call   c1004b48 <cons_putc>
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
c10005e6:	e8 5d 45 00 00       	call   c1004b48 <cons_putc>
c10005eb:	83 c4 10             	add    $0x10,%esp
c10005ee:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
c10005f2:	eb 2c                	jmp    c1000620 <readline+0xbb>
c10005f4:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
c10005f8:	74 06                	je     c1000600 <readline+0x9b>
c10005fa:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
c10005fe:	75 8b                	jne    c100058b <readline+0x26>
c1000600:	83 ec 0c             	sub    $0xc,%esp
c1000603:	ff 75 f0             	pushl  -0x10(%ebp)
c1000606:	e8 3d 45 00 00       	call   c1004b48 <cons_putc>
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
c1000995:	68 e2 9d 00 c1       	push   $0xc1009de2
c100099a:	e8 14 3e 00 00       	call   c10047b3 <printk>
c100099f:	83 c4 10             	add    $0x10,%esp
c10009a2:	8b 45 08             	mov    0x8(%ebp),%eax
c10009a5:	8b 40 04             	mov    0x4(%eax),%eax
c10009a8:	83 ec 08             	sub    $0x8,%esp
c10009ab:	50                   	push   %eax
c10009ac:	68 f2 9d 00 c1       	push   $0xc1009df2
c10009b1:	e8 fd 3d 00 00       	call   c10047b3 <printk>
c10009b6:	83 c4 10             	add    $0x10,%esp
c10009b9:	8b 45 08             	mov    0x8(%ebp),%eax
c10009bc:	8b 40 08             	mov    0x8(%eax),%eax
c10009bf:	83 ec 08             	sub    $0x8,%esp
c10009c2:	50                   	push   %eax
c10009c3:	68 02 9e 00 c1       	push   $0xc1009e02
c10009c8:	e8 e6 3d 00 00       	call   c10047b3 <printk>
c10009cd:	83 c4 10             	add    $0x10,%esp
c10009d0:	8b 45 08             	mov    0x8(%ebp),%eax
c10009d3:	8b 40 0c             	mov    0xc(%eax),%eax
c10009d6:	83 ec 08             	sub    $0x8,%esp
c10009d9:	50                   	push   %eax
c10009da:	68 12 9e 00 c1       	push   $0xc1009e12
c10009df:	e8 cf 3d 00 00       	call   c10047b3 <printk>
c10009e4:	83 c4 10             	add    $0x10,%esp
c10009e7:	8b 45 08             	mov    0x8(%ebp),%eax
c10009ea:	8b 40 10             	mov    0x10(%eax),%eax
c10009ed:	83 ec 08             	sub    $0x8,%esp
c10009f0:	50                   	push   %eax
c10009f1:	68 22 9e 00 c1       	push   $0xc1009e22
c10009f6:	e8 b8 3d 00 00       	call   c10047b3 <printk>
c10009fb:	83 c4 10             	add    $0x10,%esp
c10009fe:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a01:	8b 40 14             	mov    0x14(%eax),%eax
c1000a04:	83 ec 08             	sub    $0x8,%esp
c1000a07:	50                   	push   %eax
c1000a08:	68 32 9e 00 c1       	push   $0xc1009e32
c1000a0d:	e8 a1 3d 00 00       	call   c10047b3 <printk>
c1000a12:	83 c4 10             	add    $0x10,%esp
c1000a15:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a18:	8b 40 18             	mov    0x18(%eax),%eax
c1000a1b:	83 ec 08             	sub    $0x8,%esp
c1000a1e:	50                   	push   %eax
c1000a1f:	68 42 9e 00 c1       	push   $0xc1009e42
c1000a24:	e8 8a 3d 00 00       	call   c10047b3 <printk>
c1000a29:	83 c4 10             	add    $0x10,%esp
c1000a2c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a2f:	8b 40 1c             	mov    0x1c(%eax),%eax
c1000a32:	83 ec 08             	sub    $0x8,%esp
c1000a35:	50                   	push   %eax
c1000a36:	68 52 9e 00 c1       	push   $0xc1009e52
c1000a3b:	e8 73 3d 00 00       	call   c10047b3 <printk>
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
c1000a69:	68 62 9e 00 c1       	push   $0xc1009e62
c1000a6e:	e8 40 3d 00 00       	call   c10047b3 <printk>
c1000a73:	83 c4 10             	add    $0x10,%esp
c1000a76:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a79:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1000a7d:	0f b7 c0             	movzwl %ax,%eax
c1000a80:	83 ec 08             	sub    $0x8,%esp
c1000a83:	50                   	push   %eax
c1000a84:	68 76 9e 00 c1       	push   $0xc1009e76
c1000a89:	e8 25 3d 00 00       	call   c10047b3 <printk>
c1000a8e:	83 c4 10             	add    $0x10,%esp
c1000a91:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a94:	0f b7 40 24          	movzwl 0x24(%eax),%eax
c1000a98:	0f b7 c0             	movzwl %ax,%eax
c1000a9b:	83 ec 08             	sub    $0x8,%esp
c1000a9e:	50                   	push   %eax
c1000a9f:	68 8a 9e 00 c1       	push   $0xc1009e8a
c1000aa4:	e8 0a 3d 00 00       	call   c10047b3 <printk>
c1000aa9:	83 c4 10             	add    $0x10,%esp
c1000aac:	8b 45 08             	mov    0x8(%ebp),%eax
c1000aaf:	0f b7 40 20          	movzwl 0x20(%eax),%eax
c1000ab3:	0f b7 c0             	movzwl %ax,%eax
c1000ab6:	83 ec 08             	sub    $0x8,%esp
c1000ab9:	50                   	push   %eax
c1000aba:	68 9e 9e 00 c1       	push   $0xc1009e9e
c1000abf:	e8 ef 3c 00 00       	call   c10047b3 <printk>
c1000ac4:	83 c4 10             	add    $0x10,%esp
c1000ac7:	8b 45 08             	mov    0x8(%ebp),%eax
c1000aca:	8b 40 34             	mov    0x34(%eax),%eax
c1000acd:	83 ec 08             	sub    $0x8,%esp
c1000ad0:	50                   	push   %eax
c1000ad1:	68 b2 9e 00 c1       	push   $0xc1009eb2
c1000ad6:	e8 d8 3c 00 00       	call   c10047b3 <printk>
c1000adb:	83 c4 10             	add    $0x10,%esp
c1000ade:	8b 45 08             	mov    0x8(%ebp),%eax
c1000ae1:	8b 40 38             	mov    0x38(%eax),%eax
c1000ae4:	83 ec 08             	sub    $0x8,%esp
c1000ae7:	50                   	push   %eax
c1000ae8:	68 c2 9e 00 c1       	push   $0xc1009ec2
c1000aed:	e8 c1 3c 00 00       	call   c10047b3 <printk>
c1000af2:	83 c4 10             	add    $0x10,%esp
c1000af5:	8b 45 08             	mov    0x8(%ebp),%eax
c1000af8:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
c1000afc:	0f b7 c0             	movzwl %ax,%eax
c1000aff:	83 ec 08             	sub    $0x8,%esp
c1000b02:	50                   	push   %eax
c1000b03:	68 d2 9e 00 c1       	push   $0xc1009ed2
c1000b08:	e8 a6 3c 00 00       	call   c10047b3 <printk>
c1000b0d:	83 c4 10             	add    $0x10,%esp
c1000b10:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b13:	8b 40 40             	mov    0x40(%eax),%eax
c1000b16:	83 ec 08             	sub    $0x8,%esp
c1000b19:	50                   	push   %eax
c1000b1a:	68 e6 9e 00 c1       	push   $0xc1009ee6
c1000b1f:	e8 8f 3c 00 00       	call   c10047b3 <printk>
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
c1000b62:	68 f6 9e 00 c1       	push   $0xc1009ef6
c1000b67:	e8 47 3c 00 00       	call   c10047b3 <printk>
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
c1000b8e:	68 fa 9e 00 c1       	push   $0xc1009efa
c1000b93:	e8 1b 3c 00 00       	call   c10047b3 <printk>
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
c1000bd6:	8b 04 85 38 9f 00 c1 	mov    -0x3eff60c8(,%eax,4),%eax
c1000bdd:	ff e0                	jmp    *%eax
c1000bdf:	83 f8 60             	cmp    $0x60,%eax
c1000be2:	0f 85 cb 00 00 00    	jne    c1000cb3 <trap_dispatch+0x115>
c1000be8:	83 ec 0c             	sub    $0xc,%esp
c1000beb:	68 03 9f 00 c1       	push   $0xc1009f03
c1000bf0:	e8 be 3b 00 00       	call   c10047b3 <printk>
c1000bf5:	83 c4 10             	add    $0x10,%esp
c1000bf8:	e9 cc 00 00 00       	jmp    c1000cc9 <trap_dispatch+0x12b>
c1000bfd:	83 ec 0c             	sub    $0xc,%esp
c1000c00:	68 13 9f 00 c1       	push   $0xc1009f13
c1000c05:	e8 a9 3b 00 00       	call   c10047b3 <printk>
c1000c0a:	83 c4 10             	add    $0x10,%esp
c1000c0d:	e9 b7 00 00 00       	jmp    c1000cc9 <trap_dispatch+0x12b>
c1000c12:	83 ec 0c             	sub    $0xc,%esp
c1000c15:	ff 75 08             	pushl  0x8(%ebp)
c1000c18:	e8 8c 0d 00 00       	call   c10019a9 <syscall_trap>
c1000c1d:	83 c4 10             	add    $0x10,%esp
c1000c20:	e9 a4 00 00 00       	jmp    c1000cc9 <trap_dispatch+0x12b>
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
c1000c78:	e8 01 2a 00 00       	call   c100367e <schedule>
c1000c7d:	eb 49                	jmp    c1000cc8 <trap_dispatch+0x12a>
c1000c7f:	e8 02 3f 00 00       	call   c1004b86 <cons_getc>
c1000c84:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000c87:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1000c8b:	83 ec 0c             	sub    $0xc,%esp
c1000c8e:	50                   	push   %eax
c1000c8f:	e8 b4 3e 00 00       	call   c1004b48 <cons_putc>
c1000c94:	83 c4 10             	add    $0x10,%esp
c1000c97:	eb 30                	jmp    c1000cc9 <trap_dispatch+0x12b>
c1000c99:	e8 e8 3e 00 00       	call   c1004b86 <cons_getc>
c1000c9e:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000ca1:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1000ca5:	83 ec 0c             	sub    $0xc,%esp
c1000ca8:	50                   	push   %eax
c1000ca9:	e8 9a 3e 00 00       	call   c1004b48 <cons_putc>
c1000cae:	83 c4 10             	add    $0x10,%esp
c1000cb1:	eb 16                	jmp    c1000cc9 <trap_dispatch+0x12b>
c1000cb3:	83 ec 0c             	sub    $0xc,%esp
c1000cb6:	68 1a 9f 00 c1       	push   $0xc1009f1a
c1000cbb:	e8 f3 3a 00 00       	call   c10047b3 <printk>
c1000cc0:	83 c4 10             	add    $0x10,%esp
c1000cc3:	eb 04                	jmp    c1000cc9 <trap_dispatch+0x12b>
c1000cc5:	90                   	nop
c1000cc6:	eb 01                	jmp    c1000cc9 <trap_dispatch+0x12b>
c1000cc8:	90                   	nop
c1000cc9:	90                   	nop
c1000cca:	c9                   	leave  
c1000ccb:	c3                   	ret    

c1000ccc <trap>:
c1000ccc:	55                   	push   %ebp
c1000ccd:	89 e5                	mov    %esp,%ebp
c1000ccf:	83 ec 08             	sub    $0x8,%esp
c1000cd2:	83 ec 0c             	sub    $0xc,%esp
c1000cd5:	ff 75 08             	pushl  0x8(%ebp)
c1000cd8:	e8 c1 fe ff ff       	call   c1000b9e <trap_dispatch>
c1000cdd:	83 c4 10             	add    $0x10,%esp
c1000ce0:	90                   	nop
c1000ce1:	c9                   	leave  
c1000ce2:	c3                   	ret    

c1000ce3 <disable_interupt>:
c1000ce3:	55                   	push   %ebp
c1000ce4:	89 e5                	mov    %esp,%ebp
c1000ce6:	fa                   	cli    
c1000ce7:	90                   	nop
c1000ce8:	5d                   	pop    %ebp
c1000ce9:	c3                   	ret    

c1000cea <enable_interupt>:
c1000cea:	55                   	push   %ebp
c1000ceb:	89 e5                	mov    %esp,%ebp
c1000ced:	fb                   	sti    
c1000cee:	90                   	nop
c1000cef:	5d                   	pop    %ebp
c1000cf0:	c3                   	ret    

c1000cf1 <get_now_intr_status>:
c1000cf1:	55                   	push   %ebp
c1000cf2:	89 e5                	mov    %esp,%ebp
c1000cf4:	83 ec 10             	sub    $0x10,%esp
c1000cf7:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1000cfe:	9c                   	pushf  
c1000cff:	58                   	pop    %eax
c1000d00:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1000d03:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000d06:	c1 e8 09             	shr    $0x9,%eax
c1000d09:	83 e0 01             	and    $0x1,%eax
c1000d0c:	c9                   	leave  
c1000d0d:	c3                   	ret    

c1000d0e <intr_enable>:
c1000d0e:	55                   	push   %ebp
c1000d0f:	89 e5                	mov    %esp,%ebp
c1000d11:	e8 db ff ff ff       	call   c1000cf1 <get_now_intr_status>
c1000d16:	85 c0                	test   %eax,%eax
c1000d18:	75 0c                	jne    c1000d26 <intr_enable+0x18>
c1000d1a:	e8 cb ff ff ff       	call   c1000cea <enable_interupt>
c1000d1f:	b8 00 00 00 00       	mov    $0x0,%eax
c1000d24:	eb 05                	jmp    c1000d2b <intr_enable+0x1d>
c1000d26:	b8 01 00 00 00       	mov    $0x1,%eax
c1000d2b:	5d                   	pop    %ebp
c1000d2c:	c3                   	ret    

c1000d2d <intr_disable>:
c1000d2d:	55                   	push   %ebp
c1000d2e:	89 e5                	mov    %esp,%ebp
c1000d30:	e8 bc ff ff ff       	call   c1000cf1 <get_now_intr_status>
c1000d35:	83 f8 01             	cmp    $0x1,%eax
c1000d38:	75 0c                	jne    c1000d46 <intr_disable+0x19>
c1000d3a:	e8 a4 ff ff ff       	call   c1000ce3 <disable_interupt>
c1000d3f:	b8 01 00 00 00       	mov    $0x1,%eax
c1000d44:	eb 05                	jmp    c1000d4b <intr_disable+0x1e>
c1000d46:	b8 00 00 00 00       	mov    $0x0,%eax
c1000d4b:	5d                   	pop    %ebp
c1000d4c:	c3                   	ret    

c1000d4d <intr_save>:
c1000d4d:	55                   	push   %ebp
c1000d4e:	89 e5                	mov    %esp,%ebp
c1000d50:	83 ec 10             	sub    $0x10,%esp
c1000d53:	e8 d5 ff ff ff       	call   c1000d2d <intr_disable>
c1000d58:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1000d5b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000d5e:	c9                   	leave  
c1000d5f:	c3                   	ret    

c1000d60 <intr_restore>:
c1000d60:	55                   	push   %ebp
c1000d61:	89 e5                	mov    %esp,%ebp
c1000d63:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1000d67:	75 05                	jne    c1000d6e <intr_restore+0xe>
c1000d69:	e8 7c ff ff ff       	call   c1000cea <enable_interupt>
c1000d6e:	90                   	nop
c1000d6f:	5d                   	pop    %ebp
c1000d70:	c3                   	ret    

c1000d71 <__alltraps>:
c1000d71:	1e                   	push   %ds
c1000d72:	06                   	push   %es
c1000d73:	0f a0                	push   %fs
c1000d75:	0f a8                	push   %gs
c1000d77:	60                   	pusha  
c1000d78:	b8 10 00 00 00       	mov    $0x10,%eax
c1000d7d:	8e d8                	mov    %eax,%ds
c1000d7f:	8e c0                	mov    %eax,%es
c1000d81:	54                   	push   %esp
c1000d82:	e8 45 ff ff ff       	call   c1000ccc <trap>
c1000d87:	5c                   	pop    %esp

c1000d88 <__trapret>:
c1000d88:	61                   	popa   
c1000d89:	0f a9                	pop    %gs
c1000d8b:	0f a1                	pop    %fs
c1000d8d:	07                   	pop    %es
c1000d8e:	1f                   	pop    %ds
c1000d8f:	83 c4 08             	add    $0x8,%esp
c1000d92:	cf                   	iret   

c1000d93 <forkrets>:
c1000d93:	8b 64 24 04          	mov    0x4(%esp),%esp
c1000d97:	eb ef                	jmp    c1000d88 <__trapret>

c1000d99 <vector0>:
c1000d99:	6a 00                	push   $0x0
c1000d9b:	6a 00                	push   $0x0
c1000d9d:	e9 cf ff ff ff       	jmp    c1000d71 <__alltraps>

c1000da2 <vector1>:
c1000da2:	6a 00                	push   $0x0
c1000da4:	6a 01                	push   $0x1
c1000da6:	e9 c6 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000dab <vector2>:
c1000dab:	6a 00                	push   $0x0
c1000dad:	6a 02                	push   $0x2
c1000daf:	e9 bd ff ff ff       	jmp    c1000d71 <__alltraps>

c1000db4 <vector3>:
c1000db4:	6a 00                	push   $0x0
c1000db6:	6a 03                	push   $0x3
c1000db8:	e9 b4 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000dbd <vector4>:
c1000dbd:	6a 00                	push   $0x0
c1000dbf:	6a 04                	push   $0x4
c1000dc1:	e9 ab ff ff ff       	jmp    c1000d71 <__alltraps>

c1000dc6 <vector5>:
c1000dc6:	6a 00                	push   $0x0
c1000dc8:	6a 05                	push   $0x5
c1000dca:	e9 a2 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000dcf <vector6>:
c1000dcf:	6a 00                	push   $0x0
c1000dd1:	6a 06                	push   $0x6
c1000dd3:	e9 99 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000dd8 <vector7>:
c1000dd8:	6a 00                	push   $0x0
c1000dda:	6a 07                	push   $0x7
c1000ddc:	e9 90 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000de1 <vector8>:
c1000de1:	6a 08                	push   $0x8
c1000de3:	e9 89 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000de8 <vector9>:
c1000de8:	6a 09                	push   $0x9
c1000dea:	e9 82 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000def <vector10>:
c1000def:	6a 0a                	push   $0xa
c1000df1:	e9 7b ff ff ff       	jmp    c1000d71 <__alltraps>

c1000df6 <vector11>:
c1000df6:	6a 0b                	push   $0xb
c1000df8:	e9 74 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000dfd <vector12>:
c1000dfd:	6a 0c                	push   $0xc
c1000dff:	e9 6d ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e04 <vector13>:
c1000e04:	6a 0d                	push   $0xd
c1000e06:	e9 66 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e0b <vector14>:
c1000e0b:	6a 0e                	push   $0xe
c1000e0d:	e9 5f ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e12 <vector15>:
c1000e12:	6a 00                	push   $0x0
c1000e14:	6a 0f                	push   $0xf
c1000e16:	e9 56 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e1b <vector16>:
c1000e1b:	6a 00                	push   $0x0
c1000e1d:	6a 10                	push   $0x10
c1000e1f:	e9 4d ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e24 <vector17>:
c1000e24:	6a 11                	push   $0x11
c1000e26:	e9 46 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e2b <vector18>:
c1000e2b:	6a 00                	push   $0x0
c1000e2d:	6a 12                	push   $0x12
c1000e2f:	e9 3d ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e34 <vector19>:
c1000e34:	6a 00                	push   $0x0
c1000e36:	6a 13                	push   $0x13
c1000e38:	e9 34 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e3d <vector20>:
c1000e3d:	6a 00                	push   $0x0
c1000e3f:	6a 14                	push   $0x14
c1000e41:	e9 2b ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e46 <vector21>:
c1000e46:	6a 00                	push   $0x0
c1000e48:	6a 15                	push   $0x15
c1000e4a:	e9 22 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e4f <vector22>:
c1000e4f:	6a 00                	push   $0x0
c1000e51:	6a 16                	push   $0x16
c1000e53:	e9 19 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e58 <vector23>:
c1000e58:	6a 00                	push   $0x0
c1000e5a:	6a 17                	push   $0x17
c1000e5c:	e9 10 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e61 <vector24>:
c1000e61:	6a 00                	push   $0x0
c1000e63:	6a 18                	push   $0x18
c1000e65:	e9 07 ff ff ff       	jmp    c1000d71 <__alltraps>

c1000e6a <vector25>:
c1000e6a:	6a 00                	push   $0x0
c1000e6c:	6a 19                	push   $0x19
c1000e6e:	e9 fe fe ff ff       	jmp    c1000d71 <__alltraps>

c1000e73 <vector26>:
c1000e73:	6a 00                	push   $0x0
c1000e75:	6a 1a                	push   $0x1a
c1000e77:	e9 f5 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000e7c <vector27>:
c1000e7c:	6a 00                	push   $0x0
c1000e7e:	6a 1b                	push   $0x1b
c1000e80:	e9 ec fe ff ff       	jmp    c1000d71 <__alltraps>

c1000e85 <vector28>:
c1000e85:	6a 00                	push   $0x0
c1000e87:	6a 1c                	push   $0x1c
c1000e89:	e9 e3 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000e8e <vector29>:
c1000e8e:	6a 00                	push   $0x0
c1000e90:	6a 1d                	push   $0x1d
c1000e92:	e9 da fe ff ff       	jmp    c1000d71 <__alltraps>

c1000e97 <vector30>:
c1000e97:	6a 00                	push   $0x0
c1000e99:	6a 1e                	push   $0x1e
c1000e9b:	e9 d1 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000ea0 <vector31>:
c1000ea0:	6a 00                	push   $0x0
c1000ea2:	6a 1f                	push   $0x1f
c1000ea4:	e9 c8 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000ea9 <vector32>:
c1000ea9:	6a 00                	push   $0x0
c1000eab:	6a 20                	push   $0x20
c1000ead:	e9 bf fe ff ff       	jmp    c1000d71 <__alltraps>

c1000eb2 <vector33>:
c1000eb2:	6a 00                	push   $0x0
c1000eb4:	6a 21                	push   $0x21
c1000eb6:	e9 b6 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000ebb <vector34>:
c1000ebb:	6a 00                	push   $0x0
c1000ebd:	6a 22                	push   $0x22
c1000ebf:	e9 ad fe ff ff       	jmp    c1000d71 <__alltraps>

c1000ec4 <vector35>:
c1000ec4:	6a 00                	push   $0x0
c1000ec6:	6a 23                	push   $0x23
c1000ec8:	e9 a4 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000ecd <vector36>:
c1000ecd:	6a 00                	push   $0x0
c1000ecf:	6a 24                	push   $0x24
c1000ed1:	e9 9b fe ff ff       	jmp    c1000d71 <__alltraps>

c1000ed6 <vector37>:
c1000ed6:	6a 00                	push   $0x0
c1000ed8:	6a 25                	push   $0x25
c1000eda:	e9 92 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000edf <vector38>:
c1000edf:	6a 00                	push   $0x0
c1000ee1:	6a 26                	push   $0x26
c1000ee3:	e9 89 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000ee8 <vector39>:
c1000ee8:	6a 00                	push   $0x0
c1000eea:	6a 27                	push   $0x27
c1000eec:	e9 80 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000ef1 <vector40>:
c1000ef1:	6a 00                	push   $0x0
c1000ef3:	6a 28                	push   $0x28
c1000ef5:	e9 77 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000efa <vector41>:
c1000efa:	6a 00                	push   $0x0
c1000efc:	6a 29                	push   $0x29
c1000efe:	e9 6e fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f03 <vector42>:
c1000f03:	6a 00                	push   $0x0
c1000f05:	6a 2a                	push   $0x2a
c1000f07:	e9 65 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f0c <vector43>:
c1000f0c:	6a 00                	push   $0x0
c1000f0e:	6a 2b                	push   $0x2b
c1000f10:	e9 5c fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f15 <vector44>:
c1000f15:	6a 00                	push   $0x0
c1000f17:	6a 2c                	push   $0x2c
c1000f19:	e9 53 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f1e <vector45>:
c1000f1e:	6a 00                	push   $0x0
c1000f20:	6a 2d                	push   $0x2d
c1000f22:	e9 4a fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f27 <vector46>:
c1000f27:	6a 00                	push   $0x0
c1000f29:	6a 2e                	push   $0x2e
c1000f2b:	e9 41 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f30 <vector47>:
c1000f30:	6a 00                	push   $0x0
c1000f32:	6a 2f                	push   $0x2f
c1000f34:	e9 38 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f39 <vector48>:
c1000f39:	6a 00                	push   $0x0
c1000f3b:	6a 30                	push   $0x30
c1000f3d:	e9 2f fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f42 <vector49>:
c1000f42:	6a 00                	push   $0x0
c1000f44:	6a 31                	push   $0x31
c1000f46:	e9 26 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f4b <vector50>:
c1000f4b:	6a 00                	push   $0x0
c1000f4d:	6a 32                	push   $0x32
c1000f4f:	e9 1d fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f54 <vector51>:
c1000f54:	6a 00                	push   $0x0
c1000f56:	6a 33                	push   $0x33
c1000f58:	e9 14 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f5d <vector52>:
c1000f5d:	6a 00                	push   $0x0
c1000f5f:	6a 34                	push   $0x34
c1000f61:	e9 0b fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f66 <vector53>:
c1000f66:	6a 00                	push   $0x0
c1000f68:	6a 35                	push   $0x35
c1000f6a:	e9 02 fe ff ff       	jmp    c1000d71 <__alltraps>

c1000f6f <vector54>:
c1000f6f:	6a 00                	push   $0x0
c1000f71:	6a 36                	push   $0x36
c1000f73:	e9 f9 fd ff ff       	jmp    c1000d71 <__alltraps>

c1000f78 <vector55>:
c1000f78:	6a 00                	push   $0x0
c1000f7a:	6a 37                	push   $0x37
c1000f7c:	e9 f0 fd ff ff       	jmp    c1000d71 <__alltraps>

c1000f81 <vector56>:
c1000f81:	6a 00                	push   $0x0
c1000f83:	6a 38                	push   $0x38
c1000f85:	e9 e7 fd ff ff       	jmp    c1000d71 <__alltraps>

c1000f8a <vector57>:
c1000f8a:	6a 00                	push   $0x0
c1000f8c:	6a 39                	push   $0x39
c1000f8e:	e9 de fd ff ff       	jmp    c1000d71 <__alltraps>

c1000f93 <vector58>:
c1000f93:	6a 00                	push   $0x0
c1000f95:	6a 3a                	push   $0x3a
c1000f97:	e9 d5 fd ff ff       	jmp    c1000d71 <__alltraps>

c1000f9c <vector59>:
c1000f9c:	6a 00                	push   $0x0
c1000f9e:	6a 3b                	push   $0x3b
c1000fa0:	e9 cc fd ff ff       	jmp    c1000d71 <__alltraps>

c1000fa5 <vector60>:
c1000fa5:	6a 00                	push   $0x0
c1000fa7:	6a 3c                	push   $0x3c
c1000fa9:	e9 c3 fd ff ff       	jmp    c1000d71 <__alltraps>

c1000fae <vector61>:
c1000fae:	6a 00                	push   $0x0
c1000fb0:	6a 3d                	push   $0x3d
c1000fb2:	e9 ba fd ff ff       	jmp    c1000d71 <__alltraps>

c1000fb7 <vector62>:
c1000fb7:	6a 00                	push   $0x0
c1000fb9:	6a 3e                	push   $0x3e
c1000fbb:	e9 b1 fd ff ff       	jmp    c1000d71 <__alltraps>

c1000fc0 <vector63>:
c1000fc0:	6a 00                	push   $0x0
c1000fc2:	6a 3f                	push   $0x3f
c1000fc4:	e9 a8 fd ff ff       	jmp    c1000d71 <__alltraps>

c1000fc9 <vector64>:
c1000fc9:	6a 00                	push   $0x0
c1000fcb:	6a 40                	push   $0x40
c1000fcd:	e9 9f fd ff ff       	jmp    c1000d71 <__alltraps>

c1000fd2 <vector65>:
c1000fd2:	6a 00                	push   $0x0
c1000fd4:	6a 41                	push   $0x41
c1000fd6:	e9 96 fd ff ff       	jmp    c1000d71 <__alltraps>

c1000fdb <vector66>:
c1000fdb:	6a 00                	push   $0x0
c1000fdd:	6a 42                	push   $0x42
c1000fdf:	e9 8d fd ff ff       	jmp    c1000d71 <__alltraps>

c1000fe4 <vector67>:
c1000fe4:	6a 00                	push   $0x0
c1000fe6:	6a 43                	push   $0x43
c1000fe8:	e9 84 fd ff ff       	jmp    c1000d71 <__alltraps>

c1000fed <vector68>:
c1000fed:	6a 00                	push   $0x0
c1000fef:	6a 44                	push   $0x44
c1000ff1:	e9 7b fd ff ff       	jmp    c1000d71 <__alltraps>

c1000ff6 <vector69>:
c1000ff6:	6a 00                	push   $0x0
c1000ff8:	6a 45                	push   $0x45
c1000ffa:	e9 72 fd ff ff       	jmp    c1000d71 <__alltraps>

c1000fff <vector70>:
c1000fff:	6a 00                	push   $0x0
c1001001:	6a 46                	push   $0x46
c1001003:	e9 69 fd ff ff       	jmp    c1000d71 <__alltraps>

c1001008 <vector71>:
c1001008:	6a 00                	push   $0x0
c100100a:	6a 47                	push   $0x47
c100100c:	e9 60 fd ff ff       	jmp    c1000d71 <__alltraps>

c1001011 <vector72>:
c1001011:	6a 00                	push   $0x0
c1001013:	6a 48                	push   $0x48
c1001015:	e9 57 fd ff ff       	jmp    c1000d71 <__alltraps>

c100101a <vector73>:
c100101a:	6a 00                	push   $0x0
c100101c:	6a 49                	push   $0x49
c100101e:	e9 4e fd ff ff       	jmp    c1000d71 <__alltraps>

c1001023 <vector74>:
c1001023:	6a 00                	push   $0x0
c1001025:	6a 4a                	push   $0x4a
c1001027:	e9 45 fd ff ff       	jmp    c1000d71 <__alltraps>

c100102c <vector75>:
c100102c:	6a 00                	push   $0x0
c100102e:	6a 4b                	push   $0x4b
c1001030:	e9 3c fd ff ff       	jmp    c1000d71 <__alltraps>

c1001035 <vector76>:
c1001035:	6a 00                	push   $0x0
c1001037:	6a 4c                	push   $0x4c
c1001039:	e9 33 fd ff ff       	jmp    c1000d71 <__alltraps>

c100103e <vector77>:
c100103e:	6a 00                	push   $0x0
c1001040:	6a 4d                	push   $0x4d
c1001042:	e9 2a fd ff ff       	jmp    c1000d71 <__alltraps>

c1001047 <vector78>:
c1001047:	6a 00                	push   $0x0
c1001049:	6a 4e                	push   $0x4e
c100104b:	e9 21 fd ff ff       	jmp    c1000d71 <__alltraps>

c1001050 <vector79>:
c1001050:	6a 00                	push   $0x0
c1001052:	6a 4f                	push   $0x4f
c1001054:	e9 18 fd ff ff       	jmp    c1000d71 <__alltraps>

c1001059 <vector80>:
c1001059:	6a 00                	push   $0x0
c100105b:	6a 50                	push   $0x50
c100105d:	e9 0f fd ff ff       	jmp    c1000d71 <__alltraps>

c1001062 <vector81>:
c1001062:	6a 00                	push   $0x0
c1001064:	6a 51                	push   $0x51
c1001066:	e9 06 fd ff ff       	jmp    c1000d71 <__alltraps>

c100106b <vector82>:
c100106b:	6a 00                	push   $0x0
c100106d:	6a 52                	push   $0x52
c100106f:	e9 fd fc ff ff       	jmp    c1000d71 <__alltraps>

c1001074 <vector83>:
c1001074:	6a 00                	push   $0x0
c1001076:	6a 53                	push   $0x53
c1001078:	e9 f4 fc ff ff       	jmp    c1000d71 <__alltraps>

c100107d <vector84>:
c100107d:	6a 00                	push   $0x0
c100107f:	6a 54                	push   $0x54
c1001081:	e9 eb fc ff ff       	jmp    c1000d71 <__alltraps>

c1001086 <vector85>:
c1001086:	6a 00                	push   $0x0
c1001088:	6a 55                	push   $0x55
c100108a:	e9 e2 fc ff ff       	jmp    c1000d71 <__alltraps>

c100108f <vector86>:
c100108f:	6a 00                	push   $0x0
c1001091:	6a 56                	push   $0x56
c1001093:	e9 d9 fc ff ff       	jmp    c1000d71 <__alltraps>

c1001098 <vector87>:
c1001098:	6a 00                	push   $0x0
c100109a:	6a 57                	push   $0x57
c100109c:	e9 d0 fc ff ff       	jmp    c1000d71 <__alltraps>

c10010a1 <vector88>:
c10010a1:	6a 00                	push   $0x0
c10010a3:	6a 58                	push   $0x58
c10010a5:	e9 c7 fc ff ff       	jmp    c1000d71 <__alltraps>

c10010aa <vector89>:
c10010aa:	6a 00                	push   $0x0
c10010ac:	6a 59                	push   $0x59
c10010ae:	e9 be fc ff ff       	jmp    c1000d71 <__alltraps>

c10010b3 <vector90>:
c10010b3:	6a 00                	push   $0x0
c10010b5:	6a 5a                	push   $0x5a
c10010b7:	e9 b5 fc ff ff       	jmp    c1000d71 <__alltraps>

c10010bc <vector91>:
c10010bc:	6a 00                	push   $0x0
c10010be:	6a 5b                	push   $0x5b
c10010c0:	e9 ac fc ff ff       	jmp    c1000d71 <__alltraps>

c10010c5 <vector92>:
c10010c5:	6a 00                	push   $0x0
c10010c7:	6a 5c                	push   $0x5c
c10010c9:	e9 a3 fc ff ff       	jmp    c1000d71 <__alltraps>

c10010ce <vector93>:
c10010ce:	6a 00                	push   $0x0
c10010d0:	6a 5d                	push   $0x5d
c10010d2:	e9 9a fc ff ff       	jmp    c1000d71 <__alltraps>

c10010d7 <vector94>:
c10010d7:	6a 00                	push   $0x0
c10010d9:	6a 5e                	push   $0x5e
c10010db:	e9 91 fc ff ff       	jmp    c1000d71 <__alltraps>

c10010e0 <vector95>:
c10010e0:	6a 00                	push   $0x0
c10010e2:	6a 5f                	push   $0x5f
c10010e4:	e9 88 fc ff ff       	jmp    c1000d71 <__alltraps>

c10010e9 <vector96>:
c10010e9:	6a 00                	push   $0x0
c10010eb:	6a 60                	push   $0x60
c10010ed:	e9 7f fc ff ff       	jmp    c1000d71 <__alltraps>

c10010f2 <vector97>:
c10010f2:	6a 00                	push   $0x0
c10010f4:	6a 61                	push   $0x61
c10010f6:	e9 76 fc ff ff       	jmp    c1000d71 <__alltraps>

c10010fb <vector98>:
c10010fb:	6a 00                	push   $0x0
c10010fd:	6a 62                	push   $0x62
c10010ff:	e9 6d fc ff ff       	jmp    c1000d71 <__alltraps>

c1001104 <vector99>:
c1001104:	6a 00                	push   $0x0
c1001106:	6a 63                	push   $0x63
c1001108:	e9 64 fc ff ff       	jmp    c1000d71 <__alltraps>

c100110d <vector100>:
c100110d:	6a 00                	push   $0x0
c100110f:	6a 64                	push   $0x64
c1001111:	e9 5b fc ff ff       	jmp    c1000d71 <__alltraps>

c1001116 <vector101>:
c1001116:	6a 00                	push   $0x0
c1001118:	6a 65                	push   $0x65
c100111a:	e9 52 fc ff ff       	jmp    c1000d71 <__alltraps>

c100111f <vector102>:
c100111f:	6a 00                	push   $0x0
c1001121:	6a 66                	push   $0x66
c1001123:	e9 49 fc ff ff       	jmp    c1000d71 <__alltraps>

c1001128 <vector103>:
c1001128:	6a 00                	push   $0x0
c100112a:	6a 67                	push   $0x67
c100112c:	e9 40 fc ff ff       	jmp    c1000d71 <__alltraps>

c1001131 <vector104>:
c1001131:	6a 00                	push   $0x0
c1001133:	6a 68                	push   $0x68
c1001135:	e9 37 fc ff ff       	jmp    c1000d71 <__alltraps>

c100113a <vector105>:
c100113a:	6a 00                	push   $0x0
c100113c:	6a 69                	push   $0x69
c100113e:	e9 2e fc ff ff       	jmp    c1000d71 <__alltraps>

c1001143 <vector106>:
c1001143:	6a 00                	push   $0x0
c1001145:	6a 6a                	push   $0x6a
c1001147:	e9 25 fc ff ff       	jmp    c1000d71 <__alltraps>

c100114c <vector107>:
c100114c:	6a 00                	push   $0x0
c100114e:	6a 6b                	push   $0x6b
c1001150:	e9 1c fc ff ff       	jmp    c1000d71 <__alltraps>

c1001155 <vector108>:
c1001155:	6a 00                	push   $0x0
c1001157:	6a 6c                	push   $0x6c
c1001159:	e9 13 fc ff ff       	jmp    c1000d71 <__alltraps>

c100115e <vector109>:
c100115e:	6a 00                	push   $0x0
c1001160:	6a 6d                	push   $0x6d
c1001162:	e9 0a fc ff ff       	jmp    c1000d71 <__alltraps>

c1001167 <vector110>:
c1001167:	6a 00                	push   $0x0
c1001169:	6a 6e                	push   $0x6e
c100116b:	e9 01 fc ff ff       	jmp    c1000d71 <__alltraps>

c1001170 <vector111>:
c1001170:	6a 00                	push   $0x0
c1001172:	6a 6f                	push   $0x6f
c1001174:	e9 f8 fb ff ff       	jmp    c1000d71 <__alltraps>

c1001179 <vector112>:
c1001179:	6a 00                	push   $0x0
c100117b:	6a 70                	push   $0x70
c100117d:	e9 ef fb ff ff       	jmp    c1000d71 <__alltraps>

c1001182 <vector113>:
c1001182:	6a 00                	push   $0x0
c1001184:	6a 71                	push   $0x71
c1001186:	e9 e6 fb ff ff       	jmp    c1000d71 <__alltraps>

c100118b <vector114>:
c100118b:	6a 00                	push   $0x0
c100118d:	6a 72                	push   $0x72
c100118f:	e9 dd fb ff ff       	jmp    c1000d71 <__alltraps>

c1001194 <vector115>:
c1001194:	6a 00                	push   $0x0
c1001196:	6a 73                	push   $0x73
c1001198:	e9 d4 fb ff ff       	jmp    c1000d71 <__alltraps>

c100119d <vector116>:
c100119d:	6a 00                	push   $0x0
c100119f:	6a 74                	push   $0x74
c10011a1:	e9 cb fb ff ff       	jmp    c1000d71 <__alltraps>

c10011a6 <vector117>:
c10011a6:	6a 00                	push   $0x0
c10011a8:	6a 75                	push   $0x75
c10011aa:	e9 c2 fb ff ff       	jmp    c1000d71 <__alltraps>

c10011af <vector118>:
c10011af:	6a 00                	push   $0x0
c10011b1:	6a 76                	push   $0x76
c10011b3:	e9 b9 fb ff ff       	jmp    c1000d71 <__alltraps>

c10011b8 <vector119>:
c10011b8:	6a 00                	push   $0x0
c10011ba:	6a 77                	push   $0x77
c10011bc:	e9 b0 fb ff ff       	jmp    c1000d71 <__alltraps>

c10011c1 <vector120>:
c10011c1:	6a 00                	push   $0x0
c10011c3:	6a 78                	push   $0x78
c10011c5:	e9 a7 fb ff ff       	jmp    c1000d71 <__alltraps>

c10011ca <vector121>:
c10011ca:	6a 00                	push   $0x0
c10011cc:	6a 79                	push   $0x79
c10011ce:	e9 9e fb ff ff       	jmp    c1000d71 <__alltraps>

c10011d3 <vector122>:
c10011d3:	6a 00                	push   $0x0
c10011d5:	6a 7a                	push   $0x7a
c10011d7:	e9 95 fb ff ff       	jmp    c1000d71 <__alltraps>

c10011dc <vector123>:
c10011dc:	6a 00                	push   $0x0
c10011de:	6a 7b                	push   $0x7b
c10011e0:	e9 8c fb ff ff       	jmp    c1000d71 <__alltraps>

c10011e5 <vector124>:
c10011e5:	6a 00                	push   $0x0
c10011e7:	6a 7c                	push   $0x7c
c10011e9:	e9 83 fb ff ff       	jmp    c1000d71 <__alltraps>

c10011ee <vector125>:
c10011ee:	6a 00                	push   $0x0
c10011f0:	6a 7d                	push   $0x7d
c10011f2:	e9 7a fb ff ff       	jmp    c1000d71 <__alltraps>

c10011f7 <vector126>:
c10011f7:	6a 00                	push   $0x0
c10011f9:	6a 7e                	push   $0x7e
c10011fb:	e9 71 fb ff ff       	jmp    c1000d71 <__alltraps>

c1001200 <vector127>:
c1001200:	6a 00                	push   $0x0
c1001202:	6a 7f                	push   $0x7f
c1001204:	e9 68 fb ff ff       	jmp    c1000d71 <__alltraps>

c1001209 <vector128>:
c1001209:	6a 00                	push   $0x0
c100120b:	68 80 00 00 00       	push   $0x80
c1001210:	e9 5c fb ff ff       	jmp    c1000d71 <__alltraps>

c1001215 <vector129>:
c1001215:	6a 00                	push   $0x0
c1001217:	68 81 00 00 00       	push   $0x81
c100121c:	e9 50 fb ff ff       	jmp    c1000d71 <__alltraps>

c1001221 <vector130>:
c1001221:	6a 00                	push   $0x0
c1001223:	68 82 00 00 00       	push   $0x82
c1001228:	e9 44 fb ff ff       	jmp    c1000d71 <__alltraps>

c100122d <vector131>:
c100122d:	6a 00                	push   $0x0
c100122f:	68 83 00 00 00       	push   $0x83
c1001234:	e9 38 fb ff ff       	jmp    c1000d71 <__alltraps>

c1001239 <vector132>:
c1001239:	6a 00                	push   $0x0
c100123b:	68 84 00 00 00       	push   $0x84
c1001240:	e9 2c fb ff ff       	jmp    c1000d71 <__alltraps>

c1001245 <vector133>:
c1001245:	6a 00                	push   $0x0
c1001247:	68 85 00 00 00       	push   $0x85
c100124c:	e9 20 fb ff ff       	jmp    c1000d71 <__alltraps>

c1001251 <vector134>:
c1001251:	6a 00                	push   $0x0
c1001253:	68 86 00 00 00       	push   $0x86
c1001258:	e9 14 fb ff ff       	jmp    c1000d71 <__alltraps>

c100125d <vector135>:
c100125d:	6a 00                	push   $0x0
c100125f:	68 87 00 00 00       	push   $0x87
c1001264:	e9 08 fb ff ff       	jmp    c1000d71 <__alltraps>

c1001269 <vector136>:
c1001269:	6a 00                	push   $0x0
c100126b:	68 88 00 00 00       	push   $0x88
c1001270:	e9 fc fa ff ff       	jmp    c1000d71 <__alltraps>

c1001275 <vector137>:
c1001275:	6a 00                	push   $0x0
c1001277:	68 89 00 00 00       	push   $0x89
c100127c:	e9 f0 fa ff ff       	jmp    c1000d71 <__alltraps>

c1001281 <vector138>:
c1001281:	6a 00                	push   $0x0
c1001283:	68 8a 00 00 00       	push   $0x8a
c1001288:	e9 e4 fa ff ff       	jmp    c1000d71 <__alltraps>

c100128d <vector139>:
c100128d:	6a 00                	push   $0x0
c100128f:	68 8b 00 00 00       	push   $0x8b
c1001294:	e9 d8 fa ff ff       	jmp    c1000d71 <__alltraps>

c1001299 <vector140>:
c1001299:	6a 00                	push   $0x0
c100129b:	68 8c 00 00 00       	push   $0x8c
c10012a0:	e9 cc fa ff ff       	jmp    c1000d71 <__alltraps>

c10012a5 <vector141>:
c10012a5:	6a 00                	push   $0x0
c10012a7:	68 8d 00 00 00       	push   $0x8d
c10012ac:	e9 c0 fa ff ff       	jmp    c1000d71 <__alltraps>

c10012b1 <vector142>:
c10012b1:	6a 00                	push   $0x0
c10012b3:	68 8e 00 00 00       	push   $0x8e
c10012b8:	e9 b4 fa ff ff       	jmp    c1000d71 <__alltraps>

c10012bd <vector143>:
c10012bd:	6a 00                	push   $0x0
c10012bf:	68 8f 00 00 00       	push   $0x8f
c10012c4:	e9 a8 fa ff ff       	jmp    c1000d71 <__alltraps>

c10012c9 <vector144>:
c10012c9:	6a 00                	push   $0x0
c10012cb:	68 90 00 00 00       	push   $0x90
c10012d0:	e9 9c fa ff ff       	jmp    c1000d71 <__alltraps>

c10012d5 <vector145>:
c10012d5:	6a 00                	push   $0x0
c10012d7:	68 91 00 00 00       	push   $0x91
c10012dc:	e9 90 fa ff ff       	jmp    c1000d71 <__alltraps>

c10012e1 <vector146>:
c10012e1:	6a 00                	push   $0x0
c10012e3:	68 92 00 00 00       	push   $0x92
c10012e8:	e9 84 fa ff ff       	jmp    c1000d71 <__alltraps>

c10012ed <vector147>:
c10012ed:	6a 00                	push   $0x0
c10012ef:	68 93 00 00 00       	push   $0x93
c10012f4:	e9 78 fa ff ff       	jmp    c1000d71 <__alltraps>

c10012f9 <vector148>:
c10012f9:	6a 00                	push   $0x0
c10012fb:	68 94 00 00 00       	push   $0x94
c1001300:	e9 6c fa ff ff       	jmp    c1000d71 <__alltraps>

c1001305 <vector149>:
c1001305:	6a 00                	push   $0x0
c1001307:	68 95 00 00 00       	push   $0x95
c100130c:	e9 60 fa ff ff       	jmp    c1000d71 <__alltraps>

c1001311 <vector150>:
c1001311:	6a 00                	push   $0x0
c1001313:	68 96 00 00 00       	push   $0x96
c1001318:	e9 54 fa ff ff       	jmp    c1000d71 <__alltraps>

c100131d <vector151>:
c100131d:	6a 00                	push   $0x0
c100131f:	68 97 00 00 00       	push   $0x97
c1001324:	e9 48 fa ff ff       	jmp    c1000d71 <__alltraps>

c1001329 <vector152>:
c1001329:	6a 00                	push   $0x0
c100132b:	68 98 00 00 00       	push   $0x98
c1001330:	e9 3c fa ff ff       	jmp    c1000d71 <__alltraps>

c1001335 <vector153>:
c1001335:	6a 00                	push   $0x0
c1001337:	68 99 00 00 00       	push   $0x99
c100133c:	e9 30 fa ff ff       	jmp    c1000d71 <__alltraps>

c1001341 <vector154>:
c1001341:	6a 00                	push   $0x0
c1001343:	68 9a 00 00 00       	push   $0x9a
c1001348:	e9 24 fa ff ff       	jmp    c1000d71 <__alltraps>

c100134d <vector155>:
c100134d:	6a 00                	push   $0x0
c100134f:	68 9b 00 00 00       	push   $0x9b
c1001354:	e9 18 fa ff ff       	jmp    c1000d71 <__alltraps>

c1001359 <vector156>:
c1001359:	6a 00                	push   $0x0
c100135b:	68 9c 00 00 00       	push   $0x9c
c1001360:	e9 0c fa ff ff       	jmp    c1000d71 <__alltraps>

c1001365 <vector157>:
c1001365:	6a 00                	push   $0x0
c1001367:	68 9d 00 00 00       	push   $0x9d
c100136c:	e9 00 fa ff ff       	jmp    c1000d71 <__alltraps>

c1001371 <vector158>:
c1001371:	6a 00                	push   $0x0
c1001373:	68 9e 00 00 00       	push   $0x9e
c1001378:	e9 f4 f9 ff ff       	jmp    c1000d71 <__alltraps>

c100137d <vector159>:
c100137d:	6a 00                	push   $0x0
c100137f:	68 9f 00 00 00       	push   $0x9f
c1001384:	e9 e8 f9 ff ff       	jmp    c1000d71 <__alltraps>

c1001389 <vector160>:
c1001389:	6a 00                	push   $0x0
c100138b:	68 a0 00 00 00       	push   $0xa0
c1001390:	e9 dc f9 ff ff       	jmp    c1000d71 <__alltraps>

c1001395 <vector161>:
c1001395:	6a 00                	push   $0x0
c1001397:	68 a1 00 00 00       	push   $0xa1
c100139c:	e9 d0 f9 ff ff       	jmp    c1000d71 <__alltraps>

c10013a1 <vector162>:
c10013a1:	6a 00                	push   $0x0
c10013a3:	68 a2 00 00 00       	push   $0xa2
c10013a8:	e9 c4 f9 ff ff       	jmp    c1000d71 <__alltraps>

c10013ad <vector163>:
c10013ad:	6a 00                	push   $0x0
c10013af:	68 a3 00 00 00       	push   $0xa3
c10013b4:	e9 b8 f9 ff ff       	jmp    c1000d71 <__alltraps>

c10013b9 <vector164>:
c10013b9:	6a 00                	push   $0x0
c10013bb:	68 a4 00 00 00       	push   $0xa4
c10013c0:	e9 ac f9 ff ff       	jmp    c1000d71 <__alltraps>

c10013c5 <vector165>:
c10013c5:	6a 00                	push   $0x0
c10013c7:	68 a5 00 00 00       	push   $0xa5
c10013cc:	e9 a0 f9 ff ff       	jmp    c1000d71 <__alltraps>

c10013d1 <vector166>:
c10013d1:	6a 00                	push   $0x0
c10013d3:	68 a6 00 00 00       	push   $0xa6
c10013d8:	e9 94 f9 ff ff       	jmp    c1000d71 <__alltraps>

c10013dd <vector167>:
c10013dd:	6a 00                	push   $0x0
c10013df:	68 a7 00 00 00       	push   $0xa7
c10013e4:	e9 88 f9 ff ff       	jmp    c1000d71 <__alltraps>

c10013e9 <vector168>:
c10013e9:	6a 00                	push   $0x0
c10013eb:	68 a8 00 00 00       	push   $0xa8
c10013f0:	e9 7c f9 ff ff       	jmp    c1000d71 <__alltraps>

c10013f5 <vector169>:
c10013f5:	6a 00                	push   $0x0
c10013f7:	68 a9 00 00 00       	push   $0xa9
c10013fc:	e9 70 f9 ff ff       	jmp    c1000d71 <__alltraps>

c1001401 <vector170>:
c1001401:	6a 00                	push   $0x0
c1001403:	68 aa 00 00 00       	push   $0xaa
c1001408:	e9 64 f9 ff ff       	jmp    c1000d71 <__alltraps>

c100140d <vector171>:
c100140d:	6a 00                	push   $0x0
c100140f:	68 ab 00 00 00       	push   $0xab
c1001414:	e9 58 f9 ff ff       	jmp    c1000d71 <__alltraps>

c1001419 <vector172>:
c1001419:	6a 00                	push   $0x0
c100141b:	68 ac 00 00 00       	push   $0xac
c1001420:	e9 4c f9 ff ff       	jmp    c1000d71 <__alltraps>

c1001425 <vector173>:
c1001425:	6a 00                	push   $0x0
c1001427:	68 ad 00 00 00       	push   $0xad
c100142c:	e9 40 f9 ff ff       	jmp    c1000d71 <__alltraps>

c1001431 <vector174>:
c1001431:	6a 00                	push   $0x0
c1001433:	68 ae 00 00 00       	push   $0xae
c1001438:	e9 34 f9 ff ff       	jmp    c1000d71 <__alltraps>

c100143d <vector175>:
c100143d:	6a 00                	push   $0x0
c100143f:	68 af 00 00 00       	push   $0xaf
c1001444:	e9 28 f9 ff ff       	jmp    c1000d71 <__alltraps>

c1001449 <vector176>:
c1001449:	6a 00                	push   $0x0
c100144b:	68 b0 00 00 00       	push   $0xb0
c1001450:	e9 1c f9 ff ff       	jmp    c1000d71 <__alltraps>

c1001455 <vector177>:
c1001455:	6a 00                	push   $0x0
c1001457:	68 b1 00 00 00       	push   $0xb1
c100145c:	e9 10 f9 ff ff       	jmp    c1000d71 <__alltraps>

c1001461 <vector178>:
c1001461:	6a 00                	push   $0x0
c1001463:	68 b2 00 00 00       	push   $0xb2
c1001468:	e9 04 f9 ff ff       	jmp    c1000d71 <__alltraps>

c100146d <vector179>:
c100146d:	6a 00                	push   $0x0
c100146f:	68 b3 00 00 00       	push   $0xb3
c1001474:	e9 f8 f8 ff ff       	jmp    c1000d71 <__alltraps>

c1001479 <vector180>:
c1001479:	6a 00                	push   $0x0
c100147b:	68 b4 00 00 00       	push   $0xb4
c1001480:	e9 ec f8 ff ff       	jmp    c1000d71 <__alltraps>

c1001485 <vector181>:
c1001485:	6a 00                	push   $0x0
c1001487:	68 b5 00 00 00       	push   $0xb5
c100148c:	e9 e0 f8 ff ff       	jmp    c1000d71 <__alltraps>

c1001491 <vector182>:
c1001491:	6a 00                	push   $0x0
c1001493:	68 b6 00 00 00       	push   $0xb6
c1001498:	e9 d4 f8 ff ff       	jmp    c1000d71 <__alltraps>

c100149d <vector183>:
c100149d:	6a 00                	push   $0x0
c100149f:	68 b7 00 00 00       	push   $0xb7
c10014a4:	e9 c8 f8 ff ff       	jmp    c1000d71 <__alltraps>

c10014a9 <vector184>:
c10014a9:	6a 00                	push   $0x0
c10014ab:	68 b8 00 00 00       	push   $0xb8
c10014b0:	e9 bc f8 ff ff       	jmp    c1000d71 <__alltraps>

c10014b5 <vector185>:
c10014b5:	6a 00                	push   $0x0
c10014b7:	68 b9 00 00 00       	push   $0xb9
c10014bc:	e9 b0 f8 ff ff       	jmp    c1000d71 <__alltraps>

c10014c1 <vector186>:
c10014c1:	6a 00                	push   $0x0
c10014c3:	68 ba 00 00 00       	push   $0xba
c10014c8:	e9 a4 f8 ff ff       	jmp    c1000d71 <__alltraps>

c10014cd <vector187>:
c10014cd:	6a 00                	push   $0x0
c10014cf:	68 bb 00 00 00       	push   $0xbb
c10014d4:	e9 98 f8 ff ff       	jmp    c1000d71 <__alltraps>

c10014d9 <vector188>:
c10014d9:	6a 00                	push   $0x0
c10014db:	68 bc 00 00 00       	push   $0xbc
c10014e0:	e9 8c f8 ff ff       	jmp    c1000d71 <__alltraps>

c10014e5 <vector189>:
c10014e5:	6a 00                	push   $0x0
c10014e7:	68 bd 00 00 00       	push   $0xbd
c10014ec:	e9 80 f8 ff ff       	jmp    c1000d71 <__alltraps>

c10014f1 <vector190>:
c10014f1:	6a 00                	push   $0x0
c10014f3:	68 be 00 00 00       	push   $0xbe
c10014f8:	e9 74 f8 ff ff       	jmp    c1000d71 <__alltraps>

c10014fd <vector191>:
c10014fd:	6a 00                	push   $0x0
c10014ff:	68 bf 00 00 00       	push   $0xbf
c1001504:	e9 68 f8 ff ff       	jmp    c1000d71 <__alltraps>

c1001509 <vector192>:
c1001509:	6a 00                	push   $0x0
c100150b:	68 c0 00 00 00       	push   $0xc0
c1001510:	e9 5c f8 ff ff       	jmp    c1000d71 <__alltraps>

c1001515 <vector193>:
c1001515:	6a 00                	push   $0x0
c1001517:	68 c1 00 00 00       	push   $0xc1
c100151c:	e9 50 f8 ff ff       	jmp    c1000d71 <__alltraps>

c1001521 <vector194>:
c1001521:	6a 00                	push   $0x0
c1001523:	68 c2 00 00 00       	push   $0xc2
c1001528:	e9 44 f8 ff ff       	jmp    c1000d71 <__alltraps>

c100152d <vector195>:
c100152d:	6a 00                	push   $0x0
c100152f:	68 c3 00 00 00       	push   $0xc3
c1001534:	e9 38 f8 ff ff       	jmp    c1000d71 <__alltraps>

c1001539 <vector196>:
c1001539:	6a 00                	push   $0x0
c100153b:	68 c4 00 00 00       	push   $0xc4
c1001540:	e9 2c f8 ff ff       	jmp    c1000d71 <__alltraps>

c1001545 <vector197>:
c1001545:	6a 00                	push   $0x0
c1001547:	68 c5 00 00 00       	push   $0xc5
c100154c:	e9 20 f8 ff ff       	jmp    c1000d71 <__alltraps>

c1001551 <vector198>:
c1001551:	6a 00                	push   $0x0
c1001553:	68 c6 00 00 00       	push   $0xc6
c1001558:	e9 14 f8 ff ff       	jmp    c1000d71 <__alltraps>

c100155d <vector199>:
c100155d:	6a 00                	push   $0x0
c100155f:	68 c7 00 00 00       	push   $0xc7
c1001564:	e9 08 f8 ff ff       	jmp    c1000d71 <__alltraps>

c1001569 <vector200>:
c1001569:	6a 00                	push   $0x0
c100156b:	68 c8 00 00 00       	push   $0xc8
c1001570:	e9 fc f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001575 <vector201>:
c1001575:	6a 00                	push   $0x0
c1001577:	68 c9 00 00 00       	push   $0xc9
c100157c:	e9 f0 f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001581 <vector202>:
c1001581:	6a 00                	push   $0x0
c1001583:	68 ca 00 00 00       	push   $0xca
c1001588:	e9 e4 f7 ff ff       	jmp    c1000d71 <__alltraps>

c100158d <vector203>:
c100158d:	6a 00                	push   $0x0
c100158f:	68 cb 00 00 00       	push   $0xcb
c1001594:	e9 d8 f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001599 <vector204>:
c1001599:	6a 00                	push   $0x0
c100159b:	68 cc 00 00 00       	push   $0xcc
c10015a0:	e9 cc f7 ff ff       	jmp    c1000d71 <__alltraps>

c10015a5 <vector205>:
c10015a5:	6a 00                	push   $0x0
c10015a7:	68 cd 00 00 00       	push   $0xcd
c10015ac:	e9 c0 f7 ff ff       	jmp    c1000d71 <__alltraps>

c10015b1 <vector206>:
c10015b1:	6a 00                	push   $0x0
c10015b3:	68 ce 00 00 00       	push   $0xce
c10015b8:	e9 b4 f7 ff ff       	jmp    c1000d71 <__alltraps>

c10015bd <vector207>:
c10015bd:	6a 00                	push   $0x0
c10015bf:	68 cf 00 00 00       	push   $0xcf
c10015c4:	e9 a8 f7 ff ff       	jmp    c1000d71 <__alltraps>

c10015c9 <vector208>:
c10015c9:	6a 00                	push   $0x0
c10015cb:	68 d0 00 00 00       	push   $0xd0
c10015d0:	e9 9c f7 ff ff       	jmp    c1000d71 <__alltraps>

c10015d5 <vector209>:
c10015d5:	6a 00                	push   $0x0
c10015d7:	68 d1 00 00 00       	push   $0xd1
c10015dc:	e9 90 f7 ff ff       	jmp    c1000d71 <__alltraps>

c10015e1 <vector210>:
c10015e1:	6a 00                	push   $0x0
c10015e3:	68 d2 00 00 00       	push   $0xd2
c10015e8:	e9 84 f7 ff ff       	jmp    c1000d71 <__alltraps>

c10015ed <vector211>:
c10015ed:	6a 00                	push   $0x0
c10015ef:	68 d3 00 00 00       	push   $0xd3
c10015f4:	e9 78 f7 ff ff       	jmp    c1000d71 <__alltraps>

c10015f9 <vector212>:
c10015f9:	6a 00                	push   $0x0
c10015fb:	68 d4 00 00 00       	push   $0xd4
c1001600:	e9 6c f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001605 <vector213>:
c1001605:	6a 00                	push   $0x0
c1001607:	68 d5 00 00 00       	push   $0xd5
c100160c:	e9 60 f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001611 <vector214>:
c1001611:	6a 00                	push   $0x0
c1001613:	68 d6 00 00 00       	push   $0xd6
c1001618:	e9 54 f7 ff ff       	jmp    c1000d71 <__alltraps>

c100161d <vector215>:
c100161d:	6a 00                	push   $0x0
c100161f:	68 d7 00 00 00       	push   $0xd7
c1001624:	e9 48 f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001629 <vector216>:
c1001629:	6a 00                	push   $0x0
c100162b:	68 d8 00 00 00       	push   $0xd8
c1001630:	e9 3c f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001635 <vector217>:
c1001635:	6a 00                	push   $0x0
c1001637:	68 d9 00 00 00       	push   $0xd9
c100163c:	e9 30 f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001641 <vector218>:
c1001641:	6a 00                	push   $0x0
c1001643:	68 da 00 00 00       	push   $0xda
c1001648:	e9 24 f7 ff ff       	jmp    c1000d71 <__alltraps>

c100164d <vector219>:
c100164d:	6a 00                	push   $0x0
c100164f:	68 db 00 00 00       	push   $0xdb
c1001654:	e9 18 f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001659 <vector220>:
c1001659:	6a 00                	push   $0x0
c100165b:	68 dc 00 00 00       	push   $0xdc
c1001660:	e9 0c f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001665 <vector221>:
c1001665:	6a 00                	push   $0x0
c1001667:	68 dd 00 00 00       	push   $0xdd
c100166c:	e9 00 f7 ff ff       	jmp    c1000d71 <__alltraps>

c1001671 <vector222>:
c1001671:	6a 00                	push   $0x0
c1001673:	68 de 00 00 00       	push   $0xde
c1001678:	e9 f4 f6 ff ff       	jmp    c1000d71 <__alltraps>

c100167d <vector223>:
c100167d:	6a 00                	push   $0x0
c100167f:	68 df 00 00 00       	push   $0xdf
c1001684:	e9 e8 f6 ff ff       	jmp    c1000d71 <__alltraps>

c1001689 <vector224>:
c1001689:	6a 00                	push   $0x0
c100168b:	68 e0 00 00 00       	push   $0xe0
c1001690:	e9 dc f6 ff ff       	jmp    c1000d71 <__alltraps>

c1001695 <vector225>:
c1001695:	6a 00                	push   $0x0
c1001697:	68 e1 00 00 00       	push   $0xe1
c100169c:	e9 d0 f6 ff ff       	jmp    c1000d71 <__alltraps>

c10016a1 <vector226>:
c10016a1:	6a 00                	push   $0x0
c10016a3:	68 e2 00 00 00       	push   $0xe2
c10016a8:	e9 c4 f6 ff ff       	jmp    c1000d71 <__alltraps>

c10016ad <vector227>:
c10016ad:	6a 00                	push   $0x0
c10016af:	68 e3 00 00 00       	push   $0xe3
c10016b4:	e9 b8 f6 ff ff       	jmp    c1000d71 <__alltraps>

c10016b9 <vector228>:
c10016b9:	6a 00                	push   $0x0
c10016bb:	68 e4 00 00 00       	push   $0xe4
c10016c0:	e9 ac f6 ff ff       	jmp    c1000d71 <__alltraps>

c10016c5 <vector229>:
c10016c5:	6a 00                	push   $0x0
c10016c7:	68 e5 00 00 00       	push   $0xe5
c10016cc:	e9 a0 f6 ff ff       	jmp    c1000d71 <__alltraps>

c10016d1 <vector230>:
c10016d1:	6a 00                	push   $0x0
c10016d3:	68 e6 00 00 00       	push   $0xe6
c10016d8:	e9 94 f6 ff ff       	jmp    c1000d71 <__alltraps>

c10016dd <vector231>:
c10016dd:	6a 00                	push   $0x0
c10016df:	68 e7 00 00 00       	push   $0xe7
c10016e4:	e9 88 f6 ff ff       	jmp    c1000d71 <__alltraps>

c10016e9 <vector232>:
c10016e9:	6a 00                	push   $0x0
c10016eb:	68 e8 00 00 00       	push   $0xe8
c10016f0:	e9 7c f6 ff ff       	jmp    c1000d71 <__alltraps>

c10016f5 <vector233>:
c10016f5:	6a 00                	push   $0x0
c10016f7:	68 e9 00 00 00       	push   $0xe9
c10016fc:	e9 70 f6 ff ff       	jmp    c1000d71 <__alltraps>

c1001701 <vector234>:
c1001701:	6a 00                	push   $0x0
c1001703:	68 ea 00 00 00       	push   $0xea
c1001708:	e9 64 f6 ff ff       	jmp    c1000d71 <__alltraps>

c100170d <vector235>:
c100170d:	6a 00                	push   $0x0
c100170f:	68 eb 00 00 00       	push   $0xeb
c1001714:	e9 58 f6 ff ff       	jmp    c1000d71 <__alltraps>

c1001719 <vector236>:
c1001719:	6a 00                	push   $0x0
c100171b:	68 ec 00 00 00       	push   $0xec
c1001720:	e9 4c f6 ff ff       	jmp    c1000d71 <__alltraps>

c1001725 <vector237>:
c1001725:	6a 00                	push   $0x0
c1001727:	68 ed 00 00 00       	push   $0xed
c100172c:	e9 40 f6 ff ff       	jmp    c1000d71 <__alltraps>

c1001731 <vector238>:
c1001731:	6a 00                	push   $0x0
c1001733:	68 ee 00 00 00       	push   $0xee
c1001738:	e9 34 f6 ff ff       	jmp    c1000d71 <__alltraps>

c100173d <vector239>:
c100173d:	6a 00                	push   $0x0
c100173f:	68 ef 00 00 00       	push   $0xef
c1001744:	e9 28 f6 ff ff       	jmp    c1000d71 <__alltraps>

c1001749 <vector240>:
c1001749:	6a 00                	push   $0x0
c100174b:	68 f0 00 00 00       	push   $0xf0
c1001750:	e9 1c f6 ff ff       	jmp    c1000d71 <__alltraps>

c1001755 <vector241>:
c1001755:	6a 00                	push   $0x0
c1001757:	68 f1 00 00 00       	push   $0xf1
c100175c:	e9 10 f6 ff ff       	jmp    c1000d71 <__alltraps>

c1001761 <vector242>:
c1001761:	6a 00                	push   $0x0
c1001763:	68 f2 00 00 00       	push   $0xf2
c1001768:	e9 04 f6 ff ff       	jmp    c1000d71 <__alltraps>

c100176d <vector243>:
c100176d:	6a 00                	push   $0x0
c100176f:	68 f3 00 00 00       	push   $0xf3
c1001774:	e9 f8 f5 ff ff       	jmp    c1000d71 <__alltraps>

c1001779 <vector244>:
c1001779:	6a 00                	push   $0x0
c100177b:	68 f4 00 00 00       	push   $0xf4
c1001780:	e9 ec f5 ff ff       	jmp    c1000d71 <__alltraps>

c1001785 <vector245>:
c1001785:	6a 00                	push   $0x0
c1001787:	68 f5 00 00 00       	push   $0xf5
c100178c:	e9 e0 f5 ff ff       	jmp    c1000d71 <__alltraps>

c1001791 <vector246>:
c1001791:	6a 00                	push   $0x0
c1001793:	68 f6 00 00 00       	push   $0xf6
c1001798:	e9 d4 f5 ff ff       	jmp    c1000d71 <__alltraps>

c100179d <vector247>:
c100179d:	6a 00                	push   $0x0
c100179f:	68 f7 00 00 00       	push   $0xf7
c10017a4:	e9 c8 f5 ff ff       	jmp    c1000d71 <__alltraps>

c10017a9 <vector248>:
c10017a9:	6a 00                	push   $0x0
c10017ab:	68 f8 00 00 00       	push   $0xf8
c10017b0:	e9 bc f5 ff ff       	jmp    c1000d71 <__alltraps>

c10017b5 <vector249>:
c10017b5:	6a 00                	push   $0x0
c10017b7:	68 f9 00 00 00       	push   $0xf9
c10017bc:	e9 b0 f5 ff ff       	jmp    c1000d71 <__alltraps>

c10017c1 <vector250>:
c10017c1:	6a 00                	push   $0x0
c10017c3:	68 fa 00 00 00       	push   $0xfa
c10017c8:	e9 a4 f5 ff ff       	jmp    c1000d71 <__alltraps>

c10017cd <vector251>:
c10017cd:	6a 00                	push   $0x0
c10017cf:	68 fb 00 00 00       	push   $0xfb
c10017d4:	e9 98 f5 ff ff       	jmp    c1000d71 <__alltraps>

c10017d9 <vector252>:
c10017d9:	6a 00                	push   $0x0
c10017db:	68 fc 00 00 00       	push   $0xfc
c10017e0:	e9 8c f5 ff ff       	jmp    c1000d71 <__alltraps>

c10017e5 <vector253>:
c10017e5:	6a 00                	push   $0x0
c10017e7:	68 fd 00 00 00       	push   $0xfd
c10017ec:	e9 80 f5 ff ff       	jmp    c1000d71 <__alltraps>

c10017f1 <vector254>:
c10017f1:	6a 00                	push   $0x0
c10017f3:	68 fe 00 00 00       	push   $0xfe
c10017f8:	e9 74 f5 ff ff       	jmp    c1000d71 <__alltraps>

c10017fd <vector255>:
c10017fd:	6a 00                	push   $0x0
c10017ff:	68 ff 00 00 00       	push   $0xff
c1001804:	e9 68 f5 ff ff       	jmp    c1000d71 <__alltraps>

c1001809 <hash32>:
c1001809:	55                   	push   %ebp
c100180a:	89 e5                	mov    %esp,%ebp
c100180c:	83 ec 10             	sub    $0x10,%esp
c100180f:	8b 45 08             	mov    0x8(%ebp),%eax
c1001812:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1001818:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100181b:	b8 20 00 00 00       	mov    $0x20,%eax
c1001820:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001823:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001826:	89 c1                	mov    %eax,%ecx
c1001828:	d3 ea                	shr    %cl,%edx
c100182a:	89 d0                	mov    %edx,%eax
c100182c:	c9                   	leave  
c100182d:	c3                   	ret    

c100182e <sys_exit>:
c100182e:	55                   	push   %ebp
c100182f:	89 e5                	mov    %esp,%ebp
c1001831:	83 ec 10             	sub    $0x10,%esp
c1001834:	8b 45 08             	mov    0x8(%ebp),%eax
c1001837:	8b 00                	mov    (%eax),%eax
c1001839:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100183c:	b8 00 00 00 00       	mov    $0x0,%eax
c1001841:	c9                   	leave  
c1001842:	c3                   	ret    

c1001843 <sys_fork>:
c1001843:	55                   	push   %ebp
c1001844:	89 e5                	mov    %esp,%ebp
c1001846:	83 ec 18             	sub    $0x18,%esp
c1001849:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100184e:	8b 40 2c             	mov    0x2c(%eax),%eax
c1001851:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001854:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001857:	8b 40 44             	mov    0x44(%eax),%eax
c100185a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100185d:	83 ec 04             	sub    $0x4,%esp
c1001860:	ff 75 f4             	pushl  -0xc(%ebp)
c1001863:	ff 75 f0             	pushl  -0x10(%ebp)
c1001866:	6a 00                	push   $0x0
c1001868:	e8 79 1c 00 00       	call   c10034e6 <do_fork>
c100186d:	83 c4 10             	add    $0x10,%esp
c1001870:	c9                   	leave  
c1001871:	c3                   	ret    

c1001872 <sys_wait>:
c1001872:	55                   	push   %ebp
c1001873:	89 e5                	mov    %esp,%ebp
c1001875:	83 ec 10             	sub    $0x10,%esp
c1001878:	8b 45 08             	mov    0x8(%ebp),%eax
c100187b:	8b 00                	mov    (%eax),%eax
c100187d:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1001880:	8b 45 08             	mov    0x8(%ebp),%eax
c1001883:	83 c0 04             	add    $0x4,%eax
c1001886:	8b 00                	mov    (%eax),%eax
c1001888:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100188b:	90                   	nop
c100188c:	c9                   	leave  
c100188d:	c3                   	ret    

c100188e <sys_exec>:
c100188e:	55                   	push   %ebp
c100188f:	89 e5                	mov    %esp,%ebp
c1001891:	83 ec 18             	sub    $0x18,%esp
c1001894:	8b 45 08             	mov    0x8(%ebp),%eax
c1001897:	8b 00                	mov    (%eax),%eax
c1001899:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100189c:	8b 45 08             	mov    0x8(%ebp),%eax
c100189f:	8b 40 04             	mov    0x4(%eax),%eax
c10018a2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10018a5:	8b 45 08             	mov    0x8(%ebp),%eax
c10018a8:	83 c0 08             	add    $0x8,%eax
c10018ab:	8b 00                	mov    (%eax),%eax
c10018ad:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10018b0:	8b 45 08             	mov    0x8(%ebp),%eax
c10018b3:	8b 40 0c             	mov    0xc(%eax),%eax
c10018b6:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10018b9:	ff 75 e8             	pushl  -0x18(%ebp)
c10018bc:	ff 75 ec             	pushl  -0x14(%ebp)
c10018bf:	ff 75 f0             	pushl  -0x10(%ebp)
c10018c2:	ff 75 f4             	pushl  -0xc(%ebp)
c10018c5:	e8 c0 1f 00 00       	call   c100388a <do_execve>
c10018ca:	83 c4 10             	add    $0x10,%esp
c10018cd:	c9                   	leave  
c10018ce:	c3                   	ret    

c10018cf <sys_yield>:
c10018cf:	55                   	push   %ebp
c10018d0:	89 e5                	mov    %esp,%ebp
c10018d2:	90                   	nop
c10018d3:	5d                   	pop    %ebp
c10018d4:	c3                   	ret    

c10018d5 <sys_kill>:
c10018d5:	55                   	push   %ebp
c10018d6:	89 e5                	mov    %esp,%ebp
c10018d8:	83 ec 10             	sub    $0x10,%esp
c10018db:	8b 45 08             	mov    0x8(%ebp),%eax
c10018de:	8b 00                	mov    (%eax),%eax
c10018e0:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10018e3:	90                   	nop
c10018e4:	c9                   	leave  
c10018e5:	c3                   	ret    

c10018e6 <sys_getpid>:
c10018e6:	55                   	push   %ebp
c10018e7:	89 e5                	mov    %esp,%ebp
c10018e9:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10018ee:	8b 40 0c             	mov    0xc(%eax),%eax
c10018f1:	5d                   	pop    %ebp
c10018f2:	c3                   	ret    

c10018f3 <sys_print_char>:
c10018f3:	55                   	push   %ebp
c10018f4:	89 e5                	mov    %esp,%ebp
c10018f6:	83 ec 18             	sub    $0x18,%esp
c10018f9:	8b 45 08             	mov    0x8(%ebp),%eax
c10018fc:	8b 00                	mov    (%eax),%eax
c10018fe:	88 45 f7             	mov    %al,-0x9(%ebp)
c1001901:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1001905:	83 ec 04             	sub    $0x4,%esp
c1001908:	6a 02                	push   $0x2
c100190a:	6a 00                	push   $0x0
c100190c:	50                   	push   %eax
c100190d:	e8 f6 2b 00 00       	call   c1004508 <print_char>
c1001912:	83 c4 10             	add    $0x10,%esp
c1001915:	b8 00 00 00 00       	mov    $0x0,%eax
c100191a:	c9                   	leave  
c100191b:	c3                   	ret    

c100191c <sys_print_string>:
c100191c:	55                   	push   %ebp
c100191d:	89 e5                	mov    %esp,%ebp
c100191f:	83 ec 18             	sub    $0x18,%esp
c1001922:	8b 45 08             	mov    0x8(%ebp),%eax
c1001925:	8b 00                	mov    (%eax),%eax
c1001927:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100192a:	83 ec 04             	sub    $0x4,%esp
c100192d:	6a 02                	push   $0x2
c100192f:	6a 00                	push   $0x0
c1001931:	ff 75 f4             	pushl  -0xc(%ebp)
c1001934:	e8 ec 2c 00 00       	call   c1004625 <print_string>
c1001939:	83 c4 10             	add    $0x10,%esp
c100193c:	b8 00 00 00 00       	mov    $0x0,%eax
c1001941:	c9                   	leave  
c1001942:	c3                   	ret    

c1001943 <sys_print_num>:
c1001943:	55                   	push   %ebp
c1001944:	89 e5                	mov    %esp,%ebp
c1001946:	53                   	push   %ebx
c1001947:	83 ec 14             	sub    $0x14,%esp
c100194a:	8b 45 08             	mov    0x8(%ebp),%eax
c100194d:	8b 00                	mov    (%eax),%eax
c100194f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001952:	8b 45 08             	mov    0x8(%ebp),%eax
c1001955:	83 c0 04             	add    $0x4,%eax
c1001958:	8b 00                	mov    (%eax),%eax
c100195a:	88 45 f3             	mov    %al,-0xd(%ebp)
c100195d:	8b 45 08             	mov    0x8(%ebp),%eax
c1001960:	83 c0 08             	add    $0x8,%eax
c1001963:	8b 00                	mov    (%eax),%eax
c1001965:	88 45 f2             	mov    %al,-0xe(%ebp)
c1001968:	8b 45 08             	mov    0x8(%ebp),%eax
c100196b:	83 c0 0c             	add    $0xc,%eax
c100196e:	8b 00                	mov    (%eax),%eax
c1001970:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001973:	0f be 5d f2          	movsbl -0xe(%ebp),%ebx
c1001977:	0f b6 4d f3          	movzbl -0xd(%ebp),%ecx
c100197b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100197e:	99                   	cltd   
c100197f:	83 ec 04             	sub    $0x4,%esp
c1001982:	ff 75 ec             	pushl  -0x14(%ebp)
c1001985:	53                   	push   %ebx
c1001986:	51                   	push   %ecx
c1001987:	6a 02                	push   $0x2
c1001989:	6a 00                	push   $0x0
c100198b:	52                   	push   %edx
c100198c:	50                   	push   %eax
c100198d:	e8 ca 2c 00 00       	call   c100465c <print_num>
c1001992:	83 c4 20             	add    $0x20,%esp
c1001995:	b8 00 00 00 00       	mov    $0x0,%eax
c100199a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100199d:	c9                   	leave  
c100199e:	c3                   	ret    

c100199f <sys_pgdir>:
c100199f:	55                   	push   %ebp
c10019a0:	89 e5                	mov    %esp,%ebp
c10019a2:	b8 00 00 00 00       	mov    $0x0,%eax
c10019a7:	5d                   	pop    %ebp
c10019a8:	c3                   	ret    

c10019a9 <syscall_trap>:
c10019a9:	55                   	push   %ebp
c10019aa:	89 e5                	mov    %esp,%ebp
c10019ac:	83 ec 28             	sub    $0x28,%esp
c10019af:	8b 45 08             	mov    0x8(%ebp),%eax
c10019b2:	8b 40 1c             	mov    0x1c(%eax),%eax
c10019b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10019b8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10019bc:	78 60                	js     c1001a1e <syscall_trap+0x75>
c10019be:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10019c1:	83 f8 26             	cmp    $0x26,%eax
c10019c4:	77 58                	ja     c1001a1e <syscall_trap+0x75>
c10019c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10019c9:	8b 04 85 00 c5 00 c1 	mov    -0x3eff3b00(,%eax,4),%eax
c10019d0:	85 c0                	test   %eax,%eax
c10019d2:	74 4a                	je     c1001a1e <syscall_trap+0x75>
c10019d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10019d7:	8b 40 14             	mov    0x14(%eax),%eax
c10019da:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10019dd:	8b 45 08             	mov    0x8(%ebp),%eax
c10019e0:	8b 40 18             	mov    0x18(%eax),%eax
c10019e3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10019e6:	8b 45 08             	mov    0x8(%ebp),%eax
c10019e9:	8b 40 10             	mov    0x10(%eax),%eax
c10019ec:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10019ef:	8b 45 08             	mov    0x8(%ebp),%eax
c10019f2:	8b 00                	mov    (%eax),%eax
c10019f4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10019f7:	8b 45 08             	mov    0x8(%ebp),%eax
c10019fa:	8b 40 04             	mov    0x4(%eax),%eax
c10019fd:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001a00:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001a03:	8b 04 85 00 c5 00 c1 	mov    -0x3eff3b00(,%eax,4),%eax
c1001a0a:	83 ec 0c             	sub    $0xc,%esp
c1001a0d:	8d 55 e0             	lea    -0x20(%ebp),%edx
c1001a10:	52                   	push   %edx
c1001a11:	ff d0                	call   *%eax
c1001a13:	83 c4 10             	add    $0x10,%esp
c1001a16:	89 c2                	mov    %eax,%edx
c1001a18:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a1b:	89 50 1c             	mov    %edx,0x1c(%eax)
c1001a1e:	c9                   	leave  
c1001a1f:	c3                   	ret    

c1001a20 <user_syscall>:
c1001a20:	55                   	push   %ebp
c1001a21:	89 e5                	mov    %esp,%ebp
c1001a23:	57                   	push   %edi
c1001a24:	56                   	push   %esi
c1001a25:	53                   	push   %ebx
c1001a26:	83 ec 20             	sub    $0x20,%esp
c1001a29:	8d 45 0c             	lea    0xc(%ebp),%eax
c1001a2c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001a2f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1001a36:	eb 15                	jmp    c1001a4d <user_syscall+0x2d>
c1001a38:	83 45 f0 04          	addl   $0x4,-0x10(%ebp)
c1001a3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1001a3f:	8b 50 fc             	mov    -0x4(%eax),%edx
c1001a42:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1001a45:	89 54 85 d4          	mov    %edx,-0x2c(%ebp,%eax,4)
c1001a49:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1001a4d:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
c1001a51:	7e e5                	jle    c1001a38 <user_syscall+0x18>
c1001a53:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1001a5a:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a5d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1001a60:	8b 4d d8             	mov    -0x28(%ebp),%ecx
c1001a63:	8b 5d dc             	mov    -0x24(%ebp),%ebx
c1001a66:	8b 7d e0             	mov    -0x20(%ebp),%edi
c1001a69:	8b 75 e4             	mov    -0x1c(%ebp),%esi
c1001a6c:	cd 80                	int    $0x80
c1001a6e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1001a71:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1001a74:	83 c4 20             	add    $0x20,%esp
c1001a77:	5b                   	pop    %ebx
c1001a78:	5e                   	pop    %esi
c1001a79:	5f                   	pop    %edi
c1001a7a:	5d                   	pop    %ebp
c1001a7b:	c3                   	ret    

c1001a7c <user_sys_getpid>:
c1001a7c:	55                   	push   %ebp
c1001a7d:	89 e5                	mov    %esp,%ebp
c1001a7f:	6a 12                	push   $0x12
c1001a81:	e8 9a ff ff ff       	call   c1001a20 <user_syscall>
c1001a86:	83 c4 04             	add    $0x4,%esp
c1001a89:	c9                   	leave  
c1001a8a:	c3                   	ret    

c1001a8b <user_print_char>:
c1001a8b:	55                   	push   %ebp
c1001a8c:	89 e5                	mov    %esp,%ebp
c1001a8e:	83 ec 04             	sub    $0x4,%esp
c1001a91:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a94:	88 45 fc             	mov    %al,-0x4(%ebp)
c1001a97:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
c1001a9b:	50                   	push   %eax
c1001a9c:	6a 24                	push   $0x24
c1001a9e:	e8 7d ff ff ff       	call   c1001a20 <user_syscall>
c1001aa3:	83 c4 08             	add    $0x8,%esp
c1001aa6:	90                   	nop
c1001aa7:	c9                   	leave  
c1001aa8:	c3                   	ret    

c1001aa9 <user_print_string>:
c1001aa9:	55                   	push   %ebp
c1001aaa:	89 e5                	mov    %esp,%ebp
c1001aac:	ff 75 08             	pushl  0x8(%ebp)
c1001aaf:	6a 25                	push   $0x25
c1001ab1:	e8 6a ff ff ff       	call   c1001a20 <user_syscall>
c1001ab6:	83 c4 08             	add    $0x8,%esp
c1001ab9:	90                   	nop
c1001aba:	c9                   	leave  
c1001abb:	c3                   	ret    

c1001abc <user_print_num>:
c1001abc:	55                   	push   %ebp
c1001abd:	89 e5                	mov    %esp,%ebp
c1001abf:	83 ec 08             	sub    $0x8,%esp
c1001ac2:	8b 55 0c             	mov    0xc(%ebp),%edx
c1001ac5:	8b 45 10             	mov    0x10(%ebp),%eax
c1001ac8:	88 55 fc             	mov    %dl,-0x4(%ebp)
c1001acb:	88 45 f8             	mov    %al,-0x8(%ebp)
c1001ace:	0f be 55 f8          	movsbl -0x8(%ebp),%edx
c1001ad2:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
c1001ad6:	ff 75 14             	pushl  0x14(%ebp)
c1001ad9:	52                   	push   %edx
c1001ada:	50                   	push   %eax
c1001adb:	ff 75 08             	pushl  0x8(%ebp)
c1001ade:	6a 26                	push   $0x26
c1001ae0:	e8 3b ff ff ff       	call   c1001a20 <user_syscall>
c1001ae5:	83 c4 14             	add    $0x14,%esp
c1001ae8:	90                   	nop
c1001ae9:	c9                   	leave  
c1001aea:	c3                   	ret    

c1001aeb <kbd_proc_data>:
c1001aeb:	55                   	push   %ebp
c1001aec:	89 e5                	mov    %esp,%ebp
c1001aee:	83 ec 18             	sub    $0x18,%esp
c1001af1:	83 ec 0c             	sub    $0xc,%esp
c1001af4:	6a 64                	push   $0x64
c1001af6:	e8 05 e5 ff ff       	call   c1000000 <inb>
c1001afb:	83 c4 10             	add    $0x10,%esp
c1001afe:	83 e0 01             	and    $0x1,%eax
c1001b01:	85 c0                	test   %eax,%eax
c1001b03:	75 0a                	jne    c1001b0f <kbd_proc_data+0x24>
c1001b05:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1001b0a:	e9 55 01 00 00       	jmp    c1001c64 <kbd_proc_data+0x179>
c1001b0f:	83 ec 0c             	sub    $0xc,%esp
c1001b12:	6a 60                	push   $0x60
c1001b14:	e8 e7 e4 ff ff       	call   c1000000 <inb>
c1001b19:	83 c4 10             	add    $0x10,%esp
c1001b1c:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001b1f:	80 7d f3 e0          	cmpb   $0xe0,-0xd(%ebp)
c1001b23:	75 17                	jne    c1001b3c <kbd_proc_data+0x51>
c1001b25:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001b2a:	83 c8 40             	or     $0x40,%eax
c1001b2d:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001b32:	b8 00 00 00 00       	mov    $0x0,%eax
c1001b37:	e9 28 01 00 00       	jmp    c1001c64 <kbd_proc_data+0x179>
c1001b3c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001b40:	84 c0                	test   %al,%al
c1001b42:	79 47                	jns    c1001b8b <kbd_proc_data+0xa0>
c1001b44:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001b49:	83 e0 40             	and    $0x40,%eax
c1001b4c:	85 c0                	test   %eax,%eax
c1001b4e:	75 09                	jne    c1001b59 <kbd_proc_data+0x6e>
c1001b50:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001b54:	83 e0 7f             	and    $0x7f,%eax
c1001b57:	eb 04                	jmp    c1001b5d <kbd_proc_data+0x72>
c1001b59:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001b5d:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001b60:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001b64:	0f b6 80 a0 c5 00 c1 	movzbl -0x3eff3a60(%eax),%eax
c1001b6b:	83 c8 40             	or     $0x40,%eax
c1001b6e:	0f b6 c0             	movzbl %al,%eax
c1001b71:	f7 d0                	not    %eax
c1001b73:	89 c2                	mov    %eax,%edx
c1001b75:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001b7a:	21 d0                	and    %edx,%eax
c1001b7c:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001b81:	b8 00 00 00 00       	mov    $0x0,%eax
c1001b86:	e9 d9 00 00 00       	jmp    c1001c64 <kbd_proc_data+0x179>
c1001b8b:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001b90:	83 e0 40             	and    $0x40,%eax
c1001b93:	85 c0                	test   %eax,%eax
c1001b95:	74 11                	je     c1001ba8 <kbd_proc_data+0xbd>
c1001b97:	80 4d f3 80          	orb    $0x80,-0xd(%ebp)
c1001b9b:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001ba0:	83 e0 bf             	and    $0xffffffbf,%eax
c1001ba3:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001ba8:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001bac:	0f b6 80 a0 c5 00 c1 	movzbl -0x3eff3a60(%eax),%eax
c1001bb3:	0f b6 d0             	movzbl %al,%edx
c1001bb6:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001bbb:	09 d0                	or     %edx,%eax
c1001bbd:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001bc2:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001bc6:	0f b6 80 a0 c6 00 c1 	movzbl -0x3eff3960(%eax),%eax
c1001bcd:	0f b6 d0             	movzbl %al,%edx
c1001bd0:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001bd5:	31 d0                	xor    %edx,%eax
c1001bd7:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001bdc:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001be1:	83 e0 03             	and    $0x3,%eax
c1001be4:	8b 14 85 a0 ca 00 c1 	mov    -0x3eff3560(,%eax,4),%edx
c1001beb:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001bef:	01 d0                	add    %edx,%eax
c1001bf1:	0f b6 00             	movzbl (%eax),%eax
c1001bf4:	0f b6 c0             	movzbl %al,%eax
c1001bf7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bfa:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001bff:	83 e0 08             	and    $0x8,%eax
c1001c02:	85 c0                	test   %eax,%eax
c1001c04:	74 22                	je     c1001c28 <kbd_proc_data+0x13d>
c1001c06:	83 7d f4 60          	cmpl   $0x60,-0xc(%ebp)
c1001c0a:	7e 0c                	jle    c1001c18 <kbd_proc_data+0x12d>
c1001c0c:	83 7d f4 7a          	cmpl   $0x7a,-0xc(%ebp)
c1001c10:	7f 06                	jg     c1001c18 <kbd_proc_data+0x12d>
c1001c12:	83 6d f4 20          	subl   $0x20,-0xc(%ebp)
c1001c16:	eb 10                	jmp    c1001c28 <kbd_proc_data+0x13d>
c1001c18:	83 7d f4 40          	cmpl   $0x40,-0xc(%ebp)
c1001c1c:	7e 0a                	jle    c1001c28 <kbd_proc_data+0x13d>
c1001c1e:	83 7d f4 5a          	cmpl   $0x5a,-0xc(%ebp)
c1001c22:	7f 04                	jg     c1001c28 <kbd_proc_data+0x13d>
c1001c24:	83 45 f4 20          	addl   $0x20,-0xc(%ebp)
c1001c28:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001c2d:	f7 d0                	not    %eax
c1001c2f:	83 e0 06             	and    $0x6,%eax
c1001c32:	85 c0                	test   %eax,%eax
c1001c34:	75 2b                	jne    c1001c61 <kbd_proc_data+0x176>
c1001c36:	81 7d f4 e9 00 00 00 	cmpl   $0xe9,-0xc(%ebp)
c1001c3d:	75 22                	jne    c1001c61 <kbd_proc_data+0x176>
c1001c3f:	83 ec 0c             	sub    $0xc,%esp
c1001c42:	68 c0 9f 00 c1       	push   $0xc1009fc0
c1001c47:	e8 67 2b 00 00       	call   c10047b3 <printk>
c1001c4c:	83 c4 10             	add    $0x10,%esp
c1001c4f:	83 ec 08             	sub    $0x8,%esp
c1001c52:	6a 03                	push   $0x3
c1001c54:	68 92 00 00 00       	push   $0x92
c1001c59:	e8 de e3 ff ff       	call   c100003c <outb>
c1001c5e:	83 c4 10             	add    $0x10,%esp
c1001c61:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001c64:	c9                   	leave  
c1001c65:	c3                   	ret    

c1001c66 <kbd_intr>:
c1001c66:	55                   	push   %ebp
c1001c67:	89 e5                	mov    %esp,%ebp
c1001c69:	83 ec 08             	sub    $0x8,%esp
c1001c6c:	83 ec 0c             	sub    $0xc,%esp
c1001c6f:	68 eb 1a 00 c1       	push   $0xc1001aeb
c1001c74:	e8 b9 25 00 00       	call   c1004232 <cons_intr>
c1001c79:	83 c4 10             	add    $0x10,%esp
c1001c7c:	90                   	nop
c1001c7d:	c9                   	leave  
c1001c7e:	c3                   	ret    

c1001c7f <kbd_init>:
c1001c7f:	55                   	push   %ebp
c1001c80:	89 e5                	mov    %esp,%ebp
c1001c82:	83 ec 18             	sub    $0x18,%esp
c1001c85:	c7 05 20 32 a1 c1 00 	movl   $0x0,0xc1a13220
c1001c8c:	00 00 00 
c1001c8f:	c7 05 24 32 a1 c1 00 	movl   $0x0,0xc1a13224
c1001c96:	00 00 00 
c1001c99:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1001ca0:	eb 0f                	jmp    c1001cb1 <kbd_init+0x32>
c1001ca2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001ca5:	05 20 30 a1 c1       	add    $0xc1a13020,%eax
c1001caa:	c6 00 00             	movb   $0x0,(%eax)
c1001cad:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1001cb1:	81 7d f4 ff 01 00 00 	cmpl   $0x1ff,-0xc(%ebp)
c1001cb8:	7e e8                	jle    c1001ca2 <kbd_init+0x23>
c1001cba:	e8 a7 ff ff ff       	call   c1001c66 <kbd_intr>
c1001cbf:	83 ec 0c             	sub    $0xc,%esp
c1001cc2:	6a 01                	push   $0x1
c1001cc4:	e8 28 22 00 00       	call   c1003ef1 <pic_enable>
c1001cc9:	83 c4 10             	add    $0x10,%esp
c1001ccc:	90                   	nop
c1001ccd:	c9                   	leave  
c1001cce:	c3                   	ret    

c1001ccf <hash32>:
c1001ccf:	55                   	push   %ebp
c1001cd0:	89 e5                	mov    %esp,%ebp
c1001cd2:	83 ec 10             	sub    $0x10,%esp
c1001cd5:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cd8:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1001cde:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1001ce1:	b8 20 00 00 00       	mov    $0x20,%eax
c1001ce6:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001ce9:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001cec:	89 c1                	mov    %eax,%ecx
c1001cee:	d3 ea                	shr    %cl,%edx
c1001cf0:	89 d0                	mov    %edx,%eax
c1001cf2:	c9                   	leave  
c1001cf3:	c3                   	ret    

c1001cf4 <main>:
c1001cf4:	8d 4c 24 04          	lea    0x4(%esp),%ecx
c1001cf8:	83 e4 f0             	and    $0xfffffff0,%esp
c1001cfb:	ff 71 fc             	pushl  -0x4(%ecx)
c1001cfe:	55                   	push   %ebp
c1001cff:	89 e5                	mov    %esp,%ebp
c1001d01:	51                   	push   %ecx
c1001d02:	83 ec 04             	sub    $0x4,%esp
c1001d05:	e8 86 27 00 00       	call   c1004490 <clear>
c1001d0a:	83 ec 0c             	sub    $0xc,%esp
c1001d0d:	68 cc 9f 00 c1       	push   $0xc1009fcc
c1001d12:	e8 9c 2a 00 00       	call   c10047b3 <printk>
c1001d17:	83 c4 10             	add    $0x10,%esp
c1001d1a:	e8 55 e9 ff ff       	call   c1000674 <gdt_init>
c1001d1f:	e8 00 22 00 00       	call   c1003f24 <pic_init>
c1001d24:	e8 3f ea ff ff       	call   c1000768 <idt_init>
c1001d29:	e8 bc ef ff ff       	call   c1000cea <enable_interupt>
c1001d2e:	e8 5a 23 00 00       	call   c100408d <serial_init>
c1001d33:	e8 47 ff ff ff       	call   c1001c7f <kbd_init>
c1001d38:	e8 4b 0d 00 00       	call   c1002a88 <setup_vpt>
c1001d3d:	e8 8b 07 00 00       	call   c10024cd <pmm_init>
c1001d42:	e8 23 00 00 00       	call   c1001d6a <test_pmm>
c1001d47:	e8 07 01 00 00       	call   c1001e53 <test_vmm>
c1001d4c:	e8 55 11 00 00       	call   c1002ea6 <task_init>
c1001d51:	e8 3a 27 00 00       	call   c1004490 <clear>
c1001d56:	83 ec 0c             	sub    $0xc,%esp
c1001d59:	6a 64                	push   $0x64
c1001d5b:	e8 2d 26 00 00       	call   c100438d <timer_init>
c1001d60:	83 c4 10             	add    $0x10,%esp
c1001d63:	e8 33 04 00 00       	call   c100219b <test_user>
c1001d68:	eb fe                	jmp    c1001d68 <main+0x74>

c1001d6a <test_pmm>:
c1001d6a:	55                   	push   %ebp
c1001d6b:	89 e5                	mov    %esp,%ebp
c1001d6d:	83 ec 18             	sub    $0x18,%esp
c1001d70:	83 ec 08             	sub    $0x8,%esp
c1001d73:	6a 01                	push   $0x1
c1001d75:	68 00 02 00 00       	push   $0x200
c1001d7a:	e8 66 0b 00 00       	call   c10028e5 <pmm_alloc>
c1001d7f:	83 c4 10             	add    $0x10,%esp
c1001d82:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001d85:	83 ec 08             	sub    $0x8,%esp
c1001d88:	6a 00                	push   $0x0
c1001d8a:	68 00 20 00 00       	push   $0x2000
c1001d8f:	e8 51 0b 00 00       	call   c10028e5 <pmm_alloc>
c1001d94:	83 c4 10             	add    $0x10,%esp
c1001d97:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001d9a:	83 ec 08             	sub    $0x8,%esp
c1001d9d:	6a 02                	push   $0x2
c1001d9f:	68 00 30 00 00       	push   $0x3000
c1001da4:	e8 3c 0b 00 00       	call   c10028e5 <pmm_alloc>
c1001da9:	83 c4 10             	add    $0x10,%esp
c1001dac:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001daf:	83 ec 08             	sub    $0x8,%esp
c1001db2:	ff 75 f0             	pushl  -0x10(%ebp)
c1001db5:	68 e2 9f 00 c1       	push   $0xc1009fe2
c1001dba:	e8 f4 29 00 00       	call   c10047b3 <printk>
c1001dbf:	83 c4 10             	add    $0x10,%esp
c1001dc2:	83 ec 08             	sub    $0x8,%esp
c1001dc5:	ff 75 f4             	pushl  -0xc(%ebp)
c1001dc8:	68 f8 9f 00 c1       	push   $0xc1009ff8
c1001dcd:	e8 e1 29 00 00       	call   c10047b3 <printk>
c1001dd2:	83 c4 10             	add    $0x10,%esp
c1001dd5:	8b 0d e8 0c 01 c1    	mov    0xc1010ce8,%ecx
c1001ddb:	8b 15 08 0d 61 c1    	mov    0xc1610d08,%edx
c1001de1:	a1 14 0d 61 c1       	mov    0xc1610d14,%eax
c1001de6:	51                   	push   %ecx
c1001de7:	52                   	push   %edx
c1001de8:	50                   	push   %eax
c1001de9:	68 14 a0 00 c1       	push   $0xc100a014
c1001dee:	e8 c0 29 00 00       	call   c10047b3 <printk>
c1001df3:	83 c4 10             	add    $0x10,%esp
c1001df6:	83 ec 08             	sub    $0x8,%esp
c1001df9:	68 00 02 00 00       	push   $0x200
c1001dfe:	ff 75 f4             	pushl  -0xc(%ebp)
c1001e01:	e8 db 0b 00 00       	call   c10029e1 <pmm_free>
c1001e06:	83 c4 10             	add    $0x10,%esp
c1001e09:	83 ec 08             	sub    $0x8,%esp
c1001e0c:	68 00 20 00 00       	push   $0x2000
c1001e11:	ff 75 f0             	pushl  -0x10(%ebp)
c1001e14:	e8 c8 0b 00 00       	call   c10029e1 <pmm_free>
c1001e19:	83 c4 10             	add    $0x10,%esp
c1001e1c:	83 ec 08             	sub    $0x8,%esp
c1001e1f:	68 00 30 00 00       	push   $0x3000
c1001e24:	ff 75 ec             	pushl  -0x14(%ebp)
c1001e27:	e8 b5 0b 00 00       	call   c10029e1 <pmm_free>
c1001e2c:	83 c4 10             	add    $0x10,%esp
c1001e2f:	8b 0d e8 0c 01 c1    	mov    0xc1010ce8,%ecx
c1001e35:	8b 15 08 0d 61 c1    	mov    0xc1610d08,%edx
c1001e3b:	a1 14 0d 61 c1       	mov    0xc1610d14,%eax
c1001e40:	51                   	push   %ecx
c1001e41:	52                   	push   %edx
c1001e42:	50                   	push   %eax
c1001e43:	68 14 a0 00 c1       	push   $0xc100a014
c1001e48:	e8 66 29 00 00       	call   c10047b3 <printk>
c1001e4d:	83 c4 10             	add    $0x10,%esp
c1001e50:	90                   	nop
c1001e51:	c9                   	leave  
c1001e52:	c3                   	ret    

c1001e53 <test_vmm>:
c1001e53:	55                   	push   %ebp
c1001e54:	89 e5                	mov    %esp,%ebp
c1001e56:	83 ec 38             	sub    $0x38,%esp
c1001e59:	83 ec 0c             	sub    $0xc,%esp
c1001e5c:	68 5b a0 00 c1       	push   $0xc100a05b
c1001e61:	e8 4d 29 00 00       	call   c10047b3 <printk>
c1001e66:	83 c4 10             	add    $0x10,%esp
c1001e69:	83 ec 08             	sub    $0x8,%esp
c1001e6c:	6a 00                	push   $0x0
c1001e6e:	68 00 01 00 00       	push   $0x100
c1001e73:	e8 cb 0c 00 00       	call   c1002b43 <vmm_malloc>
c1001e78:	83 c4 10             	add    $0x10,%esp
c1001e7b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001e7e:	83 ec 08             	sub    $0x8,%esp
c1001e81:	6a 01                	push   $0x1
c1001e83:	68 00 20 00 00       	push   $0x2000
c1001e88:	e8 b6 0c 00 00       	call   c1002b43 <vmm_malloc>
c1001e8d:	83 c4 10             	add    $0x10,%esp
c1001e90:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001e93:	83 ec 08             	sub    $0x8,%esp
c1001e96:	6a 02                	push   $0x2
c1001e98:	68 00 30 00 00       	push   $0x3000
c1001e9d:	e8 a1 0c 00 00       	call   c1002b43 <vmm_malloc>
c1001ea2:	83 c4 10             	add    $0x10,%esp
c1001ea5:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001ea8:	83 ec 08             	sub    $0x8,%esp
c1001eab:	ff 75 f4             	pushl  -0xc(%ebp)
c1001eae:	68 e2 9f 00 c1       	push   $0xc1009fe2
c1001eb3:	e8 fb 28 00 00       	call   c10047b3 <printk>
c1001eb8:	83 c4 10             	add    $0x10,%esp
c1001ebb:	83 ec 08             	sub    $0x8,%esp
c1001ebe:	ff 75 f0             	pushl  -0x10(%ebp)
c1001ec1:	68 f8 9f 00 c1       	push   $0xc1009ff8
c1001ec6:	e8 e8 28 00 00       	call   c10047b3 <printk>
c1001ecb:	83 c4 10             	add    $0x10,%esp
c1001ece:	83 ec 08             	sub    $0x8,%esp
c1001ed1:	ff 75 ec             	pushl  -0x14(%ebp)
c1001ed4:	68 72 a0 00 c1       	push   $0xc100a072
c1001ed9:	e8 d5 28 00 00       	call   c10047b3 <printk>
c1001ede:	83 c4 10             	add    $0x10,%esp
c1001ee1:	83 ec 0c             	sub    $0xc,%esp
c1001ee4:	68 8d a0 00 c1       	push   $0xc100a08d
c1001ee9:	e8 c5 28 00 00       	call   c10047b3 <printk>
c1001eee:	83 c4 10             	add    $0x10,%esp
c1001ef1:	83 ec 08             	sub    $0x8,%esp
c1001ef4:	6a 00                	push   $0x0
c1001ef6:	68 00 01 00 00       	push   $0x100
c1001efb:	e8 43 0c 00 00       	call   c1002b43 <vmm_malloc>
c1001f00:	83 c4 10             	add    $0x10,%esp
c1001f03:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1001f06:	83 ec 08             	sub    $0x8,%esp
c1001f09:	6a 01                	push   $0x1
c1001f0b:	68 00 20 00 00       	push   $0x2000
c1001f10:	e8 2e 0c 00 00       	call   c1002b43 <vmm_malloc>
c1001f15:	83 c4 10             	add    $0x10,%esp
c1001f18:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1001f1b:	83 ec 08             	sub    $0x8,%esp
c1001f1e:	6a 02                	push   $0x2
c1001f20:	68 00 30 00 00       	push   $0x3000
c1001f25:	e8 19 0c 00 00       	call   c1002b43 <vmm_malloc>
c1001f2a:	83 c4 10             	add    $0x10,%esp
c1001f2d:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1001f30:	83 ec 08             	sub    $0x8,%esp
c1001f33:	ff 75 e8             	pushl  -0x18(%ebp)
c1001f36:	68 e2 9f 00 c1       	push   $0xc1009fe2
c1001f3b:	e8 73 28 00 00       	call   c10047b3 <printk>
c1001f40:	83 c4 10             	add    $0x10,%esp
c1001f43:	83 ec 08             	sub    $0x8,%esp
c1001f46:	ff 75 e4             	pushl  -0x1c(%ebp)
c1001f49:	68 f8 9f 00 c1       	push   $0xc1009ff8
c1001f4e:	e8 60 28 00 00       	call   c10047b3 <printk>
c1001f53:	83 c4 10             	add    $0x10,%esp
c1001f56:	83 ec 08             	sub    $0x8,%esp
c1001f59:	ff 75 e0             	pushl  -0x20(%ebp)
c1001f5c:	68 72 a0 00 c1       	push   $0xc100a072
c1001f61:	e8 4d 28 00 00       	call   c10047b3 <printk>
c1001f66:	83 c4 10             	add    $0x10,%esp
c1001f69:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1001f6c:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1001f6f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1001f72:	c6 00 ff             	movb   $0xff,(%eax)
c1001f75:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1001f78:	0f b6 00             	movzbl (%eax),%eax
c1001f7b:	0f b6 c0             	movzbl %al,%eax
c1001f7e:	83 ec 08             	sub    $0x8,%esp
c1001f81:	50                   	push   %eax
c1001f82:	68 a4 a0 00 c1       	push   $0xc100a0a4
c1001f87:	e8 27 28 00 00       	call   c10047b3 <printk>
c1001f8c:	83 c4 10             	add    $0x10,%esp
c1001f8f:	83 ec 08             	sub    $0x8,%esp
c1001f92:	68 00 01 00 00       	push   $0x100
c1001f97:	ff 75 f4             	pushl  -0xc(%ebp)
c1001f9a:	e8 c4 0c 00 00       	call   c1002c63 <vmm_free>
c1001f9f:	83 c4 10             	add    $0x10,%esp
c1001fa2:	83 ec 08             	sub    $0x8,%esp
c1001fa5:	68 00 20 00 00       	push   $0x2000
c1001faa:	ff 75 f0             	pushl  -0x10(%ebp)
c1001fad:	e8 b1 0c 00 00       	call   c1002c63 <vmm_free>
c1001fb2:	83 c4 10             	add    $0x10,%esp
c1001fb5:	83 ec 08             	sub    $0x8,%esp
c1001fb8:	68 00 30 00 00       	push   $0x3000
c1001fbd:	ff 75 ec             	pushl  -0x14(%ebp)
c1001fc0:	e8 9e 0c 00 00       	call   c1002c63 <vmm_free>
c1001fc5:	83 c4 10             	add    $0x10,%esp
c1001fc8:	83 ec 08             	sub    $0x8,%esp
c1001fcb:	6a 00                	push   $0x0
c1001fcd:	68 00 01 00 00       	push   $0x100
c1001fd2:	e8 6c 0b 00 00       	call   c1002b43 <vmm_malloc>
c1001fd7:	83 c4 10             	add    $0x10,%esp
c1001fda:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1001fdd:	83 ec 08             	sub    $0x8,%esp
c1001fe0:	6a 01                	push   $0x1
c1001fe2:	68 00 20 00 00       	push   $0x2000
c1001fe7:	e8 57 0b 00 00       	call   c1002b43 <vmm_malloc>
c1001fec:	83 c4 10             	add    $0x10,%esp
c1001fef:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1001ff2:	83 ec 08             	sub    $0x8,%esp
c1001ff5:	6a 02                	push   $0x2
c1001ff7:	68 00 30 00 00       	push   $0x3000
c1001ffc:	e8 42 0b 00 00       	call   c1002b43 <vmm_malloc>
c1002001:	83 c4 10             	add    $0x10,%esp
c1002004:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1002007:	83 ec 08             	sub    $0x8,%esp
c100200a:	ff 75 d8             	pushl  -0x28(%ebp)
c100200d:	68 e2 9f 00 c1       	push   $0xc1009fe2
c1002012:	e8 9c 27 00 00       	call   c10047b3 <printk>
c1002017:	83 c4 10             	add    $0x10,%esp
c100201a:	83 ec 08             	sub    $0x8,%esp
c100201d:	ff 75 d4             	pushl  -0x2c(%ebp)
c1002020:	68 f8 9f 00 c1       	push   $0xc1009ff8
c1002025:	e8 89 27 00 00       	call   c10047b3 <printk>
c100202a:	83 c4 10             	add    $0x10,%esp
c100202d:	83 ec 08             	sub    $0x8,%esp
c1002030:	ff 75 d0             	pushl  -0x30(%ebp)
c1002033:	68 72 a0 00 c1       	push   $0xc100a072
c1002038:	e8 76 27 00 00       	call   c10047b3 <printk>
c100203d:	83 c4 10             	add    $0x10,%esp
c1002040:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1002043:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1002046:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1002049:	c6 00 ff             	movb   $0xff,(%eax)
c100204c:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100204f:	0f b6 00             	movzbl (%eax),%eax
c1002052:	0f b6 c0             	movzbl %al,%eax
c1002055:	83 ec 08             	sub    $0x8,%esp
c1002058:	50                   	push   %eax
c1002059:	68 b0 a0 00 c1       	push   $0xc100a0b0
c100205e:	e8 50 27 00 00       	call   c10047b3 <printk>
c1002063:	83 c4 10             	add    $0x10,%esp
c1002066:	90                   	nop
c1002067:	c9                   	leave  
c1002068:	c3                   	ret    

c1002069 <test_schedule>:
c1002069:	55                   	push   %ebp
c100206a:	89 e5                	mov    %esp,%ebp
c100206c:	83 ec 18             	sub    $0x18,%esp
c100206f:	83 ec 04             	sub    $0x4,%esp
c1002072:	6a 00                	push   $0x0
c1002074:	68 bc a0 00 c1       	push   $0xc100a0bc
c1002079:	68 ea 20 00 c1       	push   $0xc10020ea
c100207e:	e8 4e 15 00 00       	call   c10035d1 <kernel_thread>
c1002083:	83 c4 10             	add    $0x10,%esp
c1002086:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002089:	83 ec 04             	sub    $0x4,%esp
c100208c:	6a 00                	push   $0x0
c100208e:	68 c3 a0 00 c1       	push   $0xc100a0c3
c1002093:	68 2b 21 00 c1       	push   $0xc100212b
c1002098:	e8 34 15 00 00       	call   c10035d1 <kernel_thread>
c100209d:	83 c4 10             	add    $0x10,%esp
c10020a0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10020a3:	83 ec 0c             	sub    $0xc,%esp
c10020a6:	68 ca a0 00 c1       	push   $0xc100a0ca
c10020ab:	e8 03 27 00 00       	call   c10047b3 <printk>
c10020b0:	83 c4 10             	add    $0x10,%esp
c10020b3:	e8 56 ec ff ff       	call   c1000d0e <intr_enable>
c10020b8:	83 ec 0c             	sub    $0xc,%esp
c10020bb:	68 ca a0 00 c1       	push   $0xc100a0ca
c10020c0:	e8 ee 26 00 00       	call   c10047b3 <printk>
c10020c5:	83 c4 10             	add    $0x10,%esp
c10020c8:	83 ec 0c             	sub    $0xc,%esp
c10020cb:	68 d1 a0 00 c1       	push   $0xc100a0d1
c10020d0:	e8 de 26 00 00       	call   c10047b3 <printk>
c10020d5:	83 c4 10             	add    $0x10,%esp
c10020d8:	83 ec 0c             	sub    $0xc,%esp
c10020db:	68 40 42 0f 00       	push   $0xf4240
c10020e0:	e8 87 00 00 00       	call   c100216c <delay>
c10020e5:	83 c4 10             	add    $0x10,%esp
c10020e8:	eb de                	jmp    c10020c8 <test_schedule+0x5f>

c10020ea <print_task1>:
c10020ea:	55                   	push   %ebp
c10020eb:	89 e5                	mov    %esp,%ebp
c10020ed:	83 ec 18             	sub    $0x18,%esp
c10020f0:	8b 45 08             	mov    0x8(%ebp),%eax
c10020f3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10020f6:	83 ec 0c             	sub    $0xc,%esp
c10020f9:	68 70 ec 00 c1       	push   $0xc100ec70
c10020fe:	e8 0e 2d 00 00       	call   c1004e11 <lock_acquire>
c1002103:	83 c4 10             	add    $0x10,%esp
c1002106:	83 ec 08             	sub    $0x8,%esp
c1002109:	ff 75 f4             	pushl  -0xc(%ebp)
c100210c:	68 d7 a0 00 c1       	push   $0xc100a0d7
c1002111:	e8 9d 26 00 00       	call   c10047b3 <printk>
c1002116:	83 c4 10             	add    $0x10,%esp
c1002119:	83 ec 0c             	sub    $0xc,%esp
c100211c:	68 40 42 0f 00       	push   $0xf4240
c1002121:	e8 46 00 00 00       	call   c100216c <delay>
c1002126:	83 c4 10             	add    $0x10,%esp
c1002129:	eb cb                	jmp    c10020f6 <print_task1+0xc>

c100212b <print_task2>:
c100212b:	55                   	push   %ebp
c100212c:	89 e5                	mov    %esp,%ebp
c100212e:	83 ec 18             	sub    $0x18,%esp
c1002131:	8b 45 08             	mov    0x8(%ebp),%eax
c1002134:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002137:	83 ec 0c             	sub    $0xc,%esp
c100213a:	68 70 ec 00 c1       	push   $0xc100ec70
c100213f:	e8 cd 2c 00 00       	call   c1004e11 <lock_acquire>
c1002144:	83 c4 10             	add    $0x10,%esp
c1002147:	83 ec 08             	sub    $0x8,%esp
c100214a:	ff 75 f4             	pushl  -0xc(%ebp)
c100214d:	68 d7 a0 00 c1       	push   $0xc100a0d7
c1002152:	e8 5c 26 00 00       	call   c10047b3 <printk>
c1002157:	83 c4 10             	add    $0x10,%esp
c100215a:	83 ec 0c             	sub    $0xc,%esp
c100215d:	68 40 42 0f 00       	push   $0xf4240
c1002162:	e8 05 00 00 00       	call   c100216c <delay>
c1002167:	83 c4 10             	add    $0x10,%esp
c100216a:	eb cb                	jmp    c1002137 <print_task2+0xc>

c100216c <delay>:
c100216c:	55                   	push   %ebp
c100216d:	89 e5                	mov    %esp,%ebp
c100216f:	83 ec 10             	sub    $0x10,%esp
c1002172:	8b 45 08             	mov    0x8(%ebp),%eax
c1002175:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002178:	eb 17                	jmp    c1002191 <delay+0x25>
c100217a:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c1002181:	eb 04                	jmp    c1002187 <delay+0x1b>
c1002183:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c1002187:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c100218b:	75 f6                	jne    c1002183 <delay+0x17>
c100218d:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c1002191:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1002195:	75 e3                	jne    c100217a <delay+0xe>
c1002197:	90                   	nop
c1002198:	90                   	nop
c1002199:	c9                   	leave  
c100219a:	c3                   	ret    

c100219b <test_user>:
c100219b:	55                   	push   %ebp
c100219c:	89 e5                	mov    %esp,%ebp
c100219e:	83 ec 08             	sub    $0x8,%esp
c10021a1:	83 ec 0c             	sub    $0xc,%esp
c10021a4:	68 b4 21 00 c1       	push   $0xc10021b4
c10021a9:	e8 62 1a 00 00       	call   c1003c10 <user_task_init>
c10021ae:	83 c4 10             	add    $0x10,%esp
c10021b1:	90                   	nop
c10021b2:	c9                   	leave  
c10021b3:	c3                   	ret    

c10021b4 <user_task_print>:
c10021b4:	55                   	push   %ebp
c10021b5:	89 e5                	mov    %esp,%ebp
c10021b7:	83 ec 08             	sub    $0x8,%esp
c10021ba:	83 ec 0c             	sub    $0xc,%esp
c10021bd:	68 da a0 00 c1       	push   $0xc100a0da
c10021c2:	e8 e2 f8 ff ff       	call   c1001aa9 <user_print_string>
c10021c7:	83 c4 10             	add    $0x10,%esp
c10021ca:	eb fe                	jmp    c10021ca <user_task_print+0x16>

c10021cc <printf>:
c10021cc:	55                   	push   %ebp
c10021cd:	89 e5                	mov    %esp,%ebp
c10021cf:	83 ec 38             	sub    $0x38,%esp
c10021d2:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c10021d6:	8d 45 0c             	lea    0xc(%ebp),%eax
c10021d9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10021dc:	e9 da 02 00 00       	jmp    c10024bb <printf+0x2ef>
c10021e1:	8b 45 08             	mov    0x8(%ebp),%eax
c10021e4:	0f b6 00             	movzbl (%eax),%eax
c10021e7:	3c 25                	cmp    $0x25,%al
c10021e9:	0f 85 aa 02 00 00    	jne    c1002499 <printf+0x2cd>
c10021ef:	90                   	nop
c10021f0:	8b 45 08             	mov    0x8(%ebp),%eax
c10021f3:	83 c0 01             	add    $0x1,%eax
c10021f6:	89 45 08             	mov    %eax,0x8(%ebp)
c10021f9:	8b 45 08             	mov    0x8(%ebp),%eax
c10021fc:	0f b6 00             	movzbl (%eax),%eax
c10021ff:	0f be c0             	movsbl %al,%eax
c1002202:	83 e8 30             	sub    $0x30,%eax
c1002205:	83 f8 48             	cmp    $0x48,%eax
c1002208:	0f 87 6f 02 00 00    	ja     c100247d <printf+0x2b1>
c100220e:	8b 04 85 0c a1 00 c1 	mov    -0x3eff5ef4(,%eax,4),%eax
c1002215:	ff e0                	jmp    *%eax
c1002217:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c100221b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100221e:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
c1002222:	88 45 d7             	mov    %al,-0x29(%ebp)
c1002225:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
c1002229:	83 ec 0c             	sub    $0xc,%esp
c100222c:	50                   	push   %eax
c100222d:	e8 59 f8 ff ff       	call   c1001a8b <user_print_char>
c1002232:	83 c4 10             	add    $0x10,%esp
c1002235:	e9 54 02 00 00       	jmp    c100248e <printf+0x2c2>
c100223a:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c100223e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002241:	8b 40 fc             	mov    -0x4(%eax),%eax
c1002244:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1002247:	83 ec 0c             	sub    $0xc,%esp
c100224a:	ff 75 dc             	pushl  -0x24(%ebp)
c100224d:	e8 57 f8 ff ff       	call   c1001aa9 <user_print_string>
c1002252:	83 c4 10             	add    $0x10,%esp
c1002255:	e9 34 02 00 00       	jmp    c100248e <printf+0x2c2>
c100225a:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c100225e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002261:	8b 40 fc             	mov    -0x4(%eax),%eax
c1002264:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1002267:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100226b:	74 19                	je     c1002286 <printf+0xba>
c100226d:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c1002271:	6a 01                	push   $0x1
c1002273:	50                   	push   %eax
c1002274:	6a 0a                	push   $0xa
c1002276:	ff 75 d8             	pushl  -0x28(%ebp)
c1002279:	e8 3e f8 ff ff       	call   c1001abc <user_print_num>
c100227e:	83 c4 10             	add    $0x10,%esp
c1002281:	e9 08 02 00 00       	jmp    c100248e <printf+0x2c2>
c1002286:	6a 00                	push   $0x0
c1002288:	6a 14                	push   $0x14
c100228a:	6a 0a                	push   $0xa
c100228c:	ff 75 d8             	pushl  -0x28(%ebp)
c100228f:	e8 28 f8 ff ff       	call   c1001abc <user_print_num>
c1002294:	83 c4 10             	add    $0x10,%esp
c1002297:	e9 f2 01 00 00       	jmp    c100248e <printf+0x2c2>
c100229c:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10022a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10022a3:	8b 40 fc             	mov    -0x4(%eax),%eax
c10022a6:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10022a9:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10022ad:	74 19                	je     c10022c8 <printf+0xfc>
c10022af:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c10022b3:	6a 01                	push   $0x1
c10022b5:	50                   	push   %eax
c10022b6:	6a 10                	push   $0x10
c10022b8:	ff 75 d0             	pushl  -0x30(%ebp)
c10022bb:	e8 fc f7 ff ff       	call   c1001abc <user_print_num>
c10022c0:	83 c4 10             	add    $0x10,%esp
c10022c3:	e9 c6 01 00 00       	jmp    c100248e <printf+0x2c2>
c10022c8:	6a 00                	push   $0x0
c10022ca:	6a 14                	push   $0x14
c10022cc:	6a 10                	push   $0x10
c10022ce:	ff 75 d0             	pushl  -0x30(%ebp)
c10022d1:	e8 e6 f7 ff ff       	call   c1001abc <user_print_num>
c10022d6:	83 c4 10             	add    $0x10,%esp
c10022d9:	e9 b0 01 00 00       	jmp    c100248e <printf+0x2c2>
c10022de:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c10022e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10022e5:	8b 50 fc             	mov    -0x4(%eax),%edx
c10022e8:	8b 40 f8             	mov    -0x8(%eax),%eax
c10022eb:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10022ee:	89 55 cc             	mov    %edx,-0x34(%ebp)
c10022f1:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10022f5:	74 1a                	je     c1002311 <printf+0x145>
c10022f7:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
c10022fb:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10022fe:	6a 01                	push   $0x1
c1002300:	52                   	push   %edx
c1002301:	6a 10                	push   $0x10
c1002303:	50                   	push   %eax
c1002304:	e8 b3 f7 ff ff       	call   c1001abc <user_print_num>
c1002309:	83 c4 10             	add    $0x10,%esp
c100230c:	e9 7d 01 00 00       	jmp    c100248e <printf+0x2c2>
c1002311:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1002314:	6a 00                	push   $0x0
c1002316:	6a 14                	push   $0x14
c1002318:	6a 10                	push   $0x10
c100231a:	50                   	push   %eax
c100231b:	e8 9c f7 ff ff       	call   c1001abc <user_print_num>
c1002320:	83 c4 10             	add    $0x10,%esp
c1002323:	e9 66 01 00 00       	jmp    c100248e <printf+0x2c2>
c1002328:	8b 45 08             	mov    0x8(%ebp),%eax
c100232b:	83 c0 01             	add    $0x1,%eax
c100232e:	89 45 08             	mov    %eax,0x8(%ebp)
c1002331:	8b 45 08             	mov    0x8(%ebp),%eax
c1002334:	0f b6 00             	movzbl (%eax),%eax
c1002337:	0f be c0             	movsbl %al,%eax
c100233a:	83 f8 78             	cmp    $0x78,%eax
c100233d:	0f 84 80 00 00 00    	je     c10023c3 <printf+0x1f7>
c1002343:	83 f8 78             	cmp    $0x78,%eax
c1002346:	0f 8f f9 00 00 00    	jg     c1002445 <printf+0x279>
c100234c:	83 f8 6c             	cmp    $0x6c,%eax
c100234f:	0f 84 ac 00 00 00    	je     c1002401 <printf+0x235>
c1002355:	83 f8 6c             	cmp    $0x6c,%eax
c1002358:	0f 8f e7 00 00 00    	jg     c1002445 <printf+0x279>
c100235e:	83 f8 64             	cmp    $0x64,%eax
c1002361:	74 1c                	je     c100237f <printf+0x1b3>
c1002363:	83 f8 64             	cmp    $0x64,%eax
c1002366:	0f 8f d9 00 00 00    	jg     c1002445 <printf+0x279>
c100236c:	83 f8 4c             	cmp    $0x4c,%eax
c100236f:	0f 84 8c 00 00 00    	je     c1002401 <printf+0x235>
c1002375:	83 f8 58             	cmp    $0x58,%eax
c1002378:	74 49                	je     c10023c3 <printf+0x1f7>
c100237a:	e9 c6 00 00 00       	jmp    c1002445 <printf+0x279>
c100237f:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1002383:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002386:	8b 40 fc             	mov    -0x4(%eax),%eax
c1002389:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100238c:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1002390:	74 1a                	je     c10023ac <printf+0x1e0>
c1002392:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
c1002396:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002399:	6a 01                	push   $0x1
c100239b:	52                   	push   %edx
c100239c:	6a 0a                	push   $0xa
c100239e:	50                   	push   %eax
c100239f:	e8 18 f7 ff ff       	call   c1001abc <user_print_num>
c10023a4:	83 c4 10             	add    $0x10,%esp
c10023a7:	e9 9a 00 00 00       	jmp    c1002446 <printf+0x27a>
c10023ac:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10023af:	6a 00                	push   $0x0
c10023b1:	6a 14                	push   $0x14
c10023b3:	6a 0a                	push   $0xa
c10023b5:	50                   	push   %eax
c10023b6:	e8 01 f7 ff ff       	call   c1001abc <user_print_num>
c10023bb:	83 c4 10             	add    $0x10,%esp
c10023be:	e9 83 00 00 00       	jmp    c1002446 <printf+0x27a>
c10023c3:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10023c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10023ca:	8b 40 fc             	mov    -0x4(%eax),%eax
c10023cd:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10023d0:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10023d4:	74 17                	je     c10023ed <printf+0x221>
c10023d6:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
c10023da:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10023dd:	6a 01                	push   $0x1
c10023df:	52                   	push   %edx
c10023e0:	6a 10                	push   $0x10
c10023e2:	50                   	push   %eax
c10023e3:	e8 d4 f6 ff ff       	call   c1001abc <user_print_num>
c10023e8:	83 c4 10             	add    $0x10,%esp
c10023eb:	eb 59                	jmp    c1002446 <printf+0x27a>
c10023ed:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10023f0:	6a 00                	push   $0x0
c10023f2:	6a 14                	push   $0x14
c10023f4:	6a 10                	push   $0x10
c10023f6:	50                   	push   %eax
c10023f7:	e8 c0 f6 ff ff       	call   c1001abc <user_print_num>
c10023fc:	83 c4 10             	add    $0x10,%esp
c10023ff:	eb 45                	jmp    c1002446 <printf+0x27a>
c1002401:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1002405:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002408:	8b 50 fc             	mov    -0x4(%eax),%edx
c100240b:	8b 40 f8             	mov    -0x8(%eax),%eax
c100240e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002411:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1002414:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1002418:	74 17                	je     c1002431 <printf+0x265>
c100241a:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
c100241e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002421:	6a 01                	push   $0x1
c1002423:	52                   	push   %edx
c1002424:	6a 10                	push   $0x10
c1002426:	50                   	push   %eax
c1002427:	e8 90 f6 ff ff       	call   c1001abc <user_print_num>
c100242c:	83 c4 10             	add    $0x10,%esp
c100242f:	eb 15                	jmp    c1002446 <printf+0x27a>
c1002431:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002434:	6a 00                	push   $0x0
c1002436:	6a 14                	push   $0x14
c1002438:	6a 10                	push   $0x10
c100243a:	50                   	push   %eax
c100243b:	e8 7c f6 ff ff       	call   c1001abc <user_print_num>
c1002440:	83 c4 10             	add    $0x10,%esp
c1002443:	eb 01                	jmp    c1002446 <printf+0x27a>
c1002445:	90                   	nop
c1002446:	eb 46                	jmp    c100248e <printf+0x2c2>
c1002448:	8b 45 08             	mov    0x8(%ebp),%eax
c100244b:	0f b6 00             	movzbl (%eax),%eax
c100244e:	0f be c0             	movsbl %al,%eax
c1002451:	83 e8 30             	sub    $0x30,%eax
c1002454:	89 c2                	mov    %eax,%edx
c1002456:	89 d0                	mov    %edx,%eax
c1002458:	c1 e0 02             	shl    $0x2,%eax
c100245b:	01 d0                	add    %edx,%eax
c100245d:	01 c0                	add    %eax,%eax
c100245f:	89 c2                	mov    %eax,%edx
c1002461:	8b 45 08             	mov    0x8(%ebp),%eax
c1002464:	83 c0 01             	add    $0x1,%eax
c1002467:	89 45 08             	mov    %eax,0x8(%ebp)
c100246a:	8b 45 08             	mov    0x8(%ebp),%eax
c100246d:	0f b6 00             	movzbl (%eax),%eax
c1002470:	01 d0                	add    %edx,%eax
c1002472:	83 e8 30             	sub    $0x30,%eax
c1002475:	88 45 f3             	mov    %al,-0xd(%ebp)
c1002478:	e9 73 fd ff ff       	jmp    c10021f0 <printf+0x24>
c100247d:	83 ec 0c             	sub    $0xc,%esp
c1002480:	68 ec a0 00 c1       	push   $0xc100a0ec
c1002485:	e8 1f f6 ff ff       	call   c1001aa9 <user_print_string>
c100248a:	83 c4 10             	add    $0x10,%esp
c100248d:	90                   	nop
c100248e:	8b 45 08             	mov    0x8(%ebp),%eax
c1002491:	83 c0 01             	add    $0x1,%eax
c1002494:	89 45 08             	mov    %eax,0x8(%ebp)
c1002497:	eb 1e                	jmp    c10024b7 <printf+0x2eb>
c1002499:	8b 45 08             	mov    0x8(%ebp),%eax
c100249c:	0f b6 00             	movzbl (%eax),%eax
c100249f:	0f be c0             	movsbl %al,%eax
c10024a2:	83 ec 0c             	sub    $0xc,%esp
c10024a5:	50                   	push   %eax
c10024a6:	e8 e0 f5 ff ff       	call   c1001a8b <user_print_char>
c10024ab:	83 c4 10             	add    $0x10,%esp
c10024ae:	8b 45 08             	mov    0x8(%ebp),%eax
c10024b1:	83 c0 01             	add    $0x1,%eax
c10024b4:	89 45 08             	mov    %eax,0x8(%ebp)
c10024b7:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c10024bb:	8b 45 08             	mov    0x8(%ebp),%eax
c10024be:	0f b6 00             	movzbl (%eax),%eax
c10024c1:	84 c0                	test   %al,%al
c10024c3:	0f 85 18 fd ff ff    	jne    c10021e1 <printf+0x15>
c10024c9:	90                   	nop
c10024ca:	90                   	nop
c10024cb:	c9                   	leave  
c10024cc:	c3                   	ret    

c10024cd <pmm_init>:
c10024cd:	55                   	push   %ebp
c10024ce:	89 e5                	mov    %esp,%ebp
c10024d0:	83 ec 38             	sub    $0x38,%esp
c10024d3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10024da:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10024e1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10024e8:	c7 45 d4 04 80 00 c0 	movl   $0xc0008004,-0x2c(%ebp)
c10024ef:	b8 00 80 00 c0       	mov    $0xc0008000,%eax
c10024f4:	8b 00                	mov    (%eax),%eax
c10024f6:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10024f9:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002500:	e9 98 02 00 00       	jmp    c100279d <pmm_init+0x2d0>
c1002505:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002508:	89 d0                	mov    %edx,%eax
c100250a:	c1 e0 02             	shl    $0x2,%eax
c100250d:	01 d0                	add    %edx,%eax
c100250f:	c1 e0 02             	shl    $0x2,%eax
c1002512:	89 c2                	mov    %eax,%edx
c1002514:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1002517:	01 d0                	add    %edx,%eax
c1002519:	8b 50 04             	mov    0x4(%eax),%edx
c100251c:	8b 00                	mov    (%eax),%eax
c100251e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002521:	e9 40 02 00 00       	jmp    c1002766 <pmm_init+0x299>
c1002526:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002529:	85 c0                	test   %eax,%eax
c100252b:	0f 88 2e 02 00 00    	js     c100275f <pmm_init+0x292>
c1002531:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002534:	89 d0                	mov    %edx,%eax
c1002536:	c1 e0 02             	shl    $0x2,%eax
c1002539:	01 d0                	add    %edx,%eax
c100253b:	c1 e0 02             	shl    $0x2,%eax
c100253e:	89 c2                	mov    %eax,%edx
c1002540:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1002543:	01 d0                	add    %edx,%eax
c1002545:	8b 40 10             	mov    0x10(%eax),%eax
c1002548:	83 f8 01             	cmp    $0x1,%eax
c100254b:	75 59                	jne    c10025a6 <pmm_init+0xd9>
c100254d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002550:	c1 e8 0c             	shr    $0xc,%eax
c1002553:	89 c2                	mov    %eax,%edx
c1002555:	89 d0                	mov    %edx,%eax
c1002557:	01 c0                	add    %eax,%eax
c1002559:	01 d0                	add    %edx,%eax
c100255b:	c1 e0 02             	shl    $0x2,%eax
c100255e:	05 00 0d 01 c1       	add    $0xc1010d00,%eax
c1002563:	c6 00 00             	movb   $0x0,(%eax)
c1002566:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002569:	c1 e8 0c             	shr    $0xc,%eax
c100256c:	89 c2                	mov    %eax,%edx
c100256e:	89 d0                	mov    %edx,%eax
c1002570:	01 c0                	add    %eax,%eax
c1002572:	01 d0                	add    %edx,%eax
c1002574:	c1 e0 02             	shl    $0x2,%eax
c1002577:	05 04 0d 01 c1       	add    $0xc1010d04,%eax
c100257c:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c1002582:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002585:	c1 e8 0c             	shr    $0xc,%eax
c1002588:	89 c2                	mov    %eax,%edx
c100258a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100258d:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002592:	89 c1                	mov    %eax,%ecx
c1002594:	89 d0                	mov    %edx,%eax
c1002596:	01 c0                	add    %eax,%eax
c1002598:	01 d0                	add    %edx,%eax
c100259a:	c1 e0 02             	shl    $0x2,%eax
c100259d:	05 08 0d 01 c1       	add    $0xc1010d08,%eax
c10025a2:	89 08                	mov    %ecx,(%eax)
c10025a4:	eb 57                	jmp    c10025fd <pmm_init+0x130>
c10025a6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025a9:	c1 e8 0c             	shr    $0xc,%eax
c10025ac:	89 c2                	mov    %eax,%edx
c10025ae:	89 d0                	mov    %edx,%eax
c10025b0:	01 c0                	add    %eax,%eax
c10025b2:	01 d0                	add    %edx,%eax
c10025b4:	c1 e0 02             	shl    $0x2,%eax
c10025b7:	05 00 0d 01 c1       	add    $0xc1010d00,%eax
c10025bc:	c6 00 08             	movb   $0x8,(%eax)
c10025bf:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025c2:	c1 e8 0c             	shr    $0xc,%eax
c10025c5:	89 c2                	mov    %eax,%edx
c10025c7:	89 d0                	mov    %edx,%eax
c10025c9:	01 c0                	add    %eax,%eax
c10025cb:	01 d0                	add    %edx,%eax
c10025cd:	c1 e0 02             	shl    $0x2,%eax
c10025d0:	05 04 0d 01 c1       	add    $0xc1010d04,%eax
c10025d5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10025db:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025de:	c1 e8 0c             	shr    $0xc,%eax
c10025e1:	89 c2                	mov    %eax,%edx
c10025e3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025e6:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10025eb:	89 c1                	mov    %eax,%ecx
c10025ed:	89 d0                	mov    %edx,%eax
c10025ef:	01 c0                	add    %eax,%eax
c10025f1:	01 d0                	add    %edx,%eax
c10025f3:	c1 e0 02             	shl    $0x2,%eax
c10025f6:	05 08 0d 01 c1       	add    $0xc1010d08,%eax
c10025fb:	89 08                	mov    %ecx,(%eax)
c10025fd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002600:	c1 e8 0c             	shr    $0xc,%eax
c1002603:	89 c2                	mov    %eax,%edx
c1002605:	89 d0                	mov    %edx,%eax
c1002607:	01 c0                	add    %eax,%eax
c1002609:	01 d0                	add    %edx,%eax
c100260b:	c1 e0 02             	shl    $0x2,%eax
c100260e:	05 08 0d 01 c1       	add    $0xc1010d08,%eax
c1002613:	8b 00                	mov    (%eax),%eax
c1002615:	3d ff ff ff 00       	cmp    $0xffffff,%eax
c100261a:	77 62                	ja     c100267e <pmm_init+0x1b1>
c100261c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100261f:	c1 e8 0c             	shr    $0xc,%eax
c1002622:	89 c1                	mov    %eax,%ecx
c1002624:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002627:	c1 e8 0c             	shr    $0xc,%eax
c100262a:	89 c2                	mov    %eax,%edx
c100262c:	89 c8                	mov    %ecx,%eax
c100262e:	01 c0                	add    %eax,%eax
c1002630:	01 c8                	add    %ecx,%eax
c1002632:	c1 e0 02             	shl    $0x2,%eax
c1002635:	05 00 0d 01 c1       	add    $0xc1010d00,%eax
c100263a:	0f b6 08             	movzbl (%eax),%ecx
c100263d:	89 d0                	mov    %edx,%eax
c100263f:	01 c0                	add    %eax,%eax
c1002641:	01 d0                	add    %edx,%eax
c1002643:	c1 e0 02             	shl    $0x2,%eax
c1002646:	05 00 0d 01 c1       	add    $0xc1010d00,%eax
c100264b:	88 08                	mov    %cl,(%eax)
c100264d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002650:	c1 e8 0c             	shr    $0xc,%eax
c1002653:	89 c2                	mov    %eax,%edx
c1002655:	89 d0                	mov    %edx,%eax
c1002657:	01 c0                	add    %eax,%eax
c1002659:	01 d0                	add    %edx,%eax
c100265b:	c1 e0 02             	shl    $0x2,%eax
c100265e:	05 04 0d 01 c1       	add    $0xc1010d04,%eax
c1002663:	8b 00                	mov    (%eax),%eax
c1002665:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002668:	75 07                	jne    c1002671 <pmm_init+0x1a4>
c100266a:	b8 01 00 00 00       	mov    $0x1,%eax
c100266f:	eb 05                	jmp    c1002676 <pmm_init+0x1a9>
c1002671:	b8 00 00 00 00       	mov    $0x0,%eax
c1002676:	01 45 f4             	add    %eax,-0xc(%ebp)
c1002679:	e9 e1 00 00 00       	jmp    c100275f <pmm_init+0x292>
c100267e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002681:	c1 e8 0c             	shr    $0xc,%eax
c1002684:	89 c2                	mov    %eax,%edx
c1002686:	89 d0                	mov    %edx,%eax
c1002688:	01 c0                	add    %eax,%eax
c100268a:	01 d0                	add    %edx,%eax
c100268c:	c1 e0 02             	shl    $0x2,%eax
c100268f:	05 08 0d 01 c1       	add    $0xc1010d08,%eax
c1002694:	8b 00                	mov    (%eax),%eax
c1002696:	3d ff ff ff 37       	cmp    $0x37ffffff,%eax
c100269b:	77 62                	ja     c10026ff <pmm_init+0x232>
c100269d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026a0:	c1 e8 0c             	shr    $0xc,%eax
c10026a3:	89 c2                	mov    %eax,%edx
c10026a5:	89 d0                	mov    %edx,%eax
c10026a7:	01 c0                	add    %eax,%eax
c10026a9:	01 d0                	add    %edx,%eax
c10026ab:	c1 e0 02             	shl    $0x2,%eax
c10026ae:	05 00 0d 01 c1       	add    $0xc1010d00,%eax
c10026b3:	0f b6 08             	movzbl (%eax),%ecx
c10026b6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026b9:	c1 e8 0c             	shr    $0xc,%eax
c10026bc:	89 c2                	mov    %eax,%edx
c10026be:	83 c9 10             	or     $0x10,%ecx
c10026c1:	89 d0                	mov    %edx,%eax
c10026c3:	01 c0                	add    %eax,%eax
c10026c5:	01 d0                	add    %edx,%eax
c10026c7:	c1 e0 02             	shl    $0x2,%eax
c10026ca:	05 00 0d 01 c1       	add    $0xc1010d00,%eax
c10026cf:	88 08                	mov    %cl,(%eax)
c10026d1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026d4:	c1 e8 0c             	shr    $0xc,%eax
c10026d7:	89 c2                	mov    %eax,%edx
c10026d9:	89 d0                	mov    %edx,%eax
c10026db:	01 c0                	add    %eax,%eax
c10026dd:	01 d0                	add    %edx,%eax
c10026df:	c1 e0 02             	shl    $0x2,%eax
c10026e2:	05 04 0d 01 c1       	add    $0xc1010d04,%eax
c10026e7:	8b 00                	mov    (%eax),%eax
c10026e9:	83 f8 ff             	cmp    $0xffffffff,%eax
c10026ec:	75 07                	jne    c10026f5 <pmm_init+0x228>
c10026ee:	b8 01 00 00 00       	mov    $0x1,%eax
c10026f3:	eb 05                	jmp    c10026fa <pmm_init+0x22d>
c10026f5:	b8 00 00 00 00       	mov    $0x0,%eax
c10026fa:	01 45 f0             	add    %eax,-0x10(%ebp)
c10026fd:	eb 60                	jmp    c100275f <pmm_init+0x292>
c10026ff:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002702:	c1 e8 0c             	shr    $0xc,%eax
c1002705:	89 c2                	mov    %eax,%edx
c1002707:	89 d0                	mov    %edx,%eax
c1002709:	01 c0                	add    %eax,%eax
c100270b:	01 d0                	add    %edx,%eax
c100270d:	c1 e0 02             	shl    $0x2,%eax
c1002710:	05 00 0d 01 c1       	add    $0xc1010d00,%eax
c1002715:	0f b6 08             	movzbl (%eax),%ecx
c1002718:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100271b:	c1 e8 0c             	shr    $0xc,%eax
c100271e:	89 c2                	mov    %eax,%edx
c1002720:	83 c9 20             	or     $0x20,%ecx
c1002723:	89 d0                	mov    %edx,%eax
c1002725:	01 c0                	add    %eax,%eax
c1002727:	01 d0                	add    %edx,%eax
c1002729:	c1 e0 02             	shl    $0x2,%eax
c100272c:	05 00 0d 01 c1       	add    $0xc1010d00,%eax
c1002731:	88 08                	mov    %cl,(%eax)
c1002733:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002736:	c1 e8 0c             	shr    $0xc,%eax
c1002739:	89 c2                	mov    %eax,%edx
c100273b:	89 d0                	mov    %edx,%eax
c100273d:	01 c0                	add    %eax,%eax
c100273f:	01 d0                	add    %edx,%eax
c1002741:	c1 e0 02             	shl    $0x2,%eax
c1002744:	05 04 0d 01 c1       	add    $0xc1010d04,%eax
c1002749:	8b 00                	mov    (%eax),%eax
c100274b:	83 f8 ff             	cmp    $0xffffffff,%eax
c100274e:	75 07                	jne    c1002757 <pmm_init+0x28a>
c1002750:	b8 01 00 00 00       	mov    $0x1,%eax
c1002755:	eb 05                	jmp    c100275c <pmm_init+0x28f>
c1002757:	b8 00 00 00 00       	mov    $0x0,%eax
c100275c:	01 45 ec             	add    %eax,-0x14(%ebp)
c100275f:	81 45 e0 00 10 00 00 	addl   $0x1000,-0x20(%ebp)
c1002766:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002769:	89 d0                	mov    %edx,%eax
c100276b:	c1 e0 02             	shl    $0x2,%eax
c100276e:	01 d0                	add    %edx,%eax
c1002770:	c1 e0 02             	shl    $0x2,%eax
c1002773:	89 c2                	mov    %eax,%edx
c1002775:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1002778:	01 d0                	add    %edx,%eax
c100277a:	8b 50 0c             	mov    0xc(%eax),%edx
c100277d:	8b 40 08             	mov    0x8(%eax),%eax
c1002780:	89 c2                	mov    %eax,%edx
c1002782:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002785:	01 d0                	add    %edx,%eax
c1002787:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100278c:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c100278f:	0f 82 91 fd ff ff    	jb     c1002526 <pmm_init+0x59>
c1002795:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c1002799:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c100279d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c10027a1:	0f 85 5e fd ff ff    	jne    c1002505 <pmm_init+0x38>
c10027a7:	c7 05 10 0d 61 c1 00 	movl   $0x1000,0xc1610d10
c10027ae:	10 00 00 
c10027b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10027b4:	a3 14 0d 61 c1       	mov    %eax,0xc1610d14
c10027b9:	c7 05 0c 0d 61 c1 00 	movl   $0xc1010d00,0xc1610d0c
c10027c0:	0d 01 c1 
c10027c3:	c7 05 04 0d 61 c1 00 	movl   $0x37000,0xc1610d04
c10027ca:	70 03 00 
c10027cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10027d0:	a3 08 0d 61 c1       	mov    %eax,0xc1610d08
c10027d5:	8b 15 10 0d 61 c1    	mov    0xc1610d10,%edx
c10027db:	89 d0                	mov    %edx,%eax
c10027dd:	01 c0                	add    %eax,%eax
c10027df:	01 d0                	add    %edx,%eax
c10027e1:	c1 e0 02             	shl    $0x2,%eax
c10027e4:	05 00 0d 01 c1       	add    $0xc1010d00,%eax
c10027e9:	a3 00 0d 61 c1       	mov    %eax,0xc1610d00
c10027ee:	c7 05 e4 0c 01 c1 00 	movl   $0x48000,0xc1010ce4
c10027f5:	80 04 00 
c10027f8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10027fb:	a3 e8 0c 01 c1       	mov    %eax,0xc1010ce8
c1002800:	8b 15 04 0d 61 c1    	mov    0xc1610d04,%edx
c1002806:	a1 10 0d 61 c1       	mov    0xc1610d10,%eax
c100280b:	01 c2                	add    %eax,%edx
c100280d:	89 d0                	mov    %edx,%eax
c100280f:	01 c0                	add    %eax,%eax
c1002811:	01 d0                	add    %edx,%eax
c1002813:	c1 e0 02             	shl    $0x2,%eax
c1002816:	05 00 0d 01 c1       	add    $0xc1010d00,%eax
c100281b:	a3 e0 0c 01 c1       	mov    %eax,0xc1010ce0
c1002820:	c7 45 dc 00 00 00 01 	movl   $0x1000000,-0x24(%ebp)
c1002827:	eb 39                	jmp    c1002862 <pmm_init+0x395>
c1002829:	8b 0d 00 0d 61 c1    	mov    0xc1610d00,%ecx
c100282f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002832:	2d 00 00 00 01       	sub    $0x1000000,%eax
c1002837:	c1 e8 0c             	shr    $0xc,%eax
c100283a:	89 c2                	mov    %eax,%edx
c100283c:	89 d0                	mov    %edx,%eax
c100283e:	01 c0                	add    %eax,%eax
c1002840:	01 d0                	add    %edx,%eax
c1002842:	c1 e0 02             	shl    $0x2,%eax
c1002845:	01 c8                	add    %ecx,%eax
c1002847:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c100284e:	a1 08 0d 61 c1       	mov    0xc1610d08,%eax
c1002853:	83 e8 01             	sub    $0x1,%eax
c1002856:	a3 08 0d 61 c1       	mov    %eax,0xc1610d08
c100285b:	81 45 dc 00 10 00 00 	addl   $0x1000,-0x24(%ebp)
c1002862:	b8 e0 35 a1 c1       	mov    $0xc1a135e0,%eax
c1002867:	05 ff 0f 00 40       	add    $0x40000fff,%eax
c100286c:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002871:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1002874:	72 b3                	jb     c1002829 <pmm_init+0x35c>
c1002876:	c7 45 d8 00 e0 ff 37 	movl   $0x37ffe000,-0x28(%ebp)
c100287d:	eb 39                	jmp    c10028b8 <pmm_init+0x3eb>
c100287f:	8b 0d 00 0d 61 c1    	mov    0xc1610d00,%ecx
c1002885:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1002888:	2d 00 00 00 01       	sub    $0x1000000,%eax
c100288d:	c1 e8 0c             	shr    $0xc,%eax
c1002890:	89 c2                	mov    %eax,%edx
c1002892:	89 d0                	mov    %edx,%eax
c1002894:	01 c0                	add    %eax,%eax
c1002896:	01 d0                	add    %edx,%eax
c1002898:	c1 e0 02             	shl    $0x2,%eax
c100289b:	01 c8                	add    %ecx,%eax
c100289d:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10028a4:	a1 08 0d 61 c1       	mov    0xc1610d08,%eax
c10028a9:	83 e8 01             	sub    $0x1,%eax
c10028ac:	a3 08 0d 61 c1       	mov    %eax,0xc1610d08
c10028b1:	81 45 d8 00 10 00 00 	addl   $0x1000,-0x28(%ebp)
c10028b8:	81 7d d8 ff ff ff 37 	cmpl   $0x37ffffff,-0x28(%ebp)
c10028bf:	76 be                	jbe    c100287f <pmm_init+0x3b2>
c10028c1:	8b 0d e8 0c 01 c1    	mov    0xc1010ce8,%ecx
c10028c7:	8b 15 08 0d 61 c1    	mov    0xc1610d08,%edx
c10028cd:	a1 14 0d 61 c1       	mov    0xc1610d14,%eax
c10028d2:	51                   	push   %ecx
c10028d3:	52                   	push   %edx
c10028d4:	50                   	push   %eax
c10028d5:	68 30 a2 00 c1       	push   $0xc100a230
c10028da:	e8 d4 1e 00 00       	call   c10047b3 <printk>
c10028df:	83 c4 10             	add    $0x10,%esp
c10028e2:	90                   	nop
c10028e3:	c9                   	leave  
c10028e4:	c3                   	ret    

c10028e5 <pmm_alloc>:
c10028e5:	55                   	push   %ebp
c10028e6:	89 e5                	mov    %esp,%ebp
c10028e8:	83 ec 24             	sub    $0x24,%esp
c10028eb:	8b 45 0c             	mov    0xc(%ebp),%eax
c10028ee:	88 45 dc             	mov    %al,-0x24(%ebp)
c10028f1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10028f8:	8b 45 08             	mov    0x8(%ebp),%eax
c10028fb:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002900:	c1 e8 0c             	shr    $0xc,%eax
c1002903:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002906:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
c100290a:	75 09                	jne    c1002915 <pmm_alloc+0x30>
c100290c:	c7 45 f0 0c 0d 61 c1 	movl   $0xc1610d0c,-0x10(%ebp)
c1002913:	eb 16                	jmp    c100292b <pmm_alloc+0x46>
c1002915:	80 7d dc 01          	cmpb   $0x1,-0x24(%ebp)
c1002919:	75 09                	jne    c1002924 <pmm_alloc+0x3f>
c100291b:	c7 45 f0 00 0d 61 c1 	movl   $0xc1610d00,-0x10(%ebp)
c1002922:	eb 07                	jmp    c100292b <pmm_alloc+0x46>
c1002924:	c7 45 f0 e0 0c 01 c1 	movl   $0xc1010ce0,-0x10(%ebp)
c100292b:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1002932:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002939:	eb 43                	jmp    c100297e <pmm_alloc+0x99>
c100293b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100293e:	8b 08                	mov    (%eax),%ecx
c1002940:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002943:	89 d0                	mov    %edx,%eax
c1002945:	01 c0                	add    %eax,%eax
c1002947:	01 d0                	add    %edx,%eax
c1002949:	c1 e0 02             	shl    $0x2,%eax
c100294c:	01 c8                	add    %ecx,%eax
c100294e:	8b 40 04             	mov    0x4(%eax),%eax
c1002951:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002954:	75 0c                	jne    c1002962 <pmm_alloc+0x7d>
c1002956:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100295a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100295d:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002960:	eb 10                	jmp    c1002972 <pmm_alloc+0x8d>
c1002962:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002965:	83 c0 01             	add    $0x1,%eax
c1002968:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100296b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002972:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002975:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002978:	74 11                	je     c100298b <pmm_alloc+0xa6>
c100297a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c100297e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002981:	8b 40 04             	mov    0x4(%eax),%eax
c1002984:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c1002987:	72 b2                	jb     c100293b <pmm_alloc+0x56>
c1002989:	eb 01                	jmp    c100298c <pmm_alloc+0xa7>
c100298b:	90                   	nop
c100298c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100298f:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002992:	eb 2d                	jmp    c10029c1 <pmm_alloc+0xdc>
c1002994:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002997:	8b 08                	mov    (%eax),%ecx
c1002999:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100299c:	89 d0                	mov    %edx,%eax
c100299e:	01 c0                	add    %eax,%eax
c10029a0:	01 d0                	add    %edx,%eax
c10029a2:	c1 e0 02             	shl    $0x2,%eax
c10029a5:	01 c8                	add    %ecx,%eax
c10029a7:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10029ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10029b1:	8b 40 08             	mov    0x8(%eax),%eax
c10029b4:	8d 50 ff             	lea    -0x1(%eax),%edx
c10029b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10029ba:	89 50 08             	mov    %edx,0x8(%eax)
c10029bd:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c10029c1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10029c4:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c10029c7:	76 cb                	jbe    c1002994 <pmm_alloc+0xaf>
c10029c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10029cc:	8b 08                	mov    (%eax),%ecx
c10029ce:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10029d1:	89 d0                	mov    %edx,%eax
c10029d3:	01 c0                	add    %eax,%eax
c10029d5:	01 d0                	add    %edx,%eax
c10029d7:	c1 e0 02             	shl    $0x2,%eax
c10029da:	01 c8                	add    %ecx,%eax
c10029dc:	8b 40 08             	mov    0x8(%eax),%eax
c10029df:	c9                   	leave  
c10029e0:	c3                   	ret    

c10029e1 <pmm_free>:
c10029e1:	55                   	push   %ebp
c10029e2:	89 e5                	mov    %esp,%ebp
c10029e4:	83 ec 20             	sub    $0x20,%esp
c10029e7:	8b 45 0c             	mov    0xc(%ebp),%eax
c10029ea:	05 ff 0f 00 00       	add    $0xfff,%eax
c10029ef:	c1 e8 0c             	shr    $0xc,%eax
c10029f2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10029f5:	81 7d 08 ff ff ff 00 	cmpl   $0xffffff,0x8(%ebp)
c10029fc:	77 09                	ja     c1002a07 <pmm_free+0x26>
c10029fe:	c7 45 fc 0c 0d 61 c1 	movl   $0xc1610d0c,-0x4(%ebp)
c1002a05:	eb 27                	jmp    c1002a2e <pmm_free+0x4d>
c1002a07:	81 7d 08 ff ff ff 37 	cmpl   $0x37ffffff,0x8(%ebp)
c1002a0e:	77 10                	ja     c1002a20 <pmm_free+0x3f>
c1002a10:	81 6d 08 00 00 00 01 	subl   $0x1000000,0x8(%ebp)
c1002a17:	c7 45 fc 00 0d 61 c1 	movl   $0xc1610d00,-0x4(%ebp)
c1002a1e:	eb 0e                	jmp    c1002a2e <pmm_free+0x4d>
c1002a20:	81 6d 08 00 00 00 38 	subl   $0x38000000,0x8(%ebp)
c1002a27:	c7 45 fc e0 0c 01 c1 	movl   $0xc1010ce0,-0x4(%ebp)
c1002a2e:	8b 45 08             	mov    0x8(%ebp),%eax
c1002a31:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002a36:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002a39:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a3c:	c1 e8 0c             	shr    $0xc,%eax
c1002a3f:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002a42:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002a49:	eb 31                	jmp    c1002a7c <pmm_free+0x9b>
c1002a4b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002a4e:	8b 08                	mov    (%eax),%ecx
c1002a50:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1002a53:	89 d0                	mov    %edx,%eax
c1002a55:	01 c0                	add    %eax,%eax
c1002a57:	01 d0                	add    %edx,%eax
c1002a59:	c1 e0 02             	shl    $0x2,%eax
c1002a5c:	01 c8                	add    %ecx,%eax
c1002a5e:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
c1002a65:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002a68:	8b 40 08             	mov    0x8(%eax),%eax
c1002a6b:	8d 50 01             	lea    0x1(%eax),%edx
c1002a6e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002a71:	89 50 08             	mov    %edx,0x8(%eax)
c1002a74:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1002a78:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002a7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002a7f:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002a82:	72 c7                	jb     c1002a4b <pmm_free+0x6a>
c1002a84:	90                   	nop
c1002a85:	90                   	nop
c1002a86:	c9                   	leave  
c1002a87:	c3                   	ret    

c1002a88 <setup_vpt>:
c1002a88:	55                   	push   %ebp
c1002a89:	89 e5                	mov    %esp,%ebp
c1002a8b:	83 ec 20             	sub    $0x20,%esp
c1002a8e:	c7 45 e8 e0 00 00 00 	movl   $0xe0,-0x18(%ebp)
c1002a95:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1002a9c:	eb 27                	jmp    c1002ac5 <setup_vpt+0x3d>
c1002a9e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002aa1:	c1 e0 0c             	shl    $0xc,%eax
c1002aa4:	05 00 30 93 c1       	add    $0xc1933000,%eax
c1002aa9:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002aaf:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002ab2:	05 00 03 00 00       	add    $0x300,%eax
c1002ab7:	83 ca 03             	or     $0x3,%edx
c1002aba:	89 14 85 00 10 61 c1 	mov    %edx,-0x3e9ef000(,%eax,4)
c1002ac1:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1002ac5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002ac8:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1002acb:	72 d1                	jb     c1002a9e <setup_vpt+0x16>
c1002acd:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1002ad4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002adb:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002ae2:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002ae9:	eb 3d                	jmp    c1002b28 <setup_vpt+0xa0>
c1002aeb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002aee:	8d 50 01             	lea    0x1(%eax),%edx
c1002af1:	89 55 f0             	mov    %edx,-0x10(%ebp)
c1002af4:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1002af7:	83 ca 03             	or     $0x3,%edx
c1002afa:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c1002afd:	c1 e1 0a             	shl    $0xa,%ecx
c1002b00:	01 c8                	add    %ecx,%eax
c1002b02:	89 14 85 00 30 93 c1 	mov    %edx,-0x3e6cd000(,%eax,4)
c1002b09:	81 7d f0 00 04 00 00 	cmpl   $0x400,-0x10(%ebp)
c1002b10:	75 0b                	jne    c1002b1d <setup_vpt+0x95>
c1002b12:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002b16:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002b1d:	81 45 f8 00 10 00 00 	addl   $0x1000,-0x8(%ebp)
c1002b24:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002b28:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002b2b:	c1 e0 0a             	shl    $0xa,%eax
c1002b2e:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c1002b31:	72 b8                	jb     c1002aeb <setup_vpt+0x63>
c1002b33:	b8 00 10 61 c1       	mov    $0xc1611000,%eax
c1002b38:	05 00 00 00 40       	add    $0x40000000,%eax
c1002b3d:	0f 22 d8             	mov    %eax,%cr3
c1002b40:	90                   	nop
c1002b41:	c9                   	leave  
c1002b42:	c3                   	ret    

c1002b43 <vmm_malloc>:
c1002b43:	55                   	push   %ebp
c1002b44:	89 e5                	mov    %esp,%ebp
c1002b46:	53                   	push   %ebx
c1002b47:	83 ec 34             	sub    $0x34,%esp
c1002b4a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002b4d:	88 45 d4             	mov    %al,-0x2c(%ebp)
c1002b50:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
c1002b54:	83 ec 08             	sub    $0x8,%esp
c1002b57:	50                   	push   %eax
c1002b58:	ff 75 08             	pushl  0x8(%ebp)
c1002b5b:	e8 85 fd ff ff       	call   c10028e5 <pmm_alloc>
c1002b60:	83 c4 10             	add    $0x10,%esp
c1002b63:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002b66:	8b 45 08             	mov    0x8(%ebp),%eax
c1002b69:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002b6e:	c1 e8 0c             	shr    $0xc,%eax
c1002b71:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002b74:	80 7d d4 02          	cmpb   $0x2,-0x2c(%ebp)
c1002b78:	0f 85 d6 00 00 00    	jne    c1002c54 <vmm_malloc+0x111>
c1002b7e:	a1 b4 ca 00 c1       	mov    0xc100cab4,%eax
c1002b83:	a3 00 20 93 c1       	mov    %eax,0xc1932000
c1002b88:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002b8f:	eb 58                	jmp    c1002be9 <vmm_malloc+0xa6>
c1002b91:	8b 15 b4 ca 00 c1    	mov    0xc100cab4,%edx
c1002b97:	a1 b0 ca 00 c1       	mov    0xc100cab0,%eax
c1002b9c:	29 c2                	sub    %eax,%edx
c1002b9e:	89 d0                	mov    %edx,%eax
c1002ba0:	c1 e8 16             	shr    $0x16,%eax
c1002ba3:	89 c3                	mov    %eax,%ebx
c1002ba5:	8b 15 b4 ca 00 c1    	mov    0xc100cab4,%edx
c1002bab:	a1 b0 ca 00 c1       	mov    0xc100cab0,%eax
c1002bb0:	29 c2                	sub    %eax,%edx
c1002bb2:	89 d0                	mov    %edx,%eax
c1002bb4:	c1 e8 0c             	shr    $0xc,%eax
c1002bb7:	89 c1                	mov    %eax,%ecx
c1002bb9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002bbc:	83 c8 07             	or     $0x7,%eax
c1002bbf:	89 c2                	mov    %eax,%edx
c1002bc1:	89 d8                	mov    %ebx,%eax
c1002bc3:	c1 e0 0a             	shl    $0xa,%eax
c1002bc6:	01 c8                	add    %ecx,%eax
c1002bc8:	89 14 85 00 20 91 c1 	mov    %edx,-0x3e6ee000(,%eax,4)
c1002bcf:	a1 b4 ca 00 c1       	mov    0xc100cab4,%eax
c1002bd4:	05 00 10 00 00       	add    $0x1000,%eax
c1002bd9:	a3 b4 ca 00 c1       	mov    %eax,0xc100cab4
c1002bde:	81 45 f4 00 10 00 00 	addl   $0x1000,-0xc(%ebp)
c1002be5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002be9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002bec:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1002bef:	72 a0                	jb     c1002b91 <vmm_malloc+0x4e>
c1002bf1:	8b 15 b4 ca 00 c1    	mov    0xc100cab4,%edx
c1002bf7:	a1 b0 ca 00 c1       	mov    0xc100cab0,%eax
c1002bfc:	29 c2                	sub    %eax,%edx
c1002bfe:	89 d0                	mov    %edx,%eax
c1002c00:	05 ff ff 3f 00       	add    $0x3fffff,%eax
c1002c05:	c1 e8 16             	shr    $0x16,%eax
c1002c08:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002c0b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002c12:	eb 2e                	jmp    c1002c42 <vmm_malloc+0xff>
c1002c14:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002c17:	c1 e0 0c             	shl    $0xc,%eax
c1002c1a:	05 00 20 91 c1       	add    $0xc1912000,%eax
c1002c1f:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002c25:	a1 b0 ca 00 c1       	mov    0xc100cab0,%eax
c1002c2a:	c1 e8 16             	shr    $0x16,%eax
c1002c2d:	89 c1                	mov    %eax,%ecx
c1002c2f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002c32:	01 c8                	add    %ecx,%eax
c1002c34:	83 ca 07             	or     $0x7,%edx
c1002c37:	89 14 85 00 10 61 c1 	mov    %edx,-0x3e9ef000(,%eax,4)
c1002c3e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002c42:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002c45:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002c48:	72 ca                	jb     c1002c14 <vmm_malloc+0xd1>
c1002c4a:	a1 00 20 93 c1       	mov    0xc1932000,%eax
c1002c4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002c52:	eb 07                	jmp    c1002c5b <vmm_malloc+0x118>
c1002c54:	81 6d f4 00 00 00 40 	subl   $0x40000000,-0xc(%ebp)
c1002c5b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002c5e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002c61:	c9                   	leave  
c1002c62:	c3                   	ret    

c1002c63 <vmm_free>:
c1002c63:	55                   	push   %ebp
c1002c64:	89 e5                	mov    %esp,%ebp
c1002c66:	53                   	push   %ebx
c1002c67:	83 ec 14             	sub    $0x14,%esp
c1002c6a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002c6d:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002c72:	c1 e8 0c             	shr    $0xc,%eax
c1002c75:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002c78:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c7b:	05 00 00 00 40       	add    $0x40000000,%eax
c1002c80:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002c83:	81 7d ec ff ff ff 37 	cmpl   $0x37ffffff,-0x14(%ebp)
c1002c8a:	0f 86 a4 00 00 00    	jbe    c1002d34 <vmm_free+0xd1>
c1002c90:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c93:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002c98:	89 c2                	mov    %eax,%edx
c1002c9a:	a1 b0 ca 00 c1       	mov    0xc100cab0,%eax
c1002c9f:	29 c2                	sub    %eax,%edx
c1002ca1:	89 d0                	mov    %edx,%eax
c1002ca3:	c1 e8 16             	shr    $0x16,%eax
c1002ca6:	89 c2                	mov    %eax,%edx
c1002ca8:	8b 45 08             	mov    0x8(%ebp),%eax
c1002cab:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002cb0:	89 c1                	mov    %eax,%ecx
c1002cb2:	a1 b0 ca 00 c1       	mov    0xc100cab0,%eax
c1002cb7:	29 c1                	sub    %eax,%ecx
c1002cb9:	89 c8                	mov    %ecx,%eax
c1002cbb:	c1 e8 0c             	shr    $0xc,%eax
c1002cbe:	c1 e2 0a             	shl    $0xa,%edx
c1002cc1:	01 d0                	add    %edx,%eax
c1002cc3:	8b 04 85 00 20 91 c1 	mov    -0x3e6ee000(,%eax,4),%eax
c1002cca:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002ccf:	83 ec 08             	sub    $0x8,%esp
c1002cd2:	ff 75 0c             	pushl  0xc(%ebp)
c1002cd5:	50                   	push   %eax
c1002cd6:	e8 06 fd ff ff       	call   c10029e1 <pmm_free>
c1002cdb:	83 c4 10             	add    $0x10,%esp
c1002cde:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002ce5:	eb 43                	jmp    c1002d2a <vmm_free+0xc7>
c1002ce7:	a1 b0 ca 00 c1       	mov    0xc100cab0,%eax
c1002cec:	8b 55 08             	mov    0x8(%ebp),%edx
c1002cef:	29 c2                	sub    %eax,%edx
c1002cf1:	89 d0                	mov    %edx,%eax
c1002cf3:	c1 e8 16             	shr    $0x16,%eax
c1002cf6:	89 c3                	mov    %eax,%ebx
c1002cf8:	a1 b0 ca 00 c1       	mov    0xc100cab0,%eax
c1002cfd:	8b 55 08             	mov    0x8(%ebp),%edx
c1002d00:	29 c2                	sub    %eax,%edx
c1002d02:	89 d0                	mov    %edx,%eax
c1002d04:	c1 e8 0c             	shr    $0xc,%eax
c1002d07:	89 c1                	mov    %eax,%ecx
c1002d09:	8b 45 08             	mov    0x8(%ebp),%eax
c1002d0c:	83 c8 06             	or     $0x6,%eax
c1002d0f:	89 c2                	mov    %eax,%edx
c1002d11:	89 d8                	mov    %ebx,%eax
c1002d13:	c1 e0 0a             	shl    $0xa,%eax
c1002d16:	01 c8                	add    %ecx,%eax
c1002d18:	89 14 85 00 20 91 c1 	mov    %edx,-0x3e6ee000(,%eax,4)
c1002d1f:	81 45 08 00 10 00 00 	addl   $0x1000,0x8(%ebp)
c1002d26:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002d2a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002d2d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002d30:	72 b5                	jb     c1002ce7 <vmm_free+0x84>
c1002d32:	eb 17                	jmp    c1002d4b <vmm_free+0xe8>
c1002d34:	8b 45 08             	mov    0x8(%ebp),%eax
c1002d37:	05 00 00 00 40       	add    $0x40000000,%eax
c1002d3c:	83 ec 08             	sub    $0x8,%esp
c1002d3f:	ff 75 0c             	pushl  0xc(%ebp)
c1002d42:	50                   	push   %eax
c1002d43:	e8 99 fc ff ff       	call   c10029e1 <pmm_free>
c1002d48:	83 c4 10             	add    $0x10,%esp
c1002d4b:	90                   	nop
c1002d4c:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002d4f:	c9                   	leave  
c1002d50:	c3                   	ret    

c1002d51 <vmm_map>:
c1002d51:	55                   	push   %ebp
c1002d52:	89 e5                	mov    %esp,%ebp
c1002d54:	53                   	push   %ebx
c1002d55:	83 ec 20             	sub    $0x20,%esp
c1002d58:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002d5b:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002d60:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002d63:	8b 45 10             	mov    0x10(%ebp),%eax
c1002d66:	2d 01 10 00 00       	sub    $0x1001,%eax
c1002d6b:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002d70:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002d73:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d76:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002d79:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002d7c:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002d7f:	2d 01 10 00 00       	sub    $0x1001,%eax
c1002d84:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002d89:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002d8c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002d93:	eb 33                	jmp    c1002dc8 <vmm_map+0x77>
c1002d95:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002d98:	c1 e8 0a             	shr    $0xa,%eax
c1002d9b:	89 c3                	mov    %eax,%ebx
c1002d9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002da0:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002da5:	89 c1                	mov    %eax,%ecx
c1002da7:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002daa:	83 c8 07             	or     $0x7,%eax
c1002dad:	89 c2                	mov    %eax,%edx
c1002daf:	89 d8                	mov    %ebx,%eax
c1002db1:	c1 e0 0a             	shl    $0xa,%eax
c1002db4:	01 c8                	add    %ecx,%eax
c1002db6:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002dbd:	81 45 f8 00 10 00 00 	addl   $0x1000,-0x8(%ebp)
c1002dc4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002dc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002dcb:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002dce:	72 c5                	jb     c1002d95 <vmm_map+0x44>
c1002dd0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002dd3:	c1 e8 0a             	shr    $0xa,%eax
c1002dd6:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002dd9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002de0:	eb 33                	jmp    c1002e15 <vmm_map+0xc4>
c1002de2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002de5:	c1 e0 0c             	shl    $0xc,%eax
c1002de8:	05 00 20 61 c1       	add    $0xc1612000,%eax
c1002ded:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002df3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002df6:	c1 e8 16             	shr    $0x16,%eax
c1002df9:	89 c1                	mov    %eax,%ecx
c1002dfb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002dfe:	01 c8                	add    %ecx,%eax
c1002e00:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
c1002e07:	8b 45 08             	mov    0x8(%ebp),%eax
c1002e0a:	01 c8                	add    %ecx,%eax
c1002e0c:	83 ca 07             	or     $0x7,%edx
c1002e0f:	89 10                	mov    %edx,(%eax)
c1002e11:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002e15:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002e18:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002e1b:	72 c5                	jb     c1002de2 <vmm_map+0x91>
c1002e1d:	90                   	nop
c1002e1e:	90                   	nop
c1002e1f:	83 c4 20             	add    $0x20,%esp
c1002e22:	5b                   	pop    %ebx
c1002e23:	5d                   	pop    %ebp
c1002e24:	c3                   	ret    

c1002e25 <setup_pgdir>:
c1002e25:	55                   	push   %ebp
c1002e26:	89 e5                	mov    %esp,%ebp
c1002e28:	57                   	push   %edi
c1002e29:	56                   	push   %esi
c1002e2a:	53                   	push   %ebx
c1002e2b:	83 ec 1c             	sub    $0x1c,%esp
c1002e2e:	83 ec 08             	sub    $0x8,%esp
c1002e31:	6a 01                	push   $0x1
c1002e33:	68 00 10 00 00       	push   $0x1000
c1002e38:	e8 06 fd ff ff       	call   c1002b43 <vmm_malloc>
c1002e3d:	83 c4 10             	add    $0x10,%esp
c1002e40:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002e43:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002e46:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1002e4b:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002e50:	8b 0b                	mov    (%ebx),%ecx
c1002e52:	89 08                	mov    %ecx,(%eax)
c1002e54:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002e58:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002e5c:	8d 78 04             	lea    0x4(%eax),%edi
c1002e5f:	83 e7 fc             	and    $0xfffffffc,%edi
c1002e62:	29 f8                	sub    %edi,%eax
c1002e64:	29 c3                	sub    %eax,%ebx
c1002e66:	01 c2                	add    %eax,%edx
c1002e68:	83 e2 fc             	and    $0xfffffffc,%edx
c1002e6b:	89 d0                	mov    %edx,%eax
c1002e6d:	c1 e8 02             	shr    $0x2,%eax
c1002e70:	89 de                	mov    %ebx,%esi
c1002e72:	89 c1                	mov    %eax,%ecx
c1002e74:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002e76:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002e79:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002e7c:	5b                   	pop    %ebx
c1002e7d:	5e                   	pop    %esi
c1002e7e:	5f                   	pop    %edi
c1002e7f:	5d                   	pop    %ebp
c1002e80:	c3                   	ret    

c1002e81 <hash32>:
c1002e81:	55                   	push   %ebp
c1002e82:	89 e5                	mov    %esp,%ebp
c1002e84:	83 ec 10             	sub    $0x10,%esp
c1002e87:	8b 45 08             	mov    0x8(%ebp),%eax
c1002e8a:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1002e90:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002e93:	b8 20 00 00 00       	mov    $0x20,%eax
c1002e98:	2b 45 0c             	sub    0xc(%ebp),%eax
c1002e9b:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002e9e:	89 c1                	mov    %eax,%ecx
c1002ea0:	d3 ea                	shr    %cl,%edx
c1002ea2:	89 d0                	mov    %edx,%eax
c1002ea4:	c9                   	leave  
c1002ea5:	c3                   	ret    

c1002ea6 <task_init>:
c1002ea6:	55                   	push   %ebp
c1002ea7:	89 e5                	mov    %esp,%ebp
c1002ea9:	83 ec 28             	sub    $0x28,%esp
c1002eac:	c7 45 ec a4 0c 01 c1 	movl   $0xc1010ca4,-0x14(%ebp)
c1002eb3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002eb6:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002eb9:	89 50 04             	mov    %edx,0x4(%eax)
c1002ebc:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002ebf:	8b 50 04             	mov    0x4(%eax),%edx
c1002ec2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002ec5:	89 10                	mov    %edx,(%eax)
c1002ec7:	90                   	nop
c1002ec8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002ecf:	eb 27                	jmp    c1002ef8 <task_init+0x52>
c1002ed1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002ed4:	c1 e0 03             	shl    $0x3,%eax
c1002ed7:	05 a0 ec 00 c1       	add    $0xc100eca0,%eax
c1002edc:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002edf:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002ee2:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1002ee5:	89 50 04             	mov    %edx,0x4(%eax)
c1002ee8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002eeb:	8b 50 04             	mov    0x4(%eax),%edx
c1002eee:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002ef1:	89 10                	mov    %edx,(%eax)
c1002ef3:	90                   	nop
c1002ef4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002ef8:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%ebp)
c1002eff:	7e d0                	jle    c1002ed1 <task_init+0x2b>
c1002f01:	83 ec 0c             	sub    $0xc,%esp
c1002f04:	6a 01                	push   $0x1
c1002f06:	e8 3e 04 00 00       	call   c1003349 <alloc_task>
c1002f0b:	83 c4 10             	add    $0x10,%esp
c1002f0e:	a3 00 30 a1 c1       	mov    %eax,0xc1a13000
c1002f13:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f18:	85 c0                	test   %eax,%eax
c1002f1a:	75 10                	jne    c1002f2c <task_init+0x86>
c1002f1c:	83 ec 0c             	sub    $0xc,%esp
c1002f1f:	68 78 a2 00 c1       	push   $0xc100a278
c1002f24:	e8 8a 18 00 00       	call   c10047b3 <printk>
c1002f29:	83 c4 10             	add    $0x10,%esp
c1002f2c:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f31:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1002f37:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f3c:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1002f43:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f48:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1002f4f:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f54:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1002f5b:	c7 05 a0 0c 01 c1 00 	movl   $0x0,0xc1010ca0
c1002f62:	00 00 00 
c1002f65:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f6a:	83 ec 08             	sub    $0x8,%esp
c1002f6d:	68 8b a2 00 c1       	push   $0xc100a28b
c1002f72:	50                   	push   %eax
c1002f73:	e8 b8 01 00 00       	call   c1003130 <set_task_name>
c1002f78:	83 c4 10             	add    $0x10,%esp
c1002f7b:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f80:	89 c2                	mov    %eax,%edx
c1002f82:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f87:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1002f8d:	89 50 24             	mov    %edx,0x24(%eax)
c1002f90:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f95:	ba 00 10 61 c1       	mov    $0xc1611000,%edx
c1002f9a:	89 50 28             	mov    %edx,0x28(%eax)
c1002f9d:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fa2:	c7 80 04 10 00 00 00 	movl   $0x0,0x1004(%eax)
c1002fa9:	00 00 00 
c1002fac:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fb1:	83 c0 50             	add    $0x50,%eax
c1002fb4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002fb7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002fba:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002fbd:	89 50 04             	mov    %edx,0x4(%eax)
c1002fc0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002fc3:	8b 50 04             	mov    0x4(%eax),%edx
c1002fc6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002fc9:	89 10                	mov    %edx,(%eax)
c1002fcb:	90                   	nop
c1002fcc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002fd3:	eb 16                	jmp    c1002feb <task_init+0x145>
c1002fd5:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fda:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1002fdd:	83 c2 18             	add    $0x18,%edx
c1002fe0:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1002fe7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002feb:	81 7d f0 e7 03 00 00 	cmpl   $0x3e7,-0x10(%ebp)
c1002ff2:	7e e1                	jle    c1002fd5 <task_init+0x12f>
c1002ff4:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ff9:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1002ffe:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003003:	83 ec 0c             	sub    $0xc,%esp
c1003006:	50                   	push   %eax
c1003007:	e8 11 02 00 00       	call   c100321d <add_pid_hash>
c100300c:	83 c4 10             	add    $0x10,%esp
c100300f:	a1 ac 0c 01 c1       	mov    0xc1010cac,%eax
c1003014:	83 c0 01             	add    $0x1,%eax
c1003017:	a3 ac 0c 01 c1       	mov    %eax,0xc1010cac
c100301c:	90                   	nop
c100301d:	c9                   	leave  
c100301e:	c3                   	ret    

c100301f <set_pid_bit>:
c100301f:	55                   	push   %ebp
c1003020:	89 e5                	mov    %esp,%ebp
c1003022:	83 ec 10             	sub    $0x10,%esp
c1003025:	8b 45 08             	mov    0x8(%ebp),%eax
c1003028:	8d 50 07             	lea    0x7(%eax),%edx
c100302b:	85 c0                	test   %eax,%eax
c100302d:	0f 48 c2             	cmovs  %edx,%eax
c1003030:	c1 f8 03             	sar    $0x3,%eax
c1003033:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003036:	8b 45 08             	mov    0x8(%ebp),%eax
c1003039:	99                   	cltd   
c100303a:	c1 ea 1d             	shr    $0x1d,%edx
c100303d:	01 d0                	add    %edx,%eax
c100303f:	83 e0 07             	and    $0x7,%eax
c1003042:	29 d0                	sub    %edx,%eax
c1003044:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003047:	90                   	nop
c1003048:	c9                   	leave  
c1003049:	c3                   	ret    

c100304a <clear_pid_bit>:
c100304a:	55                   	push   %ebp
c100304b:	89 e5                	mov    %esp,%ebp
c100304d:	83 ec 10             	sub    $0x10,%esp
c1003050:	8b 45 08             	mov    0x8(%ebp),%eax
c1003053:	8d 50 07             	lea    0x7(%eax),%edx
c1003056:	85 c0                	test   %eax,%eax
c1003058:	0f 48 c2             	cmovs  %edx,%eax
c100305b:	c1 f8 03             	sar    $0x3,%eax
c100305e:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003061:	8b 45 08             	mov    0x8(%ebp),%eax
c1003064:	99                   	cltd   
c1003065:	c1 ea 1d             	shr    $0x1d,%edx
c1003068:	01 d0                	add    %edx,%eax
c100306a:	83 e0 07             	and    $0x7,%eax
c100306d:	29 d0                	sub    %edx,%eax
c100306f:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003072:	90                   	nop
c1003073:	c9                   	leave  
c1003074:	c3                   	ret    

c1003075 <find_free_pid>:
c1003075:	55                   	push   %ebp
c1003076:	89 e5                	mov    %esp,%ebp
c1003078:	83 ec 10             	sub    $0x10,%esp
c100307b:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1003082:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1003089:	eb 1b                	jmp    c10030a6 <find_free_pid+0x31>
c100308b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003092:	eb 08                	jmp    c100309c <find_free_pid+0x27>
c1003094:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003098:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c100309c:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
c10030a0:	7e f2                	jle    c1003094 <find_free_pid+0x1f>
c10030a2:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c10030a6:	81 7d f8 00 80 00 00 	cmpl   $0x8000,-0x8(%ebp)
c10030ad:	75 dc                	jne    c100308b <find_free_pid+0x16>
c10030af:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10030b4:	c9                   	leave  
c10030b5:	c3                   	ret    

c10030b6 <alloc_pid>:
c10030b6:	55                   	push   %ebp
c10030b7:	89 e5                	mov    %esp,%ebp
c10030b9:	83 ec 10             	sub    $0x10,%esp
c10030bc:	a1 c0 ca 00 c1       	mov    0xc100cac0,%eax
c10030c1:	85 c0                	test   %eax,%eax
c10030c3:	75 07                	jne    c10030cc <alloc_pid+0x16>
c10030c5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10030ca:	eb 44                	jmp    c1003110 <alloc_pid+0x5a>
c10030cc:	81 7d fc ff 7f 00 00 	cmpl   $0x7fff,-0x4(%ebp)
c10030d3:	75 07                	jne    c10030dc <alloc_pid+0x26>
c10030d5:	e8 9b ff ff ff       	call   c1003075 <find_free_pid>
c10030da:	eb 08                	jmp    c10030e4 <alloc_pid+0x2e>
c10030dc:	a1 a0 0c 01 c1       	mov    0xc1010ca0,%eax
c10030e1:	83 c0 01             	add    $0x1,%eax
c10030e4:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10030e7:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c10030eb:	78 18                	js     c1003105 <alloc_pid+0x4f>
c10030ed:	ff 75 fc             	pushl  -0x4(%ebp)
c10030f0:	e8 2a ff ff ff       	call   c100301f <set_pid_bit>
c10030f5:	83 c4 04             	add    $0x4,%esp
c10030f8:	a1 c0 ca 00 c1       	mov    0xc100cac0,%eax
c10030fd:	83 e8 01             	sub    $0x1,%eax
c1003100:	a3 c0 ca 00 c1       	mov    %eax,0xc100cac0
c1003105:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003108:	a3 a0 0c 01 c1       	mov    %eax,0xc1010ca0
c100310d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003110:	c9                   	leave  
c1003111:	c3                   	ret    

c1003112 <free_pid>:
c1003112:	55                   	push   %ebp
c1003113:	89 e5                	mov    %esp,%ebp
c1003115:	ff 75 08             	pushl  0x8(%ebp)
c1003118:	e8 2d ff ff ff       	call   c100304a <clear_pid_bit>
c100311d:	83 c4 04             	add    $0x4,%esp
c1003120:	a1 c0 ca 00 c1       	mov    0xc100cac0,%eax
c1003125:	83 c0 01             	add    $0x1,%eax
c1003128:	a3 c0 ca 00 c1       	mov    %eax,0xc100cac0
c100312d:	90                   	nop
c100312e:	c9                   	leave  
c100312f:	c3                   	ret    

c1003130 <set_task_name>:
c1003130:	55                   	push   %ebp
c1003131:	89 e5                	mov    %esp,%ebp
c1003133:	83 ec 08             	sub    $0x8,%esp
c1003136:	8b 45 08             	mov    0x8(%ebp),%eax
c1003139:	83 c0 10             	add    $0x10,%eax
c100313c:	83 ec 04             	sub    $0x4,%esp
c100313f:	6a 14                	push   $0x14
c1003141:	6a 00                	push   $0x0
c1003143:	50                   	push   %eax
c1003144:	e8 61 cf ff ff       	call   c10000aa <memset>
c1003149:	83 c4 10             	add    $0x10,%esp
c100314c:	8b 45 08             	mov    0x8(%ebp),%eax
c100314f:	83 c0 10             	add    $0x10,%eax
c1003152:	83 ec 04             	sub    $0x4,%esp
c1003155:	6a 14                	push   $0x14
c1003157:	ff 75 0c             	pushl  0xc(%ebp)
c100315a:	50                   	push   %eax
c100315b:	e8 a8 cf ff ff       	call   c1000108 <memcpy>
c1003160:	83 c4 10             	add    $0x10,%esp
c1003163:	c9                   	leave  
c1003164:	c3                   	ret    

c1003165 <get_task_name>:
c1003165:	55                   	push   %ebp
c1003166:	89 e5                	mov    %esp,%ebp
c1003168:	83 ec 08             	sub    $0x8,%esp
c100316b:	83 ec 04             	sub    $0x4,%esp
c100316e:	6a 15                	push   $0x15
c1003170:	6a 00                	push   $0x0
c1003172:	68 b0 0c 01 c1       	push   $0xc1010cb0
c1003177:	e8 2e cf ff ff       	call   c10000aa <memset>
c100317c:	83 c4 10             	add    $0x10,%esp
c100317f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003182:	83 c0 10             	add    $0x10,%eax
c1003185:	83 ec 04             	sub    $0x4,%esp
c1003188:	6a 14                	push   $0x14
c100318a:	50                   	push   %eax
c100318b:	68 b0 0c 01 c1       	push   $0xc1010cb0
c1003190:	e8 73 cf ff ff       	call   c1000108 <memcpy>
c1003195:	83 c4 10             	add    $0x10,%esp
c1003198:	c9                   	leave  
c1003199:	c3                   	ret    

c100319a <add_link>:
c100319a:	55                   	push   %ebp
c100319b:	89 e5                	mov    %esp,%ebp
c100319d:	83 ec 20             	sub    $0x20,%esp
c10031a0:	c7 45 fc a4 0c 01 c1 	movl   $0xc1010ca4,-0x4(%ebp)
c10031a7:	8b 45 08             	mov    0x8(%ebp),%eax
c10031aa:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10031ad:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10031b0:	8b 00                	mov    (%eax),%eax
c10031b2:	8b 55 f8             	mov    -0x8(%ebp),%edx
c10031b5:	89 55 f4             	mov    %edx,-0xc(%ebp)
c10031b8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10031bb:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10031be:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10031c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10031c4:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10031c7:	89 10                	mov    %edx,(%eax)
c10031c9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10031cc:	8b 10                	mov    (%eax),%edx
c10031ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10031d1:	89 50 04             	mov    %edx,0x4(%eax)
c10031d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10031d7:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10031da:	89 50 04             	mov    %edx,0x4(%eax)
c10031dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10031e0:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10031e3:	89 10                	mov    %edx,(%eax)
c10031e5:	90                   	nop
c10031e6:	90                   	nop
c10031e7:	90                   	nop
c10031e8:	c9                   	leave  
c10031e9:	c3                   	ret    

c10031ea <remove_link>:
c10031ea:	55                   	push   %ebp
c10031eb:	89 e5                	mov    %esp,%ebp
c10031ed:	83 ec 10             	sub    $0x10,%esp
c10031f0:	8b 45 08             	mov    0x8(%ebp),%eax
c10031f3:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10031f6:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10031f9:	8b 40 04             	mov    0x4(%eax),%eax
c10031fc:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10031ff:	8b 12                	mov    (%edx),%edx
c1003201:	89 55 f8             	mov    %edx,-0x8(%ebp)
c1003204:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003207:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100320a:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100320d:	89 50 04             	mov    %edx,0x4(%eax)
c1003210:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003213:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1003216:	89 10                	mov    %edx,(%eax)
c1003218:	90                   	nop
c1003219:	90                   	nop
c100321a:	90                   	nop
c100321b:	c9                   	leave  
c100321c:	c3                   	ret    

c100321d <add_pid_hash>:
c100321d:	55                   	push   %ebp
c100321e:	89 e5                	mov    %esp,%ebp
c1003220:	53                   	push   %ebx
c1003221:	83 ec 20             	sub    $0x20,%esp
c1003224:	8b 45 08             	mov    0x8(%ebp),%eax
c1003227:	8d 58 58             	lea    0x58(%eax),%ebx
c100322a:	8b 45 08             	mov    0x8(%ebp),%eax
c100322d:	8b 40 0c             	mov    0xc(%eax),%eax
c1003230:	6a 0a                	push   $0xa
c1003232:	50                   	push   %eax
c1003233:	e8 49 fc ff ff       	call   c1002e81 <hash32>
c1003238:	83 c4 08             	add    $0x8,%esp
c100323b:	c1 e0 03             	shl    $0x3,%eax
c100323e:	05 a0 ec 00 c1       	add    $0xc100eca0,%eax
c1003243:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003246:	89 5d f4             	mov    %ebx,-0xc(%ebp)
c1003249:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100324c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100324f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003252:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003255:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003258:	8b 40 04             	mov    0x4(%eax),%eax
c100325b:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100325e:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1003261:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003264:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1003267:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100326a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100326d:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003270:	89 10                	mov    %edx,(%eax)
c1003272:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003275:	8b 10                	mov    (%eax),%edx
c1003277:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100327a:	89 50 04             	mov    %edx,0x4(%eax)
c100327d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003280:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1003283:	89 50 04             	mov    %edx,0x4(%eax)
c1003286:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003289:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100328c:	89 10                	mov    %edx,(%eax)
c100328e:	90                   	nop
c100328f:	90                   	nop
c1003290:	90                   	nop
c1003291:	90                   	nop
c1003292:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1003295:	c9                   	leave  
c1003296:	c3                   	ret    

c1003297 <remove_pid_hash>:
c1003297:	55                   	push   %ebp
c1003298:	89 e5                	mov    %esp,%ebp
c100329a:	83 ec 18             	sub    $0x18,%esp
c100329d:	83 ec 0c             	sub    $0xc,%esp
c10032a0:	ff 75 08             	pushl  0x8(%ebp)
c10032a3:	e8 36 00 00 00       	call   c10032de <find_task>
c10032a8:	83 c4 10             	add    $0x10,%esp
c10032ab:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10032ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10032b1:	83 c0 58             	add    $0x58,%eax
c10032b4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10032b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10032ba:	8b 40 04             	mov    0x4(%eax),%eax
c10032bd:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10032c0:	8b 12                	mov    (%edx),%edx
c10032c2:	89 55 ec             	mov    %edx,-0x14(%ebp)
c10032c5:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10032c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10032cb:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10032ce:	89 50 04             	mov    %edx,0x4(%eax)
c10032d1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10032d4:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10032d7:	89 10                	mov    %edx,(%eax)
c10032d9:	90                   	nop
c10032da:	90                   	nop
c10032db:	90                   	nop
c10032dc:	c9                   	leave  
c10032dd:	c3                   	ret    

c10032de <find_task>:
c10032de:	55                   	push   %ebp
c10032df:	89 e5                	mov    %esp,%ebp
c10032e1:	83 ec 10             	sub    $0x10,%esp
c10032e4:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10032e8:	79 07                	jns    c10032f1 <find_task+0x13>
c10032ea:	b8 00 00 00 00       	mov    $0x0,%eax
c10032ef:	eb 56                	jmp    c1003347 <find_task+0x69>
c10032f1:	8b 45 08             	mov    0x8(%ebp),%eax
c10032f4:	6a 0a                	push   $0xa
c10032f6:	50                   	push   %eax
c10032f7:	e8 85 fb ff ff       	call   c1002e81 <hash32>
c10032fc:	83 c4 08             	add    $0x8,%esp
c10032ff:	c1 e0 03             	shl    $0x3,%eax
c1003302:	05 a0 ec 00 c1       	add    $0xc100eca0,%eax
c1003307:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100330a:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100330d:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003310:	eb 19                	jmp    c100332b <find_task+0x4d>
c1003312:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003315:	83 e8 58             	sub    $0x58,%eax
c1003318:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100331b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100331e:	8b 40 0c             	mov    0xc(%eax),%eax
c1003321:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003324:	75 05                	jne    c100332b <find_task+0x4d>
c1003326:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003329:	eb 1c                	jmp    c1003347 <find_task+0x69>
c100332b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100332e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003331:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003334:	8b 40 04             	mov    0x4(%eax),%eax
c1003337:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100333a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100333d:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1003340:	75 d0                	jne    c1003312 <find_task+0x34>
c1003342:	b8 00 00 00 00       	mov    $0x0,%eax
c1003347:	c9                   	leave  
c1003348:	c3                   	ret    

c1003349 <alloc_task>:
c1003349:	55                   	push   %ebp
c100334a:	89 e5                	mov    %esp,%ebp
c100334c:	83 ec 18             	sub    $0x18,%esp
c100334f:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1003353:	75 17                	jne    c100336c <alloc_task+0x23>
c1003355:	83 ec 08             	sub    $0x8,%esp
c1003358:	6a 01                	push   $0x1
c100335a:	68 08 10 00 00       	push   $0x1008
c100335f:	e8 df f7 ff ff       	call   c1002b43 <vmm_malloc>
c1003364:	83 c4 10             	add    $0x10,%esp
c1003367:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100336a:	eb 15                	jmp    c1003381 <alloc_task+0x38>
c100336c:	83 ec 08             	sub    $0x8,%esp
c100336f:	6a 02                	push   $0x2
c1003371:	68 08 10 00 00       	push   $0x1008
c1003376:	e8 c8 f7 ff ff       	call   c1002b43 <vmm_malloc>
c100337b:	83 c4 10             	add    $0x10,%esp
c100337e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003381:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1003385:	0f 84 8c 00 00 00    	je     c1003417 <alloc_task+0xce>
c100338b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100338e:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c1003394:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003397:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c100339e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033a1:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c10033a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033ab:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
c10033b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033b5:	83 c0 10             	add    $0x10,%eax
c10033b8:	83 ec 04             	sub    $0x4,%esp
c10033bb:	6a 14                	push   $0x14
c10033bd:	6a 00                	push   $0x0
c10033bf:	50                   	push   %eax
c10033c0:	e8 e5 cc ff ff       	call   c10000aa <memset>
c10033c5:	83 c4 10             	add    $0x10,%esp
c10033c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033cb:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
c10033d2:	ba 00 10 61 c1       	mov    $0xc1611000,%edx
c10033d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033da:	89 50 28             	mov    %edx,0x28(%eax)
c10033dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033e0:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
c10033e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033ea:	83 c0 30             	add    $0x30,%eax
c10033ed:	83 ec 04             	sub    $0x4,%esp
c10033f0:	6a 20                	push   $0x20
c10033f2:	6a 00                	push   $0x0
c10033f4:	50                   	push   %eax
c10033f5:	e8 b0 cc ff ff       	call   c10000aa <memset>
c10033fa:	83 c4 10             	add    $0x10,%esp
c10033fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003400:	c7 80 00 10 00 00 11 	movl   $0x19971211,0x1000(%eax)
c1003407:	12 97 19 
c100340a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100340d:	c7 80 04 10 00 00 00 	movl   $0x0,0x1004(%eax)
c1003414:	00 00 00 
c1003417:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100341a:	c9                   	leave  
c100341b:	c3                   	ret    

c100341c <forkret>:
c100341c:	55                   	push   %ebp
c100341d:	89 e5                	mov    %esp,%ebp
c100341f:	83 ec 08             	sub    $0x8,%esp
c1003422:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003427:	8b 40 2c             	mov    0x2c(%eax),%eax
c100342a:	83 ec 0c             	sub    $0xc,%esp
c100342d:	50                   	push   %eax
c100342e:	e8 60 d9 ff ff       	call   c1000d93 <forkrets>
c1003433:	83 c4 10             	add    $0x10,%esp
c1003436:	90                   	nop
c1003437:	c9                   	leave  
c1003438:	c3                   	ret    

c1003439 <copy_thread>:
c1003439:	55                   	push   %ebp
c100343a:	89 e5                	mov    %esp,%ebp
c100343c:	57                   	push   %edi
c100343d:	56                   	push   %esi
c100343e:	53                   	push   %ebx
c100343f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003442:	8b 40 24             	mov    0x24(%eax),%eax
c1003445:	83 e8 4c             	sub    $0x4c,%eax
c1003448:	89 c2                	mov    %eax,%edx
c100344a:	8b 45 08             	mov    0x8(%ebp),%eax
c100344d:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003450:	8b 45 08             	mov    0x8(%ebp),%eax
c1003453:	8b 40 24             	mov    0x24(%eax),%eax
c1003456:	8d 50 b4             	lea    -0x4c(%eax),%edx
c1003459:	8b 45 08             	mov    0x8(%ebp),%eax
c100345c:	89 50 24             	mov    %edx,0x24(%eax)
c100345f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003462:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003465:	8b 55 10             	mov    0x10(%ebp),%edx
c1003468:	89 d3                	mov    %edx,%ebx
c100346a:	ba 4c 00 00 00       	mov    $0x4c,%edx
c100346f:	8b 0b                	mov    (%ebx),%ecx
c1003471:	89 08                	mov    %ecx,(%eax)
c1003473:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003477:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c100347b:	8d 78 04             	lea    0x4(%eax),%edi
c100347e:	83 e7 fc             	and    $0xfffffffc,%edi
c1003481:	29 f8                	sub    %edi,%eax
c1003483:	29 c3                	sub    %eax,%ebx
c1003485:	01 c2                	add    %eax,%edx
c1003487:	83 e2 fc             	and    $0xfffffffc,%edx
c100348a:	89 d0                	mov    %edx,%eax
c100348c:	c1 e8 02             	shr    $0x2,%eax
c100348f:	89 de                	mov    %ebx,%esi
c1003491:	89 c1                	mov    %eax,%ecx
c1003493:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003495:	8b 45 08             	mov    0x8(%ebp),%eax
c1003498:	8b 40 2c             	mov    0x2c(%eax),%eax
c100349b:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c10034a2:	8b 45 08             	mov    0x8(%ebp),%eax
c10034a5:	8b 40 2c             	mov    0x2c(%eax),%eax
c10034a8:	8b 55 0c             	mov    0xc(%ebp),%edx
c10034ab:	89 50 44             	mov    %edx,0x44(%eax)
c10034ae:	8b 45 10             	mov    0x10(%ebp),%eax
c10034b1:	8b 50 38             	mov    0x38(%eax),%edx
c10034b4:	8b 45 08             	mov    0x8(%ebp),%eax
c10034b7:	89 50 30             	mov    %edx,0x30(%eax)
c10034ba:	8b 45 10             	mov    0x10(%ebp),%eax
c10034bd:	8b 50 10             	mov    0x10(%eax),%edx
c10034c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10034c3:	89 50 38             	mov    %edx,0x38(%eax)
c10034c6:	8b 45 10             	mov    0x10(%ebp),%eax
c10034c9:	8b 50 14             	mov    0x14(%eax),%edx
c10034cc:	8b 45 08             	mov    0x8(%ebp),%eax
c10034cf:	89 50 40             	mov    %edx,0x40(%eax)
c10034d2:	8b 45 08             	mov    0x8(%ebp),%eax
c10034d5:	8b 40 2c             	mov    0x2c(%eax),%eax
c10034d8:	89 c2                	mov    %eax,%edx
c10034da:	8b 45 08             	mov    0x8(%ebp),%eax
c10034dd:	89 50 34             	mov    %edx,0x34(%eax)
c10034e0:	90                   	nop
c10034e1:	5b                   	pop    %ebx
c10034e2:	5e                   	pop    %esi
c10034e3:	5f                   	pop    %edi
c10034e4:	5d                   	pop    %ebp
c10034e5:	c3                   	ret    

c10034e6 <do_fork>:
c10034e6:	55                   	push   %ebp
c10034e7:	89 e5                	mov    %esp,%ebp
c10034e9:	83 ec 18             	sub    $0x18,%esp
c10034ec:	a1 ac 0c 01 c1       	mov    0xc1010cac,%eax
c10034f1:	3d 00 80 00 00       	cmp    $0x8000,%eax
c10034f6:	76 0a                	jbe    c1003502 <do_fork+0x1c>
c10034f8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10034fd:	e9 be 00 00 00       	jmp    c10035c0 <do_fork+0xda>
c1003502:	83 ec 0c             	sub    $0xc,%esp
c1003505:	6a 01                	push   $0x1
c1003507:	e8 3d fe ff ff       	call   c1003349 <alloc_task>
c100350c:	83 c4 10             	add    $0x10,%esp
c100350f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003512:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1003516:	75 0a                	jne    c1003522 <do_fork+0x3c>
c1003518:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100351d:	e9 9e 00 00 00       	jmp    c10035c0 <do_fork+0xda>
c1003522:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003525:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c100352b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100352e:	89 50 24             	mov    %edx,0x24(%eax)
c1003531:	83 ec 04             	sub    $0x4,%esp
c1003534:	ff 75 10             	pushl  0x10(%ebp)
c1003537:	ff 75 0c             	pushl  0xc(%ebp)
c100353a:	ff 75 f4             	pushl  -0xc(%ebp)
c100353d:	e8 f7 fe ff ff       	call   c1003439 <copy_thread>
c1003542:	83 c4 10             	add    $0x10,%esp
c1003545:	e8 6c fb ff ff       	call   c10030b6 <alloc_pid>
c100354a:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100354d:	89 42 0c             	mov    %eax,0xc(%edx)
c1003550:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003553:	8b 40 0c             	mov    0xc(%eax),%eax
c1003556:	85 c0                	test   %eax,%eax
c1003558:	79 07                	jns    c1003561 <do_fork+0x7b>
c100355a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100355f:	eb 5f                	jmp    c10035c0 <do_fork+0xda>
c1003561:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003564:	83 c0 50             	add    $0x50,%eax
c1003567:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100356a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100356d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003570:	89 50 04             	mov    %edx,0x4(%eax)
c1003573:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003576:	8b 50 04             	mov    0x4(%eax),%edx
c1003579:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100357c:	89 10                	mov    %edx,(%eax)
c100357e:	90                   	nop
c100357f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003582:	83 c0 50             	add    $0x50,%eax
c1003585:	83 ec 0c             	sub    $0xc,%esp
c1003588:	50                   	push   %eax
c1003589:	e8 0c fc ff ff       	call   c100319a <add_link>
c100358e:	83 c4 10             	add    $0x10,%esp
c1003591:	83 ec 0c             	sub    $0xc,%esp
c1003594:	ff 75 f4             	pushl  -0xc(%ebp)
c1003597:	e8 81 fc ff ff       	call   c100321d <add_pid_hash>
c100359c:	83 c4 10             	add    $0x10,%esp
c100359f:	a1 ac 0c 01 c1       	mov    0xc1010cac,%eax
c10035a4:	83 c0 01             	add    $0x1,%eax
c10035a7:	a3 ac 0c 01 c1       	mov    %eax,0xc1010cac
c10035ac:	83 ec 0c             	sub    $0xc,%esp
c10035af:	ff 75 f4             	pushl  -0xc(%ebp)
c10035b2:	e8 0b 00 00 00       	call   c10035c2 <wakeup_task>
c10035b7:	83 c4 10             	add    $0x10,%esp
c10035ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10035bd:	8b 40 0c             	mov    0xc(%eax),%eax
c10035c0:	c9                   	leave  
c10035c1:	c3                   	ret    

c10035c2 <wakeup_task>:
c10035c2:	55                   	push   %ebp
c10035c3:	89 e5                	mov    %esp,%ebp
c10035c5:	8b 45 08             	mov    0x8(%ebp),%eax
c10035c8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10035ce:	90                   	nop
c10035cf:	5d                   	pop    %ebp
c10035d0:	c3                   	ret    

c10035d1 <kernel_thread>:
c10035d1:	55                   	push   %ebp
c10035d2:	89 e5                	mov    %esp,%ebp
c10035d4:	83 ec 58             	sub    $0x58,%esp
c10035d7:	83 ec 04             	sub    $0x4,%esp
c10035da:	6a 4c                	push   $0x4c
c10035dc:	6a 00                	push   $0x0
c10035de:	8d 45 ac             	lea    -0x54(%ebp),%eax
c10035e1:	50                   	push   %eax
c10035e2:	e8 c3 ca ff ff       	call   c10000aa <memset>
c10035e7:	83 c4 10             	add    $0x10,%esp
c10035ea:	66 c7 45 e8 08 00    	movw   $0x8,-0x18(%ebp)
c10035f0:	66 c7 45 f4 10 00    	movw   $0x10,-0xc(%ebp)
c10035f6:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10035fa:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
c10035fe:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
c1003602:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
c1003606:	8b 45 08             	mov    0x8(%ebp),%eax
c1003609:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100360c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100360f:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1003612:	b8 57 3e 00 c1       	mov    $0xc1003e57,%eax
c1003617:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100361a:	83 ec 04             	sub    $0x4,%esp
c100361d:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003620:	50                   	push   %eax
c1003621:	6a 00                	push   $0x0
c1003623:	ff 75 10             	pushl  0x10(%ebp)
c1003626:	e8 bb fe ff ff       	call   c10034e6 <do_fork>
c100362b:	83 c4 10             	add    $0x10,%esp
c100362e:	c9                   	leave  
c100362f:	c3                   	ret    

c1003630 <task_run>:
c1003630:	55                   	push   %ebp
c1003631:	89 e5                	mov    %esp,%ebp
c1003633:	83 ec 18             	sub    $0x18,%esp
c1003636:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100363b:	39 45 08             	cmp    %eax,0x8(%ebp)
c100363e:	74 3b                	je     c100367b <task_run+0x4b>
c1003640:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003645:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003648:	8b 45 08             	mov    0x8(%ebp),%eax
c100364b:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1003650:	8b 45 08             	mov    0x8(%ebp),%eax
c1003653:	8b 40 24             	mov    0x24(%eax),%eax
c1003656:	83 ec 0c             	sub    $0xc,%esp
c1003659:	50                   	push   %eax
c100365a:	e8 f4 d2 ff ff       	call   c1000953 <set_ts_esp0>
c100365f:	83 c4 10             	add    $0x10,%esp
c1003662:	8b 45 08             	mov    0x8(%ebp),%eax
c1003665:	8d 50 30             	lea    0x30(%eax),%edx
c1003668:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100366b:	83 c0 30             	add    $0x30,%eax
c100366e:	83 ec 08             	sub    $0x8,%esp
c1003671:	52                   	push   %edx
c1003672:	50                   	push   %eax
c1003673:	e8 e4 07 00 00       	call   c1003e5c <switch_to>
c1003678:	83 c4 10             	add    $0x10,%esp
c100367b:	90                   	nop
c100367c:	c9                   	leave  
c100367d:	c3                   	ret    

c100367e <schedule>:
c100367e:	55                   	push   %ebp
c100367f:	89 e5                	mov    %esp,%ebp
c1003681:	83 ec 18             	sub    $0x18,%esp
c1003684:	c7 45 ec a4 0c 01 c1 	movl   $0xc1010ca4,-0x14(%ebp)
c100368b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100368e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003691:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003696:	8b 00                	mov    (%eax),%eax
c1003698:	85 c0                	test   %eax,%eax
c100369a:	75 54                	jne    c10036f0 <schedule+0x72>
c100369c:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10036a1:	8b 40 04             	mov    0x4(%eax),%eax
c10036a4:	85 c0                	test   %eax,%eax
c10036a6:	75 48                	jne    c10036f0 <schedule+0x72>
c10036a8:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10036ad:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c10036b4:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10036b9:	83 c0 50             	add    $0x50,%eax
c10036bc:	50                   	push   %eax
c10036bd:	e8 d8 fa ff ff       	call   c100319a <add_link>
c10036c2:	83 c4 04             	add    $0x4,%esp
c10036c5:	eb 29                	jmp    c10036f0 <schedule+0x72>
c10036c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036ca:	83 e8 50             	sub    $0x50,%eax
c10036cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10036d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10036d3:	8b 00                	mov    (%eax),%eax
c10036d5:	85 c0                	test   %eax,%eax
c10036d7:	75 17                	jne    c10036f0 <schedule+0x72>
c10036d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10036dc:	8b 40 04             	mov    0x4(%eax),%eax
c10036df:	85 c0                	test   %eax,%eax
c10036e1:	74 0d                	je     c10036f0 <schedule+0x72>
c10036e3:	ff 75 f4             	pushl  -0xc(%ebp)
c10036e6:	e8 ff fa ff ff       	call   c10031ea <remove_link>
c10036eb:	83 c4 04             	add    $0x4,%esp
c10036ee:	eb 17                	jmp    c1003707 <schedule+0x89>
c10036f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036f3:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10036f6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10036f9:	8b 40 04             	mov    0x4(%eax),%eax
c10036fc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10036ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003702:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1003705:	75 c0                	jne    c10036c7 <schedule+0x49>
c1003707:	83 ec 0c             	sub    $0xc,%esp
c100370a:	ff 75 f0             	pushl  -0x10(%ebp)
c100370d:	e8 1e ff ff ff       	call   c1003630 <task_run>
c1003712:	83 c4 10             	add    $0x10,%esp
c1003715:	90                   	nop
c1003716:	c9                   	leave  
c1003717:	c3                   	ret    

c1003718 <thread_block>:
c1003718:	55                   	push   %ebp
c1003719:	89 e5                	mov    %esp,%ebp
c100371b:	83 ec 18             	sub    $0x18,%esp
c100371e:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1003722:	74 19                	je     c100373d <thread_block+0x25>
c1003724:	68 91 a2 00 c1       	push   $0xc100a291
c1003729:	68 c0 a3 00 c1       	push   $0xc100a3c0
c100372e:	68 7a 01 00 00       	push   $0x17a
c1003733:	68 a4 a2 00 c1       	push   $0xc100a2a4
c1003738:	e8 d0 cb ff ff       	call   c100030d <__PANIC>
c100373d:	e8 0b d6 ff ff       	call   c1000d4d <intr_save>
c1003742:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003745:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100374a:	8b 55 08             	mov    0x8(%ebp),%edx
c100374d:	89 10                	mov    %edx,(%eax)
c100374f:	e8 2a ff ff ff       	call   c100367e <schedule>
c1003754:	83 ec 0c             	sub    $0xc,%esp
c1003757:	ff 75 f4             	pushl  -0xc(%ebp)
c100375a:	e8 01 d6 ff ff       	call   c1000d60 <intr_restore>
c100375f:	83 c4 10             	add    $0x10,%esp
c1003762:	90                   	nop
c1003763:	c9                   	leave  
c1003764:	c3                   	ret    

c1003765 <thread_unblock>:
c1003765:	55                   	push   %ebp
c1003766:	89 e5                	mov    %esp,%ebp
c1003768:	83 ec 18             	sub    $0x18,%esp
c100376b:	c7 45 f0 a4 0c 01 c1 	movl   $0xc1010ca4,-0x10(%ebp)
c1003772:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003775:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003778:	e8 d0 d5 ff ff       	call   c1000d4d <intr_save>
c100377d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003780:	8b 45 08             	mov    0x8(%ebp),%eax
c1003783:	8b 00                	mov    (%eax),%eax
c1003785:	83 f8 01             	cmp    $0x1,%eax
c1003788:	74 19                	je     c10037a3 <thread_unblock+0x3e>
c100378a:	68 d5 a2 00 c1       	push   $0xc100a2d5
c100378f:	68 d0 a3 00 c1       	push   $0xc100a3d0
c1003794:	68 8b 01 00 00       	push   $0x18b
c1003799:	68 a4 a2 00 c1       	push   $0xc100a2a4
c100379e:	e8 6a cb ff ff       	call   c100030d <__PANIC>
c10037a3:	8b 45 08             	mov    0x8(%ebp),%eax
c10037a6:	8b 00                	mov    (%eax),%eax
c10037a8:	83 f8 01             	cmp    $0x1,%eax
c10037ab:	74 58                	je     c1003805 <thread_unblock+0xa0>
c10037ad:	eb 24                	jmp    c10037d3 <thread_unblock+0x6e>
c10037af:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037b2:	83 e8 50             	sub    $0x50,%eax
c10037b5:	39 45 08             	cmp    %eax,0x8(%ebp)
c10037b8:	75 19                	jne    c10037d3 <thread_unblock+0x6e>
c10037ba:	68 ec a2 00 c1       	push   $0xc100a2ec
c10037bf:	68 d0 a3 00 c1       	push   $0xc100a3d0
c10037c4:	68 90 01 00 00       	push   $0x190
c10037c9:	68 a4 a2 00 c1       	push   $0xc100a2a4
c10037ce:	e8 3a cb ff ff       	call   c100030d <__PANIC>
c10037d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037d6:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10037d9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10037dc:	8b 40 04             	mov    0x4(%eax),%eax
c10037df:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10037e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037e5:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c10037e8:	75 c5                	jne    c10037af <thread_unblock+0x4a>
c10037ea:	8b 45 08             	mov    0x8(%ebp),%eax
c10037ed:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10037f3:	8b 45 08             	mov    0x8(%ebp),%eax
c10037f6:	83 c0 50             	add    $0x50,%eax
c10037f9:	83 ec 0c             	sub    $0xc,%esp
c10037fc:	50                   	push   %eax
c10037fd:	e8 98 f9 ff ff       	call   c100319a <add_link>
c1003802:	83 c4 10             	add    $0x10,%esp
c1003805:	83 ec 0c             	sub    $0xc,%esp
c1003808:	ff 75 ec             	pushl  -0x14(%ebp)
c100380b:	e8 50 d5 ff ff       	call   c1000d60 <intr_restore>
c1003810:	83 c4 10             	add    $0x10,%esp
c1003813:	90                   	nop
c1003814:	c9                   	leave  
c1003815:	c3                   	ret    

c1003816 <print_taskinfo>:
c1003816:	55                   	push   %ebp
c1003817:	89 e5                	mov    %esp,%ebp
c1003819:	83 ec 08             	sub    $0x8,%esp
c100381c:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003821:	83 ec 0c             	sub    $0xc,%esp
c1003824:	50                   	push   %eax
c1003825:	e8 3b f9 ff ff       	call   c1003165 <get_task_name>
c100382a:	83 c4 10             	add    $0x10,%esp
c100382d:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c1003833:	8b 52 0c             	mov    0xc(%edx),%edx
c1003836:	83 ec 04             	sub    $0x4,%esp
c1003839:	50                   	push   %eax
c100383a:	52                   	push   %edx
c100383b:	68 20 a3 00 c1       	push   $0xc100a320
c1003840:	e8 6e 0f 00 00       	call   c10047b3 <printk>
c1003845:	83 c4 10             	add    $0x10,%esp
c1003848:	83 ec 08             	sub    $0x8,%esp
c100384b:	ff 75 08             	pushl  0x8(%ebp)
c100384e:	68 42 a3 00 c1       	push   $0xc100a342
c1003853:	e8 5b 0f 00 00       	call   c10047b3 <printk>
c1003858:	83 c4 10             	add    $0x10,%esp
c100385b:	83 ec 0c             	sub    $0xc,%esp
c100385e:	68 4f a3 00 c1       	push   $0xc100a34f
c1003863:	e8 4b 0f 00 00       	call   c10047b3 <printk>
c1003868:	83 c4 10             	add    $0x10,%esp
c100386b:	b8 00 00 00 00       	mov    $0x0,%eax
c1003870:	c9                   	leave  
c1003871:	c3                   	ret    

c1003872 <do_exit>:
c1003872:	55                   	push   %ebp
c1003873:	89 e5                	mov    %esp,%ebp
c1003875:	83 ec 08             	sub    $0x8,%esp
c1003878:	83 ec 0c             	sub    $0xc,%esp
c100387b:	68 6b a3 00 c1       	push   $0xc100a36b
c1003880:	e8 2e 0f 00 00       	call   c10047b3 <printk>
c1003885:	83 c4 10             	add    $0x10,%esp
c1003888:	eb fe                	jmp    c1003888 <do_exit+0x16>

c100388a <do_execve>:
c100388a:	55                   	push   %ebp
c100388b:	89 e5                	mov    %esp,%ebp
c100388d:	83 ec 38             	sub    $0x38,%esp
c1003890:	8b 45 10             	mov    0x10(%ebp),%eax
c1003893:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003896:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003899:	8b 50 1c             	mov    0x1c(%eax),%edx
c100389c:	8b 45 10             	mov    0x10(%ebp),%eax
c100389f:	01 d0                	add    %edx,%eax
c10038a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10038a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10038a7:	0f b7 40 2c          	movzwl 0x2c(%eax),%eax
c10038ab:	0f b7 c0             	movzwl %ax,%eax
c10038ae:	c1 e0 05             	shl    $0x5,%eax
c10038b1:	89 c2                	mov    %eax,%edx
c10038b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038b6:	01 d0                	add    %edx,%eax
c10038b8:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10038bb:	e8 65 f5 ff ff       	call   c1002e25 <setup_pgdir>
c10038c0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10038c3:	eb 7b                	jmp    c1003940 <do_execve+0xb6>
c10038c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038c8:	8b 50 04             	mov    0x4(%eax),%edx
c10038cb:	8b 45 10             	mov    0x10(%ebp),%eax
c10038ce:	01 d0                	add    %edx,%eax
c10038d0:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10038d3:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
c10038d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038da:	8b 50 08             	mov    0x8(%eax),%edx
c10038dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038e0:	8b 40 10             	mov    0x10(%eax),%eax
c10038e3:	01 d0                	add    %edx,%eax
c10038e5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10038e8:	c6 45 d3 00          	movb   $0x0,-0x2d(%ebp)
c10038ec:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
c10038f0:	8d 88 00 00 00 80    	lea    -0x80000000(%eax),%ecx
c10038f6:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
c10038fa:	8d 90 00 00 00 80    	lea    -0x80000000(%eax),%edx
c1003900:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003903:	83 ec 04             	sub    $0x4,%esp
c1003906:	51                   	push   %ecx
c1003907:	52                   	push   %edx
c1003908:	50                   	push   %eax
c1003909:	e8 43 f4 ff ff       	call   c1002d51 <vmm_map>
c100390e:	83 c4 10             	add    $0x10,%esp
c1003911:	0f b6 55 d3          	movzbl -0x2d(%ebp),%edx
c1003915:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
c1003919:	29 c2                	sub    %eax,%edx
c100391b:	89 d0                	mov    %edx,%eax
c100391d:	89 c1                	mov    %eax,%ecx
c100391f:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
c1003923:	89 c2                	mov    %eax,%edx
c1003925:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
c1003929:	05 00 00 00 80       	add    $0x80000000,%eax
c100392e:	83 ec 04             	sub    $0x4,%esp
c1003931:	51                   	push   %ecx
c1003932:	52                   	push   %edx
c1003933:	50                   	push   %eax
c1003934:	e8 cf c7 ff ff       	call   c1000108 <memcpy>
c1003939:	83 c4 10             	add    $0x10,%esp
c100393c:	83 45 f4 20          	addl   $0x20,-0xc(%ebp)
c1003940:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003943:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1003946:	0f 82 79 ff ff ff    	jb     c10038c5 <do_execve+0x3b>
c100394c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100394f:	83 ec 04             	sub    $0x4,%esp
c1003952:	68 00 20 00 a0       	push   $0xa0002000
c1003957:	68 00 00 00 a0       	push   $0xa0000000
c100395c:	50                   	push   %eax
c100395d:	e8 ef f3 ff ff       	call   c1002d51 <vmm_map>
c1003962:	83 c4 10             	add    $0x10,%esp
c1003965:	c7 45 e4 00 20 00 a0 	movl   $0xa0002000,-0x1c(%ebp)
c100396c:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003971:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003974:	81 c2 00 00 00 40    	add    $0x40000000,%edx
c100397a:	89 50 28             	mov    %edx,0x28(%eax)
c100397d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003980:	05 00 00 00 40       	add    $0x40000000,%eax
c1003985:	83 ec 0c             	sub    $0xc,%esp
c1003988:	50                   	push   %eax
c1003989:	e8 c8 c8 ff ff       	call   c1000256 <lcr3>
c100398e:	83 c4 10             	add    $0x10,%esp
c1003991:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003996:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003999:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100399c:	83 ec 04             	sub    $0x4,%esp
c100399f:	6a 4c                	push   $0x4c
c10039a1:	6a 00                	push   $0x0
c10039a3:	ff 75 e0             	pushl  -0x20(%ebp)
c10039a6:	e8 ff c6 ff ff       	call   c10000aa <memset>
c10039ab:	83 c4 10             	add    $0x10,%esp
c10039ae:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039b1:	66 c7 40 3c 1b 00    	movw   $0x1b,0x3c(%eax)
c10039b7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039ba:	66 c7 40 48 23 00    	movw   $0x23,0x48(%eax)
c10039c0:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039c3:	0f b7 50 48          	movzwl 0x48(%eax),%edx
c10039c7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039ca:	66 89 50 28          	mov    %dx,0x28(%eax)
c10039ce:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039d1:	0f b7 50 28          	movzwl 0x28(%eax),%edx
c10039d5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039d8:	66 89 50 2c          	mov    %dx,0x2c(%eax)
c10039dc:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039df:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10039e2:	89 50 44             	mov    %edx,0x44(%eax)
c10039e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10039e8:	8b 50 18             	mov    0x18(%eax),%edx
c10039eb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039ee:	89 50 38             	mov    %edx,0x38(%eax)
c10039f1:	b8 00 00 00 00       	mov    $0x0,%eax
c10039f6:	c9                   	leave  
c10039f7:	c3                   	ret    

c10039f8 <kernel_execve>:
c10039f8:	55                   	push   %ebp
c10039f9:	89 e5                	mov    %esp,%ebp
c10039fb:	83 ec 18             	sub    $0x18,%esp
c10039fe:	83 ec 0c             	sub    $0xc,%esp
c1003a01:	ff 75 08             	pushl  0x8(%ebp)
c1003a04:	e8 15 c7 ff ff       	call   c100011e <strlen>
c1003a09:	83 c4 10             	add    $0x10,%esp
c1003a0c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003a0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003a12:	c9                   	leave  
c1003a13:	c3                   	ret    

c1003a14 <user_main>:
c1003a14:	55                   	push   %ebp
c1003a15:	89 e5                	mov    %esp,%ebp
c1003a17:	90                   	nop
c1003a18:	5d                   	pop    %ebp
c1003a19:	c3                   	ret    

c1003a1a <set_user_cr3>:
c1003a1a:	55                   	push   %ebp
c1003a1b:	89 e5                	mov    %esp,%ebp
c1003a1d:	57                   	push   %edi
c1003a1e:	56                   	push   %esi
c1003a1f:	53                   	push   %ebx
c1003a20:	83 ec 3c             	sub    $0x3c,%esp
c1003a23:	83 ec 08             	sub    $0x8,%esp
c1003a26:	6a 02                	push   $0x2
c1003a28:	68 00 10 00 00       	push   $0x1000
c1003a2d:	e8 11 f1 ff ff       	call   c1002b43 <vmm_malloc>
c1003a32:	83 c4 10             	add    $0x10,%esp
c1003a35:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1003a38:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1003a3b:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1003a40:	ba 00 10 00 00       	mov    $0x1000,%edx
c1003a45:	8b 0b                	mov    (%ebx),%ecx
c1003a47:	89 08                	mov    %ecx,(%eax)
c1003a49:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003a4d:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003a51:	8d 78 04             	lea    0x4(%eax),%edi
c1003a54:	83 e7 fc             	and    $0xfffffffc,%edi
c1003a57:	29 f8                	sub    %edi,%eax
c1003a59:	29 c3                	sub    %eax,%ebx
c1003a5b:	01 c2                	add    %eax,%edx
c1003a5d:	83 e2 fc             	and    $0xfffffffc,%edx
c1003a60:	89 d0                	mov    %edx,%eax
c1003a62:	c1 e8 02             	shr    $0x2,%eax
c1003a65:	89 de                	mov    %ebx,%esi
c1003a67:	89 c1                	mov    %eax,%ecx
c1003a69:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003a6b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1003a6e:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1003a71:	a1 00 1c 61 c1       	mov    0xc1611c00,%eax
c1003a76:	83 ec 08             	sub    $0x8,%esp
c1003a79:	50                   	push   %eax
c1003a7a:	68 77 a3 00 c1       	push   $0xc100a377
c1003a7f:	e8 2f 0d 00 00       	call   c10047b3 <printk>
c1003a84:	83 c4 10             	add    $0x10,%esp
c1003a87:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1003a8a:	05 00 0c 00 00       	add    $0xc00,%eax
c1003a8f:	8b 00                	mov    (%eax),%eax
c1003a91:	83 ec 08             	sub    $0x8,%esp
c1003a94:	50                   	push   %eax
c1003a95:	68 8b a3 00 c1       	push   $0xc100a38b
c1003a9a:	e8 14 0d 00 00       	call   c10047b3 <printk>
c1003a9f:	83 c4 10             	add    $0x10,%esp
c1003aa2:	c7 45 cc e0 00 00 00 	movl   $0xe0,-0x34(%ebp)
c1003aa9:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1003ab0:	eb 31                	jmp    c1003ae3 <set_user_cr3+0xc9>
c1003ab2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003ab5:	05 00 03 00 00       	add    $0x300,%eax
c1003aba:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003ac1:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1003ac4:	01 d0                	add    %edx,%eax
c1003ac6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003ac9:	81 c2 00 03 00 00    	add    $0x300,%edx
c1003acf:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1003ad6:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1003ad9:	01 ca                	add    %ecx,%edx
c1003adb:	8b 00                	mov    (%eax),%eax
c1003add:	89 02                	mov    %eax,(%edx)
c1003adf:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1003ae3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003ae6:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1003ae9:	72 c7                	jb     c1003ab2 <set_user_cr3+0x98>
c1003aeb:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1003aee:	05 10 0c 00 00       	add    $0xc10,%eax
c1003af3:	8b 10                	mov    (%eax),%edx
c1003af5:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1003af8:	05 10 0c 00 00       	add    $0xc10,%eax
c1003afd:	83 ca 04             	or     $0x4,%edx
c1003b00:	89 10                	mov    %edx,(%eax)
c1003b02:	a1 00 1c 61 c1       	mov    0xc1611c00,%eax
c1003b07:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003b0c:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1003b11:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1003b14:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1003b17:	8b 00                	mov    (%eax),%eax
c1003b19:	83 ec 08             	sub    $0x8,%esp
c1003b1c:	50                   	push   %eax
c1003b1d:	68 9b a3 00 c1       	push   $0xc100a39b
c1003b22:	e8 8c 0c 00 00       	call   c10047b3 <printk>
c1003b27:	83 c4 10             	add    $0x10,%esp
c1003b2a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
c1003b31:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
c1003b38:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
c1003b3f:	eb 30                	jmp    c1003b71 <set_user_cr3+0x157>
c1003b41:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003b44:	8d 50 01             	lea    0x1(%eax),%edx
c1003b47:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1003b4a:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
c1003b51:	8b 55 c8             	mov    -0x38(%ebp),%edx
c1003b54:	01 d1                	add    %edx,%ecx
c1003b56:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003b5d:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1003b60:	01 c2                	add    %eax,%edx
c1003b62:	8b 01                	mov    (%ecx),%eax
c1003b64:	89 02                	mov    %eax,(%edx)
c1003b66:	81 45 e0 00 10 00 00 	addl   $0x1000,-0x20(%ebp)
c1003b6d:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
c1003b71:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1003b74:	c1 e0 0a             	shl    $0xa,%eax
c1003b77:	39 45 d8             	cmp    %eax,-0x28(%ebp)
c1003b7a:	72 c5                	jb     c1003b41 <set_user_cr3+0x127>
c1003b7c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1003b7f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1003b82:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1003b85:	c1 e8 16             	shr    $0x16,%eax
c1003b88:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003b8f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1003b92:	01 d0                	add    %edx,%eax
c1003b94:	8b 00                	mov    (%eax),%eax
c1003b96:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003b9b:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1003ba0:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1003ba3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1003ba6:	c1 e8 0c             	shr    $0xc,%eax
c1003ba9:	25 ff 03 00 00       	and    $0x3ff,%eax
c1003bae:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003bb5:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1003bb8:	01 d0                	add    %edx,%eax
c1003bba:	8b 00                	mov    (%eax),%eax
c1003bbc:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003bc1:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1003bc4:	83 ec 08             	sub    $0x8,%esp
c1003bc7:	ff 75 bc             	pushl  -0x44(%ebp)
c1003bca:	68 a6 a3 00 c1       	push   $0xc100a3a6
c1003bcf:	e8 df 0b 00 00       	call   c10047b3 <printk>
c1003bd4:	83 c4 10             	add    $0x10,%esp
c1003bd7:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1003bda:	05 04 40 00 00       	add    $0x4004,%eax
c1003bdf:	8b 10                	mov    (%eax),%edx
c1003be1:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1003be4:	05 04 40 00 00       	add    $0x4004,%eax
c1003be9:	83 ca 04             	or     $0x4,%edx
c1003bec:	89 10                	mov    %edx,(%eax)
c1003bee:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1003bf1:	05 08 40 00 00       	add    $0x4008,%eax
c1003bf6:	8b 10                	mov    (%eax),%edx
c1003bf8:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1003bfb:	05 08 40 00 00       	add    $0x4008,%eax
c1003c00:	83 ca 04             	or     $0x4,%edx
c1003c03:	89 10                	mov    %edx,(%eax)
c1003c05:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1003c08:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003c0b:	5b                   	pop    %ebx
c1003c0c:	5e                   	pop    %esi
c1003c0d:	5f                   	pop    %edi
c1003c0e:	5d                   	pop    %ebp
c1003c0f:	c3                   	ret    

c1003c10 <user_task_init>:
c1003c10:	55                   	push   %ebp
c1003c11:	89 e5                	mov    %esp,%ebp
c1003c13:	53                   	push   %ebx
c1003c14:	83 ec 14             	sub    $0x14,%esp
c1003c17:	83 ec 0c             	sub    $0xc,%esp
c1003c1a:	6a 00                	push   $0x0
c1003c1c:	e8 28 f7 ff ff       	call   c1003349 <alloc_task>
c1003c21:	83 c4 10             	add    $0x10,%esp
c1003c24:	a3 0c 30 a1 c1       	mov    %eax,0xc1a1300c
c1003c29:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c2e:	85 c0                	test   %eax,%eax
c1003c30:	75 10                	jne    c1003c42 <user_task_init+0x32>
c1003c32:	83 ec 0c             	sub    $0xc,%esp
c1003c35:	68 78 a2 00 c1       	push   $0xc100a278
c1003c3a:	e8 74 0b 00 00       	call   c10047b3 <printk>
c1003c3f:	83 c4 10             	add    $0x10,%esp
c1003c42:	83 ec 08             	sub    $0x8,%esp
c1003c45:	6a 02                	push   $0x2
c1003c47:	68 00 10 00 00       	push   $0x1000
c1003c4c:	e8 f2 ee ff ff       	call   c1002b43 <vmm_malloc>
c1003c51:	83 c4 10             	add    $0x10,%esp
c1003c54:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003c57:	83 ec 04             	sub    $0x4,%esp
c1003c5a:	68 00 10 00 00       	push   $0x1000
c1003c5f:	ff 75 08             	pushl  0x8(%ebp)
c1003c62:	ff 75 f4             	pushl  -0xc(%ebp)
c1003c65:	e8 9e c4 ff ff       	call   c1000108 <memcpy>
c1003c6a:	83 c4 10             	add    $0x10,%esp
c1003c6d:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c72:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003c78:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c7d:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003c84:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c89:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1003c90:	8b 1d 0c 30 a1 c1    	mov    0xc1a1300c,%ebx
c1003c96:	e8 1b f4 ff ff       	call   c10030b6 <alloc_pid>
c1003c9b:	89 43 0c             	mov    %eax,0xc(%ebx)
c1003c9e:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ca3:	83 ec 08             	sub    $0x8,%esp
c1003ca6:	68 b4 a3 00 c1       	push   $0xc100a3b4
c1003cab:	50                   	push   %eax
c1003cac:	e8 7f f4 ff ff       	call   c1003130 <set_task_name>
c1003cb1:	83 c4 10             	add    $0x10,%esp
c1003cb4:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003cb9:	89 c2                	mov    %eax,%edx
c1003cbb:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003cc0:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1003cc6:	89 50 24             	mov    %edx,0x24(%eax)
c1003cc9:	8b 1d 0c 30 a1 c1    	mov    0xc1a1300c,%ebx
c1003ccf:	e8 46 fd ff ff       	call   c1003a1a <set_user_cr3>
c1003cd4:	89 43 28             	mov    %eax,0x28(%ebx)
c1003cd7:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003cdc:	8b 40 28             	mov    0x28(%eax),%eax
c1003cdf:	83 ec 0c             	sub    $0xc,%esp
c1003ce2:	50                   	push   %eax
c1003ce3:	e8 6e c5 ff ff       	call   c1000256 <lcr3>
c1003ce8:	83 c4 10             	add    $0x10,%esp
c1003ceb:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003cf0:	8b 40 24             	mov    0x24(%eax),%eax
c1003cf3:	8d 50 b4             	lea    -0x4c(%eax),%edx
c1003cf6:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003cfb:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003cfe:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003d03:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d06:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1003d0d:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003d12:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d15:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1003d1c:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003d21:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d24:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1003d2b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003d30:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d33:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c1003d3a:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003d3f:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d42:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003d48:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003d4d:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d50:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c1003d57:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003d5c:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d5f:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1003d66:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003d6b:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d6e:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1003d75:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003d7a:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d7d:	66 c7 40 3c 1b 00    	movw   $0x1b,0x3c(%eax)
c1003d83:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003d88:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d8b:	66 c7 40 48 23 00    	movw   $0x23,0x48(%eax)
c1003d91:	8b 15 0c 30 a1 c1    	mov    0xc1a1300c,%edx
c1003d97:	8b 52 2c             	mov    0x2c(%edx),%edx
c1003d9a:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c1003d9e:	66 89 42 24          	mov    %ax,0x24(%edx)
c1003da2:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003da7:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003daa:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1003dae:	66 89 50 28          	mov    %dx,0x28(%eax)
c1003db2:	8b 15 0c 30 a1 c1    	mov    0xc1a1300c,%edx
c1003db8:	8b 52 2c             	mov    0x2c(%edx),%edx
c1003dbb:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1003dbf:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1003dc3:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003dc8:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003dcb:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1003dd1:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003dd6:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003dd9:	8b 55 08             	mov    0x8(%ebp),%edx
c1003ddc:	89 50 38             	mov    %edx,0x38(%eax)
c1003ddf:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003de4:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003de7:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1003dee:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003df3:	8b 50 24             	mov    0x24(%eax),%edx
c1003df6:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003dfb:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003dfe:	83 ea 4c             	sub    $0x4c,%edx
c1003e01:	89 50 44             	mov    %edx,0x44(%eax)
c1003e04:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003e09:	83 c0 50             	add    $0x50,%eax
c1003e0c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003e0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003e12:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003e15:	89 50 04             	mov    %edx,0x4(%eax)
c1003e18:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003e1b:	8b 50 04             	mov    0x4(%eax),%edx
c1003e1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003e21:	89 10                	mov    %edx,(%eax)
c1003e23:	90                   	nop
c1003e24:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003e29:	83 ec 0c             	sub    $0xc,%esp
c1003e2c:	50                   	push   %eax
c1003e2d:	e8 eb f3 ff ff       	call   c100321d <add_pid_hash>
c1003e32:	83 c4 10             	add    $0x10,%esp
c1003e35:	a1 ac 0c 01 c1       	mov    0xc1010cac,%eax
c1003e3a:	83 c0 01             	add    $0x1,%eax
c1003e3d:	a3 ac 0c 01 c1       	mov    %eax,0xc1010cac
c1003e42:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003e47:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003e4a:	89 c4                	mov    %eax,%esp
c1003e4c:	e9 37 cf ff ff       	jmp    c1000d88 <__trapret>
c1003e51:	90                   	nop
c1003e52:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1003e55:	c9                   	leave  
c1003e56:	c3                   	ret    

c1003e57 <kernel_thread_entry>:
c1003e57:	fb                   	sti    
c1003e58:	52                   	push   %edx
c1003e59:	ff d3                	call   *%ebx
c1003e5b:	c3                   	ret    

c1003e5c <switch_to>:
c1003e5c:	8b 44 24 04          	mov    0x4(%esp),%eax
c1003e60:	8f 00                	popl   (%eax)
c1003e62:	89 60 04             	mov    %esp,0x4(%eax)
c1003e65:	89 58 08             	mov    %ebx,0x8(%eax)
c1003e68:	89 48 0c             	mov    %ecx,0xc(%eax)
c1003e6b:	89 50 10             	mov    %edx,0x10(%eax)
c1003e6e:	89 70 14             	mov    %esi,0x14(%eax)
c1003e71:	89 78 18             	mov    %edi,0x18(%eax)
c1003e74:	89 68 1c             	mov    %ebp,0x1c(%eax)
c1003e77:	8b 44 24 04          	mov    0x4(%esp),%eax
c1003e7b:	8b 68 1c             	mov    0x1c(%eax),%ebp
c1003e7e:	8b 78 18             	mov    0x18(%eax),%edi
c1003e81:	8b 70 14             	mov    0x14(%eax),%esi
c1003e84:	8b 50 10             	mov    0x10(%eax),%edx
c1003e87:	8b 48 0c             	mov    0xc(%eax),%ecx
c1003e8a:	8b 58 08             	mov    0x8(%eax),%ebx
c1003e8d:	8b 60 04             	mov    0x4(%eax),%esp
c1003e90:	ff 30                	pushl  (%eax)
c1003e92:	c3                   	ret    

c1003e93 <pic_setmask>:
c1003e93:	55                   	push   %ebp
c1003e94:	89 e5                	mov    %esp,%ebp
c1003e96:	83 ec 28             	sub    $0x28,%esp
c1003e99:	8b 45 08             	mov    0x8(%ebp),%eax
c1003e9c:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
c1003ea0:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1003ea4:	66 a3 c4 da 00 c1    	mov    %ax,0xc100dac4
c1003eaa:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1003eae:	88 45 f7             	mov    %al,-0x9(%ebp)
c1003eb1:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1003eb5:	66 c1 e8 08          	shr    $0x8,%ax
c1003eb9:	88 45 f6             	mov    %al,-0xa(%ebp)
c1003ebc:	0f b6 05 c5 0c 01 c1 	movzbl 0xc1010cc5,%eax
c1003ec3:	84 c0                	test   %al,%al
c1003ec5:	74 27                	je     c1003eee <pic_setmask+0x5b>
c1003ec7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1003ecb:	83 ec 08             	sub    $0x8,%esp
c1003ece:	50                   	push   %eax
c1003ecf:	6a 21                	push   $0x21
c1003ed1:	e8 66 c1 ff ff       	call   c100003c <outb>
c1003ed6:	83 c4 10             	add    $0x10,%esp
c1003ed9:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1003edd:	83 ec 08             	sub    $0x8,%esp
c1003ee0:	50                   	push   %eax
c1003ee1:	68 a1 00 00 00       	push   $0xa1
c1003ee6:	e8 51 c1 ff ff       	call   c100003c <outb>
c1003eeb:	83 c4 10             	add    $0x10,%esp
c1003eee:	90                   	nop
c1003eef:	c9                   	leave  
c1003ef0:	c3                   	ret    

c1003ef1 <pic_enable>:
c1003ef1:	55                   	push   %ebp
c1003ef2:	89 e5                	mov    %esp,%ebp
c1003ef4:	83 ec 08             	sub    $0x8,%esp
c1003ef7:	8b 45 08             	mov    0x8(%ebp),%eax
c1003efa:	ba 01 00 00 00       	mov    $0x1,%edx
c1003eff:	89 c1                	mov    %eax,%ecx
c1003f01:	d3 e2                	shl    %cl,%edx
c1003f03:	89 d0                	mov    %edx,%eax
c1003f05:	f7 d0                	not    %eax
c1003f07:	89 c2                	mov    %eax,%edx
c1003f09:	0f b7 05 c4 da 00 c1 	movzwl 0xc100dac4,%eax
c1003f10:	21 d0                	and    %edx,%eax
c1003f12:	0f b7 c0             	movzwl %ax,%eax
c1003f15:	83 ec 0c             	sub    $0xc,%esp
c1003f18:	50                   	push   %eax
c1003f19:	e8 75 ff ff ff       	call   c1003e93 <pic_setmask>
c1003f1e:	83 c4 10             	add    $0x10,%esp
c1003f21:	90                   	nop
c1003f22:	c9                   	leave  
c1003f23:	c3                   	ret    

c1003f24 <pic_init>:
c1003f24:	55                   	push   %ebp
c1003f25:	89 e5                	mov    %esp,%ebp
c1003f27:	83 ec 08             	sub    $0x8,%esp
c1003f2a:	c6 05 c5 0c 01 c1 01 	movb   $0x1,0xc1010cc5
c1003f31:	83 ec 08             	sub    $0x8,%esp
c1003f34:	68 ff 00 00 00       	push   $0xff
c1003f39:	6a 21                	push   $0x21
c1003f3b:	e8 fc c0 ff ff       	call   c100003c <outb>
c1003f40:	83 c4 10             	add    $0x10,%esp
c1003f43:	83 ec 08             	sub    $0x8,%esp
c1003f46:	68 ff 00 00 00       	push   $0xff
c1003f4b:	68 a1 00 00 00       	push   $0xa1
c1003f50:	e8 e7 c0 ff ff       	call   c100003c <outb>
c1003f55:	83 c4 10             	add    $0x10,%esp
c1003f58:	83 ec 08             	sub    $0x8,%esp
c1003f5b:	6a 11                	push   $0x11
c1003f5d:	6a 20                	push   $0x20
c1003f5f:	e8 d8 c0 ff ff       	call   c100003c <outb>
c1003f64:	83 c4 10             	add    $0x10,%esp
c1003f67:	83 ec 08             	sub    $0x8,%esp
c1003f6a:	6a 11                	push   $0x11
c1003f6c:	68 a0 00 00 00       	push   $0xa0
c1003f71:	e8 c6 c0 ff ff       	call   c100003c <outb>
c1003f76:	83 c4 10             	add    $0x10,%esp
c1003f79:	83 ec 08             	sub    $0x8,%esp
c1003f7c:	6a 20                	push   $0x20
c1003f7e:	6a 21                	push   $0x21
c1003f80:	e8 b7 c0 ff ff       	call   c100003c <outb>
c1003f85:	83 c4 10             	add    $0x10,%esp
c1003f88:	83 ec 08             	sub    $0x8,%esp
c1003f8b:	6a 28                	push   $0x28
c1003f8d:	68 a1 00 00 00       	push   $0xa1
c1003f92:	e8 a5 c0 ff ff       	call   c100003c <outb>
c1003f97:	83 c4 10             	add    $0x10,%esp
c1003f9a:	83 ec 08             	sub    $0x8,%esp
c1003f9d:	6a 04                	push   $0x4
c1003f9f:	6a 21                	push   $0x21
c1003fa1:	e8 96 c0 ff ff       	call   c100003c <outb>
c1003fa6:	83 c4 10             	add    $0x10,%esp
c1003fa9:	83 ec 08             	sub    $0x8,%esp
c1003fac:	6a 02                	push   $0x2
c1003fae:	68 a1 00 00 00       	push   $0xa1
c1003fb3:	e8 84 c0 ff ff       	call   c100003c <outb>
c1003fb8:	83 c4 10             	add    $0x10,%esp
c1003fbb:	83 ec 08             	sub    $0x8,%esp
c1003fbe:	6a 03                	push   $0x3
c1003fc0:	6a 21                	push   $0x21
c1003fc2:	e8 75 c0 ff ff       	call   c100003c <outb>
c1003fc7:	83 c4 10             	add    $0x10,%esp
c1003fca:	83 ec 08             	sub    $0x8,%esp
c1003fcd:	6a 03                	push   $0x3
c1003fcf:	68 a1 00 00 00       	push   $0xa1
c1003fd4:	e8 63 c0 ff ff       	call   c100003c <outb>
c1003fd9:	83 c4 10             	add    $0x10,%esp
c1003fdc:	83 ec 08             	sub    $0x8,%esp
c1003fdf:	6a 68                	push   $0x68
c1003fe1:	6a 20                	push   $0x20
c1003fe3:	e8 54 c0 ff ff       	call   c100003c <outb>
c1003fe8:	83 c4 10             	add    $0x10,%esp
c1003feb:	83 ec 08             	sub    $0x8,%esp
c1003fee:	6a 68                	push   $0x68
c1003ff0:	68 a0 00 00 00       	push   $0xa0
c1003ff5:	e8 42 c0 ff ff       	call   c100003c <outb>
c1003ffa:	83 c4 10             	add    $0x10,%esp
c1003ffd:	83 ec 08             	sub    $0x8,%esp
c1004000:	6a 0a                	push   $0xa
c1004002:	6a 20                	push   $0x20
c1004004:	e8 33 c0 ff ff       	call   c100003c <outb>
c1004009:	83 c4 10             	add    $0x10,%esp
c100400c:	83 ec 08             	sub    $0x8,%esp
c100400f:	6a 0a                	push   $0xa
c1004011:	68 a0 00 00 00       	push   $0xa0
c1004016:	e8 21 c0 ff ff       	call   c100003c <outb>
c100401b:	83 c4 10             	add    $0x10,%esp
c100401e:	0f b7 05 c4 da 00 c1 	movzwl 0xc100dac4,%eax
c1004025:	66 83 f8 ff          	cmp    $0xffff,%ax
c1004029:	74 16                	je     c1004041 <pic_init+0x11d>
c100402b:	0f b7 05 c4 da 00 c1 	movzwl 0xc100dac4,%eax
c1004032:	0f b7 c0             	movzwl %ax,%eax
c1004035:	83 ec 0c             	sub    $0xc,%esp
c1004038:	50                   	push   %eax
c1004039:	e8 55 fe ff ff       	call   c1003e93 <pic_setmask>
c100403e:	83 c4 10             	add    $0x10,%esp
c1004041:	90                   	nop
c1004042:	c9                   	leave  
c1004043:	c3                   	ret    

c1004044 <delay>:
c1004044:	55                   	push   %ebp
c1004045:	89 e5                	mov    %esp,%ebp
c1004047:	83 ec 08             	sub    $0x8,%esp
c100404a:	83 ec 0c             	sub    $0xc,%esp
c100404d:	68 84 00 00 00       	push   $0x84
c1004052:	e8 a9 bf ff ff       	call   c1000000 <inb>
c1004057:	83 c4 10             	add    $0x10,%esp
c100405a:	83 ec 0c             	sub    $0xc,%esp
c100405d:	68 84 00 00 00       	push   $0x84
c1004062:	e8 99 bf ff ff       	call   c1000000 <inb>
c1004067:	83 c4 10             	add    $0x10,%esp
c100406a:	83 ec 0c             	sub    $0xc,%esp
c100406d:	68 84 00 00 00       	push   $0x84
c1004072:	e8 89 bf ff ff       	call   c1000000 <inb>
c1004077:	83 c4 10             	add    $0x10,%esp
c100407a:	83 ec 0c             	sub    $0xc,%esp
c100407d:	68 84 00 00 00       	push   $0x84
c1004082:	e8 79 bf ff ff       	call   c1000000 <inb>
c1004087:	83 c4 10             	add    $0x10,%esp
c100408a:	90                   	nop
c100408b:	c9                   	leave  
c100408c:	c3                   	ret    

c100408d <serial_init>:
c100408d:	55                   	push   %ebp
c100408e:	89 e5                	mov    %esp,%ebp
c1004090:	83 ec 08             	sub    $0x8,%esp
c1004093:	83 ec 08             	sub    $0x8,%esp
c1004096:	6a 00                	push   $0x0
c1004098:	68 fa 03 00 00       	push   $0x3fa
c100409d:	e8 9a bf ff ff       	call   c100003c <outb>
c10040a2:	83 c4 10             	add    $0x10,%esp
c10040a5:	83 ec 08             	sub    $0x8,%esp
c10040a8:	68 80 00 00 00       	push   $0x80
c10040ad:	68 fb 03 00 00       	push   $0x3fb
c10040b2:	e8 85 bf ff ff       	call   c100003c <outb>
c10040b7:	83 c4 10             	add    $0x10,%esp
c10040ba:	83 ec 08             	sub    $0x8,%esp
c10040bd:	6a 0c                	push   $0xc
c10040bf:	68 f8 03 00 00       	push   $0x3f8
c10040c4:	e8 73 bf ff ff       	call   c100003c <outb>
c10040c9:	83 c4 10             	add    $0x10,%esp
c10040cc:	83 ec 08             	sub    $0x8,%esp
c10040cf:	6a 00                	push   $0x0
c10040d1:	68 f9 03 00 00       	push   $0x3f9
c10040d6:	e8 61 bf ff ff       	call   c100003c <outb>
c10040db:	83 c4 10             	add    $0x10,%esp
c10040de:	83 ec 08             	sub    $0x8,%esp
c10040e1:	6a 03                	push   $0x3
c10040e3:	68 fb 03 00 00       	push   $0x3fb
c10040e8:	e8 4f bf ff ff       	call   c100003c <outb>
c10040ed:	83 c4 10             	add    $0x10,%esp
c10040f0:	83 ec 08             	sub    $0x8,%esp
c10040f3:	6a 00                	push   $0x0
c10040f5:	68 fc 03 00 00       	push   $0x3fc
c10040fa:	e8 3d bf ff ff       	call   c100003c <outb>
c10040ff:	83 c4 10             	add    $0x10,%esp
c1004102:	83 ec 08             	sub    $0x8,%esp
c1004105:	6a 01                	push   $0x1
c1004107:	68 f9 03 00 00       	push   $0x3f9
c100410c:	e8 2b bf ff ff       	call   c100003c <outb>
c1004111:	83 c4 10             	add    $0x10,%esp
c1004114:	83 ec 0c             	sub    $0xc,%esp
c1004117:	68 fd 03 00 00       	push   $0x3fd
c100411c:	e8 df be ff ff       	call   c1000000 <inb>
c1004121:	83 c4 10             	add    $0x10,%esp
c1004124:	3c ff                	cmp    $0xff,%al
c1004126:	0f 95 c0             	setne  %al
c1004129:	a2 c6 0c 01 c1       	mov    %al,0xc1010cc6
c100412e:	83 ec 0c             	sub    $0xc,%esp
c1004131:	68 fa 03 00 00       	push   $0x3fa
c1004136:	e8 c5 be ff ff       	call   c1000000 <inb>
c100413b:	83 c4 10             	add    $0x10,%esp
c100413e:	83 ec 0c             	sub    $0xc,%esp
c1004141:	68 f8 03 00 00       	push   $0x3f8
c1004146:	e8 b5 be ff ff       	call   c1000000 <inb>
c100414b:	83 c4 10             	add    $0x10,%esp
c100414e:	0f b6 05 c6 0c 01 c1 	movzbl 0xc1010cc6,%eax
c1004155:	84 c0                	test   %al,%al
c1004157:	74 1d                	je     c1004176 <serial_init+0xe9>
c1004159:	83 ec 0c             	sub    $0xc,%esp
c100415c:	68 df a3 00 c1       	push   $0xc100a3df
c1004161:	e8 4d 06 00 00       	call   c10047b3 <printk>
c1004166:	83 c4 10             	add    $0x10,%esp
c1004169:	83 ec 0c             	sub    $0xc,%esp
c100416c:	6a 04                	push   $0x4
c100416e:	e8 7e fd ff ff       	call   c1003ef1 <pic_enable>
c1004173:	83 c4 10             	add    $0x10,%esp
c1004176:	90                   	nop
c1004177:	c9                   	leave  
c1004178:	c3                   	ret    

c1004179 <lpt_putc_sub>:
c1004179:	55                   	push   %ebp
c100417a:	89 e5                	mov    %esp,%ebp
c100417c:	83 ec 18             	sub    $0x18,%esp
c100417f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004186:	eb 09                	jmp    c1004191 <lpt_putc_sub+0x18>
c1004188:	e8 b7 fe ff ff       	call   c1004044 <delay>
c100418d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004191:	83 ec 0c             	sub    $0xc,%esp
c1004194:	68 79 03 00 00       	push   $0x379
c1004199:	e8 62 be ff ff       	call   c1000000 <inb>
c100419e:	83 c4 10             	add    $0x10,%esp
c10041a1:	84 c0                	test   %al,%al
c10041a3:	78 09                	js     c10041ae <lpt_putc_sub+0x35>
c10041a5:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c10041ac:	7e da                	jle    c1004188 <lpt_putc_sub+0xf>
c10041ae:	8b 45 08             	mov    0x8(%ebp),%eax
c10041b1:	0f b6 c0             	movzbl %al,%eax
c10041b4:	83 ec 08             	sub    $0x8,%esp
c10041b7:	50                   	push   %eax
c10041b8:	68 78 03 00 00       	push   $0x378
c10041bd:	e8 7a be ff ff       	call   c100003c <outb>
c10041c2:	83 c4 10             	add    $0x10,%esp
c10041c5:	83 ec 08             	sub    $0x8,%esp
c10041c8:	6a 0d                	push   $0xd
c10041ca:	68 7a 03 00 00       	push   $0x37a
c10041cf:	e8 68 be ff ff       	call   c100003c <outb>
c10041d4:	83 c4 10             	add    $0x10,%esp
c10041d7:	83 ec 08             	sub    $0x8,%esp
c10041da:	6a 08                	push   $0x8
c10041dc:	68 7a 03 00 00       	push   $0x37a
c10041e1:	e8 56 be ff ff       	call   c100003c <outb>
c10041e6:	83 c4 10             	add    $0x10,%esp
c10041e9:	90                   	nop
c10041ea:	c9                   	leave  
c10041eb:	c3                   	ret    

c10041ec <lpt_putc>:
c10041ec:	55                   	push   %ebp
c10041ed:	89 e5                	mov    %esp,%ebp
c10041ef:	83 ec 08             	sub    $0x8,%esp
c10041f2:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c10041f6:	74 10                	je     c1004208 <lpt_putc+0x1c>
c10041f8:	83 ec 0c             	sub    $0xc,%esp
c10041fb:	ff 75 08             	pushl  0x8(%ebp)
c10041fe:	e8 76 ff ff ff       	call   c1004179 <lpt_putc_sub>
c1004203:	83 c4 10             	add    $0x10,%esp
c1004206:	eb 27                	jmp    c100422f <lpt_putc+0x43>
c1004208:	83 ec 0c             	sub    $0xc,%esp
c100420b:	6a 08                	push   $0x8
c100420d:	e8 67 ff ff ff       	call   c1004179 <lpt_putc_sub>
c1004212:	83 c4 10             	add    $0x10,%esp
c1004215:	83 ec 0c             	sub    $0xc,%esp
c1004218:	6a 20                	push   $0x20
c100421a:	e8 5a ff ff ff       	call   c1004179 <lpt_putc_sub>
c100421f:	83 c4 10             	add    $0x10,%esp
c1004222:	83 ec 0c             	sub    $0xc,%esp
c1004225:	6a 08                	push   $0x8
c1004227:	e8 4d ff ff ff       	call   c1004179 <lpt_putc_sub>
c100422c:	83 c4 10             	add    $0x10,%esp
c100422f:	90                   	nop
c1004230:	c9                   	leave  
c1004231:	c3                   	ret    

c1004232 <cons_intr>:
c1004232:	55                   	push   %ebp
c1004233:	89 e5                	mov    %esp,%ebp
c1004235:	83 ec 18             	sub    $0x18,%esp
c1004238:	eb 33                	jmp    c100426d <cons_intr+0x3b>
c100423a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100423e:	74 2d                	je     c100426d <cons_intr+0x3b>
c1004240:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c1004245:	8d 50 01             	lea    0x1(%eax),%edx
c1004248:	89 15 24 32 a1 c1    	mov    %edx,0xc1a13224
c100424e:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004251:	88 90 20 30 a1 c1    	mov    %dl,-0x3e5ecfe0(%eax)
c1004257:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c100425c:	3d 00 02 00 00       	cmp    $0x200,%eax
c1004261:	75 0a                	jne    c100426d <cons_intr+0x3b>
c1004263:	c7 05 24 32 a1 c1 00 	movl   $0x0,0xc1a13224
c100426a:	00 00 00 
c100426d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004270:	ff d0                	call   *%eax
c1004272:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004275:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c1004279:	75 bf                	jne    c100423a <cons_intr+0x8>
c100427b:	90                   	nop
c100427c:	90                   	nop
c100427d:	c9                   	leave  
c100427e:	c3                   	ret    

c100427f <serial_proc_data>:
c100427f:	55                   	push   %ebp
c1004280:	89 e5                	mov    %esp,%ebp
c1004282:	83 ec 18             	sub    $0x18,%esp
c1004285:	83 ec 0c             	sub    $0xc,%esp
c1004288:	68 fd 03 00 00       	push   $0x3fd
c100428d:	e8 6e bd ff ff       	call   c1000000 <inb>
c1004292:	83 c4 10             	add    $0x10,%esp
c1004295:	0f b6 c0             	movzbl %al,%eax
c1004298:	83 e0 01             	and    $0x1,%eax
c100429b:	85 c0                	test   %eax,%eax
c100429d:	75 07                	jne    c10042a6 <serial_proc_data+0x27>
c100429f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10042a4:	eb 26                	jmp    c10042cc <serial_proc_data+0x4d>
c10042a6:	83 ec 0c             	sub    $0xc,%esp
c10042a9:	68 f8 03 00 00       	push   $0x3f8
c10042ae:	e8 4d bd ff ff       	call   c1000000 <inb>
c10042b3:	83 c4 10             	add    $0x10,%esp
c10042b6:	0f b6 c0             	movzbl %al,%eax
c10042b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10042bc:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
c10042c0:	75 07                	jne    c10042c9 <serial_proc_data+0x4a>
c10042c2:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
c10042c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042cc:	c9                   	leave  
c10042cd:	c3                   	ret    

c10042ce <serial_intr>:
c10042ce:	55                   	push   %ebp
c10042cf:	89 e5                	mov    %esp,%ebp
c10042d1:	83 ec 08             	sub    $0x8,%esp
c10042d4:	0f b6 05 c6 0c 01 c1 	movzbl 0xc1010cc6,%eax
c10042db:	84 c0                	test   %al,%al
c10042dd:	74 10                	je     c10042ef <serial_intr+0x21>
c10042df:	83 ec 0c             	sub    $0xc,%esp
c10042e2:	68 7f 42 00 c1       	push   $0xc100427f
c10042e7:	e8 46 ff ff ff       	call   c1004232 <cons_intr>
c10042ec:	83 c4 10             	add    $0x10,%esp
c10042ef:	90                   	nop
c10042f0:	c9                   	leave  
c10042f1:	c3                   	ret    

c10042f2 <serial_putc_sub>:
c10042f2:	55                   	push   %ebp
c10042f3:	89 e5                	mov    %esp,%ebp
c10042f5:	83 ec 18             	sub    $0x18,%esp
c10042f8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10042ff:	eb 09                	jmp    c100430a <serial_putc_sub+0x18>
c1004301:	e8 3e fd ff ff       	call   c1004044 <delay>
c1004306:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100430a:	83 ec 0c             	sub    $0xc,%esp
c100430d:	68 fd 03 00 00       	push   $0x3fd
c1004312:	e8 e9 bc ff ff       	call   c1000000 <inb>
c1004317:	83 c4 10             	add    $0x10,%esp
c100431a:	0f b6 c0             	movzbl %al,%eax
c100431d:	83 e0 20             	and    $0x20,%eax
c1004320:	85 c0                	test   %eax,%eax
c1004322:	75 09                	jne    c100432d <serial_putc_sub+0x3b>
c1004324:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c100432b:	7e d4                	jle    c1004301 <serial_putc_sub+0xf>
c100432d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004330:	0f b6 c0             	movzbl %al,%eax
c1004333:	83 ec 08             	sub    $0x8,%esp
c1004336:	50                   	push   %eax
c1004337:	68 f8 03 00 00       	push   $0x3f8
c100433c:	e8 fb bc ff ff       	call   c100003c <outb>
c1004341:	83 c4 10             	add    $0x10,%esp
c1004344:	90                   	nop
c1004345:	c9                   	leave  
c1004346:	c3                   	ret    

c1004347 <serial_putc>:
c1004347:	55                   	push   %ebp
c1004348:	89 e5                	mov    %esp,%ebp
c100434a:	83 ec 08             	sub    $0x8,%esp
c100434d:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1004351:	74 10                	je     c1004363 <serial_putc+0x1c>
c1004353:	83 ec 0c             	sub    $0xc,%esp
c1004356:	ff 75 08             	pushl  0x8(%ebp)
c1004359:	e8 94 ff ff ff       	call   c10042f2 <serial_putc_sub>
c100435e:	83 c4 10             	add    $0x10,%esp
c1004361:	eb 27                	jmp    c100438a <serial_putc+0x43>
c1004363:	83 ec 0c             	sub    $0xc,%esp
c1004366:	6a 08                	push   $0x8
c1004368:	e8 85 ff ff ff       	call   c10042f2 <serial_putc_sub>
c100436d:	83 c4 10             	add    $0x10,%esp
c1004370:	83 ec 0c             	sub    $0xc,%esp
c1004373:	6a 20                	push   $0x20
c1004375:	e8 78 ff ff ff       	call   c10042f2 <serial_putc_sub>
c100437a:	83 c4 10             	add    $0x10,%esp
c100437d:	83 ec 0c             	sub    $0xc,%esp
c1004380:	6a 08                	push   $0x8
c1004382:	e8 6b ff ff ff       	call   c10042f2 <serial_putc_sub>
c1004387:	83 c4 10             	add    $0x10,%esp
c100438a:	90                   	nop
c100438b:	c9                   	leave  
c100438c:	c3                   	ret    

c100438d <timer_init>:
c100438d:	55                   	push   %ebp
c100438e:	89 e5                	mov    %esp,%ebp
c1004390:	83 ec 18             	sub    $0x18,%esp
c1004393:	b8 dc 34 12 00       	mov    $0x1234dc,%eax
c1004398:	ba 00 00 00 00       	mov    $0x0,%edx
c100439d:	f7 75 08             	divl   0x8(%ebp)
c10043a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10043a3:	83 ec 08             	sub    $0x8,%esp
c10043a6:	6a 36                	push   $0x36
c10043a8:	6a 43                	push   $0x43
c10043aa:	e8 8d bc ff ff       	call   c100003c <outb>
c10043af:	83 c4 10             	add    $0x10,%esp
c10043b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10043b5:	88 45 f3             	mov    %al,-0xd(%ebp)
c10043b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10043bb:	c1 e8 08             	shr    $0x8,%eax
c10043be:	88 45 f2             	mov    %al,-0xe(%ebp)
c10043c1:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c10043c5:	83 ec 08             	sub    $0x8,%esp
c10043c8:	50                   	push   %eax
c10043c9:	6a 40                	push   $0x40
c10043cb:	e8 6c bc ff ff       	call   c100003c <outb>
c10043d0:	83 c4 10             	add    $0x10,%esp
c10043d3:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
c10043d7:	83 ec 08             	sub    $0x8,%esp
c10043da:	50                   	push   %eax
c10043db:	6a 40                	push   $0x40
c10043dd:	e8 5a bc ff ff       	call   c100003c <outb>
c10043e2:	83 c4 10             	add    $0x10,%esp
c10043e5:	c7 05 2c 32 a1 c1 00 	movl   $0x0,0xc1a1322c
c10043ec:	00 00 00 
c10043ef:	c7 05 28 32 a1 c1 00 	movl   $0x0,0xc1a13228
c10043f6:	00 00 00 
c10043f9:	83 ec 0c             	sub    $0xc,%esp
c10043fc:	6a 00                	push   $0x0
c10043fe:	e8 ee fa ff ff       	call   c1003ef1 <pic_enable>
c1004403:	83 c4 10             	add    $0x10,%esp
c1004406:	90                   	nop
c1004407:	c9                   	leave  
c1004408:	c3                   	ret    

c1004409 <print_cursor>:
c1004409:	55                   	push   %ebp
c100440a:	89 e5                	mov    %esp,%ebp
c100440c:	83 ec 28             	sub    $0x28,%esp
c100440f:	8b 55 08             	mov    0x8(%ebp),%edx
c1004412:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004415:	88 55 e4             	mov    %dl,-0x1c(%ebp)
c1004418:	88 45 e0             	mov    %al,-0x20(%ebp)
c100441b:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
c100441f:	89 d0                	mov    %edx,%eax
c1004421:	c1 e0 02             	shl    $0x2,%eax
c1004424:	01 d0                	add    %edx,%eax
c1004426:	c1 e0 04             	shl    $0x4,%eax
c1004429:	89 c2                	mov    %eax,%edx
c100442b:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c100442f:	01 d0                	add    %edx,%eax
c1004431:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c1004435:	83 ec 08             	sub    $0x8,%esp
c1004438:	6a 0e                	push   $0xe
c100443a:	68 d4 03 00 00       	push   $0x3d4
c100443f:	e8 f8 bb ff ff       	call   c100003c <outb>
c1004444:	83 c4 10             	add    $0x10,%esp
c1004447:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c100444b:	66 c1 e8 08          	shr    $0x8,%ax
c100444f:	0f b6 c0             	movzbl %al,%eax
c1004452:	83 ec 08             	sub    $0x8,%esp
c1004455:	50                   	push   %eax
c1004456:	68 d5 03 00 00       	push   $0x3d5
c100445b:	e8 dc bb ff ff       	call   c100003c <outb>
c1004460:	83 c4 10             	add    $0x10,%esp
c1004463:	83 ec 08             	sub    $0x8,%esp
c1004466:	6a 0f                	push   $0xf
c1004468:	68 d4 03 00 00       	push   $0x3d4
c100446d:	e8 ca bb ff ff       	call   c100003c <outb>
c1004472:	83 c4 10             	add    $0x10,%esp
c1004475:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004479:	0f b6 c0             	movzbl %al,%eax
c100447c:	83 ec 08             	sub    $0x8,%esp
c100447f:	50                   	push   %eax
c1004480:	68 d5 03 00 00       	push   $0x3d5
c1004485:	e8 b2 bb ff ff       	call   c100003c <outb>
c100448a:	83 c4 10             	add    $0x10,%esp
c100448d:	90                   	nop
c100448e:	c9                   	leave  
c100448f:	c3                   	ret    

c1004490 <clear>:
c1004490:	55                   	push   %ebp
c1004491:	89 e5                	mov    %esp,%ebp
c1004493:	83 ec 18             	sub    $0x18,%esp
c1004496:	66 c7 45 f4 00 0f    	movw   $0xf00,-0xc(%ebp)
c100449c:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10044a0:	83 c8 20             	or     $0x20,%eax
c10044a3:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c10044a7:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c10044ad:	eb 1f                	jmp    c10044ce <clear+0x3e>
c10044af:	a1 c8 da 00 c1       	mov    0xc100dac8,%eax
c10044b4:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
c10044b8:	01 d2                	add    %edx,%edx
c10044ba:	01 c2                	add    %eax,%edx
c10044bc:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c10044c0:	66 89 02             	mov    %ax,(%edx)
c10044c3:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10044c7:	83 c0 01             	add    $0x1,%eax
c10044ca:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10044ce:	66 81 7d f6 cf 07    	cmpw   $0x7cf,-0xa(%ebp)
c10044d4:	76 d9                	jbe    c10044af <clear+0x1f>
c10044d6:	c6 05 c7 0c 01 c1 00 	movb   $0x0,0xc1010cc7
c10044dd:	c6 05 c8 0c 01 c1 00 	movb   $0x0,0xc1010cc8
c10044e4:	0f b6 05 c8 0c 01 c1 	movzbl 0xc1010cc8,%eax
c10044eb:	0f b6 d0             	movzbl %al,%edx
c10044ee:	0f b6 05 c7 0c 01 c1 	movzbl 0xc1010cc7,%eax
c10044f5:	0f b6 c0             	movzbl %al,%eax
c10044f8:	83 ec 08             	sub    $0x8,%esp
c10044fb:	52                   	push   %edx
c10044fc:	50                   	push   %eax
c10044fd:	e8 07 ff ff ff       	call   c1004409 <print_cursor>
c1004502:	83 c4 10             	add    $0x10,%esp
c1004505:	90                   	nop
c1004506:	c9                   	leave  
c1004507:	c3                   	ret    

c1004508 <print_char>:
c1004508:	55                   	push   %ebp
c1004509:	89 e5                	mov    %esp,%ebp
c100450b:	83 ec 28             	sub    $0x28,%esp
c100450e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004511:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1004514:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c100451a:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c1004520:	0f b6 05 c7 0c 01 c1 	movzbl 0xc1010cc7,%eax
c1004527:	3c 18                	cmp    $0x18,%al
c1004529:	76 05                	jbe    c1004530 <print_char+0x28>
c100452b:	e8 60 ff ff ff       	call   c1004490 <clear>
c1004530:	0f b6 05 c7 0c 01 c1 	movzbl 0xc1010cc7,%eax
c1004537:	0f b6 d0             	movzbl %al,%edx
c100453a:	89 d0                	mov    %edx,%eax
c100453c:	c1 e0 02             	shl    $0x2,%eax
c100453f:	01 d0                	add    %edx,%eax
c1004541:	c1 e0 04             	shl    $0x4,%eax
c1004544:	89 c2                	mov    %eax,%edx
c1004546:	0f b6 05 c8 0c 01 c1 	movzbl 0xc1010cc8,%eax
c100454d:	0f b6 c0             	movzbl %al,%eax
c1004550:	01 d0                	add    %edx,%eax
c1004552:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1004556:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
c100455a:	83 f8 09             	cmp    $0x9,%eax
c100455d:	74 20                	je     c100457f <print_char+0x77>
c100455f:	83 f8 0a             	cmp    $0xa,%eax
c1004562:	75 2f                	jne    c1004593 <print_char+0x8b>
c1004564:	c6 05 c8 0c 01 c1 00 	movb   $0x0,0xc1010cc8
c100456b:	0f b6 05 c7 0c 01 c1 	movzbl 0xc1010cc7,%eax
c1004572:	83 c0 01             	add    $0x1,%eax
c1004575:	a2 c7 0c 01 c1       	mov    %al,0xc1010cc7
c100457a:	e9 82 00 00 00       	jmp    c1004601 <print_char+0xf9>
c100457f:	0f b6 05 c8 0c 01 c1 	movzbl 0xc1010cc8,%eax
c1004586:	83 c0 08             	add    $0x8,%eax
c1004589:	83 e0 f8             	and    $0xfffffff8,%eax
c100458c:	a2 c8 0c 01 c1       	mov    %al,0xc1010cc8
c1004591:	eb 6e                	jmp    c1004601 <print_char+0xf9>
c1004593:	66 0f be 45 e4       	movsbw -0x1c(%ebp),%ax
c1004598:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
c100459c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100459f:	c1 e0 04             	shl    $0x4,%eax
c10045a2:	0f b6 c0             	movzbl %al,%eax
c10045a5:	8b 55 10             	mov    0x10(%ebp),%edx
c10045a8:	83 e2 0f             	and    $0xf,%edx
c10045ab:	09 d0                	or     %edx,%eax
c10045ad:	c1 e0 08             	shl    $0x8,%eax
c10045b0:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10045b4:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10045b8:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c10045bc:	a1 c8 da 00 c1       	mov    0xc100dac8,%eax
c10045c1:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c10045c5:	01 d2                	add    %edx,%edx
c10045c7:	01 c2                	add    %eax,%edx
c10045c9:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10045cd:	66 89 02             	mov    %ax,(%edx)
c10045d0:	0f b6 05 c8 0c 01 c1 	movzbl 0xc1010cc8,%eax
c10045d7:	83 c0 01             	add    $0x1,%eax
c10045da:	a2 c8 0c 01 c1       	mov    %al,0xc1010cc8
c10045df:	0f b6 05 c8 0c 01 c1 	movzbl 0xc1010cc8,%eax
c10045e6:	3c 4f                	cmp    $0x4f,%al
c10045e8:	76 16                	jbe    c1004600 <print_char+0xf8>
c10045ea:	c6 05 c8 0c 01 c1 00 	movb   $0x0,0xc1010cc8
c10045f1:	0f b6 05 c7 0c 01 c1 	movzbl 0xc1010cc7,%eax
c10045f8:	83 c0 01             	add    $0x1,%eax
c10045fb:	a2 c7 0c 01 c1       	mov    %al,0xc1010cc7
c1004600:	90                   	nop
c1004601:	0f b6 05 c8 0c 01 c1 	movzbl 0xc1010cc8,%eax
c1004608:	0f b6 d0             	movzbl %al,%edx
c100460b:	0f b6 05 c7 0c 01 c1 	movzbl 0xc1010cc7,%eax
c1004612:	0f b6 c0             	movzbl %al,%eax
c1004615:	83 ec 08             	sub    $0x8,%esp
c1004618:	52                   	push   %edx
c1004619:	50                   	push   %eax
c100461a:	e8 ea fd ff ff       	call   c1004409 <print_cursor>
c100461f:	83 c4 10             	add    $0x10,%esp
c1004622:	90                   	nop
c1004623:	c9                   	leave  
c1004624:	c3                   	ret    

c1004625 <print_string>:
c1004625:	55                   	push   %ebp
c1004626:	89 e5                	mov    %esp,%ebp
c1004628:	83 ec 08             	sub    $0x8,%esp
c100462b:	eb 21                	jmp    c100464e <print_string+0x29>
c100462d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004630:	8d 50 01             	lea    0x1(%eax),%edx
c1004633:	89 55 08             	mov    %edx,0x8(%ebp)
c1004636:	0f b6 00             	movzbl (%eax),%eax
c1004639:	0f be c0             	movsbl %al,%eax
c100463c:	83 ec 04             	sub    $0x4,%esp
c100463f:	ff 75 10             	pushl  0x10(%ebp)
c1004642:	ff 75 0c             	pushl  0xc(%ebp)
c1004645:	50                   	push   %eax
c1004646:	e8 bd fe ff ff       	call   c1004508 <print_char>
c100464b:	83 c4 10             	add    $0x10,%esp
c100464e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004651:	0f b6 00             	movzbl (%eax),%eax
c1004654:	84 c0                	test   %al,%al
c1004656:	75 d5                	jne    c100462d <print_string+0x8>
c1004658:	90                   	nop
c1004659:	90                   	nop
c100465a:	c9                   	leave  
c100465b:	c3                   	ret    

c100465c <print_num>:
c100465c:	55                   	push   %ebp
c100465d:	89 e5                	mov    %esp,%ebp
c100465f:	83 ec 48             	sub    $0x48,%esp
c1004662:	8b 4d 18             	mov    0x18(%ebp),%ecx
c1004665:	8b 55 1c             	mov    0x1c(%ebp),%edx
c1004668:	8b 45 08             	mov    0x8(%ebp),%eax
c100466b:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100466e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004671:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1004674:	89 c8                	mov    %ecx,%eax
c1004676:	88 45 bc             	mov    %al,-0x44(%ebp)
c1004679:	89 d0                	mov    %edx,%eax
c100467b:	88 45 b8             	mov    %al,-0x48(%ebp)
c100467e:	0f be 45 b8          	movsbl -0x48(%ebp),%eax
c1004682:	c6 44 05 c8 00       	movb   $0x0,-0x38(%ebp,%eax,1)
c1004687:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
c100468b:	83 e8 01             	sub    $0x1,%eax
c100468e:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004691:	e9 c0 00 00 00       	jmp    c1004756 <print_num+0xfa>
c1004696:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
c100469a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100469d:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10046a0:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c10046a3:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10046a6:	89 55 ec             	mov    %edx,-0x14(%ebp)
c10046a9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10046ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10046af:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10046b3:	74 1c                	je     c10046d1 <print_num+0x75>
c10046b5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10046b8:	ba 00 00 00 00       	mov    $0x0,%edx
c10046bd:	f7 75 e4             	divl   -0x1c(%ebp)
c10046c0:	89 55 f0             	mov    %edx,-0x10(%ebp)
c10046c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10046c6:	ba 00 00 00 00       	mov    $0x0,%edx
c10046cb:	f7 75 e4             	divl   -0x1c(%ebp)
c10046ce:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10046d1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10046d4:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10046d7:	f7 75 e4             	divl   -0x1c(%ebp)
c10046da:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10046dd:	89 55 dc             	mov    %edx,-0x24(%ebp)
c10046e0:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10046e3:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10046e6:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10046e9:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c10046ec:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10046ef:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10046f3:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c10046f7:	80 7d bc 0a          	cmpb   $0xa,-0x44(%ebp)
c10046fb:	75 16                	jne    c1004713 <print_num+0xb7>
c10046fd:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004701:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004706:	8d 50 30             	lea    0x30(%eax),%edx
c1004709:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100470d:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1004711:	eb 39                	jmp    c100474c <print_num+0xf0>
c1004713:	80 7d bc 10          	cmpb   $0x10,-0x44(%ebp)
c1004717:	75 33                	jne    c100474c <print_num+0xf0>
c1004719:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100471d:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004722:	3c 09                	cmp    $0x9,%al
c1004724:	7e 10                	jle    c1004736 <print_num+0xda>
c1004726:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100472a:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100472f:	83 c0 37             	add    $0x37,%eax
c1004732:	89 c2                	mov    %eax,%edx
c1004734:	eb 0e                	jmp    c1004744 <print_num+0xe8>
c1004736:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100473a:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100473f:	83 c0 30             	add    $0x30,%eax
c1004742:	89 c2                	mov    %eax,%edx
c1004744:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004748:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c100474c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004750:	83 e8 01             	sub    $0x1,%eax
c1004753:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004756:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
c100475a:	0f 89 36 ff ff ff    	jns    c1004696 <print_num+0x3a>
c1004760:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
c1004764:	75 36                	jne    c100479c <print_num+0x140>
c1004766:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c100476d:	90                   	nop
c100476e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004771:	8d 50 01             	lea    0x1(%eax),%edx
c1004774:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1004777:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100477c:	3c 30                	cmp    $0x30,%al
c100477e:	74 ee                	je     c100476e <print_num+0x112>
c1004780:	8d 55 c8             	lea    -0x38(%ebp),%edx
c1004783:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004786:	01 d0                	add    %edx,%eax
c1004788:	83 ec 04             	sub    $0x4,%esp
c100478b:	ff 75 14             	pushl  0x14(%ebp)
c100478e:	ff 75 10             	pushl  0x10(%ebp)
c1004791:	50                   	push   %eax
c1004792:	e8 8e fe ff ff       	call   c1004625 <print_string>
c1004797:	83 c4 10             	add    $0x10,%esp
c100479a:	eb 15                	jmp    c10047b1 <print_num+0x155>
c100479c:	83 ec 04             	sub    $0x4,%esp
c100479f:	ff 75 14             	pushl  0x14(%ebp)
c10047a2:	ff 75 10             	pushl  0x10(%ebp)
c10047a5:	8d 45 c8             	lea    -0x38(%ebp),%eax
c10047a8:	50                   	push   %eax
c10047a9:	e8 77 fe ff ff       	call   c1004625 <print_string>
c10047ae:	83 c4 10             	add    $0x10,%esp
c10047b1:	c9                   	leave  
c10047b2:	c3                   	ret    

c10047b3 <printk>:
c10047b3:	55                   	push   %ebp
c10047b4:	89 e5                	mov    %esp,%ebp
c10047b6:	83 ec 38             	sub    $0x38,%esp
c10047b9:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c10047bd:	8d 45 0c             	lea    0xc(%ebp),%eax
c10047c0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10047c3:	e9 6e 03 00 00       	jmp    c1004b36 <printk+0x383>
c10047c8:	8b 45 08             	mov    0x8(%ebp),%eax
c10047cb:	0f b6 00             	movzbl (%eax),%eax
c10047ce:	3c 25                	cmp    $0x25,%al
c10047d0:	0f 85 3a 03 00 00    	jne    c1004b10 <printk+0x35d>
c10047d6:	90                   	nop
c10047d7:	8b 45 08             	mov    0x8(%ebp),%eax
c10047da:	83 c0 01             	add    $0x1,%eax
c10047dd:	89 45 08             	mov    %eax,0x8(%ebp)
c10047e0:	8b 45 08             	mov    0x8(%ebp),%eax
c10047e3:	0f b6 00             	movzbl (%eax),%eax
c10047e6:	0f be c0             	movsbl %al,%eax
c10047e9:	83 e8 30             	sub    $0x30,%eax
c10047ec:	83 f8 48             	cmp    $0x48,%eax
c10047ef:	0f 87 fb 02 00 00    	ja     c1004af0 <printk+0x33d>
c10047f5:	8b 04 85 10 a4 00 c1 	mov    -0x3eff5bf0(,%eax,4),%eax
c10047fc:	ff e0                	jmp    *%eax
c10047fe:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004802:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004805:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
c1004809:	88 45 d7             	mov    %al,-0x29(%ebp)
c100480c:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
c1004810:	83 ec 04             	sub    $0x4,%esp
c1004813:	6a 02                	push   $0x2
c1004815:	6a 00                	push   $0x0
c1004817:	50                   	push   %eax
c1004818:	e8 eb fc ff ff       	call   c1004508 <print_char>
c100481d:	83 c4 10             	add    $0x10,%esp
c1004820:	e9 e0 02 00 00       	jmp    c1004b05 <printk+0x352>
c1004825:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004829:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100482c:	8b 40 fc             	mov    -0x4(%eax),%eax
c100482f:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1004832:	83 ec 04             	sub    $0x4,%esp
c1004835:	6a 02                	push   $0x2
c1004837:	6a 00                	push   $0x0
c1004839:	ff 75 dc             	pushl  -0x24(%ebp)
c100483c:	e8 e4 fd ff ff       	call   c1004625 <print_string>
c1004841:	83 c4 10             	add    $0x10,%esp
c1004844:	e9 bc 02 00 00       	jmp    c1004b05 <printk+0x352>
c1004849:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c100484d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004850:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004853:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004856:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100485a:	74 23                	je     c100487f <printk+0xcc>
c100485c:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004860:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004863:	99                   	cltd   
c1004864:	83 ec 04             	sub    $0x4,%esp
c1004867:	6a 01                	push   $0x1
c1004869:	51                   	push   %ecx
c100486a:	6a 0a                	push   $0xa
c100486c:	6a 02                	push   $0x2
c100486e:	6a 00                	push   $0x0
c1004870:	52                   	push   %edx
c1004871:	50                   	push   %eax
c1004872:	e8 e5 fd ff ff       	call   c100465c <print_num>
c1004877:	83 c4 20             	add    $0x20,%esp
c100487a:	e9 86 02 00 00       	jmp    c1004b05 <printk+0x352>
c100487f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004882:	99                   	cltd   
c1004883:	83 ec 04             	sub    $0x4,%esp
c1004886:	6a 00                	push   $0x0
c1004888:	6a 14                	push   $0x14
c100488a:	6a 0a                	push   $0xa
c100488c:	6a 02                	push   $0x2
c100488e:	6a 00                	push   $0x0
c1004890:	52                   	push   %edx
c1004891:	50                   	push   %eax
c1004892:	e8 c5 fd ff ff       	call   c100465c <print_num>
c1004897:	83 c4 20             	add    $0x20,%esp
c100489a:	e9 66 02 00 00       	jmp    c1004b05 <printk+0x352>
c100489f:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10048a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10048a6:	8b 40 fc             	mov    -0x4(%eax),%eax
c10048a9:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10048ac:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10048b0:	74 23                	je     c10048d5 <printk+0x122>
c10048b2:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10048b6:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10048b9:	99                   	cltd   
c10048ba:	83 ec 04             	sub    $0x4,%esp
c10048bd:	6a 01                	push   $0x1
c10048bf:	51                   	push   %ecx
c10048c0:	6a 10                	push   $0x10
c10048c2:	6a 02                	push   $0x2
c10048c4:	6a 00                	push   $0x0
c10048c6:	52                   	push   %edx
c10048c7:	50                   	push   %eax
c10048c8:	e8 8f fd ff ff       	call   c100465c <print_num>
c10048cd:	83 c4 20             	add    $0x20,%esp
c10048d0:	e9 30 02 00 00       	jmp    c1004b05 <printk+0x352>
c10048d5:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10048d8:	99                   	cltd   
c10048d9:	83 ec 04             	sub    $0x4,%esp
c10048dc:	6a 00                	push   $0x0
c10048de:	6a 14                	push   $0x14
c10048e0:	6a 10                	push   $0x10
c10048e2:	6a 02                	push   $0x2
c10048e4:	6a 00                	push   $0x0
c10048e6:	52                   	push   %edx
c10048e7:	50                   	push   %eax
c10048e8:	e8 6f fd ff ff       	call   c100465c <print_num>
c10048ed:	83 c4 20             	add    $0x20,%esp
c10048f0:	e9 10 02 00 00       	jmp    c1004b05 <printk+0x352>
c10048f5:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c10048f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10048fc:	8b 50 fc             	mov    -0x4(%eax),%edx
c10048ff:	8b 40 f8             	mov    -0x8(%eax),%eax
c1004902:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1004905:	89 55 cc             	mov    %edx,-0x34(%ebp)
c1004908:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100490c:	74 25                	je     c1004933 <printk+0x180>
c100490e:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004912:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004915:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1004918:	83 ec 04             	sub    $0x4,%esp
c100491b:	6a 01                	push   $0x1
c100491d:	51                   	push   %ecx
c100491e:	6a 10                	push   $0x10
c1004920:	6a 02                	push   $0x2
c1004922:	6a 00                	push   $0x0
c1004924:	52                   	push   %edx
c1004925:	50                   	push   %eax
c1004926:	e8 31 fd ff ff       	call   c100465c <print_num>
c100492b:	83 c4 20             	add    $0x20,%esp
c100492e:	e9 d2 01 00 00       	jmp    c1004b05 <printk+0x352>
c1004933:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004936:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1004939:	83 ec 04             	sub    $0x4,%esp
c100493c:	6a 00                	push   $0x0
c100493e:	6a 14                	push   $0x14
c1004940:	6a 10                	push   $0x10
c1004942:	6a 02                	push   $0x2
c1004944:	6a 00                	push   $0x0
c1004946:	52                   	push   %edx
c1004947:	50                   	push   %eax
c1004948:	e8 0f fd ff ff       	call   c100465c <print_num>
c100494d:	83 c4 20             	add    $0x20,%esp
c1004950:	e9 b0 01 00 00       	jmp    c1004b05 <printk+0x352>
c1004955:	8b 45 08             	mov    0x8(%ebp),%eax
c1004958:	83 c0 01             	add    $0x1,%eax
c100495b:	89 45 08             	mov    %eax,0x8(%ebp)
c100495e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004961:	0f b6 00             	movzbl (%eax),%eax
c1004964:	0f be c0             	movsbl %al,%eax
c1004967:	83 f8 78             	cmp    $0x78,%eax
c100496a:	0f 84 9a 00 00 00    	je     c1004a0a <printk+0x257>
c1004970:	83 f8 78             	cmp    $0x78,%eax
c1004973:	0f 8f 3f 01 00 00    	jg     c1004ab8 <printk+0x305>
c1004979:	83 f8 6c             	cmp    $0x6c,%eax
c100497c:	0f 84 e0 00 00 00    	je     c1004a62 <printk+0x2af>
c1004982:	83 f8 6c             	cmp    $0x6c,%eax
c1004985:	0f 8f 2d 01 00 00    	jg     c1004ab8 <printk+0x305>
c100498b:	83 f8 64             	cmp    $0x64,%eax
c100498e:	74 1c                	je     c10049ac <printk+0x1f9>
c1004990:	83 f8 64             	cmp    $0x64,%eax
c1004993:	0f 8f 1f 01 00 00    	jg     c1004ab8 <printk+0x305>
c1004999:	83 f8 4c             	cmp    $0x4c,%eax
c100499c:	0f 84 c0 00 00 00    	je     c1004a62 <printk+0x2af>
c10049a2:	83 f8 58             	cmp    $0x58,%eax
c10049a5:	74 63                	je     c1004a0a <printk+0x257>
c10049a7:	e9 0c 01 00 00       	jmp    c1004ab8 <printk+0x305>
c10049ac:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10049b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10049b3:	8b 40 fc             	mov    -0x4(%eax),%eax
c10049b6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10049b9:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10049bd:	74 27                	je     c10049e6 <printk+0x233>
c10049bf:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10049c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10049c6:	ba 00 00 00 00       	mov    $0x0,%edx
c10049cb:	83 ec 04             	sub    $0x4,%esp
c10049ce:	6a 01                	push   $0x1
c10049d0:	51                   	push   %ecx
c10049d1:	6a 0a                	push   $0xa
c10049d3:	6a 02                	push   $0x2
c10049d5:	6a 00                	push   $0x0
c10049d7:	52                   	push   %edx
c10049d8:	50                   	push   %eax
c10049d9:	e8 7e fc ff ff       	call   c100465c <print_num>
c10049de:	83 c4 20             	add    $0x20,%esp
c10049e1:	e9 d3 00 00 00       	jmp    c1004ab9 <printk+0x306>
c10049e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10049e9:	ba 00 00 00 00       	mov    $0x0,%edx
c10049ee:	83 ec 04             	sub    $0x4,%esp
c10049f1:	6a 00                	push   $0x0
c10049f3:	6a 14                	push   $0x14
c10049f5:	6a 0a                	push   $0xa
c10049f7:	6a 02                	push   $0x2
c10049f9:	6a 00                	push   $0x0
c10049fb:	52                   	push   %edx
c10049fc:	50                   	push   %eax
c10049fd:	e8 5a fc ff ff       	call   c100465c <print_num>
c1004a02:	83 c4 20             	add    $0x20,%esp
c1004a05:	e9 af 00 00 00       	jmp    c1004ab9 <printk+0x306>
c1004a0a:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004a0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004a11:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004a14:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004a17:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004a1b:	74 24                	je     c1004a41 <printk+0x28e>
c1004a1d:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004a21:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004a24:	ba 00 00 00 00       	mov    $0x0,%edx
c1004a29:	83 ec 04             	sub    $0x4,%esp
c1004a2c:	6a 01                	push   $0x1
c1004a2e:	51                   	push   %ecx
c1004a2f:	6a 10                	push   $0x10
c1004a31:	6a 02                	push   $0x2
c1004a33:	6a 00                	push   $0x0
c1004a35:	52                   	push   %edx
c1004a36:	50                   	push   %eax
c1004a37:	e8 20 fc ff ff       	call   c100465c <print_num>
c1004a3c:	83 c4 20             	add    $0x20,%esp
c1004a3f:	eb 78                	jmp    c1004ab9 <printk+0x306>
c1004a41:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004a44:	ba 00 00 00 00       	mov    $0x0,%edx
c1004a49:	83 ec 04             	sub    $0x4,%esp
c1004a4c:	6a 00                	push   $0x0
c1004a4e:	6a 14                	push   $0x14
c1004a50:	6a 10                	push   $0x10
c1004a52:	6a 02                	push   $0x2
c1004a54:	6a 00                	push   $0x0
c1004a56:	52                   	push   %edx
c1004a57:	50                   	push   %eax
c1004a58:	e8 ff fb ff ff       	call   c100465c <print_num>
c1004a5d:	83 c4 20             	add    $0x20,%esp
c1004a60:	eb 57                	jmp    c1004ab9 <printk+0x306>
c1004a62:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1004a66:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004a69:	8b 50 fc             	mov    -0x4(%eax),%edx
c1004a6c:	8b 40 f8             	mov    -0x8(%eax),%eax
c1004a6f:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004a72:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1004a75:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004a79:	74 20                	je     c1004a9b <printk+0x2e8>
c1004a7b:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c1004a7f:	83 ec 04             	sub    $0x4,%esp
c1004a82:	6a 01                	push   $0x1
c1004a84:	50                   	push   %eax
c1004a85:	6a 10                	push   $0x10
c1004a87:	6a 02                	push   $0x2
c1004a89:	6a 00                	push   $0x0
c1004a8b:	ff 75 e4             	pushl  -0x1c(%ebp)
c1004a8e:	ff 75 e0             	pushl  -0x20(%ebp)
c1004a91:	e8 c6 fb ff ff       	call   c100465c <print_num>
c1004a96:	83 c4 20             	add    $0x20,%esp
c1004a99:	eb 1e                	jmp    c1004ab9 <printk+0x306>
c1004a9b:	83 ec 04             	sub    $0x4,%esp
c1004a9e:	6a 00                	push   $0x0
c1004aa0:	6a 14                	push   $0x14
c1004aa2:	6a 10                	push   $0x10
c1004aa4:	6a 02                	push   $0x2
c1004aa6:	6a 00                	push   $0x0
c1004aa8:	ff 75 e4             	pushl  -0x1c(%ebp)
c1004aab:	ff 75 e0             	pushl  -0x20(%ebp)
c1004aae:	e8 a9 fb ff ff       	call   c100465c <print_num>
c1004ab3:	83 c4 20             	add    $0x20,%esp
c1004ab6:	eb 01                	jmp    c1004ab9 <printk+0x306>
c1004ab8:	90                   	nop
c1004ab9:	eb 4a                	jmp    c1004b05 <printk+0x352>
c1004abb:	8b 45 08             	mov    0x8(%ebp),%eax
c1004abe:	0f b6 00             	movzbl (%eax),%eax
c1004ac1:	0f be c0             	movsbl %al,%eax
c1004ac4:	83 e8 30             	sub    $0x30,%eax
c1004ac7:	89 c2                	mov    %eax,%edx
c1004ac9:	89 d0                	mov    %edx,%eax
c1004acb:	c1 e0 02             	shl    $0x2,%eax
c1004ace:	01 d0                	add    %edx,%eax
c1004ad0:	01 c0                	add    %eax,%eax
c1004ad2:	89 c2                	mov    %eax,%edx
c1004ad4:	8b 45 08             	mov    0x8(%ebp),%eax
c1004ad7:	83 c0 01             	add    $0x1,%eax
c1004ada:	89 45 08             	mov    %eax,0x8(%ebp)
c1004add:	8b 45 08             	mov    0x8(%ebp),%eax
c1004ae0:	0f b6 00             	movzbl (%eax),%eax
c1004ae3:	01 d0                	add    %edx,%eax
c1004ae5:	83 e8 30             	sub    $0x30,%eax
c1004ae8:	88 45 f3             	mov    %al,-0xd(%ebp)
c1004aeb:	e9 e7 fc ff ff       	jmp    c10047d7 <printk+0x24>
c1004af0:	83 ec 04             	sub    $0x4,%esp
c1004af3:	6a 02                	push   $0x2
c1004af5:	6a 00                	push   $0x0
c1004af7:	68 f0 a3 00 c1       	push   $0xc100a3f0
c1004afc:	e8 24 fb ff ff       	call   c1004625 <print_string>
c1004b01:	83 c4 10             	add    $0x10,%esp
c1004b04:	90                   	nop
c1004b05:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b08:	83 c0 01             	add    $0x1,%eax
c1004b0b:	89 45 08             	mov    %eax,0x8(%ebp)
c1004b0e:	eb 22                	jmp    c1004b32 <printk+0x37f>
c1004b10:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b13:	0f b6 00             	movzbl (%eax),%eax
c1004b16:	0f be c0             	movsbl %al,%eax
c1004b19:	83 ec 04             	sub    $0x4,%esp
c1004b1c:	6a 02                	push   $0x2
c1004b1e:	6a 00                	push   $0x0
c1004b20:	50                   	push   %eax
c1004b21:	e8 e2 f9 ff ff       	call   c1004508 <print_char>
c1004b26:	83 c4 10             	add    $0x10,%esp
c1004b29:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b2c:	83 c0 01             	add    $0x1,%eax
c1004b2f:	89 45 08             	mov    %eax,0x8(%ebp)
c1004b32:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c1004b36:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b39:	0f b6 00             	movzbl (%eax),%eax
c1004b3c:	84 c0                	test   %al,%al
c1004b3e:	0f 85 84 fc ff ff    	jne    c10047c8 <printk+0x15>
c1004b44:	90                   	nop
c1004b45:	90                   	nop
c1004b46:	c9                   	leave  
c1004b47:	c3                   	ret    

c1004b48 <cons_putc>:
c1004b48:	55                   	push   %ebp
c1004b49:	89 e5                	mov    %esp,%ebp
c1004b4b:	83 ec 08             	sub    $0x8,%esp
c1004b4e:	83 ec 0c             	sub    $0xc,%esp
c1004b51:	ff 75 08             	pushl  0x8(%ebp)
c1004b54:	e8 93 f6 ff ff       	call   c10041ec <lpt_putc>
c1004b59:	83 c4 10             	add    $0x10,%esp
c1004b5c:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1004b60:	74 13                	je     c1004b75 <cons_putc+0x2d>
c1004b62:	83 ec 08             	sub    $0x8,%esp
c1004b65:	ff 75 08             	pushl  0x8(%ebp)
c1004b68:	68 34 a5 00 c1       	push   $0xc100a534
c1004b6d:	e8 41 fc ff ff       	call   c10047b3 <printk>
c1004b72:	83 c4 10             	add    $0x10,%esp
c1004b75:	83 ec 0c             	sub    $0xc,%esp
c1004b78:	ff 75 08             	pushl  0x8(%ebp)
c1004b7b:	e8 c7 f7 ff ff       	call   c1004347 <serial_putc>
c1004b80:	83 c4 10             	add    $0x10,%esp
c1004b83:	90                   	nop
c1004b84:	c9                   	leave  
c1004b85:	c3                   	ret    

c1004b86 <cons_getc>:
c1004b86:	55                   	push   %ebp
c1004b87:	89 e5                	mov    %esp,%ebp
c1004b89:	83 ec 18             	sub    $0x18,%esp
c1004b8c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004b93:	e8 36 f7 ff ff       	call   c10042ce <serial_intr>
c1004b98:	e8 c9 d0 ff ff       	call   c1001c66 <kbd_intr>
c1004b9d:	8b 15 20 32 a1 c1    	mov    0xc1a13220,%edx
c1004ba3:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c1004ba8:	39 c2                	cmp    %eax,%edx
c1004baa:	74 31                	je     c1004bdd <cons_getc+0x57>
c1004bac:	a1 20 32 a1 c1       	mov    0xc1a13220,%eax
c1004bb1:	8d 50 01             	lea    0x1(%eax),%edx
c1004bb4:	89 15 20 32 a1 c1    	mov    %edx,0xc1a13220
c1004bba:	0f b6 80 20 30 a1 c1 	movzbl -0x3e5ecfe0(%eax),%eax
c1004bc1:	0f b6 c0             	movzbl %al,%eax
c1004bc4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004bc7:	a1 20 32 a1 c1       	mov    0xc1a13220,%eax
c1004bcc:	3d 00 02 00 00       	cmp    $0x200,%eax
c1004bd1:	75 0a                	jne    c1004bdd <cons_getc+0x57>
c1004bd3:	c7 05 20 32 a1 c1 00 	movl   $0x0,0xc1a13220
c1004bda:	00 00 00 
c1004bdd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004be0:	c9                   	leave  
c1004be1:	c3                   	ret    

c1004be2 <hash32>:
c1004be2:	55                   	push   %ebp
c1004be3:	89 e5                	mov    %esp,%ebp
c1004be5:	83 ec 10             	sub    $0x10,%esp
c1004be8:	8b 45 08             	mov    0x8(%ebp),%eax
c1004beb:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1004bf1:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004bf4:	b8 20 00 00 00       	mov    $0x20,%eax
c1004bf9:	2b 45 0c             	sub    0xc(%ebp),%eax
c1004bfc:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1004bff:	89 c1                	mov    %eax,%ecx
c1004c01:	d3 ea                	shr    %cl,%edx
c1004c03:	89 d0                	mov    %edx,%eax
c1004c05:	c9                   	leave  
c1004c06:	c3                   	ret    

c1004c07 <sema_init>:
c1004c07:	55                   	push   %ebp
c1004c08:	89 e5                	mov    %esp,%ebp
c1004c0a:	83 ec 14             	sub    $0x14,%esp
c1004c0d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004c10:	88 45 ec             	mov    %al,-0x14(%ebp)
c1004c13:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c16:	0f b6 55 ec          	movzbl -0x14(%ebp),%edx
c1004c1a:	88 10                	mov    %dl,(%eax)
c1004c1c:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c1f:	83 c0 04             	add    $0x4,%eax
c1004c22:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004c25:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004c28:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1004c2b:	89 50 04             	mov    %edx,0x4(%eax)
c1004c2e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004c31:	8b 50 04             	mov    0x4(%eax),%edx
c1004c34:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004c37:	89 10                	mov    %edx,(%eax)
c1004c39:	90                   	nop
c1004c3a:	90                   	nop
c1004c3b:	c9                   	leave  
c1004c3c:	c3                   	ret    

c1004c3d <lock_init>:
c1004c3d:	55                   	push   %ebp
c1004c3e:	89 e5                	mov    %esp,%ebp
c1004c40:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c43:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1004c49:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c4c:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004c53:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c56:	83 c0 04             	add    $0x4,%eax
c1004c59:	6a 01                	push   $0x1
c1004c5b:	50                   	push   %eax
c1004c5c:	e8 a6 ff ff ff       	call   c1004c07 <sema_init>
c1004c61:	83 c4 08             	add    $0x8,%esp
c1004c64:	90                   	nop
c1004c65:	c9                   	leave  
c1004c66:	c3                   	ret    

c1004c67 <sema_down>:
c1004c67:	55                   	push   %ebp
c1004c68:	89 e5                	mov    %esp,%ebp
c1004c6a:	83 ec 38             	sub    $0x38,%esp
c1004c6d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c70:	83 c0 04             	add    $0x4,%eax
c1004c73:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004c76:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004c79:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004c7c:	e8 cc c0 ff ff       	call   c1000d4d <intr_save>
c1004c81:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004c84:	e9 95 00 00 00       	jmp    c1004d1e <sema_down+0xb7>
c1004c89:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004c8e:	83 c0 50             	add    $0x50,%eax
c1004c91:	39 45 f4             	cmp    %eax,-0xc(%ebp)
c1004c94:	75 16                	jne    c1004cac <sema_down+0x45>
c1004c96:	68 38 a5 00 c1       	push   $0xc100a538
c1004c9b:	68 14 a6 00 c1       	push   $0xc100a614
c1004ca0:	6a 26                	push   $0x26
c1004ca2:	68 6c a5 00 c1       	push   $0xc100a56c
c1004ca7:	e8 61 b6 ff ff       	call   c100030d <__PANIC>
c1004cac:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004caf:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004cb2:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004cb5:	8b 40 04             	mov    0x4(%eax),%eax
c1004cb8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004cbb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004cbe:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1004cc1:	75 c6                	jne    c1004c89 <sema_down+0x22>
c1004cc3:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004cc8:	83 c0 50             	add    $0x50,%eax
c1004ccb:	8b 55 08             	mov    0x8(%ebp),%edx
c1004cce:	83 c2 04             	add    $0x4,%edx
c1004cd1:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1004cd4:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004cd7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004cda:	8b 00                	mov    (%eax),%eax
c1004cdc:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1004cdf:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1004ce2:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004ce5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004ce8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1004ceb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1004cee:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1004cf1:	89 10                	mov    %edx,(%eax)
c1004cf3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1004cf6:	8b 10                	mov    (%eax),%edx
c1004cf8:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004cfb:	89 50 04             	mov    %edx,0x4(%eax)
c1004cfe:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004d01:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1004d04:	89 50 04             	mov    %edx,0x4(%eax)
c1004d07:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004d0a:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1004d0d:	89 10                	mov    %edx,(%eax)
c1004d0f:	90                   	nop
c1004d10:	90                   	nop
c1004d11:	83 ec 0c             	sub    $0xc,%esp
c1004d14:	6a 01                	push   $0x1
c1004d16:	e8 fd e9 ff ff       	call   c1003718 <thread_block>
c1004d1b:	83 c4 10             	add    $0x10,%esp
c1004d1e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d21:	0f b6 00             	movzbl (%eax),%eax
c1004d24:	84 c0                	test   %al,%al
c1004d26:	74 84                	je     c1004cac <sema_down+0x45>
c1004d28:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d2b:	0f b6 00             	movzbl (%eax),%eax
c1004d2e:	8d 50 ff             	lea    -0x1(%eax),%edx
c1004d31:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d34:	88 10                	mov    %dl,(%eax)
c1004d36:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d39:	0f b6 00             	movzbl (%eax),%eax
c1004d3c:	84 c0                	test   %al,%al
c1004d3e:	74 16                	je     c1004d56 <sema_down+0xef>
c1004d40:	68 9d a5 00 c1       	push   $0xc100a59d
c1004d45:	68 14 a6 00 c1       	push   $0xc100a614
c1004d4a:	6a 35                	push   $0x35
c1004d4c:	68 6c a5 00 c1       	push   $0xc100a56c
c1004d51:	e8 b7 b5 ff ff       	call   c100030d <__PANIC>
c1004d56:	83 ec 0c             	sub    $0xc,%esp
c1004d59:	ff 75 ec             	pushl  -0x14(%ebp)
c1004d5c:	e8 ff bf ff ff       	call   c1000d60 <intr_restore>
c1004d61:	83 c4 10             	add    $0x10,%esp
c1004d64:	90                   	nop
c1004d65:	c9                   	leave  
c1004d66:	c3                   	ret    

c1004d67 <sema_up>:
c1004d67:	55                   	push   %ebp
c1004d68:	89 e5                	mov    %esp,%ebp
c1004d6a:	83 ec 28             	sub    $0x28,%esp
c1004d6d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d70:	83 c0 04             	add    $0x4,%eax
c1004d73:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004d76:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004d79:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004d7c:	e8 cc bf ff ff       	call   c1000d4d <intr_save>
c1004d81:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004d84:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d87:	0f b6 00             	movzbl (%eax),%eax
c1004d8a:	84 c0                	test   %al,%al
c1004d8c:	74 2d                	je     c1004dbb <sema_up+0x54>
c1004d8e:	68 9d a5 00 c1       	push   $0xc100a59d
c1004d93:	68 20 a6 00 c1       	push   $0xc100a620
c1004d98:	6a 44                	push   $0x44
c1004d9a:	68 6c a5 00 c1       	push   $0xc100a56c
c1004d9f:	e8 69 b5 ff ff       	call   c100030d <__PANIC>
c1004da4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004da7:	83 e8 50             	sub    $0x50,%eax
c1004daa:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004dad:	83 ec 0c             	sub    $0xc,%esp
c1004db0:	ff 75 e8             	pushl  -0x18(%ebp)
c1004db3:	e8 ad e9 ff ff       	call   c1003765 <thread_unblock>
c1004db8:	83 c4 10             	add    $0x10,%esp
c1004dbb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004dbe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1004dc1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004dc4:	8b 40 04             	mov    0x4(%eax),%eax
c1004dc7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004dca:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004dcd:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1004dd0:	75 d2                	jne    c1004da4 <sema_up+0x3d>
c1004dd2:	8b 45 08             	mov    0x8(%ebp),%eax
c1004dd5:	0f b6 00             	movzbl (%eax),%eax
c1004dd8:	8d 50 01             	lea    0x1(%eax),%edx
c1004ddb:	8b 45 08             	mov    0x8(%ebp),%eax
c1004dde:	88 10                	mov    %dl,(%eax)
c1004de0:	8b 45 08             	mov    0x8(%ebp),%eax
c1004de3:	0f b6 00             	movzbl (%eax),%eax
c1004de6:	3c 01                	cmp    $0x1,%al
c1004de8:	74 16                	je     c1004e00 <sema_up+0x99>
c1004dea:	68 af a5 00 c1       	push   $0xc100a5af
c1004def:	68 20 a6 00 c1       	push   $0xc100a620
c1004df4:	6a 4b                	push   $0x4b
c1004df6:	68 6c a5 00 c1       	push   $0xc100a56c
c1004dfb:	e8 0d b5 ff ff       	call   c100030d <__PANIC>
c1004e00:	83 ec 0c             	sub    $0xc,%esp
c1004e03:	ff 75 ec             	pushl  -0x14(%ebp)
c1004e06:	e8 55 bf ff ff       	call   c1000d60 <intr_restore>
c1004e0b:	83 c4 10             	add    $0x10,%esp
c1004e0e:	90                   	nop
c1004e0f:	c9                   	leave  
c1004e10:	c3                   	ret    

c1004e11 <lock_acquire>:
c1004e11:	55                   	push   %ebp
c1004e12:	89 e5                	mov    %esp,%ebp
c1004e14:	83 ec 08             	sub    $0x8,%esp
c1004e17:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e1a:	8b 10                	mov    (%eax),%edx
c1004e1c:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004e21:	39 c2                	cmp    %eax,%edx
c1004e23:	74 49                	je     c1004e6e <lock_acquire+0x5d>
c1004e25:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e28:	83 c0 04             	add    $0x4,%eax
c1004e2b:	83 ec 0c             	sub    $0xc,%esp
c1004e2e:	50                   	push   %eax
c1004e2f:	e8 33 fe ff ff       	call   c1004c67 <sema_down>
c1004e34:	83 c4 10             	add    $0x10,%esp
c1004e37:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c1004e3d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e40:	89 10                	mov    %edx,(%eax)
c1004e42:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e45:	8b 40 10             	mov    0x10(%eax),%eax
c1004e48:	85 c0                	test   %eax,%eax
c1004e4a:	74 16                	je     c1004e62 <lock_acquire+0x51>
c1004e4c:	68 c1 a5 00 c1       	push   $0xc100a5c1
c1004e51:	68 28 a6 00 c1       	push   $0xc100a628
c1004e56:	6a 59                	push   $0x59
c1004e58:	68 6c a5 00 c1       	push   $0xc100a56c
c1004e5d:	e8 ab b4 ff ff       	call   c100030d <__PANIC>
c1004e62:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e65:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
c1004e6c:	eb 0f                	jmp    c1004e7d <lock_acquire+0x6c>
c1004e6e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e71:	8b 40 10             	mov    0x10(%eax),%eax
c1004e74:	8d 50 01             	lea    0x1(%eax),%edx
c1004e77:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e7a:	89 50 10             	mov    %edx,0x10(%eax)
c1004e7d:	90                   	nop
c1004e7e:	c9                   	leave  
c1004e7f:	c3                   	ret    

c1004e80 <lock_release>:
c1004e80:	55                   	push   %ebp
c1004e81:	89 e5                	mov    %esp,%ebp
c1004e83:	83 ec 08             	sub    $0x8,%esp
c1004e86:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e89:	8b 10                	mov    (%eax),%edx
c1004e8b:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004e90:	39 c2                	cmp    %eax,%edx
c1004e92:	74 16                	je     c1004eaa <lock_release+0x2a>
c1004e94:	68 de a5 00 c1       	push   $0xc100a5de
c1004e99:	68 38 a6 00 c1       	push   $0xc100a638
c1004e9e:	6a 62                	push   $0x62
c1004ea0:	68 6c a5 00 c1       	push   $0xc100a56c
c1004ea5:	e8 63 b4 ff ff       	call   c100030d <__PANIC>
c1004eaa:	8b 45 08             	mov    0x8(%ebp),%eax
c1004ead:	8b 40 10             	mov    0x10(%eax),%eax
c1004eb0:	83 f8 01             	cmp    $0x1,%eax
c1004eb3:	76 11                	jbe    c1004ec6 <lock_release+0x46>
c1004eb5:	8b 45 08             	mov    0x8(%ebp),%eax
c1004eb8:	8b 40 10             	mov    0x10(%eax),%eax
c1004ebb:	8d 50 ff             	lea    -0x1(%eax),%edx
c1004ebe:	8b 45 08             	mov    0x8(%ebp),%eax
c1004ec1:	89 50 10             	mov    %edx,0x10(%eax)
c1004ec4:	eb 46                	jmp    c1004f0c <lock_release+0x8c>
c1004ec6:	8b 45 08             	mov    0x8(%ebp),%eax
c1004ec9:	8b 40 10             	mov    0x10(%eax),%eax
c1004ecc:	83 f8 01             	cmp    $0x1,%eax
c1004ecf:	74 16                	je     c1004ee7 <lock_release+0x67>
c1004ed1:	68 f7 a5 00 c1       	push   $0xc100a5f7
c1004ed6:	68 38 a6 00 c1       	push   $0xc100a638
c1004edb:	6a 67                	push   $0x67
c1004edd:	68 6c a5 00 c1       	push   $0xc100a56c
c1004ee2:	e8 26 b4 ff ff       	call   c100030d <__PANIC>
c1004ee7:	8b 45 08             	mov    0x8(%ebp),%eax
c1004eea:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1004ef0:	8b 45 08             	mov    0x8(%ebp),%eax
c1004ef3:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004efa:	8b 45 08             	mov    0x8(%ebp),%eax
c1004efd:	83 c0 04             	add    $0x4,%eax
c1004f00:	83 ec 0c             	sub    $0xc,%esp
c1004f03:	50                   	push   %eax
c1004f04:	e8 5e fe ff ff       	call   c1004d67 <sema_up>
c1004f09:	83 c4 10             	add    $0x10,%esp
c1004f0c:	c9                   	leave  
c1004f0d:	c3                   	ret    

c1004f0e <waitdisk>:
c1004f0e:	55                   	push   %ebp
c1004f0f:	89 e5                	mov    %esp,%ebp
c1004f11:	83 ec 08             	sub    $0x8,%esp
c1004f14:	90                   	nop
c1004f15:	83 ec 0c             	sub    $0xc,%esp
c1004f18:	68 f7 01 00 00       	push   $0x1f7
c1004f1d:	e8 de b0 ff ff       	call   c1000000 <inb>
c1004f22:	83 c4 10             	add    $0x10,%esp
c1004f25:	0f b6 c0             	movzbl %al,%eax
c1004f28:	25 c0 00 00 00       	and    $0xc0,%eax
c1004f2d:	83 f8 40             	cmp    $0x40,%eax
c1004f30:	75 e3                	jne    c1004f15 <waitdisk+0x7>
c1004f32:	90                   	nop
c1004f33:	90                   	nop
c1004f34:	c9                   	leave  
c1004f35:	c3                   	ret    

c1004f36 <insl>:
c1004f36:	55                   	push   %ebp
c1004f37:	89 e5                	mov    %esp,%ebp
c1004f39:	57                   	push   %edi
c1004f3a:	53                   	push   %ebx
c1004f3b:	8b 55 08             	mov    0x8(%ebp),%edx
c1004f3e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1004f41:	8b 45 10             	mov    0x10(%ebp),%eax
c1004f44:	89 cb                	mov    %ecx,%ebx
c1004f46:	89 df                	mov    %ebx,%edi
c1004f48:	89 c1                	mov    %eax,%ecx
c1004f4a:	fc                   	cld    
c1004f4b:	f2 6d                	repnz insl (%dx),%es:(%edi)
c1004f4d:	89 c8                	mov    %ecx,%eax
c1004f4f:	89 fb                	mov    %edi,%ebx
c1004f51:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1004f54:	89 45 10             	mov    %eax,0x10(%ebp)
c1004f57:	90                   	nop
c1004f58:	5b                   	pop    %ebx
c1004f59:	5f                   	pop    %edi
c1004f5a:	5d                   	pop    %ebp
c1004f5b:	c3                   	ret    

c1004f5c <outsl>:
c1004f5c:	55                   	push   %ebp
c1004f5d:	89 e5                	mov    %esp,%ebp
c1004f5f:	56                   	push   %esi
c1004f60:	53                   	push   %ebx
c1004f61:	8b 55 08             	mov    0x8(%ebp),%edx
c1004f64:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1004f67:	8b 45 10             	mov    0x10(%ebp),%eax
c1004f6a:	89 cb                	mov    %ecx,%ebx
c1004f6c:	89 de                	mov    %ebx,%esi
c1004f6e:	89 c1                	mov    %eax,%ecx
c1004f70:	fc                   	cld    
c1004f71:	f2 6f                	repnz outsl %ds:(%esi),(%dx)
c1004f73:	89 c8                	mov    %ecx,%eax
c1004f75:	89 f3                	mov    %esi,%ebx
c1004f77:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1004f7a:	89 45 10             	mov    %eax,0x10(%ebp)
c1004f7d:	90                   	nop
c1004f7e:	5b                   	pop    %ebx
c1004f7f:	5e                   	pop    %esi
c1004f80:	5d                   	pop    %ebp
c1004f81:	c3                   	ret    

c1004f82 <ide_read_sect>:
c1004f82:	55                   	push   %ebp
c1004f83:	89 e5                	mov    %esp,%ebp
c1004f85:	83 ec 08             	sub    $0x8,%esp
c1004f88:	e8 81 ff ff ff       	call   c1004f0e <waitdisk>
c1004f8d:	83 ec 08             	sub    $0x8,%esp
c1004f90:	6a 01                	push   $0x1
c1004f92:	68 f2 01 00 00       	push   $0x1f2
c1004f97:	e8 a0 b0 ff ff       	call   c100003c <outb>
c1004f9c:	83 c4 10             	add    $0x10,%esp
c1004f9f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004fa2:	0f b6 c0             	movzbl %al,%eax
c1004fa5:	83 ec 08             	sub    $0x8,%esp
c1004fa8:	50                   	push   %eax
c1004fa9:	68 f3 01 00 00       	push   $0x1f3
c1004fae:	e8 89 b0 ff ff       	call   c100003c <outb>
c1004fb3:	83 c4 10             	add    $0x10,%esp
c1004fb6:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004fb9:	c1 e8 08             	shr    $0x8,%eax
c1004fbc:	0f b6 c0             	movzbl %al,%eax
c1004fbf:	83 ec 08             	sub    $0x8,%esp
c1004fc2:	50                   	push   %eax
c1004fc3:	68 f4 01 00 00       	push   $0x1f4
c1004fc8:	e8 6f b0 ff ff       	call   c100003c <outb>
c1004fcd:	83 c4 10             	add    $0x10,%esp
c1004fd0:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004fd3:	c1 e8 10             	shr    $0x10,%eax
c1004fd6:	0f b6 c0             	movzbl %al,%eax
c1004fd9:	83 ec 08             	sub    $0x8,%esp
c1004fdc:	50                   	push   %eax
c1004fdd:	68 f5 01 00 00       	push   $0x1f5
c1004fe2:	e8 55 b0 ff ff       	call   c100003c <outb>
c1004fe7:	83 c4 10             	add    $0x10,%esp
c1004fea:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004fed:	c1 e8 18             	shr    $0x18,%eax
c1004ff0:	83 e0 0f             	and    $0xf,%eax
c1004ff3:	83 c8 e0             	or     $0xffffffe0,%eax
c1004ff6:	0f b6 c0             	movzbl %al,%eax
c1004ff9:	83 ec 08             	sub    $0x8,%esp
c1004ffc:	50                   	push   %eax
c1004ffd:	68 f6 01 00 00       	push   $0x1f6
c1005002:	e8 35 b0 ff ff       	call   c100003c <outb>
c1005007:	83 c4 10             	add    $0x10,%esp
c100500a:	83 ec 08             	sub    $0x8,%esp
c100500d:	6a 20                	push   $0x20
c100500f:	68 f7 01 00 00       	push   $0x1f7
c1005014:	e8 23 b0 ff ff       	call   c100003c <outb>
c1005019:	83 c4 10             	add    $0x10,%esp
c100501c:	e8 ed fe ff ff       	call   c1004f0e <waitdisk>
c1005021:	83 ec 04             	sub    $0x4,%esp
c1005024:	68 80 00 00 00       	push   $0x80
c1005029:	ff 75 08             	pushl  0x8(%ebp)
c100502c:	68 f0 01 00 00       	push   $0x1f0
c1005031:	e8 00 ff ff ff       	call   c1004f36 <insl>
c1005036:	83 c4 10             	add    $0x10,%esp
c1005039:	90                   	nop
c100503a:	c9                   	leave  
c100503b:	c3                   	ret    

c100503c <ide_write_sect>:
c100503c:	55                   	push   %ebp
c100503d:	89 e5                	mov    %esp,%ebp
c100503f:	83 ec 08             	sub    $0x8,%esp
c1005042:	e8 c7 fe ff ff       	call   c1004f0e <waitdisk>
c1005047:	83 ec 08             	sub    $0x8,%esp
c100504a:	6a 01                	push   $0x1
c100504c:	68 f2 01 00 00       	push   $0x1f2
c1005051:	e8 e6 af ff ff       	call   c100003c <outb>
c1005056:	83 c4 10             	add    $0x10,%esp
c1005059:	8b 45 0c             	mov    0xc(%ebp),%eax
c100505c:	0f b6 c0             	movzbl %al,%eax
c100505f:	83 ec 08             	sub    $0x8,%esp
c1005062:	50                   	push   %eax
c1005063:	68 f3 01 00 00       	push   $0x1f3
c1005068:	e8 cf af ff ff       	call   c100003c <outb>
c100506d:	83 c4 10             	add    $0x10,%esp
c1005070:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005073:	c1 e8 08             	shr    $0x8,%eax
c1005076:	0f b6 c0             	movzbl %al,%eax
c1005079:	83 ec 08             	sub    $0x8,%esp
c100507c:	50                   	push   %eax
c100507d:	68 f4 01 00 00       	push   $0x1f4
c1005082:	e8 b5 af ff ff       	call   c100003c <outb>
c1005087:	83 c4 10             	add    $0x10,%esp
c100508a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100508d:	c1 e8 10             	shr    $0x10,%eax
c1005090:	0f b6 c0             	movzbl %al,%eax
c1005093:	83 ec 08             	sub    $0x8,%esp
c1005096:	50                   	push   %eax
c1005097:	68 f5 01 00 00       	push   $0x1f5
c100509c:	e8 9b af ff ff       	call   c100003c <outb>
c10050a1:	83 c4 10             	add    $0x10,%esp
c10050a4:	8b 45 0c             	mov    0xc(%ebp),%eax
c10050a7:	c1 e8 18             	shr    $0x18,%eax
c10050aa:	83 e0 0f             	and    $0xf,%eax
c10050ad:	83 c8 e0             	or     $0xffffffe0,%eax
c10050b0:	0f b6 c0             	movzbl %al,%eax
c10050b3:	83 ec 08             	sub    $0x8,%esp
c10050b6:	50                   	push   %eax
c10050b7:	68 f6 01 00 00       	push   $0x1f6
c10050bc:	e8 7b af ff ff       	call   c100003c <outb>
c10050c1:	83 c4 10             	add    $0x10,%esp
c10050c4:	83 ec 08             	sub    $0x8,%esp
c10050c7:	6a 30                	push   $0x30
c10050c9:	68 f7 01 00 00       	push   $0x1f7
c10050ce:	e8 69 af ff ff       	call   c100003c <outb>
c10050d3:	83 c4 10             	add    $0x10,%esp
c10050d6:	e8 33 fe ff ff       	call   c1004f0e <waitdisk>
c10050db:	83 ec 04             	sub    $0x4,%esp
c10050de:	68 80 00 00 00       	push   $0x80
c10050e3:	ff 75 08             	pushl  0x8(%ebp)
c10050e6:	68 f0 01 00 00       	push   $0x1f0
c10050eb:	e8 6c fe ff ff       	call   c1004f5c <outsl>
c10050f0:	83 c4 10             	add    $0x10,%esp
c10050f3:	90                   	nop
c10050f4:	c9                   	leave  
c10050f5:	c3                   	ret    

c10050f6 <ide_read>:
c10050f6:	55                   	push   %ebp
c10050f7:	89 e5                	mov    %esp,%ebp
c10050f9:	83 ec 18             	sub    $0x18,%esp
c10050fc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005103:	eb 22                	jmp    c1005127 <ide_read+0x31>
c1005105:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005108:	8b 45 0c             	mov    0xc(%ebp),%eax
c100510b:	01 d0                	add    %edx,%eax
c100510d:	83 ec 08             	sub    $0x8,%esp
c1005110:	50                   	push   %eax
c1005111:	ff 75 08             	pushl  0x8(%ebp)
c1005114:	e8 69 fe ff ff       	call   c1004f82 <ide_read_sect>
c1005119:	83 c4 10             	add    $0x10,%esp
c100511c:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1005123:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1005127:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100512a:	39 45 10             	cmp    %eax,0x10(%ebp)
c100512d:	77 d6                	ja     c1005105 <ide_read+0xf>
c100512f:	90                   	nop
c1005130:	90                   	nop
c1005131:	c9                   	leave  
c1005132:	c3                   	ret    

c1005133 <ide_write>:
c1005133:	55                   	push   %ebp
c1005134:	89 e5                	mov    %esp,%ebp
c1005136:	83 ec 18             	sub    $0x18,%esp
c1005139:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005140:	eb 22                	jmp    c1005164 <ide_write+0x31>
c1005142:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005145:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005148:	01 d0                	add    %edx,%eax
c100514a:	83 ec 08             	sub    $0x8,%esp
c100514d:	50                   	push   %eax
c100514e:	ff 75 08             	pushl  0x8(%ebp)
c1005151:	e8 e6 fe ff ff       	call   c100503c <ide_write_sect>
c1005156:	83 c4 10             	add    $0x10,%esp
c1005159:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1005160:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1005164:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005167:	39 45 10             	cmp    %eax,0x10(%ebp)
c100516a:	77 d6                	ja     c1005142 <ide_write+0xf>
c100516c:	90                   	nop
c100516d:	90                   	nop
c100516e:	c9                   	leave  
c100516f:	c3                   	ret    

c1005170 <delay>:
c1005170:	55                   	push   %ebp
c1005171:	89 e5                	mov    %esp,%ebp
c1005173:	83 ec 10             	sub    $0x10,%esp
c1005176:	8b 45 08             	mov    0x8(%ebp),%eax
c1005179:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100517c:	eb 17                	jmp    c1005195 <delay+0x25>
c100517e:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c1005185:	eb 04                	jmp    c100518b <delay+0x1b>
c1005187:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c100518b:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c100518f:	75 f6                	jne    c1005187 <delay+0x17>
c1005191:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c1005195:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1005199:	75 e3                	jne    c100517e <delay+0xe>
c100519b:	90                   	nop
c100519c:	90                   	nop
c100519d:	c9                   	leave  
c100519e:	c3                   	ret    

c100519f <read_main_partition>:
c100519f:	55                   	push   %ebp
c10051a0:	89 e5                	mov    %esp,%ebp
c10051a2:	83 ec 18             	sub    $0x18,%esp
c10051a5:	83 ec 08             	sub    $0x8,%esp
c10051a8:	6a 01                	push   $0x1
c10051aa:	68 00 02 00 00       	push   $0x200
c10051af:	e8 8f d9 ff ff       	call   c1002b43 <vmm_malloc>
c10051b4:	83 c4 10             	add    $0x10,%esp
c10051b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10051ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10051bd:	83 ec 08             	sub    $0x8,%esp
c10051c0:	6a 00                	push   $0x0
c10051c2:	50                   	push   %eax
c10051c3:	e8 ba fd ff ff       	call   c1004f82 <ide_read_sect>
c10051c8:	83 c4 10             	add    $0x10,%esp
c10051cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10051ce:	05 be 01 00 00       	add    $0x1be,%eax
c10051d3:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10051d6:	e8 b5 f2 ff ff       	call   c1004490 <clear>
c10051db:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10051de:	0f b6 00             	movzbl (%eax),%eax
c10051e1:	0f b6 c0             	movzbl %al,%eax
c10051e4:	83 ec 08             	sub    $0x8,%esp
c10051e7:	50                   	push   %eax
c10051e8:	68 45 a6 00 c1       	push   $0xc100a645
c10051ed:	e8 c1 f5 ff ff       	call   c10047b3 <printk>
c10051f2:	83 c4 10             	add    $0x10,%esp
c10051f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10051f8:	0f b6 40 01          	movzbl 0x1(%eax),%eax
c10051fc:	0f b6 c0             	movzbl %al,%eax
c10051ff:	83 ec 08             	sub    $0x8,%esp
c1005202:	50                   	push   %eax
c1005203:	68 58 a6 00 c1       	push   $0xc100a658
c1005208:	e8 a6 f5 ff ff       	call   c10047b3 <printk>
c100520d:	83 c4 10             	add    $0x10,%esp
c1005210:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005213:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c1005217:	0f b6 c0             	movzbl %al,%eax
c100521a:	83 ec 08             	sub    $0x8,%esp
c100521d:	50                   	push   %eax
c100521e:	68 6e a6 00 c1       	push   $0xc100a66e
c1005223:	e8 8b f5 ff ff       	call   c10047b3 <printk>
c1005228:	83 c4 10             	add    $0x10,%esp
c100522b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100522e:	0f b6 40 03          	movzbl 0x3(%eax),%eax
c1005232:	0f b6 c0             	movzbl %al,%eax
c1005235:	83 ec 08             	sub    $0x8,%esp
c1005238:	50                   	push   %eax
c1005239:	68 82 a6 00 c1       	push   $0xc100a682
c100523e:	e8 70 f5 ff ff       	call   c10047b3 <printk>
c1005243:	83 c4 10             	add    $0x10,%esp
c1005246:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005249:	0f b6 40 04          	movzbl 0x4(%eax),%eax
c100524d:	0f b6 c0             	movzbl %al,%eax
c1005250:	83 ec 08             	sub    $0x8,%esp
c1005253:	50                   	push   %eax
c1005254:	68 98 a6 00 c1       	push   $0xc100a698
c1005259:	e8 55 f5 ff ff       	call   c10047b3 <printk>
c100525e:	83 c4 10             	add    $0x10,%esp
c1005261:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005264:	0f b6 40 05          	movzbl 0x5(%eax),%eax
c1005268:	0f b6 c0             	movzbl %al,%eax
c100526b:	83 ec 08             	sub    $0x8,%esp
c100526e:	50                   	push   %eax
c100526f:	68 a9 a6 00 c1       	push   $0xc100a6a9
c1005274:	e8 3a f5 ff ff       	call   c10047b3 <printk>
c1005279:	83 c4 10             	add    $0x10,%esp
c100527c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100527f:	0f b6 40 06          	movzbl 0x6(%eax),%eax
c1005283:	0f b6 c0             	movzbl %al,%eax
c1005286:	83 ec 08             	sub    $0x8,%esp
c1005289:	50                   	push   %eax
c100528a:	68 bd a6 00 c1       	push   $0xc100a6bd
c100528f:	e8 1f f5 ff ff       	call   c10047b3 <printk>
c1005294:	83 c4 10             	add    $0x10,%esp
c1005297:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100529a:	0f b6 40 07          	movzbl 0x7(%eax),%eax
c100529e:	0f b6 c0             	movzbl %al,%eax
c10052a1:	83 ec 08             	sub    $0x8,%esp
c10052a4:	50                   	push   %eax
c10052a5:	68 cf a6 00 c1       	push   $0xc100a6cf
c10052aa:	e8 04 f5 ff ff       	call   c10047b3 <printk>
c10052af:	83 c4 10             	add    $0x10,%esp
c10052b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10052b5:	8b 40 08             	mov    0x8(%eax),%eax
c10052b8:	83 ec 08             	sub    $0x8,%esp
c10052bb:	50                   	push   %eax
c10052bc:	68 e3 a6 00 c1       	push   $0xc100a6e3
c10052c1:	e8 ed f4 ff ff       	call   c10047b3 <printk>
c10052c6:	83 c4 10             	add    $0x10,%esp
c10052c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10052cc:	8b 40 0c             	mov    0xc(%eax),%eax
c10052cf:	83 ec 08             	sub    $0x8,%esp
c10052d2:	50                   	push   %eax
c10052d3:	68 f7 a6 00 c1       	push   $0xc100a6f7
c10052d8:	e8 d6 f4 ff ff       	call   c10047b3 <printk>
c10052dd:	83 c4 10             	add    $0x10,%esp
c10052e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10052e3:	c9                   	leave  
c10052e4:	c3                   	ret    

c10052e5 <test_ide_io>:
c10052e5:	55                   	push   %ebp
c10052e6:	89 e5                	mov    %esp,%ebp
c10052e8:	83 ec 18             	sub    $0x18,%esp
c10052eb:	83 ec 08             	sub    $0x8,%esp
c10052ee:	68 00 80 10 00       	push   $0x108000
c10052f3:	68 0a a7 00 c1       	push   $0xc100a70a
c10052f8:	e8 b6 f4 ff ff       	call   c10047b3 <printk>
c10052fd:	83 c4 10             	add    $0x10,%esp
c1005300:	83 ec 08             	sub    $0x8,%esp
c1005303:	68 cc da 00 c1       	push   $0xc100dacc
c1005308:	68 19 a7 00 c1       	push   $0xc100a719
c100530d:	e8 a1 f4 ff ff       	call   c10047b3 <printk>
c1005312:	83 c4 10             	add    $0x10,%esp
c1005315:	b8 00 80 10 00       	mov    $0x108000,%eax
c100531a:	2d 01 fe 0f 00       	sub    $0xffe01,%eax
c100531f:	c1 e8 09             	shr    $0x9,%eax
c1005322:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005325:	b8 cc da 00 c1       	mov    $0xc100dacc,%eax
c100532a:	05 ff 01 00 3f       	add    $0x3f0001ff,%eax
c100532f:	c1 e8 09             	shr    $0x9,%eax
c1005332:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005335:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005338:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100533b:	01 d0                	add    %edx,%eax
c100533d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005340:	83 ec 08             	sub    $0x8,%esp
c1005343:	ff 75 ec             	pushl  -0x14(%ebp)
c1005346:	68 28 a7 00 c1       	push   $0xc100a728
c100534b:	e8 63 f4 ff ff       	call   c10047b3 <printk>
c1005350:	83 c4 10             	add    $0x10,%esp
c1005353:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1005357:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100535e:	e8 3c fe ff ff       	call   c100519f <read_main_partition>
c1005363:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005366:	90                   	nop
c1005367:	c9                   	leave  
c1005368:	c3                   	ret    

c1005369 <hash32>:
c1005369:	55                   	push   %ebp
c100536a:	89 e5                	mov    %esp,%ebp
c100536c:	83 ec 10             	sub    $0x10,%esp
c100536f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005372:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1005378:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100537b:	b8 20 00 00 00       	mov    $0x20,%eax
c1005380:	2b 45 0c             	sub    0xc(%ebp),%eax
c1005383:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005386:	89 c1                	mov    %eax,%ecx
c1005388:	d3 ea                	shr    %cl,%edx
c100538a:	89 d0                	mov    %edx,%eax
c100538c:	c9                   	leave  
c100538d:	c3                   	ret    

c100538e <partition_format>:
c100538e:	55                   	push   %ebp
c100538f:	89 e5                	mov    %esp,%ebp
c1005391:	53                   	push   %ebx
c1005392:	81 ec 44 02 00 00    	sub    $0x244,%esp
c1005398:	e8 02 fe ff ff       	call   c100519f <read_main_partition>
c100539d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10053a0:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
c10053a7:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
c10053ae:	c7 45 e4 11 00 00 00 	movl   $0x11,-0x1c(%ebp)
c10053b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10053b8:	8b 40 0c             	mov    0xc(%eax),%eax
c10053bb:	2b 45 ec             	sub    -0x14(%ebp),%eax
c10053be:	2b 45 e8             	sub    -0x18(%ebp),%eax
c10053c1:	2b 45 e4             	sub    -0x1c(%ebp),%eax
c10053c4:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10053c7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10053ca:	05 ff 0f 00 00       	add    $0xfff,%eax
c10053cf:	c1 e8 0c             	shr    $0xc,%eax
c10053d2:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10053d5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10053d8:	2b 45 dc             	sub    -0x24(%ebp),%eax
c10053db:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10053de:	c7 85 bc fd ff ff 18 	movl   $0x19590318,-0x244(%ebp)
c10053e5:	03 59 19 
c10053e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10053eb:	8b 40 0c             	mov    0xc(%eax),%eax
c10053ee:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
c10053f4:	c7 85 c4 fd ff ff e8 	movl   $0x3e8,-0x23c(%ebp)
c10053fb:	03 00 00 
c10053fe:	c7 85 c8 fd ff ff 00 	movl   $0x800,-0x238(%ebp)
c1005405:	08 00 00 
c1005408:	c7 85 cc fd ff ff 01 	movl   $0x801,-0x234(%ebp)
c100540f:	08 00 00 
c1005412:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005415:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c100541b:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
c1005421:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c1005427:	01 d0                	add    %edx,%eax
c1005429:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
c100542f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005432:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
c1005438:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
c100543e:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c1005444:	01 d0                	add    %edx,%eax
c1005446:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
c100544c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100544f:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
c1005455:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
c100545b:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1005461:	01 d0                	add    %edx,%eax
c1005463:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
c1005469:	c7 85 e8 fd ff ff 00 	movl   $0x0,-0x218(%ebp)
c1005470:	00 00 00 
c1005473:	c7 85 ec fd ff ff 18 	movl   $0x18,-0x214(%ebp)
c100547a:	00 00 00 
c100547d:	e8 0e f0 ff ff       	call   c1004490 <clear>
c1005482:	8b 85 bc fd ff ff    	mov    -0x244(%ebp),%eax
c1005488:	83 ec 08             	sub    $0x8,%esp
c100548b:	50                   	push   %eax
c100548c:	68 38 a7 00 c1       	push   $0xc100a738
c1005491:	e8 1d f3 ff ff       	call   c10047b3 <printk>
c1005496:	83 c4 10             	add    $0x10,%esp
c1005499:	8b 85 c0 fd ff ff    	mov    -0x240(%ebp),%eax
c100549f:	83 ec 08             	sub    $0x8,%esp
c10054a2:	50                   	push   %eax
c10054a3:	68 48 a7 00 c1       	push   $0xc100a748
c10054a8:	e8 06 f3 ff ff       	call   c10047b3 <printk>
c10054ad:	83 c4 10             	add    $0x10,%esp
c10054b0:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
c10054b6:	83 ec 08             	sub    $0x8,%esp
c10054b9:	50                   	push   %eax
c10054ba:	68 5a a7 00 c1       	push   $0xc100a75a
c10054bf:	e8 ef f2 ff ff       	call   c10047b3 <printk>
c10054c4:	83 c4 10             	add    $0x10,%esp
c10054c7:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c10054cd:	83 ec 08             	sub    $0x8,%esp
c10054d0:	50                   	push   %eax
c10054d1:	68 6e a7 00 c1       	push   $0xc100a76e
c10054d6:	e8 d8 f2 ff ff       	call   c10047b3 <printk>
c10054db:	83 c4 10             	add    $0x10,%esp
c10054de:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c10054e4:	83 ec 08             	sub    $0x8,%esp
c10054e7:	50                   	push   %eax
c10054e8:	68 89 a7 00 c1       	push   $0xc100a789
c10054ed:	e8 c1 f2 ff ff       	call   c10047b3 <printk>
c10054f2:	83 c4 10             	add    $0x10,%esp
c10054f5:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c10054fb:	83 ec 08             	sub    $0x8,%esp
c10054fe:	50                   	push   %eax
c10054ff:	68 a6 a7 00 c1       	push   $0xc100a7a6
c1005504:	e8 aa f2 ff ff       	call   c10047b3 <printk>
c1005509:	83 c4 10             	add    $0x10,%esp
c100550c:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c1005512:	83 ec 08             	sub    $0x8,%esp
c1005515:	50                   	push   %eax
c1005516:	68 c1 a7 00 c1       	push   $0xc100a7c1
c100551b:	e8 93 f2 ff ff       	call   c10047b3 <printk>
c1005520:	83 c4 10             	add    $0x10,%esp
c1005523:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c1005529:	83 ec 08             	sub    $0x8,%esp
c100552c:	50                   	push   %eax
c100552d:	68 de a7 00 c1       	push   $0xc100a7de
c1005532:	e8 7c f2 ff ff       	call   c10047b3 <printk>
c1005537:	83 c4 10             	add    $0x10,%esp
c100553a:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1005540:	83 ec 08             	sub    $0x8,%esp
c1005543:	50                   	push   %eax
c1005544:	68 f8 a7 00 c1       	push   $0xc100a7f8
c1005549:	e8 65 f2 ff ff       	call   c10047b3 <printk>
c100554e:	83 c4 10             	add    $0x10,%esp
c1005551:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c1005557:	83 ec 08             	sub    $0x8,%esp
c100555a:	50                   	push   %eax
c100555b:	68 14 a8 00 c1       	push   $0xc100a814
c1005560:	e8 4e f2 ff ff       	call   c10047b3 <printk>
c1005565:	83 c4 10             	add    $0x10,%esp
c1005568:	83 ec 04             	sub    $0x4,%esp
c100556b:	6a 01                	push   $0x1
c100556d:	68 00 08 00 00       	push   $0x800
c1005572:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
c1005578:	50                   	push   %eax
c1005579:	e8 b5 fb ff ff       	call   c1005133 <ide_write>
c100557e:	83 c4 10             	add    $0x10,%esp
c1005581:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c1005587:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c100558d:	39 c2                	cmp    %eax,%edx
c100558f:	0f 43 c2             	cmovae %edx,%eax
c1005592:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1005595:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c100559b:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
c100559e:	0f 43 45 d4          	cmovae -0x2c(%ebp),%eax
c10055a2:	c1 e0 09             	shl    $0x9,%eax
c10055a5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10055a8:	83 ec 08             	sub    $0x8,%esp
c10055ab:	6a 01                	push   $0x1
c10055ad:	ff 75 d4             	pushl  -0x2c(%ebp)
c10055b0:	e8 8e d5 ff ff       	call   c1002b43 <vmm_malloc>
c10055b5:	83 c4 10             	add    $0x10,%esp
c10055b8:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10055bb:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10055be:	0f b6 00             	movzbl (%eax),%eax
c10055c1:	83 c8 01             	or     $0x1,%eax
c10055c4:	89 c2                	mov    %eax,%edx
c10055c6:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10055c9:	88 10                	mov    %dl,(%eax)
c10055cb:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10055ce:	c1 e8 03             	shr    $0x3,%eax
c10055d1:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10055d4:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10055d7:	83 e0 07             	and    $0x7,%eax
c10055da:	88 45 cb             	mov    %al,-0x35(%ebp)
c10055dd:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10055e0:	25 ff 01 00 00       	and    $0x1ff,%eax
c10055e5:	ba 00 02 00 00       	mov    $0x200,%edx
c10055ea:	29 c2                	sub    %eax,%edx
c10055ec:	89 d0                	mov    %edx,%eax
c10055ee:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c10055f1:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10055f4:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10055f7:	01 d0                	add    %edx,%eax
c10055f9:	83 ec 04             	sub    $0x4,%esp
c10055fc:	ff 75 c4             	pushl  -0x3c(%ebp)
c10055ff:	6a ff                	push   $0xffffffff
c1005601:	50                   	push   %eax
c1005602:	e8 a3 aa ff ff       	call   c10000aa <memset>
c1005607:	83 c4 10             	add    $0x10,%esp
c100560a:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100560e:	eb 38                	jmp    c1005648 <partition_format+0x2ba>
c1005610:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005613:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005616:	01 d0                	add    %edx,%eax
c1005618:	0f b6 00             	movzbl (%eax),%eax
c100561b:	89 c2                	mov    %eax,%edx
c100561d:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005621:	bb 01 00 00 00       	mov    $0x1,%ebx
c1005626:	89 c1                	mov    %eax,%ecx
c1005628:	d3 e3                	shl    %cl,%ebx
c100562a:	89 d8                	mov    %ebx,%eax
c100562c:	f7 d0                	not    %eax
c100562e:	89 d1                	mov    %edx,%ecx
c1005630:	21 c1                	and    %eax,%ecx
c1005632:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005635:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005638:	01 d0                	add    %edx,%eax
c100563a:	89 ca                	mov    %ecx,%edx
c100563c:	88 10                	mov    %dl,(%eax)
c100563e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1005642:	83 c0 01             	add    $0x1,%eax
c1005645:	88 45 f7             	mov    %al,-0x9(%ebp)
c1005648:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
c100564c:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1005650:	39 c2                	cmp    %eax,%edx
c1005652:	7c bc                	jl     c1005610 <partition_format+0x282>
c1005654:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
c100565a:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c1005660:	83 ec 04             	sub    $0x4,%esp
c1005663:	52                   	push   %edx
c1005664:	50                   	push   %eax
c1005665:	ff 75 d0             	pushl  -0x30(%ebp)
c1005668:	e8 c6 fa ff ff       	call   c1005133 <ide_write>
c100566d:	83 c4 10             	add    $0x10,%esp
c1005670:	83 ec 04             	sub    $0x4,%esp
c1005673:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005676:	6a 00                	push   $0x0
c1005678:	ff 75 d0             	pushl  -0x30(%ebp)
c100567b:	e8 2a aa ff ff       	call   c10000aa <memset>
c1005680:	83 c4 10             	add    $0x10,%esp
c1005683:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005686:	0f b6 00             	movzbl (%eax),%eax
c1005689:	83 c8 01             	or     $0x1,%eax
c100568c:	89 c2                	mov    %eax,%edx
c100568e:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005691:	88 10                	mov    %dl,(%eax)
c1005693:	c7 45 cc 7d 00 00 00 	movl   $0x7d,-0x34(%ebp)
c100569a:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
c100569e:	b8 00 02 00 00       	mov    $0x200,%eax
c10056a3:	2b 45 cc             	sub    -0x34(%ebp),%eax
c10056a6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c10056a9:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10056ac:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10056af:	01 d0                	add    %edx,%eax
c10056b1:	83 ec 04             	sub    $0x4,%esp
c10056b4:	ff 75 c4             	pushl  -0x3c(%ebp)
c10056b7:	6a ff                	push   $0xffffffff
c10056b9:	50                   	push   %eax
c10056ba:	e8 eb a9 ff ff       	call   c10000aa <memset>
c10056bf:	83 c4 10             	add    $0x10,%esp
c10056c2:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c10056c6:	eb 38                	jmp    c1005700 <partition_format+0x372>
c10056c8:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10056cb:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10056ce:	01 d0                	add    %edx,%eax
c10056d0:	0f b6 00             	movzbl (%eax),%eax
c10056d3:	89 c2                	mov    %eax,%edx
c10056d5:	0f be 45 f6          	movsbl -0xa(%ebp),%eax
c10056d9:	bb 01 00 00 00       	mov    $0x1,%ebx
c10056de:	89 c1                	mov    %eax,%ecx
c10056e0:	d3 e3                	shl    %cl,%ebx
c10056e2:	89 d8                	mov    %ebx,%eax
c10056e4:	f7 d0                	not    %eax
c10056e6:	89 d1                	mov    %edx,%ecx
c10056e8:	21 c1                	and    %eax,%ecx
c10056ea:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10056ed:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10056f0:	01 d0                	add    %edx,%eax
c10056f2:	89 ca                	mov    %ecx,%edx
c10056f4:	88 10                	mov    %dl,(%eax)
c10056f6:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c10056fa:	83 c0 01             	add    $0x1,%eax
c10056fd:	88 45 f6             	mov    %al,-0xa(%ebp)
c1005700:	0f be 55 f6          	movsbl -0xa(%ebp),%edx
c1005704:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1005708:	39 c2                	cmp    %eax,%edx
c100570a:	7c bc                	jl     c10056c8 <partition_format+0x33a>
c100570c:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c1005712:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1005718:	83 ec 04             	sub    $0x4,%esp
c100571b:	52                   	push   %edx
c100571c:	50                   	push   %eax
c100571d:	ff 75 d0             	pushl  -0x30(%ebp)
c1005720:	e8 0e fa ff ff       	call   c1005133 <ide_write>
c1005725:	83 c4 10             	add    $0x10,%esp
c1005728:	83 ec 04             	sub    $0x4,%esp
c100572b:	ff 75 d4             	pushl  -0x2c(%ebp)
c100572e:	6a 00                	push   $0x0
c1005730:	ff 75 d0             	pushl  -0x30(%ebp)
c1005733:	e8 72 a9 ff ff       	call   c10000aa <memset>
c1005738:	83 c4 10             	add    $0x10,%esp
c100573b:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100573e:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1005741:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
c1005747:	8d 14 00             	lea    (%eax,%eax,1),%edx
c100574a:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100574d:	89 50 04             	mov    %edx,0x4(%eax)
c1005750:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1005753:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005759:	8b 95 e4 fd ff ff    	mov    -0x21c(%ebp),%edx
c100575f:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1005762:	89 50 10             	mov    %edx,0x10(%eax)
c1005765:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
c100576b:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c1005771:	83 ec 04             	sub    $0x4,%esp
c1005774:	52                   	push   %edx
c1005775:	50                   	push   %eax
c1005776:	ff 75 d0             	pushl  -0x30(%ebp)
c1005779:	e8 b5 f9 ff ff       	call   c1005133 <ide_write>
c100577e:	83 c4 10             	add    $0x10,%esp
c1005781:	83 ec 04             	sub    $0x4,%esp
c1005784:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005787:	6a 00                	push   $0x0
c1005789:	ff 75 d0             	pushl  -0x30(%ebp)
c100578c:	e8 19 a9 ff ff       	call   c10000aa <memset>
c1005791:	83 c4 10             	add    $0x10,%esp
c1005794:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005797:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100579a:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100579d:	83 ec 04             	sub    $0x4,%esp
c10057a0:	6a 01                	push   $0x1
c10057a2:	68 2d a8 00 c1       	push   $0xc100a82d
c10057a7:	50                   	push   %eax
c10057a8:	e8 5b a9 ff ff       	call   c1000108 <memcpy>
c10057ad:	83 c4 10             	add    $0x10,%esp
c10057b0:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10057b3:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c10057ba:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10057bd:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c10057c4:	83 45 bc 18          	addl   $0x18,-0x44(%ebp)
c10057c8:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10057cb:	83 ec 04             	sub    $0x4,%esp
c10057ce:	6a 02                	push   $0x2
c10057d0:	68 2f a8 00 c1       	push   $0xc100a82f
c10057d5:	50                   	push   %eax
c10057d6:	e8 2d a9 ff ff       	call   c1000108 <memcpy>
c10057db:	83 c4 10             	add    $0x10,%esp
c10057de:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10057e1:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c10057e8:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10057eb:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c10057f2:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c10057f8:	83 ec 04             	sub    $0x4,%esp
c10057fb:	6a 01                	push   $0x1
c10057fd:	50                   	push   %eax
c10057fe:	ff 75 d0             	pushl  -0x30(%ebp)
c1005801:	e8 2d f9 ff ff       	call   c1005133 <ide_write>
c1005806:	83 c4 10             	add    $0x10,%esp
c1005809:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100580c:	83 ec 08             	sub    $0x8,%esp
c100580f:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005812:	50                   	push   %eax
c1005813:	e8 4b d4 ff ff       	call   c1002c63 <vmm_free>
c1005818:	83 c4 10             	add    $0x10,%esp
c100581b:	90                   	nop
c100581c:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100581f:	c9                   	leave  
c1005820:	c3                   	ret    

c1005821 <mount_partition>:
c1005821:	55                   	push   %ebp
c1005822:	89 e5                	mov    %esp,%ebp
c1005824:	83 ec 18             	sub    $0x18,%esp
c1005827:	e8 73 f9 ff ff       	call   c100519f <read_main_partition>
c100582c:	a3 30 32 a1 c1       	mov    %eax,0xc1a13230
c1005831:	83 ec 08             	sub    $0x8,%esp
c1005834:	6a 01                	push   $0x1
c1005836:	68 00 02 00 00       	push   $0x200
c100583b:	e8 03 d3 ff ff       	call   c1002b43 <vmm_malloc>
c1005840:	83 c4 10             	add    $0x10,%esp
c1005843:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005846:	83 ec 04             	sub    $0x4,%esp
c1005849:	68 00 02 00 00       	push   $0x200
c100584e:	6a 00                	push   $0x0
c1005850:	ff 75 f0             	pushl  -0x10(%ebp)
c1005853:	e8 52 a8 ff ff       	call   c10000aa <memset>
c1005858:	83 c4 10             	add    $0x10,%esp
c100585b:	83 ec 04             	sub    $0x4,%esp
c100585e:	6a 01                	push   $0x1
c1005860:	68 00 08 00 00       	push   $0x800
c1005865:	ff 75 f0             	pushl  -0x10(%ebp)
c1005868:	e8 89 f8 ff ff       	call   c10050f6 <ide_read>
c100586d:	83 c4 10             	add    $0x10,%esp
c1005870:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005875:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005878:	89 50 10             	mov    %edx,0x10(%eax)
c100587b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100587e:	8b 40 14             	mov    0x14(%eax),%eax
c1005881:	c1 e0 09             	shl    $0x9,%eax
c1005884:	83 ec 08             	sub    $0x8,%esp
c1005887:	6a 01                	push   $0x1
c1005889:	50                   	push   %eax
c100588a:	e8 b4 d2 ff ff       	call   c1002b43 <vmm_malloc>
c100588f:	83 c4 10             	add    $0x10,%esp
c1005892:	89 c2                	mov    %eax,%edx
c1005894:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005899:	89 50 18             	mov    %edx,0x18(%eax)
c100589c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100589f:	8b 50 14             	mov    0x14(%eax),%edx
c10058a2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10058a7:	c1 e2 09             	shl    $0x9,%edx
c10058aa:	89 50 14             	mov    %edx,0x14(%eax)
c10058ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10058b0:	8b 48 14             	mov    0x14(%eax),%ecx
c10058b3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10058b6:	8b 50 10             	mov    0x10(%eax),%edx
c10058b9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10058be:	8b 40 18             	mov    0x18(%eax),%eax
c10058c1:	83 ec 04             	sub    $0x4,%esp
c10058c4:	51                   	push   %ecx
c10058c5:	52                   	push   %edx
c10058c6:	50                   	push   %eax
c10058c7:	e8 2a f8 ff ff       	call   c10050f6 <ide_read>
c10058cc:	83 c4 10             	add    $0x10,%esp
c10058cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10058d2:	8b 40 1c             	mov    0x1c(%eax),%eax
c10058d5:	c1 e0 09             	shl    $0x9,%eax
c10058d8:	83 ec 08             	sub    $0x8,%esp
c10058db:	6a 01                	push   $0x1
c10058dd:	50                   	push   %eax
c10058de:	e8 60 d2 ff ff       	call   c1002b43 <vmm_malloc>
c10058e3:	83 c4 10             	add    $0x10,%esp
c10058e6:	89 c2                	mov    %eax,%edx
c10058e8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10058ed:	89 50 20             	mov    %edx,0x20(%eax)
c10058f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10058f3:	8b 50 1c             	mov    0x1c(%eax),%edx
c10058f6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10058fb:	c1 e2 09             	shl    $0x9,%edx
c10058fe:	89 50 1c             	mov    %edx,0x1c(%eax)
c1005901:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005904:	8b 48 1c             	mov    0x1c(%eax),%ecx
c1005907:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100590a:	8b 50 18             	mov    0x18(%eax),%edx
c100590d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005912:	8b 40 20             	mov    0x20(%eax),%eax
c1005915:	83 ec 04             	sub    $0x4,%esp
c1005918:	51                   	push   %ecx
c1005919:	52                   	push   %edx
c100591a:	50                   	push   %eax
c100591b:	e8 d6 f7 ff ff       	call   c10050f6 <ide_read>
c1005920:	83 c4 10             	add    $0x10,%esp
c1005923:	e8 68 eb ff ff       	call   c1004490 <clear>
c1005928:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100592d:	8b 40 10             	mov    0x10(%eax),%eax
c1005930:	8b 00                	mov    (%eax),%eax
c1005932:	83 ec 08             	sub    $0x8,%esp
c1005935:	50                   	push   %eax
c1005936:	68 38 a7 00 c1       	push   $0xc100a738
c100593b:	e8 73 ee ff ff       	call   c10047b3 <printk>
c1005940:	83 c4 10             	add    $0x10,%esp
c1005943:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005948:	8b 40 10             	mov    0x10(%eax),%eax
c100594b:	8b 40 04             	mov    0x4(%eax),%eax
c100594e:	83 ec 08             	sub    $0x8,%esp
c1005951:	50                   	push   %eax
c1005952:	68 48 a7 00 c1       	push   $0xc100a748
c1005957:	e8 57 ee ff ff       	call   c10047b3 <printk>
c100595c:	83 c4 10             	add    $0x10,%esp
c100595f:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005964:	8b 40 10             	mov    0x10(%eax),%eax
c1005967:	8b 40 08             	mov    0x8(%eax),%eax
c100596a:	83 ec 08             	sub    $0x8,%esp
c100596d:	50                   	push   %eax
c100596e:	68 5a a7 00 c1       	push   $0xc100a75a
c1005973:	e8 3b ee ff ff       	call   c10047b3 <printk>
c1005978:	83 c4 10             	add    $0x10,%esp
c100597b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005980:	8b 40 10             	mov    0x10(%eax),%eax
c1005983:	8b 40 10             	mov    0x10(%eax),%eax
c1005986:	83 ec 08             	sub    $0x8,%esp
c1005989:	50                   	push   %eax
c100598a:	68 6e a7 00 c1       	push   $0xc100a76e
c100598f:	e8 1f ee ff ff       	call   c10047b3 <printk>
c1005994:	83 c4 10             	add    $0x10,%esp
c1005997:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100599c:	8b 40 10             	mov    0x10(%eax),%eax
c100599f:	8b 40 14             	mov    0x14(%eax),%eax
c10059a2:	83 ec 08             	sub    $0x8,%esp
c10059a5:	50                   	push   %eax
c10059a6:	68 89 a7 00 c1       	push   $0xc100a789
c10059ab:	e8 03 ee ff ff       	call   c10047b3 <printk>
c10059b0:	83 c4 10             	add    $0x10,%esp
c10059b3:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10059b8:	8b 40 10             	mov    0x10(%eax),%eax
c10059bb:	8b 40 18             	mov    0x18(%eax),%eax
c10059be:	83 ec 08             	sub    $0x8,%esp
c10059c1:	50                   	push   %eax
c10059c2:	68 a6 a7 00 c1       	push   $0xc100a7a6
c10059c7:	e8 e7 ed ff ff       	call   c10047b3 <printk>
c10059cc:	83 c4 10             	add    $0x10,%esp
c10059cf:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10059d4:	8b 40 10             	mov    0x10(%eax),%eax
c10059d7:	8b 40 1c             	mov    0x1c(%eax),%eax
c10059da:	83 ec 08             	sub    $0x8,%esp
c10059dd:	50                   	push   %eax
c10059de:	68 c1 a7 00 c1       	push   $0xc100a7c1
c10059e3:	e8 cb ed ff ff       	call   c10047b3 <printk>
c10059e8:	83 c4 10             	add    $0x10,%esp
c10059eb:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10059f0:	8b 40 10             	mov    0x10(%eax),%eax
c10059f3:	8b 40 20             	mov    0x20(%eax),%eax
c10059f6:	83 ec 08             	sub    $0x8,%esp
c10059f9:	50                   	push   %eax
c10059fa:	68 de a7 00 c1       	push   $0xc100a7de
c10059ff:	e8 af ed ff ff       	call   c10047b3 <printk>
c1005a04:	83 c4 10             	add    $0x10,%esp
c1005a07:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005a0c:	8b 40 10             	mov    0x10(%eax),%eax
c1005a0f:	8b 40 24             	mov    0x24(%eax),%eax
c1005a12:	83 ec 08             	sub    $0x8,%esp
c1005a15:	50                   	push   %eax
c1005a16:	68 f8 a7 00 c1       	push   $0xc100a7f8
c1005a1b:	e8 93 ed ff ff       	call   c10047b3 <printk>
c1005a20:	83 c4 10             	add    $0x10,%esp
c1005a23:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005a28:	8b 40 10             	mov    0x10(%eax),%eax
c1005a2b:	8b 40 28             	mov    0x28(%eax),%eax
c1005a2e:	83 ec 08             	sub    $0x8,%esp
c1005a31:	50                   	push   %eax
c1005a32:	68 14 a8 00 c1       	push   $0xc100a814
c1005a37:	e8 77 ed ff ff       	call   c10047b3 <printk>
c1005a3c:	83 c4 10             	add    $0x10,%esp
c1005a3f:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005a44:	8b 40 18             	mov    0x18(%eax),%eax
c1005a47:	83 ec 08             	sub    $0x8,%esp
c1005a4a:	50                   	push   %eax
c1005a4b:	68 34 a8 00 c1       	push   $0xc100a834
c1005a50:	e8 5e ed ff ff       	call   c10047b3 <printk>
c1005a55:	83 c4 10             	add    $0x10,%esp
c1005a58:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005a5d:	8b 40 14             	mov    0x14(%eax),%eax
c1005a60:	83 ec 08             	sub    $0x8,%esp
c1005a63:	50                   	push   %eax
c1005a64:	68 58 a8 00 c1       	push   $0xc100a858
c1005a69:	e8 45 ed ff ff       	call   c10047b3 <printk>
c1005a6e:	83 c4 10             	add    $0x10,%esp
c1005a71:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005a76:	8b 40 20             	mov    0x20(%eax),%eax
c1005a79:	83 ec 08             	sub    $0x8,%esp
c1005a7c:	50                   	push   %eax
c1005a7d:	68 88 a8 00 c1       	push   $0xc100a888
c1005a82:	e8 2c ed ff ff       	call   c10047b3 <printk>
c1005a87:	83 c4 10             	add    $0x10,%esp
c1005a8a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005a8f:	8b 40 1c             	mov    0x1c(%eax),%eax
c1005a92:	83 ec 08             	sub    $0x8,%esp
c1005a95:	50                   	push   %eax
c1005a96:	68 ac a8 00 c1       	push   $0xc100a8ac
c1005a9b:	e8 13 ed ff ff       	call   c10047b3 <printk>
c1005aa0:	83 c4 10             	add    $0x10,%esp
c1005aa3:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005aa8:	83 ec 0c             	sub    $0xc,%esp
c1005aab:	50                   	push   %eax
c1005aac:	e8 cf 18 00 00       	call   c1007380 <open_root_dir>
c1005ab1:	83 c4 10             	add    $0x10,%esp
c1005ab4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005abb:	eb 1d                	jmp    c1005ada <mount_partition+0x2b9>
c1005abd:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005ac0:	8d 42 01             	lea    0x1(%edx),%eax
c1005ac3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005ac6:	89 d0                	mov    %edx,%eax
c1005ac8:	01 c0                	add    %eax,%eax
c1005aca:	01 d0                	add    %edx,%eax
c1005acc:	c1 e0 02             	shl    $0x2,%eax
c1005acf:	05 68 34 a1 c1       	add    $0xc1a13468,%eax
c1005ad4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005ada:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1005ade:	76 dd                	jbe    c1005abd <mount_partition+0x29c>
c1005ae0:	90                   	nop
c1005ae1:	90                   	nop
c1005ae2:	c9                   	leave  
c1005ae3:	c3                   	ret    

c1005ae4 <path_parse>:
c1005ae4:	55                   	push   %ebp
c1005ae5:	89 e5                	mov    %esp,%ebp
c1005ae7:	8b 45 08             	mov    0x8(%ebp),%eax
c1005aea:	0f b6 00             	movzbl (%eax),%eax
c1005aed:	3c 2f                	cmp    $0x2f,%al
c1005aef:	75 27                	jne    c1005b18 <path_parse+0x34>
c1005af1:	83 45 08 01          	addl   $0x1,0x8(%ebp)
c1005af5:	8b 45 08             	mov    0x8(%ebp),%eax
c1005af8:	0f b6 00             	movzbl (%eax),%eax
c1005afb:	3c 2f                	cmp    $0x2f,%al
c1005afd:	74 f2                	je     c1005af1 <path_parse+0xd>
c1005aff:	eb 17                	jmp    c1005b18 <path_parse+0x34>
c1005b01:	8b 55 08             	mov    0x8(%ebp),%edx
c1005b04:	8d 42 01             	lea    0x1(%edx),%eax
c1005b07:	89 45 08             	mov    %eax,0x8(%ebp)
c1005b0a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005b0d:	8d 48 01             	lea    0x1(%eax),%ecx
c1005b10:	89 4d 0c             	mov    %ecx,0xc(%ebp)
c1005b13:	0f b6 12             	movzbl (%edx),%edx
c1005b16:	88 10                	mov    %dl,(%eax)
c1005b18:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b1b:	0f b6 00             	movzbl (%eax),%eax
c1005b1e:	3c 2f                	cmp    $0x2f,%al
c1005b20:	74 0a                	je     c1005b2c <path_parse+0x48>
c1005b22:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b25:	0f b6 00             	movzbl (%eax),%eax
c1005b28:	84 c0                	test   %al,%al
c1005b2a:	75 d5                	jne    c1005b01 <path_parse+0x1d>
c1005b2c:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b2f:	0f b6 00             	movzbl (%eax),%eax
c1005b32:	84 c0                	test   %al,%al
c1005b34:	75 07                	jne    c1005b3d <path_parse+0x59>
c1005b36:	b8 00 00 00 00       	mov    $0x0,%eax
c1005b3b:	eb 03                	jmp    c1005b40 <path_parse+0x5c>
c1005b3d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b40:	5d                   	pop    %ebp
c1005b41:	c3                   	ret    

c1005b42 <path_depth_cnt>:
c1005b42:	55                   	push   %ebp
c1005b43:	89 e5                	mov    %esp,%ebp
c1005b45:	83 ec 28             	sub    $0x28,%esp
c1005b48:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1005b4c:	75 19                	jne    c1005b67 <path_depth_cnt+0x25>
c1005b4e:	68 d9 a8 00 c1       	push   $0xc100a8d9
c1005b53:	68 d4 af 00 c1       	push   $0xc100afd4
c1005b58:	68 cd 00 00 00       	push   $0xcd
c1005b5d:	68 ec a8 00 c1       	push   $0xc100a8ec
c1005b62:	e8 a6 a7 ff ff       	call   c100030d <__PANIC>
c1005b67:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b6a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005b6d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1005b74:	83 ec 08             	sub    $0x8,%esp
c1005b77:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1005b7a:	50                   	push   %eax
c1005b7b:	ff 75 f4             	pushl  -0xc(%ebp)
c1005b7e:	e8 61 ff ff ff       	call   c1005ae4 <path_parse>
c1005b83:	83 c4 10             	add    $0x10,%esp
c1005b86:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005b89:	eb 32                	jmp    c1005bbd <path_depth_cnt+0x7b>
c1005b8b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1005b8f:	83 ec 04             	sub    $0x4,%esp
c1005b92:	6a 10                	push   $0x10
c1005b94:	6a 00                	push   $0x0
c1005b96:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1005b99:	50                   	push   %eax
c1005b9a:	e8 0b a5 ff ff       	call   c10000aa <memset>
c1005b9f:	83 c4 10             	add    $0x10,%esp
c1005ba2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1005ba6:	74 15                	je     c1005bbd <path_depth_cnt+0x7b>
c1005ba8:	83 ec 08             	sub    $0x8,%esp
c1005bab:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1005bae:	50                   	push   %eax
c1005baf:	ff 75 f4             	pushl  -0xc(%ebp)
c1005bb2:	e8 2d ff ff ff       	call   c1005ae4 <path_parse>
c1005bb7:	83 c4 10             	add    $0x10,%esp
c1005bba:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005bbd:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1005bc1:	84 c0                	test   %al,%al
c1005bc3:	75 c6                	jne    c1005b8b <path_depth_cnt+0x49>
c1005bc5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005bc8:	c9                   	leave  
c1005bc9:	c3                   	ret    

c1005bca <search_file>:
c1005bca:	55                   	push   %ebp
c1005bcb:	89 e5                	mov    %esp,%ebp
c1005bcd:	57                   	push   %edi
c1005bce:	53                   	push   %ebx
c1005bcf:	83 ec 40             	sub    $0x40,%esp
c1005bd2:	83 ec 08             	sub    $0x8,%esp
c1005bd5:	68 1b a9 00 c1       	push   $0xc100a91b
c1005bda:	ff 75 08             	pushl  0x8(%ebp)
c1005bdd:	e8 a1 a5 ff ff       	call   c1000183 <strcmp>
c1005be2:	83 c4 10             	add    $0x10,%esp
c1005be5:	85 c0                	test   %eax,%eax
c1005be7:	74 2e                	je     c1005c17 <search_file+0x4d>
c1005be9:	83 ec 08             	sub    $0x8,%esp
c1005bec:	68 1d a9 00 c1       	push   $0xc100a91d
c1005bf1:	ff 75 08             	pushl  0x8(%ebp)
c1005bf4:	e8 8a a5 ff ff       	call   c1000183 <strcmp>
c1005bf9:	83 c4 10             	add    $0x10,%esp
c1005bfc:	85 c0                	test   %eax,%eax
c1005bfe:	74 17                	je     c1005c17 <search_file+0x4d>
c1005c00:	83 ec 08             	sub    $0x8,%esp
c1005c03:	68 20 a9 00 c1       	push   $0xc100a920
c1005c08:	ff 75 08             	pushl  0x8(%ebp)
c1005c0b:	e8 73 a5 ff ff       	call   c1000183 <strcmp>
c1005c10:	83 c4 10             	add    $0x10,%esp
c1005c13:	85 c0                	test   %eax,%eax
c1005c15:	75 2a                	jne    c1005c41 <search_file+0x77>
c1005c17:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005c1a:	c7 80 00 02 00 00 40 	movl   $0xc1a13240,0x200(%eax)
c1005c21:	32 a1 c1 
c1005c24:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005c27:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1005c2e:	00 00 00 
c1005c31:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005c34:	c6 00 00             	movb   $0x0,(%eax)
c1005c37:	b8 00 00 00 00       	mov    $0x0,%eax
c1005c3c:	e9 23 02 00 00       	jmp    c1005e64 <search_file+0x29a>
c1005c41:	83 ec 0c             	sub    $0xc,%esp
c1005c44:	ff 75 08             	pushl  0x8(%ebp)
c1005c47:	e8 d2 a4 ff ff       	call   c100011e <strlen>
c1005c4c:	83 c4 10             	add    $0x10,%esp
c1005c4f:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005c52:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c55:	0f b6 00             	movzbl (%eax),%eax
c1005c58:	3c 2f                	cmp    $0x2f,%al
c1005c5a:	75 0f                	jne    c1005c6b <search_file+0xa1>
c1005c5c:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1005c60:	76 09                	jbe    c1005c6b <search_file+0xa1>
c1005c62:	81 7d e8 ff 01 00 00 	cmpl   $0x1ff,-0x18(%ebp)
c1005c69:	76 19                	jbe    c1005c84 <search_file+0xba>
c1005c6b:	68 24 a9 00 c1       	push   $0xc100a924
c1005c70:	68 e4 af 00 c1       	push   $0xc100afe4
c1005c75:	68 ea 00 00 00       	push   $0xea
c1005c7a:	68 ec a8 00 c1       	push   $0xc100a8ec
c1005c7f:	e8 89 a6 ff ff       	call   c100030d <__PANIC>
c1005c84:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c87:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005c8a:	c7 45 f0 40 32 a1 c1 	movl   $0xc1a13240,-0x10(%ebp)
c1005c91:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
c1005c98:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
c1005c9f:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
c1005ca6:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
c1005cad:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005cb0:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005cb3:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1005cb9:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005cbc:	c7 80 04 02 00 00 00 	movl   $0x0,0x204(%eax)
c1005cc3:	00 00 00 
c1005cc6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1005ccd:	83 ec 08             	sub    $0x8,%esp
c1005cd0:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1005cd3:	50                   	push   %eax
c1005cd4:	ff 75 f4             	pushl  -0xc(%ebp)
c1005cd7:	e8 08 fe ff ff       	call   c1005ae4 <path_parse>
c1005cdc:	83 c4 10             	add    $0x10,%esp
c1005cdf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005ce2:	83 ec 08             	sub    $0x8,%esp
c1005ce5:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1005ce8:	50                   	push   %eax
c1005ce9:	68 62 a9 00 c1       	push   $0xc100a962
c1005cee:	e8 c0 ea ff ff       	call   c10047b3 <printk>
c1005cf3:	83 c4 10             	add    $0x10,%esp
c1005cf6:	e9 1b 01 00 00       	jmp    c1005e16 <search_file+0x24c>
c1005cfb:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005cfe:	83 ec 0c             	sub    $0xc,%esp
c1005d01:	50                   	push   %eax
c1005d02:	e8 17 a4 ff ff       	call   c100011e <strlen>
c1005d07:	83 c4 10             	add    $0x10,%esp
c1005d0a:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1005d0f:	76 19                	jbe    c1005d2a <search_file+0x160>
c1005d11:	68 70 a9 00 c1       	push   $0xc100a970
c1005d16:	68 e4 af 00 c1       	push   $0xc100afe4
c1005d1b:	68 fb 00 00 00       	push   $0xfb
c1005d20:	68 ec a8 00 c1       	push   $0xc100a8ec
c1005d25:	e8 e3 a5 ff ff       	call   c100030d <__PANIC>
c1005d2a:	8b 55 0c             	mov    0xc(%ebp),%edx
c1005d2d:	89 d0                	mov    %edx,%eax
c1005d2f:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1005d34:	89 c3                	mov    %eax,%ebx
c1005d36:	b8 00 00 00 00       	mov    $0x0,%eax
c1005d3b:	89 df                	mov    %ebx,%edi
c1005d3d:	f2 ae                	repnz scas %es:(%edi),%al
c1005d3f:	89 c8                	mov    %ecx,%eax
c1005d41:	f7 d0                	not    %eax
c1005d43:	83 e8 01             	sub    $0x1,%eax
c1005d46:	01 d0                	add    %edx,%eax
c1005d48:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1005d4d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005d50:	83 ec 08             	sub    $0x8,%esp
c1005d53:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1005d56:	52                   	push   %edx
c1005d57:	50                   	push   %eax
c1005d58:	e8 78 a4 ff ff       	call   c10001d5 <strcat>
c1005d5d:	83 c4 10             	add    $0x10,%esp
c1005d60:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005d65:	8d 55 d0             	lea    -0x30(%ebp),%edx
c1005d68:	52                   	push   %edx
c1005d69:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1005d6c:	52                   	push   %edx
c1005d6d:	ff 75 f0             	pushl  -0x10(%ebp)
c1005d70:	50                   	push   %eax
c1005d71:	e8 aa 16 00 00       	call   c1007420 <search_dir_entry>
c1005d76:	83 c4 10             	add    $0x10,%esp
c1005d79:	84 c0                	test   %al,%al
c1005d7b:	0f 84 8e 00 00 00    	je     c1005e0f <search_file+0x245>
c1005d81:	83 ec 04             	sub    $0x4,%esp
c1005d84:	6a 10                	push   $0x10
c1005d86:	6a 00                	push   $0x0
c1005d88:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1005d8b:	50                   	push   %eax
c1005d8c:	e8 19 a3 ff ff       	call   c10000aa <memset>
c1005d91:	83 c4 10             	add    $0x10,%esp
c1005d94:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1005d98:	74 15                	je     c1005daf <search_file+0x1e5>
c1005d9a:	83 ec 08             	sub    $0x8,%esp
c1005d9d:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1005da0:	50                   	push   %eax
c1005da1:	ff 75 f4             	pushl  -0xc(%ebp)
c1005da4:	e8 3b fd ff ff       	call   c1005ae4 <path_parse>
c1005da9:	83 c4 10             	add    $0x10,%esp
c1005dac:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005daf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005db2:	83 f8 02             	cmp    $0x2,%eax
c1005db5:	75 3e                	jne    c1005df5 <search_file+0x22b>
c1005db7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005dba:	8b 00                	mov    (%eax),%eax
c1005dbc:	8b 00                	mov    (%eax),%eax
c1005dbe:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005dc1:	83 ec 0c             	sub    $0xc,%esp
c1005dc4:	ff 75 f0             	pushl  -0x10(%ebp)
c1005dc7:	e8 40 18 00 00       	call   c100760c <dir_close>
c1005dcc:	83 c4 10             	add    $0x10,%esp
c1005dcf:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005dd2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005dd7:	83 ec 08             	sub    $0x8,%esp
c1005dda:	52                   	push   %edx
c1005ddb:	50                   	push   %eax
c1005ddc:	e8 ff 15 00 00       	call   c10073e0 <dir_open>
c1005de1:	83 c4 10             	add    $0x10,%esp
c1005de4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005de7:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005dea:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005ded:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1005df3:	eb 21                	jmp    c1005e16 <search_file+0x24c>
c1005df5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005df8:	83 f8 01             	cmp    $0x1,%eax
c1005dfb:	75 19                	jne    c1005e16 <search_file+0x24c>
c1005dfd:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005e00:	c7 80 04 02 00 00 01 	movl   $0x1,0x204(%eax)
c1005e07:	00 00 00 
c1005e0a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005e0d:	eb 55                	jmp    c1005e64 <search_file+0x29a>
c1005e0f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005e14:	eb 4e                	jmp    c1005e64 <search_file+0x29a>
c1005e16:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
c1005e1a:	84 c0                	test   %al,%al
c1005e1c:	0f 85 d9 fe ff ff    	jne    c1005cfb <search_file+0x131>
c1005e22:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005e25:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
c1005e2b:	83 ec 0c             	sub    $0xc,%esp
c1005e2e:	50                   	push   %eax
c1005e2f:	e8 d8 17 00 00       	call   c100760c <dir_close>
c1005e34:	83 c4 10             	add    $0x10,%esp
c1005e37:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005e3c:	83 ec 08             	sub    $0x8,%esp
c1005e3f:	ff 75 ec             	pushl  -0x14(%ebp)
c1005e42:	50                   	push   %eax
c1005e43:	e8 98 15 00 00       	call   c10073e0 <dir_open>
c1005e48:	83 c4 10             	add    $0x10,%esp
c1005e4b:	8b 55 0c             	mov    0xc(%ebp),%edx
c1005e4e:	89 82 00 02 00 00    	mov    %eax,0x200(%edx)
c1005e54:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005e57:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1005e5e:	00 00 00 
c1005e61:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005e64:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1005e67:	5b                   	pop    %ebx
c1005e68:	5f                   	pop    %edi
c1005e69:	5d                   	pop    %ebp
c1005e6a:	c3                   	ret    

c1005e6b <sys_open>:
c1005e6b:	55                   	push   %ebp
c1005e6c:	89 e5                	mov    %esp,%ebp
c1005e6e:	53                   	push   %ebx
c1005e6f:	81 ec 34 02 00 00    	sub    $0x234,%esp
c1005e75:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005e78:	88 85 d4 fd ff ff    	mov    %al,-0x22c(%ebp)
c1005e7e:	83 ec 0c             	sub    $0xc,%esp
c1005e81:	ff 75 08             	pushl  0x8(%ebp)
c1005e84:	e8 95 a2 ff ff       	call   c100011e <strlen>
c1005e89:	83 c4 10             	add    $0x10,%esp
c1005e8c:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005e8f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e92:	01 d0                	add    %edx,%eax
c1005e94:	0f b6 00             	movzbl (%eax),%eax
c1005e97:	3c 2f                	cmp    $0x2f,%al
c1005e99:	75 1d                	jne    c1005eb8 <sys_open+0x4d>
c1005e9b:	83 ec 08             	sub    $0x8,%esp
c1005e9e:	ff 75 08             	pushl  0x8(%ebp)
c1005ea1:	68 9d a9 00 c1       	push   $0xc100a99d
c1005ea6:	e8 08 e9 ff ff       	call   c10047b3 <printk>
c1005eab:	83 c4 10             	add    $0x10,%esp
c1005eae:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005eb3:	e9 35 02 00 00       	jmp    c10060ed <sys_open+0x282>
c1005eb8:	80 bd d4 fd ff ff 07 	cmpb   $0x7,-0x22c(%ebp)
c1005ebf:	76 19                	jbe    c1005eda <sys_open+0x6f>
c1005ec1:	68 b8 a9 00 c1       	push   $0xc100a9b8
c1005ec6:	68 f0 af 00 c1       	push   $0xc100aff0
c1005ecb:	68 29 01 00 00       	push   $0x129
c1005ed0:	68 ec a8 00 c1       	push   $0xc100a8ec
c1005ed5:	e8 33 a4 ff ff       	call   c100030d <__PANIC>
c1005eda:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1005ee1:	83 ec 04             	sub    $0x4,%esp
c1005ee4:	68 08 02 00 00       	push   $0x208
c1005ee9:	6a 00                	push   $0x0
c1005eeb:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005ef1:	50                   	push   %eax
c1005ef2:	e8 b3 a1 ff ff       	call   c10000aa <memset>
c1005ef7:	83 c4 10             	add    $0x10,%esp
c1005efa:	83 ec 0c             	sub    $0xc,%esp
c1005efd:	ff 75 08             	pushl  0x8(%ebp)
c1005f00:	e8 3d fc ff ff       	call   c1005b42 <path_depth_cnt>
c1005f05:	83 c4 10             	add    $0x10,%esp
c1005f08:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005f0b:	83 ec 08             	sub    $0x8,%esp
c1005f0e:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005f14:	50                   	push   %eax
c1005f15:	ff 75 08             	pushl  0x8(%ebp)
c1005f18:	e8 ad fc ff ff       	call   c1005bca <search_file>
c1005f1d:	83 c4 10             	add    $0x10,%esp
c1005f20:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005f23:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
c1005f27:	0f 95 c0             	setne  %al
c1005f2a:	88 45 eb             	mov    %al,-0x15(%ebp)
c1005f2d:	0f be 45 eb          	movsbl -0x15(%ebp),%eax
c1005f31:	83 ec 08             	sub    $0x8,%esp
c1005f34:	50                   	push   %eax
c1005f35:	68 c3 a9 00 c1       	push   $0xc100a9c3
c1005f3a:	e8 74 e8 ff ff       	call   c10047b3 <printk>
c1005f3f:	83 c4 10             	add    $0x10,%esp
c1005f42:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005f45:	83 f8 02             	cmp    $0x2,%eax
c1005f48:	75 29                	jne    c1005f73 <sys_open+0x108>
c1005f4a:	83 ec 0c             	sub    $0xc,%esp
c1005f4d:	68 d4 a9 00 c1       	push   $0xc100a9d4
c1005f52:	e8 5c e8 ff ff       	call   c10047b3 <printk>
c1005f57:	83 c4 10             	add    $0x10,%esp
c1005f5a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005f5d:	83 ec 0c             	sub    $0xc,%esp
c1005f60:	50                   	push   %eax
c1005f61:	e8 a6 16 00 00       	call   c100760c <dir_close>
c1005f66:	83 c4 10             	add    $0x10,%esp
c1005f69:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005f6e:	e9 7a 01 00 00       	jmp    c10060ed <sys_open+0x282>
c1005f73:	83 ec 0c             	sub    $0xc,%esp
c1005f76:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005f7c:	50                   	push   %eax
c1005f7d:	e8 c0 fb ff ff       	call   c1005b42 <path_depth_cnt>
c1005f82:	83 c4 10             	add    $0x10,%esp
c1005f85:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1005f88:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005f8b:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1005f8e:	74 33                	je     c1005fc3 <sys_open+0x158>
c1005f90:	83 ec 04             	sub    $0x4,%esp
c1005f93:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005f99:	50                   	push   %eax
c1005f9a:	ff 75 08             	pushl  0x8(%ebp)
c1005f9d:	68 14 aa 00 c1       	push   $0xc100aa14
c1005fa2:	e8 0c e8 ff ff       	call   c10047b3 <printk>
c1005fa7:	83 c4 10             	add    $0x10,%esp
c1005faa:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005fad:	83 ec 0c             	sub    $0xc,%esp
c1005fb0:	50                   	push   %eax
c1005fb1:	e8 56 16 00 00       	call   c100760c <dir_close>
c1005fb6:	83 c4 10             	add    $0x10,%esp
c1005fb9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005fbe:	e9 2a 01 00 00       	jmp    c10060ed <sys_open+0x282>
c1005fc3:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1005fc7:	75 56                	jne    c100601f <sys_open+0x1b4>
c1005fc9:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1005fd0:	83 e0 04             	and    $0x4,%eax
c1005fd3:	85 c0                	test   %eax,%eax
c1005fd5:	75 48                	jne    c100601f <sys_open+0x1b4>
c1005fd7:	83 ec 08             	sub    $0x8,%esp
c1005fda:	6a 2f                	push   $0x2f
c1005fdc:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005fe2:	50                   	push   %eax
c1005fe3:	e8 ae a1 ff ff       	call   c1000196 <strrchr>
c1005fe8:	83 c4 10             	add    $0x10,%esp
c1005feb:	83 c0 01             	add    $0x1,%eax
c1005fee:	83 ec 04             	sub    $0x4,%esp
c1005ff1:	50                   	push   %eax
c1005ff2:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005ff8:	50                   	push   %eax
c1005ff9:	68 50 aa 00 c1       	push   $0xc100aa50
c1005ffe:	e8 b0 e7 ff ff       	call   c10047b3 <printk>
c1006003:	83 c4 10             	add    $0x10,%esp
c1006006:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006009:	83 ec 0c             	sub    $0xc,%esp
c100600c:	50                   	push   %eax
c100600d:	e8 fa 15 00 00       	call   c100760c <dir_close>
c1006012:	83 c4 10             	add    $0x10,%esp
c1006015:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100601a:	e9 ce 00 00 00       	jmp    c10060ed <sys_open+0x282>
c100601f:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006023:	74 3a                	je     c100605f <sys_open+0x1f4>
c1006025:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c100602c:	83 e0 04             	and    $0x4,%eax
c100602f:	85 c0                	test   %eax,%eax
c1006031:	74 2c                	je     c100605f <sys_open+0x1f4>
c1006033:	83 ec 08             	sub    $0x8,%esp
c1006036:	ff 75 08             	pushl  0x8(%ebp)
c1006039:	68 70 aa 00 c1       	push   $0xc100aa70
c100603e:	e8 70 e7 ff ff       	call   c10047b3 <printk>
c1006043:	83 c4 10             	add    $0x10,%esp
c1006046:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006049:	83 ec 0c             	sub    $0xc,%esp
c100604c:	50                   	push   %eax
c100604d:	e8 ba 15 00 00       	call   c100760c <dir_close>
c1006052:	83 c4 10             	add    $0x10,%esp
c1006055:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100605a:	e9 8e 00 00 00       	jmp    c10060ed <sys_open+0x282>
c100605f:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006066:	83 e0 04             	and    $0x4,%eax
c1006069:	83 f8 04             	cmp    $0x4,%eax
c100606c:	75 4f                	jne    c10060bd <sys_open+0x252>
c100606e:	83 ec 0c             	sub    $0xc,%esp
c1006071:	68 87 aa 00 c1       	push   $0xc100aa87
c1006076:	e8 38 e7 ff ff       	call   c10047b3 <printk>
c100607b:	83 c4 10             	add    $0x10,%esp
c100607e:	0f b6 9d d4 fd ff ff 	movzbl -0x22c(%ebp),%ebx
c1006085:	83 ec 08             	sub    $0x8,%esp
c1006088:	6a 2f                	push   $0x2f
c100608a:	ff 75 08             	pushl  0x8(%ebp)
c100608d:	e8 04 a1 ff ff       	call   c1000196 <strrchr>
c1006092:	83 c4 10             	add    $0x10,%esp
c1006095:	8d 50 01             	lea    0x1(%eax),%edx
c1006098:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100609b:	83 ec 04             	sub    $0x4,%esp
c100609e:	53                   	push   %ebx
c100609f:	52                   	push   %edx
c10060a0:	50                   	push   %eax
c10060a1:	e8 6a 24 00 00       	call   c1008510 <file_create>
c10060a6:	83 c4 10             	add    $0x10,%esp
c10060a9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10060ac:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10060af:	83 ec 0c             	sub    $0xc,%esp
c10060b2:	50                   	push   %eax
c10060b3:	e8 54 15 00 00       	call   c100760c <dir_close>
c10060b8:	83 c4 10             	add    $0x10,%esp
c10060bb:	eb 2d                	jmp    c10060ea <sys_open+0x27f>
c10060bd:	83 ec 08             	sub    $0x8,%esp
c10060c0:	ff 75 ec             	pushl  -0x14(%ebp)
c10060c3:	68 96 aa 00 c1       	push   $0xc100aa96
c10060c8:	e8 e6 e6 ff ff       	call   c10047b3 <printk>
c10060cd:	83 c4 10             	add    $0x10,%esp
c10060d0:	0f b6 95 d4 fd ff ff 	movzbl -0x22c(%ebp),%edx
c10060d7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10060da:	83 ec 08             	sub    $0x8,%esp
c10060dd:	52                   	push   %edx
c10060de:	50                   	push   %eax
c10060df:	e8 0e 27 00 00       	call   c10087f2 <file_open>
c10060e4:	83 c4 10             	add    $0x10,%esp
c10060e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10060ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10060ed:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10060f0:	c9                   	leave  
c10060f1:	c3                   	ret    

c10060f2 <fd_local2global>:
c10060f2:	55                   	push   %ebp
c10060f3:	89 e5                	mov    %esp,%ebp
c10060f5:	83 ec 18             	sub    $0x18,%esp
c10060f8:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10060fd:	8b 55 08             	mov    0x8(%ebp),%edx
c1006100:	83 c2 18             	add    $0x18,%edx
c1006103:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1006106:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006109:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100610d:	78 06                	js     c1006115 <fd_local2global+0x23>
c100610f:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006113:	7e 19                	jle    c100612e <fd_local2global+0x3c>
c1006115:	68 a8 aa 00 c1       	push   $0xc100aaa8
c100611a:	68 fc af 00 c1       	push   $0xc100affc
c100611f:	68 68 01 00 00       	push   $0x168
c1006124:	68 ec a8 00 c1       	push   $0xc100a8ec
c1006129:	e8 df a1 ff ff       	call   c100030d <__PANIC>
c100612e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006131:	c9                   	leave  
c1006132:	c3                   	ret    

c1006133 <sys_close>:
c1006133:	55                   	push   %ebp
c1006134:	89 e5                	mov    %esp,%ebp
c1006136:	83 ec 18             	sub    $0x18,%esp
c1006139:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006140:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c1006144:	7e 44                	jle    c100618a <sys_close+0x57>
c1006146:	8b 45 08             	mov    0x8(%ebp),%eax
c1006149:	83 ec 0c             	sub    $0xc,%esp
c100614c:	50                   	push   %eax
c100614d:	e8 a0 ff ff ff       	call   c10060f2 <fd_local2global>
c1006152:	83 c4 10             	add    $0x10,%esp
c1006155:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006158:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100615b:	89 d0                	mov    %edx,%eax
c100615d:	01 c0                	add    %eax,%eax
c100615f:	01 d0                	add    %edx,%eax
c1006161:	c1 e0 02             	shl    $0x2,%eax
c1006164:	05 60 34 a1 c1       	add    $0xc1a13460,%eax
c1006169:	83 ec 0c             	sub    $0xc,%esp
c100616c:	50                   	push   %eax
c100616d:	e8 d0 27 00 00       	call   c1008942 <file_close>
c1006172:	83 c4 10             	add    $0x10,%esp
c1006175:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006178:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100617d:	8b 55 08             	mov    0x8(%ebp),%edx
c1006180:	83 c2 18             	add    $0x18,%edx
c1006183:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c100618a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100618d:	c9                   	leave  
c100618e:	c3                   	ret    

c100618f <sys_write>:
c100618f:	55                   	push   %ebp
c1006190:	89 e5                	mov    %esp,%ebp
c1006192:	57                   	push   %edi
c1006193:	81 ec 14 04 00 00    	sub    $0x414,%esp
c1006199:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100619d:	79 1a                	jns    c10061b9 <sys_write+0x2a>
c100619f:	83 ec 0c             	sub    $0xc,%esp
c10061a2:	68 d4 aa 00 c1       	push   $0xc100aad4
c10061a7:	e8 07 e6 ff ff       	call   c10047b3 <printk>
c10061ac:	83 c4 10             	add    $0x10,%esp
c10061af:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10061b4:	e9 c4 00 00 00       	jmp    c100627d <sys_write+0xee>
c10061b9:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c10061bd:	75 4d                	jne    c100620c <sys_write+0x7d>
c10061bf:	c7 85 ec fb ff ff 00 	movl   $0x0,-0x414(%ebp)
c10061c6:	00 00 00 
c10061c9:	8d 95 f0 fb ff ff    	lea    -0x410(%ebp),%edx
c10061cf:	b8 00 00 00 00       	mov    $0x0,%eax
c10061d4:	b9 ff 00 00 00       	mov    $0xff,%ecx
c10061d9:	89 d7                	mov    %edx,%edi
c10061db:	f3 ab                	rep stos %eax,%es:(%edi)
c10061dd:	83 ec 04             	sub    $0x4,%esp
c10061e0:	ff 75 10             	pushl  0x10(%ebp)
c10061e3:	ff 75 0c             	pushl  0xc(%ebp)
c10061e6:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c10061ec:	50                   	push   %eax
c10061ed:	e8 16 9f ff ff       	call   c1000108 <memcpy>
c10061f2:	83 c4 10             	add    $0x10,%esp
c10061f5:	83 ec 0c             	sub    $0xc,%esp
c10061f8:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c10061fe:	50                   	push   %eax
c10061ff:	e8 af e5 ff ff       	call   c10047b3 <printk>
c1006204:	83 c4 10             	add    $0x10,%esp
c1006207:	8b 45 10             	mov    0x10(%ebp),%eax
c100620a:	eb 71                	jmp    c100627d <sys_write+0xee>
c100620c:	8b 45 08             	mov    0x8(%ebp),%eax
c100620f:	83 ec 0c             	sub    $0xc,%esp
c1006212:	50                   	push   %eax
c1006213:	e8 da fe ff ff       	call   c10060f2 <fd_local2global>
c1006218:	83 c4 10             	add    $0x10,%esp
c100621b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100621e:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006221:	89 d0                	mov    %edx,%eax
c1006223:	01 c0                	add    %eax,%eax
c1006225:	01 d0                	add    %edx,%eax
c1006227:	c1 e0 02             	shl    $0x2,%eax
c100622a:	05 60 34 a1 c1       	add    $0xc1a13460,%eax
c100622f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006232:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006235:	8b 40 04             	mov    0x4(%eax),%eax
c1006238:	83 e0 01             	and    $0x1,%eax
c100623b:	85 c0                	test   %eax,%eax
c100623d:	75 0d                	jne    c100624c <sys_write+0xbd>
c100623f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006242:	8b 40 04             	mov    0x4(%eax),%eax
c1006245:	83 e0 02             	and    $0x2,%eax
c1006248:	85 c0                	test   %eax,%eax
c100624a:	74 1c                	je     c1006268 <sys_write+0xd9>
c100624c:	83 ec 04             	sub    $0x4,%esp
c100624f:	ff 75 10             	pushl  0x10(%ebp)
c1006252:	ff 75 0c             	pushl  0xc(%ebp)
c1006255:	ff 75 f0             	pushl  -0x10(%ebp)
c1006258:	e8 25 27 00 00       	call   c1008982 <file_write>
c100625d:	83 c4 10             	add    $0x10,%esp
c1006260:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006263:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006266:	eb 15                	jmp    c100627d <sys_write+0xee>
c1006268:	83 ec 0c             	sub    $0xc,%esp
c100626b:	68 ec aa 00 c1       	push   $0xc100aaec
c1006270:	e8 3e e5 ff ff       	call   c10047b3 <printk>
c1006275:	83 c4 10             	add    $0x10,%esp
c1006278:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100627d:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1006280:	c9                   	leave  
c1006281:	c3                   	ret    

c1006282 <sys_read>:
c1006282:	55                   	push   %ebp
c1006283:	89 e5                	mov    %esp,%ebp
c1006285:	83 ec 18             	sub    $0x18,%esp
c1006288:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100628c:	79 17                	jns    c10062a5 <sys_read+0x23>
c100628e:	83 ec 0c             	sub    $0xc,%esp
c1006291:	68 32 ab 00 c1       	push   $0xc100ab32
c1006296:	e8 18 e5 ff ff       	call   c10047b3 <printk>
c100629b:	83 c4 10             	add    $0x10,%esp
c100629e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10062a3:	eb 67                	jmp    c100630c <sys_read+0x8a>
c10062a5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
c10062a9:	75 19                	jne    c10062c4 <sys_read+0x42>
c10062ab:	68 46 ab 00 c1       	push   $0xc100ab46
c10062b0:	68 0c b0 00 c1       	push   $0xc100b00c
c10062b5:	68 92 01 00 00       	push   $0x192
c10062ba:	68 ec a8 00 c1       	push   $0xc100a8ec
c10062bf:	e8 49 a0 ff ff       	call   c100030d <__PANIC>
c10062c4:	8b 45 08             	mov    0x8(%ebp),%eax
c10062c7:	83 ec 0c             	sub    $0xc,%esp
c10062ca:	50                   	push   %eax
c10062cb:	e8 22 fe ff ff       	call   c10060f2 <fd_local2global>
c10062d0:	83 c4 10             	add    $0x10,%esp
c10062d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10062d6:	83 ec 08             	sub    $0x8,%esp
c10062d9:	ff 75 f4             	pushl  -0xc(%ebp)
c10062dc:	68 52 ab 00 c1       	push   $0xc100ab52
c10062e1:	e8 cd e4 ff ff       	call   c10047b3 <printk>
c10062e6:	83 c4 10             	add    $0x10,%esp
c10062e9:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10062ec:	89 d0                	mov    %edx,%eax
c10062ee:	01 c0                	add    %eax,%eax
c10062f0:	01 d0                	add    %edx,%eax
c10062f2:	c1 e0 02             	shl    $0x2,%eax
c10062f5:	05 60 34 a1 c1       	add    $0xc1a13460,%eax
c10062fa:	83 ec 04             	sub    $0x4,%esp
c10062fd:	ff 75 10             	pushl  0x10(%ebp)
c1006300:	ff 75 0c             	pushl  0xc(%ebp)
c1006303:	50                   	push   %eax
c1006304:	e8 ee 2d 00 00       	call   c10090f7 <file_read>
c1006309:	83 c4 10             	add    $0x10,%esp
c100630c:	c9                   	leave  
c100630d:	c3                   	ret    

c100630e <sys_lseek>:
c100630e:	55                   	push   %ebp
c100630f:	89 e5                	mov    %esp,%ebp
c1006311:	83 ec 28             	sub    $0x28,%esp
c1006314:	8b 45 10             	mov    0x10(%ebp),%eax
c1006317:	88 45 e4             	mov    %al,-0x1c(%ebp)
c100631a:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100631e:	79 1a                	jns    c100633a <sys_lseek+0x2c>
c1006320:	83 ec 0c             	sub    $0xc,%esp
c1006323:	68 63 ab 00 c1       	push   $0xc100ab63
c1006328:	e8 86 e4 ff ff       	call   c10047b3 <printk>
c100632d:	83 c4 10             	add    $0x10,%esp
c1006330:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006335:	e9 be 00 00 00       	jmp    c10063f8 <sys_lseek+0xea>
c100633a:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
c100633e:	74 06                	je     c1006346 <sys_lseek+0x38>
c1006340:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
c1006344:	76 19                	jbe    c100635f <sys_lseek+0x51>
c1006346:	68 78 ab 00 c1       	push   $0xc100ab78
c100634b:	68 18 b0 00 c1       	push   $0xc100b018
c1006350:	68 9e 01 00 00       	push   $0x19e
c1006355:	68 ec a8 00 c1       	push   $0xc100a8ec
c100635a:	e8 ae 9f ff ff       	call   c100030d <__PANIC>
c100635f:	8b 45 08             	mov    0x8(%ebp),%eax
c1006362:	83 ec 0c             	sub    $0xc,%esp
c1006365:	50                   	push   %eax
c1006366:	e8 87 fd ff ff       	call   c10060f2 <fd_local2global>
c100636b:	83 c4 10             	add    $0x10,%esp
c100636e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006371:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006374:	89 d0                	mov    %edx,%eax
c1006376:	01 c0                	add    %eax,%eax
c1006378:	01 d0                	add    %edx,%eax
c100637a:	c1 e0 02             	shl    $0x2,%eax
c100637d:	05 60 34 a1 c1       	add    $0xc1a13460,%eax
c1006382:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006385:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100638c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100638f:	8b 40 08             	mov    0x8(%eax),%eax
c1006392:	8b 40 04             	mov    0x4(%eax),%eax
c1006395:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006398:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100639c:	83 f8 03             	cmp    $0x3,%eax
c100639f:	74 2a                	je     c10063cb <sys_lseek+0xbd>
c10063a1:	83 f8 03             	cmp    $0x3,%eax
c10063a4:	7f 30                	jg     c10063d6 <sys_lseek+0xc8>
c10063a6:	83 f8 01             	cmp    $0x1,%eax
c10063a9:	74 07                	je     c10063b2 <sys_lseek+0xa4>
c10063ab:	83 f8 02             	cmp    $0x2,%eax
c10063ae:	74 0a                	je     c10063ba <sys_lseek+0xac>
c10063b0:	eb 24                	jmp    c10063d6 <sys_lseek+0xc8>
c10063b2:	8b 45 0c             	mov    0xc(%ebp),%eax
c10063b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10063b8:	eb 1c                	jmp    c10063d6 <sys_lseek+0xc8>
c10063ba:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10063bd:	8b 00                	mov    (%eax),%eax
c10063bf:	89 c2                	mov    %eax,%edx
c10063c1:	8b 45 0c             	mov    0xc(%ebp),%eax
c10063c4:	01 d0                	add    %edx,%eax
c10063c6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10063c9:	eb 0b                	jmp    c10063d6 <sys_lseek+0xc8>
c10063cb:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10063ce:	8b 45 0c             	mov    0xc(%ebp),%eax
c10063d1:	01 d0                	add    %edx,%eax
c10063d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10063d6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10063da:	78 08                	js     c10063e4 <sys_lseek+0xd6>
c10063dc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10063df:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c10063e2:	7f 07                	jg     c10063eb <sys_lseek+0xdd>
c10063e4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10063e9:	eb 0d                	jmp    c10063f8 <sys_lseek+0xea>
c10063eb:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10063ee:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10063f1:	89 10                	mov    %edx,(%eax)
c10063f3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10063f6:	8b 00                	mov    (%eax),%eax
c10063f8:	c9                   	leave  
c10063f9:	c3                   	ret    

c10063fa <sys_unlink>:
c10063fa:	55                   	push   %ebp
c10063fb:	89 e5                	mov    %esp,%ebp
c10063fd:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1006403:	83 ec 0c             	sub    $0xc,%esp
c1006406:	ff 75 08             	pushl  0x8(%ebp)
c1006409:	e8 10 9d ff ff       	call   c100011e <strlen>
c100640e:	83 c4 10             	add    $0x10,%esp
c1006411:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1006416:	76 19                	jbe    c1006431 <sys_unlink+0x37>
c1006418:	68 94 ab 00 c1       	push   $0xc100ab94
c100641d:	68 24 b0 00 c1       	push   $0xc100b024
c1006422:	68 b8 01 00 00       	push   $0x1b8
c1006427:	68 ec a8 00 c1       	push   $0xc100a8ec
c100642c:	e8 dc 9e ff ff       	call   c100030d <__PANIC>
c1006431:	83 ec 04             	sub    $0x4,%esp
c1006434:	68 08 02 00 00       	push   $0x208
c1006439:	6a 00                	push   $0x0
c100643b:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1006441:	50                   	push   %eax
c1006442:	e8 63 9c ff ff       	call   c10000aa <memset>
c1006447:	83 c4 10             	add    $0x10,%esp
c100644a:	83 ec 08             	sub    $0x8,%esp
c100644d:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1006453:	50                   	push   %eax
c1006454:	ff 75 08             	pushl  0x8(%ebp)
c1006457:	e8 6e f7 ff ff       	call   c1005bca <search_file>
c100645c:	83 c4 10             	add    $0x10,%esp
c100645f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006462:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1006466:	75 19                	jne    c1006481 <sys_unlink+0x87>
c1006468:	68 b4 ab 00 c1       	push   $0xc100abb4
c100646d:	68 24 b0 00 c1       	push   $0xc100b024
c1006472:	68 be 01 00 00       	push   $0x1be
c1006477:	68 ec a8 00 c1       	push   $0xc100a8ec
c100647c:	e8 8c 9e ff ff       	call   c100030d <__PANIC>
c1006481:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006485:	75 2c                	jne    c10064b3 <sys_unlink+0xb9>
c1006487:	83 ec 08             	sub    $0x8,%esp
c100648a:	ff 75 08             	pushl  0x8(%ebp)
c100648d:	68 c2 ab 00 c1       	push   $0xc100abc2
c1006492:	e8 1c e3 ff ff       	call   c10047b3 <printk>
c1006497:	83 c4 10             	add    $0x10,%esp
c100649a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100649d:	83 ec 0c             	sub    $0xc,%esp
c10064a0:	50                   	push   %eax
c10064a1:	e8 66 11 00 00       	call   c100760c <dir_close>
c10064a6:	83 c4 10             	add    $0x10,%esp
c10064a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10064ae:	e9 65 01 00 00       	jmp    c1006618 <sys_unlink+0x21e>
c10064b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10064b6:	83 f8 02             	cmp    $0x2,%eax
c10064b9:	75 29                	jne    c10064e4 <sys_unlink+0xea>
c10064bb:	83 ec 0c             	sub    $0xc,%esp
c10064be:	68 d8 ab 00 c1       	push   $0xc100abd8
c10064c3:	e8 eb e2 ff ff       	call   c10047b3 <printk>
c10064c8:	83 c4 10             	add    $0x10,%esp
c10064cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10064ce:	83 ec 0c             	sub    $0xc,%esp
c10064d1:	50                   	push   %eax
c10064d2:	e8 35 11 00 00       	call   c100760c <dir_close>
c10064d7:	83 c4 10             	add    $0x10,%esp
c10064da:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10064df:	e9 34 01 00 00       	jmp    c1006618 <sys_unlink+0x21e>
c10064e4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10064eb:	eb 37                	jmp    c1006524 <sys_unlink+0x12a>
c10064ed:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10064f0:	89 d0                	mov    %edx,%eax
c10064f2:	01 c0                	add    %eax,%eax
c10064f4:	01 d0                	add    %edx,%eax
c10064f6:	c1 e0 02             	shl    $0x2,%eax
c10064f9:	05 68 34 a1 c1       	add    $0xc1a13468,%eax
c10064fe:	8b 00                	mov    (%eax),%eax
c1006500:	85 c0                	test   %eax,%eax
c1006502:	74 1c                	je     c1006520 <sys_unlink+0x126>
c1006504:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006507:	89 d0                	mov    %edx,%eax
c1006509:	01 c0                	add    %eax,%eax
c100650b:	01 d0                	add    %edx,%eax
c100650d:	c1 e0 02             	shl    $0x2,%eax
c1006510:	05 68 34 a1 c1       	add    $0xc1a13468,%eax
c1006515:	8b 00                	mov    (%eax),%eax
c1006517:	8b 10                	mov    (%eax),%edx
c1006519:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100651c:	39 c2                	cmp    %eax,%edx
c100651e:	74 0c                	je     c100652c <sys_unlink+0x132>
c1006520:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1006524:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006528:	76 c3                	jbe    c10064ed <sys_unlink+0xf3>
c100652a:	eb 01                	jmp    c100652d <sys_unlink+0x133>
c100652c:	90                   	nop
c100652d:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006531:	77 2c                	ja     c100655f <sys_unlink+0x165>
c1006533:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006536:	83 ec 0c             	sub    $0xc,%esp
c1006539:	50                   	push   %eax
c100653a:	e8 cd 10 00 00       	call   c100760c <dir_close>
c100653f:	83 c4 10             	add    $0x10,%esp
c1006542:	83 ec 08             	sub    $0x8,%esp
c1006545:	ff 75 08             	pushl  0x8(%ebp)
c1006548:	68 18 ac 00 c1       	push   $0xc100ac18
c100654d:	e8 61 e2 ff ff       	call   c10047b3 <printk>
c1006552:	83 c4 10             	add    $0x10,%esp
c1006555:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100655a:	e9 b9 00 00 00       	jmp    c1006618 <sys_unlink+0x21e>
c100655f:	83 7d f4 20          	cmpl   $0x20,-0xc(%ebp)
c1006563:	74 19                	je     c100657e <sys_unlink+0x184>
c1006565:	68 41 ac 00 c1       	push   $0xc100ac41
c100656a:	68 24 b0 00 c1       	push   $0xc100b024
c100656f:	68 d7 01 00 00       	push   $0x1d7
c1006574:	68 ec a8 00 c1       	push   $0xc100a8ec
c1006579:	e8 8f 9d ff ff       	call   c100030d <__PANIC>
c100657e:	83 ec 08             	sub    $0x8,%esp
c1006581:	6a 01                	push   $0x1
c1006583:	68 00 04 00 00       	push   $0x400
c1006588:	e8 b6 c5 ff ff       	call   c1002b43 <vmm_malloc>
c100658d:	83 c4 10             	add    $0x10,%esp
c1006590:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006593:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1006597:	75 26                	jne    c10065bf <sys_unlink+0x1c5>
c1006599:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100659c:	83 ec 0c             	sub    $0xc,%esp
c100659f:	50                   	push   %eax
c10065a0:	e8 67 10 00 00       	call   c100760c <dir_close>
c10065a5:	83 c4 10             	add    $0x10,%esp
c10065a8:	83 ec 0c             	sub    $0xc,%esp
c10065ab:	68 5c ac 00 c1       	push   $0xc100ac5c
c10065b0:	e8 fe e1 ff ff       	call   c10047b3 <printk>
c10065b5:	83 c4 10             	add    $0x10,%esp
c10065b8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10065bd:	eb 59                	jmp    c1006618 <sys_unlink+0x21e>
c10065bf:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10065c2:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10065c5:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10065ca:	ff 75 ec             	pushl  -0x14(%ebp)
c10065cd:	ff 75 f0             	pushl  -0x10(%ebp)
c10065d0:	ff 75 e8             	pushl  -0x18(%ebp)
c10065d3:	50                   	push   %eax
c10065d4:	e8 10 15 00 00       	call   c1007ae9 <delete_dir_entry>
c10065d9:	83 c4 10             	add    $0x10,%esp
c10065dc:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10065e1:	83 ec 08             	sub    $0x8,%esp
c10065e4:	ff 75 f0             	pushl  -0x10(%ebp)
c10065e7:	50                   	push   %eax
c10065e8:	e8 59 32 00 00       	call   c1009846 <inode_release>
c10065ed:	83 c4 10             	add    $0x10,%esp
c10065f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10065f3:	83 ec 08             	sub    $0x8,%esp
c10065f6:	68 00 04 00 00       	push   $0x400
c10065fb:	50                   	push   %eax
c10065fc:	e8 62 c6 ff ff       	call   c1002c63 <vmm_free>
c1006601:	83 c4 10             	add    $0x10,%esp
c1006604:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006607:	83 ec 0c             	sub    $0xc,%esp
c100660a:	50                   	push   %eax
c100660b:	e8 fc 0f 00 00       	call   c100760c <dir_close>
c1006610:	83 c4 10             	add    $0x10,%esp
c1006613:	b8 00 00 00 00       	mov    $0x0,%eax
c1006618:	c9                   	leave  
c1006619:	c3                   	ret    

c100661a <sys_mkdir>:
c100661a:	55                   	push   %ebp
c100661b:	89 e5                	mov    %esp,%ebp
c100661d:	53                   	push   %ebx
c100661e:	81 ec a4 02 00 00    	sub    $0x2a4,%esp
c1006624:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006628:	83 ec 08             	sub    $0x8,%esp
c100662b:	6a 01                	push   $0x1
c100662d:	68 00 04 00 00       	push   $0x400
c1006632:	e8 0c c5 ff ff       	call   c1002b43 <vmm_malloc>
c1006637:	83 c4 10             	add    $0x10,%esp
c100663a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100663d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1006641:	75 1a                	jne    c100665d <sys_mkdir+0x43>
c1006643:	83 ec 0c             	sub    $0xc,%esp
c1006646:	68 84 ac 00 c1       	push   $0xc100ac84
c100664b:	e8 63 e1 ff ff       	call   c10047b3 <printk>
c1006650:	83 c4 10             	add    $0x10,%esp
c1006653:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006658:	e9 f2 03 00 00       	jmp    c1006a4f <sys_mkdir+0x435>
c100665d:	83 ec 04             	sub    $0x4,%esp
c1006660:	68 08 02 00 00       	push   $0x208
c1006665:	6a 00                	push   $0x0
c1006667:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c100666d:	50                   	push   %eax
c100666e:	e8 37 9a ff ff       	call   c10000aa <memset>
c1006673:	83 c4 10             	add    $0x10,%esp
c1006676:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
c100667d:	83 ec 08             	sub    $0x8,%esp
c1006680:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006686:	50                   	push   %eax
c1006687:	ff 75 08             	pushl  0x8(%ebp)
c100668a:	e8 3b f5 ff ff       	call   c1005bca <search_file>
c100668f:	83 c4 10             	add    $0x10,%esp
c1006692:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006695:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006699:	74 1c                	je     c10066b7 <sys_mkdir+0x9d>
c100669b:	83 ec 08             	sub    $0x8,%esp
c100669e:	ff 75 08             	pushl  0x8(%ebp)
c10066a1:	68 b0 ac 00 c1       	push   $0xc100acb0
c10066a6:	e8 08 e1 ff ff       	call   c10047b3 <printk>
c10066ab:	83 c4 10             	add    $0x10,%esp
c10066ae:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10066b2:	e9 08 03 00 00       	jmp    c10069bf <sys_mkdir+0x3a5>
c10066b7:	83 ec 0c             	sub    $0xc,%esp
c10066ba:	ff 75 08             	pushl  0x8(%ebp)
c10066bd:	e8 80 f4 ff ff       	call   c1005b42 <path_depth_cnt>
c10066c2:	83 c4 10             	add    $0x10,%esp
c10066c5:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10066c8:	83 ec 0c             	sub    $0xc,%esp
c10066cb:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10066d1:	50                   	push   %eax
c10066d2:	e8 6b f4 ff ff       	call   c1005b42 <path_depth_cnt>
c10066d7:	83 c4 10             	add    $0x10,%esp
c10066da:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10066dd:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10066e0:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c10066e3:	74 23                	je     c1006708 <sys_mkdir+0xee>
c10066e5:	83 ec 04             	sub    $0x4,%esp
c10066e8:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10066ee:	50                   	push   %eax
c10066ef:	ff 75 08             	pushl  0x8(%ebp)
c10066f2:	68 d8 ac 00 c1       	push   $0xc100acd8
c10066f7:	e8 b7 e0 ff ff       	call   c10047b3 <printk>
c10066fc:	83 c4 10             	add    $0x10,%esp
c10066ff:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1006703:	e9 b7 02 00 00       	jmp    c10069bf <sys_mkdir+0x3a5>
c1006708:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100670b:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100670e:	83 ec 08             	sub    $0x8,%esp
c1006711:	6a 2f                	push   $0x2f
c1006713:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006719:	50                   	push   %eax
c100671a:	e8 77 9a ff ff       	call   c1000196 <strrchr>
c100671f:	83 c4 10             	add    $0x10,%esp
c1006722:	83 c0 01             	add    $0x1,%eax
c1006725:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1006728:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100672d:	83 ec 0c             	sub    $0xc,%esp
c1006730:	50                   	push   %eax
c1006731:	e8 c8 1b 00 00       	call   c10082fe <inode_bitmap_alloc>
c1006736:	83 c4 10             	add    $0x10,%esp
c1006739:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100673c:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006740:	75 19                	jne    c100675b <sys_mkdir+0x141>
c1006742:	83 ec 0c             	sub    $0xc,%esp
c1006745:	68 0c ad 00 c1       	push   $0xc100ad0c
c100674a:	e8 64 e0 ff ff       	call   c10047b3 <printk>
c100674f:	83 c4 10             	add    $0x10,%esp
c1006752:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1006756:	e9 64 02 00 00       	jmp    c10069bf <sys_mkdir+0x3a5>
c100675b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100675e:	83 ec 08             	sub    $0x8,%esp
c1006761:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1006767:	52                   	push   %edx
c1006768:	50                   	push   %eax
c1006769:	e8 9d 33 00 00       	call   c1009b0b <inode_init>
c100676e:	83 c4 10             	add    $0x10,%esp
c1006771:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
c1006778:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
c100677f:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006784:	83 ec 0c             	sub    $0xc,%esp
c1006787:	50                   	push   %eax
c1006788:	e8 31 1c 00 00       	call   c10083be <block_bitmap_alloc>
c100678d:	83 c4 10             	add    $0x10,%esp
c1006790:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1006793:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
c1006797:	75 19                	jne    c10067b2 <sys_mkdir+0x198>
c1006799:	83 ec 0c             	sub    $0xc,%esp
c100679c:	68 30 ad 00 c1       	push   $0xc100ad30
c10067a1:	e8 0d e0 ff ff       	call   c10047b3 <printk>
c10067a6:	83 c4 10             	add    $0x10,%esp
c10067a9:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10067ad:	e9 0d 02 00 00       	jmp    c10069bf <sys_mkdir+0x3a5>
c10067b2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10067b5:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
c10067bb:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c10067be:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10067c3:	8b 40 10             	mov    0x10(%eax),%eax
c10067c6:	8b 40 28             	mov    0x28(%eax),%eax
c10067c9:	29 c2                	sub    %eax,%edx
c10067cb:	89 d0                	mov    %edx,%eax
c10067cd:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10067d0:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
c10067d4:	75 19                	jne    c10067ef <sys_mkdir+0x1d5>
c10067d6:	68 6b ad 00 c1       	push   $0xc100ad6b
c10067db:	68 30 b0 00 c1       	push   $0xc100b030
c10067e0:	68 1f 02 00 00       	push   $0x21f
c10067e5:	68 ec a8 00 c1       	push   $0xc100a8ec
c10067ea:	e8 1e 9b ff ff       	call   c100030d <__PANIC>
c10067ef:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10067f4:	83 ec 04             	sub    $0x4,%esp
c10067f7:	6a 01                	push   $0x1
c10067f9:	ff 75 d8             	pushl  -0x28(%ebp)
c10067fc:	50                   	push   %eax
c10067fd:	e8 8a 1c 00 00       	call   c100848c <bitmap_sync>
c1006802:	83 c4 10             	add    $0x10,%esp
c1006805:	83 ec 04             	sub    $0x4,%esp
c1006808:	68 00 04 00 00       	push   $0x400
c100680d:	6a 00                	push   $0x0
c100680f:	ff 75 ec             	pushl  -0x14(%ebp)
c1006812:	e8 93 98 ff ff       	call   c10000aa <memset>
c1006817:	83 c4 10             	add    $0x10,%esp
c100681a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100681d:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1006820:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006823:	83 ec 04             	sub    $0x4,%esp
c1006826:	6a 01                	push   $0x1
c1006828:	68 2d a8 00 c1       	push   $0xc100a82d
c100682d:	50                   	push   %eax
c100682e:	e8 d5 98 ff ff       	call   c1000108 <memcpy>
c1006833:	83 c4 10             	add    $0x10,%esp
c1006836:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006839:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100683c:	89 50 10             	mov    %edx,0x10(%eax)
c100683f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006842:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1006849:	83 45 d0 18          	addl   $0x18,-0x30(%ebp)
c100684d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006850:	83 ec 04             	sub    $0x4,%esp
c1006853:	6a 02                	push   $0x2
c1006855:	68 2f a8 00 c1       	push   $0xc100a82f
c100685a:	50                   	push   %eax
c100685b:	e8 a8 98 ff ff       	call   c1000108 <memcpy>
c1006860:	83 c4 10             	add    $0x10,%esp
c1006863:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006866:	8b 00                	mov    (%eax),%eax
c1006868:	8b 10                	mov    (%eax),%edx
c100686a:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100686d:	89 50 10             	mov    %edx,0x10(%eax)
c1006870:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006873:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100687a:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
c1006880:	83 ec 04             	sub    $0x4,%esp
c1006883:	6a 01                	push   $0x1
c1006885:	50                   	push   %eax
c1006886:	ff 75 ec             	pushl  -0x14(%ebp)
c1006889:	e8 a5 e8 ff ff       	call   c1005133 <ide_write>
c100688e:	83 c4 10             	add    $0x10,%esp
c1006891:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006896:	8b 40 10             	mov    0x10(%eax),%eax
c1006899:	8b 40 30             	mov    0x30(%eax),%eax
c100689c:	01 c0                	add    %eax,%eax
c100689e:	89 85 80 fd ff ff    	mov    %eax,-0x280(%ebp)
c10068a4:	83 ec 04             	sub    $0x4,%esp
c10068a7:	6a 18                	push   $0x18
c10068a9:	6a 00                	push   $0x0
c10068ab:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c10068b1:	50                   	push   %eax
c10068b2:	e8 f3 97 ff ff       	call   c10000aa <memset>
c10068b7:	83 c4 10             	add    $0x10,%esp
c10068ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10068bd:	8d 95 64 fd ff ff    	lea    -0x29c(%ebp),%edx
c10068c3:	52                   	push   %edx
c10068c4:	6a 02                	push   $0x2
c10068c6:	50                   	push   %eax
c10068c7:	ff 75 dc             	pushl  -0x24(%ebp)
c10068ca:	e8 76 0d 00 00       	call   c1007645 <create_dir_entry>
c10068cf:	83 c4 10             	add    $0x10,%esp
c10068d2:	83 ec 04             	sub    $0x4,%esp
c10068d5:	68 00 04 00 00       	push   $0x400
c10068da:	6a 00                	push   $0x0
c10068dc:	ff 75 ec             	pushl  -0x14(%ebp)
c10068df:	e8 c6 97 ff ff       	call   c10000aa <memset>
c10068e4:	83 c4 10             	add    $0x10,%esp
c10068e7:	83 ec 04             	sub    $0x4,%esp
c10068ea:	ff 75 ec             	pushl  -0x14(%ebp)
c10068ed:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c10068f3:	50                   	push   %eax
c10068f4:	ff 75 e0             	pushl  -0x20(%ebp)
c10068f7:	e8 b5 0d 00 00       	call   c10076b1 <sync_dir_entry>
c10068fc:	83 c4 10             	add    $0x10,%esp
c10068ff:	85 c0                	test   %eax,%eax
c1006901:	75 19                	jne    c100691c <sys_mkdir+0x302>
c1006903:	83 ec 0c             	sub    $0xc,%esp
c1006906:	68 84 ad 00 c1       	push   $0xc100ad84
c100690b:	e8 a3 de ff ff       	call   c10047b3 <printk>
c1006910:	83 c4 10             	add    $0x10,%esp
c1006913:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1006917:	e9 a3 00 00 00       	jmp    c10069bf <sys_mkdir+0x3a5>
c100691c:	83 ec 04             	sub    $0x4,%esp
c100691f:	68 00 04 00 00       	push   $0x400
c1006924:	6a 00                	push   $0x0
c1006926:	ff 75 ec             	pushl  -0x14(%ebp)
c1006929:	e8 7c 97 ff ff       	call   c10000aa <memset>
c100692e:	83 c4 10             	add    $0x10,%esp
c1006931:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006934:	8b 10                	mov    (%eax),%edx
c1006936:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100693b:	83 ec 04             	sub    $0x4,%esp
c100693e:	ff 75 ec             	pushl  -0x14(%ebp)
c1006941:	52                   	push   %edx
c1006942:	50                   	push   %eax
c1006943:	e8 f1 2b 00 00       	call   c1009539 <inode_sync>
c1006948:	83 c4 10             	add    $0x10,%esp
c100694b:	83 ec 04             	sub    $0x4,%esp
c100694e:	68 00 04 00 00       	push   $0x400
c1006953:	6a 00                	push   $0x0
c1006955:	ff 75 ec             	pushl  -0x14(%ebp)
c1006958:	e8 4d 97 ff ff       	call   c10000aa <memset>
c100695d:	83 c4 10             	add    $0x10,%esp
c1006960:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006965:	83 ec 04             	sub    $0x4,%esp
c1006968:	ff 75 ec             	pushl  -0x14(%ebp)
c100696b:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1006971:	52                   	push   %edx
c1006972:	50                   	push   %eax
c1006973:	e8 c1 2b 00 00       	call   c1009539 <inode_sync>
c1006978:	83 c4 10             	add    $0x10,%esp
c100697b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100697e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006983:	83 ec 04             	sub    $0x4,%esp
c1006986:	6a 00                	push   $0x0
c1006988:	52                   	push   %edx
c1006989:	50                   	push   %eax
c100698a:	e8 fd 1a 00 00       	call   c100848c <bitmap_sync>
c100698f:	83 c4 10             	add    $0x10,%esp
c1006992:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006995:	83 ec 08             	sub    $0x8,%esp
c1006998:	68 00 04 00 00       	push   $0x400
c100699d:	50                   	push   %eax
c100699e:	e8 c0 c2 ff ff       	call   c1002c63 <vmm_free>
c10069a3:	83 c4 10             	add    $0x10,%esp
c10069a6:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10069a9:	83 ec 0c             	sub    $0xc,%esp
c10069ac:	50                   	push   %eax
c10069ad:	e8 5a 0c 00 00       	call   c100760c <dir_close>
c10069b2:	83 c4 10             	add    $0x10,%esp
c10069b5:	b8 00 00 00 00       	mov    $0x0,%eax
c10069ba:	e9 90 00 00 00       	jmp    c1006a4f <sys_mkdir+0x435>
c10069bf:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10069c3:	83 f8 01             	cmp    $0x1,%eax
c10069c6:	74 5e                	je     c1006a26 <sys_mkdir+0x40c>
c10069c8:	83 f8 02             	cmp    $0x2,%eax
c10069cb:	75 69                	jne    c1006a36 <sys_mkdir+0x41c>
c10069cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10069d0:	8d 50 07             	lea    0x7(%eax),%edx
c10069d3:	85 c0                	test   %eax,%eax
c10069d5:	0f 48 c2             	cmovs  %edx,%eax
c10069d8:	c1 f8 03             	sar    $0x3,%eax
c10069db:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10069de:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10069e1:	99                   	cltd   
c10069e2:	c1 ea 1d             	shr    $0x1d,%edx
c10069e5:	01 d0                	add    %edx,%eax
c10069e7:	83 e0 07             	and    $0x7,%eax
c10069ea:	29 d0                	sub    %edx,%eax
c10069ec:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10069ef:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10069f4:	8b 50 20             	mov    0x20(%eax),%edx
c10069f7:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10069fa:	01 d0                	add    %edx,%eax
c10069fc:	0f b6 00             	movzbl (%eax),%eax
c10069ff:	89 c2                	mov    %eax,%edx
c1006a01:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1006a04:	bb 01 00 00 00       	mov    $0x1,%ebx
c1006a09:	89 c1                	mov    %eax,%ecx
c1006a0b:	d3 e3                	shl    %cl,%ebx
c1006a0d:	89 d8                	mov    %ebx,%eax
c1006a0f:	f7 d0                	not    %eax
c1006a11:	89 d1                	mov    %edx,%ecx
c1006a13:	21 c1                	and    %eax,%ecx
c1006a15:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006a1a:	8b 50 20             	mov    0x20(%eax),%edx
c1006a1d:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006a20:	01 d0                	add    %edx,%eax
c1006a22:	89 ca                	mov    %ecx,%edx
c1006a24:	88 10                	mov    %dl,(%eax)
c1006a26:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1006a29:	83 ec 0c             	sub    $0xc,%esp
c1006a2c:	50                   	push   %eax
c1006a2d:	e8 da 0b 00 00       	call   c100760c <dir_close>
c1006a32:	83 c4 10             	add    $0x10,%esp
c1006a35:	90                   	nop
c1006a36:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006a39:	83 ec 08             	sub    $0x8,%esp
c1006a3c:	68 00 04 00 00       	push   $0x400
c1006a41:	50                   	push   %eax
c1006a42:	e8 1c c2 ff ff       	call   c1002c63 <vmm_free>
c1006a47:	83 c4 10             	add    $0x10,%esp
c1006a4a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006a4f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1006a52:	c9                   	leave  
c1006a53:	c3                   	ret    

c1006a54 <sys_opendir>:
c1006a54:	55                   	push   %ebp
c1006a55:	89 e5                	mov    %esp,%ebp
c1006a57:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1006a5d:	83 ec 0c             	sub    $0xc,%esp
c1006a60:	ff 75 08             	pushl  0x8(%ebp)
c1006a63:	e8 b6 96 ff ff       	call   c100011e <strlen>
c1006a68:	83 c4 10             	add    $0x10,%esp
c1006a6b:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1006a70:	76 19                	jbe    c1006a8b <sys_opendir+0x37>
c1006a72:	68 af ad 00 c1       	push   $0xc100adaf
c1006a77:	68 3c b0 00 c1       	push   $0xc100b03c
c1006a7c:	68 61 02 00 00       	push   $0x261
c1006a81:	68 ec a8 00 c1       	push   $0xc100a8ec
c1006a86:	e8 82 98 ff ff       	call   c100030d <__PANIC>
c1006a8b:	8b 45 08             	mov    0x8(%ebp),%eax
c1006a8e:	0f b6 00             	movzbl (%eax),%eax
c1006a91:	3c 2f                	cmp    $0x2f,%al
c1006a93:	75 21                	jne    c1006ab6 <sys_opendir+0x62>
c1006a95:	8b 45 08             	mov    0x8(%ebp),%eax
c1006a98:	83 c0 01             	add    $0x1,%eax
c1006a9b:	0f b6 00             	movzbl (%eax),%eax
c1006a9e:	84 c0                	test   %al,%al
c1006aa0:	74 0a                	je     c1006aac <sys_opendir+0x58>
c1006aa2:	8b 45 08             	mov    0x8(%ebp),%eax
c1006aa5:	0f b6 00             	movzbl (%eax),%eax
c1006aa8:	3c 2e                	cmp    $0x2e,%al
c1006aaa:	75 0a                	jne    c1006ab6 <sys_opendir+0x62>
c1006aac:	b8 40 32 a1 c1       	mov    $0xc1a13240,%eax
c1006ab1:	e9 a9 00 00 00       	jmp    c1006b5f <sys_opendir+0x10b>
c1006ab6:	83 ec 04             	sub    $0x4,%esp
c1006ab9:	68 08 02 00 00       	push   $0x208
c1006abe:	6a 00                	push   $0x0
c1006ac0:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1006ac6:	50                   	push   %eax
c1006ac7:	e8 de 95 ff ff       	call   c10000aa <memset>
c1006acc:	83 c4 10             	add    $0x10,%esp
c1006acf:	83 ec 08             	sub    $0x8,%esp
c1006ad2:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1006ad8:	50                   	push   %eax
c1006ad9:	ff 75 08             	pushl  0x8(%ebp)
c1006adc:	e8 e9 f0 ff ff       	call   c1005bca <search_file>
c1006ae1:	83 c4 10             	add    $0x10,%esp
c1006ae4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006ae7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006aee:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006af2:	75 1c                	jne    c1006b10 <sys_opendir+0xbc>
c1006af4:	83 ec 04             	sub    $0x4,%esp
c1006af7:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1006afd:	50                   	push   %eax
c1006afe:	ff 75 08             	pushl  0x8(%ebp)
c1006b01:	68 cb ad 00 c1       	push   $0xc100adcb
c1006b06:	e8 a8 dc ff ff       	call   c10047b3 <printk>
c1006b0b:	83 c4 10             	add    $0x10,%esp
c1006b0e:	eb 3d                	jmp    c1006b4d <sys_opendir+0xf9>
c1006b10:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006b13:	83 f8 01             	cmp    $0x1,%eax
c1006b16:	75 15                	jne    c1006b2d <sys_opendir+0xd9>
c1006b18:	83 ec 08             	sub    $0x8,%esp
c1006b1b:	ff 75 08             	pushl  0x8(%ebp)
c1006b1e:	68 e9 ad 00 c1       	push   $0xc100ade9
c1006b23:	e8 8b dc ff ff       	call   c10047b3 <printk>
c1006b28:	83 c4 10             	add    $0x10,%esp
c1006b2b:	eb 20                	jmp    c1006b4d <sys_opendir+0xf9>
c1006b2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006b30:	83 f8 02             	cmp    $0x2,%eax
c1006b33:	75 18                	jne    c1006b4d <sys_opendir+0xf9>
c1006b35:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006b38:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006b3d:	83 ec 08             	sub    $0x8,%esp
c1006b40:	52                   	push   %edx
c1006b41:	50                   	push   %eax
c1006b42:	e8 99 08 00 00       	call   c10073e0 <dir_open>
c1006b47:	83 c4 10             	add    $0x10,%esp
c1006b4a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006b4d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006b50:	83 ec 0c             	sub    $0xc,%esp
c1006b53:	50                   	push   %eax
c1006b54:	e8 b3 0a 00 00       	call   c100760c <dir_close>
c1006b59:	83 c4 10             	add    $0x10,%esp
c1006b5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006b5f:	c9                   	leave  
c1006b60:	c3                   	ret    

c1006b61 <sys_closedir>:
c1006b61:	55                   	push   %ebp
c1006b62:	89 e5                	mov    %esp,%ebp
c1006b64:	83 ec 18             	sub    $0x18,%esp
c1006b67:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006b6e:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006b72:	74 15                	je     c1006b89 <sys_closedir+0x28>
c1006b74:	83 ec 0c             	sub    $0xc,%esp
c1006b77:	ff 75 08             	pushl  0x8(%ebp)
c1006b7a:	e8 8d 0a 00 00       	call   c100760c <dir_close>
c1006b7f:	83 c4 10             	add    $0x10,%esp
c1006b82:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006b89:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006b8c:	c9                   	leave  
c1006b8d:	c3                   	ret    

c1006b8e <sys_readdir>:
c1006b8e:	55                   	push   %ebp
c1006b8f:	89 e5                	mov    %esp,%ebp
c1006b91:	83 ec 08             	sub    $0x8,%esp
c1006b94:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006b98:	75 19                	jne    c1006bb3 <sys_readdir+0x25>
c1006b9a:	68 fe ad 00 c1       	push   $0xc100adfe
c1006b9f:	68 48 b0 00 c1       	push   $0xc100b048
c1006ba4:	68 84 02 00 00       	push   $0x284
c1006ba9:	68 ec a8 00 c1       	push   $0xc100a8ec
c1006bae:	e8 5a 97 ff ff       	call   c100030d <__PANIC>
c1006bb3:	83 ec 0c             	sub    $0xc,%esp
c1006bb6:	ff 75 08             	pushl  0x8(%ebp)
c1006bb9:	e8 cd 13 00 00       	call   c1007f8b <dir_read>
c1006bbe:	83 c4 10             	add    $0x10,%esp
c1006bc1:	c9                   	leave  
c1006bc2:	c3                   	ret    

c1006bc3 <sys_rewinddir>:
c1006bc3:	55                   	push   %ebp
c1006bc4:	89 e5                	mov    %esp,%ebp
c1006bc6:	8b 45 08             	mov    0x8(%ebp),%eax
c1006bc9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1006bd0:	90                   	nop
c1006bd1:	5d                   	pop    %ebp
c1006bd2:	c3                   	ret    

c1006bd3 <sys_rmdir>:
c1006bd3:	55                   	push   %ebp
c1006bd4:	89 e5                	mov    %esp,%ebp
c1006bd6:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1006bdc:	83 ec 04             	sub    $0x4,%esp
c1006bdf:	68 08 02 00 00       	push   $0x208
c1006be4:	6a 00                	push   $0x0
c1006be6:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1006bec:	50                   	push   %eax
c1006bed:	e8 b8 94 ff ff       	call   c10000aa <memset>
c1006bf2:	83 c4 10             	add    $0x10,%esp
c1006bf5:	83 ec 08             	sub    $0x8,%esp
c1006bf8:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1006bfe:	50                   	push   %eax
c1006bff:	ff 75 08             	pushl  0x8(%ebp)
c1006c02:	e8 c3 ef ff ff       	call   c1005bca <search_file>
c1006c07:	83 c4 10             	add    $0x10,%esp
c1006c0a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006c0d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1006c11:	75 19                	jne    c1006c2c <sys_rmdir+0x59>
c1006c13:	68 b4 ab 00 c1       	push   $0xc100abb4
c1006c18:	68 54 b0 00 c1       	push   $0xc100b054
c1006c1d:	68 92 02 00 00       	push   $0x292
c1006c22:	68 ec a8 00 c1       	push   $0xc100a8ec
c1006c27:	e8 e1 96 ff ff       	call   c100030d <__PANIC>
c1006c2c:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006c33:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006c37:	75 1f                	jne    c1006c58 <sys_rmdir+0x85>
c1006c39:	83 ec 04             	sub    $0x4,%esp
c1006c3c:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1006c42:	50                   	push   %eax
c1006c43:	ff 75 08             	pushl  0x8(%ebp)
c1006c46:	68 cb ad 00 c1       	push   $0xc100adcb
c1006c4b:	e8 63 db ff ff       	call   c10047b3 <printk>
c1006c50:	83 c4 10             	add    $0x10,%esp
c1006c53:	e9 87 00 00 00       	jmp    c1006cdf <sys_rmdir+0x10c>
c1006c58:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006c5b:	83 f8 01             	cmp    $0x1,%eax
c1006c5e:	75 15                	jne    c1006c75 <sys_rmdir+0xa2>
c1006c60:	83 ec 08             	sub    $0x8,%esp
c1006c63:	ff 75 08             	pushl  0x8(%ebp)
c1006c66:	68 e9 ad 00 c1       	push   $0xc100ade9
c1006c6b:	e8 43 db ff ff       	call   c10047b3 <printk>
c1006c70:	83 c4 10             	add    $0x10,%esp
c1006c73:	eb 6a                	jmp    c1006cdf <sys_rmdir+0x10c>
c1006c75:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006c78:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006c7d:	83 ec 08             	sub    $0x8,%esp
c1006c80:	52                   	push   %edx
c1006c81:	50                   	push   %eax
c1006c82:	e8 59 07 00 00       	call   c10073e0 <dir_open>
c1006c87:	83 c4 10             	add    $0x10,%esp
c1006c8a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006c8d:	83 ec 0c             	sub    $0xc,%esp
c1006c90:	ff 75 ec             	pushl  -0x14(%ebp)
c1006c93:	e8 c8 14 00 00       	call   c1008160 <dir_is_empty>
c1006c98:	83 c4 10             	add    $0x10,%esp
c1006c9b:	85 c0                	test   %eax,%eax
c1006c9d:	75 15                	jne    c1006cb4 <sys_rmdir+0xe1>
c1006c9f:	83 ec 08             	sub    $0x8,%esp
c1006ca2:	ff 75 08             	pushl  0x8(%ebp)
c1006ca5:	68 0c ae 00 c1       	push   $0xc100ae0c
c1006caa:	e8 04 db ff ff       	call   c10047b3 <printk>
c1006caf:	83 c4 10             	add    $0x10,%esp
c1006cb2:	eb 1d                	jmp    c1006cd1 <sys_rmdir+0xfe>
c1006cb4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006cb7:	83 ec 08             	sub    $0x8,%esp
c1006cba:	ff 75 ec             	pushl  -0x14(%ebp)
c1006cbd:	50                   	push   %eax
c1006cbe:	e8 c5 14 00 00       	call   c1008188 <dir_remove>
c1006cc3:	83 c4 10             	add    $0x10,%esp
c1006cc6:	85 c0                	test   %eax,%eax
c1006cc8:	75 07                	jne    c1006cd1 <sys_rmdir+0xfe>
c1006cca:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006cd1:	83 ec 0c             	sub    $0xc,%esp
c1006cd4:	ff 75 ec             	pushl  -0x14(%ebp)
c1006cd7:	e8 30 09 00 00       	call   c100760c <dir_close>
c1006cdc:	83 c4 10             	add    $0x10,%esp
c1006cdf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006ce2:	83 ec 0c             	sub    $0xc,%esp
c1006ce5:	50                   	push   %eax
c1006ce6:	e8 21 09 00 00       	call   c100760c <dir_close>
c1006ceb:	83 c4 10             	add    $0x10,%esp
c1006cee:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006cf1:	c9                   	leave  
c1006cf2:	c3                   	ret    

c1006cf3 <get_parent_dir_inode_nr>:
c1006cf3:	55                   	push   %ebp
c1006cf4:	89 e5                	mov    %esp,%ebp
c1006cf6:	83 ec 18             	sub    $0x18,%esp
c1006cf9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006cfe:	83 ec 08             	sub    $0x8,%esp
c1006d01:	ff 75 08             	pushl  0x8(%ebp)
c1006d04:	50                   	push   %eax
c1006d05:	e8 50 29 00 00       	call   c100965a <inode_open>
c1006d0a:	83 c4 10             	add    $0x10,%esp
c1006d0d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006d10:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006d13:	8b 40 10             	mov    0x10(%eax),%eax
c1006d16:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006d19:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006d1e:	8b 40 10             	mov    0x10(%eax),%eax
c1006d21:	8b 40 28             	mov    0x28(%eax),%eax
c1006d24:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1006d27:	73 19                	jae    c1006d42 <get_parent_dir_inode_nr+0x4f>
c1006d29:	68 54 ae 00 c1       	push   $0xc100ae54
c1006d2e:	68 60 b0 00 c1       	push   $0xc100b060
c1006d33:	68 ad 02 00 00       	push   $0x2ad
c1006d38:	68 ec a8 00 c1       	push   $0xc100a8ec
c1006d3d:	e8 cb 95 ff ff       	call   c100030d <__PANIC>
c1006d42:	83 ec 0c             	sub    $0xc,%esp
c1006d45:	ff 75 f4             	pushl  -0xc(%ebp)
c1006d48:	e8 e3 29 00 00       	call   c1009730 <inode_close>
c1006d4d:	83 c4 10             	add    $0x10,%esp
c1006d50:	83 ec 04             	sub    $0x4,%esp
c1006d53:	6a 01                	push   $0x1
c1006d55:	ff 75 f0             	pushl  -0x10(%ebp)
c1006d58:	ff 75 0c             	pushl  0xc(%ebp)
c1006d5b:	e8 96 e3 ff ff       	call   c10050f6 <ide_read>
c1006d60:	83 c4 10             	add    $0x10,%esp
c1006d63:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006d66:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006d69:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006d6c:	83 c0 18             	add    $0x18,%eax
c1006d6f:	8b 40 10             	mov    0x10(%eax),%eax
c1006d72:	3d ff 0f 00 00       	cmp    $0xfff,%eax
c1006d77:	77 0e                	ja     c1006d87 <get_parent_dir_inode_nr+0x94>
c1006d79:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006d7c:	83 c0 18             	add    $0x18,%eax
c1006d7f:	8b 40 14             	mov    0x14(%eax),%eax
c1006d82:	83 f8 02             	cmp    $0x2,%eax
c1006d85:	74 19                	je     c1006da0 <get_parent_dir_inode_nr+0xad>
c1006d87:	68 80 ae 00 c1       	push   $0xc100ae80
c1006d8c:	68 60 b0 00 c1       	push   $0xc100b060
c1006d91:	68 b2 02 00 00       	push   $0x2b2
c1006d96:	68 ec a8 00 c1       	push   $0xc100a8ec
c1006d9b:	e8 6d 95 ff ff       	call   c100030d <__PANIC>
c1006da0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006da3:	83 c0 18             	add    $0x18,%eax
c1006da6:	8b 40 10             	mov    0x10(%eax),%eax
c1006da9:	c9                   	leave  
c1006daa:	c3                   	ret    

c1006dab <get_child_dir_name>:
c1006dab:	55                   	push   %ebp
c1006dac:	89 e5                	mov    %esp,%ebp
c1006dae:	57                   	push   %edi
c1006daf:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1006db5:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006dba:	83 ec 08             	sub    $0x8,%esp
c1006dbd:	ff 75 08             	pushl  0x8(%ebp)
c1006dc0:	50                   	push   %eax
c1006dc1:	e8 94 28 00 00       	call   c100965a <inode_open>
c1006dc6:	83 c4 10             	add    $0x10,%esp
c1006dc9:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006dcc:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006dd0:	8d 95 ac fd ff ff    	lea    -0x254(%ebp),%edx
c1006dd6:	b8 00 00 00 00       	mov    $0x0,%eax
c1006ddb:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1006de0:	89 d7                	mov    %edx,%edi
c1006de2:	f3 ab                	rep stos %eax,%es:(%edi)
c1006de4:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
c1006deb:	eb 22                	jmp    c1006e0f <get_child_dir_name+0x64>
c1006ded:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1006df1:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006df5:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1006df8:	83 c1 04             	add    $0x4,%ecx
c1006dfb:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1006dfe:	89 94 85 ac fd ff ff 	mov    %edx,-0x254(%ebp,%eax,4)
c1006e05:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006e09:	83 c0 01             	add    $0x1,%eax
c1006e0c:	88 45 f7             	mov    %al,-0x9(%ebp)
c1006e0f:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1006e13:	76 d8                	jbe    c1006ded <get_child_dir_name+0x42>
c1006e15:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006e18:	8b 40 40             	mov    0x40(%eax),%eax
c1006e1b:	85 c0                	test   %eax,%eax
c1006e1d:	74 25                	je     c1006e44 <get_child_dir_name+0x99>
c1006e1f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006e22:	8b 50 40             	mov    0x40(%eax),%edx
c1006e25:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
c1006e2b:	83 c0 30             	add    $0x30,%eax
c1006e2e:	83 ec 04             	sub    $0x4,%esp
c1006e31:	6a 01                	push   $0x1
c1006e33:	52                   	push   %edx
c1006e34:	50                   	push   %eax
c1006e35:	e8 bc e2 ff ff       	call   c10050f6 <ide_read>
c1006e3a:	83 c4 10             	add    $0x10,%esp
c1006e3d:	c7 45 f0 8c 00 00 00 	movl   $0x8c,-0x10(%ebp)
c1006e44:	83 ec 0c             	sub    $0xc,%esp
c1006e47:	ff 75 e8             	pushl  -0x18(%ebp)
c1006e4a:	e8 e1 28 00 00       	call   c1009730 <inode_close>
c1006e4f:	83 c4 10             	add    $0x10,%esp
c1006e52:	8b 45 14             	mov    0x14(%ebp),%eax
c1006e55:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006e58:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006e5d:	8b 40 10             	mov    0x10(%eax),%eax
c1006e60:	8b 40 30             	mov    0x30(%eax),%eax
c1006e63:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1006e66:	b8 00 02 00 00       	mov    $0x200,%eax
c1006e6b:	ba 00 00 00 00       	mov    $0x0,%edx
c1006e70:	f7 75 e0             	divl   -0x20(%ebp)
c1006e73:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1006e76:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006e7a:	e9 bc 00 00 00       	jmp    c1006f3b <get_child_dir_name+0x190>
c1006e7f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006e83:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1006e8a:	85 c0                	test   %eax,%eax
c1006e8c:	0f 84 9f 00 00 00    	je     c1006f31 <get_child_dir_name+0x186>
c1006e92:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006e96:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1006e9d:	83 ec 04             	sub    $0x4,%esp
c1006ea0:	6a 01                	push   $0x1
c1006ea2:	50                   	push   %eax
c1006ea3:	ff 75 14             	pushl  0x14(%ebp)
c1006ea6:	e8 4b e2 ff ff       	call   c10050f6 <ide_read>
c1006eab:	83 c4 10             	add    $0x10,%esp
c1006eae:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
c1006eb2:	eb 74                	jmp    c1006f28 <get_child_dir_name+0x17d>
c1006eb4:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1006eb8:	89 d0                	mov    %edx,%eax
c1006eba:	01 c0                	add    %eax,%eax
c1006ebc:	01 d0                	add    %edx,%eax
c1006ebe:	c1 e0 03             	shl    $0x3,%eax
c1006ec1:	89 c2                	mov    %eax,%edx
c1006ec3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006ec6:	01 d0                	add    %edx,%eax
c1006ec8:	8b 40 10             	mov    0x10(%eax),%eax
c1006ecb:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1006ece:	75 4e                	jne    c1006f1e <get_child_dir_name+0x173>
c1006ed0:	8b 45 10             	mov    0x10(%ebp),%eax
c1006ed3:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1006ed8:	89 c2                	mov    %eax,%edx
c1006eda:	b8 00 00 00 00       	mov    $0x0,%eax
c1006edf:	89 d7                	mov    %edx,%edi
c1006ee1:	f2 ae                	repnz scas %es:(%edi),%al
c1006ee3:	89 c8                	mov    %ecx,%eax
c1006ee5:	f7 d0                	not    %eax
c1006ee7:	8d 50 ff             	lea    -0x1(%eax),%edx
c1006eea:	8b 45 10             	mov    0x10(%ebp),%eax
c1006eed:	01 d0                	add    %edx,%eax
c1006eef:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1006ef4:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1006ef8:	89 d0                	mov    %edx,%eax
c1006efa:	01 c0                	add    %eax,%eax
c1006efc:	01 d0                	add    %edx,%eax
c1006efe:	c1 e0 03             	shl    $0x3,%eax
c1006f01:	89 c2                	mov    %eax,%edx
c1006f03:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006f06:	01 d0                	add    %edx,%eax
c1006f08:	83 ec 08             	sub    $0x8,%esp
c1006f0b:	50                   	push   %eax
c1006f0c:	ff 75 10             	pushl  0x10(%ebp)
c1006f0f:	e8 c1 92 ff ff       	call   c10001d5 <strcat>
c1006f14:	83 c4 10             	add    $0x10,%esp
c1006f17:	b8 00 00 00 00       	mov    $0x0,%eax
c1006f1c:	eb 2f                	jmp    c1006f4d <get_child_dir_name+0x1a2>
c1006f1e:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1006f22:	83 c0 01             	add    $0x1,%eax
c1006f25:	88 45 ef             	mov    %al,-0x11(%ebp)
c1006f28:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1006f2c:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1006f2f:	77 83                	ja     c1006eb4 <get_child_dir_name+0x109>
c1006f31:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006f35:	83 c0 01             	add    $0x1,%eax
c1006f38:	88 45 f7             	mov    %al,-0x9(%ebp)
c1006f3b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006f3f:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1006f42:	0f 87 37 ff ff ff    	ja     c1006e7f <get_child_dir_name+0xd4>
c1006f48:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006f4d:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1006f50:	c9                   	leave  
c1006f51:	c3                   	ret    

c1006f52 <sys_getcwd>:
c1006f52:	55                   	push   %ebp
c1006f53:	89 e5                	mov    %esp,%ebp
c1006f55:	57                   	push   %edi
c1006f56:	53                   	push   %ebx
c1006f57:	81 ec 20 02 00 00    	sub    $0x220,%esp
c1006f5d:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006f61:	75 19                	jne    c1006f7c <sys_getcwd+0x2a>
c1006f63:	68 46 ab 00 c1       	push   $0xc100ab46
c1006f68:	68 78 b0 00 c1       	push   $0xc100b078
c1006f6d:	68 e5 02 00 00       	push   $0x2e5
c1006f72:	68 ec a8 00 c1       	push   $0xc100a8ec
c1006f77:	e8 91 93 ff ff       	call   c100030d <__PANIC>
c1006f7c:	83 ec 08             	sub    $0x8,%esp
c1006f7f:	6a 01                	push   $0x1
c1006f81:	68 00 02 00 00       	push   $0x200
c1006f86:	e8 b8 bb ff ff       	call   c1002b43 <vmm_malloc>
c1006f8b:	83 c4 10             	add    $0x10,%esp
c1006f8e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006f91:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1006f95:	75 0a                	jne    c1006fa1 <sys_getcwd+0x4f>
c1006f97:	b8 00 00 00 00       	mov    $0x0,%eax
c1006f9c:	e9 97 01 00 00       	jmp    c1007138 <sys_getcwd+0x1e6>
c1006fa1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1006fa8:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1006fad:	8b 80 04 10 00 00    	mov    0x1004(%eax),%eax
c1006fb3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006fb6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006fba:	78 09                	js     c1006fc5 <sys_getcwd+0x73>
c1006fbc:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
c1006fc3:	7e 19                	jle    c1006fde <sys_getcwd+0x8c>
c1006fc5:	68 b8 ae 00 c1       	push   $0xc100aeb8
c1006fca:	68 78 b0 00 c1       	push   $0xc100b078
c1006fcf:	68 ed 02 00 00       	push   $0x2ed
c1006fd4:	68 ec a8 00 c1       	push   $0xc100a8ec
c1006fd9:	e8 2f 93 ff ff       	call   c100030d <__PANIC>
c1006fde:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006fe2:	75 17                	jne    c1006ffb <sys_getcwd+0xa9>
c1006fe4:	8b 45 08             	mov    0x8(%ebp),%eax
c1006fe7:	c6 00 2f             	movb   $0x2f,(%eax)
c1006fea:	8b 45 08             	mov    0x8(%ebp),%eax
c1006fed:	83 c0 01             	add    $0x1,%eax
c1006ff0:	c6 00 00             	movb   $0x0,(%eax)
c1006ff3:	8b 45 08             	mov    0x8(%ebp),%eax
c1006ff6:	e9 3d 01 00 00       	jmp    c1007138 <sys_getcwd+0x1e6>
c1006ffb:	83 ec 04             	sub    $0x4,%esp
c1006ffe:	ff 75 0c             	pushl  0xc(%ebp)
c1007001:	6a 00                	push   $0x0
c1007003:	ff 75 08             	pushl  0x8(%ebp)
c1007006:	e8 9f 90 ff ff       	call   c10000aa <memset>
c100700b:	83 c4 10             	add    $0x10,%esp
c100700e:	c7 85 e6 fd ff ff 00 	movl   $0x0,-0x21a(%ebp)
c1007015:	00 00 00 
c1007018:	8d 85 ea fd ff ff    	lea    -0x216(%ebp),%eax
c100701e:	b9 fc 01 00 00       	mov    $0x1fc,%ecx
c1007023:	bb 00 00 00 00       	mov    $0x0,%ebx
c1007028:	89 18                	mov    %ebx,(%eax)
c100702a:	89 5c 08 fc          	mov    %ebx,-0x4(%eax,%ecx,1)
c100702e:	8d 50 04             	lea    0x4(%eax),%edx
c1007031:	83 e2 fc             	and    $0xfffffffc,%edx
c1007034:	29 d0                	sub    %edx,%eax
c1007036:	01 c1                	add    %eax,%ecx
c1007038:	83 e1 fc             	and    $0xfffffffc,%ecx
c100703b:	c1 e9 02             	shr    $0x2,%ecx
c100703e:	89 d7                	mov    %edx,%edi
c1007040:	89 d8                	mov    %ebx,%eax
c1007042:	f3 ab                	rep stos %eax,%es:(%edi)
c1007044:	eb 58                	jmp    c100709e <sys_getcwd+0x14c>
c1007046:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007049:	83 ec 08             	sub    $0x8,%esp
c100704c:	ff 75 f0             	pushl  -0x10(%ebp)
c100704f:	50                   	push   %eax
c1007050:	e8 9e fc ff ff       	call   c1006cf3 <get_parent_dir_inode_nr>
c1007055:	83 c4 10             	add    $0x10,%esp
c1007058:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100705b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100705e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007061:	ff 75 f0             	pushl  -0x10(%ebp)
c1007064:	8d 8d e6 fd ff ff    	lea    -0x21a(%ebp),%ecx
c100706a:	51                   	push   %ecx
c100706b:	52                   	push   %edx
c100706c:	50                   	push   %eax
c100706d:	e8 39 fd ff ff       	call   c1006dab <get_child_dir_name>
c1007072:	83 c4 10             	add    $0x10,%esp
c1007075:	83 f8 ff             	cmp    $0xffffffff,%eax
c1007078:	75 1e                	jne    c1007098 <sys_getcwd+0x146>
c100707a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100707d:	83 ec 08             	sub    $0x8,%esp
c1007080:	68 00 02 00 00       	push   $0x200
c1007085:	50                   	push   %eax
c1007086:	e8 d8 bb ff ff       	call   c1002c63 <vmm_free>
c100708b:	83 c4 10             	add    $0x10,%esp
c100708e:	b8 00 00 00 00       	mov    $0x0,%eax
c1007093:	e9 a0 00 00 00       	jmp    c1007138 <sys_getcwd+0x1e6>
c1007098:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100709b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100709e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10070a2:	75 a2                	jne    c1007046 <sys_getcwd+0xf4>
c10070a4:	83 ec 0c             	sub    $0xc,%esp
c10070a7:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c10070ad:	50                   	push   %eax
c10070ae:	e8 6b 90 ff ff       	call   c100011e <strlen>
c10070b3:	83 c4 10             	add    $0x10,%esp
c10070b6:	39 45 0c             	cmp    %eax,0xc(%ebp)
c10070b9:	73 49                	jae    c1007104 <sys_getcwd+0x1b2>
c10070bb:	68 e8 ae 00 c1       	push   $0xc100aee8
c10070c0:	68 78 b0 00 c1       	push   $0xc100b078
c10070c5:	68 03 03 00 00       	push   $0x303
c10070ca:	68 ec a8 00 c1       	push   $0xc100a8ec
c10070cf:	e8 39 92 ff ff       	call   c100030d <__PANIC>
c10070d4:	83 ec 0c             	sub    $0xc,%esp
c10070d7:	ff 75 08             	pushl  0x8(%ebp)
c10070da:	e8 3f 90 ff ff       	call   c100011e <strlen>
c10070df:	83 c4 10             	add    $0x10,%esp
c10070e2:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c10070e6:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c10070ea:	8b 45 08             	mov    0x8(%ebp),%eax
c10070ed:	01 d0                	add    %edx,%eax
c10070ef:	83 ec 08             	sub    $0x8,%esp
c10070f2:	ff 75 e8             	pushl  -0x18(%ebp)
c10070f5:	50                   	push   %eax
c10070f6:	e8 1f 91 ff ff       	call   c100021a <strcpy>
c10070fb:	83 c4 10             	add    $0x10,%esp
c10070fe:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007101:	c6 00 00             	movb   $0x0,(%eax)
c1007104:	83 ec 08             	sub    $0x8,%esp
c1007107:	6a 2f                	push   $0x2f
c1007109:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c100710f:	50                   	push   %eax
c1007110:	e8 81 90 ff ff       	call   c1000196 <strrchr>
c1007115:	83 c4 10             	add    $0x10,%esp
c1007118:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100711b:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c100711f:	75 b3                	jne    c10070d4 <sys_getcwd+0x182>
c1007121:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007124:	83 ec 08             	sub    $0x8,%esp
c1007127:	68 00 02 00 00       	push   $0x200
c100712c:	50                   	push   %eax
c100712d:	e8 31 bb ff ff       	call   c1002c63 <vmm_free>
c1007132:	83 c4 10             	add    $0x10,%esp
c1007135:	8b 45 08             	mov    0x8(%ebp),%eax
c1007138:	8d 65 f8             	lea    -0x8(%ebp),%esp
c100713b:	5b                   	pop    %ebx
c100713c:	5f                   	pop    %edi
c100713d:	5d                   	pop    %ebp
c100713e:	c3                   	ret    

c100713f <sys_stat>:
c100713f:	55                   	push   %ebp
c1007140:	89 e5                	mov    %esp,%ebp
c1007142:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1007148:	83 ec 08             	sub    $0x8,%esp
c100714b:	68 1b a9 00 c1       	push   $0xc100a91b
c1007150:	ff 75 08             	pushl  0x8(%ebp)
c1007153:	e8 2b 90 ff ff       	call   c1000183 <strcmp>
c1007158:	83 c4 10             	add    $0x10,%esp
c100715b:	85 c0                	test   %eax,%eax
c100715d:	74 2e                	je     c100718d <sys_stat+0x4e>
c100715f:	83 ec 08             	sub    $0x8,%esp
c1007162:	68 1d a9 00 c1       	push   $0xc100a91d
c1007167:	ff 75 08             	pushl  0x8(%ebp)
c100716a:	e8 14 90 ff ff       	call   c1000183 <strcmp>
c100716f:	83 c4 10             	add    $0x10,%esp
c1007172:	85 c0                	test   %eax,%eax
c1007174:	74 17                	je     c100718d <sys_stat+0x4e>
c1007176:	83 ec 08             	sub    $0x8,%esp
c1007179:	68 20 a9 00 c1       	push   $0xc100a920
c100717e:	ff 75 08             	pushl  0x8(%ebp)
c1007181:	e8 fd 8f ff ff       	call   c1000183 <strcmp>
c1007186:	83 c4 10             	add    $0x10,%esp
c1007189:	85 c0                	test   %eax,%eax
c100718b:	75 2b                	jne    c10071b8 <sys_stat+0x79>
c100718d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007190:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
c1007197:	8b 45 0c             	mov    0xc(%ebp),%eax
c100719a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10071a0:	a1 40 32 a1 c1       	mov    0xc1a13240,%eax
c10071a5:	8b 50 04             	mov    0x4(%eax),%edx
c10071a8:	8b 45 0c             	mov    0xc(%ebp),%eax
c10071ab:	89 50 04             	mov    %edx,0x4(%eax)
c10071ae:	b8 00 00 00 00       	mov    $0x0,%eax
c10071b3:	e9 af 00 00 00       	jmp    c1007267 <sys_stat+0x128>
c10071b8:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10071bf:	83 ec 04             	sub    $0x4,%esp
c10071c2:	68 08 02 00 00       	push   $0x208
c10071c7:	6a 00                	push   $0x0
c10071c9:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10071cf:	50                   	push   %eax
c10071d0:	e8 d5 8e ff ff       	call   c10000aa <memset>
c10071d5:	83 c4 10             	add    $0x10,%esp
c10071d8:	83 ec 08             	sub    $0x8,%esp
c10071db:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10071e1:	50                   	push   %eax
c10071e2:	ff 75 08             	pushl  0x8(%ebp)
c10071e5:	e8 e0 e9 ff ff       	call   c1005bca <search_file>
c10071ea:	83 c4 10             	add    $0x10,%esp
c10071ed:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10071f0:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10071f4:	74 4c                	je     c1007242 <sys_stat+0x103>
c10071f6:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10071f9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10071fe:	83 ec 08             	sub    $0x8,%esp
c1007201:	52                   	push   %edx
c1007202:	50                   	push   %eax
c1007203:	e8 52 24 00 00       	call   c100965a <inode_open>
c1007208:	83 c4 10             	add    $0x10,%esp
c100720b:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100720e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007211:	8b 50 04             	mov    0x4(%eax),%edx
c1007214:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007217:	89 50 04             	mov    %edx,0x4(%eax)
c100721a:	83 ec 0c             	sub    $0xc,%esp
c100721d:	ff 75 ec             	pushl  -0x14(%ebp)
c1007220:	e8 0b 25 00 00       	call   c1009730 <inode_close>
c1007225:	83 c4 10             	add    $0x10,%esp
c1007228:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100722b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100722e:	89 50 08             	mov    %edx,0x8(%eax)
c1007231:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007234:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007237:	89 10                	mov    %edx,(%eax)
c1007239:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007240:	eb 13                	jmp    c1007255 <sys_stat+0x116>
c1007242:	83 ec 08             	sub    $0x8,%esp
c1007245:	ff 75 08             	pushl  0x8(%ebp)
c1007248:	68 0a af 00 c1       	push   $0xc100af0a
c100724d:	e8 61 d5 ff ff       	call   c10047b3 <printk>
c1007252:	83 c4 10             	add    $0x10,%esp
c1007255:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007258:	83 ec 0c             	sub    $0xc,%esp
c100725b:	50                   	push   %eax
c100725c:	e8 ab 03 00 00       	call   c100760c <dir_close>
c1007261:	83 c4 10             	add    $0x10,%esp
c1007264:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007267:	c9                   	leave  
c1007268:	c3                   	ret    

c1007269 <sys_chdir>:
c1007269:	55                   	push   %ebp
c100726a:	89 e5                	mov    %esp,%ebp
c100726c:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1007272:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007279:	83 ec 04             	sub    $0x4,%esp
c100727c:	68 08 02 00 00       	push   $0x208
c1007281:	6a 00                	push   $0x0
c1007283:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007289:	50                   	push   %eax
c100728a:	e8 1b 8e ff ff       	call   c10000aa <memset>
c100728f:	83 c4 10             	add    $0x10,%esp
c1007292:	83 ec 08             	sub    $0x8,%esp
c1007295:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c100729b:	50                   	push   %eax
c100729c:	ff 75 08             	pushl  0x8(%ebp)
c100729f:	e8 26 e9 ff ff       	call   c1005bca <search_file>
c10072a4:	83 c4 10             	add    $0x10,%esp
c10072a7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10072aa:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10072ae:	74 32                	je     c10072e2 <sys_chdir+0x79>
c10072b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10072b3:	83 f8 02             	cmp    $0x2,%eax
c10072b6:	75 17                	jne    c10072cf <sys_chdir+0x66>
c10072b8:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10072bd:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10072c0:	89 90 04 10 00 00    	mov    %edx,0x1004(%eax)
c10072c6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10072cd:	eb 13                	jmp    c10072e2 <sys_chdir+0x79>
c10072cf:	83 ec 08             	sub    $0x8,%esp
c10072d2:	ff 75 08             	pushl  0x8(%ebp)
c10072d5:	68 24 af 00 c1       	push   $0xc100af24
c10072da:	e8 d4 d4 ff ff       	call   c10047b3 <printk>
c10072df:	83 c4 10             	add    $0x10,%esp
c10072e2:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10072e5:	83 ec 0c             	sub    $0xc,%esp
c10072e8:	50                   	push   %eax
c10072e9:	e8 1e 03 00 00       	call   c100760c <dir_close>
c10072ee:	83 c4 10             	add    $0x10,%esp
c10072f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10072f4:	c9                   	leave  
c10072f5:	c3                   	ret    

c10072f6 <test_fs>:
c10072f6:	55                   	push   %ebp
c10072f7:	89 e5                	mov    %esp,%ebp
c10072f9:	83 ec 18             	sub    $0x18,%esp
c10072fc:	e8 20 e5 ff ff       	call   c1005821 <mount_partition>
c1007301:	83 ec 08             	sub    $0x8,%esp
c1007304:	8d 45 ec             	lea    -0x14(%ebp),%eax
c1007307:	50                   	push   %eax
c1007308:	68 1b a9 00 c1       	push   $0xc100a91b
c100730d:	e8 2d fe ff ff       	call   c100713f <sys_stat>
c1007312:	83 c4 10             	add    $0x10,%esp
c1007315:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007318:	83 f8 02             	cmp    $0x2,%eax
c100731b:	75 07                	jne    c1007324 <test_fs+0x2e>
c100731d:	b9 4d af 00 c1       	mov    $0xc100af4d,%ecx
c1007322:	eb 05                	jmp    c1007329 <test_fs+0x33>
c1007324:	b9 57 af 00 c1       	mov    $0xc100af57,%ecx
c1007329:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100732c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100732f:	51                   	push   %ecx
c1007330:	52                   	push   %edx
c1007331:	50                   	push   %eax
c1007332:	68 60 af 00 c1       	push   $0xc100af60
c1007337:	e8 77 d4 ff ff       	call   c10047b3 <printk>
c100733c:	83 c4 10             	add    $0x10,%esp
c100733f:	83 ec 08             	sub    $0x8,%esp
c1007342:	8d 45 ec             	lea    -0x14(%ebp),%eax
c1007345:	50                   	push   %eax
c1007346:	68 93 af 00 c1       	push   $0xc100af93
c100734b:	e8 ef fd ff ff       	call   c100713f <sys_stat>
c1007350:	83 c4 10             	add    $0x10,%esp
c1007353:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007356:	83 f8 02             	cmp    $0x2,%eax
c1007359:	75 07                	jne    c1007362 <test_fs+0x6c>
c100735b:	b9 4d af 00 c1       	mov    $0xc100af4d,%ecx
c1007360:	eb 05                	jmp    c1007367 <test_fs+0x71>
c1007362:	b9 57 af 00 c1       	mov    $0xc100af57,%ecx
c1007367:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100736a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100736d:	51                   	push   %ecx
c100736e:	52                   	push   %edx
c100736f:	50                   	push   %eax
c1007370:	68 9c af 00 c1       	push   $0xc100af9c
c1007375:	e8 39 d4 ff ff       	call   c10047b3 <printk>
c100737a:	83 c4 10             	add    $0x10,%esp
c100737d:	90                   	nop
c100737e:	c9                   	leave  
c100737f:	c3                   	ret    

c1007380 <open_root_dir>:
c1007380:	55                   	push   %ebp
c1007381:	89 e5                	mov    %esp,%ebp
c1007383:	83 ec 08             	sub    $0x8,%esp
c1007386:	8b 45 08             	mov    0x8(%ebp),%eax
c1007389:	8b 40 10             	mov    0x10(%eax),%eax
c100738c:	8b 40 2c             	mov    0x2c(%eax),%eax
c100738f:	83 ec 08             	sub    $0x8,%esp
c1007392:	50                   	push   %eax
c1007393:	68 84 b0 00 c1       	push   $0xc100b084
c1007398:	e8 16 d4 ff ff       	call   c10047b3 <printk>
c100739d:	83 c4 10             	add    $0x10,%esp
c10073a0:	8b 45 08             	mov    0x8(%ebp),%eax
c10073a3:	8b 40 10             	mov    0x10(%eax),%eax
c10073a6:	8b 40 2c             	mov    0x2c(%eax),%eax
c10073a9:	83 ec 08             	sub    $0x8,%esp
c10073ac:	50                   	push   %eax
c10073ad:	ff 75 08             	pushl  0x8(%ebp)
c10073b0:	e8 a5 22 00 00       	call   c100965a <inode_open>
c10073b5:	83 c4 10             	add    $0x10,%esp
c10073b8:	a3 40 32 a1 c1       	mov    %eax,0xc1a13240
c10073bd:	a1 40 32 a1 c1       	mov    0xc1a13240,%eax
c10073c2:	83 ec 08             	sub    $0x8,%esp
c10073c5:	50                   	push   %eax
c10073c6:	68 98 b0 00 c1       	push   $0xc100b098
c10073cb:	e8 e3 d3 ff ff       	call   c10047b3 <printk>
c10073d0:	83 c4 10             	add    $0x10,%esp
c10073d3:	c7 05 44 32 a1 c1 00 	movl   $0x0,0xc1a13244
c10073da:	00 00 00 
c10073dd:	90                   	nop
c10073de:	c9                   	leave  
c10073df:	c3                   	ret    

c10073e0 <dir_open>:
c10073e0:	55                   	push   %ebp
c10073e1:	89 e5                	mov    %esp,%ebp
c10073e3:	83 ec 18             	sub    $0x18,%esp
c10073e6:	83 ec 08             	sub    $0x8,%esp
c10073e9:	6a 01                	push   $0x1
c10073eb:	68 08 02 00 00       	push   $0x208
c10073f0:	e8 4e b7 ff ff       	call   c1002b43 <vmm_malloc>
c10073f5:	83 c4 10             	add    $0x10,%esp
c10073f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10073fb:	83 ec 08             	sub    $0x8,%esp
c10073fe:	ff 75 0c             	pushl  0xc(%ebp)
c1007401:	ff 75 08             	pushl  0x8(%ebp)
c1007404:	e8 51 22 00 00       	call   c100965a <inode_open>
c1007409:	83 c4 10             	add    $0x10,%esp
c100740c:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100740f:	89 02                	mov    %eax,(%edx)
c1007411:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007414:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100741b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100741e:	c9                   	leave  
c100741f:	c3                   	ret    

c1007420 <search_dir_entry>:
c1007420:	55                   	push   %ebp
c1007421:	89 e5                	mov    %esp,%ebp
c1007423:	83 ec 28             	sub    $0x28,%esp
c1007426:	c7 45 e8 8c 00 00 00 	movl   $0x8c,-0x18(%ebp)
c100742d:	83 ec 08             	sub    $0x8,%esp
c1007430:	6a 01                	push   $0x1
c1007432:	68 30 02 00 00       	push   $0x230
c1007437:	e8 07 b7 ff ff       	call   c1002b43 <vmm_malloc>
c100743c:	83 c4 10             	add    $0x10,%esp
c100743f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007442:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c1007446:	75 1a                	jne    c1007462 <search_dir_entry+0x42>
c1007448:	83 ec 0c             	sub    $0xc,%esp
c100744b:	68 b0 b0 00 c1       	push   $0xc100b0b0
c1007450:	e8 5e d3 ff ff       	call   c10047b3 <printk>
c1007455:	83 c4 10             	add    $0x10,%esp
c1007458:	b8 00 00 00 00       	mov    $0x0,%eax
c100745d:	e9 a8 01 00 00       	jmp    c100760a <search_dir_entry+0x1ea>
c1007462:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007469:	eb 23                	jmp    c100748e <search_dir_entry+0x6e>
c100746b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100746e:	8b 00                	mov    (%eax),%eax
c1007470:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007473:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100747a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100747d:	01 ca                	add    %ecx,%edx
c100747f:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c1007482:	83 c1 04             	add    $0x4,%ecx
c1007485:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1007488:	89 02                	mov    %eax,(%edx)
c100748a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100748e:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1007492:	76 d7                	jbe    c100746b <search_dir_entry+0x4b>
c1007494:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100749b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100749e:	8b 00                	mov    (%eax),%eax
c10074a0:	8b 40 40             	mov    0x40(%eax),%eax
c10074a3:	85 c0                	test   %eax,%eax
c10074a5:	74 1d                	je     c10074c4 <search_dir_entry+0xa4>
c10074a7:	8b 45 0c             	mov    0xc(%ebp),%eax
c10074aa:	8b 00                	mov    (%eax),%eax
c10074ac:	8b 40 40             	mov    0x40(%eax),%eax
c10074af:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10074b2:	83 c2 30             	add    $0x30,%edx
c10074b5:	83 ec 04             	sub    $0x4,%esp
c10074b8:	6a 01                	push   $0x1
c10074ba:	50                   	push   %eax
c10074bb:	52                   	push   %edx
c10074bc:	e8 35 dc ff ff       	call   c10050f6 <ide_read>
c10074c1:	83 c4 10             	add    $0x10,%esp
c10074c4:	83 ec 08             	sub    $0x8,%esp
c10074c7:	6a 01                	push   $0x1
c10074c9:	68 00 02 00 00       	push   $0x200
c10074ce:	e8 70 b6 ff ff       	call   c1002b43 <vmm_malloc>
c10074d3:	83 c4 10             	add    $0x10,%esp
c10074d6:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10074d9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10074dc:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10074df:	8b 45 08             	mov    0x8(%ebp),%eax
c10074e2:	8b 40 10             	mov    0x10(%eax),%eax
c10074e5:	8b 40 30             	mov    0x30(%eax),%eax
c10074e8:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10074eb:	b8 00 02 00 00       	mov    $0x200,%eax
c10074f0:	ba 00 00 00 00       	mov    $0x0,%edx
c10074f5:	f7 75 dc             	divl   -0x24(%ebp)
c10074f8:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10074fb:	e9 d1 00 00 00       	jmp    c10075d1 <search_dir_entry+0x1b1>
c1007500:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007503:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100750a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100750d:	01 d0                	add    %edx,%eax
c100750f:	8b 00                	mov    (%eax),%eax
c1007511:	85 c0                	test   %eax,%eax
c1007513:	75 09                	jne    c100751e <search_dir_entry+0xfe>
c1007515:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007519:	e9 b3 00 00 00       	jmp    c10075d1 <search_dir_entry+0x1b1>
c100751e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007521:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1007528:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100752b:	01 d0                	add    %edx,%eax
c100752d:	8b 00                	mov    (%eax),%eax
c100752f:	83 ec 04             	sub    $0x4,%esp
c1007532:	6a 01                	push   $0x1
c1007534:	50                   	push   %eax
c1007535:	ff 75 e0             	pushl  -0x20(%ebp)
c1007538:	e8 b9 db ff ff       	call   c10050f6 <ide_read>
c100753d:	83 c4 10             	add    $0x10,%esp
c1007540:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007547:	eb 61                	jmp    c10075aa <search_dir_entry+0x18a>
c1007549:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100754c:	83 ec 08             	sub    $0x8,%esp
c100754f:	ff 75 10             	pushl  0x10(%ebp)
c1007552:	50                   	push   %eax
c1007553:	e8 2b 8c ff ff       	call   c1000183 <strcmp>
c1007558:	83 c4 10             	add    $0x10,%esp
c100755b:	85 c0                	test   %eax,%eax
c100755d:	75 43                	jne    c10075a2 <search_dir_entry+0x182>
c100755f:	83 ec 04             	sub    $0x4,%esp
c1007562:	ff 75 dc             	pushl  -0x24(%ebp)
c1007565:	ff 75 f0             	pushl  -0x10(%ebp)
c1007568:	ff 75 14             	pushl  0x14(%ebp)
c100756b:	e8 98 8b ff ff       	call   c1000108 <memcpy>
c1007570:	83 c4 10             	add    $0x10,%esp
c1007573:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007576:	83 ec 08             	sub    $0x8,%esp
c1007579:	68 00 02 00 00       	push   $0x200
c100757e:	50                   	push   %eax
c100757f:	e8 df b6 ff ff       	call   c1002c63 <vmm_free>
c1007584:	83 c4 10             	add    $0x10,%esp
c1007587:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100758a:	83 ec 08             	sub    $0x8,%esp
c100758d:	68 30 02 00 00       	push   $0x230
c1007592:	50                   	push   %eax
c1007593:	e8 cb b6 ff ff       	call   c1002c63 <vmm_free>
c1007598:	83 c4 10             	add    $0x10,%esp
c100759b:	b8 01 00 00 00       	mov    $0x1,%eax
c10075a0:	eb 68                	jmp    c100760a <search_dir_entry+0x1ea>
c10075a2:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10075a6:	83 45 f0 18          	addl   $0x18,-0x10(%ebp)
c10075aa:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10075ad:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c10075b0:	72 97                	jb     c1007549 <search_dir_entry+0x129>
c10075b2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10075b6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10075b9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10075bc:	83 ec 04             	sub    $0x4,%esp
c10075bf:	68 00 02 00 00       	push   $0x200
c10075c4:	6a 00                	push   $0x0
c10075c6:	ff 75 e0             	pushl  -0x20(%ebp)
c10075c9:	e8 dc 8a ff ff       	call   c10000aa <memset>
c10075ce:	83 c4 10             	add    $0x10,%esp
c10075d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10075d4:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c10075d7:	0f 82 23 ff ff ff    	jb     c1007500 <search_dir_entry+0xe0>
c10075dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10075e0:	83 ec 08             	sub    $0x8,%esp
c10075e3:	68 00 02 00 00       	push   $0x200
c10075e8:	50                   	push   %eax
c10075e9:	e8 75 b6 ff ff       	call   c1002c63 <vmm_free>
c10075ee:	83 c4 10             	add    $0x10,%esp
c10075f1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10075f4:	83 ec 08             	sub    $0x8,%esp
c10075f7:	68 30 02 00 00       	push   $0x230
c10075fc:	50                   	push   %eax
c10075fd:	e8 61 b6 ff ff       	call   c1002c63 <vmm_free>
c1007602:	83 c4 10             	add    $0x10,%esp
c1007605:	b8 00 00 00 00       	mov    $0x0,%eax
c100760a:	c9                   	leave  
c100760b:	c3                   	ret    

c100760c <dir_close>:
c100760c:	55                   	push   %ebp
c100760d:	89 e5                	mov    %esp,%ebp
c100760f:	83 ec 08             	sub    $0x8,%esp
c1007612:	81 7d 08 40 32 a1 c1 	cmpl   $0xc1a13240,0x8(%ebp)
c1007619:	74 27                	je     c1007642 <dir_close+0x36>
c100761b:	8b 45 08             	mov    0x8(%ebp),%eax
c100761e:	8b 00                	mov    (%eax),%eax
c1007620:	83 ec 0c             	sub    $0xc,%esp
c1007623:	50                   	push   %eax
c1007624:	e8 07 21 00 00       	call   c1009730 <inode_close>
c1007629:	83 c4 10             	add    $0x10,%esp
c100762c:	8b 45 08             	mov    0x8(%ebp),%eax
c100762f:	83 ec 08             	sub    $0x8,%esp
c1007632:	68 08 02 00 00       	push   $0x208
c1007637:	50                   	push   %eax
c1007638:	e8 26 b6 ff ff       	call   c1002c63 <vmm_free>
c100763d:	83 c4 10             	add    $0x10,%esp
c1007640:	eb 01                	jmp    c1007643 <dir_close+0x37>
c1007642:	90                   	nop
c1007643:	c9                   	leave  
c1007644:	c3                   	ret    

c1007645 <create_dir_entry>:
c1007645:	55                   	push   %ebp
c1007646:	89 e5                	mov    %esp,%ebp
c1007648:	83 ec 18             	sub    $0x18,%esp
c100764b:	8b 45 10             	mov    0x10(%ebp),%eax
c100764e:	88 45 f4             	mov    %al,-0xc(%ebp)
c1007651:	83 ec 0c             	sub    $0xc,%esp
c1007654:	ff 75 08             	pushl  0x8(%ebp)
c1007657:	e8 c2 8a ff ff       	call   c100011e <strlen>
c100765c:	83 c4 10             	add    $0x10,%esp
c100765f:	83 f8 10             	cmp    $0x10,%eax
c1007662:	76 16                	jbe    c100767a <create_dir_entry+0x35>
c1007664:	68 e4 b0 00 c1       	push   $0xc100b0e4
c1007669:	68 98 b2 00 c1       	push   $0xc100b298
c100766e:	6a 71                	push   $0x71
c1007670:	68 0c b1 00 c1       	push   $0xc100b10c
c1007675:	e8 93 8c ff ff       	call   c100030d <__PANIC>
c100767a:	83 ec 0c             	sub    $0xc,%esp
c100767d:	ff 75 08             	pushl  0x8(%ebp)
c1007680:	e8 99 8a ff ff       	call   c100011e <strlen>
c1007685:	83 c4 10             	add    $0x10,%esp
c1007688:	8b 55 14             	mov    0x14(%ebp),%edx
c100768b:	83 ec 04             	sub    $0x4,%esp
c100768e:	50                   	push   %eax
c100768f:	ff 75 08             	pushl  0x8(%ebp)
c1007692:	52                   	push   %edx
c1007693:	e8 70 8a ff ff       	call   c1000108 <memcpy>
c1007698:	83 c4 10             	add    $0x10,%esp
c100769b:	8b 45 14             	mov    0x14(%ebp),%eax
c100769e:	8b 55 0c             	mov    0xc(%ebp),%edx
c10076a1:	89 50 10             	mov    %edx,0x10(%eax)
c10076a4:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
c10076a8:	8b 45 14             	mov    0x14(%ebp),%eax
c10076ab:	89 50 14             	mov    %edx,0x14(%eax)
c10076ae:	90                   	nop
c10076af:	c9                   	leave  
c10076b0:	c3                   	ret    

c10076b1 <sync_dir_entry>:
c10076b1:	55                   	push   %ebp
c10076b2:	89 e5                	mov    %esp,%ebp
c10076b4:	57                   	push   %edi
c10076b5:	53                   	push   %ebx
c10076b6:	81 ec 60 02 00 00    	sub    $0x260,%esp
c10076bc:	8b 45 08             	mov    0x8(%ebp),%eax
c10076bf:	8b 00                	mov    (%eax),%eax
c10076c1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10076c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10076c7:	8b 40 04             	mov    0x4(%eax),%eax
c10076ca:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10076cd:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10076d2:	8b 40 10             	mov    0x10(%eax),%eax
c10076d5:	8b 40 30             	mov    0x30(%eax),%eax
c10076d8:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10076db:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10076de:	ba 00 00 00 00       	mov    $0x0,%edx
c10076e3:	f7 75 e8             	divl   -0x18(%ebp)
c10076e6:	89 d0                	mov    %edx,%eax
c10076e8:	85 c0                	test   %eax,%eax
c10076ea:	74 16                	je     c1007702 <sync_dir_entry+0x51>
c10076ec:	68 3c b1 00 c1       	push   $0xc100b13c
c10076f1:	68 ac b2 00 c1       	push   $0xc100b2ac
c10076f6:	6a 7f                	push   $0x7f
c10076f8:	68 0c b1 00 c1       	push   $0xc100b10c
c10076fd:	e8 0b 8c ff ff       	call   c100030d <__PANIC>
c1007702:	b8 00 02 00 00       	mov    $0x200,%eax
c1007707:	ba 00 00 00 00       	mov    $0x0,%edx
c100770c:	f7 75 e8             	divl   -0x18(%ebp)
c100770f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007712:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1007719:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100771d:	8d 95 a0 fd ff ff    	lea    -0x260(%ebp),%edx
c1007723:	b8 00 00 00 00       	mov    $0x0,%eax
c1007728:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100772d:	89 d7                	mov    %edx,%edi
c100772f:	f3 ab                	rep stos %eax,%es:(%edi)
c1007731:	eb 22                	jmp    c1007755 <sync_dir_entry+0xa4>
c1007733:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007737:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100773b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100773e:	83 c1 04             	add    $0x4,%ecx
c1007741:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1007744:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c100774b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100774f:	83 c0 01             	add    $0x1,%eax
c1007752:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007755:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007759:	76 d8                	jbe    c1007733 <sync_dir_entry+0x82>
c100775b:	8b 45 10             	mov    0x10(%ebp),%eax
c100775e:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007761:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007768:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100776c:	e9 52 03 00 00       	jmp    c1007ac3 <sync_dir_entry+0x412>
c1007771:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007778:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100777c:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007783:	85 c0                	test   %eax,%eax
c1007785:	0f 85 80 02 00 00    	jne    c1007a0b <sync_dir_entry+0x35a>
c100778b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007790:	83 ec 0c             	sub    $0xc,%esp
c1007793:	50                   	push   %eax
c1007794:	e8 25 0c 00 00       	call   c10083be <block_bitmap_alloc>
c1007799:	83 c4 10             	add    $0x10,%esp
c100779c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100779f:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c10077a3:	75 1a                	jne    c10077bf <sync_dir_entry+0x10e>
c10077a5:	83 ec 0c             	sub    $0xc,%esp
c10077a8:	68 5c b1 00 c1       	push   $0xc100b15c
c10077ad:	e8 01 d0 ff ff       	call   c10047b3 <printk>
c10077b2:	83 c4 10             	add    $0x10,%esp
c10077b5:	b8 00 00 00 00       	mov    $0x0,%eax
c10077ba:	e9 23 03 00 00       	jmp    c1007ae2 <sync_dir_entry+0x431>
c10077bf:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10077c2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10077c7:	8b 40 10             	mov    0x10(%eax),%eax
c10077ca:	8b 40 28             	mov    0x28(%eax),%eax
c10077cd:	29 c2                	sub    %eax,%edx
c10077cf:	89 d0                	mov    %edx,%eax
c10077d1:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10077d4:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10077d8:	75 19                	jne    c10077f3 <sync_dir_entry+0x142>
c10077da:	68 8a b1 00 c1       	push   $0xc100b18a
c10077df:	68 ac b2 00 c1       	push   $0xc100b2ac
c10077e4:	68 a2 00 00 00       	push   $0xa2
c10077e9:	68 0c b1 00 c1       	push   $0xc100b10c
c10077ee:	e8 1a 8b ff ff       	call   c100030d <__PANIC>
c10077f3:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10077f6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10077fb:	83 ec 04             	sub    $0x4,%esp
c10077fe:	6a 01                	push   $0x1
c1007800:	52                   	push   %edx
c1007801:	50                   	push   %eax
c1007802:	e8 85 0c 00 00       	call   c100848c <bitmap_sync>
c1007807:	83 c4 10             	add    $0x10,%esp
c100780a:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007811:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007815:	77 27                	ja     c100783e <sync_dir_entry+0x18d>
c1007817:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100781b:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100781e:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1007825:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007829:	8b 94 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%edx
c1007830:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007833:	83 c1 04             	add    $0x4,%ecx
c1007836:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c1007839:	e9 6d 01 00 00       	jmp    c10079ab <sync_dir_entry+0x2fa>
c100783e:	80 7d f7 0c          	cmpb   $0xc,-0x9(%ebp)
c1007842:	0f 85 37 01 00 00    	jne    c100797f <sync_dir_entry+0x2ce>
c1007848:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100784b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100784e:	89 50 40             	mov    %edx,0x40(%eax)
c1007851:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1007858:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100785d:	83 ec 0c             	sub    $0xc,%esp
c1007860:	50                   	push   %eax
c1007861:	e8 58 0b 00 00       	call   c10083be <block_bitmap_alloc>
c1007866:	83 c4 10             	add    $0x10,%esp
c1007869:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100786c:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c1007870:	0f 85 95 00 00 00    	jne    c100790b <sync_dir_entry+0x25a>
c1007876:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007879:	8b 50 40             	mov    0x40(%eax),%edx
c100787c:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007881:	8b 40 10             	mov    0x10(%eax),%eax
c1007884:	8b 40 28             	mov    0x28(%eax),%eax
c1007887:	29 c2                	sub    %eax,%edx
c1007889:	89 d0                	mov    %edx,%eax
c100788b:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100788e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007891:	8d 50 07             	lea    0x7(%eax),%edx
c1007894:	85 c0                	test   %eax,%eax
c1007896:	0f 48 c2             	cmovs  %edx,%eax
c1007899:	c1 f8 03             	sar    $0x3,%eax
c100789c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100789f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10078a2:	99                   	cltd   
c10078a3:	c1 ea 1d             	shr    $0x1d,%edx
c10078a6:	01 d0                	add    %edx,%eax
c10078a8:	83 e0 07             	and    $0x7,%eax
c10078ab:	29 d0                	sub    %edx,%eax
c10078ad:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10078b0:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10078b5:	8b 50 18             	mov    0x18(%eax),%edx
c10078b8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10078bb:	01 d0                	add    %edx,%eax
c10078bd:	0f b6 00             	movzbl (%eax),%eax
c10078c0:	89 c2                	mov    %eax,%edx
c10078c2:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10078c5:	bb 01 00 00 00       	mov    $0x1,%ebx
c10078ca:	89 c1                	mov    %eax,%ecx
c10078cc:	d3 e3                	shl    %cl,%ebx
c10078ce:	89 d8                	mov    %ebx,%eax
c10078d0:	f7 d0                	not    %eax
c10078d2:	89 d1                	mov    %edx,%ecx
c10078d4:	21 c1                	and    %eax,%ecx
c10078d6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10078db:	8b 50 18             	mov    0x18(%eax),%edx
c10078de:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10078e1:	01 d0                	add    %edx,%eax
c10078e3:	89 ca                	mov    %ecx,%edx
c10078e5:	88 10                	mov    %dl,(%eax)
c10078e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10078ea:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c10078f1:	83 ec 0c             	sub    $0xc,%esp
c10078f4:	68 5c b1 00 c1       	push   $0xc100b15c
c10078f9:	e8 b5 ce ff ff       	call   c10047b3 <printk>
c10078fe:	83 c4 10             	add    $0x10,%esp
c1007901:	b8 00 00 00 00       	mov    $0x0,%eax
c1007906:	e9 d7 01 00 00       	jmp    c1007ae2 <sync_dir_entry+0x431>
c100790b:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100790e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007913:	8b 40 10             	mov    0x10(%eax),%eax
c1007916:	8b 40 28             	mov    0x28(%eax),%eax
c1007919:	29 c2                	sub    %eax,%edx
c100791b:	89 d0                	mov    %edx,%eax
c100791d:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007920:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1007924:	75 19                	jne    c100793f <sync_dir_entry+0x28e>
c1007926:	68 8a b1 00 c1       	push   $0xc100b18a
c100792b:	68 ac b2 00 c1       	push   $0xc100b2ac
c1007930:	68 b9 00 00 00       	push   $0xb9
c1007935:	68 0c b1 00 c1       	push   $0xc100b10c
c100793a:	e8 ce 89 ff ff       	call   c100030d <__PANIC>
c100793f:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1007942:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007947:	83 ec 04             	sub    $0x4,%esp
c100794a:	6a 01                	push   $0x1
c100794c:	52                   	push   %edx
c100794d:	50                   	push   %eax
c100794e:	e8 39 0b 00 00       	call   c100848c <bitmap_sync>
c1007953:	83 c4 10             	add    $0x10,%esp
c1007956:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007959:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c100795f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007962:	8b 50 40             	mov    0x40(%eax),%edx
c1007965:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c100796b:	83 c0 30             	add    $0x30,%eax
c100796e:	83 ec 04             	sub    $0x4,%esp
c1007971:	6a 01                	push   $0x1
c1007973:	52                   	push   %edx
c1007974:	50                   	push   %eax
c1007975:	e8 b9 d7 ff ff       	call   c1005133 <ide_write>
c100797a:	83 c4 10             	add    $0x10,%esp
c100797d:	eb 2c                	jmp    c10079ab <sync_dir_entry+0x2fa>
c100797f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007983:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007986:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c100798d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007990:	8b 50 40             	mov    0x40(%eax),%edx
c1007993:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c1007999:	83 c0 30             	add    $0x30,%eax
c100799c:	83 ec 04             	sub    $0x4,%esp
c100799f:	6a 01                	push   $0x1
c10079a1:	52                   	push   %edx
c10079a2:	50                   	push   %eax
c10079a3:	e8 8b d7 ff ff       	call   c1005133 <ide_write>
c10079a8:	83 c4 10             	add    $0x10,%esp
c10079ab:	83 ec 04             	sub    $0x4,%esp
c10079ae:	68 00 02 00 00       	push   $0x200
c10079b3:	6a 00                	push   $0x0
c10079b5:	ff 75 10             	pushl  0x10(%ebp)
c10079b8:	e8 ed 86 ff ff       	call   c10000aa <memset>
c10079bd:	83 c4 10             	add    $0x10,%esp
c10079c0:	83 ec 04             	sub    $0x4,%esp
c10079c3:	ff 75 e8             	pushl  -0x18(%ebp)
c10079c6:	ff 75 0c             	pushl  0xc(%ebp)
c10079c9:	ff 75 10             	pushl  0x10(%ebp)
c10079cc:	e8 37 87 ff ff       	call   c1000108 <memcpy>
c10079d1:	83 c4 10             	add    $0x10,%esp
c10079d4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10079d8:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c10079df:	83 ec 04             	sub    $0x4,%esp
c10079e2:	6a 01                	push   $0x1
c10079e4:	50                   	push   %eax
c10079e5:	ff 75 10             	pushl  0x10(%ebp)
c10079e8:	e8 46 d7 ff ff       	call   c1005133 <ide_write>
c10079ed:	83 c4 10             	add    $0x10,%esp
c10079f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10079f3:	8b 50 04             	mov    0x4(%eax),%edx
c10079f6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10079f9:	01 c2                	add    %eax,%edx
c10079fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10079fe:	89 50 04             	mov    %edx,0x4(%eax)
c1007a01:	b8 01 00 00 00       	mov    $0x1,%eax
c1007a06:	e9 d7 00 00 00       	jmp    c1007ae2 <sync_dir_entry+0x431>
c1007a0b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007a0f:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007a16:	83 ec 04             	sub    $0x4,%esp
c1007a19:	6a 01                	push   $0x1
c1007a1b:	50                   	push   %eax
c1007a1c:	ff 75 10             	pushl  0x10(%ebp)
c1007a1f:	e8 d2 d6 ff ff       	call   c10050f6 <ide_read>
c1007a24:	83 c4 10             	add    $0x10,%esp
c1007a27:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c1007a2b:	eb 7f                	jmp    c1007aac <sync_dir_entry+0x3fb>
c1007a2d:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1007a31:	89 d0                	mov    %edx,%eax
c1007a33:	01 c0                	add    %eax,%eax
c1007a35:	01 d0                	add    %edx,%eax
c1007a37:	c1 e0 03             	shl    $0x3,%eax
c1007a3a:	89 c2                	mov    %eax,%edx
c1007a3c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1007a3f:	01 d0                	add    %edx,%eax
c1007a41:	8b 40 14             	mov    0x14(%eax),%eax
c1007a44:	85 c0                	test   %eax,%eax
c1007a46:	75 5a                	jne    c1007aa2 <sync_dir_entry+0x3f1>
c1007a48:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1007a4c:	89 d0                	mov    %edx,%eax
c1007a4e:	01 c0                	add    %eax,%eax
c1007a50:	01 d0                	add    %edx,%eax
c1007a52:	c1 e0 03             	shl    $0x3,%eax
c1007a55:	89 c2                	mov    %eax,%edx
c1007a57:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1007a5a:	01 d0                	add    %edx,%eax
c1007a5c:	83 ec 04             	sub    $0x4,%esp
c1007a5f:	ff 75 e8             	pushl  -0x18(%ebp)
c1007a62:	ff 75 0c             	pushl  0xc(%ebp)
c1007a65:	50                   	push   %eax
c1007a66:	e8 9d 86 ff ff       	call   c1000108 <memcpy>
c1007a6b:	83 c4 10             	add    $0x10,%esp
c1007a6e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007a72:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007a79:	83 ec 04             	sub    $0x4,%esp
c1007a7c:	6a 01                	push   $0x1
c1007a7e:	50                   	push   %eax
c1007a7f:	ff 75 10             	pushl  0x10(%ebp)
c1007a82:	e8 ac d6 ff ff       	call   c1005133 <ide_write>
c1007a87:	83 c4 10             	add    $0x10,%esp
c1007a8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007a8d:	8b 50 04             	mov    0x4(%eax),%edx
c1007a90:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007a93:	01 c2                	add    %eax,%edx
c1007a95:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007a98:	89 50 04             	mov    %edx,0x4(%eax)
c1007a9b:	b8 01 00 00 00       	mov    $0x1,%eax
c1007aa0:	eb 40                	jmp    c1007ae2 <sync_dir_entry+0x431>
c1007aa2:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1007aa6:	83 c0 01             	add    $0x1,%eax
c1007aa9:	88 45 f6             	mov    %al,-0xa(%ebp)
c1007aac:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1007ab0:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1007ab3:	0f 87 74 ff ff ff    	ja     c1007a2d <sync_dir_entry+0x37c>
c1007ab9:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007abd:	83 c0 01             	add    $0x1,%eax
c1007ac0:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007ac3:	80 7d f7 8b          	cmpb   $0x8b,-0x9(%ebp)
c1007ac7:	0f 86 a4 fc ff ff    	jbe    c1007771 <sync_dir_entry+0xc0>
c1007acd:	83 ec 0c             	sub    $0xc,%esp
c1007ad0:	68 a1 b1 00 c1       	push   $0xc100b1a1
c1007ad5:	e8 d9 cc ff ff       	call   c10047b3 <printk>
c1007ada:	83 c4 10             	add    $0x10,%esp
c1007add:	b8 00 00 00 00       	mov    $0x0,%eax
c1007ae2:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1007ae5:	5b                   	pop    %ebx
c1007ae6:	5f                   	pop    %edi
c1007ae7:	5d                   	pop    %ebp
c1007ae8:	c3                   	ret    

c1007ae9 <delete_dir_entry>:
c1007ae9:	55                   	push   %ebp
c1007aea:	89 e5                	mov    %esp,%ebp
c1007aec:	57                   	push   %edi
c1007aed:	53                   	push   %ebx
c1007aee:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1007af4:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007af7:	8b 00                	mov    (%eax),%eax
c1007af9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007afc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007b03:	8d 95 98 fd ff ff    	lea    -0x268(%ebp),%edx
c1007b09:	b8 00 00 00 00       	mov    $0x0,%eax
c1007b0e:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007b13:	89 d7                	mov    %edx,%edi
c1007b15:	f3 ab                	rep stos %eax,%es:(%edi)
c1007b17:	eb 1a                	jmp    c1007b33 <delete_dir_entry+0x4a>
c1007b19:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007b1c:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007b1f:	83 c2 04             	add    $0x4,%edx
c1007b22:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1007b25:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007b28:	89 94 85 98 fd ff ff 	mov    %edx,-0x268(%ebp,%eax,4)
c1007b2f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007b33:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1007b37:	76 e0                	jbe    c1007b19 <delete_dir_entry+0x30>
c1007b39:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007b3c:	8b 40 40             	mov    0x40(%eax),%eax
c1007b3f:	85 c0                	test   %eax,%eax
c1007b41:	74 1e                	je     c1007b61 <delete_dir_entry+0x78>
c1007b43:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007b46:	8b 50 40             	mov    0x40(%eax),%edx
c1007b49:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1007b4f:	83 c0 30             	add    $0x30,%eax
c1007b52:	83 ec 04             	sub    $0x4,%esp
c1007b55:	6a 01                	push   $0x1
c1007b57:	52                   	push   %edx
c1007b58:	50                   	push   %eax
c1007b59:	e8 98 d5 ff ff       	call   c10050f6 <ide_read>
c1007b5e:	83 c4 10             	add    $0x10,%esp
c1007b61:	8b 45 08             	mov    0x8(%ebp),%eax
c1007b64:	8b 40 10             	mov    0x10(%eax),%eax
c1007b67:	8b 40 30             	mov    0x30(%eax),%eax
c1007b6a:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007b6d:	b8 00 02 00 00       	mov    $0x200,%eax
c1007b72:	ba 00 00 00 00       	mov    $0x0,%edx
c1007b77:	f7 75 e0             	divl   -0x20(%ebp)
c1007b7a:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007b7d:	8b 45 14             	mov    0x14(%ebp),%eax
c1007b80:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007b83:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1007b8a:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1007b8e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007b95:	e9 d8 03 00 00       	jmp    c1007f72 <delete_dir_entry+0x489>
c1007b9a:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1007b9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007ba1:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007ba8:	85 c0                	test   %eax,%eax
c1007baa:	75 09                	jne    c1007bb5 <delete_dir_entry+0xcc>
c1007bac:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007bb0:	e9 bd 03 00 00       	jmp    c1007f72 <delete_dir_entry+0x489>
c1007bb5:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
c1007bb9:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1007bbd:	88 45 ef             	mov    %al,-0x11(%ebp)
c1007bc0:	83 ec 04             	sub    $0x4,%esp
c1007bc3:	68 00 02 00 00       	push   $0x200
c1007bc8:	6a 00                	push   $0x0
c1007bca:	ff 75 14             	pushl  0x14(%ebp)
c1007bcd:	e8 d8 84 ff ff       	call   c10000aa <memset>
c1007bd2:	83 c4 10             	add    $0x10,%esp
c1007bd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007bd8:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007bdf:	83 ec 04             	sub    $0x4,%esp
c1007be2:	6a 01                	push   $0x1
c1007be4:	50                   	push   %eax
c1007be5:	ff 75 14             	pushl  0x14(%ebp)
c1007be8:	e8 09 d5 ff ff       	call   c10050f6 <ide_read>
c1007bed:	83 c4 10             	add    $0x10,%esp
c1007bf0:	e9 0d 01 00 00       	jmp    c1007d02 <delete_dir_entry+0x219>
c1007bf5:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007bf9:	89 d0                	mov    %edx,%eax
c1007bfb:	01 c0                	add    %eax,%eax
c1007bfd:	01 d0                	add    %edx,%eax
c1007bff:	c1 e0 03             	shl    $0x3,%eax
c1007c02:	89 c2                	mov    %eax,%edx
c1007c04:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007c07:	01 d0                	add    %edx,%eax
c1007c09:	8b 40 14             	mov    0x14(%eax),%eax
c1007c0c:	85 c0                	test   %eax,%eax
c1007c0e:	0f 84 e4 00 00 00    	je     c1007cf8 <delete_dir_entry+0x20f>
c1007c14:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007c18:	89 d0                	mov    %edx,%eax
c1007c1a:	01 c0                	add    %eax,%eax
c1007c1c:	01 d0                	add    %edx,%eax
c1007c1e:	c1 e0 03             	shl    $0x3,%eax
c1007c21:	89 c2                	mov    %eax,%edx
c1007c23:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007c26:	01 d0                	add    %edx,%eax
c1007c28:	83 ec 08             	sub    $0x8,%esp
c1007c2b:	68 b5 b1 00 c1       	push   $0xc100b1b5
c1007c30:	50                   	push   %eax
c1007c31:	e8 4d 85 ff ff       	call   c1000183 <strcmp>
c1007c36:	83 c4 10             	add    $0x10,%esp
c1007c39:	85 c0                	test   %eax,%eax
c1007c3b:	75 09                	jne    c1007c46 <delete_dir_entry+0x15d>
c1007c3d:	c6 45 ed 01          	movb   $0x1,-0x13(%ebp)
c1007c41:	e9 b2 00 00 00       	jmp    c1007cf8 <delete_dir_entry+0x20f>
c1007c46:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007c4a:	89 d0                	mov    %edx,%eax
c1007c4c:	01 c0                	add    %eax,%eax
c1007c4e:	01 d0                	add    %edx,%eax
c1007c50:	c1 e0 03             	shl    $0x3,%eax
c1007c53:	89 c2                	mov    %eax,%edx
c1007c55:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007c58:	01 d0                	add    %edx,%eax
c1007c5a:	83 ec 08             	sub    $0x8,%esp
c1007c5d:	68 b5 b1 00 c1       	push   $0xc100b1b5
c1007c62:	50                   	push   %eax
c1007c63:	e8 1b 85 ff ff       	call   c1000183 <strcmp>
c1007c68:	83 c4 10             	add    $0x10,%esp
c1007c6b:	85 c0                	test   %eax,%eax
c1007c6d:	0f 84 85 00 00 00    	je     c1007cf8 <delete_dir_entry+0x20f>
c1007c73:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007c77:	89 d0                	mov    %edx,%eax
c1007c79:	01 c0                	add    %eax,%eax
c1007c7b:	01 d0                	add    %edx,%eax
c1007c7d:	c1 e0 03             	shl    $0x3,%eax
c1007c80:	89 c2                	mov    %eax,%edx
c1007c82:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007c85:	01 d0                	add    %edx,%eax
c1007c87:	83 ec 08             	sub    $0x8,%esp
c1007c8a:	68 b7 b1 00 c1       	push   $0xc100b1b7
c1007c8f:	50                   	push   %eax
c1007c90:	e8 ee 84 ff ff       	call   c1000183 <strcmp>
c1007c95:	83 c4 10             	add    $0x10,%esp
c1007c98:	85 c0                	test   %eax,%eax
c1007c9a:	74 5c                	je     c1007cf8 <delete_dir_entry+0x20f>
c1007c9c:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1007ca0:	83 c0 01             	add    $0x1,%eax
c1007ca3:	88 45 ee             	mov    %al,-0x12(%ebp)
c1007ca6:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007caa:	89 d0                	mov    %edx,%eax
c1007cac:	01 c0                	add    %eax,%eax
c1007cae:	01 d0                	add    %edx,%eax
c1007cb0:	c1 e0 03             	shl    $0x3,%eax
c1007cb3:	89 c2                	mov    %eax,%edx
c1007cb5:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007cb8:	01 d0                	add    %edx,%eax
c1007cba:	8b 40 10             	mov    0x10(%eax),%eax
c1007cbd:	39 45 10             	cmp    %eax,0x10(%ebp)
c1007cc0:	75 36                	jne    c1007cf8 <delete_dir_entry+0x20f>
c1007cc2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007cc6:	74 19                	je     c1007ce1 <delete_dir_entry+0x1f8>
c1007cc8:	68 ba b1 00 c1       	push   $0xc100b1ba
c1007ccd:	68 bc b2 00 c1       	push   $0xc100b2bc
c1007cd2:	68 0f 01 00 00       	push   $0x10f
c1007cd7:	68 0c b1 00 c1       	push   $0xc100b10c
c1007cdc:	e8 2c 86 ff ff       	call   c100030d <__PANIC>
c1007ce1:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007ce5:	89 d0                	mov    %edx,%eax
c1007ce7:	01 c0                	add    %eax,%eax
c1007ce9:	01 d0                	add    %edx,%eax
c1007ceb:	c1 e0 03             	shl    $0x3,%eax
c1007cee:	89 c2                	mov    %eax,%edx
c1007cf0:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007cf3:	01 d0                	add    %edx,%eax
c1007cf5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007cf8:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007cfc:	83 c0 01             	add    $0x1,%eax
c1007cff:	88 45 ef             	mov    %al,-0x11(%ebp)
c1007d02:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007d06:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1007d09:	0f 87 e6 fe ff ff    	ja     c1007bf5 <delete_dir_entry+0x10c>
c1007d0f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007d13:	75 09                	jne    c1007d1e <delete_dir_entry+0x235>
c1007d15:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007d19:	e9 54 02 00 00       	jmp    c1007f72 <delete_dir_entry+0x489>
c1007d1e:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
c1007d22:	75 19                	jne    c1007d3d <delete_dir_entry+0x254>
c1007d24:	68 d2 b1 00 c1       	push   $0xc100b1d2
c1007d29:	68 bc b2 00 c1       	push   $0xc100b2bc
c1007d2e:	68 1f 01 00 00       	push   $0x11f
c1007d33:	68 0c b1 00 c1       	push   $0xc100b10c
c1007d38:	e8 d0 85 ff ff       	call   c100030d <__PANIC>
c1007d3d:	80 7d ee 01          	cmpb   $0x1,-0x12(%ebp)
c1007d41:	0f 85 98 01 00 00    	jne    c1007edf <delete_dir_entry+0x3f6>
c1007d47:	80 7d ed 00          	cmpb   $0x0,-0x13(%ebp)
c1007d4b:	0f 85 8e 01 00 00    	jne    c1007edf <delete_dir_entry+0x3f6>
c1007d51:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007d54:	8b 94 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%edx
c1007d5b:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d5e:	8b 40 10             	mov    0x10(%eax),%eax
c1007d61:	8b 40 28             	mov    0x28(%eax),%eax
c1007d64:	29 c2                	sub    %eax,%edx
c1007d66:	89 d0                	mov    %edx,%eax
c1007d68:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1007d6b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007d6e:	c1 e8 03             	shr    $0x3,%eax
c1007d71:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007d74:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007d77:	83 e0 07             	and    $0x7,%eax
c1007d7a:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1007d7d:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d80:	8b 50 18             	mov    0x18(%eax),%edx
c1007d83:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007d86:	01 d0                	add    %edx,%eax
c1007d88:	0f b6 00             	movzbl (%eax),%eax
c1007d8b:	89 c2                	mov    %eax,%edx
c1007d8d:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007d90:	bb 01 00 00 00       	mov    $0x1,%ebx
c1007d95:	89 c1                	mov    %eax,%ecx
c1007d97:	d3 e3                	shl    %cl,%ebx
c1007d99:	89 d8                	mov    %ebx,%eax
c1007d9b:	f7 d0                	not    %eax
c1007d9d:	89 d1                	mov    %edx,%ecx
c1007d9f:	21 c1                	and    %eax,%ecx
c1007da1:	8b 45 08             	mov    0x8(%ebp),%eax
c1007da4:	8b 50 18             	mov    0x18(%eax),%edx
c1007da7:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007daa:	01 d0                	add    %edx,%eax
c1007dac:	89 ca                	mov    %ecx,%edx
c1007dae:	88 10                	mov    %dl,(%eax)
c1007db0:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007db5:	83 ec 04             	sub    $0x4,%esp
c1007db8:	6a 01                	push   $0x1
c1007dba:	ff 75 d4             	pushl  -0x2c(%ebp)
c1007dbd:	50                   	push   %eax
c1007dbe:	e8 c9 06 00 00       	call   c100848c <bitmap_sync>
c1007dc3:	83 c4 10             	add    $0x10,%esp
c1007dc6:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1007dca:	77 15                	ja     c1007de1 <delete_dir_entry+0x2f8>
c1007dcc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007dcf:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007dd2:	83 c2 04             	add    $0x4,%edx
c1007dd5:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1007ddc:	e9 2c 01 00 00       	jmp    c1007f0d <delete_dir_entry+0x424>
c1007de1:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1007de8:	c7 45 c8 0c 00 00 00 	movl   $0xc,-0x38(%ebp)
c1007def:	eb 12                	jmp    c1007e03 <delete_dir_entry+0x31a>
c1007df1:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1007df4:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007dfb:	85 c0                	test   %eax,%eax
c1007dfd:	74 04                	je     c1007e03 <delete_dir_entry+0x31a>
c1007dff:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1007e03:	81 7d c8 8b 00 00 00 	cmpl   $0x8b,-0x38(%ebp)
c1007e0a:	76 e5                	jbe    c1007df1 <delete_dir_entry+0x308>
c1007e0c:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1007e10:	75 19                	jne    c1007e2b <delete_dir_entry+0x342>
c1007e12:	68 e5 b1 00 c1       	push   $0xc100b1e5
c1007e17:	68 bc b2 00 c1       	push   $0xc100b2bc
c1007e1c:	68 35 01 00 00       	push   $0x135
c1007e21:	68 0c b1 00 c1       	push   $0xc100b10c
c1007e26:	e8 e2 84 ff ff       	call   c100030d <__PANIC>
c1007e2b:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1007e2f:	76 31                	jbe    c1007e62 <delete_dir_entry+0x379>
c1007e31:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007e34:	c7 84 85 98 fd ff ff 	movl   $0x0,-0x268(%ebp,%eax,4)
c1007e3b:	00 00 00 00 
c1007e3f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007e42:	8b 50 40             	mov    0x40(%eax),%edx
c1007e45:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1007e4b:	83 c0 30             	add    $0x30,%eax
c1007e4e:	83 ec 04             	sub    $0x4,%esp
c1007e51:	6a 01                	push   $0x1
c1007e53:	52                   	push   %edx
c1007e54:	50                   	push   %eax
c1007e55:	e8 d9 d2 ff ff       	call   c1005133 <ide_write>
c1007e5a:	83 c4 10             	add    $0x10,%esp
c1007e5d:	e9 ab 00 00 00       	jmp    c1007f0d <delete_dir_entry+0x424>
c1007e62:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007e65:	8b 50 40             	mov    0x40(%eax),%edx
c1007e68:	8b 45 08             	mov    0x8(%ebp),%eax
c1007e6b:	8b 40 10             	mov    0x10(%eax),%eax
c1007e6e:	8b 40 28             	mov    0x28(%eax),%eax
c1007e71:	29 c2                	sub    %eax,%edx
c1007e73:	89 d0                	mov    %edx,%eax
c1007e75:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1007e78:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007e7b:	c1 e8 03             	shr    $0x3,%eax
c1007e7e:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007e81:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007e84:	83 e0 07             	and    $0x7,%eax
c1007e87:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1007e8a:	8b 45 08             	mov    0x8(%ebp),%eax
c1007e8d:	8b 50 18             	mov    0x18(%eax),%edx
c1007e90:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007e93:	01 d0                	add    %edx,%eax
c1007e95:	0f b6 00             	movzbl (%eax),%eax
c1007e98:	89 c2                	mov    %eax,%edx
c1007e9a:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007e9d:	bb 01 00 00 00       	mov    $0x1,%ebx
c1007ea2:	89 c1                	mov    %eax,%ecx
c1007ea4:	d3 e3                	shl    %cl,%ebx
c1007ea6:	89 d8                	mov    %ebx,%eax
c1007ea8:	f7 d0                	not    %eax
c1007eaa:	89 d1                	mov    %edx,%ecx
c1007eac:	21 c1                	and    %eax,%ecx
c1007eae:	8b 45 08             	mov    0x8(%ebp),%eax
c1007eb1:	8b 50 18             	mov    0x18(%eax),%edx
c1007eb4:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007eb7:	01 d0                	add    %edx,%eax
c1007eb9:	89 ca                	mov    %ecx,%edx
c1007ebb:	88 10                	mov    %dl,(%eax)
c1007ebd:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007ec2:	83 ec 04             	sub    $0x4,%esp
c1007ec5:	6a 01                	push   $0x1
c1007ec7:	ff 75 d4             	pushl  -0x2c(%ebp)
c1007eca:	50                   	push   %eax
c1007ecb:	e8 bc 05 00 00       	call   c100848c <bitmap_sync>
c1007ed0:	83 c4 10             	add    $0x10,%esp
c1007ed3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007ed6:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1007edd:	eb 2e                	jmp    c1007f0d <delete_dir_entry+0x424>
c1007edf:	83 ec 04             	sub    $0x4,%esp
c1007ee2:	ff 75 e0             	pushl  -0x20(%ebp)
c1007ee5:	6a 00                	push   $0x0
c1007ee7:	ff 75 f0             	pushl  -0x10(%ebp)
c1007eea:	e8 bb 81 ff ff       	call   c10000aa <memset>
c1007eef:	83 c4 10             	add    $0x10,%esp
c1007ef2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007ef5:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007efc:	83 ec 04             	sub    $0x4,%esp
c1007eff:	6a 01                	push   $0x1
c1007f01:	50                   	push   %eax
c1007f02:	ff 75 14             	pushl  0x14(%ebp)
c1007f05:	e8 29 d2 ff ff       	call   c1005133 <ide_write>
c1007f0a:	83 c4 10             	add    $0x10,%esp
c1007f0d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007f10:	8b 40 04             	mov    0x4(%eax),%eax
c1007f13:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c1007f16:	76 19                	jbe    c1007f31 <delete_dir_entry+0x448>
c1007f18:	68 fc b1 00 c1       	push   $0xc100b1fc
c1007f1d:	68 bc b2 00 c1       	push   $0xc100b2bc
c1007f22:	68 4c 01 00 00       	push   $0x14c
c1007f27:	68 0c b1 00 c1       	push   $0xc100b10c
c1007f2c:	e8 dc 83 ff ff       	call   c100030d <__PANIC>
c1007f31:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007f34:	8b 40 04             	mov    0x4(%eax),%eax
c1007f37:	2b 45 e0             	sub    -0x20(%ebp),%eax
c1007f3a:	89 c2                	mov    %eax,%edx
c1007f3c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007f3f:	89 50 04             	mov    %edx,0x4(%eax)
c1007f42:	83 ec 04             	sub    $0x4,%esp
c1007f45:	68 00 04 00 00       	push   $0x400
c1007f4a:	6a 00                	push   $0x0
c1007f4c:	ff 75 14             	pushl  0x14(%ebp)
c1007f4f:	e8 56 81 ff ff       	call   c10000aa <memset>
c1007f54:	83 c4 10             	add    $0x10,%esp
c1007f57:	83 ec 04             	sub    $0x4,%esp
c1007f5a:	ff 75 14             	pushl  0x14(%ebp)
c1007f5d:	ff 75 e4             	pushl  -0x1c(%ebp)
c1007f60:	ff 75 08             	pushl  0x8(%ebp)
c1007f63:	e8 d1 15 00 00       	call   c1009539 <inode_sync>
c1007f68:	83 c4 10             	add    $0x10,%esp
c1007f6b:	b8 01 00 00 00       	mov    $0x1,%eax
c1007f70:	eb 12                	jmp    c1007f84 <delete_dir_entry+0x49b>
c1007f72:	81 7d f4 8b 00 00 00 	cmpl   $0x8b,-0xc(%ebp)
c1007f79:	0f 86 1b fc ff ff    	jbe    c1007b9a <delete_dir_entry+0xb1>
c1007f7f:	b8 00 00 00 00       	mov    $0x0,%eax
c1007f84:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1007f87:	5b                   	pop    %ebx
c1007f88:	5f                   	pop    %edi
c1007f89:	5d                   	pop    %ebp
c1007f8a:	c3                   	ret    

c1007f8b <dir_read>:
c1007f8b:	55                   	push   %ebp
c1007f8c:	89 e5                	mov    %esp,%ebp
c1007f8e:	57                   	push   %edi
c1007f8f:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1007f95:	8b 45 08             	mov    0x8(%ebp),%eax
c1007f98:	83 c0 08             	add    $0x8,%eax
c1007f9b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007f9e:	8b 45 08             	mov    0x8(%ebp),%eax
c1007fa1:	8b 00                	mov    (%eax),%eax
c1007fa3:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007fa6:	8d 95 a8 fd ff ff    	lea    -0x258(%ebp),%edx
c1007fac:	b8 00 00 00 00       	mov    $0x0,%eax
c1007fb1:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007fb6:	89 d7                	mov    %edx,%edi
c1007fb8:	f3 ab                	rep stos %eax,%es:(%edi)
c1007fba:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
c1007fc1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1007fc8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007fcf:	eb 1a                	jmp    c1007feb <dir_read+0x60>
c1007fd1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007fd4:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007fd7:	83 c2 04             	add    $0x4,%edx
c1007fda:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1007fdd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007fe0:	89 94 85 a8 fd ff ff 	mov    %edx,-0x258(%ebp,%eax,4)
c1007fe7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1007feb:	83 7d f0 0b          	cmpl   $0xb,-0x10(%ebp)
c1007fef:	76 e0                	jbe    c1007fd1 <dir_read+0x46>
c1007ff1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007ff4:	8b 40 40             	mov    0x40(%eax),%eax
c1007ff7:	85 c0                	test   %eax,%eax
c1007ff9:	74 25                	je     c1008020 <dir_read+0x95>
c1007ffb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007ffe:	8b 50 40             	mov    0x40(%eax),%edx
c1008001:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
c1008007:	83 c0 30             	add    $0x30,%eax
c100800a:	83 ec 04             	sub    $0x4,%esp
c100800d:	6a 01                	push   $0x1
c100800f:	52                   	push   %edx
c1008010:	50                   	push   %eax
c1008011:	e8 e0 d0 ff ff       	call   c10050f6 <ide_read>
c1008016:	83 c4 10             	add    $0x10,%esp
c1008019:	c7 45 f4 8c 00 00 00 	movl   $0x8c,-0xc(%ebp)
c1008020:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008027:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c100802e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008033:	8b 40 10             	mov    0x10(%eax),%eax
c1008036:	8b 40 30             	mov    0x30(%eax),%eax
c1008039:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100803c:	b8 00 02 00 00       	mov    $0x200,%eax
c1008041:	ba 00 00 00 00       	mov    $0x0,%edx
c1008046:	f7 75 dc             	divl   -0x24(%ebp)
c1008049:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100804c:	e9 f9 00 00 00       	jmp    c100814a <dir_read+0x1bf>
c1008051:	8b 45 08             	mov    0x8(%ebp),%eax
c1008054:	8b 50 04             	mov    0x4(%eax),%edx
c1008057:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100805a:	8b 40 04             	mov    0x4(%eax),%eax
c100805d:	39 c2                	cmp    %eax,%edx
c100805f:	72 0a                	jb     c100806b <dir_read+0xe0>
c1008061:	b8 00 00 00 00       	mov    $0x0,%eax
c1008066:	e9 f0 00 00 00       	jmp    c100815b <dir_read+0x1d0>
c100806b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100806e:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1008075:	85 c0                	test   %eax,%eax
c1008077:	75 09                	jne    c1008082 <dir_read+0xf7>
c1008079:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100807d:	e9 c8 00 00 00       	jmp    c100814a <dir_read+0x1bf>
c1008082:	83 ec 04             	sub    $0x4,%esp
c1008085:	68 00 02 00 00       	push   $0x200
c100808a:	6a 00                	push   $0x0
c100808c:	ff 75 e4             	pushl  -0x1c(%ebp)
c100808f:	e8 16 80 ff ff       	call   c10000aa <memset>
c1008094:	83 c4 10             	add    $0x10,%esp
c1008097:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100809a:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c10080a1:	83 ec 04             	sub    $0x4,%esp
c10080a4:	6a 01                	push   $0x1
c10080a6:	50                   	push   %eax
c10080a7:	ff 75 e4             	pushl  -0x1c(%ebp)
c10080aa:	e8 47 d0 ff ff       	call   c10050f6 <ide_read>
c10080af:	83 c4 10             	add    $0x10,%esp
c10080b2:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10080b9:	eb 7f                	jmp    c100813a <dir_read+0x1af>
c10080bb:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10080be:	89 d0                	mov    %edx,%eax
c10080c0:	01 c0                	add    %eax,%eax
c10080c2:	01 d0                	add    %edx,%eax
c10080c4:	c1 e0 03             	shl    $0x3,%eax
c10080c7:	89 c2                	mov    %eax,%edx
c10080c9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10080cc:	01 d0                	add    %edx,%eax
c10080ce:	8b 40 14             	mov    0x14(%eax),%eax
c10080d1:	85 c0                	test   %eax,%eax
c10080d3:	74 61                	je     c1008136 <dir_read+0x1ab>
c10080d5:	8b 45 08             	mov    0x8(%ebp),%eax
c10080d8:	8b 40 04             	mov    0x4(%eax),%eax
c10080db:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c10080de:	73 0c                	jae    c10080ec <dir_read+0x161>
c10080e0:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10080e3:	01 45 e8             	add    %eax,-0x18(%ebp)
c10080e6:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10080ea:	eb 4e                	jmp    c100813a <dir_read+0x1af>
c10080ec:	8b 45 08             	mov    0x8(%ebp),%eax
c10080ef:	8b 40 04             	mov    0x4(%eax),%eax
c10080f2:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c10080f5:	74 19                	je     c1008110 <dir_read+0x185>
c10080f7:	68 20 b2 00 c1       	push   $0xc100b220
c10080fc:	68 d0 b2 00 c1       	push   $0xc100b2d0
c1008101:	68 7e 01 00 00       	push   $0x17e
c1008106:	68 0c b1 00 c1       	push   $0xc100b10c
c100810b:	e8 fd 81 ff ff       	call   c100030d <__PANIC>
c1008110:	8b 45 08             	mov    0x8(%ebp),%eax
c1008113:	8b 50 04             	mov    0x4(%eax),%edx
c1008116:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008119:	01 c2                	add    %eax,%edx
c100811b:	8b 45 08             	mov    0x8(%ebp),%eax
c100811e:	89 50 04             	mov    %edx,0x4(%eax)
c1008121:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1008124:	89 d0                	mov    %edx,%eax
c1008126:	01 c0                	add    %eax,%eax
c1008128:	01 d0                	add    %edx,%eax
c100812a:	c1 e0 03             	shl    $0x3,%eax
c100812d:	89 c2                	mov    %eax,%edx
c100812f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008132:	01 d0                	add    %edx,%eax
c1008134:	eb 25                	jmp    c100815b <dir_read+0x1d0>
c1008136:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c100813a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100813d:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c1008140:	0f 82 75 ff ff ff    	jb     c10080bb <dir_read+0x130>
c1008146:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100814a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100814d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1008150:	0f 82 fb fe ff ff    	jb     c1008051 <dir_read+0xc6>
c1008156:	b8 00 00 00 00       	mov    $0x0,%eax
c100815b:	8b 7d fc             	mov    -0x4(%ebp),%edi
c100815e:	c9                   	leave  
c100815f:	c3                   	ret    

c1008160 <dir_is_empty>:
c1008160:	55                   	push   %ebp
c1008161:	89 e5                	mov    %esp,%ebp
c1008163:	83 ec 10             	sub    $0x10,%esp
c1008166:	8b 45 08             	mov    0x8(%ebp),%eax
c1008169:	8b 00                	mov    (%eax),%eax
c100816b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100816e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1008171:	8b 50 04             	mov    0x4(%eax),%edx
c1008174:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008179:	8b 40 10             	mov    0x10(%eax),%eax
c100817c:	8b 40 30             	mov    0x30(%eax),%eax
c100817f:	01 c0                	add    %eax,%eax
c1008181:	39 c2                	cmp    %eax,%edx
c1008183:	0f 94 c0             	sete   %al
c1008186:	c9                   	leave  
c1008187:	c3                   	ret    

c1008188 <dir_remove>:
c1008188:	55                   	push   %ebp
c1008189:	89 e5                	mov    %esp,%ebp
c100818b:	83 ec 18             	sub    $0x18,%esp
c100818e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008191:	8b 00                	mov    (%eax),%eax
c1008193:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008196:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c100819d:	eb 2d                	jmp    c10081cc <dir_remove+0x44>
c100819f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10081a2:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10081a5:	83 c2 04             	add    $0x4,%edx
c10081a8:	8b 04 90             	mov    (%eax,%edx,4),%eax
c10081ab:	85 c0                	test   %eax,%eax
c10081ad:	74 19                	je     c10081c8 <dir_remove+0x40>
c10081af:	68 44 b2 00 c1       	push   $0xc100b244
c10081b4:	68 dc b2 00 c1       	push   $0xc100b2dc
c10081b9:	68 95 01 00 00       	push   $0x195
c10081be:	68 0c b1 00 c1       	push   $0xc100b10c
c10081c3:	e8 45 81 ff ff       	call   c100030d <__PANIC>
c10081c8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10081cc:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
c10081d0:	7e cd                	jle    c100819f <dir_remove+0x17>
c10081d2:	83 ec 08             	sub    $0x8,%esp
c10081d5:	6a 01                	push   $0x1
c10081d7:	68 00 04 00 00       	push   $0x400
c10081dc:	e8 62 a9 ff ff       	call   c1002b43 <vmm_malloc>
c10081e1:	83 c4 10             	add    $0x10,%esp
c10081e4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10081e7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10081eb:	75 17                	jne    c1008204 <dir_remove+0x7c>
c10081ed:	83 ec 0c             	sub    $0xc,%esp
c10081f0:	68 70 b2 00 c1       	push   $0xc100b270
c10081f5:	e8 b9 c5 ff ff       	call   c10047b3 <printk>
c10081fa:	83 c4 10             	add    $0x10,%esp
c10081fd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008202:	eb 4a                	jmp    c100824e <dir_remove+0xc6>
c1008204:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008207:	8b 10                	mov    (%eax),%edx
c1008209:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100820e:	ff 75 ec             	pushl  -0x14(%ebp)
c1008211:	52                   	push   %edx
c1008212:	ff 75 08             	pushl  0x8(%ebp)
c1008215:	50                   	push   %eax
c1008216:	e8 ce f8 ff ff       	call   c1007ae9 <delete_dir_entry>
c100821b:	83 c4 10             	add    $0x10,%esp
c100821e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008221:	8b 10                	mov    (%eax),%edx
c1008223:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008228:	83 ec 08             	sub    $0x8,%esp
c100822b:	52                   	push   %edx
c100822c:	50                   	push   %eax
c100822d:	e8 14 16 00 00       	call   c1009846 <inode_release>
c1008232:	83 c4 10             	add    $0x10,%esp
c1008235:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008238:	83 ec 08             	sub    $0x8,%esp
c100823b:	68 00 04 00 00       	push   $0x400
c1008240:	50                   	push   %eax
c1008241:	e8 1d aa ff ff       	call   c1002c63 <vmm_free>
c1008246:	83 c4 10             	add    $0x10,%esp
c1008249:	b8 00 00 00 00       	mov    $0x0,%eax
c100824e:	c9                   	leave  
c100824f:	c3                   	ret    

c1008250 <hash32>:
c1008250:	55                   	push   %ebp
c1008251:	89 e5                	mov    %esp,%ebp
c1008253:	83 ec 10             	sub    $0x10,%esp
c1008256:	8b 45 08             	mov    0x8(%ebp),%eax
c1008259:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100825f:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1008262:	b8 20 00 00 00       	mov    $0x20,%eax
c1008267:	2b 45 0c             	sub    0xc(%ebp),%eax
c100826a:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100826d:	89 c1                	mov    %eax,%ecx
c100826f:	d3 ea                	shr    %cl,%edx
c1008271:	89 d0                	mov    %edx,%eax
c1008273:	c9                   	leave  
c1008274:	c3                   	ret    

c1008275 <get_free_slot_in_global>:
c1008275:	55                   	push   %ebp
c1008276:	89 e5                	mov    %esp,%ebp
c1008278:	83 ec 10             	sub    $0x10,%esp
c100827b:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
c1008282:	eb 1b                	jmp    c100829f <get_free_slot_in_global+0x2a>
c1008284:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1008287:	89 d0                	mov    %edx,%eax
c1008289:	01 c0                	add    %eax,%eax
c100828b:	01 d0                	add    %edx,%eax
c100828d:	c1 e0 02             	shl    $0x2,%eax
c1008290:	05 68 34 a1 c1       	add    $0xc1a13468,%eax
c1008295:	8b 00                	mov    (%eax),%eax
c1008297:	85 c0                	test   %eax,%eax
c1008299:	74 0c                	je     c10082a7 <get_free_slot_in_global+0x32>
c100829b:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100829f:	83 7d fc 1f          	cmpl   $0x1f,-0x4(%ebp)
c10082a3:	76 df                	jbe    c1008284 <get_free_slot_in_global+0xf>
c10082a5:	eb 01                	jmp    c10082a8 <get_free_slot_in_global+0x33>
c10082a7:	90                   	nop
c10082a8:	83 7d fc 20          	cmpl   $0x20,-0x4(%ebp)
c10082ac:	75 07                	jne    c10082b5 <get_free_slot_in_global+0x40>
c10082ae:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10082b3:	eb 03                	jmp    c10082b8 <get_free_slot_in_global+0x43>
c10082b5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10082b8:	c9                   	leave  
c10082b9:	c3                   	ret    

c10082ba <task_fd_install>:
c10082ba:	55                   	push   %ebp
c10082bb:	89 e5                	mov    %esp,%ebp
c10082bd:	83 ec 10             	sub    $0x10,%esp
c10082c0:	c6 45 ff 03          	movb   $0x3,-0x1(%ebp)
c10082c4:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10082c9:	0f be 55 ff          	movsbl -0x1(%ebp),%edx
c10082cd:	83 c2 18             	add    $0x18,%edx
c10082d0:	8b 04 90             	mov    (%eax,%edx,4),%eax
c10082d3:	83 f8 ff             	cmp    $0xffffffff,%eax
c10082d6:	75 14                	jne    c10082ec <task_fd_install+0x32>
c10082d8:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10082dd:	0f be 4d ff          	movsbl -0x1(%ebp),%ecx
c10082e1:	8b 55 08             	mov    0x8(%ebp),%edx
c10082e4:	83 c1 18             	add    $0x18,%ecx
c10082e7:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c10082ea:	eb 0c                	jmp    c10082f8 <task_fd_install+0x3e>
c10082ec:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
c10082f0:	83 c0 01             	add    $0x1,%eax
c10082f3:	88 45 ff             	mov    %al,-0x1(%ebp)
c10082f6:	eb cc                	jmp    c10082c4 <task_fd_install+0xa>
c10082f8:	0f be 45 ff          	movsbl -0x1(%ebp),%eax
c10082fc:	c9                   	leave  
c10082fd:	c3                   	ret    

c10082fe <inode_bitmap_alloc>:
c10082fe:	55                   	push   %ebp
c10082ff:	89 e5                	mov    %esp,%ebp
c1008301:	53                   	push   %ebx
c1008302:	83 ec 10             	sub    $0x10,%esp
c1008305:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c100830c:	eb 04                	jmp    c1008312 <inode_bitmap_alloc+0x14>
c100830e:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1008312:	8b 45 08             	mov    0x8(%ebp),%eax
c1008315:	8b 50 20             	mov    0x20(%eax),%edx
c1008318:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100831b:	01 d0                	add    %edx,%eax
c100831d:	0f b6 00             	movzbl (%eax),%eax
c1008320:	3c ff                	cmp    $0xff,%al
c1008322:	75 0b                	jne    c100832f <inode_bitmap_alloc+0x31>
c1008324:	8b 45 08             	mov    0x8(%ebp),%eax
c1008327:	8b 40 1c             	mov    0x1c(%eax),%eax
c100832a:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c100832d:	72 df                	jb     c100830e <inode_bitmap_alloc+0x10>
c100832f:	8b 45 08             	mov    0x8(%ebp),%eax
c1008332:	8b 40 1c             	mov    0x1c(%eax),%eax
c1008335:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1008338:	75 07                	jne    c1008341 <inode_bitmap_alloc+0x43>
c100833a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100833f:	eb 77                	jmp    c10083b8 <inode_bitmap_alloc+0xba>
c1008341:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008348:	eb 04                	jmp    c100834e <inode_bitmap_alloc+0x50>
c100834a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100834e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008351:	ba 01 00 00 00       	mov    $0x1,%edx
c1008356:	89 c1                	mov    %eax,%ecx
c1008358:	d3 e2                	shl    %cl,%edx
c100835a:	89 d0                	mov    %edx,%eax
c100835c:	89 c1                	mov    %eax,%ecx
c100835e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008361:	8b 50 20             	mov    0x20(%eax),%edx
c1008364:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008367:	01 d0                	add    %edx,%eax
c1008369:	0f b6 00             	movzbl (%eax),%eax
c100836c:	21 c8                	and    %ecx,%eax
c100836e:	84 c0                	test   %al,%al
c1008370:	75 d8                	jne    c100834a <inode_bitmap_alloc+0x4c>
c1008372:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008375:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c100837c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100837f:	01 d0                	add    %edx,%eax
c1008381:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008384:	8b 45 08             	mov    0x8(%ebp),%eax
c1008387:	8b 50 20             	mov    0x20(%eax),%edx
c100838a:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100838d:	01 d0                	add    %edx,%eax
c100838f:	0f b6 00             	movzbl (%eax),%eax
c1008392:	89 c3                	mov    %eax,%ebx
c1008394:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008397:	ba 01 00 00 00       	mov    $0x1,%edx
c100839c:	89 c1                	mov    %eax,%ecx
c100839e:	d3 e2                	shl    %cl,%edx
c10083a0:	89 d0                	mov    %edx,%eax
c10083a2:	09 c3                	or     %eax,%ebx
c10083a4:	89 d9                	mov    %ebx,%ecx
c10083a6:	8b 45 08             	mov    0x8(%ebp),%eax
c10083a9:	8b 50 20             	mov    0x20(%eax),%edx
c10083ac:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10083af:	01 d0                	add    %edx,%eax
c10083b1:	89 ca                	mov    %ecx,%edx
c10083b3:	88 10                	mov    %dl,(%eax)
c10083b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10083b8:	83 c4 10             	add    $0x10,%esp
c10083bb:	5b                   	pop    %ebx
c10083bc:	5d                   	pop    %ebp
c10083bd:	c3                   	ret    

c10083be <block_bitmap_alloc>:
c10083be:	55                   	push   %ebp
c10083bf:	89 e5                	mov    %esp,%ebp
c10083c1:	53                   	push   %ebx
c10083c2:	83 ec 10             	sub    $0x10,%esp
c10083c5:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c10083cc:	eb 04                	jmp    c10083d2 <block_bitmap_alloc+0x14>
c10083ce:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10083d2:	8b 45 08             	mov    0x8(%ebp),%eax
c10083d5:	8b 50 18             	mov    0x18(%eax),%edx
c10083d8:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10083db:	01 d0                	add    %edx,%eax
c10083dd:	0f b6 00             	movzbl (%eax),%eax
c10083e0:	3c ff                	cmp    $0xff,%al
c10083e2:	75 0b                	jne    c10083ef <block_bitmap_alloc+0x31>
c10083e4:	8b 45 08             	mov    0x8(%ebp),%eax
c10083e7:	8b 40 14             	mov    0x14(%eax),%eax
c10083ea:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10083ed:	72 df                	jb     c10083ce <block_bitmap_alloc+0x10>
c10083ef:	8b 45 08             	mov    0x8(%ebp),%eax
c10083f2:	8b 40 14             	mov    0x14(%eax),%eax
c10083f5:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10083f8:	75 0a                	jne    c1008404 <block_bitmap_alloc+0x46>
c10083fa:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10083ff:	e9 82 00 00 00       	jmp    c1008486 <block_bitmap_alloc+0xc8>
c1008404:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100840b:	eb 04                	jmp    c1008411 <block_bitmap_alloc+0x53>
c100840d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008411:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008414:	ba 01 00 00 00       	mov    $0x1,%edx
c1008419:	89 c1                	mov    %eax,%ecx
c100841b:	d3 e2                	shl    %cl,%edx
c100841d:	89 d0                	mov    %edx,%eax
c100841f:	89 c1                	mov    %eax,%ecx
c1008421:	8b 45 08             	mov    0x8(%ebp),%eax
c1008424:	8b 50 18             	mov    0x18(%eax),%edx
c1008427:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100842a:	01 d0                	add    %edx,%eax
c100842c:	0f b6 00             	movzbl (%eax),%eax
c100842f:	21 c8                	and    %ecx,%eax
c1008431:	84 c0                	test   %al,%al
c1008433:	75 d8                	jne    c100840d <block_bitmap_alloc+0x4f>
c1008435:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008438:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c100843f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008442:	01 d0                	add    %edx,%eax
c1008444:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008447:	8b 45 08             	mov    0x8(%ebp),%eax
c100844a:	8b 50 18             	mov    0x18(%eax),%edx
c100844d:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008450:	01 d0                	add    %edx,%eax
c1008452:	0f b6 00             	movzbl (%eax),%eax
c1008455:	89 c3                	mov    %eax,%ebx
c1008457:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100845a:	ba 01 00 00 00       	mov    $0x1,%edx
c100845f:	89 c1                	mov    %eax,%ecx
c1008461:	d3 e2                	shl    %cl,%edx
c1008463:	89 d0                	mov    %edx,%eax
c1008465:	09 c3                	or     %eax,%ebx
c1008467:	89 d9                	mov    %ebx,%ecx
c1008469:	8b 45 08             	mov    0x8(%ebp),%eax
c100846c:	8b 50 18             	mov    0x18(%eax),%edx
c100846f:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008472:	01 d0                	add    %edx,%eax
c1008474:	89 ca                	mov    %ecx,%edx
c1008476:	88 10                	mov    %dl,(%eax)
c1008478:	8b 45 08             	mov    0x8(%ebp),%eax
c100847b:	8b 40 10             	mov    0x10(%eax),%eax
c100847e:	8b 50 28             	mov    0x28(%eax),%edx
c1008481:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008484:	01 d0                	add    %edx,%eax
c1008486:	83 c4 10             	add    $0x10,%esp
c1008489:	5b                   	pop    %ebx
c100848a:	5d                   	pop    %ebp
c100848b:	c3                   	ret    

c100848c <bitmap_sync>:
c100848c:	55                   	push   %ebp
c100848d:	89 e5                	mov    %esp,%ebp
c100848f:	83 ec 28             	sub    $0x28,%esp
c1008492:	8b 45 10             	mov    0x10(%ebp),%eax
c1008495:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1008498:	8b 45 0c             	mov    0xc(%ebp),%eax
c100849b:	c1 e8 0c             	shr    $0xc,%eax
c100849e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10084a1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10084a4:	c1 e0 09             	shl    $0x9,%eax
c10084a7:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10084aa:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10084ae:	85 c0                	test   %eax,%eax
c10084b0:	74 07                	je     c10084b9 <bitmap_sync+0x2d>
c10084b2:	83 f8 01             	cmp    $0x1,%eax
c10084b5:	74 23                	je     c10084da <bitmap_sync+0x4e>
c10084b7:	eb 41                	jmp    c10084fa <bitmap_sync+0x6e>
c10084b9:	8b 45 08             	mov    0x8(%ebp),%eax
c10084bc:	8b 40 10             	mov    0x10(%eax),%eax
c10084bf:	8b 50 18             	mov    0x18(%eax),%edx
c10084c2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10084c5:	01 d0                	add    %edx,%eax
c10084c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10084ca:	8b 45 08             	mov    0x8(%ebp),%eax
c10084cd:	8b 50 20             	mov    0x20(%eax),%edx
c10084d0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10084d3:	01 d0                	add    %edx,%eax
c10084d5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10084d8:	eb 20                	jmp    c10084fa <bitmap_sync+0x6e>
c10084da:	8b 45 08             	mov    0x8(%ebp),%eax
c10084dd:	8b 40 10             	mov    0x10(%eax),%eax
c10084e0:	8b 50 10             	mov    0x10(%eax),%edx
c10084e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10084e6:	01 d0                	add    %edx,%eax
c10084e8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10084eb:	8b 45 08             	mov    0x8(%ebp),%eax
c10084ee:	8b 50 18             	mov    0x18(%eax),%edx
c10084f1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10084f4:	01 d0                	add    %edx,%eax
c10084f6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10084f9:	90                   	nop
c10084fa:	83 ec 04             	sub    $0x4,%esp
c10084fd:	6a 01                	push   $0x1
c10084ff:	ff 75 f4             	pushl  -0xc(%ebp)
c1008502:	ff 75 f0             	pushl  -0x10(%ebp)
c1008505:	e8 29 cc ff ff       	call   c1005133 <ide_write>
c100850a:	83 c4 10             	add    $0x10,%esp
c100850d:	90                   	nop
c100850e:	c9                   	leave  
c100850f:	c3                   	ret    

c1008510 <file_create>:
c1008510:	55                   	push   %ebp
c1008511:	89 e5                	mov    %esp,%ebp
c1008513:	83 ec 58             	sub    $0x58,%esp
c1008516:	8b 45 10             	mov    0x10(%ebp),%eax
c1008519:	88 45 b4             	mov    %al,-0x4c(%ebp)
c100851c:	83 ec 08             	sub    $0x8,%esp
c100851f:	6a 01                	push   $0x1
c1008521:	68 00 04 00 00       	push   $0x400
c1008526:	e8 18 a6 ff ff       	call   c1002b43 <vmm_malloc>
c100852b:	83 c4 10             	add    $0x10,%esp
c100852e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008531:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1008535:	75 1a                	jne    c1008551 <file_create+0x41>
c1008537:	83 ec 0c             	sub    $0xc,%esp
c100853a:	68 e8 b2 00 c1       	push   $0xc100b2e8
c100853f:	e8 6f c2 ff ff       	call   c10047b3 <printk>
c1008544:	83 c4 10             	add    $0x10,%esp
c1008547:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100854c:	e9 9f 02 00 00       	jmp    c10087f0 <file_create+0x2e0>
c1008551:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1008555:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100855a:	83 ec 0c             	sub    $0xc,%esp
c100855d:	50                   	push   %eax
c100855e:	e8 9b fd ff ff       	call   c10082fe <inode_bitmap_alloc>
c1008563:	83 c4 10             	add    $0x10,%esp
c1008566:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008569:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c100856d:	75 1a                	jne    c1008589 <file_create+0x79>
c100856f:	83 ec 0c             	sub    $0xc,%esp
c1008572:	68 18 b3 00 c1       	push   $0xc100b318
c1008577:	e8 37 c2 ff ff       	call   c10047b3 <printk>
c100857c:	83 c4 10             	add    $0x10,%esp
c100857f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008584:	e9 67 02 00 00       	jmp    c10087f0 <file_create+0x2e0>
c1008589:	83 ec 08             	sub    $0x8,%esp
c100858c:	6a 01                	push   $0x1
c100858e:	6a 44                	push   $0x44
c1008590:	e8 ae a5 ff ff       	call   c1002b43 <vmm_malloc>
c1008595:	83 c4 10             	add    $0x10,%esp
c1008598:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100859b:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c100859f:	75 19                	jne    c10085ba <file_create+0xaa>
c10085a1:	83 ec 0c             	sub    $0xc,%esp
c10085a4:	68 40 b3 00 c1       	push   $0xc100b340
c10085a9:	e8 05 c2 ff ff       	call   c10047b3 <printk>
c10085ae:	83 c4 10             	add    $0x10,%esp
c10085b1:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10085b5:	e9 88 01 00 00       	jmp    c1008742 <file_create+0x232>
c10085ba:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10085bd:	83 ec 08             	sub    $0x8,%esp
c10085c0:	ff 75 e4             	pushl  -0x1c(%ebp)
c10085c3:	50                   	push   %eax
c10085c4:	e8 42 15 00 00       	call   c1009b0b <inode_init>
c10085c9:	83 c4 10             	add    $0x10,%esp
c10085cc:	e8 a4 fc ff ff       	call   c1008275 <get_free_slot_in_global>
c10085d1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10085d4:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10085d8:	75 19                	jne    c10085f3 <file_create+0xe3>
c10085da:	83 ec 0c             	sub    $0xc,%esp
c10085dd:	68 6b b3 00 c1       	push   $0xc100b36b
c10085e2:	e8 cc c1 ff ff       	call   c10047b3 <printk>
c10085e7:	83 c4 10             	add    $0x10,%esp
c10085ea:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10085ee:	e9 4f 01 00 00       	jmp    c1008742 <file_create+0x232>
c10085f3:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10085f6:	89 d0                	mov    %edx,%eax
c10085f8:	01 c0                	add    %eax,%eax
c10085fa:	01 d0                	add    %edx,%eax
c10085fc:	c1 e0 02             	shl    $0x2,%eax
c10085ff:	8d 90 68 34 a1 c1    	lea    -0x3e5ecb98(%eax),%edx
c1008605:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008608:	89 02                	mov    %eax,(%edx)
c100860a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100860d:	89 d0                	mov    %edx,%eax
c100860f:	01 c0                	add    %eax,%eax
c1008611:	01 d0                	add    %edx,%eax
c1008613:	c1 e0 02             	shl    $0x2,%eax
c1008616:	05 60 34 a1 c1       	add    $0xc1a13460,%eax
c100861b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1008621:	0f b6 4d b4          	movzbl -0x4c(%ebp),%ecx
c1008625:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008628:	89 d0                	mov    %edx,%eax
c100862a:	01 c0                	add    %eax,%eax
c100862c:	01 d0                	add    %edx,%eax
c100862e:	c1 e0 02             	shl    $0x2,%eax
c1008631:	05 64 34 a1 c1       	add    $0xc1a13464,%eax
c1008636:	89 08                	mov    %ecx,(%eax)
c1008638:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100863b:	89 d0                	mov    %edx,%eax
c100863d:	01 c0                	add    %eax,%eax
c100863f:	01 d0                	add    %edx,%eax
c1008641:	c1 e0 02             	shl    $0x2,%eax
c1008644:	05 68 34 a1 c1       	add    $0xc1a13468,%eax
c1008649:	8b 00                	mov    (%eax),%eax
c100864b:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c100864f:	83 ec 04             	sub    $0x4,%esp
c1008652:	6a 18                	push   $0x18
c1008654:	6a 00                	push   $0x0
c1008656:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1008659:	50                   	push   %eax
c100865a:	e8 4b 7a ff ff       	call   c10000aa <memset>
c100865f:	83 c4 10             	add    $0x10,%esp
c1008662:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008665:	8d 55 c4             	lea    -0x3c(%ebp),%edx
c1008668:	52                   	push   %edx
c1008669:	6a 01                	push   $0x1
c100866b:	50                   	push   %eax
c100866c:	ff 75 0c             	pushl  0xc(%ebp)
c100866f:	e8 d1 ef ff ff       	call   c1007645 <create_dir_entry>
c1008674:	83 c4 10             	add    $0x10,%esp
c1008677:	83 ec 04             	sub    $0x4,%esp
c100867a:	ff 75 ec             	pushl  -0x14(%ebp)
c100867d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1008680:	50                   	push   %eax
c1008681:	ff 75 08             	pushl  0x8(%ebp)
c1008684:	e8 28 f0 ff ff       	call   c10076b1 <sync_dir_entry>
c1008689:	83 c4 10             	add    $0x10,%esp
c100868c:	85 c0                	test   %eax,%eax
c100868e:	75 19                	jne    c10086a9 <file_create+0x199>
c1008690:	83 ec 0c             	sub    $0xc,%esp
c1008693:	68 84 b3 00 c1       	push   $0xc100b384
c1008698:	e8 16 c1 ff ff       	call   c10047b3 <printk>
c100869d:	83 c4 10             	add    $0x10,%esp
c10086a0:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c10086a4:	e9 99 00 00 00       	jmp    c1008742 <file_create+0x232>
c10086a9:	83 ec 04             	sub    $0x4,%esp
c10086ac:	68 00 04 00 00       	push   $0x400
c10086b1:	6a 00                	push   $0x0
c10086b3:	ff 75 ec             	pushl  -0x14(%ebp)
c10086b6:	e8 ef 79 ff ff       	call   c10000aa <memset>
c10086bb:	83 c4 10             	add    $0x10,%esp
c10086be:	8b 45 08             	mov    0x8(%ebp),%eax
c10086c1:	8b 10                	mov    (%eax),%edx
c10086c3:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10086c8:	83 ec 04             	sub    $0x4,%esp
c10086cb:	ff 75 ec             	pushl  -0x14(%ebp)
c10086ce:	52                   	push   %edx
c10086cf:	50                   	push   %eax
c10086d0:	e8 64 0e 00 00       	call   c1009539 <inode_sync>
c10086d5:	83 c4 10             	add    $0x10,%esp
c10086d8:	83 ec 04             	sub    $0x4,%esp
c10086db:	68 00 04 00 00       	push   $0x400
c10086e0:	6a 00                	push   $0x0
c10086e2:	ff 75 ec             	pushl  -0x14(%ebp)
c10086e5:	e8 c0 79 ff ff       	call   c10000aa <memset>
c10086ea:	83 c4 10             	add    $0x10,%esp
c10086ed:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10086f2:	83 ec 04             	sub    $0x4,%esp
c10086f5:	ff 75 ec             	pushl  -0x14(%ebp)
c10086f8:	ff 75 e4             	pushl  -0x1c(%ebp)
c10086fb:	50                   	push   %eax
c10086fc:	e8 38 0e 00 00       	call   c1009539 <inode_sync>
c1008701:	83 c4 10             	add    $0x10,%esp
c1008704:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008707:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100870c:	83 ec 04             	sub    $0x4,%esp
c100870f:	6a 00                	push   $0x0
c1008711:	52                   	push   %edx
c1008712:	50                   	push   %eax
c1008713:	e8 74 fd ff ff       	call   c100848c <bitmap_sync>
c1008718:	83 c4 10             	add    $0x10,%esp
c100871b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100871e:	83 ec 08             	sub    $0x8,%esp
c1008721:	68 00 04 00 00       	push   $0x400
c1008726:	50                   	push   %eax
c1008727:	e8 37 a5 ff ff       	call   c1002c63 <vmm_free>
c100872c:	83 c4 10             	add    $0x10,%esp
c100872f:	83 ec 0c             	sub    $0xc,%esp
c1008732:	ff 75 f0             	pushl  -0x10(%ebp)
c1008735:	e8 80 fb ff ff       	call   c10082ba <task_fd_install>
c100873a:	83 c4 10             	add    $0x10,%esp
c100873d:	e9 ae 00 00 00       	jmp    c10087f0 <file_create+0x2e0>
c1008742:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008746:	83 f8 03             	cmp    $0x3,%eax
c1008749:	74 15                	je     c1008760 <file_create+0x250>
c100874b:	83 f8 03             	cmp    $0x3,%eax
c100874e:	0f 8f 83 00 00 00    	jg     c10087d7 <file_create+0x2c7>
c1008754:	83 f8 01             	cmp    $0x1,%eax
c1008757:	74 39                	je     c1008792 <file_create+0x282>
c1008759:	83 f8 02             	cmp    $0x2,%eax
c100875c:	74 23                	je     c1008781 <file_create+0x271>
c100875e:	eb 77                	jmp    c10087d7 <file_create+0x2c7>
c1008760:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008763:	89 d0                	mov    %edx,%eax
c1008765:	01 c0                	add    %eax,%eax
c1008767:	01 d0                	add    %edx,%eax
c1008769:	c1 e0 02             	shl    $0x2,%eax
c100876c:	05 60 34 a1 c1       	add    $0xc1a13460,%eax
c1008771:	83 ec 04             	sub    $0x4,%esp
c1008774:	6a 0c                	push   $0xc
c1008776:	6a 00                	push   $0x0
c1008778:	50                   	push   %eax
c1008779:	e8 2c 79 ff ff       	call   c10000aa <memset>
c100877e:	83 c4 10             	add    $0x10,%esp
c1008781:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008784:	83 ec 08             	sub    $0x8,%esp
c1008787:	6a 44                	push   $0x44
c1008789:	50                   	push   %eax
c100878a:	e8 d4 a4 ff ff       	call   c1002c63 <vmm_free>
c100878f:	83 c4 10             	add    $0x10,%esp
c1008792:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008795:	8d 50 07             	lea    0x7(%eax),%edx
c1008798:	85 c0                	test   %eax,%eax
c100879a:	0f 48 c2             	cmovs  %edx,%eax
c100879d:	c1 f8 03             	sar    $0x3,%eax
c10087a0:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10087a3:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10087a6:	99                   	cltd   
c10087a7:	c1 ea 1d             	shr    $0x1d,%edx
c10087aa:	01 d0                	add    %edx,%eax
c10087ac:	83 e0 07             	and    $0x7,%eax
c10087af:	29 d0                	sub    %edx,%eax
c10087b1:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10087b4:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10087b9:	8b 50 20             	mov    0x20(%eax),%edx
c10087bc:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10087bf:	01 d0                	add    %edx,%eax
c10087c1:	0f b6 10             	movzbl (%eax),%edx
c10087c4:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10087c9:	8b 48 20             	mov    0x20(%eax),%ecx
c10087cc:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10087cf:	01 c8                	add    %ecx,%eax
c10087d1:	83 e2 fe             	and    $0xfffffffe,%edx
c10087d4:	88 10                	mov    %dl,(%eax)
c10087d6:	90                   	nop
c10087d7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10087da:	83 ec 08             	sub    $0x8,%esp
c10087dd:	68 00 04 00 00       	push   $0x400
c10087e2:	50                   	push   %eax
c10087e3:	e8 7b a4 ff ff       	call   c1002c63 <vmm_free>
c10087e8:	83 c4 10             	add    $0x10,%esp
c10087eb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10087f0:	c9                   	leave  
c10087f1:	c3                   	ret    

c10087f2 <file_open>:
c10087f2:	55                   	push   %ebp
c10087f3:	89 e5                	mov    %esp,%ebp
c10087f5:	83 ec 28             	sub    $0x28,%esp
c10087f8:	8b 45 0c             	mov    0xc(%ebp),%eax
c10087fb:	88 45 e4             	mov    %al,-0x1c(%ebp)
c10087fe:	e8 72 fa ff ff       	call   c1008275 <get_free_slot_in_global>
c1008803:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008806:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c100880a:	75 1a                	jne    c1008826 <file_open+0x34>
c100880c:	83 ec 0c             	sub    $0xc,%esp
c100880f:	68 6b b3 00 c1       	push   $0xc100b36b
c1008814:	e8 9a bf ff ff       	call   c10047b3 <printk>
c1008819:	83 c4 10             	add    $0x10,%esp
c100881c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008821:	e9 1a 01 00 00       	jmp    c1008940 <file_open+0x14e>
c1008826:	83 ec 08             	sub    $0x8,%esp
c1008829:	ff 75 08             	pushl  0x8(%ebp)
c100882c:	68 a3 b3 00 c1       	push   $0xc100b3a3
c1008831:	e8 7d bf ff ff       	call   c10047b3 <printk>
c1008836:	83 c4 10             	add    $0x10,%esp
c1008839:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100883e:	83 ec 08             	sub    $0x8,%esp
c1008841:	ff 75 08             	pushl  0x8(%ebp)
c1008844:	50                   	push   %eax
c1008845:	e8 10 0e 00 00       	call   c100965a <inode_open>
c100884a:	83 c4 10             	add    $0x10,%esp
c100884d:	89 c1                	mov    %eax,%ecx
c100884f:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008852:	89 d0                	mov    %edx,%eax
c1008854:	01 c0                	add    %eax,%eax
c1008856:	01 d0                	add    %edx,%eax
c1008858:	c1 e0 02             	shl    $0x2,%eax
c100885b:	05 68 34 a1 c1       	add    $0xc1a13468,%eax
c1008860:	89 08                	mov    %ecx,(%eax)
c1008862:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008865:	89 d0                	mov    %edx,%eax
c1008867:	01 c0                	add    %eax,%eax
c1008869:	01 d0                	add    %edx,%eax
c100886b:	c1 e0 02             	shl    $0x2,%eax
c100886e:	05 68 34 a1 c1       	add    $0xc1a13468,%eax
c1008873:	8b 00                	mov    (%eax),%eax
c1008875:	8b 00                	mov    (%eax),%eax
c1008877:	83 ec 08             	sub    $0x8,%esp
c100887a:	50                   	push   %eax
c100887b:	68 b0 b3 00 c1       	push   $0xc100b3b0
c1008880:	e8 2e bf ff ff       	call   c10047b3 <printk>
c1008885:	83 c4 10             	add    $0x10,%esp
c1008888:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100888b:	89 d0                	mov    %edx,%eax
c100888d:	01 c0                	add    %eax,%eax
c100888f:	01 d0                	add    %edx,%eax
c1008891:	c1 e0 02             	shl    $0x2,%eax
c1008894:	05 60 34 a1 c1       	add    $0xc1a13460,%eax
c1008899:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100889f:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
c10088a3:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10088a6:	89 d0                	mov    %edx,%eax
c10088a8:	01 c0                	add    %eax,%eax
c10088aa:	01 d0                	add    %edx,%eax
c10088ac:	c1 e0 02             	shl    $0x2,%eax
c10088af:	05 64 34 a1 c1       	add    $0xc1a13464,%eax
c10088b4:	89 08                	mov    %ecx,(%eax)
c10088b6:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10088b9:	89 d0                	mov    %edx,%eax
c10088bb:	01 c0                	add    %eax,%eax
c10088bd:	01 d0                	add    %edx,%eax
c10088bf:	c1 e0 02             	shl    $0x2,%eax
c10088c2:	05 68 34 a1 c1       	add    $0xc1a13468,%eax
c10088c7:	8b 00                	mov    (%eax),%eax
c10088c9:	83 c0 0c             	add    $0xc,%eax
c10088cc:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10088cf:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10088d3:	83 e0 01             	and    $0x1,%eax
c10088d6:	85 c0                	test   %eax,%eax
c10088d8:	75 0b                	jne    c10088e5 <file_open+0xf3>
c10088da:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10088de:	83 e0 02             	and    $0x2,%eax
c10088e1:	85 c0                	test   %eax,%eax
c10088e3:	74 4d                	je     c1008932 <file_open+0x140>
c10088e5:	e8 63 84 ff ff       	call   c1000d4d <intr_save>
c10088ea:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10088ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10088f0:	0f b6 00             	movzbl (%eax),%eax
c10088f3:	84 c0                	test   %al,%al
c10088f5:	75 16                	jne    c100890d <file_open+0x11b>
c10088f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10088fa:	c6 00 01             	movb   $0x1,(%eax)
c10088fd:	83 ec 0c             	sub    $0xc,%esp
c1008900:	ff 75 ec             	pushl  -0x14(%ebp)
c1008903:	e8 58 84 ff ff       	call   c1000d60 <intr_restore>
c1008908:	83 c4 10             	add    $0x10,%esp
c100890b:	eb 25                	jmp    c1008932 <file_open+0x140>
c100890d:	83 ec 0c             	sub    $0xc,%esp
c1008910:	ff 75 ec             	pushl  -0x14(%ebp)
c1008913:	e8 48 84 ff ff       	call   c1000d60 <intr_restore>
c1008918:	83 c4 10             	add    $0x10,%esp
c100891b:	83 ec 0c             	sub    $0xc,%esp
c100891e:	68 d8 b3 00 c1       	push   $0xc100b3d8
c1008923:	e8 8b be ff ff       	call   c10047b3 <printk>
c1008928:	83 c4 10             	add    $0x10,%esp
c100892b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008930:	eb 0e                	jmp    c1008940 <file_open+0x14e>
c1008932:	83 ec 0c             	sub    $0xc,%esp
c1008935:	ff 75 f4             	pushl  -0xc(%ebp)
c1008938:	e8 7d f9 ff ff       	call   c10082ba <task_fd_install>
c100893d:	83 c4 10             	add    $0x10,%esp
c1008940:	c9                   	leave  
c1008941:	c3                   	ret    

c1008942 <file_close>:
c1008942:	55                   	push   %ebp
c1008943:	89 e5                	mov    %esp,%ebp
c1008945:	83 ec 08             	sub    $0x8,%esp
c1008948:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100894c:	75 07                	jne    c1008955 <file_close+0x13>
c100894e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008953:	eb 2b                	jmp    c1008980 <file_close+0x3e>
c1008955:	8b 45 08             	mov    0x8(%ebp),%eax
c1008958:	8b 40 08             	mov    0x8(%eax),%eax
c100895b:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c100895f:	8b 45 08             	mov    0x8(%ebp),%eax
c1008962:	8b 40 08             	mov    0x8(%eax),%eax
c1008965:	83 ec 0c             	sub    $0xc,%esp
c1008968:	50                   	push   %eax
c1008969:	e8 c2 0d 00 00       	call   c1009730 <inode_close>
c100896e:	83 c4 10             	add    $0x10,%esp
c1008971:	8b 45 08             	mov    0x8(%ebp),%eax
c1008974:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100897b:	b8 00 00 00 00       	mov    $0x0,%eax
c1008980:	c9                   	leave  
c1008981:	c3                   	ret    

c1008982 <file_write>:
c1008982:	55                   	push   %ebp
c1008983:	89 e5                	mov    %esp,%ebp
c1008985:	83 ec 58             	sub    $0x58,%esp
c1008988:	8b 45 08             	mov    0x8(%ebp),%eax
c100898b:	8b 40 08             	mov    0x8(%eax),%eax
c100898e:	8b 50 04             	mov    0x4(%eax),%edx
c1008991:	8b 45 10             	mov    0x10(%ebp),%eax
c1008994:	01 d0                	add    %edx,%eax
c1008996:	3d 00 18 01 00       	cmp    $0x11800,%eax
c100899b:	76 1a                	jbe    c10089b7 <file_write+0x35>
c100899d:	83 ec 0c             	sub    $0xc,%esp
c10089a0:	68 04 b4 00 c1       	push   $0xc100b404
c10089a5:	e8 09 be ff ff       	call   c10047b3 <printk>
c10089aa:	83 c4 10             	add    $0x10,%esp
c10089ad:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10089b2:	e9 3e 07 00 00       	jmp    c10090f5 <file_write+0x773>
c10089b7:	83 ec 08             	sub    $0x8,%esp
c10089ba:	6a 01                	push   $0x1
c10089bc:	68 00 02 00 00       	push   $0x200
c10089c1:	e8 7d a1 ff ff       	call   c1002b43 <vmm_malloc>
c10089c6:	83 c4 10             	add    $0x10,%esp
c10089c9:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10089cc:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c10089d0:	75 1a                	jne    c10089ec <file_write+0x6a>
c10089d2:	83 ec 0c             	sub    $0xc,%esp
c10089d5:	68 3c b4 00 c1       	push   $0xc100b43c
c10089da:	e8 d4 bd ff ff       	call   c10047b3 <printk>
c10089df:	83 c4 10             	add    $0x10,%esp
c10089e2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10089e7:	e9 09 07 00 00       	jmp    c10090f5 <file_write+0x773>
c10089ec:	83 ec 08             	sub    $0x8,%esp
c10089ef:	6a 01                	push   $0x1
c10089f1:	68 30 02 00 00       	push   $0x230
c10089f6:	e8 48 a1 ff ff       	call   c1002b43 <vmm_malloc>
c10089fb:	83 c4 10             	add    $0x10,%esp
c10089fe:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008a01:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c1008a05:	75 1a                	jne    c1008a21 <file_write+0x9f>
c1008a07:	83 ec 0c             	sub    $0xc,%esp
c1008a0a:	68 68 b4 00 c1       	push   $0xc100b468
c1008a0f:	e8 9f bd ff ff       	call   c10047b3 <printk>
c1008a14:	83 c4 10             	add    $0x10,%esp
c1008a17:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008a1c:	e9 d4 06 00 00       	jmp    c10090f5 <file_write+0x773>
c1008a21:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008a24:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008a27:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008a2e:	8b 45 10             	mov    0x10(%ebp),%eax
c1008a31:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008a34:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1008a3b:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
c1008a42:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a45:	8b 40 08             	mov    0x8(%eax),%eax
c1008a48:	8b 40 10             	mov    0x10(%eax),%eax
c1008a4b:	85 c0                	test   %eax,%eax
c1008a4d:	0f 85 8a 00 00 00    	jne    c1008add <file_write+0x15b>
c1008a53:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008a58:	83 ec 0c             	sub    $0xc,%esp
c1008a5b:	50                   	push   %eax
c1008a5c:	e8 5d f9 ff ff       	call   c10083be <block_bitmap_alloc>
c1008a61:	83 c4 10             	add    $0x10,%esp
c1008a64:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008a67:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008a6b:	75 1a                	jne    c1008a87 <file_write+0x105>
c1008a6d:	83 ec 0c             	sub    $0xc,%esp
c1008a70:	68 98 b4 00 c1       	push   $0xc100b498
c1008a75:	e8 39 bd ff ff       	call   c10047b3 <printk>
c1008a7a:	83 c4 10             	add    $0x10,%esp
c1008a7d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008a82:	e9 6e 06 00 00       	jmp    c10090f5 <file_write+0x773>
c1008a87:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a8a:	8b 40 08             	mov    0x8(%eax),%eax
c1008a8d:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008a90:	89 50 10             	mov    %edx,0x10(%eax)
c1008a93:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008a96:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008a9b:	8b 40 10             	mov    0x10(%eax),%eax
c1008a9e:	8b 40 28             	mov    0x28(%eax),%eax
c1008aa1:	29 c2                	sub    %eax,%edx
c1008aa3:	89 d0                	mov    %edx,%eax
c1008aa5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008aa8:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
c1008aac:	75 19                	jne    c1008ac7 <file_write+0x145>
c1008aae:	68 bf b4 00 c1       	push   $0xc100b4bf
c1008ab3:	68 80 b7 00 c1       	push   $0xc100b780
c1008ab8:	68 1e 01 00 00       	push   $0x11e
c1008abd:	68 d8 b4 00 c1       	push   $0xc100b4d8
c1008ac2:	e8 46 78 ff ff       	call   c100030d <__PANIC>
c1008ac7:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008acc:	83 ec 04             	sub    $0x4,%esp
c1008acf:	6a 01                	push   $0x1
c1008ad1:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008ad4:	50                   	push   %eax
c1008ad5:	e8 b2 f9 ff ff       	call   c100848c <bitmap_sync>
c1008ada:	83 c4 10             	add    $0x10,%esp
c1008add:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ae0:	8b 40 08             	mov    0x8(%eax),%eax
c1008ae3:	8b 40 04             	mov    0x4(%eax),%eax
c1008ae6:	c1 e8 09             	shr    $0x9,%eax
c1008ae9:	83 c0 01             	add    $0x1,%eax
c1008aec:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008aef:	8b 45 08             	mov    0x8(%ebp),%eax
c1008af2:	8b 40 08             	mov    0x8(%eax),%eax
c1008af5:	8b 50 04             	mov    0x4(%eax),%edx
c1008af8:	8b 45 10             	mov    0x10(%ebp),%eax
c1008afb:	01 d0                	add    %edx,%eax
c1008afd:	c1 e8 09             	shr    $0x9,%eax
c1008b00:	83 c0 01             	add    $0x1,%eax
c1008b03:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008b06:	81 7d cc 8c 00 00 00 	cmpl   $0x8c,-0x34(%ebp)
c1008b0d:	76 19                	jbe    c1008b28 <file_write+0x1a6>
c1008b0f:	68 09 b5 00 c1       	push   $0xc100b509
c1008b14:	68 80 b7 00 c1       	push   $0xc100b780
c1008b19:	68 27 01 00 00       	push   $0x127
c1008b1e:	68 d8 b4 00 c1       	push   $0xc100b4d8
c1008b23:	e8 e5 77 ff ff       	call   c100030d <__PANIC>
c1008b28:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008b2b:	2b 45 d0             	sub    -0x30(%ebp),%eax
c1008b2e:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1008b31:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
c1008b35:	0f 85 83 00 00 00    	jne    c1008bbe <file_write+0x23c>
c1008b3b:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1008b3f:	77 2e                	ja     c1008b6f <file_write+0x1ed>
c1008b41:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008b44:	83 e8 01             	sub    $0x1,%eax
c1008b47:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008b4a:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b4d:	8b 40 08             	mov    0x8(%eax),%eax
c1008b50:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008b53:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008b5a:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008b5d:	01 ca                	add    %ecx,%edx
c1008b5f:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008b62:	83 c1 04             	add    $0x4,%ecx
c1008b65:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1008b68:	89 02                	mov    %eax,(%edx)
c1008b6a:	e9 24 04 00 00       	jmp    c1008f93 <file_write+0x611>
c1008b6f:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b72:	8b 40 08             	mov    0x8(%eax),%eax
c1008b75:	8b 40 40             	mov    0x40(%eax),%eax
c1008b78:	85 c0                	test   %eax,%eax
c1008b7a:	75 19                	jne    c1008b95 <file_write+0x213>
c1008b7c:	68 28 b5 00 c1       	push   $0xc100b528
c1008b81:	68 80 b7 00 c1       	push   $0xc100b780
c1008b86:	68 35 01 00 00       	push   $0x135
c1008b8b:	68 d8 b4 00 c1       	push   $0xc100b4d8
c1008b90:	e8 78 77 ff ff       	call   c100030d <__PANIC>
c1008b95:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b98:	8b 40 08             	mov    0x8(%eax),%eax
c1008b9b:	8b 40 40             	mov    0x40(%eax),%eax
c1008b9e:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1008ba1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008ba4:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008ba7:	83 c2 30             	add    $0x30,%edx
c1008baa:	83 ec 04             	sub    $0x4,%esp
c1008bad:	6a 01                	push   $0x1
c1008baf:	50                   	push   %eax
c1008bb0:	52                   	push   %edx
c1008bb1:	e8 40 c5 ff ff       	call   c10050f6 <ide_read>
c1008bb6:	83 c4 10             	add    $0x10,%esp
c1008bb9:	e9 d5 03 00 00       	jmp    c1008f93 <file_write+0x611>
c1008bbe:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1008bc2:	0f 87 25 01 00 00    	ja     c1008ced <file_write+0x36b>
c1008bc8:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008bcb:	83 e8 01             	sub    $0x1,%eax
c1008bce:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008bd1:	8b 45 08             	mov    0x8(%ebp),%eax
c1008bd4:	8b 40 08             	mov    0x8(%eax),%eax
c1008bd7:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008bda:	83 c2 04             	add    $0x4,%edx
c1008bdd:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008be0:	85 c0                	test   %eax,%eax
c1008be2:	75 19                	jne    c1008bfd <file_write+0x27b>
c1008be4:	68 4c b5 00 c1       	push   $0xc100b54c
c1008be9:	68 80 b7 00 c1       	push   $0xc100b780
c1008bee:	68 3f 01 00 00       	push   $0x13f
c1008bf3:	68 d8 b4 00 c1       	push   $0xc100b4d8
c1008bf8:	e8 10 77 ff ff       	call   c100030d <__PANIC>
c1008bfd:	8b 45 08             	mov    0x8(%ebp),%eax
c1008c00:	8b 40 08             	mov    0x8(%eax),%eax
c1008c03:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008c06:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008c0d:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008c10:	01 ca                	add    %ecx,%edx
c1008c12:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008c15:	83 c1 04             	add    $0x4,%ecx
c1008c18:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1008c1b:	89 02                	mov    %eax,(%edx)
c1008c1d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008c20:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008c23:	e9 b4 00 00 00       	jmp    c1008cdc <file_write+0x35a>
c1008c28:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008c2d:	83 ec 0c             	sub    $0xc,%esp
c1008c30:	50                   	push   %eax
c1008c31:	e8 88 f7 ff ff       	call   c10083be <block_bitmap_alloc>
c1008c36:	83 c4 10             	add    $0x10,%esp
c1008c39:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008c3c:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008c40:	75 1a                	jne    c1008c5c <file_write+0x2da>
c1008c42:	83 ec 0c             	sub    $0xc,%esp
c1008c45:	68 78 b5 00 c1       	push   $0xc100b578
c1008c4a:	e8 64 bb ff ff       	call   c10047b3 <printk>
c1008c4f:	83 c4 10             	add    $0x10,%esp
c1008c52:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008c57:	e9 99 04 00 00       	jmp    c10090f5 <file_write+0x773>
c1008c5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1008c5f:	8b 40 08             	mov    0x8(%eax),%eax
c1008c62:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008c65:	83 c2 04             	add    $0x4,%edx
c1008c68:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008c6b:	85 c0                	test   %eax,%eax
c1008c6d:	74 19                	je     c1008c88 <file_write+0x306>
c1008c6f:	68 b0 b5 00 c1       	push   $0xc100b5b0
c1008c74:	68 80 b7 00 c1       	push   $0xc100b780
c1008c79:	68 4c 01 00 00       	push   $0x14c
c1008c7e:	68 d8 b4 00 c1       	push   $0xc100b4d8
c1008c83:	e8 85 76 ff ff       	call   c100030d <__PANIC>
c1008c88:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008c8b:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008c92:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008c95:	01 d0                	add    %edx,%eax
c1008c97:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008c9a:	89 10                	mov    %edx,(%eax)
c1008c9c:	8b 55 08             	mov    0x8(%ebp),%edx
c1008c9f:	8b 52 08             	mov    0x8(%edx),%edx
c1008ca2:	8b 00                	mov    (%eax),%eax
c1008ca4:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008ca7:	83 c1 04             	add    $0x4,%ecx
c1008caa:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1008cad:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008cb0:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008cb5:	8b 40 10             	mov    0x10(%eax),%eax
c1008cb8:	8b 40 28             	mov    0x28(%eax),%eax
c1008cbb:	29 c2                	sub    %eax,%edx
c1008cbd:	89 d0                	mov    %edx,%eax
c1008cbf:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008cc2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008cc7:	83 ec 04             	sub    $0x4,%esp
c1008cca:	6a 01                	push   $0x1
c1008ccc:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008ccf:	50                   	push   %eax
c1008cd0:	e8 b7 f7 ff ff       	call   c100848c <bitmap_sync>
c1008cd5:	83 c4 10             	add    $0x10,%esp
c1008cd8:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008cdc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008cdf:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1008ce2:	0f 82 40 ff ff ff    	jb     c1008c28 <file_write+0x2a6>
c1008ce8:	e9 a6 02 00 00       	jmp    c1008f93 <file_write+0x611>
c1008ced:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1008cf1:	0f 87 a3 01 00 00    	ja     c1008e9a <file_write+0x518>
c1008cf7:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1008cfb:	0f 86 99 01 00 00    	jbe    c1008e9a <file_write+0x518>
c1008d01:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008d04:	83 e8 01             	sub    $0x1,%eax
c1008d07:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008d0a:	8b 45 08             	mov    0x8(%ebp),%eax
c1008d0d:	8b 40 08             	mov    0x8(%eax),%eax
c1008d10:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008d13:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008d1a:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008d1d:	01 ca                	add    %ecx,%edx
c1008d1f:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008d22:	83 c1 04             	add    $0x4,%ecx
c1008d25:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1008d28:	89 02                	mov    %eax,(%edx)
c1008d2a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008d2f:	83 ec 0c             	sub    $0xc,%esp
c1008d32:	50                   	push   %eax
c1008d33:	e8 86 f6 ff ff       	call   c10083be <block_bitmap_alloc>
c1008d38:	83 c4 10             	add    $0x10,%esp
c1008d3b:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008d3e:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008d42:	75 1a                	jne    c1008d5e <file_write+0x3dc>
c1008d44:	83 ec 0c             	sub    $0xc,%esp
c1008d47:	68 dc b5 00 c1       	push   $0xc100b5dc
c1008d4c:	e8 62 ba ff ff       	call   c10047b3 <printk>
c1008d51:	83 c4 10             	add    $0x10,%esp
c1008d54:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008d59:	e9 97 03 00 00       	jmp    c10090f5 <file_write+0x773>
c1008d5e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008d61:	8b 40 08             	mov    0x8(%eax),%eax
c1008d64:	8b 40 40             	mov    0x40(%eax),%eax
c1008d67:	85 c0                	test   %eax,%eax
c1008d69:	74 19                	je     c1008d84 <file_write+0x402>
c1008d6b:	68 14 b6 00 c1       	push   $0xc100b614
c1008d70:	68 80 b7 00 c1       	push   $0xc100b780
c1008d75:	68 63 01 00 00       	push   $0x163
c1008d7a:	68 d8 b4 00 c1       	push   $0xc100b4d8
c1008d7f:	e8 89 75 ff ff       	call   c100030d <__PANIC>
c1008d84:	8b 45 08             	mov    0x8(%ebp),%eax
c1008d87:	8b 40 08             	mov    0x8(%eax),%eax
c1008d8a:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008d8d:	89 50 40             	mov    %edx,0x40(%eax)
c1008d90:	8b 40 40             	mov    0x40(%eax),%eax
c1008d93:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1008d96:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008d99:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008d9c:	e9 d0 00 00 00       	jmp    c1008e71 <file_write+0x4ef>
c1008da1:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008da6:	83 ec 0c             	sub    $0xc,%esp
c1008da9:	50                   	push   %eax
c1008daa:	e8 0f f6 ff ff       	call   c10083be <block_bitmap_alloc>
c1008daf:	83 c4 10             	add    $0x10,%esp
c1008db2:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008db5:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008db9:	75 1a                	jne    c1008dd5 <file_write+0x453>
c1008dbb:	83 ec 0c             	sub    $0xc,%esp
c1008dbe:	68 dc b5 00 c1       	push   $0xc100b5dc
c1008dc3:	e8 eb b9 ff ff       	call   c10047b3 <printk>
c1008dc8:	83 c4 10             	add    $0x10,%esp
c1008dcb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008dd0:	e9 20 03 00 00       	jmp    c10090f5 <file_write+0x773>
c1008dd5:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1008dd9:	77 53                	ja     c1008e2e <file_write+0x4ac>
c1008ddb:	8b 45 08             	mov    0x8(%ebp),%eax
c1008dde:	8b 40 08             	mov    0x8(%eax),%eax
c1008de1:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008de4:	83 c2 04             	add    $0x4,%edx
c1008de7:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008dea:	85 c0                	test   %eax,%eax
c1008dec:	74 19                	je     c1008e07 <file_write+0x485>
c1008dee:	68 b0 b5 00 c1       	push   $0xc100b5b0
c1008df3:	68 80 b7 00 c1       	push   $0xc100b780
c1008df8:	68 70 01 00 00       	push   $0x170
c1008dfd:	68 d8 b4 00 c1       	push   $0xc100b4d8
c1008e02:	e8 06 75 ff ff       	call   c100030d <__PANIC>
c1008e07:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008e0a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008e11:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008e14:	01 d0                	add    %edx,%eax
c1008e16:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008e19:	89 10                	mov    %edx,(%eax)
c1008e1b:	8b 55 08             	mov    0x8(%ebp),%edx
c1008e1e:	8b 52 08             	mov    0x8(%edx),%edx
c1008e21:	8b 00                	mov    (%eax),%eax
c1008e23:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008e26:	83 c1 04             	add    $0x4,%ecx
c1008e29:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1008e2c:	eb 14                	jmp    c1008e42 <file_write+0x4c0>
c1008e2e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008e31:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008e38:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008e3b:	01 c2                	add    %eax,%edx
c1008e3d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008e40:	89 02                	mov    %eax,(%edx)
c1008e42:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008e45:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008e4a:	8b 40 10             	mov    0x10(%eax),%eax
c1008e4d:	8b 40 28             	mov    0x28(%eax),%eax
c1008e50:	29 c2                	sub    %eax,%edx
c1008e52:	89 d0                	mov    %edx,%eax
c1008e54:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008e57:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008e5c:	83 ec 04             	sub    $0x4,%esp
c1008e5f:	6a 01                	push   $0x1
c1008e61:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008e64:	50                   	push   %eax
c1008e65:	e8 22 f6 ff ff       	call   c100848c <bitmap_sync>
c1008e6a:	83 c4 10             	add    $0x10,%esp
c1008e6d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008e71:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008e74:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1008e77:	0f 82 24 ff ff ff    	jb     c1008da1 <file_write+0x41f>
c1008e7d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008e80:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008e83:	83 c2 30             	add    $0x30,%edx
c1008e86:	83 ec 04             	sub    $0x4,%esp
c1008e89:	6a 01                	push   $0x1
c1008e8b:	50                   	push   %eax
c1008e8c:	52                   	push   %edx
c1008e8d:	e8 a1 c2 ff ff       	call   c1005133 <ide_write>
c1008e92:	83 c4 10             	add    $0x10,%esp
c1008e95:	e9 f9 00 00 00       	jmp    c1008f93 <file_write+0x611>
c1008e9a:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1008e9e:	0f 86 ef 00 00 00    	jbe    c1008f93 <file_write+0x611>
c1008ea4:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ea7:	8b 40 08             	mov    0x8(%eax),%eax
c1008eaa:	8b 40 40             	mov    0x40(%eax),%eax
c1008ead:	85 c0                	test   %eax,%eax
c1008eaf:	75 19                	jne    c1008eca <file_write+0x548>
c1008eb1:	68 28 b5 00 c1       	push   $0xc100b528
c1008eb6:	68 80 b7 00 c1       	push   $0xc100b780
c1008ebb:	68 7f 01 00 00       	push   $0x17f
c1008ec0:	68 d8 b4 00 c1       	push   $0xc100b4d8
c1008ec5:	e8 43 74 ff ff       	call   c100030d <__PANIC>
c1008eca:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ecd:	8b 40 08             	mov    0x8(%eax),%eax
c1008ed0:	8b 40 40             	mov    0x40(%eax),%eax
c1008ed3:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1008ed6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008ed9:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008edc:	83 c2 30             	add    $0x30,%edx
c1008edf:	83 ec 04             	sub    $0x4,%esp
c1008ee2:	6a 01                	push   $0x1
c1008ee4:	50                   	push   %eax
c1008ee5:	52                   	push   %edx
c1008ee6:	e8 0b c2 ff ff       	call   c10050f6 <ide_read>
c1008eeb:	83 c4 10             	add    $0x10,%esp
c1008eee:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008ef1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008ef4:	eb 79                	jmp    c1008f6f <file_write+0x5ed>
c1008ef6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008efb:	83 ec 0c             	sub    $0xc,%esp
c1008efe:	50                   	push   %eax
c1008eff:	e8 ba f4 ff ff       	call   c10083be <block_bitmap_alloc>
c1008f04:	83 c4 10             	add    $0x10,%esp
c1008f07:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008f0a:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008f0e:	75 1a                	jne    c1008f2a <file_write+0x5a8>
c1008f10:	83 ec 0c             	sub    $0xc,%esp
c1008f13:	68 38 b6 00 c1       	push   $0xc100b638
c1008f18:	e8 96 b8 ff ff       	call   c10047b3 <printk>
c1008f1d:	83 c4 10             	add    $0x10,%esp
c1008f20:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008f25:	e9 cb 01 00 00       	jmp    c10090f5 <file_write+0x773>
c1008f2a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008f2d:	8d 50 01             	lea    0x1(%eax),%edx
c1008f30:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1008f33:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008f3a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008f3d:	01 c2                	add    %eax,%edx
c1008f3f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008f42:	89 02                	mov    %eax,(%edx)
c1008f44:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008f47:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008f4c:	8b 40 10             	mov    0x10(%eax),%eax
c1008f4f:	8b 40 28             	mov    0x28(%eax),%eax
c1008f52:	29 c2                	sub    %eax,%edx
c1008f54:	89 d0                	mov    %edx,%eax
c1008f56:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008f59:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008f5e:	83 ec 04             	sub    $0x4,%esp
c1008f61:	6a 01                	push   $0x1
c1008f63:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008f66:	50                   	push   %eax
c1008f67:	e8 20 f5 ff ff       	call   c100848c <bitmap_sync>
c1008f6c:	83 c4 10             	add    $0x10,%esp
c1008f6f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008f72:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1008f75:	0f 82 7b ff ff ff    	jb     c1008ef6 <file_write+0x574>
c1008f7b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008f7e:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008f81:	83 c2 30             	add    $0x30,%edx
c1008f84:	83 ec 04             	sub    $0x4,%esp
c1008f87:	6a 01                	push   $0x1
c1008f89:	50                   	push   %eax
c1008f8a:	52                   	push   %edx
c1008f8b:	e8 a3 c1 ff ff       	call   c1005133 <ide_write>
c1008f90:	83 c4 10             	add    $0x10,%esp
c1008f93:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
c1008f97:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f9a:	8b 40 08             	mov    0x8(%eax),%eax
c1008f9d:	8b 40 04             	mov    0x4(%eax),%eax
c1008fa0:	8d 50 ff             	lea    -0x1(%eax),%edx
c1008fa3:	8b 45 08             	mov    0x8(%ebp),%eax
c1008fa6:	89 10                	mov    %edx,(%eax)
c1008fa8:	e9 f6 00 00 00       	jmp    c10090a3 <file_write+0x721>
c1008fad:	83 ec 04             	sub    $0x4,%esp
c1008fb0:	68 00 02 00 00       	push   $0x200
c1008fb5:	6a 00                	push   $0x0
c1008fb7:	ff 75 e0             	pushl  -0x20(%ebp)
c1008fba:	e8 eb 70 ff ff       	call   c10000aa <memset>
c1008fbf:	83 c4 10             	add    $0x10,%esp
c1008fc2:	8b 45 08             	mov    0x8(%ebp),%eax
c1008fc5:	8b 40 08             	mov    0x8(%eax),%eax
c1008fc8:	8b 40 04             	mov    0x4(%eax),%eax
c1008fcb:	c1 e8 09             	shr    $0x9,%eax
c1008fce:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1008fd1:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1008fd4:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008fdb:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008fde:	01 d0                	add    %edx,%eax
c1008fe0:	8b 00                	mov    (%eax),%eax
c1008fe2:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1008fe5:	8b 45 08             	mov    0x8(%ebp),%eax
c1008fe8:	8b 40 08             	mov    0x8(%eax),%eax
c1008feb:	8b 40 04             	mov    0x4(%eax),%eax
c1008fee:	25 ff 01 00 00       	and    $0x1ff,%eax
c1008ff3:	89 45 b8             	mov    %eax,-0x48(%ebp)
c1008ff6:	b8 00 02 00 00       	mov    $0x200,%eax
c1008ffb:	2b 45 b8             	sub    -0x48(%ebp),%eax
c1008ffe:	89 45 b4             	mov    %eax,-0x4c(%ebp)
c1009001:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009004:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
c1009007:	0f 46 45 b4          	cmovbe -0x4c(%ebp),%eax
c100900b:	89 45 b0             	mov    %eax,-0x50(%ebp)
c100900e:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
c1009012:	74 17                	je     c100902b <file_write+0x6a9>
c1009014:	83 ec 04             	sub    $0x4,%esp
c1009017:	6a 01                	push   $0x1
c1009019:	ff 75 bc             	pushl  -0x44(%ebp)
c100901c:	ff 75 e0             	pushl  -0x20(%ebp)
c100901f:	e8 d2 c0 ff ff       	call   c10050f6 <ide_read>
c1009024:	83 c4 10             	add    $0x10,%esp
c1009027:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
c100902b:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100902e:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009031:	01 d0                	add    %edx,%eax
c1009033:	83 ec 04             	sub    $0x4,%esp
c1009036:	ff 75 b0             	pushl  -0x50(%ebp)
c1009039:	ff 75 f4             	pushl  -0xc(%ebp)
c100903c:	50                   	push   %eax
c100903d:	e8 c6 70 ff ff       	call   c1000108 <memcpy>
c1009042:	83 c4 10             	add    $0x10,%esp
c1009045:	83 ec 04             	sub    $0x4,%esp
c1009048:	6a 01                	push   $0x1
c100904a:	ff 75 bc             	pushl  -0x44(%ebp)
c100904d:	ff 75 e0             	pushl  -0x20(%ebp)
c1009050:	e8 de c0 ff ff       	call   c1005133 <ide_write>
c1009055:	83 c4 10             	add    $0x10,%esp
c1009058:	83 ec 08             	sub    $0x8,%esp
c100905b:	ff 75 bc             	pushl  -0x44(%ebp)
c100905e:	68 6f b6 00 c1       	push   $0xc100b66f
c1009063:	e8 4b b7 ff ff       	call   c10047b3 <printk>
c1009068:	83 c4 10             	add    $0x10,%esp
c100906b:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100906e:	01 45 f4             	add    %eax,-0xc(%ebp)
c1009071:	8b 45 08             	mov    0x8(%ebp),%eax
c1009074:	8b 40 08             	mov    0x8(%eax),%eax
c1009077:	8b 48 04             	mov    0x4(%eax),%ecx
c100907a:	8b 45 08             	mov    0x8(%ebp),%eax
c100907d:	8b 40 08             	mov    0x8(%eax),%eax
c1009080:	8b 55 b0             	mov    -0x50(%ebp),%edx
c1009083:	01 ca                	add    %ecx,%edx
c1009085:	89 50 04             	mov    %edx,0x4(%eax)
c1009088:	8b 45 08             	mov    0x8(%ebp),%eax
c100908b:	8b 10                	mov    (%eax),%edx
c100908d:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009090:	01 c2                	add    %eax,%edx
c1009092:	8b 45 08             	mov    0x8(%ebp),%eax
c1009095:	89 10                	mov    %edx,(%eax)
c1009097:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100909a:	01 45 f0             	add    %eax,-0x10(%ebp)
c100909d:	8b 45 b0             	mov    -0x50(%ebp),%eax
c10090a0:	29 45 ec             	sub    %eax,-0x14(%ebp)
c10090a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10090a6:	3b 45 10             	cmp    0x10(%ebp),%eax
c10090a9:	0f 82 fe fe ff ff    	jb     c1008fad <file_write+0x62b>
c10090af:	8b 45 08             	mov    0x8(%ebp),%eax
c10090b2:	8b 50 08             	mov    0x8(%eax),%edx
c10090b5:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10090ba:	83 ec 04             	sub    $0x4,%esp
c10090bd:	ff 75 e0             	pushl  -0x20(%ebp)
c10090c0:	52                   	push   %edx
c10090c1:	50                   	push   %eax
c10090c2:	e8 72 04 00 00       	call   c1009539 <inode_sync>
c10090c7:	83 c4 10             	add    $0x10,%esp
c10090ca:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10090cd:	83 ec 08             	sub    $0x8,%esp
c10090d0:	68 30 02 00 00       	push   $0x230
c10090d5:	50                   	push   %eax
c10090d6:	e8 88 9b ff ff       	call   c1002c63 <vmm_free>
c10090db:	83 c4 10             	add    $0x10,%esp
c10090de:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10090e1:	83 ec 08             	sub    $0x8,%esp
c10090e4:	68 00 02 00 00       	push   $0x200
c10090e9:	50                   	push   %eax
c10090ea:	e8 74 9b ff ff       	call   c1002c63 <vmm_free>
c10090ef:	83 c4 10             	add    $0x10,%esp
c10090f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10090f5:	c9                   	leave  
c10090f6:	c3                   	ret    

c10090f7 <file_read>:
c10090f7:	55                   	push   %ebp
c10090f8:	89 e5                	mov    %esp,%ebp
c10090fa:	83 ec 48             	sub    $0x48,%esp
c10090fd:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009100:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009103:	8b 45 10             	mov    0x10(%ebp),%eax
c1009106:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009109:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100910c:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100910f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009112:	8b 00                	mov    (%eax),%eax
c1009114:	83 ec 08             	sub    $0x8,%esp
c1009117:	50                   	push   %eax
c1009118:	68 89 b6 00 c1       	push   $0xc100b689
c100911d:	e8 91 b6 ff ff       	call   c10047b3 <printk>
c1009122:	83 c4 10             	add    $0x10,%esp
c1009125:	8b 45 08             	mov    0x8(%ebp),%eax
c1009128:	8b 40 08             	mov    0x8(%eax),%eax
c100912b:	8b 40 04             	mov    0x4(%eax),%eax
c100912e:	83 ec 08             	sub    $0x8,%esp
c1009131:	50                   	push   %eax
c1009132:	68 98 b6 00 c1       	push   $0xc100b698
c1009137:	e8 77 b6 ff ff       	call   c10047b3 <printk>
c100913c:	83 c4 10             	add    $0x10,%esp
c100913f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009142:	8b 10                	mov    (%eax),%edx
c1009144:	8b 45 10             	mov    0x10(%ebp),%eax
c1009147:	01 c2                	add    %eax,%edx
c1009149:	8b 45 08             	mov    0x8(%ebp),%eax
c100914c:	8b 40 08             	mov    0x8(%eax),%eax
c100914f:	8b 40 04             	mov    0x4(%eax),%eax
c1009152:	39 c2                	cmp    %eax,%edx
c1009154:	76 2b                	jbe    c1009181 <file_read+0x8a>
c1009156:	8b 45 08             	mov    0x8(%ebp),%eax
c1009159:	8b 40 08             	mov    0x8(%eax),%eax
c100915c:	8b 50 04             	mov    0x4(%eax),%edx
c100915f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009162:	8b 00                	mov    (%eax),%eax
c1009164:	29 c2                	sub    %eax,%edx
c1009166:	89 d0                	mov    %edx,%eax
c1009168:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100916b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100916e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009171:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1009175:	75 0a                	jne    c1009181 <file_read+0x8a>
c1009177:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100917c:	e9 44 03 00 00       	jmp    c10094c5 <file_read+0x3ce>
c1009181:	83 ec 08             	sub    $0x8,%esp
c1009184:	ff 75 f0             	pushl  -0x10(%ebp)
c1009187:	68 a8 b6 00 c1       	push   $0xc100b6a8
c100918c:	e8 22 b6 ff ff       	call   c10047b3 <printk>
c1009191:	83 c4 10             	add    $0x10,%esp
c1009194:	83 ec 08             	sub    $0x8,%esp
c1009197:	6a 01                	push   $0x1
c1009199:	68 00 02 00 00       	push   $0x200
c100919e:	e8 a0 99 ff ff       	call   c1002b43 <vmm_malloc>
c10091a3:	83 c4 10             	add    $0x10,%esp
c10091a6:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10091a9:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c10091ad:	75 10                	jne    c10091bf <file_read+0xc8>
c10091af:	83 ec 0c             	sub    $0xc,%esp
c10091b2:	68 c0 b6 00 c1       	push   $0xc100b6c0
c10091b7:	e8 f7 b5 ff ff       	call   c10047b3 <printk>
c10091bc:	83 c4 10             	add    $0x10,%esp
c10091bf:	83 ec 08             	sub    $0x8,%esp
c10091c2:	6a 01                	push   $0x1
c10091c4:	68 30 02 00 00       	push   $0x230
c10091c9:	e8 75 99 ff ff       	call   c1002b43 <vmm_malloc>
c10091ce:	83 c4 10             	add    $0x10,%esp
c10091d1:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10091d4:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c10091d8:	75 1a                	jne    c10091f4 <file_read+0xfd>
c10091da:	83 ec 0c             	sub    $0xc,%esp
c10091dd:	68 ec b6 00 c1       	push   $0xc100b6ec
c10091e2:	e8 cc b5 ff ff       	call   c10047b3 <printk>
c10091e7:	83 c4 10             	add    $0x10,%esp
c10091ea:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10091ef:	e9 d1 02 00 00       	jmp    c10094c5 <file_read+0x3ce>
c10091f4:	8b 45 08             	mov    0x8(%ebp),%eax
c10091f7:	8b 00                	mov    (%eax),%eax
c10091f9:	c1 e8 09             	shr    $0x9,%eax
c10091fc:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10091ff:	8b 45 08             	mov    0x8(%ebp),%eax
c1009202:	8b 10                	mov    (%eax),%edx
c1009204:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009207:	01 d0                	add    %edx,%eax
c1009209:	c1 e8 09             	shr    $0x9,%eax
c100920c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100920f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009212:	2b 45 d4             	sub    -0x2c(%ebp),%eax
c1009215:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1009218:	81 7d d8 8a 00 00 00 	cmpl   $0x8a,-0x28(%ebp)
c100921f:	77 09                	ja     c100922a <file_read+0x133>
c1009221:	81 7d d4 8a 00 00 00 	cmpl   $0x8a,-0x2c(%ebp)
c1009228:	76 19                	jbe    c1009243 <file_read+0x14c>
c100922a:	68 1c b7 00 c1       	push   $0xc100b71c
c100922f:	68 8c b7 00 c1       	push   $0xc100b78c
c1009234:	68 d1 01 00 00       	push   $0x1d1
c1009239:	68 d8 b4 00 c1       	push   $0xc100b4d8
c100923e:	e8 ca 70 ff ff       	call   c100030d <__PANIC>
c1009243:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
c1009247:	75 7b                	jne    c10092c4 <file_read+0x1cd>
c1009249:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100924c:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c100924f:	74 19                	je     c100926a <file_read+0x173>
c1009251:	68 54 b7 00 c1       	push   $0xc100b754
c1009256:	68 8c b7 00 c1       	push   $0xc100b78c
c100925b:	68 d8 01 00 00       	push   $0x1d8
c1009260:	68 d8 b4 00 c1       	push   $0xc100b4d8
c1009265:	e8 a3 70 ff ff       	call   c100030d <__PANIC>
c100926a:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100926e:	77 2b                	ja     c100929b <file_read+0x1a4>
c1009270:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1009273:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009276:	8b 45 08             	mov    0x8(%ebp),%eax
c1009279:	8b 40 08             	mov    0x8(%eax),%eax
c100927c:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100927f:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009286:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009289:	01 ca                	add    %ecx,%edx
c100928b:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100928e:	83 c1 04             	add    $0x4,%ecx
c1009291:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009294:	89 02                	mov    %eax,(%edx)
c1009296:	e9 40 01 00 00       	jmp    c10093db <file_read+0x2e4>
c100929b:	8b 45 08             	mov    0x8(%ebp),%eax
c100929e:	8b 40 08             	mov    0x8(%eax),%eax
c10092a1:	8b 40 40             	mov    0x40(%eax),%eax
c10092a4:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10092a7:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10092aa:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10092ad:	83 c2 30             	add    $0x30,%edx
c10092b0:	83 ec 04             	sub    $0x4,%esp
c10092b3:	6a 01                	push   $0x1
c10092b5:	50                   	push   %eax
c10092b6:	52                   	push   %edx
c10092b7:	e8 3a be ff ff       	call   c10050f6 <ide_read>
c10092bc:	83 c4 10             	add    $0x10,%esp
c10092bf:	e9 17 01 00 00       	jmp    c10093db <file_read+0x2e4>
c10092c4:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c10092c8:	77 39                	ja     c1009303 <file_read+0x20c>
c10092ca:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10092cd:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10092d0:	eb 24                	jmp    c10092f6 <file_read+0x1ff>
c10092d2:	8b 45 08             	mov    0x8(%ebp),%eax
c10092d5:	8b 40 08             	mov    0x8(%eax),%eax
c10092d8:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10092db:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10092e2:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10092e5:	01 ca                	add    %ecx,%edx
c10092e7:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c10092ea:	83 c1 04             	add    $0x4,%ecx
c10092ed:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c10092f0:	89 02                	mov    %eax,(%edx)
c10092f2:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c10092f6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10092f9:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
c10092fc:	76 d4                	jbe    c10092d2 <file_read+0x1db>
c10092fe:	e9 d8 00 00 00       	jmp    c10093db <file_read+0x2e4>
c1009303:	83 7d d8 0b          	cmpl   $0xb,-0x28(%ebp)
c1009307:	0f 87 84 00 00 00    	ja     c1009391 <file_read+0x29a>
c100930d:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c1009311:	76 7e                	jbe    c1009391 <file_read+0x29a>
c1009313:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009316:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009319:	eb 24                	jmp    c100933f <file_read+0x248>
c100931b:	8b 45 08             	mov    0x8(%ebp),%eax
c100931e:	8b 40 08             	mov    0x8(%eax),%eax
c1009321:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009324:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100932b:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100932e:	01 ca                	add    %ecx,%edx
c1009330:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009333:	83 c1 04             	add    $0x4,%ecx
c1009336:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009339:	89 02                	mov    %eax,(%edx)
c100933b:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c100933f:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1009343:	76 d6                	jbe    c100931b <file_read+0x224>
c1009345:	8b 45 08             	mov    0x8(%ebp),%eax
c1009348:	8b 40 08             	mov    0x8(%eax),%eax
c100934b:	8b 40 40             	mov    0x40(%eax),%eax
c100934e:	85 c0                	test   %eax,%eax
c1009350:	75 19                	jne    c100936b <file_read+0x274>
c1009352:	68 28 b5 00 c1       	push   $0xc100b528
c1009357:	68 8c b7 00 c1       	push   $0xc100b78c
c100935c:	68 f0 01 00 00       	push   $0x1f0
c1009361:	68 d8 b4 00 c1       	push   $0xc100b4d8
c1009366:	e8 a2 6f ff ff       	call   c100030d <__PANIC>
c100936b:	8b 45 08             	mov    0x8(%ebp),%eax
c100936e:	8b 40 08             	mov    0x8(%eax),%eax
c1009371:	8b 40 40             	mov    0x40(%eax),%eax
c1009374:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009377:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100937a:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100937d:	83 c2 30             	add    $0x30,%edx
c1009380:	83 ec 04             	sub    $0x4,%esp
c1009383:	6a 01                	push   $0x1
c1009385:	50                   	push   %eax
c1009386:	52                   	push   %edx
c1009387:	e8 6a bd ff ff       	call   c10050f6 <ide_read>
c100938c:	83 c4 10             	add    $0x10,%esp
c100938f:	eb 4a                	jmp    c10093db <file_read+0x2e4>
c1009391:	8b 45 08             	mov    0x8(%ebp),%eax
c1009394:	8b 40 08             	mov    0x8(%eax),%eax
c1009397:	8b 40 40             	mov    0x40(%eax),%eax
c100939a:	85 c0                	test   %eax,%eax
c100939c:	75 19                	jne    c10093b7 <file_read+0x2c0>
c100939e:	68 28 b5 00 c1       	push   $0xc100b528
c10093a3:	68 8c b7 00 c1       	push   $0xc100b78c
c10093a8:	68 f7 01 00 00       	push   $0x1f7
c10093ad:	68 d8 b4 00 c1       	push   $0xc100b4d8
c10093b2:	e8 56 6f ff ff       	call   c100030d <__PANIC>
c10093b7:	8b 45 08             	mov    0x8(%ebp),%eax
c10093ba:	8b 40 08             	mov    0x8(%eax),%eax
c10093bd:	8b 40 40             	mov    0x40(%eax),%eax
c10093c0:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10093c3:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10093c6:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10093c9:	83 c2 30             	add    $0x30,%edx
c10093cc:	83 ec 04             	sub    $0x4,%esp
c10093cf:	6a 01                	push   $0x1
c10093d1:	50                   	push   %eax
c10093d2:	52                   	push   %edx
c10093d3:	e8 1e bd ff ff       	call   c10050f6 <ide_read>
c10093d8:	83 c4 10             	add    $0x10,%esp
c10093db:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c10093e2:	e9 a7 00 00 00       	jmp    c100948e <file_read+0x397>
c10093e7:	8b 45 08             	mov    0x8(%ebp),%eax
c10093ea:	8b 00                	mov    (%eax),%eax
c10093ec:	c1 e8 09             	shr    $0x9,%eax
c10093ef:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10093f2:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10093f5:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10093fc:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10093ff:	01 d0                	add    %edx,%eax
c1009401:	8b 00                	mov    (%eax),%eax
c1009403:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009406:	8b 45 08             	mov    0x8(%ebp),%eax
c1009409:	8b 00                	mov    (%eax),%eax
c100940b:	25 ff 01 00 00       	and    $0x1ff,%eax
c1009410:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1009413:	b8 00 02 00 00       	mov    $0x200,%eax
c1009418:	2b 45 c0             	sub    -0x40(%ebp),%eax
c100941b:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100941e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009421:	39 45 bc             	cmp    %eax,-0x44(%ebp)
c1009424:	0f 46 45 bc          	cmovbe -0x44(%ebp),%eax
c1009428:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100942b:	83 ec 04             	sub    $0x4,%esp
c100942e:	68 00 02 00 00       	push   $0x200
c1009433:	6a 00                	push   $0x0
c1009435:	ff 75 e0             	pushl  -0x20(%ebp)
c1009438:	e8 6d 6c ff ff       	call   c10000aa <memset>
c100943d:	83 c4 10             	add    $0x10,%esp
c1009440:	83 ec 04             	sub    $0x4,%esp
c1009443:	6a 01                	push   $0x1
c1009445:	ff 75 c4             	pushl  -0x3c(%ebp)
c1009448:	ff 75 e0             	pushl  -0x20(%ebp)
c100944b:	e8 a6 bc ff ff       	call   c10050f6 <ide_read>
c1009450:	83 c4 10             	add    $0x10,%esp
c1009453:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1009456:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1009459:	01 d0                	add    %edx,%eax
c100945b:	83 ec 04             	sub    $0x4,%esp
c100945e:	ff 75 b8             	pushl  -0x48(%ebp)
c1009461:	50                   	push   %eax
c1009462:	ff 75 f4             	pushl  -0xc(%ebp)
c1009465:	e8 9e 6c ff ff       	call   c1000108 <memcpy>
c100946a:	83 c4 10             	add    $0x10,%esp
c100946d:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009470:	01 45 f4             	add    %eax,-0xc(%ebp)
c1009473:	8b 45 08             	mov    0x8(%ebp),%eax
c1009476:	8b 10                	mov    (%eax),%edx
c1009478:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100947b:	01 c2                	add    %eax,%edx
c100947d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009480:	89 10                	mov    %edx,(%eax)
c1009482:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009485:	01 45 e4             	add    %eax,-0x1c(%ebp)
c1009488:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100948b:	29 45 ec             	sub    %eax,-0x14(%ebp)
c100948e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009491:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1009494:	0f 82 4d ff ff ff    	jb     c10093e7 <file_read+0x2f0>
c100949a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100949d:	83 ec 08             	sub    $0x8,%esp
c10094a0:	68 30 02 00 00       	push   $0x230
c10094a5:	50                   	push   %eax
c10094a6:	e8 b8 97 ff ff       	call   c1002c63 <vmm_free>
c10094ab:	83 c4 10             	add    $0x10,%esp
c10094ae:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10094b1:	83 ec 08             	sub    $0x8,%esp
c10094b4:	68 00 02 00 00       	push   $0x200
c10094b9:	50                   	push   %eax
c10094ba:	e8 a4 97 ff ff       	call   c1002c63 <vmm_free>
c10094bf:	83 c4 10             	add    $0x10,%esp
c10094c2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10094c5:	c9                   	leave  
c10094c6:	c3                   	ret    

c10094c7 <inode_locate>:
c10094c7:	55                   	push   %ebp
c10094c8:	89 e5                	mov    %esp,%ebp
c10094ca:	83 ec 20             	sub    $0x20,%esp
c10094cd:	8b 45 08             	mov    0x8(%ebp),%eax
c10094d0:	8b 40 10             	mov    0x10(%eax),%eax
c10094d3:	8b 40 20             	mov    0x20(%eax),%eax
c10094d6:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10094d9:	c7 45 f8 44 00 00 00 	movl   $0x44,-0x8(%ebp)
c10094e0:	8b 45 0c             	mov    0xc(%ebp),%eax
c10094e3:	0f af 45 f8          	imul   -0x8(%ebp),%eax
c10094e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10094ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10094ed:	c1 e8 09             	shr    $0x9,%eax
c10094f0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10094f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10094f6:	25 ff 01 00 00       	and    $0x1ff,%eax
c10094fb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10094fe:	b8 00 02 00 00       	mov    $0x200,%eax
c1009503:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1009506:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009509:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100950c:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c100950f:	73 08                	jae    c1009519 <inode_locate+0x52>
c1009511:	8b 45 10             	mov    0x10(%ebp),%eax
c1009514:	c6 00 01             	movb   $0x1,(%eax)
c1009517:	eb 06                	jmp    c100951f <inode_locate+0x58>
c1009519:	8b 45 10             	mov    0x10(%ebp),%eax
c100951c:	c6 00 00             	movb   $0x0,(%eax)
c100951f:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009522:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009525:	01 c2                	add    %eax,%edx
c1009527:	8b 45 10             	mov    0x10(%ebp),%eax
c100952a:	89 50 04             	mov    %edx,0x4(%eax)
c100952d:	8b 45 10             	mov    0x10(%ebp),%eax
c1009530:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009533:	89 50 08             	mov    %edx,0x8(%eax)
c1009536:	90                   	nop
c1009537:	c9                   	leave  
c1009538:	c3                   	ret    

c1009539 <inode_sync>:
c1009539:	55                   	push   %ebp
c100953a:	89 e5                	mov    %esp,%ebp
c100953c:	57                   	push   %edi
c100953d:	56                   	push   %esi
c100953e:	53                   	push   %ebx
c100953f:	83 ec 6c             	sub    $0x6c,%esp
c1009542:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009545:	8b 00                	mov    (%eax),%eax
c1009547:	88 45 e7             	mov    %al,-0x19(%ebp)
c100954a:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
c100954e:	8d 55 d4             	lea    -0x2c(%ebp),%edx
c1009551:	52                   	push   %edx
c1009552:	50                   	push   %eax
c1009553:	ff 75 08             	pushl  0x8(%ebp)
c1009556:	e8 6c ff ff ff       	call   c10094c7 <inode_locate>
c100955b:	83 c4 0c             	add    $0xc,%esp
c100955e:	83 ec 04             	sub    $0x4,%esp
c1009561:	6a 44                	push   $0x44
c1009563:	ff 75 0c             	pushl  0xc(%ebp)
c1009566:	8d 45 90             	lea    -0x70(%ebp),%eax
c1009569:	50                   	push   %eax
c100956a:	e8 99 6b ff ff       	call   c1000108 <memcpy>
c100956f:	83 c4 10             	add    $0x10,%esp
c1009572:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
c1009579:	c6 45 9c 00          	movb   $0x0,-0x64(%ebp)
c100957d:	8b 45 10             	mov    0x10(%ebp),%eax
c1009580:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009583:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
c1009587:	84 c0                	test   %al,%al
c1009589:	74 64                	je     c10095ef <inode_sync+0xb6>
c100958b:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100958e:	83 ec 04             	sub    $0x4,%esp
c1009591:	6a 02                	push   $0x2
c1009593:	50                   	push   %eax
c1009594:	ff 75 e0             	pushl  -0x20(%ebp)
c1009597:	e8 5a bb ff ff       	call   c10050f6 <ide_read>
c100959c:	83 c4 10             	add    $0x10,%esp
c100959f:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10095a2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10095a5:	01 d0                	add    %edx,%eax
c10095a7:	89 c2                	mov    %eax,%edx
c10095a9:	8d 45 90             	lea    -0x70(%ebp),%eax
c10095ac:	b9 44 00 00 00       	mov    $0x44,%ecx
c10095b1:	8b 18                	mov    (%eax),%ebx
c10095b3:	89 1a                	mov    %ebx,(%edx)
c10095b5:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c10095b9:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c10095bd:	8d 5a 04             	lea    0x4(%edx),%ebx
c10095c0:	83 e3 fc             	and    $0xfffffffc,%ebx
c10095c3:	29 da                	sub    %ebx,%edx
c10095c5:	29 d0                	sub    %edx,%eax
c10095c7:	01 d1                	add    %edx,%ecx
c10095c9:	83 e1 fc             	and    $0xfffffffc,%ecx
c10095cc:	c1 e9 02             	shr    $0x2,%ecx
c10095cf:	89 ca                	mov    %ecx,%edx
c10095d1:	89 df                	mov    %ebx,%edi
c10095d3:	89 c6                	mov    %eax,%esi
c10095d5:	89 d1                	mov    %edx,%ecx
c10095d7:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c10095d9:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10095dc:	83 ec 04             	sub    $0x4,%esp
c10095df:	6a 02                	push   $0x2
c10095e1:	50                   	push   %eax
c10095e2:	ff 75 e0             	pushl  -0x20(%ebp)
c10095e5:	e8 49 bb ff ff       	call   c1005133 <ide_write>
c10095ea:	83 c4 10             	add    $0x10,%esp
c10095ed:	eb 62                	jmp    c1009651 <inode_sync+0x118>
c10095ef:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10095f2:	83 ec 04             	sub    $0x4,%esp
c10095f5:	6a 01                	push   $0x1
c10095f7:	50                   	push   %eax
c10095f8:	ff 75 e0             	pushl  -0x20(%ebp)
c10095fb:	e8 f6 ba ff ff       	call   c10050f6 <ide_read>
c1009600:	83 c4 10             	add    $0x10,%esp
c1009603:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009606:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009609:	01 d0                	add    %edx,%eax
c100960b:	89 c2                	mov    %eax,%edx
c100960d:	8d 45 90             	lea    -0x70(%ebp),%eax
c1009610:	b9 44 00 00 00       	mov    $0x44,%ecx
c1009615:	8b 18                	mov    (%eax),%ebx
c1009617:	89 1a                	mov    %ebx,(%edx)
c1009619:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c100961d:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c1009621:	8d 5a 04             	lea    0x4(%edx),%ebx
c1009624:	83 e3 fc             	and    $0xfffffffc,%ebx
c1009627:	29 da                	sub    %ebx,%edx
c1009629:	29 d0                	sub    %edx,%eax
c100962b:	01 d1                	add    %edx,%ecx
c100962d:	83 e1 fc             	and    $0xfffffffc,%ecx
c1009630:	c1 e9 02             	shr    $0x2,%ecx
c1009633:	89 ca                	mov    %ecx,%edx
c1009635:	89 df                	mov    %ebx,%edi
c1009637:	89 c6                	mov    %eax,%esi
c1009639:	89 d1                	mov    %edx,%ecx
c100963b:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100963d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009640:	83 ec 04             	sub    $0x4,%esp
c1009643:	6a 01                	push   $0x1
c1009645:	50                   	push   %eax
c1009646:	ff 75 e0             	pushl  -0x20(%ebp)
c1009649:	e8 e5 ba ff ff       	call   c1005133 <ide_write>
c100964e:	83 c4 10             	add    $0x10,%esp
c1009651:	90                   	nop
c1009652:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1009655:	5b                   	pop    %ebx
c1009656:	5e                   	pop    %esi
c1009657:	5f                   	pop    %edi
c1009658:	5d                   	pop    %ebp
c1009659:	c3                   	ret    

c100965a <inode_open>:
c100965a:	55                   	push   %ebp
c100965b:	89 e5                	mov    %esp,%ebp
c100965d:	83 ec 28             	sub    $0x28,%esp
c1009660:	8d 45 e4             	lea    -0x1c(%ebp),%eax
c1009663:	50                   	push   %eax
c1009664:	ff 75 0c             	pushl  0xc(%ebp)
c1009667:	ff 75 08             	pushl  0x8(%ebp)
c100966a:	e8 58 fe ff ff       	call   c10094c7 <inode_locate>
c100966f:	83 c4 0c             	add    $0xc,%esp
c1009672:	83 ec 08             	sub    $0x8,%esp
c1009675:	6a 01                	push   $0x1
c1009677:	6a 44                	push   $0x44
c1009679:	e8 c5 94 ff ff       	call   c1002b43 <vmm_malloc>
c100967e:	83 c4 10             	add    $0x10,%esp
c1009681:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009684:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009688:	84 c0                	test   %al,%al
c100968a:	74 2b                	je     c10096b7 <inode_open+0x5d>
c100968c:	83 ec 08             	sub    $0x8,%esp
c100968f:	6a 01                	push   $0x1
c1009691:	68 00 04 00 00       	push   $0x400
c1009696:	e8 a8 94 ff ff       	call   c1002b43 <vmm_malloc>
c100969b:	83 c4 10             	add    $0x10,%esp
c100969e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10096a1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10096a4:	83 ec 04             	sub    $0x4,%esp
c10096a7:	6a 02                	push   $0x2
c10096a9:	50                   	push   %eax
c10096aa:	ff 75 f4             	pushl  -0xc(%ebp)
c10096ad:	e8 44 ba ff ff       	call   c10050f6 <ide_read>
c10096b2:	83 c4 10             	add    $0x10,%esp
c10096b5:	eb 29                	jmp    c10096e0 <inode_open+0x86>
c10096b7:	83 ec 08             	sub    $0x8,%esp
c10096ba:	6a 01                	push   $0x1
c10096bc:	68 00 02 00 00       	push   $0x200
c10096c1:	e8 7d 94 ff ff       	call   c1002b43 <vmm_malloc>
c10096c6:	83 c4 10             	add    $0x10,%esp
c10096c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10096cc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10096cf:	83 ec 04             	sub    $0x4,%esp
c10096d2:	6a 01                	push   $0x1
c10096d4:	50                   	push   %eax
c10096d5:	ff 75 f4             	pushl  -0xc(%ebp)
c10096d8:	e8 19 ba ff ff       	call   c10050f6 <ide_read>
c10096dd:	83 c4 10             	add    $0x10,%esp
c10096e0:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10096e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10096e6:	01 d0                	add    %edx,%eax
c10096e8:	83 ec 04             	sub    $0x4,%esp
c10096eb:	6a 44                	push   $0x44
c10096ed:	50                   	push   %eax
c10096ee:	ff 75 f0             	pushl  -0x10(%ebp)
c10096f1:	e8 12 6a ff ff       	call   c1000108 <memcpy>
c10096f6:	83 c4 10             	add    $0x10,%esp
c10096f9:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10096fd:	84 c0                	test   %al,%al
c10096ff:	74 16                	je     c1009717 <inode_open+0xbd>
c1009701:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009704:	83 ec 08             	sub    $0x8,%esp
c1009707:	68 00 04 00 00       	push   $0x400
c100970c:	50                   	push   %eax
c100970d:	e8 51 95 ff ff       	call   c1002c63 <vmm_free>
c1009712:	83 c4 10             	add    $0x10,%esp
c1009715:	eb 14                	jmp    c100972b <inode_open+0xd1>
c1009717:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100971a:	83 ec 08             	sub    $0x8,%esp
c100971d:	68 00 02 00 00       	push   $0x200
c1009722:	50                   	push   %eax
c1009723:	e8 3b 95 ff ff       	call   c1002c63 <vmm_free>
c1009728:	83 c4 10             	add    $0x10,%esp
c100972b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100972e:	c9                   	leave  
c100972f:	c3                   	ret    

c1009730 <inode_close>:
c1009730:	55                   	push   %ebp
c1009731:	89 e5                	mov    %esp,%ebp
c1009733:	83 ec 08             	sub    $0x8,%esp
c1009736:	8b 45 08             	mov    0x8(%ebp),%eax
c1009739:	83 ec 08             	sub    $0x8,%esp
c100973c:	6a 44                	push   $0x44
c100973e:	50                   	push   %eax
c100973f:	e8 1f 95 ff ff       	call   c1002c63 <vmm_free>
c1009744:	83 c4 10             	add    $0x10,%esp
c1009747:	90                   	nop
c1009748:	c9                   	leave  
c1009749:	c3                   	ret    

c100974a <inode_delete>:
c100974a:	55                   	push   %ebp
c100974b:	89 e5                	mov    %esp,%ebp
c100974d:	83 ec 18             	sub    $0x18,%esp
c1009750:	81 7d 0c ff 0f 00 00 	cmpl   $0xfff,0xc(%ebp)
c1009757:	76 16                	jbe    c100976f <inode_delete+0x25>
c1009759:	68 98 b7 00 c1       	push   $0xc100b798
c100975e:	68 54 b8 00 c1       	push   $0xc100b854
c1009763:	6a 6b                	push   $0x6b
c1009765:	68 a8 b7 00 c1       	push   $0xc100b7a8
c100976a:	e8 9e 6b ff ff       	call   c100030d <__PANIC>
c100976f:	83 ec 04             	sub    $0x4,%esp
c1009772:	8d 45 e8             	lea    -0x18(%ebp),%eax
c1009775:	50                   	push   %eax
c1009776:	ff 75 0c             	pushl  0xc(%ebp)
c1009779:	ff 75 08             	pushl  0x8(%ebp)
c100977c:	e8 46 fd ff ff       	call   c10094c7 <inode_locate>
c1009781:	83 c4 10             	add    $0x10,%esp
c1009784:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009787:	8b 45 08             	mov    0x8(%ebp),%eax
c100978a:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c100978e:	0f b6 c8             	movzbl %al,%ecx
c1009791:	8b 45 08             	mov    0x8(%ebp),%eax
c1009794:	8b 40 0c             	mov    0xc(%eax),%eax
c1009797:	01 c8                	add    %ecx,%eax
c1009799:	39 c2                	cmp    %eax,%edx
c100979b:	76 16                	jbe    c10097b3 <inode_delete+0x69>
c100979d:	68 dc b7 00 c1       	push   $0xc100b7dc
c10097a2:	68 54 b8 00 c1       	push   $0xc100b854
c10097a7:	6a 6e                	push   $0x6e
c10097a9:	68 a8 b7 00 c1       	push   $0xc100b7a8
c10097ae:	e8 5a 6b ff ff       	call   c100030d <__PANIC>
c10097b3:	8b 45 10             	mov    0x10(%ebp),%eax
c10097b6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10097b9:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
c10097bd:	84 c0                	test   %al,%al
c10097bf:	74 42                	je     c1009803 <inode_delete+0xb9>
c10097c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10097c4:	83 ec 04             	sub    $0x4,%esp
c10097c7:	6a 02                	push   $0x2
c10097c9:	50                   	push   %eax
c10097ca:	ff 75 f4             	pushl  -0xc(%ebp)
c10097cd:	e8 24 b9 ff ff       	call   c10050f6 <ide_read>
c10097d2:	83 c4 10             	add    $0x10,%esp
c10097d5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10097d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10097db:	01 d0                	add    %edx,%eax
c10097dd:	83 ec 04             	sub    $0x4,%esp
c10097e0:	6a 44                	push   $0x44
c10097e2:	6a 00                	push   $0x0
c10097e4:	50                   	push   %eax
c10097e5:	e8 c0 68 ff ff       	call   c10000aa <memset>
c10097ea:	83 c4 10             	add    $0x10,%esp
c10097ed:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10097f0:	83 ec 04             	sub    $0x4,%esp
c10097f3:	6a 02                	push   $0x2
c10097f5:	50                   	push   %eax
c10097f6:	ff 75 f4             	pushl  -0xc(%ebp)
c10097f9:	e8 35 b9 ff ff       	call   c1005133 <ide_write>
c10097fe:	83 c4 10             	add    $0x10,%esp
c1009801:	eb 40                	jmp    c1009843 <inode_delete+0xf9>
c1009803:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009806:	83 ec 04             	sub    $0x4,%esp
c1009809:	6a 01                	push   $0x1
c100980b:	50                   	push   %eax
c100980c:	ff 75 f4             	pushl  -0xc(%ebp)
c100980f:	e8 e2 b8 ff ff       	call   c10050f6 <ide_read>
c1009814:	83 c4 10             	add    $0x10,%esp
c1009817:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100981a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100981d:	01 d0                	add    %edx,%eax
c100981f:	83 ec 04             	sub    $0x4,%esp
c1009822:	6a 44                	push   $0x44
c1009824:	6a 00                	push   $0x0
c1009826:	50                   	push   %eax
c1009827:	e8 7e 68 ff ff       	call   c10000aa <memset>
c100982c:	83 c4 10             	add    $0x10,%esp
c100982f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009832:	83 ec 04             	sub    $0x4,%esp
c1009835:	6a 01                	push   $0x1
c1009837:	50                   	push   %eax
c1009838:	ff 75 f4             	pushl  -0xc(%ebp)
c100983b:	e8 f3 b8 ff ff       	call   c1005133 <ide_write>
c1009840:	83 c4 10             	add    $0x10,%esp
c1009843:	90                   	nop
c1009844:	c9                   	leave  
c1009845:	c3                   	ret    

c1009846 <inode_release>:
c1009846:	55                   	push   %ebp
c1009847:	89 e5                	mov    %esp,%ebp
c1009849:	57                   	push   %edi
c100984a:	53                   	push   %ebx
c100984b:	81 ec 50 02 00 00    	sub    $0x250,%esp
c1009851:	83 ec 08             	sub    $0x8,%esp
c1009854:	ff 75 0c             	pushl  0xc(%ebp)
c1009857:	ff 75 08             	pushl  0x8(%ebp)
c100985a:	e8 fb fd ff ff       	call   c100965a <inode_open>
c100985f:	83 c4 10             	add    $0x10,%esp
c1009862:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009865:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009868:	8b 00                	mov    (%eax),%eax
c100986a:	39 45 0c             	cmp    %eax,0xc(%ebp)
c100986d:	74 19                	je     c1009888 <inode_release+0x42>
c100986f:	68 1c b8 00 c1       	push   $0xc100b81c
c1009874:	68 64 b8 00 c1       	push   $0xc100b864
c1009879:	68 85 00 00 00       	push   $0x85
c100987e:	68 a8 b7 00 c1       	push   $0xc100b7a8
c1009883:	e8 85 6a ff ff       	call   c100030d <__PANIC>
c1009888:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100988c:	c6 45 f6 0c          	movb   $0xc,-0xa(%ebp)
c1009890:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
c1009896:	b8 00 00 00 00       	mov    $0x0,%eax
c100989b:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c10098a0:	89 d7                	mov    %edx,%edi
c10098a2:	f3 ab                	rep stos %eax,%es:(%edi)
c10098a4:	eb 22                	jmp    c10098c8 <inode_release+0x82>
c10098a6:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c10098aa:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10098ae:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10098b1:	83 c1 04             	add    $0x4,%ecx
c10098b4:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c10098b7:	89 94 85 b0 fd ff ff 	mov    %edx,-0x250(%ebp,%eax,4)
c10098be:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10098c2:	83 c0 01             	add    $0x1,%eax
c10098c5:	88 45 f7             	mov    %al,-0x9(%ebp)
c10098c8:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c10098cc:	76 d8                	jbe    c10098a6 <inode_release+0x60>
c10098ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10098d1:	8b 40 40             	mov    0x40(%eax),%eax
c10098d4:	85 c0                	test   %eax,%eax
c10098d6:	0f 84 b2 00 00 00    	je     c100998e <inode_release+0x148>
c10098dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10098df:	8b 50 40             	mov    0x40(%eax),%edx
c10098e2:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
c10098e8:	83 c0 30             	add    $0x30,%eax
c10098eb:	83 ec 04             	sub    $0x4,%esp
c10098ee:	6a 01                	push   $0x1
c10098f0:	52                   	push   %edx
c10098f1:	50                   	push   %eax
c10098f2:	e8 ff b7 ff ff       	call   c10050f6 <ide_read>
c10098f7:	83 c4 10             	add    $0x10,%esp
c10098fa:	c6 45 f6 8c          	movb   $0x8c,-0xa(%ebp)
c10098fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009901:	8b 50 40             	mov    0x40(%eax),%edx
c1009904:	8b 45 08             	mov    0x8(%ebp),%eax
c1009907:	8b 40 10             	mov    0x10(%eax),%eax
c100990a:	8b 40 28             	mov    0x28(%eax),%eax
c100990d:	29 c2                	sub    %eax,%edx
c100990f:	89 d0                	mov    %edx,%eax
c1009911:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009914:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1009918:	75 19                	jne    c1009933 <inode_release+0xed>
c100991a:	68 3c b8 00 c1       	push   $0xc100b83c
c100991f:	68 64 b8 00 c1       	push   $0xc100b864
c1009924:	68 9d 00 00 00       	push   $0x9d
c1009929:	68 a8 b7 00 c1       	push   $0xc100b7a8
c100992e:	e8 da 69 ff ff       	call   c100030d <__PANIC>
c1009933:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009936:	c1 e8 03             	shr    $0x3,%eax
c1009939:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100993c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100993f:	83 e0 07             	and    $0x7,%eax
c1009942:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009945:	8b 45 08             	mov    0x8(%ebp),%eax
c1009948:	8b 50 18             	mov    0x18(%eax),%edx
c100994b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100994e:	01 d0                	add    %edx,%eax
c1009950:	0f b6 00             	movzbl (%eax),%eax
c1009953:	89 c2                	mov    %eax,%edx
c1009955:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009958:	bb 01 00 00 00       	mov    $0x1,%ebx
c100995d:	89 c1                	mov    %eax,%ecx
c100995f:	d3 e3                	shl    %cl,%ebx
c1009961:	89 d8                	mov    %ebx,%eax
c1009963:	f7 d0                	not    %eax
c1009965:	89 d1                	mov    %edx,%ecx
c1009967:	21 c1                	and    %eax,%ecx
c1009969:	8b 45 08             	mov    0x8(%ebp),%eax
c100996c:	8b 50 18             	mov    0x18(%eax),%edx
c100996f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009972:	01 d0                	add    %edx,%eax
c1009974:	89 ca                	mov    %ecx,%edx
c1009976:	88 10                	mov    %dl,(%eax)
c1009978:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100997d:	83 ec 04             	sub    $0x4,%esp
c1009980:	6a 01                	push   $0x1
c1009982:	ff 75 ec             	pushl  -0x14(%ebp)
c1009985:	50                   	push   %eax
c1009986:	e8 01 eb ff ff       	call   c100848c <bitmap_sync>
c100998b:	83 c4 10             	add    $0x10,%esp
c100998e:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1009992:	e9 b9 00 00 00       	jmp    c1009a50 <inode_release+0x20a>
c1009997:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100999b:	8b 84 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%eax
c10099a2:	85 c0                	test   %eax,%eax
c10099a4:	0f 84 9c 00 00 00    	je     c1009a46 <inode_release+0x200>
c10099aa:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10099b1:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10099b5:	8b 94 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%edx
c10099bc:	8b 45 08             	mov    0x8(%ebp),%eax
c10099bf:	8b 40 10             	mov    0x10(%eax),%eax
c10099c2:	8b 40 28             	mov    0x28(%eax),%eax
c10099c5:	29 c2                	sub    %eax,%edx
c10099c7:	89 d0                	mov    %edx,%eax
c10099c9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10099cc:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10099d0:	75 19                	jne    c10099eb <inode_release+0x1a5>
c10099d2:	68 3c b8 00 c1       	push   $0xc100b83c
c10099d7:	68 64 b8 00 c1       	push   $0xc100b864
c10099dc:	68 aa 00 00 00       	push   $0xaa
c10099e1:	68 a8 b7 00 c1       	push   $0xc100b7a8
c10099e6:	e8 22 69 ff ff       	call   c100030d <__PANIC>
c10099eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10099ee:	c1 e8 03             	shr    $0x3,%eax
c10099f1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10099f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10099f7:	83 e0 07             	and    $0x7,%eax
c10099fa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10099fd:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a00:	8b 50 18             	mov    0x18(%eax),%edx
c1009a03:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009a06:	01 d0                	add    %edx,%eax
c1009a08:	0f b6 00             	movzbl (%eax),%eax
c1009a0b:	89 c2                	mov    %eax,%edx
c1009a0d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009a10:	bb 01 00 00 00       	mov    $0x1,%ebx
c1009a15:	89 c1                	mov    %eax,%ecx
c1009a17:	d3 e3                	shl    %cl,%ebx
c1009a19:	89 d8                	mov    %ebx,%eax
c1009a1b:	f7 d0                	not    %eax
c1009a1d:	89 d1                	mov    %edx,%ecx
c1009a1f:	21 c1                	and    %eax,%ecx
c1009a21:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a24:	8b 50 18             	mov    0x18(%eax),%edx
c1009a27:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009a2a:	01 d0                	add    %edx,%eax
c1009a2c:	89 ca                	mov    %ecx,%edx
c1009a2e:	88 10                	mov    %dl,(%eax)
c1009a30:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009a35:	83 ec 04             	sub    $0x4,%esp
c1009a38:	6a 01                	push   $0x1
c1009a3a:	ff 75 ec             	pushl  -0x14(%ebp)
c1009a3d:	50                   	push   %eax
c1009a3e:	e8 49 ea ff ff       	call   c100848c <bitmap_sync>
c1009a43:	83 c4 10             	add    $0x10,%esp
c1009a46:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009a4a:	83 c0 01             	add    $0x1,%eax
c1009a4d:	88 45 f7             	mov    %al,-0x9(%ebp)
c1009a50:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009a54:	3a 45 f6             	cmp    -0xa(%ebp),%al
c1009a57:	0f 82 3a ff ff ff    	jb     c1009997 <inode_release+0x151>
c1009a5d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009a60:	c1 e8 03             	shr    $0x3,%eax
c1009a63:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009a66:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009a69:	83 e0 07             	and    $0x7,%eax
c1009a6c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009a6f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a72:	8b 50 20             	mov    0x20(%eax),%edx
c1009a75:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009a78:	01 d0                	add    %edx,%eax
c1009a7a:	0f b6 00             	movzbl (%eax),%eax
c1009a7d:	89 c2                	mov    %eax,%edx
c1009a7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009a82:	bb 01 00 00 00       	mov    $0x1,%ebx
c1009a87:	89 c1                	mov    %eax,%ecx
c1009a89:	d3 e3                	shl    %cl,%ebx
c1009a8b:	89 d8                	mov    %ebx,%eax
c1009a8d:	f7 d0                	not    %eax
c1009a8f:	89 d1                	mov    %edx,%ecx
c1009a91:	21 c1                	and    %eax,%ecx
c1009a93:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a96:	8b 50 20             	mov    0x20(%eax),%edx
c1009a99:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009a9c:	01 d0                	add    %edx,%eax
c1009a9e:	89 ca                	mov    %ecx,%edx
c1009aa0:	88 10                	mov    %dl,(%eax)
c1009aa2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009aa7:	83 ec 04             	sub    $0x4,%esp
c1009aaa:	6a 00                	push   $0x0
c1009aac:	ff 75 0c             	pushl  0xc(%ebp)
c1009aaf:	50                   	push   %eax
c1009ab0:	e8 d7 e9 ff ff       	call   c100848c <bitmap_sync>
c1009ab5:	83 c4 10             	add    $0x10,%esp
c1009ab8:	83 ec 08             	sub    $0x8,%esp
c1009abb:	6a 01                	push   $0x1
c1009abd:	68 00 04 00 00       	push   $0x400
c1009ac2:	e8 7c 90 ff ff       	call   c1002b43 <vmm_malloc>
c1009ac7:	83 c4 10             	add    $0x10,%esp
c1009aca:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009acd:	83 ec 04             	sub    $0x4,%esp
c1009ad0:	ff 75 e0             	pushl  -0x20(%ebp)
c1009ad3:	ff 75 0c             	pushl  0xc(%ebp)
c1009ad6:	ff 75 08             	pushl  0x8(%ebp)
c1009ad9:	e8 6c fc ff ff       	call   c100974a <inode_delete>
c1009ade:	83 c4 10             	add    $0x10,%esp
c1009ae1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009ae4:	83 ec 08             	sub    $0x8,%esp
c1009ae7:	68 00 04 00 00       	push   $0x400
c1009aec:	50                   	push   %eax
c1009aed:	e8 71 91 ff ff       	call   c1002c63 <vmm_free>
c1009af2:	83 c4 10             	add    $0x10,%esp
c1009af5:	83 ec 0c             	sub    $0xc,%esp
c1009af8:	ff 75 f0             	pushl  -0x10(%ebp)
c1009afb:	e8 30 fc ff ff       	call   c1009730 <inode_close>
c1009b00:	83 c4 10             	add    $0x10,%esp
c1009b03:	90                   	nop
c1009b04:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1009b07:	5b                   	pop    %ebx
c1009b08:	5f                   	pop    %edi
c1009b09:	5d                   	pop    %ebp
c1009b0a:	c3                   	ret    

c1009b0b <inode_init>:
c1009b0b:	55                   	push   %ebp
c1009b0c:	89 e5                	mov    %esp,%ebp
c1009b0e:	83 ec 10             	sub    $0x10,%esp
c1009b11:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009b14:	8b 55 08             	mov    0x8(%ebp),%edx
c1009b17:	89 10                	mov    %edx,(%eax)
c1009b19:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009b1c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1009b23:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009b26:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1009b2d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009b30:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1009b34:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1009b3b:	eb 14                	jmp    c1009b51 <inode_init+0x46>
c1009b3d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009b40:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009b43:	83 c2 04             	add    $0x4,%edx
c1009b46:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1009b4d:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1009b51:	83 7d fc 0c          	cmpl   $0xc,-0x4(%ebp)
c1009b55:	7e e6                	jle    c1009b3d <inode_init+0x32>
c1009b57:	90                   	nop
c1009b58:	90                   	nop
c1009b59:	c9                   	leave  
c1009b5a:	c3                   	ret    
