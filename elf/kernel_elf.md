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
  Start of section headers:          216748 (bytes into file)
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
  [ 3] .user.text        PROGBITS        40000000 018000 001420 00  AX  0   0  1
  [ 4] .user.data        PROGBITS        40001420 019420 000004 00  WA  0   0  4
  [ 5] .user.rodata      PROGBITS        40001424 019424 000480 00   A  0   0  4
  [ 6] .user.bss         NOBITS          400018c0 0198a4 0004c0 00  WA  0   0 32
  [ 7] .text             PROGBITS        c1000000 00a000 009a2b 00  AX  0   0  1
  [ 8] .rodata           PROGBITS        c1009a2c 013a2c 001ae2 00   A  0   0  4
  [ 9] .data             PROGBITS        c100c000 016000 001b0c 00  WA  0   0 32
  [10] .bss              NOBITS          c100e000 017b0c a053c0 00  WA  0   0 4096
  [11] .debug_info       PROGBITS        00000000 0198a4 009f95 00      0   0  1
  [12] .debug_abbrev     PROGBITS        00000000 023839 002c9e 00      0   0  1
  [13] .debug_aranges    PROGBITS        00000000 0264d7 0003a0 00      0   0  1
  [14] .debug_ranges     PROGBITS        00000000 026877 000060 00      0   0  1
  [15] .debug_line       PROGBITS        00000000 0268d7 00559e 00      0   0  1
  [16] .debug_str        PROGBITS        00000000 02be75 002530 01  MS  0   0  1
  [17] .comment          PROGBITS        00000000 02e3a5 000011 01  MS  0   0  1
  [18] .stab             PROGBITS        00000000 02e3b8 002610 0c     19   0  4
  [19] .stabstr          STRTAB          00000000 0309c8 0001d4 00      0   0  1
  [20] .symtab           SYMTAB          00000000 030b9c 0029f0 10     21 185  4
  [21] .strtab           STRTAB          00000000 03358c 001859 00      0   0  1
  [22] .shstrtab         STRTAB          00000000 034de5 0000c4 00      0   0  1
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
  LOAD           0x00a000 0xc1000000 0x01000000 0x0b50e 0x0b50e R E 0x1000
  LOAD           0x016000 0xc100c000 0x0100c000 0x01b0c 0xa073c0 RW  0x1000
  LOAD           0x018000 0x40000000 0x40000000 0x018a4 0x01d80 RWE 0x1000

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

Symbol table '.symtab' contains 671 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00100000     0 SECTION LOCAL  DEFAULT    1 
     2: 00101000     0 SECTION LOCAL  DEFAULT    2 
     3: 40000000     0 SECTION LOCAL  DEFAULT    3 
     4: 40001420     0 SECTION LOCAL  DEFAULT    4 
     5: 40001424     0 SECTION LOCAL  DEFAULT    5 
     6: 400018c0     0 SECTION LOCAL  DEFAULT    6 
     7: c1000000     0 SECTION LOCAL  DEFAULT    7 
     8: c1009a2c     0 SECTION LOCAL  DEFAULT    8 
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
    21: c1009a98     5 OBJECT  LOCAL  DEFAULT    8 __func__.1905
    22: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_main.c
    23: 40000000    47 FUNC    LOCAL  DEFAULT    3 delay
    24: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_syscall.c
    25: 40000097    92 FUNC    LOCAL  DEFAULT    3 user_syscall
    26: 00000000     0 FILE    LOCAL  DEFAULT  ABS stdio.c
    27: 00000000     0 FILE    LOCAL  DEFAULT  ABS shell.c
    28: 40001cc0   128 OBJECT  LOCAL  DEFAULT    6 cmd_line
    29: 40001d40    64 OBJECT  LOCAL  DEFAULT    6 argv
    30: 400005d1   176 FUNC    LOCAL  DEFAULT    3 user_readline
    31: 40000681   196 FUNC    LOCAL  DEFAULT    3 cmd_parse
    32: 00000000     0 FILE    LOCAL  DEFAULT  ABS string.c
    33: 40000984    44 FUNC    LOCAL  DEFAULT    3 __memset
    34: 40000a16    61 FUNC    LOCAL  DEFAULT    3 __strcmp
    35: 40000acd    61 FUNC    LOCAL  DEFAULT    3 __memcpy
    36: 00000000     0 FILE    LOCAL  DEFAULT  ABS buildin_cmd.c
    37: 40000b50    94 FUNC    LOCAL  DEFAULT    3 path_parse
    38: 40000bae   330 FUNC    LOCAL  DEFAULT    3 wash_path
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
    87: c100c500   216 OBJECT  LOCAL  DEFAULT    9 syscalls
    88: 00000000     0 FILE    LOCAL  DEFAULT  ABS keyboard.c
    89: c100c5e0   256 OBJECT  LOCAL  DEFAULT    9 shiftcode
    90: c100c6e0   256 OBJECT  LOCAL  DEFAULT    9 togglecode
    91: c100c7e0   256 OBJECT  LOCAL  DEFAULT    9 normalmap
    92: c100c8e0   256 OBJECT  LOCAL  DEFAULT    9 shiftmap
    93: c100c9e0   256 OBJECT  LOCAL  DEFAULT    9 ctlmap
    94: c100cae0    16 OBJECT  LOCAL  DEFAULT    9 charcode
    95: 00000000     0 FILE    LOCAL  DEFAULT  ABS main.c
    96: c1001e6d    37 FUNC    LOCAL  DEFAULT    7 hash32
    97: c100224b    49 FUNC    LOCAL  DEFAULT    7 print_task1
    98: c10022ad    47 FUNC    LOCAL  DEFAULT    7 delay
    99: c100227c    49 FUNC    LOCAL  DEFAULT    7 print_task2
   100: 00000000     0 FILE    LOCAL  DEFAULT  ABS pmm.c
   101: 00000000     0 FILE    LOCAL  DEFAULT  ABS vmm.c
   102: 00000000     0 FILE    LOCAL  DEFAULT  ABS task.c
   103: c1002cf2    37 FUNC    LOCAL  DEFAULT    7 hash32
   104: c100ec80  8192 OBJECT  LOCAL  DEFAULT   10 hash_list
   105: c1010c80     4 OBJECT  LOCAL  DEFAULT   10 last_pid
   106: c1010c84     8 OBJECT  LOCAL  DEFAULT   10 ready_task_list
   107: c1010c8c     4 OBJECT  LOCAL  DEFAULT   10 nr_task
   108: c1003341   211 FUNC    LOCAL  DEFAULT    7 alloc_task
   109: c1003192    80 FUNC    LOCAL  DEFAULT    7 add_link
   110: c1003215   122 FUNC    LOCAL  DEFAULT    7 add_pid_hash
   111: c10035ba    15 FUNC    LOCAL  DEFAULT    7 wakeup_task
   112: c1003017    43 FUNC    LOCAL  DEFAULT    7 set_pid_bit
   113: c1003042    43 FUNC    LOCAL  DEFAULT    7 clear_pid_bit
   114: c100306d    65 FUNC    LOCAL  DEFAULT    7 find_free_pid
   115: c10030ae    92 FUNC    LOCAL  DEFAULT    7 alloc_pid
   116: c100310a    30 FUNC    LOCAL  DEFAULT    7 free_pid
   117: c1010c90    21 OBJECT  LOCAL  DEFAULT   10 name.2579
   118: c10031e2    51 FUNC    LOCAL  DEFAULT    7 remove_link
   119: c100328f    71 FUNC    LOCAL  DEFAULT    7 remove_pid_hash
   120: c10032d6   107 FUNC    LOCAL  DEFAULT    7 find_task
   121: c1003414    29 FUNC    LOCAL  DEFAULT    7 forkret
   122: c1003431   173 FUNC    LOCAL  DEFAULT    7 copy_thread
   123: c1003628   118 FUNC    LOCAL  DEFAULT    7 task_run
   124: c100a114    13 OBJECT  LOCAL  DEFAULT    8 __func__.2647
   125: c100a124    15 OBJECT  LOCAL  DEFAULT    8 __func__.2655
   126: c1003840    92 FUNC    LOCAL  DEFAULT    7 print_taskinfo
   127: c10038be    28 FUNC    LOCAL  DEFAULT    7 kernel_execve
   128: c10038da     6 FUNC    LOCAL  DEFAULT    7 user_main
   129: 00000000     0 FILE    LOCAL  DEFAULT  ABS pic.c
   130: c100db04     2 OBJECT  LOCAL  DEFAULT    9 irq_mask
   131: c1010ca5     1 OBJECT  LOCAL  DEFAULT   10 did_init
   132: c1003c94    94 FUNC    LOCAL  DEFAULT    7 pic_setmask
   133: 00000000     0 FILE    LOCAL  DEFAULT  ABS serial.c
   134: c1010ca6     1 OBJECT  LOCAL  DEFAULT   10 serial_exists
   135: 00000000     0 FILE    LOCAL  DEFAULT  ABS timer.c
   136: 00000000     0 FILE    LOCAL  DEFAULT  ABS vga.c
   137: c1010ca7     1 OBJECT  LOCAL  DEFAULT   10 cursor_x
   138: c1010ca8     1 OBJECT  LOCAL  DEFAULT   10 cursor_y
   139: c100db08     4 OBJECT  LOCAL  DEFAULT    9 vga_memory
   140: 00000000     0 FILE    LOCAL  DEFAULT  ABS sync.c
   141: c1004ac5    37 FUNC    LOCAL  DEFAULT    7 hash32
   142: c100a2f4    10 OBJECT  LOCAL  DEFAULT    8 __func__.2475
   143: 00000000     0 FILE    LOCAL  DEFAULT  ABS ide-dev.c
   144: c1004d56    40 FUNC    LOCAL  DEFAULT    7 waitdisk
   145: c1004d7e    38 FUNC    LOCAL  DEFAULT    7 insl
   146: c1004da4    38 FUNC    LOCAL  DEFAULT    7 outsl
   147: c1004dca   186 FUNC    LOCAL  DEFAULT    7 ide_read_sect
   148: c1004e84   186 FUNC    LOCAL  DEFAULT    7 ide_write_sect
   149: c1004fb8    47 FUNC    LOCAL  DEFAULT    7 delay
   150: 00000000     0 FILE    LOCAL  DEFAULT  ABS fs.c
   151: c10051b1    37 FUNC    LOCAL  DEFAULT    7 hash32
   152: c10051d6  1171 FUNC    LOCAL  DEFAULT    7 partition_format
   153: c100592c    94 FUNC    LOCAL  DEFAULT    7 path_parse
   154: c100ac70    15 OBJECT  LOCAL  DEFAULT    8 __func__.2534
   155: c1005a12   656 FUNC    LOCAL  DEFAULT    7 search_file
   156: c100ac80    12 OBJECT  LOCAL  DEFAULT    8 __func__.2546
   157: c100ac8c     9 OBJECT  LOCAL  DEFAULT    8 __func__.2559
   158: c1005f29    65 FUNC    LOCAL  DEFAULT    7 fd_local2global
   159: c100ac98    16 OBJECT  LOCAL  DEFAULT    8 __func__.2573
   160: c100aca8     9 OBJECT  LOCAL  DEFAULT    8 __func__.2593
   161: c100acb4    10 OBJECT  LOCAL  DEFAULT    8 __func__.2606
   162: c100acc0    11 OBJECT  LOCAL  DEFAULT    8 __func__.2618
   163: c100accc    10 OBJECT  LOCAL  DEFAULT    8 __func__.2648
   164: c100acd8    12 OBJECT  LOCAL  DEFAULT    8 __func__.2659
   165: c100ace4    12 OBJECT  LOCAL  DEFAULT    8 __func__.2670
   166: c100acf0    10 OBJECT  LOCAL  DEFAULT    8 __func__.2679
   167: c1006b96   184 FUNC    LOCAL  DEFAULT    7 get_parent_dir_inode_nr
   168: c100acfc    24 OBJECT  LOCAL  DEFAULT    8 __func__.2692
   169: c1006c4e   423 FUNC    LOCAL  DEFAULT    7 get_child_dir_name
   170: c100ad14    11 OBJECT  LOCAL  DEFAULT    8 __func__.2721
   171: 00000000     0 FILE    LOCAL  DEFAULT  ABS dir.c
   172: c100af34    17 OBJECT  LOCAL  DEFAULT    8 __func__.2213
   173: c100af48    15 OBJECT  LOCAL  DEFAULT    8 __func__.2222
   174: c100af58    17 OBJECT  LOCAL  DEFAULT    8 __func__.2266
   175: c100af6c     9 OBJECT  LOCAL  DEFAULT    8 __func__.2295
   176: c100af78    11 OBJECT  LOCAL  DEFAULT    8 __func__.2310
   177: 00000000     0 FILE    LOCAL  DEFAULT  ABS file.c
   178: c1008120    37 FUNC    LOCAL  DEFAULT    7 hash32
   179: c100b41c    11 OBJECT  LOCAL  DEFAULT    8 __func__.2558
   180: c100b428    10 OBJECT  LOCAL  DEFAULT    8 __func__.2588
   181: 00000000     0 FILE    LOCAL  DEFAULT  ABS inode.c
   182: c1009397   114 FUNC    LOCAL  DEFAULT    7 inode_locate
   183: c100b4f0    13 OBJECT  LOCAL  DEFAULT    8 __func__.2208
   184: c100b500    14 OBJECT  LOCAL  DEFAULT    8 __func__.2216
   185: c1001764     0 NOTYPE  GLOBAL DEFAULT    7 vector242
   186: c10011bb     0 NOTYPE  GLOBAL DEFAULT    7 vector119
   187: c1008852  1909 FUNC    GLOBAL DEFAULT    7 file_write
   188: c100109b     0 NOTYPE  GLOBAL DEFAULT    7 vector87
   189: c1001092     0 NOTYPE  GLOBAL DEFAULT    7 vector86
   190: c1005f6a    92 FUNC    GLOBAL DEFAULT    7 sys_close
   191: c10086c2   336 FUNC    GLOBAL DEFAULT    7 file_open
   192: c10017d0     0 NOTYPE  GLOBAL DEFAULT    7 vector251
   193: c100021a    48 FUNC    GLOBAL DEFAULT    7 strcpy
   194: c1005669   707 FUNC    GLOBAL DEFAULT    7 mount_partition
   195: c1001df3    25 FUNC    GLOBAL DEFAULT    7 kbd_intr
   196: c1000000    29 FUNC    GLOBAL DEFAULT    7 inb
   197: 40000745   575 FUNC    GLOBAL DEFAULT    3 my_shell
   198: c10010bf     0 NOTYPE  GLOBAL DEFAULT    7 vector91
   199: c1000eb5     0 NOTYPE  GLOBAL DEFAULT    7 vector33
   200: c1002028   534 FUNC    GLOBAL DEFAULT    7 test_vmm
   201: c10013a4     0 NOTYPE  GLOBAL DEFAULT    7 vector162
   202: 400009b0    33 FUNC    GLOBAL DEFAULT    3 user_memset
   203: c1001608     0 NOTYPE  GLOBAL DEFAULT    7 vector213
   204: 40000cf8   195 FUNC    GLOBAL DEFAULT    3 make_clear_abs_path
   205: c1001158     0 NOTYPE  GLOBAL DEFAULT    7 vector108
   206: c1000f0f     0 NOTYPE  GLOBAL DEFAULT    7 vector43
   207: c100315d    53 FUNC    GLOBAL DEFAULT    7 get_task_name
   208: c10013c8     0 NOTYPE  GLOBAL DEFAULT    7 vector165
   209: c10014b8     0 NOTYPE  GLOBAL DEFAULT    7 vector185
   210: c1001197     0 NOTYPE  GLOBAL DEFAULT    7 vector115
   211: c1611000  4096 OBJECT  GLOBAL DEFAULT   10 new_pdt
   212: 400002b2   769 FUNC    GLOBAL DEFAULT    3 printf
   213: c10011d6     0 NOTYPE  GLOBAL DEFAULT    7 vector122
   214: c100961a   252 FUNC    GLOBAL DEFAULT    7 inode_delete
   215: c1006a66    16 FUNC    GLOBAL DEFAULT    7 sys_rewinddir
   216: c1001c78   379 FUNC    GLOBAL DEFAULT    7 kbd_proc_data
   217: c100135c     0 NOTYPE  GLOBAL DEFAULT    7 vector156
   218: c1001788     0 NOTYPE  GLOBAL DEFAULT    7 vector245
   219: c10014e8     0 NOTYPE  GLOBAL DEFAULT    7 vector189
   220: c1000ddb     0 NOTYPE  GLOBAL DEFAULT    7 vector7
   221: c1000fb1     0 NOTYPE  GLOBAL DEFAULT    7 vector61
   222: c1000e64     0 NOTYPE  GLOBAL DEFAULT    7 vector24
   223: 00107000  4096 OBJECT  GLOBAL DEFAULT    2 stack_pt
   224: c1001173     0 NOTYPE  GLOBAL DEFAULT    7 vector111
   225: c100156c     0 NOTYPE  GLOBAL DEFAULT    7 vector200
   226: c10061b1   236 FUNC    GLOBAL DEFAULT    7 sys_lseek
   227: c1001e0c    97 FUNC    GLOBAL DEFAULT    7 kbd_init
   228: c1010cc0    12 OBJECT  GLOBAL DEFAULT   10 highmem_zone
   229: c100952a   214 FUNC    GLOBAL DEFAULT    7 inode_open
   230: c1000fe7     0 NOTYPE  GLOBAL DEFAULT    7 vector67
   231: c100ec68     4 OBJECT  GLOBAL DEFAULT   10 shift
   232: 00105000  4096 OBJECT  GLOBAL DEFAULT    2 pt2
   233: c1001284     0 NOTYPE  GLOBAL DEFAULT    7 vector138
   234: c1001026     0 NOTYPE  GLOBAL DEFAULT    7 vector74
   235: c1000f8d     0 NOTYPE  GLOBAL DEFAULT    7 vector57
   236: c1004033    85 FUNC    GLOBAL DEFAULT    7 cons_intr
   237: c1004311   285 FUNC    GLOBAL DEFAULT    7 print_char
   238: c1000a46   344 FUNC    GLOBAL DEFAULT    7 print_trapframe
   239: c1001614     0 NOTYPE  GLOBAL DEFAULT    7 vector214
   240: c1001107     0 NOTYPE  GLOBAL DEFAULT    7 vector99
   241: c100757e  1083 FUNC    GLOBAL DEFAULT    7 sync_dir_entry
   242: c1000d74     0 NOTYPE  GLOBAL DEFAULT    7 __alltraps
   243: c1004a69    92 FUNC    GLOBAL DEFAULT    7 cons_getc
   244: c10012a8     0 NOTYPE  GLOBAL DEFAULT    7 vector141
   245: 4000126a   146 FUNC    GLOBAL DEFAULT    3 buildin_mkdir
   246: c100835c   132 FUNC    GLOBAL DEFAULT    7 bitmap_sync
   247: c100141c     0 NOTYPE  GLOBAL DEFAULT    7 vector172
   248: c1001758     0 NOTYPE  GLOBAL DEFAULT    7 vector241
   249: c10064bd  1082 FUNC    GLOBAL DEFAULT    7 sys_mkdir
   250: c10017e8     0 NOTYPE  GLOBAL DEFAULT    7 vector253
   251: c1000db7     0 NOTYPE  GLOBAL DEFAULT    7 vector3
   252: c1000d96     0 NOTYPE  GLOBAL DEFAULT    7 forkrets
   253: c1000dae     0 NOTYPE  GLOBAL DEFAULT    7 vector2
   254: 00103000  4096 OBJECT  GLOBAL DEFAULT    2 pt
   255: c10034de   220 FUNC    GLOBAL DEFAULT    7 do_fork
   256: c10016b0     0 NOTYPE  GLOBAL DEFAULT    7 vector227
   257: c10035c9    95 FUNC    GLOBAL DEFAULT    7 kernel_thread
   258: c10015e4     0 NOTYPE  GLOBAL DEFAULT    7 vector210
   259: c1007512   108 FUNC    GLOBAL DEFAULT    7 create_dir_entry
   260: c100168c     0 NOTYPE  GLOBAL DEFAULT    7 vector224
   261: c1000efd     0 NOTYPE  GLOBAL DEFAULT    7 vector41
   262: 40000162    16 FUNC    GLOBAL DEFAULT    3 user_backtrace
   263: c1000e49     0 NOTYPE  GLOBAL DEFAULT    7 vector21
   264: c1001458     0 NOTYPE  GLOBAL DEFAULT    7 vector177
   265: c10011b2     0 NOTYPE  GLOBAL DEFAULT    7 vector118
   266: c1001002     0 NOTYPE  GLOBAL DEFAULT    7 vector70
   267: c100caf4     4 OBJECT  GLOBAL DEFAULT    9 highmem_end
   268: c1a13000     4 OBJECT  GLOBAL DEFAULT   10 task0
   269: c1004f3e    61 FUNC    GLOBAL DEFAULT    7 ide_read
   270: c1000ff9     0 NOTYPE  GLOBAL DEFAULT    7 vector69
   271: c1001728     0 NOTYPE  GLOBAL DEFAULT    7 vector237
   272: c1000fcc     0 NOTYPE  GLOBAL DEFAULT    7 vector64
   273: c1000e7f     0 NOTYPE  GLOBAL DEFAULT    7 vector27
   274: c100123c     0 NOTYPE  GLOBAL DEFAULT    7 vector132
   275: c10014c4     0 NOTYPE  GLOBAL DEFAULT    7 vector186
   276: c10060b9   248 FUNC    GLOBAL DEFAULT    7 sys_read
   277: c1001638     0 NOTYPE  GLOBAL DEFAULT    7 vector217
   278: c1003c58     0 NOTYPE  GLOBAL DEFAULT    7 kernel_thread_entry
   279: c1000108    22 FUNC    GLOBAL DEFAULT    7 memcpy
   280: c1008058   200 FUNC    GLOBAL DEFAULT    7 dir_remove
   281: c1000da5     0 NOTYPE  GLOBAL DEFAULT    7 vector1
   282: c1001464     0 NOTYPE  GLOBAL DEFAULT    7 vector178
   283: c1000ee2     0 NOTYPE  GLOBAL DEFAULT    7 vector38
   284: c1004088    79 FUNC    GLOBAL DEFAULT    7 serial_proc_data
   285: c1001734     0 NOTYPE  GLOBAL DEFAULT    7 vector238
   286: 400005b3    30 FUNC    GLOBAL DEFAULT    3 print_prompt
   287: c1008145    69 FUNC    GLOBAL DEFAULT    7 get_free_slot_in_global
   288: c100030d    62 FUNC    GLOBAL DEFAULT    7 __PANIC
   289: c1000565   194 FUNC    GLOBAL DEFAULT    7 readline
   290: c1001248     0 NOTYPE  GLOBAL DEFAULT    7 vector133
   291: c100101d     0 NOTYPE  GLOBAL DEFAULT    7 vector73
   292: c10012cc     0 NOTYPE  GLOBAL DEFAULT    7 vector144
   293: c10079b9  1186 FUNC    GLOBAL DEFAULT    7 delete_dir_entry
   294: c1010ce0 0x600000 OBJECT  GLOBAL DEFAULT   10 pp
   295: c100024a    12 FUNC    GLOBAL DEFAULT    7 CPU_INVLPG
   296: c10017f4     0 NOTYPE  GLOBAL DEFAULT    7 vector254
   297: 4000022d    19 FUNC    GLOBAL DEFAULT    3 rewinddir
   298: c1001119     0 NOTYPE  GLOBAL DEFAULT    7 vector101
   299: c10015f0     0 NOTYPE  GLOBAL DEFAULT    7 vector211
   300: c1612000 0x300000 OBJECT  GLOBAL DEFAULT   10 user_pt_highmem
   301: c1001434     0 NOTYPE  GLOBAL DEFAULT    7 vector174
   302: c1001770     0 NOTYPE  GLOBAL DEFAULT    7 vector243
   303: c100c040    56 OBJECT  GLOBAL DEFAULT    9 gdt
   304: c100120c     0 NOTYPE  GLOBAL DEFAULT    7 vector128
   305: c1001065     0 NOTYPE  GLOBAL DEFAULT    7 vector81
   306: c1000e07     0 NOTYPE  GLOBAL DEFAULT    7 vector13
   307: c1010cac    12 OBJECT  GLOBAL DEFAULT   10 user_sema
   308: c1000f57     0 NOTYPE  GLOBAL DEFAULT    7 vector51
   309: c1000e1e     0 NOTYPE  GLOBAL DEFAULT    7 vector16
   310: 00102000  4096 OBJECT  GLOBAL DEFAULT    2 pt_init
   311: 400018c0   512 OBJECT  GLOBAL DEFAULT    6 cwd_cache
   312: c100174c     0 NOTYPE  GLOBAL DEFAULT    7 vector240
   313: c1000f72     0 NOTYPE  GLOBAL DEFAULT    7 vector54
   314: c1000e37     0 NOTYPE  GLOBAL DEFAULT    7 vector19
   315: c1002715   252 FUNC    GLOBAL DEFAULT    7 pmm_alloc
   316: c10010c8     0 NOTYPE  GLOBAL DEFAULT    7 vector92
   317: c10040fb    85 FUNC    GLOBAL DEFAULT    7 serial_putc_sub
   318: c100177c     0 NOTYPE  GLOBAL DEFAULT    7 vector244
   319: c100129c     0 NOTYPE  GLOBAL DEFAULT    7 vector140
   320: c1000f21     0 NOTYPE  GLOBAL DEFAULT    7 vector45
   321: c1007e5b   469 FUNC    GLOBAL DEFAULT    7 dir_read
   322: c1001053     0 NOTYPE  GLOBAL DEFAULT    7 vector79
   323: 40000dbb    96 FUNC    GLOBAL DEFAULT    3 buildin_pwd
   324: c10016c8     0 NOTYPE  GLOBAL DEFAULT    7 vector229
   325: 4000021b    18 FUNC    GLOBAL DEFAULT    3 rmdir
   326: c1001374     0 NOTYPE  GLOBAL DEFAULT    7 vector158
   327: c1003cf2    51 FUNC    GLOBAL DEFAULT    7 pic_enable
   328: c1001f3f   233 FUNC    GLOBAL DEFAULT    7 test_pmm
   329: 400002a0    18 FUNC    GLOBAL DEFAULT    3 readdir
   330: c1000eeb     0 NOTYPE  GLOBAL DEFAULT    7 vector39
   331: c1000674   232 FUNC    GLOBAL DEFAULT    7 gdt_init
   332: c10013ec     0 NOTYPE  GLOBAL DEFAULT    7 vector168
   333: c1000ec7     0 NOTYPE  GLOBAL DEFAULT    7 vector35
   334: c1001185     0 NOTYPE  GLOBAL DEFAULT    7 vector113
   335: c100caf0     4 OBJECT  GLOBAL DEFAULT    9 highmem_start
   336: c10011f1     0 NOTYPE  GLOBAL DEFAULT    7 vector125
   337: c1008030    40 FUNC    GLOBAL DEFAULT    7 dir_is_empty
   338: 40001420     4 OBJECT  GLOBAL DEFAULT    4 argc
   339: c10083e0   738 FUNC    GLOBAL DEFAULT    7 file_create
   340: c1a13228     4 OBJECT  GLOBAL DEFAULT   10 second
   341: 400000f3    15 FUNC    GLOBAL DEFAULT    3 user_sys_getpid
   342: c100162c     0 NOTYPE  GLOBAL DEFAULT    7 vector216
   343: 400001d4    35 FUNC    GLOBAL DEFAULT    3 lseek
   344: c1000fc3     0 NOTYPE  GLOBAL DEFAULT    7 vector63
   345: c1000e76     0 NOTYPE  GLOBAL DEFAULT    7 vector26
   346: c10040d7    36 FUNC    GLOBAL DEFAULT    7 serial_intr
   347: c1001518     0 NOTYPE  GLOBAL DEFAULT    7 vector193
   348: c100153c     0 NOTYPE  GLOBAL DEFAULT    7 vector196
   349: c10015d8     0 NOTYPE  GLOBAL DEFAULT    7 vector209
   350: c1000dc0     0 NOTYPE  GLOBAL DEFAULT    7 vector4
   351: c100512d   132 FUNC    GLOBAL DEFAULT    7 test_ide_io
   352: c1001404     0 NOTYPE  GLOBAL DEFAULT    7 vector170
   353: c100369e   165 FUNC    GLOBAL DEFAULT    7 schedule
   354: c100126c     0 NOTYPE  GLOBAL DEFAULT    7 vector136
   355: c1000df2     0 NOTYPE  GLOBAL DEFAULT    7 vector10
   356: c10015b4     0 NOTYPE  GLOBAL DEFAULT    7 vector206
   357: c1001800     0 NOTYPE  GLOBAL DEFAULT    7 vector255
   358: c1002c96    92 FUNC    GLOBAL DEFAULT    7 setup_pgdir
   359: c1001488     0 NOTYPE  GLOBAL DEFAULT    7 vector181
   360: 4000138e   146 FUNC    GLOBAL DEFAULT    3 buildin_rm
   361: c1610ce0    12 OBJECT  GLOBAL DEFAULT   10 normal_zone
   362: c100719b   143 FUNC    GLOBAL DEFAULT    7 fs_init
   363: c1000f9f     0 NOTYPE  GLOBAL DEFAULT    7 vector59
   364: c1a13234     4 OBJECT  GLOBAL DEFAULT   10 root_dir
   365: c1001089     0 NOTYPE  GLOBAL DEFAULT    7 vector85
   366: c1001080     0 NOTYPE  GLOBAL DEFAULT    7 vector84
   367: c1003c5d     0 NOTYPE  GLOBAL DEFAULT    7 switch_to
   368: c10014a0     0 NOTYPE  GLOBAL DEFAULT    7 vector183
   369: c100065d    23 FUNC    GLOBAL DEFAULT    7 ltr
   370: c1001380     0 NOTYPE  GLOBAL DEFAULT    7 vector159
   371: c10015fc     0 NOTYPE  GLOBAL DEFAULT    7 vector212
   372: c10039ce   650 FUNC    GLOBAL DEFAULT    7 user_task_init
   373: c1000f33     0 NOTYPE  GLOBAL DEFAULT    7 vector47
   374: c10016bc     0 NOTYPE  GLOBAL DEFAULT    7 vector228
   375: c1000f06     0 NOTYPE  GLOBAL DEFAULT    7 vector42
   376: c10003de    47 FUNC    GLOBAL DEFAULT    7 instr_hello
   377: c100118e     0 NOTYPE  GLOBAL DEFAULT    7 vector114
   378: c1001440     0 NOTYPE  GLOBAL DEFAULT    7 vector175
   379: c10012c0     0 NOTYPE  GLOBAL DEFAULT    7 vector143
   380: c10028b8   216 FUNC    GLOBAL DEFAULT    7 setup_vpt
   381: c1001224     0 NOTYPE  GLOBAL DEFAULT    7 vector130
   382: c1001794     0 NOTYPE  GLOBAL DEFAULT    7 vector246
   383: c1000deb     0 NOTYPE  GLOBAL DEFAULT    7 vector9
   384: c10012b4     0 NOTYPE  GLOBAL DEFAULT    7 vector142
   385: c1001110     0 NOTYPE  GLOBAL DEFAULT    7 vector100
   386: c100001d    31 FUNC    GLOBAL DEFAULT    7 inw
   387: c10072ec   492 FUNC    GLOBAL DEFAULT    7 search_dir_entry
   388: c1001578     0 NOTYPE  GLOBAL DEFAULT    7 vector201
   389: c10038e0   238 FUNC    GLOBAL DEFAULT    7 set_user_cr3
   390: c1003790   176 FUNC    GLOBAL DEFAULT    7 thread_unblock
   391: c1000196    63 FUNC    GLOBAL DEFAULT    7 strrchr
   392: c1000768   491 FUNC    GLOBAL DEFAULT    7 idt_init
   393: 00101000  4096 OBJECT  GLOBAL DEFAULT    2 pdt
   394: c1001f3a     5 FUNC    GLOBAL DEFAULT    7 kernel_main
   395: c1000fa8     0 NOTYPE  GLOBAL DEFAULT    7 vector60
   396: c1000e5b     0 NOTYPE  GLOBAL DEFAULT    7 vector23
   397: c1004196   124 FUNC    GLOBAL DEFAULT    7 timer_init
   398: c1006a31    53 FUNC    GLOBAL DEFAULT    7 sys_readdir
   399: c100171c     0 NOTYPE  GLOBAL DEFAULT    7 vector236
   400: c1002811   167 FUNC    GLOBAL DEFAULT    7 pmm_free
   401: 400001bc    24 FUNC    GLOBAL DEFAULT    3 write
   402: c1005ca2   647 FUNC    GLOBAL DEFAULT    7 sys_open
   403: c10016e0     0 NOTYPE  GLOBAL DEFAULT    7 vector231
   404: c10045e4   178 FUNC    GLOBAL DEFAULT    7 backtrace
   405: c1000fde     0 NOTYPE  GLOBAL DEFAULT    7 vector66
   406: c1000e91     0 NOTYPE  GLOBAL DEFAULT    7 vector29
   407: c1001260     0 NOTYPE  GLOBAL DEFAULT    7 vector135
   408: 40000b20    48 FUNC    GLOBAL DEFAULT    3 user_strcpy
   409: c1004299   120 FUNC    GLOBAL DEFAULT    7 clear
   410: 00106000  4096 OBJECT  GLOBAL DEFAULT    2 pt3
   411: c1001041     0 NOTYPE  GLOBAL DEFAULT    7 vector77
   412: c100040d   125 FUNC    GLOBAL DEFAULT    7 instr_help
   413: c10001d5    69 FUNC    GLOBAL DEFAULT    7 strcat
   414: c100147c     0 NOTYPE  GLOBAL DEFAULT    7 vector180
   415: c10015cc     0 NOTYPE  GLOBAL DEFAULT    7 vector208
   416: c100048a   193 FUNC    GLOBAL DEFAULT    7 instr_game
   417: c10010fe     0 NOTYPE  GLOBAL DEFAULT    7 vector98
   418: c10010f5     0 NOTYPE  GLOBAL DEFAULT    7 vector97
   419: c1002bad   233 FUNC    GLOBAL DEFAULT    7 vmm_map
   420: c100144c     0 NOTYPE  GLOBAL DEFAULT    7 vector176
   421: c1001524     0 NOTYPE  GLOBAL DEFAULT    7 vector194
   422: c1000eac     0 NOTYPE  GLOBAL DEFAULT    7 vector32
   423: 40000255    18 FUNC    GLOBAL DEFAULT    3 chdir
   424: c1001560     0 NOTYPE  GLOBAL DEFAULT    7 vector199
   425: c100389c    24 FUNC    GLOBAL DEFAULT    7 do_exit
   426: 40000aa5    40 FUNC    GLOBAL DEFAULT    3 user_strlen
   427: c1001230     0 NOTYPE  GLOBAL DEFAULT    7 vector131
   428: c10017dc     0 NOTYPE  GLOBAL DEFAULT    7 vector252
   429: c1000d9c     0 NOTYPE  GLOBAL DEFAULT    7 vector0
   430: c1003743    77 FUNC    GLOBAL DEFAULT    7 thread_block
   431: c1004a2b    62 FUNC    GLOBAL DEFAULT    7 cons_putc
   432: c10012d8     0 NOTYPE  GLOBAL DEFAULT    7 vector145
   433: c1a13004     4 OBJECT  GLOBAL DEFAULT   10 task1
   434: c1005fc6   243 FUNC    GLOBAL DEFAULT    7 sys_write
   435: c100114f     0 NOTYPE  GLOBAL DEFAULT    7 vector107
   436: c1000ef4     0 NOTYPE  GLOBAL DEFAULT    7 vector40
   437: c1000d11    31 FUNC    GLOBAL DEFAULT    7 intr_enable
   438: c1001122     0 NOTYPE  GLOBAL DEFAULT    7 vector102
   439: c1008fc7   976 FUNC    GLOBAL DEFAULT    7 file_read
   440: 40000133    47 FUNC    GLOBAL DEFAULT    3 user_print_num
   441: c1000f84     0 NOTYPE  GLOBAL DEFAULT    7 vector56
   442: 40000a66    63 FUNC    GLOBAL DEFAULT    3 user_strrchr
   443: c1000ff0     0 NOTYPE  GLOBAL DEFAULT    7 vector68
   444: c100cb00  4100 OBJECT  GLOBAL DEFAULT    9 task_pidmap
   445: c1000dd2     0 NOTYPE  GLOBAL DEFAULT    7 vector6
   446: c1001218     0 NOTYPE  GLOBAL DEFAULT    7 vector129
   447: c1a133c0     0 NOTYPE  GLOBAL DEFAULT   10 kernel_end
   448: c1001548     0 NOTYPE  GLOBAL DEFAULT    7 vector197
   449: 40000172    24 FUNC    GLOBAL DEFAULT    3 read
   450: c1003f7a   115 FUNC    GLOBAL DEFAULT    7 lpt_putc_sub
   451: c1004150    70 FUNC    GLOBAL DEFAULT    7 serial_putc
   452: c100132c     0 NOTYPE  GLOBAL DEFAULT    7 vector152
   453: c1006a04    45 FUNC    GLOBAL DEFAULT    7 sys_closedir
   454: c100c100     0 NOTYPE  GLOBAL DEFAULT    9 __vectors
   455: c10016d4     0 NOTYPE  GLOBAL DEFAULT    7 vector230
   456: c1000ed9     0 NOTYPE  GLOBAL DEFAULT    7 vector37
   457: c10015a8     0 NOTYPE  GLOBAL DEFAULT    7 vector205
   458: c1001398     0 NOTYPE  GLOBAL DEFAULT    7 vector161
   459: c1a13008     4 OBJECT  GLOBAL DEFAULT   10 current
   460: 400001f7    18 FUNC    GLOBAL DEFAULT    3 unlink
   461: c100100b     0 NOTYPE  GLOBAL DEFAULT    7 vector71
   462: c100138c     0 NOTYPE  GLOBAL DEFAULT    7 vector160
   463: c1003fed    70 FUNC    GLOBAL DEFAULT    7 lpt_putc
   464: c1001620     0 NOTYPE  GLOBAL DEFAULT    7 vector215
   465: c1001368     0 NOTYPE  GLOBAL DEFAULT    7 vector157
   466: 00109000     0 NOTYPE  GLOBAL DEFAULT    2 init_end
   467: c1000d30    32 FUNC    GLOBAL DEFAULT    7 intr_disable
   468: c1000986   192 FUNC    GLOBAL DEFAULT    7 print_regs
   469: c100117c     0 NOTYPE  GLOBAL DEFAULT    7 vector112
   470: 40000a53    19 FUNC    GLOBAL DEFAULT    3 user_strcmp
   471: c1000256    12 FUNC    GLOBAL DEFAULT    7 lcr3
   472: c1912000 0x20000 OBJECT  GLOBAL DEFAULT   10 pt_highmem
   473: c1001494     0 NOTYPE  GLOBAL DEFAULT    7 vector182
   474: c1003128    53 FUNC    GLOBAL DEFAULT    7 set_task_name
   475: c1000e00     0 NOTYPE  GLOBAL DEFAULT    7 vector12
   476: 40000120    19 FUNC    GLOBAL DEFAULT    3 user_print_string
   477: c1001161     0 NOTYPE  GLOBAL DEFAULT    7 vector109
   478: c1000e40     0 NOTYPE  GLOBAL DEFAULT    7 vector20
   479: c1000ce6     7 FUNC    GLOBAL DEFAULT    7 disable_interupt
   480: c1004696   917 FUNC    GLOBAL DEFAULT    7 printk
   481: c1000f69     0 NOTYPE  GLOBAL DEFAULT    7 vector53
   482: c1000e2e     0 NOTYPE  GLOBAL DEFAULT    7 vector18
   483: 00100000   624 FUNC    GLOBAL DEFAULT    1 init
   484: c1008812    64 FUNC    GLOBAL DEFAULT    7 file_close
   485: c10010e3     0 NOTYPE  GLOBAL DEFAULT    7 vector95
   486: c10022dc    25 FUNC    GLOBAL DEFAULT    7 test_user
   487: c10038b4    10 FUNC    GLOBAL DEFAULT    7 do_execve
   488: c10016a4     0 NOTYPE  GLOBAL DEFAULT    7 vector226
   489: c1a13230     4 OBJECT  GLOBAL DEFAULT   10 cur_part
   490: c1000f45     0 NOTYPE  GLOBAL DEFAULT    7 vector49
   491: c1000f18     0 NOTYPE  GLOBAL DEFAULT    7 vector44
   492: 40000b0a    22 FUNC    GLOBAL DEFAULT    3 user_memcpy
   493: c100104a     0 NOTYPE  GLOBAL DEFAULT    7 vector78
   494: c1001428     0 NOTYPE  GLOBAL DEFAULT    7 vector173
   495: c100003c    33 FUNC    GLOBAL DEFAULT    7 outb
   496: c10011a9     0 NOTYPE  GLOBAL DEFAULT    7 vector117
   497: c100106e     0 NOTYPE  GLOBAL DEFAULT    7 vector82
   498: c1001674     0 NOTYPE  GLOBAL DEFAULT    7 vector222
   499: c1000de4     0 NOTYPE  GLOBAL DEFAULT    7 vector8
   500: c1001308     0 NOTYPE  GLOBAL DEFAULT    7 vector149
   501: c10000aa    33 FUNC    GLOBAL DEFAULT    7 memset
   502: c1004aea    54 FUNC    GLOBAL DEFAULT    7 sema_init
   503: c1004c2a   148 FUNC    GLOBAL DEFAULT    7 sema_up
   504: c10016ec     0 NOTYPE  GLOBAL DEFAULT    7 vector232
   505: c1001e92   168 FUNC    GLOBAL DEFAULT    7 main
   506: c1004cbe    79 FUNC    GLOBAL DEFAULT    7 lock_acquire
   507: c1001146     0 NOTYPE  GLOBAL DEFAULT    7 vector106
   508: c100165c     0 NOTYPE  GLOBAL DEFAULT    7 vector220
   509: 40001ac0   512 OBJECT  GLOBAL DEFAULT    6 final_path
   510: c10010b6     0 NOTYPE  GLOBAL DEFAULT    7 vector90
   511: c10013b0     0 NOTYPE  GLOBAL DEFAULT    7 vector163
   512: c1001704     0 NOTYPE  GLOBAL DEFAULT    7 vector234
   513: c100629d   544 FUNC    GLOBAL DEFAULT    7 sys_unlink
   514: c1000fba     0 NOTYPE  GLOBAL DEFAULT    7 vector62
   515: c1000e6d     0 NOTYPE  GLOBAL DEFAULT    7 vector25
   516: c1001554     0 NOTYPE  GLOBAL DEFAULT    7 vector198
   517: c1004b20    42 FUNC    GLOBAL DEFAULT    7 lock_init
   518: c10011c4     0 NOTYPE  GLOBAL DEFAULT    7 vector120
   519: c100722a   130 FUNC    GLOBAL DEFAULT    7 open_root_dir
   520: c1004b4a   224 FUNC    GLOBAL DEFAULT    7 sema_down
   521: c1001c01   119 FUNC    GLOBAL DEFAULT    7 syscall_trap
   522: c100054b    26 FUNC    GLOBAL DEFAULT    7 getchar
   523: c1000ced     7 FUNC    GLOBAL DEFAULT    7 enable_interupt
   524: 4000027c    18 FUNC    GLOBAL DEFAULT    3 opendir
   525: c1000f4e     0 NOTYPE  GLOBAL DEFAULT    7 vector50
   526: c1000e15     0 NOTYPE  GLOBAL DEFAULT    7 vector15
   527: c1004d0d    73 FUNC    GLOBAL DEFAULT    7 lock_release
   528: 00104000  4096 OBJECT  GLOBAL DEFAULT    2 pt1
   529: 40000e1b   138 FUNC    GLOBAL DEFAULT    3 buildin_cd
   530: c1000cf4    29 FUNC    GLOBAL DEFAULT    7 get_now_intr_status
   531: c1001320     0 NOTYPE  GLOBAL DEFAULT    7 vector151
   532: c1001077     0 NOTYPE  GLOBAL DEFAULT    7 vector83
   533: c10010ad     0 NOTYPE  GLOBAL DEFAULT    7 vector89
   534: c10010a4     0 NOTYPE  GLOBAL DEFAULT    7 vector88
   535: c1000ccf    23 FUNC    GLOBAL DEFAULT    7 trap
   536: c1001470     0 NOTYPE  GLOBAL DEFAULT    7 vector179
   537: c1000ebe     0 NOTYPE  GLOBAL DEFAULT    7 vector34
   538: c1000f2a     0 NOTYPE  GLOBAL DEFAULT    7 vector46
   539: c1000183    19 FUNC    GLOBAL DEFAULT    7 strcmp
   540: c1000d50    19 FUNC    GLOBAL DEFAULT    7 intr_save
   541: c1001254     0 NOTYPE  GLOBAL DEFAULT    7 vector134
   542: c1003e8e   236 FUNC    GLOBAL DEFAULT    7 serial_init
   543: c1001680     0 NOTYPE  GLOBAL DEFAULT    7 vector223
   544: c1a1322c     4 OBJECT  GLOBAL DEFAULT   10 jiffies
   545: c1002d17   768 FUNC    GLOBAL DEFAULT    7 kernel_task_init
   546: c1006df5   493 FUNC    GLOBAL DEFAULT    7 sys_getcwd
   547: 40000240    21 FUNC    GLOBAL DEFAULT    3 getcwd
   548: c1003e45    73 FUNC    GLOBAL DEFAULT    7 delay
   549: c1009716   709 FUNC    GLOBAL DEFAULT    7 inode_release
   550: c1001644     0 NOTYPE  GLOBAL DEFAULT    7 vector218
   551: c100598a   136 FUNC    GLOBAL DEFAULT    7 path_depth_cnt
   552: c1000384    90 FUNC    GLOBAL DEFAULT    7 run
   553: c1004212   135 FUNC    GLOBAL DEFAULT    7 print_cursor
   554: c1003d25   288 FUNC    GLOBAL DEFAULT    7 pic_init
   555: c1001698     0 NOTYPE  GLOBAL DEFAULT    7 vector225
   556: c10014d0     0 NOTYPE  GLOBAL DEFAULT    7 vector187
   557: c1000d63    17 FUNC    GLOBAL DEFAULT    7 intr_restore
   558: c10022f5  1056 FUNC    GLOBAL DEFAULT    7 pmm_init
   559: c1610cec    12 OBJECT  GLOBAL DEFAULT   10 dma_zone
   560: c100ec70     4 OBJECT  GLOBAL DEFAULT   10 test_user_task
   561: c1000e9a     0 NOTYPE  GLOBAL DEFAULT    7 vector30
   562: c1001203     0 NOTYPE  GLOBAL DEFAULT    7 vector127
   563: c100150c     0 NOTYPE  GLOBAL DEFAULT    7 vector192
   564: c10013d4     0 NOTYPE  GLOBAL DEFAULT    7 vector166
   565: c1001038     0 NOTYPE  GLOBAL DEFAULT    7 vector76
   566: c100102f     0 NOTYPE  GLOBAL DEFAULT    7 vector75
   567: c1001530     0 NOTYPE  GLOBAL DEFAULT    7 vector195
   568: c1001314     0 NOTYPE  GLOBAL DEFAULT    7 vector150
   569: c1000f96     0 NOTYPE  GLOBAL DEFAULT    7 vector58
   570: c10017ac     0 NOTYPE  GLOBAL DEFAULT    7 vector248
   571: c10011df     0 NOTYPE  GLOBAL DEFAULT    7 vector123
   572: c10010ec     0 NOTYPE  GLOBAL DEFAULT    7 vector96
   573: c1009409   289 FUNC    GLOBAL DEFAULT    7 inode_sync
   574: c1000ea3     0 NOTYPE  GLOBAL DEFAULT    7 vector31
   575: c1001590     0 NOTYPE  GLOBAL DEFAULT    7 vector203
   576: c1002990   293 FUNC    GLOBAL DEFAULT    7 vmm_malloc
   577: c100ec74     4 OBJECT  GLOBAL DEFAULT   10 offset
   578: c1004465   383 FUNC    GLOBAL DEFAULT    7 print_num
   579: c1001290     0 NOTYPE  GLOBAL DEFAULT    7 vector139
   580: c1001338     0 NOTYPE  GLOBAL DEFAULT    7 vector153
   581: c10013bc     0 NOTYPE  GLOBAL DEFAULT    7 vector164
   582: c10011cd     0 NOTYPE  GLOBAL DEFAULT    7 vector121
   583: c1000dc9     0 NOTYPE  GLOBAL DEFAULT    7 vector5
   584: c10013e0     0 NOTYPE  GLOBAL DEFAULT    7 vector167
   585: c1001350     0 NOTYPE  GLOBAL DEFAULT    7 vector155
   586: c10017b8     0 NOTYPE  GLOBAL DEFAULT    7 vector249
   587: c100005d    33 FUNC    GLOBAL DEFAULT    7 outw
   588: c10017c4     0 NOTYPE  GLOBAL DEFAULT    7 vector250
   589: c10072ac    64 FUNC    GLOBAL DEFAULT    7 dir_open
   590: c10011e8     0 NOTYPE  GLOBAL DEFAULT    7 vector124
   591: c100116a     0 NOTYPE  GLOBAL DEFAULT    7 vector110
   592: c100c000    36 OBJECT  GLOBAL DEFAULT    9 instr_list
   593: c100159c     0 NOTYPE  GLOBAL DEFAULT    7 vector204
   594: 40000267    21 FUNC    GLOBAL DEFAULT    3 stat
   595: c1000d8b     0 NOTYPE  GLOBAL DEFAULT    7 __trapret
   596: c1000262   171 FUNC    GLOBAL DEFAULT    7 print_seg
   597: c1001278     0 NOTYPE  GLOBAL DEFAULT    7 vector137
   598: c1932000     4 OBJECT  GLOBAL DEFAULT   10 highmem_ptr
   599: c10068f7   269 FUNC    GLOBAL DEFAULT    7 sys_opendir
   600: c10017a0     0 NOTYPE  GLOBAL DEFAULT    7 vector247
   601: c1000e52     0 NOTYPE  GLOBAL DEFAULT    7 vector22
   602: c100442e    55 FUNC    GLOBAL DEFAULT    7 print_string
   603: c1001584     0 NOTYPE  GLOBAL DEFAULT    7 vector202
   604: c1001014     0 NOTYPE  GLOBAL DEFAULT    7 vector72
   605: c1000f7b     0 NOTYPE  GLOBAL DEFAULT    7 vector55
   606: c10011fa     0 NOTYPE  GLOBAL DEFAULT    7 vector126
   607: c1000fd5     0 NOTYPE  GLOBAL DEFAULT    7 vector65
   608: c1000e88     0 NOTYPE  GLOBAL DEFAULT    7 vector28
   609: c10013f8     0 NOTYPE  GLOBAL DEFAULT    7 vector169
   610: c10016f8     0 NOTYPE  GLOBAL DEFAULT    7 vector233
   611: 4000002f   104 FUNC    GLOBAL DEFAULT    3 user_main
   612: 40000102    30 FUNC    GLOBAL DEFAULT    3 user_print_char
   613: c1000953    14 FUNC    GLOBAL DEFAULT    7 set_ts_esp0
   614: c10012f0     0 NOTYPE  GLOBAL DEFAULT    7 vector147
   615: 40001d80     0 NOTYPE  GLOBAL DEFAULT    6 user_end
   616: c1001134     0 NOTYPE  GLOBAL DEFAULT    7 vector104
   617: c10011a0     0 NOTYPE  GLOBAL DEFAULT    7 vector116
   618: c1002ab5   248 FUNC    GLOBAL DEFAULT    7 vmm_free
   619: c10099db    80 FUNC    GLOBAL DEFAULT    7 inode_init
   620: c1a1300c     4 OBJECT  GLOBAL DEFAULT   10 user_task
   621: c1a13240   384 OBJECT  GLOBAL DEFAULT   10 file_table
   622: c1000f60     0 NOTYPE  GLOBAL DEFAULT    7 vector52
   623: c1000e27     0 NOTYPE  GLOBAL DEFAULT    7 vector17
   624: c10014ac     0 NOTYPE  GLOBAL DEFAULT    7 vector184
   625: c100011e    40 FUNC    GLOBAL DEFAULT    7 strlen
   626: 4000018a    32 FUNC    GLOBAL DEFAULT    3 open
   627: c1006a76   288 FUNC    GLOBAL DEFAULT    7 sys_rmdir
   628: c10015c0     0 NOTYPE  GLOBAL DEFAULT    7 vector207
   629: c10014f4     0 NOTYPE  GLOBAL DEFAULT    7 vector190
   630: c1006fe2   300 FUNC    GLOBAL DEFAULT    7 sys_stat
   631: c1001740     0 NOTYPE  GLOBAL DEFAULT    7 vector239
   632: c10010da     0 NOTYPE  GLOBAL DEFAULT    7 vector94
   633: c10010d1     0 NOTYPE  GLOBAL DEFAULT    7 vector93
   634: c10014dc     0 NOTYPE  GLOBAL DEFAULT    7 vector188
   635: 40000ea5   965 FUNC    GLOBAL DEFAULT    3 buildin_ls
   636: c1000f3c     0 NOTYPE  GLOBAL DEFAULT    7 vector48
   637: 400012fc   146 FUNC    GLOBAL DEFAULT    3 buildin_rmdir
   638: c1001650     0 NOTYPE  GLOBAL DEFAULT    7 vector219
   639: c1a13020   520 OBJECT  GLOBAL DEFAULT   10 cons
   640: c10012fc     0 NOTYPE  GLOBAL DEFAULT    7 vector148
   641: c1001668     0 NOTYPE  GLOBAL DEFAULT    7 vector221
   642: 4000028e    18 FUNC    GLOBAL DEFAULT    3 closedir
   643: c1004fe7   326 FUNC    GLOBAL DEFAULT    7 read_main_partition
   644: c100105c     0 NOTYPE  GLOBAL DEFAULT    7 vector80
   645: c1001410     0 NOTYPE  GLOBAL DEFAULT    7 vector171
   646: c1001344     0 NOTYPE  GLOBAL DEFAULT    7 vector154
   647: c100ec6c     1 OBJECT  GLOBAL DEFAULT   10 shell_input
   648: c1000ed0     0 NOTYPE  GLOBAL DEFAULT    7 vector36
   649: c100db0c     0 NOTYPE  GLOBAL DEFAULT    9 kernel_bss
   650: c1001710     0 NOTYPE  GLOBAL DEFAULT    7 vector235
   651: c100113d     0 NOTYPE  GLOBAL DEFAULT    7 vector105
   652: c100710e   141 FUNC    GLOBAL DEFAULT    7 sys_chdir
   653: 400009d1    69 FUNC    GLOBAL DEFAULT    3 user_strcat
   654: c10074d8    58 FUNC    GLOBAL DEFAULT    7 dir_close
   655: 00108000  4096 OBJECT  GLOBAL DEFAULT    2 user_pt
   656: c100223e    13 FUNC    GLOBAL DEFAULT    7 test_schedule
   657: 40000209    18 FUNC    GLOBAL DEFAULT    3 mkdir
   658: c10012e4     0 NOTYPE  GLOBAL DEFAULT    7 vector146
   659: c10081ce   192 FUNC    GLOBAL DEFAULT    7 inode_bitmap_alloc
   660: c1001500     0 NOTYPE  GLOBAL DEFAULT    7 vector191
   661: 400001aa    18 FUNC    GLOBAL DEFAULT    3 close
   662: c100112b     0 NOTYPE  GLOBAL DEFAULT    7 vector103
   663: c100034b    57 FUNC    GLOBAL DEFAULT    7 monitor
   664: c1004f7b    61 FUNC    GLOBAL DEFAULT    7 ide_write
   665: c100818a    68 FUNC    GLOBAL DEFAULT    7 task_fd_install
   666: c1009600    26 FUNC    GLOBAL DEFAULT    7 inode_close
   667: c100828e   206 FUNC    GLOBAL DEFAULT    7 block_bitmap_alloc
   668: c1933000 0xe0000 OBJECT  GLOBAL DEFAULT   10 pt_dma_nomal
   669: c1000df9     0 NOTYPE  GLOBAL DEFAULT    7 vector11
   670: c1000e0e     0 NOTYPE  GLOBAL DEFAULT    7 vector14

No version information found in this file.
