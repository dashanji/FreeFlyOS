ELF Header:
  Magic:   7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00 
  Class:                             ELF32
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              EXEC (Executable file)
  Machine:                           Intel 80386
  Version:                           0x1
  Entry point address:               0x100000
  Start of program headers:          52 (bytes into file)
  Start of section headers:          225992 (bytes into file)
  Flags:                             0x0
  Size of this header:               52 (bytes)
  Size of program headers:           32 (bytes)
  Number of program headers:         5
  Size of section headers:           40 (bytes)
  Number of section headers:         23
  Section header string table index: 22

Section Headers:
  [Nr] Name              Type            Addr     Off    Size   ES Flg Lk Inf Al
  [ 0]                   NULL            00000000 000000 000000 00      0   0  0
  [ 1] .init.text        PROGBITS        00100000 001000 000270 00  AX  0   0  1
  [ 2] .init.data        PROGBITS        00101000 002000 008000 00  WA  0   0 4096
  [ 3] .user.text        PROGBITS        40000000 018000 0015ae 00  AX  0   0  1
  [ 4] .user.data        PROGBITS        400015b0 0195b0 000004 00  WA  0   0  4
  [ 5] .user.rodata      PROGBITS        400015b4 0195b4 0004d0 00   A  0   0  4
  [ 6] .user.bss         NOBITS          40001aa0 019a84 0004c0 00  WA  0   0 32
  [ 7] .text             PROGBITS        c1000000 00a000 00a2d0 00  AX  0   0  1
  [ 8] .rodata           PROGBITS        c100a2d0 0142d0 001ade 00   A  0   0  4
  [ 9] .data             PROGBITS        c100c000 016000 001b2c 00  WA  0   0 32
  [10] .bss              NOBITS          c100e000 017b2c a053c0 00  WA  0   0 4096
  [11] .debug_info       PROGBITS        00000000 019a84 00b2ab 00      0   0  1
  [12] .debug_abbrev     PROGBITS        00000000 024d2f 002f5c 00      0   0  1
  [13] .debug_aranges    PROGBITS        00000000 027c8b 0003c0 00      0   0  1
  [14] .debug_ranges     PROGBITS        00000000 02804b 000060 00      0   0  1
  [15] .debug_line       PROGBITS        00000000 0280ab 005c86 00      0   0  1
  [16] .debug_str        PROGBITS        00000000 02dd31 00280c 01  MS  0   0  1
  [17] .comment          PROGBITS        00000000 03053d 000011 01  MS  0   0  1
  [18] .stab             PROGBITS        00000000 030550 002610 0c     19   0  4
  [19] .stabstr          STRTAB          00000000 032b60 0001d4 00      0   0  1
  [20] .symtab           SYMTAB          00000000 032d34 002ba0 10     21 197  4
  [21] .strtab           STRTAB          00000000 0358d4 00192e 00      0   0  1
  [22] .shstrtab         STRTAB          00000000 037202 0000c4 00      0   0  1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), I (info),
  L (link order), O (extra OS processing required), G (group), T (TLS),
  C (compressed), x (unknown), o (OS specific), E (exclude),
  p (processor specific)

There are no section groups in this file.

Program Headers:
  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align
  LOAD           0x001000 0x00100000 0x00100000 0x00270 0x00270 R E 0x1000
  LOAD           0x002000 0x00101000 0x00101000 0x08000 0x08000 RW  0x1000
  LOAD           0x00a000 0xc1000000 0x01000000 0x0bdae 0x0bdae R E 0x1000
  LOAD           0x016000 0xc100c000 0x0100c000 0x01b2c 0xa073c0 RW  0x1000
  LOAD           0x018000 0x40000000 0x40000000 0x01a84 0x01f60 RWE 0x1000

 Section to Segment mapping:
  Segment Sections...
   00     .init.text 
   01     .init.data 
   02     .text .rodata 
   03     .data .bss 
   04     .user.text .user.data .user.rodata .user.bss 

There is no dynamic section in this file.

There are no relocations in this file.

The decoding of unwind sections for machine type Intel 80386 is not currently supported.

Symbol table '.symtab' contains 698 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00100000     0 SECTION LOCAL  DEFAULT    1 
     2: 00101000     0 SECTION LOCAL  DEFAULT    2 
     3: 40000000     0 SECTION LOCAL  DEFAULT    3 
     4: 400015b0     0 SECTION LOCAL  DEFAULT    4 
     5: 400015b4     0 SECTION LOCAL  DEFAULT    5 
     6: 40001aa0     0 SECTION LOCAL  DEFAULT    6 
     7: c1000000     0 SECTION LOCAL  DEFAULT    7 
     8: c100a2d0     0 SECTION LOCAL  DEFAULT    8 
     9: c100c000     0 SECTION LOCAL  DEFAULT    9 
    10: c100e000     0 SECTION LOCAL  DEFAULT   10 
    11: 00000000     0 SECTION LOCAL  DEFAULT   11 
    12: 00000000     0 SECTION LOCAL  DEFAULT   12 
    13: 00000000     0 SECTION LOCAL  DEFAULT   13 
    14: 00000000     0 SECTION LOCAL  DEFAULT   14 
    15: 00000000     0 SECTION LOCAL  DEFAULT   15 
    16: 00000000     0 SECTION LOCAL  DEFAULT   16 
    17: 00000000     0 SECTION LOCAL  DEFAULT   17 
    18: 00000000     0 SECTION LOCAL  DEFAULT   18 
    19: 00000000     0 SECTION LOCAL  DEFAULT   19 
    20: 00000000     0 FILE    LOCAL  DEFAULT  ABS init.c
    21: c100a33c     5 OBJECT  LOCAL  DEFAULT    8 __func__.1906
    22: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_main.c
    23: 40000000    47 FUNC    LOCAL  DEFAULT    3 delay
    24: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_syscall.c
    25: 400000ba    92 FUNC    LOCAL  DEFAULT    3 user_syscall
    26: 00000000     0 FILE    LOCAL  DEFAULT  ABS stdio.c
    27: 00000000     0 FILE    LOCAL  DEFAULT  ABS shell.c
    28: 40001ea0   128 OBJECT  LOCAL  DEFAULT    6 cmd_line
    29: 40001f20    64 OBJECT  LOCAL  DEFAULT    6 argv
    30: 40000667   176 FUNC    LOCAL  DEFAULT    3 user_readline
    31: 40000717   196 FUNC    LOCAL  DEFAULT    3 cmd_parse
    32: 00000000     0 FILE    LOCAL  DEFAULT  ABS string.c
    33: 40000aed    44 FUNC    LOCAL  DEFAULT    3 __memset
    34: 40000b7f    61 FUNC    LOCAL  DEFAULT    3 __strcmp
    35: 40000c36    61 FUNC    LOCAL  DEFAULT    3 __memcpy
    36: 00000000     0 FILE    LOCAL  DEFAULT  ABS buildin_cmd.c
    37: 40000cb9    94 FUNC    LOCAL  DEFAULT    3 path_parse
    38: 40000d17   330 FUNC    LOCAL  DEFAULT    3 wash_path
    39: 00000000     0 FILE    LOCAL  DEFAULT  ABS asm.c
    40: c100007e    44 FUNC    LOCAL  DEFAULT    7 __memset
    41: c10000cb    61 FUNC    LOCAL  DEFAULT    7 __memcpy
    42: c1000146    61 FUNC    LOCAL  DEFAULT    7 __strcmp
    43: 00000000     0 FILE    LOCAL  DEFAULT  ABS debug.c
    44: 00000000     0 FILE    LOCAL  DEFAULT  ABS monitor.c
    45: 00000000     0 FILE    LOCAL  DEFAULT  ABS readline.c
    46: c100e000  1024 OBJECT  LOCAL  DEFAULT   10 buf
    47: 00000000     0 FILE    LOCAL  DEFAULT  ABS dt.c
    48: c100e400  2048 OBJECT  LOCAL  DEFAULT   10 idt
    49: c100c078     6 OBJECT  LOCAL  DEFAULT    9 gdtinfo
    50: c100ec00   104 OBJECT  LOCAL  DEFAULT   10 ts
    51: c100c080     6 OBJECT  LOCAL  DEFAULT    9 idtinfo
    52: c1000685    54 FUNC    LOCAL  DEFAULT    7 lgdt
    53: c10007ba    12 FUNC    LOCAL  DEFAULT    7 lidt
    54: 00000000     0 FILE    LOCAL  DEFAULT  ABS trap.c
    55: c10009bf    37 FUNC    LOCAL  DEFAULT    7 hash32
    56: c100c0a0    96 OBJECT  LOCAL  DEFAULT    9 IA32flags
    57: c1000bfc   305 FUNC    LOCAL  DEFAULT    7 trap_dispatch
    58: 00000000     0 FILE    LOCAL  DEFAULT  ABS syscall.c
    59: c100186a    37 FUNC    LOCAL  DEFAULT    7 hash32
    60: c100188f    21 FUNC    LOCAL  DEFAULT    7 sys_exit
    61: c10018a4    47 FUNC    LOCAL  DEFAULT    7 sys_fork
    62: c10018d3    28 FUNC    LOCAL  DEFAULT    7 sys_wait
    63: c10018ef    44 FUNC    LOCAL  DEFAULT    7 sys_exec
    64: c100191b     6 FUNC    LOCAL  DEFAULT    7 sys_yield
    65: c1001921    17 FUNC    LOCAL  DEFAULT    7 sys_kill
    66: c1001932    13 FUNC    LOCAL  DEFAULT    7 sys_getpid
    67: c100193f    41 FUNC    LOCAL  DEFAULT    7 sys_print_char
    68: c1001968    39 FUNC    LOCAL  DEFAULT    7 sys_print_string
    69: c100198f    92 FUNC    LOCAL  DEFAULT    7 sys_print_num
    70: c10019eb    18 FUNC    LOCAL  DEFAULT    7 sys_backtrace
    71: c10019fd    10 FUNC    LOCAL  DEFAULT    7 sys_pgdir
    72: c1001a07    56 FUNC    LOCAL  DEFAULT    7 sys_fdread
    73: c1001a3f    46 FUNC    LOCAL  DEFAULT    7 syscall_open
    74: c1001a6d    30 FUNC    LOCAL  DEFAULT    7 syscall_close
    75: c1001a8b    56 FUNC    LOCAL  DEFAULT    7 syscall_write
    76: c1001ac3    60 FUNC    LOCAL  DEFAULT    7 syscall_lseek
    77: c1001aff    30 FUNC    LOCAL  DEFAULT    7 syscall_unlink
    78: c1001b1d    30 FUNC    LOCAL  DEFAULT    7 syscall_mkdir
    79: c1001b3b    30 FUNC    LOCAL  DEFAULT    7 syscall_rmdir
    80: c1001b59    35 FUNC    LOCAL  DEFAULT    7 syscall_rewinddir
    81: c1001b7c    42 FUNC    LOCAL  DEFAULT    7 syscall_getcwd
    82: c1001ba6    30 FUNC    LOCAL  DEFAULT    7 syscall_chdir
    83: c1001bc4    44 FUNC    LOCAL  DEFAULT    7 syscall_stat
    84: c1001bf0    30 FUNC    LOCAL  DEFAULT    7 syscall_opendir
    85: c1001c0e    30 FUNC    LOCAL  DEFAULT    7 syscall_closedir
    86: c1001c2c    30 FUNC    LOCAL  DEFAULT    7 syscall_readdir
    87: c1001c4a    18 FUNC    LOCAL  DEFAULT    7 syscall_print_task
    88: c1001c5c    30 FUNC    LOCAL  DEFAULT    7 syscall_malloc
    89: c1001c7a    47 FUNC    LOCAL  DEFAULT    7 syscall_free
    90: c100c500   232 OBJECT  LOCAL  DEFAULT    9 syscalls
    91: 00000000     0 FILE    LOCAL  DEFAULT  ABS keyboard.c
    92: c100c600   256 OBJECT  LOCAL  DEFAULT    9 shiftcode
    93: c100c700   256 OBJECT  LOCAL  DEFAULT    9 togglecode
    94: c100c800   256 OBJECT  LOCAL  DEFAULT    9 normalmap
    95: c100c900   256 OBJECT  LOCAL  DEFAULT    9 shiftmap
    96: c100ca00   256 OBJECT  LOCAL  DEFAULT    9 ctlmap
    97: c100cb00    16 OBJECT  LOCAL  DEFAULT    9 charcode
    98: 00000000     0 FILE    LOCAL  DEFAULT  ABS main.c
    99: c1001f15    37 FUNC    LOCAL  DEFAULT    7 hash32
   100: c1001fe2   160 FUNC    LOCAL  DEFAULT    7 write2fs
   101: c1002393    49 FUNC    LOCAL  DEFAULT    7 print_task1
   102: c10023f5    47 FUNC    LOCAL  DEFAULT    7 delay
   103: c10023c4    49 FUNC    LOCAL  DEFAULT    7 print_task2
   104: 00000000     0 FILE    LOCAL  DEFAULT  ABS pmm.c
   105: 00000000     0 FILE    LOCAL  DEFAULT  ABS vmm.c
   106: c1002a00    37 FUNC    LOCAL  DEFAULT    7 hash32
   107: 00000000     0 FILE    LOCAL  DEFAULT  ABS task.c
   108: c1002f45    37 FUNC    LOCAL  DEFAULT    7 hash32
   109: c100ec80  8192 OBJECT  LOCAL  DEFAULT   10 hash_list
   110: c1010c80     4 OBJECT  LOCAL  DEFAULT   10 last_pid
   111: c1010c84     8 OBJECT  LOCAL  DEFAULT   10 ready_task_list
   112: c1010c8c     8 OBJECT  LOCAL  DEFAULT   10 all_task_list
   113: c1010c94     4 OBJECT  LOCAL  DEFAULT   10 nr_task
   114: c100362e   246 FUNC    LOCAL  DEFAULT    7 alloc_task
   115: c1003724    29 FUNC    LOCAL  DEFAULT    7 forkret
   116: c100342f    80 FUNC    LOCAL  DEFAULT    7 add_link
   117: c100347f    80 FUNC    LOCAL  DEFAULT    7 add_all_link
   118: c1003502   122 FUNC    LOCAL  DEFAULT    7 add_pid_hash
   119: c1003982    15 FUNC    LOCAL  DEFAULT    7 wakeup_task
   120: c10032b4    43 FUNC    LOCAL  DEFAULT    7 set_pid_bit
   121: c10032df    43 FUNC    LOCAL  DEFAULT    7 clear_pid_bit
   122: c100330a    65 FUNC    LOCAL  DEFAULT    7 find_free_pid
   123: c100334b    92 FUNC    LOCAL  DEFAULT    7 alloc_pid
   124: c10033a7    30 FUNC    LOCAL  DEFAULT    7 free_pid
   125: c1010c98    21 OBJECT  LOCAL  DEFAULT   10 name.2602
   126: c10034cf    51 FUNC    LOCAL  DEFAULT    7 remove_link
   127: c100357c    71 FUNC    LOCAL  DEFAULT    7 remove_pid_hash
   128: c10035c3   107 FUNC    LOCAL  DEFAULT    7 find_task
   129: c1003741   244 FUNC    LOCAL  DEFAULT    7 copy_thread
   130: c100aa28     8 OBJECT  LOCAL  DEFAULT    8 __func__.2650
   131: c10039f0   118 FUNC    LOCAL  DEFAULT    7 task_run
   132: c100aa30    13 OBJECT  LOCAL  DEFAULT    8 __func__.2678
   133: c100aa40    15 OBJECT  LOCAL  DEFAULT    8 __func__.2686
   134: c1003c08    92 FUNC    LOCAL  DEFAULT    7 print_taskinfo
   135: c1003c86    28 FUNC    LOCAL  DEFAULT    7 kernel_execve
   136: c1003ca2     6 FUNC    LOCAL  DEFAULT    7 user_main
   137: 00000000     0 FILE    LOCAL  DEFAULT  ABS exec.c
   138: c10042ae    37 FUNC    LOCAL  DEFAULT    7 hash32
   139: c10042d3   168 FUNC    LOCAL  DEFAULT    7 segment_load
   140: c100437b   397 FUNC    LOCAL  DEFAULT    7 load
   141: 00000000     0 FILE    LOCAL  DEFAULT  ABS pic.c
   142: c100db24     2 OBJECT  LOCAL  DEFAULT    9 irq_mask
   143: c1010cad     1 OBJECT  LOCAL  DEFAULT   10 did_init
   144: c10045ba    94 FUNC    LOCAL  DEFAULT    7 pic_setmask
   145: 00000000     0 FILE    LOCAL  DEFAULT  ABS serial.c
   146: c1010cae     1 OBJECT  LOCAL  DEFAULT   10 serial_exists
   147: 00000000     0 FILE    LOCAL  DEFAULT  ABS timer.c
   148: 00000000     0 FILE    LOCAL  DEFAULT  ABS vga.c
   149: c1010caf     1 OBJECT  LOCAL  DEFAULT   10 cursor_x
   150: c1010cb0     1 OBJECT  LOCAL  DEFAULT   10 cursor_y
   151: c100db28     4 OBJECT  LOCAL  DEFAULT    9 vga_memory
   152: 00000000     0 FILE    LOCAL  DEFAULT  ABS sync.c
   153: c10053eb    37 FUNC    LOCAL  DEFAULT    7 hash32
   154: c100ac18    10 OBJECT  LOCAL  DEFAULT    8 __func__.2496
   155: 00000000     0 FILE    LOCAL  DEFAULT  ABS ide-dev.c
   156: c100567c    40 FUNC    LOCAL  DEFAULT    7 waitdisk
   157: c10056a4    38 FUNC    LOCAL  DEFAULT    7 insl
   158: c10056ca    38 FUNC    LOCAL  DEFAULT    7 outsl
   159: c10056f0   186 FUNC    LOCAL  DEFAULT    7 ide_read_sect
   160: c10057aa   186 FUNC    LOCAL  DEFAULT    7 ide_write_sect
   161: c10058de    47 FUNC    LOCAL  DEFAULT    7 delay
   162: 00000000     0 FILE    LOCAL  DEFAULT  ABS fs.c
   163: c1005ad7    37 FUNC    LOCAL  DEFAULT    7 hash32
   164: c1005afc  1171 FUNC    LOCAL  DEFAULT    7 partition_format
   165: c1006252    94 FUNC    LOCAL  DEFAULT    7 path_parse
   166: c100b510    15 OBJECT  LOCAL  DEFAULT    8 __func__.2555
   167: c1006338   656 FUNC    LOCAL  DEFAULT    7 search_file
   168: c100b520    12 OBJECT  LOCAL  DEFAULT    8 __func__.2567
   169: c100b52c     9 OBJECT  LOCAL  DEFAULT    8 __func__.2580
   170: c100684f    65 FUNC    LOCAL  DEFAULT    7 fd_local2global
   171: c100b538    16 OBJECT  LOCAL  DEFAULT    8 __func__.2594
   172: c100b548     9 OBJECT  LOCAL  DEFAULT    8 __func__.2614
   173: c100b554    10 OBJECT  LOCAL  DEFAULT    8 __func__.2627
   174: c100b560    11 OBJECT  LOCAL  DEFAULT    8 __func__.2639
   175: c100b56c    10 OBJECT  LOCAL  DEFAULT    8 __func__.2669
   176: c100b578    12 OBJECT  LOCAL  DEFAULT    8 __func__.2680
   177: c100b584    12 OBJECT  LOCAL  DEFAULT    8 __func__.2691
   178: c100b590    10 OBJECT  LOCAL  DEFAULT    8 __func__.2700
   179: c10074bc   184 FUNC    LOCAL  DEFAULT    7 get_parent_dir_inode_nr
   180: c100b59c    24 OBJECT  LOCAL  DEFAULT    8 __func__.2713
   181: c1007574   423 FUNC    LOCAL  DEFAULT    7 get_child_dir_name
   182: c100b5b4    11 OBJECT  LOCAL  DEFAULT    8 __func__.2742
   183: 00000000     0 FILE    LOCAL  DEFAULT  ABS dir.c
   184: c100b7d4    17 OBJECT  LOCAL  DEFAULT    8 __func__.2226
   185: c100b7e8    15 OBJECT  LOCAL  DEFAULT    8 __func__.2235
   186: c100b7f8    17 OBJECT  LOCAL  DEFAULT    8 __func__.2279
   187: c100b80c     9 OBJECT  LOCAL  DEFAULT    8 __func__.2308
   188: c100b818    11 OBJECT  LOCAL  DEFAULT    8 __func__.2323
   189: 00000000     0 FILE    LOCAL  DEFAULT  ABS file.c
   190: c10089c5    37 FUNC    LOCAL  DEFAULT    7 hash32
   191: c100bcbc    11 OBJECT  LOCAL  DEFAULT    8 __func__.2579
   192: c100bcc8    10 OBJECT  LOCAL  DEFAULT    8 __func__.2609
   193: 00000000     0 FILE    LOCAL  DEFAULT  ABS inode.c
   194: c1009c3c   114 FUNC    LOCAL  DEFAULT    7 inode_locate
   195: c100bd90    13 OBJECT  LOCAL  DEFAULT    8 __func__.2221
   196: c100bda0    14 OBJECT  LOCAL  DEFAULT    8 __func__.2229
   197: c10017c2     0 NOTYPE  GLOBAL DEFAULT    7 vector242
   198: c1001219     0 NOTYPE  GLOBAL DEFAULT    7 vector119
   199: c10090f7  1909 FUNC    GLOBAL DEFAULT    7 file_write
   200: c10010f9     0 NOTYPE  GLOBAL DEFAULT    7 vector87
   201: c10010f0     0 NOTYPE  GLOBAL DEFAULT    7 vector86
   202: c1006890    92 FUNC    GLOBAL DEFAULT    7 sys_close
   203: c1008f67   336 FUNC    GLOBAL DEFAULT    7 file_open
   204: c100182e     0 NOTYPE  GLOBAL DEFAULT    7 vector251
   205: c100021a    48 FUNC    GLOBAL DEFAULT    7 strcpy
   206: c1005f8f   707 FUNC    GLOBAL DEFAULT    7 mount_partition
   207: c1001e9b    25 FUNC    GLOBAL DEFAULT    7 kbd_intr
   208: c1000000    29 FUNC    GLOBAL DEFAULT    7 inb
   209: 400007db   786 FUNC    GLOBAL DEFAULT    3 my_shell
   210: c100111d     0 NOTYPE  GLOBAL DEFAULT    7 vector91
   211: c1000f13     0 NOTYPE  GLOBAL DEFAULT    7 vector33
   212: c1002170   534 FUNC    GLOBAL DEFAULT    7 test_vmm
   213: c1001402     0 NOTYPE  GLOBAL DEFAULT    7 vector162
   214: 40000b19    33 FUNC    GLOBAL DEFAULT    3 user_memset
   215: c1001666     0 NOTYPE  GLOBAL DEFAULT    7 vector213
   216: 40000e61   195 FUNC    GLOBAL DEFAULT    3 make_clear_abs_path
   217: c10011b6     0 NOTYPE  GLOBAL DEFAULT    7 vector108
   218: c1000f6d     0 NOTYPE  GLOBAL DEFAULT    7 vector43
   219: c10033fa    53 FUNC    GLOBAL DEFAULT    7 get_task_name
   220: c1001426     0 NOTYPE  GLOBAL DEFAULT    7 vector165
   221: c1001516     0 NOTYPE  GLOBAL DEFAULT    7 vector185
   222: c10011f5     0 NOTYPE  GLOBAL DEFAULT    7 vector115
   223: c1002ec2    91 FUNC    GLOBAL DEFAULT    7 sys_free
   224: c1611000  4096 OBJECT  GLOBAL DEFAULT   10 new_pdt
   225: 40000348   769 FUNC    GLOBAL DEFAULT    3 printf
   226: c1001234     0 NOTYPE  GLOBAL DEFAULT    7 vector122
   227: c1009ebf   252 FUNC    GLOBAL DEFAULT    7 inode_delete
   228: c100738c    16 FUNC    GLOBAL DEFAULT    7 sys_rewinddir
   229: c1001d20   379 FUNC    GLOBAL DEFAULT    7 kbd_proc_data
   230: c10013ba     0 NOTYPE  GLOBAL DEFAULT    7 vector156
   231: c10017e6     0 NOTYPE  GLOBAL DEFAULT    7 vector245
   232: c1001546     0 NOTYPE  GLOBAL DEFAULT    7 vector189
   233: c1000e39     0 NOTYPE  GLOBAL DEFAULT    7 vector7
   234: c100100f     0 NOTYPE  GLOBAL DEFAULT    7 vector61
   235: c1000ec2     0 NOTYPE  GLOBAL DEFAULT    7 vector24
   236: 00107000  4096 OBJECT  GLOBAL DEFAULT    2 stack_pt
   237: c10011d1     0 NOTYPE  GLOBAL DEFAULT    7 vector111
   238: c10015ca     0 NOTYPE  GLOBAL DEFAULT    7 vector200
   239: c1006ad7   236 FUNC    GLOBAL DEFAULT    7 sys_lseek
   240: c1001eb4    97 FUNC    GLOBAL DEFAULT    7 kbd_init
   241: c1010cc0    12 OBJECT  GLOBAL DEFAULT   10 highmem_zone
   242: c1009dcf   214 FUNC    GLOBAL DEFAULT    7 inode_open
   243: c1001045     0 NOTYPE  GLOBAL DEFAULT    7 vector67
   244: c100ec68     4 OBJECT  GLOBAL DEFAULT   10 shift
   245: 00105000  4096 OBJECT  GLOBAL DEFAULT    2 pt2
   246: c10012e2     0 NOTYPE  GLOBAL DEFAULT    7 vector138
   247: c1001084     0 NOTYPE  GLOBAL DEFAULT    7 vector74
   248: c1000feb     0 NOTYPE  GLOBAL DEFAULT    7 vector57
   249: c1004959    85 FUNC    GLOBAL DEFAULT    7 cons_intr
   250: c1004c37   285 FUNC    GLOBAL DEFAULT    7 print_char
   251: c1000aa4   344 FUNC    GLOBAL DEFAULT    7 print_trapframe
   252: c1001672     0 NOTYPE  GLOBAL DEFAULT    7 vector214
   253: c1001165     0 NOTYPE  GLOBAL DEFAULT    7 vector99
   254: c1007e23  1083 FUNC    GLOBAL DEFAULT    7 sync_dir_entry
   255: c1000dd2     0 NOTYPE  GLOBAL DEFAULT    7 __alltraps
   256: c100538f    92 FUNC    GLOBAL DEFAULT    7 cons_getc
   257: c1001306     0 NOTYPE  GLOBAL DEFAULT    7 vector141
   258: 400013f8   146 FUNC    GLOBAL DEFAULT    3 buildin_mkdir
   259: c1008c01   132 FUNC    GLOBAL DEFAULT    7 bitmap_sync
   260: c100147a     0 NOTYPE  GLOBAL DEFAULT    7 vector172
   261: c10017b6     0 NOTYPE  GLOBAL DEFAULT    7 vector241
   262: c1006de3  1082 FUNC    GLOBAL DEFAULT    7 sys_mkdir
   263: c1001846     0 NOTYPE  GLOBAL DEFAULT    7 vector253
   264: c1000e15     0 NOTYPE  GLOBAL DEFAULT    7 vector3
   265: c1000df4     0 NOTYPE  GLOBAL DEFAULT    7 forkrets
   266: c1000e0c     0 NOTYPE  GLOBAL DEFAULT    7 vector2
   267: 00103000  4096 OBJECT  GLOBAL DEFAULT    2 pt
   268: c1003835   333 FUNC    GLOBAL DEFAULT    7 do_fork
   269: c100170e     0 NOTYPE  GLOBAL DEFAULT    7 vector227
   270: c1003991    95 FUNC    GLOBAL DEFAULT    7 kernel_thread
   271: c1001642     0 NOTYPE  GLOBAL DEFAULT    7 vector210
   272: c1007db7   108 FUNC    GLOBAL DEFAULT    7 create_dir_entry
   273: c10016ea     0 NOTYPE  GLOBAL DEFAULT    7 vector224
   274: 400002d5    15 FUNC    GLOBAL DEFAULT    3 ps
   275: c1000f5b     0 NOTYPE  GLOBAL DEFAULT    7 vector41
   276: 40000185    16 FUNC    GLOBAL DEFAULT    3 user_backtrace
   277: c1000ea7     0 NOTYPE  GLOBAL DEFAULT    7 vector21
   278: c10014b6     0 NOTYPE  GLOBAL DEFAULT    7 vector177
   279: c1001210     0 NOTYPE  GLOBAL DEFAULT    7 vector118
   280: c1001060     0 NOTYPE  GLOBAL DEFAULT    7 vector70
   281: c100cb14     4 OBJECT  GLOBAL DEFAULT    9 highmem_end
   282: c1a13000     4 OBJECT  GLOBAL DEFAULT   10 task0
   283: c1005864    61 FUNC    GLOBAL DEFAULT    7 ide_read
   284: c1001057     0 NOTYPE  GLOBAL DEFAULT    7 vector69
   285: c1001786     0 NOTYPE  GLOBAL DEFAULT    7 vector237
   286: c100102a     0 NOTYPE  GLOBAL DEFAULT    7 vector64
   287: c1000edd     0 NOTYPE  GLOBAL DEFAULT    7 vector27
   288: c100129a     0 NOTYPE  GLOBAL DEFAULT    7 vector132
   289: c1001522     0 NOTYPE  GLOBAL DEFAULT    7 vector186
   290: c10069df   248 FUNC    GLOBAL DEFAULT    7 sys_read
   291: c1001696     0 NOTYPE  GLOBAL DEFAULT    7 vector217
   292: c10041c0   178 FUNC    GLOBAL DEFAULT    7 sys_print_task
   293: c1004272     0 NOTYPE  GLOBAL DEFAULT    7 kernel_thread_entry
   294: c1000108    22 FUNC    GLOBAL DEFAULT    7 memcpy
   295: c10088fd   200 FUNC    GLOBAL DEFAULT    7 dir_remove
   296: c1000e03     0 NOTYPE  GLOBAL DEFAULT    7 vector1
   297: c10014c2     0 NOTYPE  GLOBAL DEFAULT    7 vector178
   298: c1000f40     0 NOTYPE  GLOBAL DEFAULT    7 vector38
   299: c10049ae    79 FUNC    GLOBAL DEFAULT    7 serial_proc_data
   300: c1001792     0 NOTYPE  GLOBAL DEFAULT    7 vector238
   301: 40000649    30 FUNC    GLOBAL DEFAULT    3 print_prompt
   302: c10089ea    69 FUNC    GLOBAL DEFAULT    7 get_free_slot_in_global
   303: c100036b    62 FUNC    GLOBAL DEFAULT    7 __PANIC
   304: c10005c3   194 FUNC    GLOBAL DEFAULT    7 readline
   305: c10012a6     0 NOTYPE  GLOBAL DEFAULT    7 vector133
   306: c100107b     0 NOTYPE  GLOBAL DEFAULT    7 vector73
   307: c100132a     0 NOTYPE  GLOBAL DEFAULT    7 vector144
   308: c100825e  1186 FUNC    GLOBAL DEFAULT    7 delete_dir_entry
   309: c1010ce0 0x600000 OBJECT  GLOBAL DEFAULT   10 pp
   310: c100024a    12 FUNC    GLOBAL DEFAULT    7 CPU_INVLPG
   311: c1001852     0 NOTYPE  GLOBAL DEFAULT    7 vector254
   312: 40000250    19 FUNC    GLOBAL DEFAULT    3 rewinddir
   313: c1001177     0 NOTYPE  GLOBAL DEFAULT    7 vector101
   314: c100164e     0 NOTYPE  GLOBAL DEFAULT    7 vector211
   315: c1612000 0x300000 OBJECT  GLOBAL DEFAULT   10 user_pt_highmem
   316: c1001492     0 NOTYPE  GLOBAL DEFAULT    7 vector174
   317: 400002e4    18 FUNC    GLOBAL DEFAULT    3 malloc
   318: c10017ce     0 NOTYPE  GLOBAL DEFAULT    7 vector243
   319: c100c040    56 OBJECT  GLOBAL DEFAULT    9 gdt
   320: 4000002f    35 FUNC    GLOBAL DEFAULT    3 test_fork
   321: c100126a     0 NOTYPE  GLOBAL DEFAULT    7 vector128
   322: c10010c3     0 NOTYPE  GLOBAL DEFAULT    7 vector81
   323: c1000e65     0 NOTYPE  GLOBAL DEFAULT    7 vector13
   324: c1010cb4    12 OBJECT  GLOBAL DEFAULT   10 user_sema
   325: c1000fb5     0 NOTYPE  GLOBAL DEFAULT    7 vector51
   326: c1000e7c     0 NOTYPE  GLOBAL DEFAULT    7 vector16
   327: 00102000  4096 OBJECT  GLOBAL DEFAULT    2 pt_init
   328: 40001aa0   512 OBJECT  GLOBAL DEFAULT    6 cwd_cache
   329: c10017aa     0 NOTYPE  GLOBAL DEFAULT    7 vector240
   330: c1000fd0     0 NOTYPE  GLOBAL DEFAULT    7 vector54
   331: c1000e95     0 NOTYPE  GLOBAL DEFAULT    7 vector19
   332: c100285d   252 FUNC    GLOBAL DEFAULT    7 pmm_alloc
   333: c1001126     0 NOTYPE  GLOBAL DEFAULT    7 vector92
   334: c1004a21    85 FUNC    GLOBAL DEFAULT    7 serial_putc_sub
   335: c10017da     0 NOTYPE  GLOBAL DEFAULT    7 vector244
   336: c10012fa     0 NOTYPE  GLOBAL DEFAULT    7 vector140
   337: c1000f7f     0 NOTYPE  GLOBAL DEFAULT    7 vector45
   338: c1008700   469 FUNC    GLOBAL DEFAULT    7 dir_read
   339: c10010b1     0 NOTYPE  GLOBAL DEFAULT    7 vector79
   340: 40000f24    96 FUNC    GLOBAL DEFAULT    3 buildin_pwd
   341: c1001726     0 NOTYPE  GLOBAL DEFAULT    7 vector229
   342: 4000023e    18 FUNC    GLOBAL DEFAULT    3 rmdir
   343: c10013d2     0 NOTYPE  GLOBAL DEFAULT    7 vector158
   344: c1004618    51 FUNC    GLOBAL DEFAULT    7 pic_enable
   345: c1002087   233 FUNC    GLOBAL DEFAULT    7 test_pmm
   346: 400002c3    18 FUNC    GLOBAL DEFAULT    3 readdir
   347: c1000f49     0 NOTYPE  GLOBAL DEFAULT    7 vector39
   348: c10006d2   232 FUNC    GLOBAL DEFAULT    7 gdt_init
   349: c100144a     0 NOTYPE  GLOBAL DEFAULT    7 vector168
   350: c1000f25     0 NOTYPE  GLOBAL DEFAULT    7 vector35
   351: c10011e3     0 NOTYPE  GLOBAL DEFAULT    7 vector113
   352: c1002f1d    40 FUNC    GLOBAL DEFAULT    7 sys_mmap
   353: c100cb10     4 OBJECT  GLOBAL DEFAULT    9 highmem_start
   354: c100124f     0 NOTYPE  GLOBAL DEFAULT    7 vector125
   355: c10088d5    40 FUNC    GLOBAL DEFAULT    7 dir_is_empty
   356: 400015b0     4 OBJECT  GLOBAL DEFAULT    4 argc
   357: c1008c85   738 FUNC    GLOBAL DEFAULT    7 file_create
   358: c1a13228     4 OBJECT  GLOBAL DEFAULT   10 second
   359: 40000116    15 FUNC    GLOBAL DEFAULT    3 user_sys_getpid
   360: c100168a     0 NOTYPE  GLOBAL DEFAULT    7 vector216
   361: 400001f7    35 FUNC    GLOBAL DEFAULT    3 lseek
   362: c1001021     0 NOTYPE  GLOBAL DEFAULT    7 vector63
   363: c1000ed4     0 NOTYPE  GLOBAL DEFAULT    7 vector26
   364: c10049fd    36 FUNC    GLOBAL DEFAULT    7 serial_intr
   365: c1001576     0 NOTYPE  GLOBAL DEFAULT    7 vector193
   366: c100159a     0 NOTYPE  GLOBAL DEFAULT    7 vector196
   367: c1001636     0 NOTYPE  GLOBAL DEFAULT    7 vector209
   368: 4000031b    24 FUNC    GLOBAL DEFAULT    3 mmap
   369: c1000e1e     0 NOTYPE  GLOBAL DEFAULT    7 vector4
   370: c1005a53   132 FUNC    GLOBAL DEFAULT    7 test_ide_io
   371: c1001462     0 NOTYPE  GLOBAL DEFAULT    7 vector170
   372: c1003a66   165 FUNC    GLOBAL DEFAULT    7 schedule
   373: c10012ca     0 NOTYPE  GLOBAL DEFAULT    7 vector136
   374: c1000e50     0 NOTYPE  GLOBAL DEFAULT    7 vector10
   375: c1001612     0 NOTYPE  GLOBAL DEFAULT    7 vector206
   376: c100185e     0 NOTYPE  GLOBAL DEFAULT    7 vector255
   377: c1002e07    92 FUNC    GLOBAL DEFAULT    7 setup_pgdir
   378: c10014e6     0 NOTYPE  GLOBAL DEFAULT    7 vector181
   379: 4000151c   146 FUNC    GLOBAL DEFAULT    3 buildin_rm
   380: c1610ce0    12 OBJECT  GLOBAL DEFAULT   10 normal_zone
   381: c1007ac1    14 FUNC    GLOBAL DEFAULT    7 fs_init
   382: c1000ffd     0 NOTYPE  GLOBAL DEFAULT    7 vector59
   383: c1a13234     4 OBJECT  GLOBAL DEFAULT   10 root_dir
   384: c1003da6   296 FUNC    GLOBAL DEFAULT    7 copy_user_cr3
   385: c10010e7     0 NOTYPE  GLOBAL DEFAULT    7 vector85
   386: c10010de     0 NOTYPE  GLOBAL DEFAULT    7 vector84
   387: c1004277     0 NOTYPE  GLOBAL DEFAULT    7 switch_to
   388: c10014fe     0 NOTYPE  GLOBAL DEFAULT    7 vector183
   389: c10006bb    23 FUNC    GLOBAL DEFAULT    7 ltr
   390: c10013de     0 NOTYPE  GLOBAL DEFAULT    7 vector159
   391: c100165a     0 NOTYPE  GLOBAL DEFAULT    7 vector212
   392: c1003ece   754 FUNC    GLOBAL DEFAULT    7 user_task_init
   393: c1000f91     0 NOTYPE  GLOBAL DEFAULT    7 vector47
   394: c100171a     0 NOTYPE  GLOBAL DEFAULT    7 vector228
   395: c1000f64     0 NOTYPE  GLOBAL DEFAULT    7 vector42
   396: c100043c    47 FUNC    GLOBAL DEFAULT    7 instr_hello
   397: c10011ec     0 NOTYPE  GLOBAL DEFAULT    7 vector114
   398: c100149e     0 NOTYPE  GLOBAL DEFAULT    7 vector175
   399: c100131e     0 NOTYPE  GLOBAL DEFAULT    7 vector143
   400: c1002a25   216 FUNC    GLOBAL DEFAULT    7 setup_vpt
   401: c1001282     0 NOTYPE  GLOBAL DEFAULT    7 vector130
   402: c10017f2     0 NOTYPE  GLOBAL DEFAULT    7 vector246
   403: c1000e49     0 NOTYPE  GLOBAL DEFAULT    7 vector9
   404: c1001312     0 NOTYPE  GLOBAL DEFAULT    7 vector142
   405: c100116e     0 NOTYPE  GLOBAL DEFAULT    7 vector100
   406: c100001d    31 FUNC    GLOBAL DEFAULT    7 inw
   407: c1007b91   492 FUNC    GLOBAL DEFAULT    7 search_dir_entry
   408: c10015d6     0 NOTYPE  GLOBAL DEFAULT    7 vector201
   409: c1003ca8   254 FUNC    GLOBAL DEFAULT    7 set_user_cr3
   410: c1003b58   176 FUNC    GLOBAL DEFAULT    7 thread_unblock
   411: c1000196    63 FUNC    GLOBAL DEFAULT    7 strrchr
   412: c10007c6   491 FUNC    GLOBAL DEFAULT    7 idt_init
   413: 00101000  4096 OBJECT  GLOBAL DEFAULT    2 pdt
   414: c1002082     5 FUNC    GLOBAL DEFAULT    7 kernel_main
   415: c1001006     0 NOTYPE  GLOBAL DEFAULT    7 vector60
   416: c1000eb9     0 NOTYPE  GLOBAL DEFAULT    7 vector23
   417: c1004abc   124 FUNC    GLOBAL DEFAULT    7 timer_init
   418: c1007357    53 FUNC    GLOBAL DEFAULT    7 sys_readdir
   419: c100177a     0 NOTYPE  GLOBAL DEFAULT    7 vector236
   420: c1002959   167 FUNC    GLOBAL DEFAULT    7 pmm_free
   421: 400001df    24 FUNC    GLOBAL DEFAULT    3 write
   422: c10065c8   647 FUNC    GLOBAL DEFAULT    7 sys_open
   423: c100173e     0 NOTYPE  GLOBAL DEFAULT    7 vector231
   424: c1004f0a   178 FUNC    GLOBAL DEFAULT    7 backtrace
   425: c100103c     0 NOTYPE  GLOBAL DEFAULT    7 vector66
   426: c1000eef     0 NOTYPE  GLOBAL DEFAULT    7 vector29
   427: c10012be     0 NOTYPE  GLOBAL DEFAULT    7 vector135
   428: 40000c89    48 FUNC    GLOBAL DEFAULT    3 user_strcpy
   429: c1004bbf   120 FUNC    GLOBAL DEFAULT    7 clear
   430: 00106000  4096 OBJECT  GLOBAL DEFAULT    2 pt3
   431: c100109f     0 NOTYPE  GLOBAL DEFAULT    7 vector77
   432: c100046b   125 FUNC    GLOBAL DEFAULT    7 instr_help
   433: c10001d5    69 FUNC    GLOBAL DEFAULT    7 strcat
   434: c10014da     0 NOTYPE  GLOBAL DEFAULT    7 vector180
   435: c100162a     0 NOTYPE  GLOBAL DEFAULT    7 vector208
   436: c10004e8   193 FUNC    GLOBAL DEFAULT    7 instr_game
   437: c100115c     0 NOTYPE  GLOBAL DEFAULT    7 vector98
   438: c1001153     0 NOTYPE  GLOBAL DEFAULT    7 vector97
   439: c1002d1a   237 FUNC    GLOBAL DEFAULT    7 vmm_map
   440: c10014aa     0 NOTYPE  GLOBAL DEFAULT    7 vector176
   441: c1001582     0 NOTYPE  GLOBAL DEFAULT    7 vector194
   442: c1000f0a     0 NOTYPE  GLOBAL DEFAULT    7 vector32
   443: 40000278    18 FUNC    GLOBAL DEFAULT    3 chdir
   444: c10015be     0 NOTYPE  GLOBAL DEFAULT    7 vector199
   445: c1003c64    24 FUNC    GLOBAL DEFAULT    7 do_exit
   446: 40000c0e    40 FUNC    GLOBAL DEFAULT    3 user_strlen
   447: c100128e     0 NOTYPE  GLOBAL DEFAULT    7 vector131
   448: c100183a     0 NOTYPE  GLOBAL DEFAULT    7 vector252
   449: c1000dfa     0 NOTYPE  GLOBAL DEFAULT    7 vector0
   450: c1003b0b    77 FUNC    GLOBAL DEFAULT    7 thread_block
   451: c1005351    62 FUNC    GLOBAL DEFAULT    7 cons_putc
   452: 40000333    21 FUNC    GLOBAL DEFAULT    3 exec
   453: c1001336     0 NOTYPE  GLOBAL DEFAULT    7 vector145
   454: c1a13004     4 OBJECT  GLOBAL DEFAULT   10 task1
   455: c10068ec   243 FUNC    GLOBAL DEFAULT    7 sys_write
   456: c10011ad     0 NOTYPE  GLOBAL DEFAULT    7 vector107
   457: c1000f52     0 NOTYPE  GLOBAL DEFAULT    7 vector40
   458: c1000d6f    31 FUNC    GLOBAL DEFAULT    7 intr_enable
   459: c1001180     0 NOTYPE  GLOBAL DEFAULT    7 vector102
   460: c100986c   976 FUNC    GLOBAL DEFAULT    7 file_read
   461: 40000156    47 FUNC    GLOBAL DEFAULT    3 user_print_num
   462: c1000fe2     0 NOTYPE  GLOBAL DEFAULT    7 vector56
   463: 40000bcf    63 FUNC    GLOBAL DEFAULT    3 user_strrchr
   464: c100104e     0 NOTYPE  GLOBAL DEFAULT    7 vector68
   465: c100cb20  4100 OBJECT  GLOBAL DEFAULT    9 task_pidmap
   466: c1000e30     0 NOTYPE  GLOBAL DEFAULT    7 vector6
   467: c1001276     0 NOTYPE  GLOBAL DEFAULT    7 vector129
   468: c1a133c0     0 NOTYPE  GLOBAL DEFAULT   10 kernel_end
   469: c10015a6     0 NOTYPE  GLOBAL DEFAULT    7 vector197
   470: 40000195    24 FUNC    GLOBAL DEFAULT    3 read
   471: c10048a0   115 FUNC    GLOBAL DEFAULT    7 lpt_putc_sub
   472: c1004a76    70 FUNC    GLOBAL DEFAULT    7 serial_putc
   473: c100138a     0 NOTYPE  GLOBAL DEFAULT    7 vector152
   474: c100732a    45 FUNC    GLOBAL DEFAULT    7 sys_closedir
   475: c100c100     0 NOTYPE  GLOBAL DEFAULT    9 __vectors
   476: c1001732     0 NOTYPE  GLOBAL DEFAULT    7 vector230
   477: c1000f37     0 NOTYPE  GLOBAL DEFAULT    7 vector37
   478: c1001606     0 NOTYPE  GLOBAL DEFAULT    7 vector205
   479: c10013f6     0 NOTYPE  GLOBAL DEFAULT    7 vector161
   480: c1a13008     4 OBJECT  GLOBAL DEFAULT   10 current
   481: 4000021a    18 FUNC    GLOBAL DEFAULT    3 unlink
   482: c1001069     0 NOTYPE  GLOBAL DEFAULT    7 vector71
   483: c10013ea     0 NOTYPE  GLOBAL DEFAULT    7 vector160
   484: c1004913    70 FUNC    GLOBAL DEFAULT    7 lpt_putc
   485: c100167e     0 NOTYPE  GLOBAL DEFAULT    7 vector215
   486: c10013c6     0 NOTYPE  GLOBAL DEFAULT    7 vector157
   487: 00109000     0 NOTYPE  GLOBAL DEFAULT    2 init_end
   488: c1000d8e    32 FUNC    GLOBAL DEFAULT    7 intr_disable
   489: c10009e4   192 FUNC    GLOBAL DEFAULT    7 print_regs
   490: c10011da     0 NOTYPE  GLOBAL DEFAULT    7 vector112
   491: 40000bbc    19 FUNC    GLOBAL DEFAULT    3 user_strcmp
   492: 400013d3    37 FUNC    GLOBAL DEFAULT    3 buildin_ps
   493: c1000256    12 FUNC    GLOBAL DEFAULT    7 lcr3
   494: c1912000 0x20000 OBJECT  GLOBAL DEFAULT   10 pt_highmem
   495: c10014f2     0 NOTYPE  GLOBAL DEFAULT    7 vector182
   496: c10033c5    53 FUNC    GLOBAL DEFAULT    7 set_task_name
   497: c1000e5e     0 NOTYPE  GLOBAL DEFAULT    7 vector12
   498: c1000262    94 FUNC    GLOBAL DEFAULT    7 memcmp
   499: 40000143    19 FUNC    GLOBAL DEFAULT    3 user_print_string
   500: c10011bf     0 NOTYPE  GLOBAL DEFAULT    7 vector109
   501: c1000e9e     0 NOTYPE  GLOBAL DEFAULT    7 vector20
   502: c1000d44     7 FUNC    GLOBAL DEFAULT    7 disable_interupt
   503: 4000030c    15 FUNC    GLOBAL DEFAULT    3 fork
   504: c1004fbc   917 FUNC    GLOBAL DEFAULT    7 printk
   505: c1000fc7     0 NOTYPE  GLOBAL DEFAULT    7 vector53
   506: c1000e8c     0 NOTYPE  GLOBAL DEFAULT    7 vector18
   507: 00100000   624 FUNC    GLOBAL DEFAULT    1 init
   508: c10090b7    64 FUNC    GLOBAL DEFAULT    7 file_close
   509: c1001141     0 NOTYPE  GLOBAL DEFAULT    7 vector95
   510: c1002424    25 FUNC    GLOBAL DEFAULT    7 test_user
   511: c1003c7c    10 FUNC    GLOBAL DEFAULT    7 do_execve
   512: c1001702     0 NOTYPE  GLOBAL DEFAULT    7 vector226
   513: c1a13230     4 OBJECT  GLOBAL DEFAULT   10 cur_part
   514: c1000fa3     0 NOTYPE  GLOBAL DEFAULT    7 vector49
   515: c1000f76     0 NOTYPE  GLOBAL DEFAULT    7 vector44
   516: 40000c73    22 FUNC    GLOBAL DEFAULT    3 user_memcpy
   517: c10010a8     0 NOTYPE  GLOBAL DEFAULT    7 vector78
   518: c1001486     0 NOTYPE  GLOBAL DEFAULT    7 vector173
   519: c100003c    33 FUNC    GLOBAL DEFAULT    7 outb
   520: c1001207     0 NOTYPE  GLOBAL DEFAULT    7 vector117
   521: c10010cc     0 NOTYPE  GLOBAL DEFAULT    7 vector82
   522: c10016d2     0 NOTYPE  GLOBAL DEFAULT    7 vector222
   523: c1000e42     0 NOTYPE  GLOBAL DEFAULT    7 vector8
   524: c1001366     0 NOTYPE  GLOBAL DEFAULT    7 vector149
   525: c10000aa    33 FUNC    GLOBAL DEFAULT    7 memset
   526: c1005410    54 FUNC    GLOBAL DEFAULT    7 sema_init
   527: c1005550   148 FUNC    GLOBAL DEFAULT    7 sema_up
   528: c100174a     0 NOTYPE  GLOBAL DEFAULT    7 vector232
   529: c1001f3a   168 FUNC    GLOBAL DEFAULT    7 main
   530: c10055e4    79 FUNC    GLOBAL DEFAULT    7 lock_acquire
   531: c10011a4     0 NOTYPE  GLOBAL DEFAULT    7 vector106
   532: c10016ba     0 NOTYPE  GLOBAL DEFAULT    7 vector220
   533: 40001ca0   512 OBJECT  GLOBAL DEFAULT    6 final_path
   534: c1001114     0 NOTYPE  GLOBAL DEFAULT    7 vector90
   535: c100140e     0 NOTYPE  GLOBAL DEFAULT    7 vector163
   536: c1001762     0 NOTYPE  GLOBAL DEFAULT    7 vector234
   537: c1006bc3   544 FUNC    GLOBAL DEFAULT    7 sys_unlink
   538: c1001018     0 NOTYPE  GLOBAL DEFAULT    7 vector62
   539: c1000ecb     0 NOTYPE  GLOBAL DEFAULT    7 vector25
   540: c10015b2     0 NOTYPE  GLOBAL DEFAULT    7 vector198
   541: c1005446    42 FUNC    GLOBAL DEFAULT    7 lock_init
   542: c1001222     0 NOTYPE  GLOBAL DEFAULT    7 vector120
   543: c1007acf   130 FUNC    GLOBAL DEFAULT    7 open_root_dir
   544: c1002e63    95 FUNC    GLOBAL DEFAULT    7 sys_malloc
   545: c1005470   224 FUNC    GLOBAL DEFAULT    7 sema_down
   546: c1001ca9   119 FUNC    GLOBAL DEFAULT    7 syscall_trap
   547: c10005a9    26 FUNC    GLOBAL DEFAULT    7 getchar
   548: c1000d4b     7 FUNC    GLOBAL DEFAULT    7 enable_interupt
   549: 4000029f    18 FUNC    GLOBAL DEFAULT    3 opendir
   550: c1000fac     0 NOTYPE  GLOBAL DEFAULT    7 vector50
   551: c1000e73     0 NOTYPE  GLOBAL DEFAULT    7 vector15
   552: c1005633    73 FUNC    GLOBAL DEFAULT    7 lock_release
   553: 00104000  4096 OBJECT  GLOBAL DEFAULT    2 pt1
   554: 40000f84   138 FUNC    GLOBAL DEFAULT    3 buildin_cd
   555: c1000d52    29 FUNC    GLOBAL DEFAULT    7 get_now_intr_status
   556: c100137e     0 NOTYPE  GLOBAL DEFAULT    7 vector151
   557: c10010d5     0 NOTYPE  GLOBAL DEFAULT    7 vector83
   558: c100110b     0 NOTYPE  GLOBAL DEFAULT    7 vector89
   559: c1001102     0 NOTYPE  GLOBAL DEFAULT    7 vector88
   560: c1000d2d    23 FUNC    GLOBAL DEFAULT    7 trap
   561: c10014ce     0 NOTYPE  GLOBAL DEFAULT    7 vector179
   562: c1000f1c     0 NOTYPE  GLOBAL DEFAULT    7 vector34
   563: c1000f88     0 NOTYPE  GLOBAL DEFAULT    7 vector46
   564: c1000183    19 FUNC    GLOBAL DEFAULT    7 strcmp
   565: c1000dae    19 FUNC    GLOBAL DEFAULT    7 intr_save
   566: c10012b2     0 NOTYPE  GLOBAL DEFAULT    7 vector134
   567: c10047b4   236 FUNC    GLOBAL DEFAULT    7 serial_init
   568: c10016de     0 NOTYPE  GLOBAL DEFAULT    7 vector223
   569: c1a1322c     4 OBJECT  GLOBAL DEFAULT   10 jiffies
   570: c1002f6a   842 FUNC    GLOBAL DEFAULT    7 kernel_task_init
   571: c100771b   493 FUNC    GLOBAL DEFAULT    7 sys_getcwd
   572: 40000263    21 FUNC    GLOBAL DEFAULT    3 getcwd
   573: c100476b    73 FUNC    GLOBAL DEFAULT    7 delay
   574: c1009fbb   709 FUNC    GLOBAL DEFAULT    7 inode_release
   575: c10016a2     0 NOTYPE  GLOBAL DEFAULT    7 vector218
   576: c10062b0   136 FUNC    GLOBAL DEFAULT    7 path_depth_cnt
   577: c10003e2    90 FUNC    GLOBAL DEFAULT    7 run
   578: c1004508   178 FUNC    GLOBAL DEFAULT    7 sys_execv
   579: c1004b38   135 FUNC    GLOBAL DEFAULT    7 print_cursor
   580: c100464b   288 FUNC    GLOBAL DEFAULT    7 pic_init
   581: c10016f6     0 NOTYPE  GLOBAL DEFAULT    7 vector225
   582: c100152e     0 NOTYPE  GLOBAL DEFAULT    7 vector187
   583: c1000dc1    17 FUNC    GLOBAL DEFAULT    7 intr_restore
   584: c100243d  1056 FUNC    GLOBAL DEFAULT    7 pmm_init
   585: c1610cec    12 OBJECT  GLOBAL DEFAULT   10 dma_zone
   586: c100ec70     4 OBJECT  GLOBAL DEFAULT   10 test_user_task
   587: c1000ef8     0 NOTYPE  GLOBAL DEFAULT    7 vector30
   588: c1001261     0 NOTYPE  GLOBAL DEFAULT    7 vector127
   589: c100156a     0 NOTYPE  GLOBAL DEFAULT    7 vector192
   590: c1001432     0 NOTYPE  GLOBAL DEFAULT    7 vector166
   591: c1001096     0 NOTYPE  GLOBAL DEFAULT    7 vector76
   592: c100108d     0 NOTYPE  GLOBAL DEFAULT    7 vector75
   593: c100158e     0 NOTYPE  GLOBAL DEFAULT    7 vector195
   594: c1001372     0 NOTYPE  GLOBAL DEFAULT    7 vector150
   595: c1000ff4     0 NOTYPE  GLOBAL DEFAULT    7 vector58
   596: c100180a     0 NOTYPE  GLOBAL DEFAULT    7 vector248
   597: c100123d     0 NOTYPE  GLOBAL DEFAULT    7 vector123
   598: c100114a     0 NOTYPE  GLOBAL DEFAULT    7 vector96
   599: c1009cae   289 FUNC    GLOBAL DEFAULT    7 inode_sync
   600: c1000f01     0 NOTYPE  GLOBAL DEFAULT    7 vector31
   601: c10015ee     0 NOTYPE  GLOBAL DEFAULT    7 vector203
   602: c1002afd   293 FUNC    GLOBAL DEFAULT    7 vmm_malloc
   603: c100ec74     4 OBJECT  GLOBAL DEFAULT   10 offset
   604: c1004d8b   383 FUNC    GLOBAL DEFAULT    7 print_num
   605: c10012ee     0 NOTYPE  GLOBAL DEFAULT    7 vector139
   606: c1001396     0 NOTYPE  GLOBAL DEFAULT    7 vector153
   607: c100141a     0 NOTYPE  GLOBAL DEFAULT    7 vector164
   608: c100122b     0 NOTYPE  GLOBAL DEFAULT    7 vector121
   609: c1000e27     0 NOTYPE  GLOBAL DEFAULT    7 vector5
   610: c100143e     0 NOTYPE  GLOBAL DEFAULT    7 vector167
   611: c10013ae     0 NOTYPE  GLOBAL DEFAULT    7 vector155
   612: c1001816     0 NOTYPE  GLOBAL DEFAULT    7 vector249
   613: c100005d    33 FUNC    GLOBAL DEFAULT    7 outw
   614: c1001822     0 NOTYPE  GLOBAL DEFAULT    7 vector250
   615: c1007b51    64 FUNC    GLOBAL DEFAULT    7 dir_open
   616: c1001246     0 NOTYPE  GLOBAL DEFAULT    7 vector124
   617: c10011c8     0 NOTYPE  GLOBAL DEFAULT    7 vector110
   618: c100c000    36 OBJECT  GLOBAL DEFAULT    9 instr_list
   619: c10015fa     0 NOTYPE  GLOBAL DEFAULT    7 vector204
   620: 4000028a    21 FUNC    GLOBAL DEFAULT    3 stat
   621: c1000de9     0 NOTYPE  GLOBAL DEFAULT    7 __trapret
   622: c10002c0   171 FUNC    GLOBAL DEFAULT    7 print_seg
   623: c10012d6     0 NOTYPE  GLOBAL DEFAULT    7 vector137
   624: c1932000     4 OBJECT  GLOBAL DEFAULT   10 highmem_ptr
   625: c100721d   269 FUNC    GLOBAL DEFAULT    7 sys_opendir
   626: c10017fe     0 NOTYPE  GLOBAL DEFAULT    7 vector247
   627: c1000eb0     0 NOTYPE  GLOBAL DEFAULT    7 vector22
   628: c1004d54    55 FUNC    GLOBAL DEFAULT    7 print_string
   629: c10015e2     0 NOTYPE  GLOBAL DEFAULT    7 vector202
   630: c1001072     0 NOTYPE  GLOBAL DEFAULT    7 vector72
   631: c1000fd9     0 NOTYPE  GLOBAL DEFAULT    7 vector55
   632: c1001258     0 NOTYPE  GLOBAL DEFAULT    7 vector126
   633: c1001033     0 NOTYPE  GLOBAL DEFAULT    7 vector65
   634: c1000ee6     0 NOTYPE  GLOBAL DEFAULT    7 vector28
   635: c1001456     0 NOTYPE  GLOBAL DEFAULT    7 vector169
   636: c1001756     0 NOTYPE  GLOBAL DEFAULT    7 vector233
   637: 40000052   104 FUNC    GLOBAL DEFAULT    3 user_main
   638: 40000125    30 FUNC    GLOBAL DEFAULT    3 user_print_char
   639: c10009b1    14 FUNC    GLOBAL DEFAULT    7 set_ts_esp0
   640: c100134e     0 NOTYPE  GLOBAL DEFAULT    7 vector147
   641: 40001f60     0 NOTYPE  GLOBAL DEFAULT    6 user_end
   642: c1001192     0 NOTYPE  GLOBAL DEFAULT    7 vector104
   643: c10011fe     0 NOTYPE  GLOBAL DEFAULT    7 vector116
   644: c1002c22   248 FUNC    GLOBAL DEFAULT    7 vmm_free
   645: c100a280    80 FUNC    GLOBAL DEFAULT    7 inode_init
   646: c1a1300c     4 OBJECT  GLOBAL DEFAULT   10 user_task
   647: c1a13240   384 OBJECT  GLOBAL DEFAULT   10 file_table
   648: c1000fbe     0 NOTYPE  GLOBAL DEFAULT    7 vector52
   649: c1000e85     0 NOTYPE  GLOBAL DEFAULT    7 vector17
   650: c100150a     0 NOTYPE  GLOBAL DEFAULT    7 vector184
   651: c100011e    40 FUNC    GLOBAL DEFAULT    7 strlen
   652: 400001ad    32 FUNC    GLOBAL DEFAULT    3 open
   653: c100739c   288 FUNC    GLOBAL DEFAULT    7 sys_rmdir
   654: c100161e     0 NOTYPE  GLOBAL DEFAULT    7 vector207
   655: c1001552     0 NOTYPE  GLOBAL DEFAULT    7 vector190
   656: c1007908   300 FUNC    GLOBAL DEFAULT    7 sys_stat
   657: c100179e     0 NOTYPE  GLOBAL DEFAULT    7 vector239
   658: c1001138     0 NOTYPE  GLOBAL DEFAULT    7 vector94
   659: c100112f     0 NOTYPE  GLOBAL DEFAULT    7 vector93
   660: c100153a     0 NOTYPE  GLOBAL DEFAULT    7 vector188
   661: 4000100e   965 FUNC    GLOBAL DEFAULT    3 buildin_ls
   662: c1000f9a     0 NOTYPE  GLOBAL DEFAULT    7 vector48
   663: 4000148a   146 FUNC    GLOBAL DEFAULT    3 buildin_rmdir
   664: c10016ae     0 NOTYPE  GLOBAL DEFAULT    7 vector219
   665: c1a13020   520 OBJECT  GLOBAL DEFAULT   10 cons
   666: c100135a     0 NOTYPE  GLOBAL DEFAULT    7 vector148
   667: c10016c6     0 NOTYPE  GLOBAL DEFAULT    7 vector221
   668: 400002b1    18 FUNC    GLOBAL DEFAULT    3 closedir
   669: c100590d   326 FUNC    GLOBAL DEFAULT    7 read_main_partition
   670: c10010ba     0 NOTYPE  GLOBAL DEFAULT    7 vector80
   671: c100146e     0 NOTYPE  GLOBAL DEFAULT    7 vector171
   672: c10013a2     0 NOTYPE  GLOBAL DEFAULT    7 vector154
   673: c100ec6c     1 OBJECT  GLOBAL DEFAULT   10 shell_input
   674: c1000f2e     0 NOTYPE  GLOBAL DEFAULT    7 vector36
   675: c100db2c     0 NOTYPE  GLOBAL DEFAULT    9 kernel_bss
   676: c100176e     0 NOTYPE  GLOBAL DEFAULT    7 vector235
   677: c100119b     0 NOTYPE  GLOBAL DEFAULT    7 vector105
   678: c1007a34   141 FUNC    GLOBAL DEFAULT    7 sys_chdir
   679: 40000b3a    69 FUNC    GLOBAL DEFAULT    3 user_strcat
   680: c1007d7d    58 FUNC    GLOBAL DEFAULT    7 dir_close
   681: 00108000  4096 OBJECT  GLOBAL DEFAULT    2 user_pt
   682: c1002386    13 FUNC    GLOBAL DEFAULT    7 test_schedule
   683: 4000022c    18 FUNC    GLOBAL DEFAULT    3 mkdir
   684: c1001342     0 NOTYPE  GLOBAL DEFAULT    7 vector146
   685: c1008a73   192 FUNC    GLOBAL DEFAULT    7 inode_bitmap_alloc
   686: c100155e     0 NOTYPE  GLOBAL DEFAULT    7 vector191
   687: 400001cd    18 FUNC    GLOBAL DEFAULT    3 close
   688: c1001189     0 NOTYPE  GLOBAL DEFAULT    7 vector103
   689: c10003a9    57 FUNC    GLOBAL DEFAULT    7 monitor
   690: c10058a1    61 FUNC    GLOBAL DEFAULT    7 ide_write
   691: c1008a2f    68 FUNC    GLOBAL DEFAULT    7 task_fd_install
   692: c1009ea5    26 FUNC    GLOBAL DEFAULT    7 inode_close
   693: 400002f6    22 FUNC    GLOBAL DEFAULT    3 free
   694: c1008b33   206 FUNC    GLOBAL DEFAULT    7 block_bitmap_alloc
   695: c1933000 0xe0000 OBJECT  GLOBAL DEFAULT   10 pt_dma_nomal
   696: c1000e57     0 NOTYPE  GLOBAL DEFAULT    7 vector11
   697: c1000e6c     0 NOTYPE  GLOBAL DEFAULT    7 vector14

No version information found in this file.
