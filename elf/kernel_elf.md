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
  Start of section headers:          221372 (bytes into file)
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
  [ 3] .user.text        PROGBITS        40000000 018000 0014e3 00  AX  0   0  1
  [ 4] .user.data        PROGBITS        400014e4 0194e4 000004 00  WA  0   0  4
  [ 5] .user.rodata      PROGBITS        400014e8 0194e8 0004ac 00   A  0   0  4
  [ 6] .user.bss         NOBITS          400019a0 019994 0004c0 00  WA  0   0 32
  [ 7] .text             PROGBITS        c1000000 00a000 009fb2 00  AX  0   0  1
  [ 8] .rodata           PROGBITS        c1009fb4 013fb4 001b5a 00   A  0   0  4
  [ 9] .data             PROGBITS        c100c000 016000 001b2c 00  WA  0   0 32
  [10] .bss              NOBITS          c100e000 017b2c a053c0 00  WA  0   0 4096
  [11] .debug_info       PROGBITS        00000000 019994 00a934 00      0   0  1
  [12] .debug_abbrev     PROGBITS        00000000 0242c8 002dd3 00      0   0  1
  [13] .debug_aranges    PROGBITS        00000000 02709b 0003a0 00      0   0  1
  [14] .debug_ranges     PROGBITS        00000000 02743b 000060 00      0   0  1
  [15] .debug_line       PROGBITS        00000000 02749b 005960 00      0   0  1
  [16] .debug_str        PROGBITS        00000000 02cdfb 0025f7 01  MS  0   0  1
  [17] .comment          PROGBITS        00000000 02f3f2 000011 01  MS  0   0  1
  [18] .stab             PROGBITS        00000000 02f404 002610 0c     19   0  4
  [19] .stabstr          STRTAB          00000000 031a14 0001d4 00      0   0  1
  [20] .symtab           SYMTAB          00000000 031be8 002b10 10     21 193  4
  [21] .strtab           STRTAB          00000000 0346f8 001900 00      0   0  1
  [22] .shstrtab         STRTAB          00000000 035ff8 0000c4 00      0   0  1
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
  LOAD           0x00a000 0xc1000000 0x01000000 0x0bb0e 0x0bb0e R E 0x1000
  LOAD           0x016000 0xc100c000 0x0100c000 0x01b2c 0xa073c0 RW  0x1000
  LOAD           0x018000 0x40000000 0x40000000 0x01994 0x01e60 RWE 0x1000

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

Symbol table '.symtab' contains 689 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00100000     0 SECTION LOCAL  DEFAULT    1 
     2: 00101000     0 SECTION LOCAL  DEFAULT    2 
     3: 40000000     0 SECTION LOCAL  DEFAULT    3 
     4: 400014e4     0 SECTION LOCAL  DEFAULT    4 
     5: 400014e8     0 SECTION LOCAL  DEFAULT    5 
     6: 400019a0     0 SECTION LOCAL  DEFAULT    6 
     7: c1000000     0 SECTION LOCAL  DEFAULT    7 
     8: c1009fb4     0 SECTION LOCAL  DEFAULT    8 
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
    21: c100a020     5 OBJECT  LOCAL  DEFAULT    8 __func__.1906
    22: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_main.c
    23: 40000000    47 FUNC    LOCAL  DEFAULT    3 delay
    24: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_syscall.c
    25: 400000ba    92 FUNC    LOCAL  DEFAULT    3 user_syscall
    26: 00000000     0 FILE    LOCAL  DEFAULT  ABS stdio.c
    27: 00000000     0 FILE    LOCAL  DEFAULT  ABS shell.c
    28: 40001da0   128 OBJECT  LOCAL  DEFAULT    6 cmd_line
    29: 40001e20    64 OBJECT  LOCAL  DEFAULT    6 argv
    30: 4000063a   176 FUNC    LOCAL  DEFAULT    3 user_readline
    31: 400006ea   196 FUNC    LOCAL  DEFAULT    3 cmd_parse
    32: 00000000     0 FILE    LOCAL  DEFAULT  ABS string.c
    33: 40000a22    44 FUNC    LOCAL  DEFAULT    3 __memset
    34: 40000ab4    61 FUNC    LOCAL  DEFAULT    3 __strcmp
    35: 40000b6b    61 FUNC    LOCAL  DEFAULT    3 __memcpy
    36: 00000000     0 FILE    LOCAL  DEFAULT  ABS buildin_cmd.c
    37: 40000bee    94 FUNC    LOCAL  DEFAULT    3 path_parse
    38: 40000c4c   330 FUNC    LOCAL  DEFAULT    3 wash_path
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
    52: c1000627    54 FUNC    LOCAL  DEFAULT    7 lgdt
    53: c100075c    12 FUNC    LOCAL  DEFAULT    7 lidt
    54: 00000000     0 FILE    LOCAL  DEFAULT  ABS trap.c
    55: c1000961    37 FUNC    LOCAL  DEFAULT    7 hash32
    56: c100c0a0    96 OBJECT  LOCAL  DEFAULT    9 IA32flags
    57: c1000b9e   305 FUNC    LOCAL  DEFAULT    7 trap_dispatch
    58: 00000000     0 FILE    LOCAL  DEFAULT  ABS syscall.c
    59: c100180c    37 FUNC    LOCAL  DEFAULT    7 hash32
    60: c1001831    21 FUNC    LOCAL  DEFAULT    7 sys_exit
    61: c1001846    47 FUNC    LOCAL  DEFAULT    7 sys_fork
    62: c1001875    28 FUNC    LOCAL  DEFAULT    7 sys_wait
    63: c1001891    65 FUNC    LOCAL  DEFAULT    7 sys_exec
    64: c10018d2     6 FUNC    LOCAL  DEFAULT    7 sys_yield
    65: c10018d8    17 FUNC    LOCAL  DEFAULT    7 sys_kill
    66: c10018e9    13 FUNC    LOCAL  DEFAULT    7 sys_getpid
    67: c10018f6    41 FUNC    LOCAL  DEFAULT    7 sys_print_char
    68: c100191f    39 FUNC    LOCAL  DEFAULT    7 sys_print_string
    69: c1001946    92 FUNC    LOCAL  DEFAULT    7 sys_print_num
    70: c10019a2    18 FUNC    LOCAL  DEFAULT    7 sys_backtrace
    71: c10019b4    10 FUNC    LOCAL  DEFAULT    7 sys_pgdir
    72: c10019be    56 FUNC    LOCAL  DEFAULT    7 sys_fdread
    73: c10019f6    46 FUNC    LOCAL  DEFAULT    7 syscall_open
    74: c1001a24    30 FUNC    LOCAL  DEFAULT    7 syscall_close
    75: c1001a42    56 FUNC    LOCAL  DEFAULT    7 syscall_write
    76: c1001a7a    60 FUNC    LOCAL  DEFAULT    7 syscall_lseek
    77: c1001ab6    30 FUNC    LOCAL  DEFAULT    7 syscall_unlink
    78: c1001ad4    30 FUNC    LOCAL  DEFAULT    7 syscall_mkdir
    79: c1001af2    30 FUNC    LOCAL  DEFAULT    7 syscall_rmdir
    80: c1001b10    35 FUNC    LOCAL  DEFAULT    7 syscall_rewinddir
    81: c1001b33    42 FUNC    LOCAL  DEFAULT    7 syscall_getcwd
    82: c1001b5d    30 FUNC    LOCAL  DEFAULT    7 syscall_chdir
    83: c1001b7b    44 FUNC    LOCAL  DEFAULT    7 syscall_stat
    84: c1001ba7    30 FUNC    LOCAL  DEFAULT    7 syscall_opendir
    85: c1001bc5    30 FUNC    LOCAL  DEFAULT    7 syscall_closedir
    86: c1001be3    30 FUNC    LOCAL  DEFAULT    7 syscall_readdir
    87: c1001c01    18 FUNC    LOCAL  DEFAULT    7 syscall_print_task
    88: c1001c13    30 FUNC    LOCAL  DEFAULT    7 syscall_malloc
    89: c1001c31    47 FUNC    LOCAL  DEFAULT    7 syscall_free
    90: c100c500   228 OBJECT  LOCAL  DEFAULT    9 syscalls
    91: 00000000     0 FILE    LOCAL  DEFAULT  ABS keyboard.c
    92: c100c600   256 OBJECT  LOCAL  DEFAULT    9 shiftcode
    93: c100c700   256 OBJECT  LOCAL  DEFAULT    9 togglecode
    94: c100c800   256 OBJECT  LOCAL  DEFAULT    9 normalmap
    95: c100c900   256 OBJECT  LOCAL  DEFAULT    9 shiftmap
    96: c100ca00   256 OBJECT  LOCAL  DEFAULT    9 ctlmap
    97: c100cb00    16 OBJECT  LOCAL  DEFAULT    9 charcode
    98: 00000000     0 FILE    LOCAL  DEFAULT  ABS main.c
    99: c1001ecc    37 FUNC    LOCAL  DEFAULT    7 hash32
   100: c1001f99   160 FUNC    LOCAL  DEFAULT    7 write2fs
   101: c100234a    49 FUNC    LOCAL  DEFAULT    7 print_task1
   102: c10023ac    47 FUNC    LOCAL  DEFAULT    7 delay
   103: c100237b    49 FUNC    LOCAL  DEFAULT    7 print_task2
   104: 00000000     0 FILE    LOCAL  DEFAULT  ABS pmm.c
   105: 00000000     0 FILE    LOCAL  DEFAULT  ABS vmm.c
   106: c10029b7    37 FUNC    LOCAL  DEFAULT    7 hash32
   107: 00000000     0 FILE    LOCAL  DEFAULT  ABS task.c
   108: c1002ed0    37 FUNC    LOCAL  DEFAULT    7 hash32
   109: c100ec80  8192 OBJECT  LOCAL  DEFAULT   10 hash_list
   110: c1010c80     4 OBJECT  LOCAL  DEFAULT   10 last_pid
   111: c1010c84     8 OBJECT  LOCAL  DEFAULT   10 ready_task_list
   112: c1010c8c     8 OBJECT  LOCAL  DEFAULT   10 all_task_list
   113: c1010c94     4 OBJECT  LOCAL  DEFAULT   10 nr_task
   114: c10035b9   211 FUNC    LOCAL  DEFAULT    7 alloc_task
   115: c100368c    29 FUNC    LOCAL  DEFAULT    7 forkret
   116: c10033ba    80 FUNC    LOCAL  DEFAULT    7 add_link
   117: c100340a    80 FUNC    LOCAL  DEFAULT    7 add_all_link
   118: c100348d   122 FUNC    LOCAL  DEFAULT    7 add_pid_hash
   119: c10038ea    15 FUNC    LOCAL  DEFAULT    7 wakeup_task
   120: c100323f    43 FUNC    LOCAL  DEFAULT    7 set_pid_bit
   121: c100326a    43 FUNC    LOCAL  DEFAULT    7 clear_pid_bit
   122: c1003295    65 FUNC    LOCAL  DEFAULT    7 find_free_pid
   123: c10032d6    92 FUNC    LOCAL  DEFAULT    7 alloc_pid
   124: c1003332    30 FUNC    LOCAL  DEFAULT    7 free_pid
   125: c1010c98    21 OBJECT  LOCAL  DEFAULT   10 name.2594
   126: c100345a    51 FUNC    LOCAL  DEFAULT    7 remove_link
   127: c1003507    71 FUNC    LOCAL  DEFAULT    7 remove_pid_hash
   128: c100354e   107 FUNC    LOCAL  DEFAULT    7 find_task
   129: c10036a9   244 FUNC    LOCAL  DEFAULT    7 copy_thread
   130: c100a70c     8 OBJECT  LOCAL  DEFAULT    8 __func__.2638
   131: c1003958   118 FUNC    LOCAL  DEFAULT    7 task_run
   132: c100a714    13 OBJECT  LOCAL  DEFAULT    8 __func__.2666
   133: c100a724    15 OBJECT  LOCAL  DEFAULT    8 __func__.2674
   134: c1003b70    92 FUNC    LOCAL  DEFAULT    7 print_taskinfo
   135: c1003bee    28 FUNC    LOCAL  DEFAULT    7 kernel_execve
   136: c1003c0a     6 FUNC    LOCAL  DEFAULT    7 user_main
   137: 00000000     0 FILE    LOCAL  DEFAULT  ABS pic.c
   138: c100db24     2 OBJECT  LOCAL  DEFAULT    9 irq_mask
   139: c1010cad     1 OBJECT  LOCAL  DEFAULT   10 did_init
   140: c1004216    94 FUNC    LOCAL  DEFAULT    7 pic_setmask
   141: 00000000     0 FILE    LOCAL  DEFAULT  ABS serial.c
   142: c1010cae     1 OBJECT  LOCAL  DEFAULT   10 serial_exists
   143: 00000000     0 FILE    LOCAL  DEFAULT  ABS timer.c
   144: 00000000     0 FILE    LOCAL  DEFAULT  ABS vga.c
   145: c1010caf     1 OBJECT  LOCAL  DEFAULT   10 cursor_x
   146: c1010cb0     1 OBJECT  LOCAL  DEFAULT   10 cursor_y
   147: c100db28     4 OBJECT  LOCAL  DEFAULT    9 vga_memory
   148: 00000000     0 FILE    LOCAL  DEFAULT  ABS sync.c
   149: c1005047    37 FUNC    LOCAL  DEFAULT    7 hash32
   150: c100a8f4    10 OBJECT  LOCAL  DEFAULT    8 __func__.2488
   151: 00000000     0 FILE    LOCAL  DEFAULT  ABS ide-dev.c
   152: c10052d8    40 FUNC    LOCAL  DEFAULT    7 waitdisk
   153: c1005300    38 FUNC    LOCAL  DEFAULT    7 insl
   154: c1005326    38 FUNC    LOCAL  DEFAULT    7 outsl
   155: c100534c   186 FUNC    LOCAL  DEFAULT    7 ide_read_sect
   156: c1005406   186 FUNC    LOCAL  DEFAULT    7 ide_write_sect
   157: c100553a    47 FUNC    LOCAL  DEFAULT    7 delay
   158: 00000000     0 FILE    LOCAL  DEFAULT  ABS fs.c
   159: c1005733    37 FUNC    LOCAL  DEFAULT    7 hash32
   160: c1005758  1171 FUNC    LOCAL  DEFAULT    7 partition_format
   161: c1005eae    94 FUNC    LOCAL  DEFAULT    7 path_parse
   162: c100b270    15 OBJECT  LOCAL  DEFAULT    8 __func__.2547
   163: c1005f94   656 FUNC    LOCAL  DEFAULT    7 search_file
   164: c100b280    12 OBJECT  LOCAL  DEFAULT    8 __func__.2559
   165: c100b28c     9 OBJECT  LOCAL  DEFAULT    8 __func__.2572
   166: c10064ab    65 FUNC    LOCAL  DEFAULT    7 fd_local2global
   167: c100b298    16 OBJECT  LOCAL  DEFAULT    8 __func__.2586
   168: c100b2a8     9 OBJECT  LOCAL  DEFAULT    8 __func__.2606
   169: c100b2b4    10 OBJECT  LOCAL  DEFAULT    8 __func__.2619
   170: c100b2c0    11 OBJECT  LOCAL  DEFAULT    8 __func__.2631
   171: c100b2cc    10 OBJECT  LOCAL  DEFAULT    8 __func__.2661
   172: c100b2d8    12 OBJECT  LOCAL  DEFAULT    8 __func__.2672
   173: c100b2e4    12 OBJECT  LOCAL  DEFAULT    8 __func__.2683
   174: c100b2f0    10 OBJECT  LOCAL  DEFAULT    8 __func__.2692
   175: c1007118   184 FUNC    LOCAL  DEFAULT    7 get_parent_dir_inode_nr
   176: c100b2fc    24 OBJECT  LOCAL  DEFAULT    8 __func__.2705
   177: c10071d0   423 FUNC    LOCAL  DEFAULT    7 get_child_dir_name
   178: c100b314    11 OBJECT  LOCAL  DEFAULT    8 __func__.2734
   179: 00000000     0 FILE    LOCAL  DEFAULT  ABS dir.c
   180: c100b534    17 OBJECT  LOCAL  DEFAULT    8 __func__.2218
   181: c100b548    15 OBJECT  LOCAL  DEFAULT    8 __func__.2227
   182: c100b558    17 OBJECT  LOCAL  DEFAULT    8 __func__.2271
   183: c100b56c     9 OBJECT  LOCAL  DEFAULT    8 __func__.2300
   184: c100b578    11 OBJECT  LOCAL  DEFAULT    8 __func__.2315
   185: 00000000     0 FILE    LOCAL  DEFAULT  ABS file.c
   186: c10086a7    37 FUNC    LOCAL  DEFAULT    7 hash32
   187: c100ba1c    11 OBJECT  LOCAL  DEFAULT    8 __func__.2571
   188: c100ba28    10 OBJECT  LOCAL  DEFAULT    8 __func__.2601
   189: 00000000     0 FILE    LOCAL  DEFAULT  ABS inode.c
   190: c100991e   114 FUNC    LOCAL  DEFAULT    7 inode_locate
   191: c100baf0    13 OBJECT  LOCAL  DEFAULT    8 __func__.2213
   192: c100bb00    14 OBJECT  LOCAL  DEFAULT    8 __func__.2221
   193: c1001764     0 NOTYPE  GLOBAL DEFAULT    7 vector242
   194: c10011bb     0 NOTYPE  GLOBAL DEFAULT    7 vector119
   195: c1008dd9  1909 FUNC    GLOBAL DEFAULT    7 file_write
   196: c100109b     0 NOTYPE  GLOBAL DEFAULT    7 vector87
   197: c1001092     0 NOTYPE  GLOBAL DEFAULT    7 vector86
   198: c10064ec    92 FUNC    GLOBAL DEFAULT    7 sys_close
   199: c1008c49   336 FUNC    GLOBAL DEFAULT    7 file_open
   200: c10017d0     0 NOTYPE  GLOBAL DEFAULT    7 vector251
   201: c100021a    48 FUNC    GLOBAL DEFAULT    7 strcpy
   202: c1005beb   707 FUNC    GLOBAL DEFAULT    7 mount_partition
   203: c1001e52    25 FUNC    GLOBAL DEFAULT    7 kbd_intr
   204: c1000000    29 FUNC    GLOBAL DEFAULT    7 inb
   205: 400007ae   628 FUNC    GLOBAL DEFAULT    3 my_shell
   206: c10010bf     0 NOTYPE  GLOBAL DEFAULT    7 vector91
   207: c1000eb5     0 NOTYPE  GLOBAL DEFAULT    7 vector33
   208: c1002127   534 FUNC    GLOBAL DEFAULT    7 test_vmm
   209: c10013a4     0 NOTYPE  GLOBAL DEFAULT    7 vector162
   210: 40000a4e    33 FUNC    GLOBAL DEFAULT    3 user_memset
   211: c1001608     0 NOTYPE  GLOBAL DEFAULT    7 vector213
   212: 40000d96   195 FUNC    GLOBAL DEFAULT    3 make_clear_abs_path
   213: c1001158     0 NOTYPE  GLOBAL DEFAULT    7 vector108
   214: c1000f0f     0 NOTYPE  GLOBAL DEFAULT    7 vector43
   215: c1003385    53 FUNC    GLOBAL DEFAULT    7 get_task_name
   216: c10013c8     0 NOTYPE  GLOBAL DEFAULT    7 vector165
   217: c10014b8     0 NOTYPE  GLOBAL DEFAULT    7 vector185
   218: c1001197     0 NOTYPE  GLOBAL DEFAULT    7 vector115
   219: c1002e75    91 FUNC    GLOBAL DEFAULT    7 sys_free
   220: c1611000  4096 OBJECT  GLOBAL DEFAULT   10 new_pdt
   221: 4000031b   769 FUNC    GLOBAL DEFAULT    3 printf
   222: c10011d6     0 NOTYPE  GLOBAL DEFAULT    7 vector122
   223: c1009ba1   252 FUNC    GLOBAL DEFAULT    7 inode_delete
   224: c1006fe8    16 FUNC    GLOBAL DEFAULT    7 sys_rewinddir
   225: c1001cd7   379 FUNC    GLOBAL DEFAULT    7 kbd_proc_data
   226: c100135c     0 NOTYPE  GLOBAL DEFAULT    7 vector156
   227: c1001788     0 NOTYPE  GLOBAL DEFAULT    7 vector245
   228: c10014e8     0 NOTYPE  GLOBAL DEFAULT    7 vector189
   229: c1000ddb     0 NOTYPE  GLOBAL DEFAULT    7 vector7
   230: c1000fb1     0 NOTYPE  GLOBAL DEFAULT    7 vector61
   231: c1000e64     0 NOTYPE  GLOBAL DEFAULT    7 vector24
   232: 00107000  4096 OBJECT  GLOBAL DEFAULT    2 stack_pt
   233: c1001173     0 NOTYPE  GLOBAL DEFAULT    7 vector111
   234: c100156c     0 NOTYPE  GLOBAL DEFAULT    7 vector200
   235: c1006733   236 FUNC    GLOBAL DEFAULT    7 sys_lseek
   236: c1001e6b    97 FUNC    GLOBAL DEFAULT    7 kbd_init
   237: c1010cc0    12 OBJECT  GLOBAL DEFAULT   10 highmem_zone
   238: c1009ab1   214 FUNC    GLOBAL DEFAULT    7 inode_open
   239: c1000fe7     0 NOTYPE  GLOBAL DEFAULT    7 vector67
   240: c100ec68     4 OBJECT  GLOBAL DEFAULT   10 shift
   241: 00105000  4096 OBJECT  GLOBAL DEFAULT    2 pt2
   242: c1001284     0 NOTYPE  GLOBAL DEFAULT    7 vector138
   243: c1001026     0 NOTYPE  GLOBAL DEFAULT    7 vector74
   244: c1000f8d     0 NOTYPE  GLOBAL DEFAULT    7 vector57
   245: c10045b5    85 FUNC    GLOBAL DEFAULT    7 cons_intr
   246: c1004893   285 FUNC    GLOBAL DEFAULT    7 print_char
   247: c1000a46   344 FUNC    GLOBAL DEFAULT    7 print_trapframe
   248: c1001614     0 NOTYPE  GLOBAL DEFAULT    7 vector214
   249: c1001107     0 NOTYPE  GLOBAL DEFAULT    7 vector99
   250: c1007b05  1083 FUNC    GLOBAL DEFAULT    7 sync_dir_entry
   251: c1000d74     0 NOTYPE  GLOBAL DEFAULT    7 __alltraps
   252: c1004feb    92 FUNC    GLOBAL DEFAULT    7 cons_getc
   253: c10012a8     0 NOTYPE  GLOBAL DEFAULT    7 vector141
   254: 4000132d   146 FUNC    GLOBAL DEFAULT    3 buildin_mkdir
   255: c10088e3   132 FUNC    GLOBAL DEFAULT    7 bitmap_sync
   256: c100141c     0 NOTYPE  GLOBAL DEFAULT    7 vector172
   257: c1001758     0 NOTYPE  GLOBAL DEFAULT    7 vector241
   258: c1006a3f  1082 FUNC    GLOBAL DEFAULT    7 sys_mkdir
   259: c10017e8     0 NOTYPE  GLOBAL DEFAULT    7 vector253
   260: c1000db7     0 NOTYPE  GLOBAL DEFAULT    7 vector3
   261: c1000d96     0 NOTYPE  GLOBAL DEFAULT    7 forkrets
   262: c1000dae     0 NOTYPE  GLOBAL DEFAULT    7 vector2
   263: 00103000  4096 OBJECT  GLOBAL DEFAULT    2 pt
   264: c100379d   333 FUNC    GLOBAL DEFAULT    7 do_fork
   265: c10016b0     0 NOTYPE  GLOBAL DEFAULT    7 vector227
   266: c10038f9    95 FUNC    GLOBAL DEFAULT    7 kernel_thread
   267: c10015e4     0 NOTYPE  GLOBAL DEFAULT    7 vector210
   268: c1007a99   108 FUNC    GLOBAL DEFAULT    7 create_dir_entry
   269: c100168c     0 NOTYPE  GLOBAL DEFAULT    7 vector224
   270: 400002d5    15 FUNC    GLOBAL DEFAULT    3 ps
   271: c1000efd     0 NOTYPE  GLOBAL DEFAULT    7 vector41
   272: 40000185    16 FUNC    GLOBAL DEFAULT    3 user_backtrace
   273: c1000e49     0 NOTYPE  GLOBAL DEFAULT    7 vector21
   274: c1001458     0 NOTYPE  GLOBAL DEFAULT    7 vector177
   275: c10011b2     0 NOTYPE  GLOBAL DEFAULT    7 vector118
   276: c1001002     0 NOTYPE  GLOBAL DEFAULT    7 vector70
   277: c100cb14     4 OBJECT  GLOBAL DEFAULT    9 highmem_end
   278: c1a13000     4 OBJECT  GLOBAL DEFAULT   10 task0
   279: c10054c0    61 FUNC    GLOBAL DEFAULT    7 ide_read
   280: c1000ff9     0 NOTYPE  GLOBAL DEFAULT    7 vector69
   281: c1001728     0 NOTYPE  GLOBAL DEFAULT    7 vector237
   282: c1000fcc     0 NOTYPE  GLOBAL DEFAULT    7 vector64
   283: c1000e7f     0 NOTYPE  GLOBAL DEFAULT    7 vector27
   284: c100123c     0 NOTYPE  GLOBAL DEFAULT    7 vector132
   285: c10014c4     0 NOTYPE  GLOBAL DEFAULT    7 vector186
   286: c100663b   248 FUNC    GLOBAL DEFAULT    7 sys_read
   287: c1001638     0 NOTYPE  GLOBAL DEFAULT    7 vector217
   288: c1004128   178 FUNC    GLOBAL DEFAULT    7 sys_print_task
   289: c10041da     0 NOTYPE  GLOBAL DEFAULT    7 kernel_thread_entry
   290: c1000108    22 FUNC    GLOBAL DEFAULT    7 memcpy
   291: c10085df   200 FUNC    GLOBAL DEFAULT    7 dir_remove
   292: c1000da5     0 NOTYPE  GLOBAL DEFAULT    7 vector1
   293: c1001464     0 NOTYPE  GLOBAL DEFAULT    7 vector178
   294: c1000ee2     0 NOTYPE  GLOBAL DEFAULT    7 vector38
   295: c100460a    79 FUNC    GLOBAL DEFAULT    7 serial_proc_data
   296: c1001734     0 NOTYPE  GLOBAL DEFAULT    7 vector238
   297: 4000061c    30 FUNC    GLOBAL DEFAULT    3 print_prompt
   298: c10086cc    69 FUNC    GLOBAL DEFAULT    7 get_free_slot_in_global
   299: c100030d    62 FUNC    GLOBAL DEFAULT    7 __PANIC
   300: c1000565   194 FUNC    GLOBAL DEFAULT    7 readline
   301: c1001248     0 NOTYPE  GLOBAL DEFAULT    7 vector133
   302: c100101d     0 NOTYPE  GLOBAL DEFAULT    7 vector73
   303: c10012cc     0 NOTYPE  GLOBAL DEFAULT    7 vector144
   304: c1007f40  1186 FUNC    GLOBAL DEFAULT    7 delete_dir_entry
   305: c1010ce0 0x600000 OBJECT  GLOBAL DEFAULT   10 pp
   306: c100024a    12 FUNC    GLOBAL DEFAULT    7 CPU_INVLPG
   307: c10017f4     0 NOTYPE  GLOBAL DEFAULT    7 vector254
   308: 40000250    19 FUNC    GLOBAL DEFAULT    3 rewinddir
   309: c1001119     0 NOTYPE  GLOBAL DEFAULT    7 vector101
   310: c10015f0     0 NOTYPE  GLOBAL DEFAULT    7 vector211
   311: c1612000 0x300000 OBJECT  GLOBAL DEFAULT   10 user_pt_highmem
   312: c1001434     0 NOTYPE  GLOBAL DEFAULT    7 vector174
   313: 400002e4    18 FUNC    GLOBAL DEFAULT    3 malloc
   314: c1001770     0 NOTYPE  GLOBAL DEFAULT    7 vector243
   315: c100c040    56 OBJECT  GLOBAL DEFAULT    9 gdt
   316: 4000002f    35 FUNC    GLOBAL DEFAULT    3 test_fork
   317: c100120c     0 NOTYPE  GLOBAL DEFAULT    7 vector128
   318: c1001065     0 NOTYPE  GLOBAL DEFAULT    7 vector81
   319: c1000e07     0 NOTYPE  GLOBAL DEFAULT    7 vector13
   320: c1010cb4    12 OBJECT  GLOBAL DEFAULT   10 user_sema
   321: c1000f57     0 NOTYPE  GLOBAL DEFAULT    7 vector51
   322: c1000e1e     0 NOTYPE  GLOBAL DEFAULT    7 vector16
   323: 00102000  4096 OBJECT  GLOBAL DEFAULT    2 pt_init
   324: 400019a0   512 OBJECT  GLOBAL DEFAULT    6 cwd_cache
   325: c100174c     0 NOTYPE  GLOBAL DEFAULT    7 vector240
   326: c1000f72     0 NOTYPE  GLOBAL DEFAULT    7 vector54
   327: c1000e37     0 NOTYPE  GLOBAL DEFAULT    7 vector19
   328: c1002814   252 FUNC    GLOBAL DEFAULT    7 pmm_alloc
   329: c10010c8     0 NOTYPE  GLOBAL DEFAULT    7 vector92
   330: c100467d    85 FUNC    GLOBAL DEFAULT    7 serial_putc_sub
   331: c100177c     0 NOTYPE  GLOBAL DEFAULT    7 vector244
   332: c100129c     0 NOTYPE  GLOBAL DEFAULT    7 vector140
   333: c1000f21     0 NOTYPE  GLOBAL DEFAULT    7 vector45
   334: c10083e2   469 FUNC    GLOBAL DEFAULT    7 dir_read
   335: c1001053     0 NOTYPE  GLOBAL DEFAULT    7 vector79
   336: 40000e59    96 FUNC    GLOBAL DEFAULT    3 buildin_pwd
   337: c10016c8     0 NOTYPE  GLOBAL DEFAULT    7 vector229
   338: 4000023e    18 FUNC    GLOBAL DEFAULT    3 rmdir
   339: c1001374     0 NOTYPE  GLOBAL DEFAULT    7 vector158
   340: c1004274    51 FUNC    GLOBAL DEFAULT    7 pic_enable
   341: c100203e   233 FUNC    GLOBAL DEFAULT    7 test_pmm
   342: 400002c3    18 FUNC    GLOBAL DEFAULT    3 readdir
   343: c1000eeb     0 NOTYPE  GLOBAL DEFAULT    7 vector39
   344: c1000674   232 FUNC    GLOBAL DEFAULT    7 gdt_init
   345: c10013ec     0 NOTYPE  GLOBAL DEFAULT    7 vector168
   346: c1000ec7     0 NOTYPE  GLOBAL DEFAULT    7 vector35
   347: c1001185     0 NOTYPE  GLOBAL DEFAULT    7 vector113
   348: c100cb10     4 OBJECT  GLOBAL DEFAULT    9 highmem_start
   349: c10011f1     0 NOTYPE  GLOBAL DEFAULT    7 vector125
   350: c10085b7    40 FUNC    GLOBAL DEFAULT    7 dir_is_empty
   351: 400014e4     4 OBJECT  GLOBAL DEFAULT    4 argc
   352: c1008967   738 FUNC    GLOBAL DEFAULT    7 file_create
   353: c1a13228     4 OBJECT  GLOBAL DEFAULT   10 second
   354: 40000116    15 FUNC    GLOBAL DEFAULT    3 user_sys_getpid
   355: c100162c     0 NOTYPE  GLOBAL DEFAULT    7 vector216
   356: 400001f7    35 FUNC    GLOBAL DEFAULT    3 lseek
   357: c1000fc3     0 NOTYPE  GLOBAL DEFAULT    7 vector63
   358: c1000e76     0 NOTYPE  GLOBAL DEFAULT    7 vector26
   359: c1004659    36 FUNC    GLOBAL DEFAULT    7 serial_intr
   360: c1001518     0 NOTYPE  GLOBAL DEFAULT    7 vector193
   361: c100153c     0 NOTYPE  GLOBAL DEFAULT    7 vector196
   362: c10015d8     0 NOTYPE  GLOBAL DEFAULT    7 vector209
   363: c1000dc0     0 NOTYPE  GLOBAL DEFAULT    7 vector4
   364: c10056af   132 FUNC    GLOBAL DEFAULT    7 test_ide_io
   365: c1001404     0 NOTYPE  GLOBAL DEFAULT    7 vector170
   366: c10039ce   165 FUNC    GLOBAL DEFAULT    7 schedule
   367: c100126c     0 NOTYPE  GLOBAL DEFAULT    7 vector136
   368: c1000df2     0 NOTYPE  GLOBAL DEFAULT    7 vector10
   369: c10015b4     0 NOTYPE  GLOBAL DEFAULT    7 vector206
   370: c1001800     0 NOTYPE  GLOBAL DEFAULT    7 vector255
   371: c1002dba    92 FUNC    GLOBAL DEFAULT    7 setup_pgdir
   372: c1001488     0 NOTYPE  GLOBAL DEFAULT    7 vector181
   373: 40001451   146 FUNC    GLOBAL DEFAULT    3 buildin_rm
   374: c1610ce0    12 OBJECT  GLOBAL DEFAULT   10 normal_zone
   375: c100771d   148 FUNC    GLOBAL DEFAULT    7 fs_init
   376: c1000f9f     0 NOTYPE  GLOBAL DEFAULT    7 vector59
   377: c1a13234     4 OBJECT  GLOBAL DEFAULT   10 root_dir
   378: c1003d0e   296 FUNC    GLOBAL DEFAULT    7 copy_user_cr3
   379: c1001089     0 NOTYPE  GLOBAL DEFAULT    7 vector85
   380: c1001080     0 NOTYPE  GLOBAL DEFAULT    7 vector84
   381: c10041df     0 NOTYPE  GLOBAL DEFAULT    7 switch_to
   382: c10014a0     0 NOTYPE  GLOBAL DEFAULT    7 vector183
   383: c100065d    23 FUNC    GLOBAL DEFAULT    7 ltr
   384: c1001380     0 NOTYPE  GLOBAL DEFAULT    7 vector159
   385: c10015fc     0 NOTYPE  GLOBAL DEFAULT    7 vector212
   386: c1003e36   754 FUNC    GLOBAL DEFAULT    7 user_task_init
   387: c1000f33     0 NOTYPE  GLOBAL DEFAULT    7 vector47
   388: c10016bc     0 NOTYPE  GLOBAL DEFAULT    7 vector228
   389: c1000f06     0 NOTYPE  GLOBAL DEFAULT    7 vector42
   390: c10003de    47 FUNC    GLOBAL DEFAULT    7 instr_hello
   391: c100118e     0 NOTYPE  GLOBAL DEFAULT    7 vector114
   392: c1001440     0 NOTYPE  GLOBAL DEFAULT    7 vector175
   393: c10012c0     0 NOTYPE  GLOBAL DEFAULT    7 vector143
   394: c10029dc   216 FUNC    GLOBAL DEFAULT    7 setup_vpt
   395: c1001224     0 NOTYPE  GLOBAL DEFAULT    7 vector130
   396: c1001794     0 NOTYPE  GLOBAL DEFAULT    7 vector246
   397: c1000deb     0 NOTYPE  GLOBAL DEFAULT    7 vector9
   398: c10012b4     0 NOTYPE  GLOBAL DEFAULT    7 vector142
   399: c1001110     0 NOTYPE  GLOBAL DEFAULT    7 vector100
   400: c100001d    31 FUNC    GLOBAL DEFAULT    7 inw
   401: c1007873   492 FUNC    GLOBAL DEFAULT    7 search_dir_entry
   402: c1001578     0 NOTYPE  GLOBAL DEFAULT    7 vector201
   403: c1003c10   254 FUNC    GLOBAL DEFAULT    7 set_user_cr3
   404: c1003ac0   176 FUNC    GLOBAL DEFAULT    7 thread_unblock
   405: c1000196    63 FUNC    GLOBAL DEFAULT    7 strrchr
   406: c1000768   491 FUNC    GLOBAL DEFAULT    7 idt_init
   407: 00101000  4096 OBJECT  GLOBAL DEFAULT    2 pdt
   408: c1002039     5 FUNC    GLOBAL DEFAULT    7 kernel_main
   409: c1000fa8     0 NOTYPE  GLOBAL DEFAULT    7 vector60
   410: c1000e5b     0 NOTYPE  GLOBAL DEFAULT    7 vector23
   411: c1004718   124 FUNC    GLOBAL DEFAULT    7 timer_init
   412: c1006fb3    53 FUNC    GLOBAL DEFAULT    7 sys_readdir
   413: c100171c     0 NOTYPE  GLOBAL DEFAULT    7 vector236
   414: c1002910   167 FUNC    GLOBAL DEFAULT    7 pmm_free
   415: 400001df    24 FUNC    GLOBAL DEFAULT    3 write
   416: c1006224   647 FUNC    GLOBAL DEFAULT    7 sys_open
   417: c10016e0     0 NOTYPE  GLOBAL DEFAULT    7 vector231
   418: c1004b66   178 FUNC    GLOBAL DEFAULT    7 backtrace
   419: c1000fde     0 NOTYPE  GLOBAL DEFAULT    7 vector66
   420: c1000e91     0 NOTYPE  GLOBAL DEFAULT    7 vector29
   421: c1001260     0 NOTYPE  GLOBAL DEFAULT    7 vector135
   422: 40000bbe    48 FUNC    GLOBAL DEFAULT    3 user_strcpy
   423: c100481b   120 FUNC    GLOBAL DEFAULT    7 clear
   424: 00106000  4096 OBJECT  GLOBAL DEFAULT    2 pt3
   425: c1001041     0 NOTYPE  GLOBAL DEFAULT    7 vector77
   426: c100040d   125 FUNC    GLOBAL DEFAULT    7 instr_help
   427: c10001d5    69 FUNC    GLOBAL DEFAULT    7 strcat
   428: c100147c     0 NOTYPE  GLOBAL DEFAULT    7 vector180
   429: c10015cc     0 NOTYPE  GLOBAL DEFAULT    7 vector208
   430: c100048a   193 FUNC    GLOBAL DEFAULT    7 instr_game
   431: c10010fe     0 NOTYPE  GLOBAL DEFAULT    7 vector98
   432: c10010f5     0 NOTYPE  GLOBAL DEFAULT    7 vector97
   433: c1002cd1   233 FUNC    GLOBAL DEFAULT    7 vmm_map
   434: c100144c     0 NOTYPE  GLOBAL DEFAULT    7 vector176
   435: c1001524     0 NOTYPE  GLOBAL DEFAULT    7 vector194
   436: c1000eac     0 NOTYPE  GLOBAL DEFAULT    7 vector32
   437: 40000278    18 FUNC    GLOBAL DEFAULT    3 chdir
   438: c1001560     0 NOTYPE  GLOBAL DEFAULT    7 vector199
   439: c1003bcc    24 FUNC    GLOBAL DEFAULT    7 do_exit
   440: 40000b43    40 FUNC    GLOBAL DEFAULT    3 user_strlen
   441: c1001230     0 NOTYPE  GLOBAL DEFAULT    7 vector131
   442: c10017dc     0 NOTYPE  GLOBAL DEFAULT    7 vector252
   443: c1000d9c     0 NOTYPE  GLOBAL DEFAULT    7 vector0
   444: c1003a73    77 FUNC    GLOBAL DEFAULT    7 thread_block
   445: c1004fad    62 FUNC    GLOBAL DEFAULT    7 cons_putc
   446: c10012d8     0 NOTYPE  GLOBAL DEFAULT    7 vector145
   447: c1a13004     4 OBJECT  GLOBAL DEFAULT   10 task1
   448: c1006548   243 FUNC    GLOBAL DEFAULT    7 sys_write
   449: c100114f     0 NOTYPE  GLOBAL DEFAULT    7 vector107
   450: c1000ef4     0 NOTYPE  GLOBAL DEFAULT    7 vector40
   451: c1000d11    31 FUNC    GLOBAL DEFAULT    7 intr_enable
   452: c1001122     0 NOTYPE  GLOBAL DEFAULT    7 vector102
   453: c100954e   976 FUNC    GLOBAL DEFAULT    7 file_read
   454: 40000156    47 FUNC    GLOBAL DEFAULT    3 user_print_num
   455: c1000f84     0 NOTYPE  GLOBAL DEFAULT    7 vector56
   456: 40000b04    63 FUNC    GLOBAL DEFAULT    3 user_strrchr
   457: c1000ff0     0 NOTYPE  GLOBAL DEFAULT    7 vector68
   458: c100cb20  4100 OBJECT  GLOBAL DEFAULT    9 task_pidmap
   459: c1000dd2     0 NOTYPE  GLOBAL DEFAULT    7 vector6
   460: c1001218     0 NOTYPE  GLOBAL DEFAULT    7 vector129
   461: c1a133c0     0 NOTYPE  GLOBAL DEFAULT   10 kernel_end
   462: c1001548     0 NOTYPE  GLOBAL DEFAULT    7 vector197
   463: 40000195    24 FUNC    GLOBAL DEFAULT    3 read
   464: c10044fc   115 FUNC    GLOBAL DEFAULT    7 lpt_putc_sub
   465: c10046d2    70 FUNC    GLOBAL DEFAULT    7 serial_putc
   466: c100132c     0 NOTYPE  GLOBAL DEFAULT    7 vector152
   467: c1006f86    45 FUNC    GLOBAL DEFAULT    7 sys_closedir
   468: c100c100     0 NOTYPE  GLOBAL DEFAULT    9 __vectors
   469: c10016d4     0 NOTYPE  GLOBAL DEFAULT    7 vector230
   470: c1000ed9     0 NOTYPE  GLOBAL DEFAULT    7 vector37
   471: c10015a8     0 NOTYPE  GLOBAL DEFAULT    7 vector205
   472: c1001398     0 NOTYPE  GLOBAL DEFAULT    7 vector161
   473: c1a13008     4 OBJECT  GLOBAL DEFAULT   10 current
   474: 4000021a    18 FUNC    GLOBAL DEFAULT    3 unlink
   475: c100100b     0 NOTYPE  GLOBAL DEFAULT    7 vector71
   476: c100138c     0 NOTYPE  GLOBAL DEFAULT    7 vector160
   477: c100456f    70 FUNC    GLOBAL DEFAULT    7 lpt_putc
   478: c1001620     0 NOTYPE  GLOBAL DEFAULT    7 vector215
   479: c1001368     0 NOTYPE  GLOBAL DEFAULT    7 vector157
   480: 00109000     0 NOTYPE  GLOBAL DEFAULT    2 init_end
   481: c1000d30    32 FUNC    GLOBAL DEFAULT    7 intr_disable
   482: c1000986   192 FUNC    GLOBAL DEFAULT    7 print_regs
   483: c100117c     0 NOTYPE  GLOBAL DEFAULT    7 vector112
   484: 40000af1    19 FUNC    GLOBAL DEFAULT    3 user_strcmp
   485: 40001308    37 FUNC    GLOBAL DEFAULT    3 buildin_ps
   486: c1000256    12 FUNC    GLOBAL DEFAULT    7 lcr3
   487: c1912000 0x20000 OBJECT  GLOBAL DEFAULT   10 pt_highmem
   488: c1001494     0 NOTYPE  GLOBAL DEFAULT    7 vector182
   489: c1003350    53 FUNC    GLOBAL DEFAULT    7 set_task_name
   490: c1000e00     0 NOTYPE  GLOBAL DEFAULT    7 vector12
   491: 40000143    19 FUNC    GLOBAL DEFAULT    3 user_print_string
   492: c1001161     0 NOTYPE  GLOBAL DEFAULT    7 vector109
   493: c1000e40     0 NOTYPE  GLOBAL DEFAULT    7 vector20
   494: c1000ce6     7 FUNC    GLOBAL DEFAULT    7 disable_interupt
   495: 4000030c    15 FUNC    GLOBAL DEFAULT    3 fork
   496: c1004c18   917 FUNC    GLOBAL DEFAULT    7 printk
   497: c1000f69     0 NOTYPE  GLOBAL DEFAULT    7 vector53
   498: c1000e2e     0 NOTYPE  GLOBAL DEFAULT    7 vector18
   499: 00100000   624 FUNC    GLOBAL DEFAULT    1 init
   500: c1008d99    64 FUNC    GLOBAL DEFAULT    7 file_close
   501: c10010e3     0 NOTYPE  GLOBAL DEFAULT    7 vector95
   502: c10023db    25 FUNC    GLOBAL DEFAULT    7 test_user
   503: c1003be4    10 FUNC    GLOBAL DEFAULT    7 do_execve
   504: c10016a4     0 NOTYPE  GLOBAL DEFAULT    7 vector226
   505: c1a13230     4 OBJECT  GLOBAL DEFAULT   10 cur_part
   506: c1000f45     0 NOTYPE  GLOBAL DEFAULT    7 vector49
   507: c1000f18     0 NOTYPE  GLOBAL DEFAULT    7 vector44
   508: 40000ba8    22 FUNC    GLOBAL DEFAULT    3 user_memcpy
   509: c100104a     0 NOTYPE  GLOBAL DEFAULT    7 vector78
   510: c1001428     0 NOTYPE  GLOBAL DEFAULT    7 vector173
   511: c100003c    33 FUNC    GLOBAL DEFAULT    7 outb
   512: c10011a9     0 NOTYPE  GLOBAL DEFAULT    7 vector117
   513: c100106e     0 NOTYPE  GLOBAL DEFAULT    7 vector82
   514: c1001674     0 NOTYPE  GLOBAL DEFAULT    7 vector222
   515: c1000de4     0 NOTYPE  GLOBAL DEFAULT    7 vector8
   516: c1001308     0 NOTYPE  GLOBAL DEFAULT    7 vector149
   517: c10000aa    33 FUNC    GLOBAL DEFAULT    7 memset
   518: c100506c    54 FUNC    GLOBAL DEFAULT    7 sema_init
   519: c10051ac   148 FUNC    GLOBAL DEFAULT    7 sema_up
   520: c10016ec     0 NOTYPE  GLOBAL DEFAULT    7 vector232
   521: c1001ef1   168 FUNC    GLOBAL DEFAULT    7 main
   522: c1005240    79 FUNC    GLOBAL DEFAULT    7 lock_acquire
   523: c1001146     0 NOTYPE  GLOBAL DEFAULT    7 vector106
   524: c100165c     0 NOTYPE  GLOBAL DEFAULT    7 vector220
   525: 40001ba0   512 OBJECT  GLOBAL DEFAULT    6 final_path
   526: c10010b6     0 NOTYPE  GLOBAL DEFAULT    7 vector90
   527: c10013b0     0 NOTYPE  GLOBAL DEFAULT    7 vector163
   528: c1001704     0 NOTYPE  GLOBAL DEFAULT    7 vector234
   529: c100681f   544 FUNC    GLOBAL DEFAULT    7 sys_unlink
   530: c1000fba     0 NOTYPE  GLOBAL DEFAULT    7 vector62
   531: c1000e6d     0 NOTYPE  GLOBAL DEFAULT    7 vector25
   532: c1001554     0 NOTYPE  GLOBAL DEFAULT    7 vector198
   533: c10050a2    42 FUNC    GLOBAL DEFAULT    7 lock_init
   534: c10011c4     0 NOTYPE  GLOBAL DEFAULT    7 vector120
   535: c10077b1   130 FUNC    GLOBAL DEFAULT    7 open_root_dir
   536: c1002e16    95 FUNC    GLOBAL DEFAULT    7 sys_malloc
   537: c10050cc   224 FUNC    GLOBAL DEFAULT    7 sema_down
   538: c1001c60   119 FUNC    GLOBAL DEFAULT    7 syscall_trap
   539: c100054b    26 FUNC    GLOBAL DEFAULT    7 getchar
   540: c1000ced     7 FUNC    GLOBAL DEFAULT    7 enable_interupt
   541: 4000029f    18 FUNC    GLOBAL DEFAULT    3 opendir
   542: c1000f4e     0 NOTYPE  GLOBAL DEFAULT    7 vector50
   543: c1000e15     0 NOTYPE  GLOBAL DEFAULT    7 vector15
   544: c100528f    73 FUNC    GLOBAL DEFAULT    7 lock_release
   545: 00104000  4096 OBJECT  GLOBAL DEFAULT    2 pt1
   546: 40000eb9   138 FUNC    GLOBAL DEFAULT    3 buildin_cd
   547: c1000cf4    29 FUNC    GLOBAL DEFAULT    7 get_now_intr_status
   548: c1001320     0 NOTYPE  GLOBAL DEFAULT    7 vector151
   549: c1001077     0 NOTYPE  GLOBAL DEFAULT    7 vector83
   550: c10010ad     0 NOTYPE  GLOBAL DEFAULT    7 vector89
   551: c10010a4     0 NOTYPE  GLOBAL DEFAULT    7 vector88
   552: c1000ccf    23 FUNC    GLOBAL DEFAULT    7 trap
   553: c1001470     0 NOTYPE  GLOBAL DEFAULT    7 vector179
   554: c1000ebe     0 NOTYPE  GLOBAL DEFAULT    7 vector34
   555: c1000f2a     0 NOTYPE  GLOBAL DEFAULT    7 vector46
   556: c1000183    19 FUNC    GLOBAL DEFAULT    7 strcmp
   557: c1000d50    19 FUNC    GLOBAL DEFAULT    7 intr_save
   558: c1001254     0 NOTYPE  GLOBAL DEFAULT    7 vector134
   559: c1004410   236 FUNC    GLOBAL DEFAULT    7 serial_init
   560: c1001680     0 NOTYPE  GLOBAL DEFAULT    7 vector223
   561: c1a1322c     4 OBJECT  GLOBAL DEFAULT   10 jiffies
   562: c1002ef5   842 FUNC    GLOBAL DEFAULT    7 kernel_task_init
   563: c1007377   493 FUNC    GLOBAL DEFAULT    7 sys_getcwd
   564: 40000263    21 FUNC    GLOBAL DEFAULT    3 getcwd
   565: c10043c7    73 FUNC    GLOBAL DEFAULT    7 delay
   566: c1009c9d   709 FUNC    GLOBAL DEFAULT    7 inode_release
   567: c1001644     0 NOTYPE  GLOBAL DEFAULT    7 vector218
   568: c1005f0c   136 FUNC    GLOBAL DEFAULT    7 path_depth_cnt
   569: c1000384    90 FUNC    GLOBAL DEFAULT    7 run
   570: c1004794   135 FUNC    GLOBAL DEFAULT    7 print_cursor
   571: c10042a7   288 FUNC    GLOBAL DEFAULT    7 pic_init
   572: c1001698     0 NOTYPE  GLOBAL DEFAULT    7 vector225
   573: c10014d0     0 NOTYPE  GLOBAL DEFAULT    7 vector187
   574: c1000d63    17 FUNC    GLOBAL DEFAULT    7 intr_restore
   575: c10023f4  1056 FUNC    GLOBAL DEFAULT    7 pmm_init
   576: c1610cec    12 OBJECT  GLOBAL DEFAULT   10 dma_zone
   577: c100ec70     4 OBJECT  GLOBAL DEFAULT   10 test_user_task
   578: c1000e9a     0 NOTYPE  GLOBAL DEFAULT    7 vector30
   579: c1001203     0 NOTYPE  GLOBAL DEFAULT    7 vector127
   580: c100150c     0 NOTYPE  GLOBAL DEFAULT    7 vector192
   581: c10013d4     0 NOTYPE  GLOBAL DEFAULT    7 vector166
   582: c1001038     0 NOTYPE  GLOBAL DEFAULT    7 vector76
   583: c100102f     0 NOTYPE  GLOBAL DEFAULT    7 vector75
   584: c1001530     0 NOTYPE  GLOBAL DEFAULT    7 vector195
   585: c1001314     0 NOTYPE  GLOBAL DEFAULT    7 vector150
   586: c1000f96     0 NOTYPE  GLOBAL DEFAULT    7 vector58
   587: c10017ac     0 NOTYPE  GLOBAL DEFAULT    7 vector248
   588: c10011df     0 NOTYPE  GLOBAL DEFAULT    7 vector123
   589: c10010ec     0 NOTYPE  GLOBAL DEFAULT    7 vector96
   590: c1009990   289 FUNC    GLOBAL DEFAULT    7 inode_sync
   591: c1000ea3     0 NOTYPE  GLOBAL DEFAULT    7 vector31
   592: c1001590     0 NOTYPE  GLOBAL DEFAULT    7 vector203
   593: c1002ab4   293 FUNC    GLOBAL DEFAULT    7 vmm_malloc
   594: c100ec74     4 OBJECT  GLOBAL DEFAULT   10 offset
   595: c10049e7   383 FUNC    GLOBAL DEFAULT    7 print_num
   596: c1001290     0 NOTYPE  GLOBAL DEFAULT    7 vector139
   597: c1001338     0 NOTYPE  GLOBAL DEFAULT    7 vector153
   598: c10013bc     0 NOTYPE  GLOBAL DEFAULT    7 vector164
   599: c10011cd     0 NOTYPE  GLOBAL DEFAULT    7 vector121
   600: c1000dc9     0 NOTYPE  GLOBAL DEFAULT    7 vector5
   601: c10013e0     0 NOTYPE  GLOBAL DEFAULT    7 vector167
   602: c1001350     0 NOTYPE  GLOBAL DEFAULT    7 vector155
   603: c10017b8     0 NOTYPE  GLOBAL DEFAULT    7 vector249
   604: c100005d    33 FUNC    GLOBAL DEFAULT    7 outw
   605: c10017c4     0 NOTYPE  GLOBAL DEFAULT    7 vector250
   606: c1007833    64 FUNC    GLOBAL DEFAULT    7 dir_open
   607: c10011e8     0 NOTYPE  GLOBAL DEFAULT    7 vector124
   608: c100116a     0 NOTYPE  GLOBAL DEFAULT    7 vector110
   609: c100c000    36 OBJECT  GLOBAL DEFAULT    9 instr_list
   610: c100159c     0 NOTYPE  GLOBAL DEFAULT    7 vector204
   611: 4000028a    21 FUNC    GLOBAL DEFAULT    3 stat
   612: c1000d8b     0 NOTYPE  GLOBAL DEFAULT    7 __trapret
   613: c1000262   171 FUNC    GLOBAL DEFAULT    7 print_seg
   614: c1001278     0 NOTYPE  GLOBAL DEFAULT    7 vector137
   615: c1932000     4 OBJECT  GLOBAL DEFAULT   10 highmem_ptr
   616: c1006e79   269 FUNC    GLOBAL DEFAULT    7 sys_opendir
   617: c10017a0     0 NOTYPE  GLOBAL DEFAULT    7 vector247
   618: c1000e52     0 NOTYPE  GLOBAL DEFAULT    7 vector22
   619: c10049b0    55 FUNC    GLOBAL DEFAULT    7 print_string
   620: c1001584     0 NOTYPE  GLOBAL DEFAULT    7 vector202
   621: c1001014     0 NOTYPE  GLOBAL DEFAULT    7 vector72
   622: c1000f7b     0 NOTYPE  GLOBAL DEFAULT    7 vector55
   623: c10011fa     0 NOTYPE  GLOBAL DEFAULT    7 vector126
   624: c1000fd5     0 NOTYPE  GLOBAL DEFAULT    7 vector65
   625: c1000e88     0 NOTYPE  GLOBAL DEFAULT    7 vector28
   626: c10013f8     0 NOTYPE  GLOBAL DEFAULT    7 vector169
   627: c10016f8     0 NOTYPE  GLOBAL DEFAULT    7 vector233
   628: 40000052   104 FUNC    GLOBAL DEFAULT    3 user_main
   629: 40000125    30 FUNC    GLOBAL DEFAULT    3 user_print_char
   630: c1000953    14 FUNC    GLOBAL DEFAULT    7 set_ts_esp0
   631: c10012f0     0 NOTYPE  GLOBAL DEFAULT    7 vector147
   632: 40001e60     0 NOTYPE  GLOBAL DEFAULT    6 user_end
   633: c1001134     0 NOTYPE  GLOBAL DEFAULT    7 vector104
   634: c10011a0     0 NOTYPE  GLOBAL DEFAULT    7 vector116
   635: c1002bd9   248 FUNC    GLOBAL DEFAULT    7 vmm_free
   636: c1009f62    80 FUNC    GLOBAL DEFAULT    7 inode_init
   637: c1a1300c     4 OBJECT  GLOBAL DEFAULT   10 user_task
   638: c1a13240   384 OBJECT  GLOBAL DEFAULT   10 file_table
   639: c1000f60     0 NOTYPE  GLOBAL DEFAULT    7 vector52
   640: c1000e27     0 NOTYPE  GLOBAL DEFAULT    7 vector17
   641: c10014ac     0 NOTYPE  GLOBAL DEFAULT    7 vector184
   642: c100011e    40 FUNC    GLOBAL DEFAULT    7 strlen
   643: 400001ad    32 FUNC    GLOBAL DEFAULT    3 open
   644: c1006ff8   288 FUNC    GLOBAL DEFAULT    7 sys_rmdir
   645: c10015c0     0 NOTYPE  GLOBAL DEFAULT    7 vector207
   646: c10014f4     0 NOTYPE  GLOBAL DEFAULT    7 vector190
   647: c1007564   300 FUNC    GLOBAL DEFAULT    7 sys_stat
   648: c1001740     0 NOTYPE  GLOBAL DEFAULT    7 vector239
   649: c10010da     0 NOTYPE  GLOBAL DEFAULT    7 vector94
   650: c10010d1     0 NOTYPE  GLOBAL DEFAULT    7 vector93
   651: c10014dc     0 NOTYPE  GLOBAL DEFAULT    7 vector188
   652: 40000f43   965 FUNC    GLOBAL DEFAULT    3 buildin_ls
   653: c1000f3c     0 NOTYPE  GLOBAL DEFAULT    7 vector48
   654: 400013bf   146 FUNC    GLOBAL DEFAULT    3 buildin_rmdir
   655: c1001650     0 NOTYPE  GLOBAL DEFAULT    7 vector219
   656: c1a13020   520 OBJECT  GLOBAL DEFAULT   10 cons
   657: c10012fc     0 NOTYPE  GLOBAL DEFAULT    7 vector148
   658: c1001668     0 NOTYPE  GLOBAL DEFAULT    7 vector221
   659: 400002b1    18 FUNC    GLOBAL DEFAULT    3 closedir
   660: c1005569   326 FUNC    GLOBAL DEFAULT    7 read_main_partition
   661: c100105c     0 NOTYPE  GLOBAL DEFAULT    7 vector80
   662: c1001410     0 NOTYPE  GLOBAL DEFAULT    7 vector171
   663: c1001344     0 NOTYPE  GLOBAL DEFAULT    7 vector154
   664: c100ec6c     1 OBJECT  GLOBAL DEFAULT   10 shell_input
   665: c1000ed0     0 NOTYPE  GLOBAL DEFAULT    7 vector36
   666: c100db2c     0 NOTYPE  GLOBAL DEFAULT    9 kernel_bss
   667: c1001710     0 NOTYPE  GLOBAL DEFAULT    7 vector235
   668: c100113d     0 NOTYPE  GLOBAL DEFAULT    7 vector105
   669: c1007690   141 FUNC    GLOBAL DEFAULT    7 sys_chdir
   670: 40000a6f    69 FUNC    GLOBAL DEFAULT    3 user_strcat
   671: c1007a5f    58 FUNC    GLOBAL DEFAULT    7 dir_close
   672: 00108000  4096 OBJECT  GLOBAL DEFAULT    2 user_pt
   673: c100233d    13 FUNC    GLOBAL DEFAULT    7 test_schedule
   674: 4000022c    18 FUNC    GLOBAL DEFAULT    3 mkdir
   675: c10012e4     0 NOTYPE  GLOBAL DEFAULT    7 vector146
   676: c1008755   192 FUNC    GLOBAL DEFAULT    7 inode_bitmap_alloc
   677: c1001500     0 NOTYPE  GLOBAL DEFAULT    7 vector191
   678: 400001cd    18 FUNC    GLOBAL DEFAULT    3 close
   679: c100112b     0 NOTYPE  GLOBAL DEFAULT    7 vector103
   680: c100034b    57 FUNC    GLOBAL DEFAULT    7 monitor
   681: c10054fd    61 FUNC    GLOBAL DEFAULT    7 ide_write
   682: c1008711    68 FUNC    GLOBAL DEFAULT    7 task_fd_install
   683: c1009b87    26 FUNC    GLOBAL DEFAULT    7 inode_close
   684: 400002f6    22 FUNC    GLOBAL DEFAULT    3 free
   685: c1008815   206 FUNC    GLOBAL DEFAULT    7 block_bitmap_alloc
   686: c1933000 0xe0000 OBJECT  GLOBAL DEFAULT   10 pt_dma_nomal
   687: c1000df9     0 NOTYPE  GLOBAL DEFAULT    7 vector11
   688: c1000e0e     0 NOTYPE  GLOBAL DEFAULT    7 vector14

No version information found in this file.
