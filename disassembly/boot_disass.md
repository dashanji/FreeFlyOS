
../../build/boot/bootblock.o:     file format elf32-i386


Disassembly of section .text:

00007c00 <start>:
    7c00:	8c c8                	mov    %cs,%eax
    7c02:	8e d8                	mov    %eax,%ds
    7c04:	8e c0                	mov    %eax,%es
    7c06:	8e d0                	mov    %eax,%ss
    7c08:	66 bc 00 7c          	mov    $0x7c00,%sp
    7c0c:	00 00                	add    %al,(%eax)
    7c0e:	fa                   	cli    
    7c0f:	c7 06 00 80 00 00    	movl   $0x8000,(%esi)
    7c15:	bf 04 80 66 31       	mov    $0x31668004,%edi
    7c1a:	db                   	.byte 0xdb

00007c1b <mm_probe>:
    7c1b:	66 b8 20 e8          	mov    $0xe820,%ax
    7c1f:	00 00                	add    %al,(%eax)
    7c21:	66 b9 14 00          	mov    $0x14,%cx
    7c25:	00 00                	add    %al,(%eax)
    7c27:	66 ba 50 41          	mov    $0x4150,%dx
    7c2b:	4d                   	dec    %ebp
    7c2c:	53                   	push   %ebx
    7c2d:	cd 15                	int    $0x15
    7c2f:	73 02                	jae    7c33 <cont>
    7c31:	eb 0e                	jmp    7c41 <probe_end>

00007c33 <cont>:
    7c33:	66 ff 06             	incw   (%esi)
    7c36:	00 80 83 c7 14 66    	add    %al,0x6614c783(%eax)
    7c3c:	83 fb 00             	cmp    $0x0,%ebx
    7c3f:	75 da                	jne    7c1b <mm_probe>

00007c41 <probe_end>:
    7c41:	0f 01 16             	lgdtl  (%esi)
    7c44:	94                   	xchg   %eax,%esp
    7c45:	7c 0f                	jl     7c56 <promode+0x1>
    7c47:	20 c0                	and    %al,%al
    7c49:	66 83 c8 01          	or     $0x1,%ax
    7c4d:	0f 22 c0             	mov    %eax,%cr0
    7c50:	ea                   	.byte 0xea
    7c51:	55                   	push   %ebp
    7c52:	7c 08                	jl     7c5c <promode+0x7>
	...

00007c55 <promode>:
    7c55:	66 b8 10 00          	mov    $0x10,%ax
    7c59:	8e d8                	mov    %eax,%ds
    7c5b:	8e c0                	mov    %eax,%es
    7c5d:	8e d0                	mov    %eax,%ss
    7c5f:	66 b8 18 00          	mov    $0x18,%ax
    7c63:	8e e8                	mov    %eax,%gs
    7c65:	bd 00 00 00 00       	mov    $0x0,%ebp
    7c6a:	bc 00 7c 00 00       	mov    $0x7c00,%esp
    7c6f:	e8 c0 00 00 00       	call   7d34 <bootmain>

00007c74 <gdt>:
	...
    7c7c:	ff                   	(bad)  
    7c7d:	ff 00                	incl   (%eax)
    7c7f:	00 00                	add    %al,(%eax)
    7c81:	9a cf 00 ff ff 00 00 	lcall  $0x0,$0xffff00cf
    7c88:	00 92 cf 00 ff ff    	add    %dl,-0xff31(%edx)
    7c8e:	00 80 0b 92 00 00    	add    %al,0x920b(%eax)

00007c94 <gdt_48>:
    7c94:	1f                   	pop    %ds
    7c95:	00 74 7c 00          	add    %dh,0x0(%esp,%edi,2)
	...

00007c9a <readseg>:
    7c9a:	55                   	push   %ebp
    7c9b:	89 e5                	mov    %esp,%ebp
    7c9d:	57                   	push   %edi
    7c9e:	8d 3c 10             	lea    (%eax,%edx,1),%edi
    7ca1:	89 ca                	mov    %ecx,%edx
    7ca3:	56                   	push   %esi
    7ca4:	81 e2 ff 01 00 00    	and    $0x1ff,%edx
    7caa:	89 ce                	mov    %ecx,%esi
    7cac:	53                   	push   %ebx
    7cad:	29 d0                	sub    %edx,%eax
    7caf:	c1 ee 09             	shr    $0x9,%esi
    7cb2:	53                   	push   %ebx
    7cb3:	89 c3                	mov    %eax,%ebx
    7cb5:	89 7d f0             	mov    %edi,-0x10(%ebp)
    7cb8:	46                   	inc    %esi
    7cb9:	3b 5d f0             	cmp    -0x10(%ebp),%ebx
    7cbc:	73 70                	jae    7d2e <readseg+0x94>
    7cbe:	ba f7 01 00 00       	mov    $0x1f7,%edx
    7cc3:	ec                   	in     (%dx),%al
    7cc4:	83 e0 c0             	and    $0xffffffc0,%eax
    7cc7:	3c 40                	cmp    $0x40,%al
    7cc9:	75 f3                	jne    7cbe <readseg+0x24>
    7ccb:	ba f2 01 00 00       	mov    $0x1f2,%edx
    7cd0:	b0 01                	mov    $0x1,%al
    7cd2:	ee                   	out    %al,(%dx)
    7cd3:	ba f3 01 00 00       	mov    $0x1f3,%edx
    7cd8:	89 f0                	mov    %esi,%eax
    7cda:	ee                   	out    %al,(%dx)
    7cdb:	89 f0                	mov    %esi,%eax
    7cdd:	ba f4 01 00 00       	mov    $0x1f4,%edx
    7ce2:	c1 e8 08             	shr    $0x8,%eax
    7ce5:	ee                   	out    %al,(%dx)
    7ce6:	89 f0                	mov    %esi,%eax
    7ce8:	ba f5 01 00 00       	mov    $0x1f5,%edx
    7ced:	c1 e8 10             	shr    $0x10,%eax
    7cf0:	ee                   	out    %al,(%dx)
    7cf1:	89 f0                	mov    %esi,%eax
    7cf3:	ba f6 01 00 00       	mov    $0x1f6,%edx
    7cf8:	c1 e8 18             	shr    $0x18,%eax
    7cfb:	83 e0 0f             	and    $0xf,%eax
    7cfe:	83 c8 e0             	or     $0xffffffe0,%eax
    7d01:	ee                   	out    %al,(%dx)
    7d02:	b0 20                	mov    $0x20,%al
    7d04:	ba f7 01 00 00       	mov    $0x1f7,%edx
    7d09:	ee                   	out    %al,(%dx)
    7d0a:	ba f7 01 00 00       	mov    $0x1f7,%edx
    7d0f:	ec                   	in     (%dx),%al
    7d10:	83 e0 c0             	and    $0xffffffc0,%eax
    7d13:	3c 40                	cmp    $0x40,%al
    7d15:	75 f3                	jne    7d0a <readseg+0x70>
    7d17:	89 df                	mov    %ebx,%edi
    7d19:	b9 80 00 00 00       	mov    $0x80,%ecx
    7d1e:	ba f0 01 00 00       	mov    $0x1f0,%edx
    7d23:	fc                   	cld    
    7d24:	f2 6d                	repnz insl (%dx),%es:(%edi)
    7d26:	81 c3 00 02 00 00    	add    $0x200,%ebx
    7d2c:	eb 8a                	jmp    7cb8 <readseg+0x1e>
    7d2e:	58                   	pop    %eax
    7d2f:	5b                   	pop    %ebx
    7d30:	5e                   	pop    %esi
    7d31:	5f                   	pop    %edi
    7d32:	5d                   	pop    %ebp
    7d33:	c3                   	ret    

00007d34 <bootmain>:
    7d34:	55                   	push   %ebp
    7d35:	b8 00 00 01 00       	mov    $0x10000,%eax
    7d3a:	31 c9                	xor    %ecx,%ecx
    7d3c:	ba 00 04 00 00       	mov    $0x400,%edx
    7d41:	89 e5                	mov    %esp,%ebp
    7d43:	57                   	push   %edi
    7d44:	56                   	push   %esi
    7d45:	53                   	push   %ebx
    7d46:	83 ec 0c             	sub    $0xc,%esp
    7d49:	e8 4c ff ff ff       	call   7c9a <readseg>
    7d4e:	a1 1c 00 01 00       	mov    0x1001c,%eax
    7d53:	0f b7 35 2c 00 01 00 	movzwl 0x1002c,%esi
    7d5a:	8d 98 00 00 01 00    	lea    0x10000(%eax),%ebx
    7d60:	c1 e6 05             	shl    $0x5,%esi
    7d63:	01 de                	add    %ebx,%esi
    7d65:	39 f3                	cmp    %esi,%ebx
    7d67:	73 22                	jae    7d8b <bootmain+0x57>
    7d69:	8b 43 08             	mov    0x8(%ebx),%eax
    7d6c:	8b 4b 04             	mov    0x4(%ebx),%ecx
    7d6f:	8b 53 14             	mov    0x14(%ebx),%edx
    7d72:	3d 01 00 00 c0       	cmp    $0xc0000001,%eax
    7d77:	19 ff                	sbb    %edi,%edi
    7d79:	83 c3 20             	add    $0x20,%ebx
    7d7c:	81 cf ff ff ff 0f    	or     $0xfffffff,%edi
    7d82:	21 f8                	and    %edi,%eax
    7d84:	e8 11 ff ff ff       	call   7c9a <readseg>
    7d89:	eb da                	jmp    7d65 <bootmain+0x31>
    7d8b:	ff 15 18 00 01 00    	call   *0x10018
    7d91:	eb fe                	jmp    7d91 <bootmain+0x5d>
