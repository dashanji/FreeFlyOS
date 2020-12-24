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
  Start of section headers:          233252 (bytes into file)
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
  [ 3] .user.text        PROGBITS        40000000 019000 00161c 00  AX  0   0  1
  [ 4] .user.data        PROGBITS        4000161c 01a61c 000004 00  WA  0   0  4
  [ 5] .user.rodata      PROGBITS        40001620 01a620 0004fc 00   A  0   0  4
  [ 6] .user.bss         NOBITS          40001b20 01ab1c 0004c0 00  WA  0   0 32
  [ 7] .text             PROGBITS        c1000000 00a000 00a7d6 00  AX  0   0  1
  [ 8] .rodata           PROGBITS        c100a7d8 0147d8 001a4e 00   A  0   0  4
  [ 9] .data             PROGBITS        c100d000 017000 001b2c 00  WA  0   0 32
  [10] .bss              NOBITS          c100f000 018b2c a053c0 00  WA  0   0 4096
  [11] .debug_info       PROGBITS        00000000 01ab1c 00b96e 00      0   0  1
  [12] .debug_abbrev     PROGBITS        00000000 02648a 002fd9 00      0   0  1
  [13] .debug_aranges    PROGBITS        00000000 029463 0003c0 00      0   0  1
  [14] .debug_ranges     PROGBITS        00000000 029823 000060 00      0   0  1
  [15] .debug_line       PROGBITS        00000000 029883 005efd 00      0   0  1
  [16] .debug_str        PROGBITS        00000000 02f780 0028f6 01  MS  0   0  1
  [17] .comment          PROGBITS        00000000 032076 000011 01  MS  0   0  1
  [18] .stab             PROGBITS        00000000 032088 002610 0c     19   0  4
  [19] .stabstr          STRTAB          00000000 034698 0001d4 00      0   0  1
  [20] .symtab           SYMTAB          00000000 03486c 002c50 10     21 200  4
  [21] .strtab           STRTAB          00000000 0374bc 0019a3 00      0   0  1
  [22] .shstrtab         STRTAB          00000000 038e5f 0000c4 00      0   0  1
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
  LOAD           0x00a000 0xc1000000 0x01000000 0x0c226 0x0c226 R E 0x1000
  LOAD           0x017000 0xc100d000 0x0100d000 0x01b2c 0xa073c0 RW  0x1000
  LOAD           0x019000 0x40000000 0x40000000 0x01b1c 0x01fe0 RWE 0x1000

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

Symbol table '.symtab' contains 709 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00100000     0 SECTION LOCAL  DEFAULT    1 
     2: 00101000     0 SECTION LOCAL  DEFAULT    2 
     3: 40000000     0 SECTION LOCAL  DEFAULT    3 
     4: 4000161c     0 SECTION LOCAL  DEFAULT    4 
     5: 40001620     0 SECTION LOCAL  DEFAULT    5 
     6: 40001b20     0 SECTION LOCAL  DEFAULT    6 
     7: c1000000     0 SECTION LOCAL  DEFAULT    7 
     8: c100a7d8     0 SECTION LOCAL  DEFAULT    8 
     9: c100d000     0 SECTION LOCAL  DEFAULT    9 
    10: c100f000     0 SECTION LOCAL  DEFAULT   10 
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
    21: c100a844     5 OBJECT  LOCAL  DEFAULT    8 __func__.1906
    22: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_main.c
    23: 40000000    47 FUNC    LOCAL  DEFAULT    3 delay
    24: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_syscall.c
    25: 400000ba    92 FUNC    LOCAL  DEFAULT    3 user_syscall
    26: 00000000     0 FILE    LOCAL  DEFAULT  ABS stdio.c
    27: 00000000     0 FILE    LOCAL  DEFAULT  ABS shell.c
    28: 40001f20   128 OBJECT  LOCAL  DEFAULT    6 cmd_line
    29: 40001fa0    64 OBJECT  LOCAL  DEFAULT    6 argv
    30: 4000068b   176 FUNC    LOCAL  DEFAULT    3 user_readline
    31: 4000073b   196 FUNC    LOCAL  DEFAULT    3 cmd_parse
    32: 00000000     0 FILE    LOCAL  DEFAULT  ABS string.c
    33: 40000b5b    44 FUNC    LOCAL  DEFAULT    3 __memset
    34: 40000bed    61 FUNC    LOCAL  DEFAULT    3 __strcmp
    35: 40000ca4    61 FUNC    LOCAL  DEFAULT    3 __memcpy
    36: 00000000     0 FILE    LOCAL  DEFAULT  ABS buildin_cmd.c
    37: 40000d27    94 FUNC    LOCAL  DEFAULT    3 path_parse
    38: 40000d85   330 FUNC    LOCAL  DEFAULT    3 wash_path
    39: 00000000     0 FILE    LOCAL  DEFAULT  ABS asm.c
    40: c100007e    44 FUNC    LOCAL  DEFAULT    7 __memset
    41: c10000cb    61 FUNC    LOCAL  DEFAULT    7 __memcpy
    42: c1000146    61 FUNC    LOCAL  DEFAULT    7 __strcmp
    43: 00000000     0 FILE    LOCAL  DEFAULT  ABS debug.c
    44: 00000000     0 FILE    LOCAL  DEFAULT  ABS monitor.c
    45: 00000000     0 FILE    LOCAL  DEFAULT  ABS readline.c
    46: c100f000  1024 OBJECT  LOCAL  DEFAULT   10 buf
    47: 00000000     0 FILE    LOCAL  DEFAULT  ABS dt.c
    48: c100f400  2048 OBJECT  LOCAL  DEFAULT   10 idt
    49: c100d078     6 OBJECT  LOCAL  DEFAULT    9 gdtinfo
    50: c100fc00   104 OBJECT  LOCAL  DEFAULT   10 ts
    51: c100d080     6 OBJECT  LOCAL  DEFAULT    9 idtinfo
    52: c1000685    54 FUNC    LOCAL  DEFAULT    7 lgdt
    53: c10007ba    12 FUNC    LOCAL  DEFAULT    7 lidt
    54: 00000000     0 FILE    LOCAL  DEFAULT  ABS trap.c
    55: c10009bf    37 FUNC    LOCAL  DEFAULT    7 hash32
    56: c100d0a0    96 OBJECT  LOCAL  DEFAULT    9 IA32flags
    57: c1000bfb   303 FUNC    LOCAL  DEFAULT    7 trap_dispatch
    58: 00000000     0 FILE    LOCAL  DEFAULT  ABS syscall.c
    59: c1001867    37 FUNC    LOCAL  DEFAULT    7 hash32
    60: c100188c    35 FUNC    LOCAL  DEFAULT    7 syscall_exit
    61: c10018af    47 FUNC    LOCAL  DEFAULT    7 sys_fork
    62: c10018de    30 FUNC    LOCAL  DEFAULT    7 syscall_wait
    63: c10018fc    44 FUNC    LOCAL  DEFAULT    7 sys_exec
    64: c1001928     6 FUNC    LOCAL  DEFAULT    7 sys_yield
    65: c100192e    17 FUNC    LOCAL  DEFAULT    7 sys_kill
    66: c100193f    13 FUNC    LOCAL  DEFAULT    7 sys_getpid
    67: c100194c    41 FUNC    LOCAL  DEFAULT    7 sys_print_char
    68: c1001975    39 FUNC    LOCAL  DEFAULT    7 sys_print_string
    69: c100199c    92 FUNC    LOCAL  DEFAULT    7 sys_print_num
    70: c10019f8    18 FUNC    LOCAL  DEFAULT    7 sys_backtrace
    71: c1001a0a    10 FUNC    LOCAL  DEFAULT    7 sys_pgdir
    72: c1001a14    56 FUNC    LOCAL  DEFAULT    7 sys_fdread
    73: c1001a4c    46 FUNC    LOCAL  DEFAULT    7 syscall_open
    74: c1001a7a    30 FUNC    LOCAL  DEFAULT    7 syscall_close
    75: c1001a98    56 FUNC    LOCAL  DEFAULT    7 syscall_write
    76: c1001ad0    60 FUNC    LOCAL  DEFAULT    7 syscall_lseek
    77: c1001b0c    30 FUNC    LOCAL  DEFAULT    7 syscall_unlink
    78: c1001b2a    30 FUNC    LOCAL  DEFAULT    7 syscall_mkdir
    79: c1001b48    30 FUNC    LOCAL  DEFAULT    7 syscall_rmdir
    80: c1001b66    35 FUNC    LOCAL  DEFAULT    7 syscall_rewinddir
    81: c1001b89    42 FUNC    LOCAL  DEFAULT    7 syscall_getcwd
    82: c1001bb3    30 FUNC    LOCAL  DEFAULT    7 syscall_chdir
    83: c1001bd1    44 FUNC    LOCAL  DEFAULT    7 syscall_stat
    84: c1001bfd    30 FUNC    LOCAL  DEFAULT    7 syscall_opendir
    85: c1001c1b    30 FUNC    LOCAL  DEFAULT    7 syscall_closedir
    86: c1001c39    30 FUNC    LOCAL  DEFAULT    7 syscall_readdir
    87: c1001c57    18 FUNC    LOCAL  DEFAULT    7 syscall_print_task
    88: c1001c69    30 FUNC    LOCAL  DEFAULT    7 syscall_malloc
    89: c1001c87    47 FUNC    LOCAL  DEFAULT    7 syscall_free
    90: c100d500   232 OBJECT  LOCAL  DEFAULT    9 syscalls
    91: 00000000     0 FILE    LOCAL  DEFAULT  ABS keyboard.c
    92: c100d600   256 OBJECT  LOCAL  DEFAULT    9 shiftcode
    93: c100d700   256 OBJECT  LOCAL  DEFAULT    9 togglecode
    94: c100d800   256 OBJECT  LOCAL  DEFAULT    9 normalmap
    95: c100d900   256 OBJECT  LOCAL  DEFAULT    9 shiftmap
    96: c100da00   256 OBJECT  LOCAL  DEFAULT    9 ctlmap
    97: c100db00    16 OBJECT  LOCAL  DEFAULT    9 charcode
    98: 00000000     0 FILE    LOCAL  DEFAULT  ABS main.c
    99: c1001f22    37 FUNC    LOCAL  DEFAULT    7 hash32
   100: c1001ff4   416 FUNC    LOCAL  DEFAULT    7 write2fs
   101: c10024a5    49 FUNC    LOCAL  DEFAULT    7 print_task1
   102: c1002507    47 FUNC    LOCAL  DEFAULT    7 delay
   103: c10024d6    49 FUNC    LOCAL  DEFAULT    7 print_task2
   104: 00000000     0 FILE    LOCAL  DEFAULT  ABS pmm.c
   105: 00000000     0 FILE    LOCAL  DEFAULT  ABS vmm.c
   106: c1002b12    37 FUNC    LOCAL  DEFAULT    7 hash32
   107: 00000000     0 FILE    LOCAL  DEFAULT  ABS task.c
   108: c1003057    37 FUNC    LOCAL  DEFAULT    7 hash32
   109: c100fc80  8192 OBJECT  LOCAL  DEFAULT   10 hash_list
   110: c1011c80     4 OBJECT  LOCAL  DEFAULT   10 last_pid
   111: c1011c84     8 OBJECT  LOCAL  DEFAULT   10 ready_task_list
   112: c1011c8c     8 OBJECT  LOCAL  DEFAULT   10 all_task_list
   113: c1011c94     4 OBJECT  LOCAL  DEFAULT   10 nr_task
   114: c1003741   247 FUNC    LOCAL  DEFAULT    7 alloc_task
   115: c1003838    29 FUNC    LOCAL  DEFAULT    7 forkret
   116: c1003542    80 FUNC    LOCAL  DEFAULT    7 add_link
   117: c1003592    80 FUNC    LOCAL  DEFAULT    7 add_all_link
   118: c1003615   122 FUNC    LOCAL  DEFAULT    7 add_pid_hash
   119: c1003b1c    15 FUNC    LOCAL  DEFAULT    7 wakeup_task
   120: c10033c7    43 FUNC    LOCAL  DEFAULT    7 set_pid_bit
   121: c10033f2    43 FUNC    LOCAL  DEFAULT    7 clear_pid_bit
   122: c100341d    65 FUNC    LOCAL  DEFAULT    7 find_free_pid
   123: c100345e    92 FUNC    LOCAL  DEFAULT    7 alloc_pid
   124: c10034ba    30 FUNC    LOCAL  DEFAULT    7 free_pid
   125: c1011c98    21 OBJECT  LOCAL  DEFAULT   10 name.2624
   126: c10035e2    51 FUNC    LOCAL  DEFAULT    7 remove_link
   127: c100368f    71 FUNC    LOCAL  DEFAULT    7 remove_pid_hash
   128: c10036d6   107 FUNC    LOCAL  DEFAULT    7 find_task
   129: c1003855   364 FUNC    LOCAL  DEFAULT    7 copy_thread
   130: c100af4c     8 OBJECT  LOCAL  DEFAULT    8 __func__.2677
   131: c1003b8a   118 FUNC    LOCAL  DEFAULT    7 task_run
   132: c100af54    15 OBJECT  LOCAL  DEFAULT    8 __func__.2712
   133: c1003d83    92 FUNC    LOCAL  DEFAULT    7 print_taskinfo
   134: c1003e01    28 FUNC    LOCAL  DEFAULT    7 kernel_execve
   135: c1003e1d     6 FUNC    LOCAL  DEFAULT    7 user_main
   136: c10042a6    40 FUNC    LOCAL  DEFAULT    7 find_child
   137: c10042ce    50 FUNC    LOCAL  DEFAULT    7 find_hanging_child
   138: c1004300    43 FUNC    LOCAL  DEFAULT    7 task0_adopt_a_child
   139: c100af64     9 OBJECT  LOCAL  DEFAULT    8 __func__.2817
   140: 00000000     0 FILE    LOCAL  DEFAULT  ABS exec.c
   141: c1004855    37 FUNC    LOCAL  DEFAULT    7 hash32
   142: c100487a   168 FUNC    LOCAL  DEFAULT    7 segment_load
   143: c1004922   397 FUNC    LOCAL  DEFAULT    7 load
   144: 00000000     0 FILE    LOCAL  DEFAULT  ABS pic.c
   145: c100eb24     2 OBJECT  LOCAL  DEFAULT    9 irq_mask
   146: c1011cad     1 OBJECT  LOCAL  DEFAULT   10 did_init
   147: c1004b61    94 FUNC    LOCAL  DEFAULT    7 pic_setmask
   148: 00000000     0 FILE    LOCAL  DEFAULT  ABS serial.c
   149: c1011cae     1 OBJECT  LOCAL  DEFAULT   10 serial_exists
   150: 00000000     0 FILE    LOCAL  DEFAULT  ABS timer.c
   151: 00000000     0 FILE    LOCAL  DEFAULT  ABS vga.c
   152: c1011caf     1 OBJECT  LOCAL  DEFAULT   10 cursor_x
   153: c1011cb0     1 OBJECT  LOCAL  DEFAULT   10 cursor_y
   154: c100eb28     4 OBJECT  LOCAL  DEFAULT    9 vga_memory
   155: 00000000     0 FILE    LOCAL  DEFAULT  ABS sync.c
   156: c1005992    37 FUNC    LOCAL  DEFAULT    7 hash32
   157: c100b134    10 OBJECT  LOCAL  DEFAULT    8 __func__.2517
   158: 00000000     0 FILE    LOCAL  DEFAULT  ABS ide-dev.c
   159: c1005c23    40 FUNC    LOCAL  DEFAULT    7 waitdisk
   160: c1005c4b    38 FUNC    LOCAL  DEFAULT    7 insl
   161: c1005c71    38 FUNC    LOCAL  DEFAULT    7 outsl
   162: c1005c97   186 FUNC    LOCAL  DEFAULT    7 ide_read_sect
   163: c1005d51   186 FUNC    LOCAL  DEFAULT    7 ide_write_sect
   164: c1005e85    47 FUNC    LOCAL  DEFAULT    7 delay
   165: 00000000     0 FILE    LOCAL  DEFAULT  ABS fs.c
   166: c100607e    37 FUNC    LOCAL  DEFAULT    7 hash32
   167: c10060a3  1171 FUNC    LOCAL  DEFAULT    7 partition_format
   168: c10067f9    94 FUNC    LOCAL  DEFAULT    7 path_parse
   169: c100ba0c    15 OBJECT  LOCAL  DEFAULT    8 __func__.2576
   170: c10068df   656 FUNC    LOCAL  DEFAULT    7 search_file
   171: c100ba1c    12 OBJECT  LOCAL  DEFAULT    8 __func__.2588
   172: c100ba28     9 OBJECT  LOCAL  DEFAULT    8 __func__.2601
   173: c1006dcb    66 FUNC    LOCAL  DEFAULT    7 fd_local2global
   174: c100ba34    16 OBJECT  LOCAL  DEFAULT    8 __func__.2615
   175: c100ba44     9 OBJECT  LOCAL  DEFAULT    8 __func__.2635
   176: c100ba50    10 OBJECT  LOCAL  DEFAULT    8 __func__.2648
   177: c100ba5c    11 OBJECT  LOCAL  DEFAULT    8 __func__.2660
   178: c100ba68    10 OBJECT  LOCAL  DEFAULT    8 __func__.2690
   179: c100ba74    12 OBJECT  LOCAL  DEFAULT    8 __func__.2701
   180: c100ba80    12 OBJECT  LOCAL  DEFAULT    8 __func__.2712
   181: c100ba8c    10 OBJECT  LOCAL  DEFAULT    8 __func__.2721
   182: c1007a4a   184 FUNC    LOCAL  DEFAULT    7 get_parent_dir_inode_nr
   183: c100ba98    24 OBJECT  LOCAL  DEFAULT    8 __func__.2734
   184: c1007b02   423 FUNC    LOCAL  DEFAULT    7 get_child_dir_name
   185: c100bab0    11 OBJECT  LOCAL  DEFAULT    8 __func__.2763
   186: 00000000     0 FILE    LOCAL  DEFAULT  ABS dir.c
   187: c100bcd0    17 OBJECT  LOCAL  DEFAULT    8 __func__.2226
   188: c100bce4    15 OBJECT  LOCAL  DEFAULT    8 __func__.2235
   189: c100bcf4    17 OBJECT  LOCAL  DEFAULT    8 __func__.2279
   190: c100bd08     9 OBJECT  LOCAL  DEFAULT    8 __func__.2308
   191: c100bd14    11 OBJECT  LOCAL  DEFAULT    8 __func__.2323
   192: 00000000     0 FILE    LOCAL  DEFAULT  ABS file.c
   193: c1008f58    37 FUNC    LOCAL  DEFAULT    7 hash32
   194: c100c134    11 OBJECT  LOCAL  DEFAULT    8 __func__.2600
   195: c100c140    10 OBJECT  LOCAL  DEFAULT    8 __func__.2630
   196: 00000000     0 FILE    LOCAL  DEFAULT  ABS inode.c
   197: c100a142   114 FUNC    LOCAL  DEFAULT    7 inode_locate
   198: c100c208    13 OBJECT  LOCAL  DEFAULT    8 __func__.2221
   199: c100c218    14 OBJECT  LOCAL  DEFAULT    8 __func__.2229
   200: c10017bf     0 NOTYPE  GLOBAL DEFAULT    7 vector242
   201: c1001216     0 NOTYPE  GLOBAL DEFAULT    7 vector119
   202: c1009653  1890 FUNC    GLOBAL DEFAULT    7 file_write
   203: c10010f6     0 NOTYPE  GLOBAL DEFAULT    7 vector87
   204: c10010ed     0 NOTYPE  GLOBAL DEFAULT    7 vector86
   205: c1006e0d    93 FUNC    GLOBAL DEFAULT    7 sys_close
   206: c10094fc   279 FUNC    GLOBAL DEFAULT    7 file_open
   207: c100182b     0 NOTYPE  GLOBAL DEFAULT    7 vector251
   208: c100021a    48 FUNC    GLOBAL DEFAULT    7 strcpy
   209: c1006536   707 FUNC    GLOBAL DEFAULT    7 mount_partition
   210: c1001ea8    25 FUNC    GLOBAL DEFAULT    7 kbd_intr
   211: c1000000    29 FUNC    GLOBAL DEFAULT    7 inb
   212: 400007ff   860 FUNC    GLOBAL DEFAULT    3 my_shell
   213: c100111a     0 NOTYPE  GLOBAL DEFAULT    7 vector91
   214: c1000f10     0 NOTYPE  GLOBAL DEFAULT    7 vector33
   215: c1002282   534 FUNC    GLOBAL DEFAULT    7 test_vmm
   216: c10013ff     0 NOTYPE  GLOBAL DEFAULT    7 vector162
   217: 40000b87    33 FUNC    GLOBAL DEFAULT    3 user_memset
   218: c1001663     0 NOTYPE  GLOBAL DEFAULT    7 vector213
   219: 40000ecf   195 FUNC    GLOBAL DEFAULT    3 make_clear_abs_path
   220: c10011b3     0 NOTYPE  GLOBAL DEFAULT    7 vector108
   221: c1000f6a     0 NOTYPE  GLOBAL DEFAULT    7 vector43
   222: c100350d    53 FUNC    GLOBAL DEFAULT    7 get_task_name
   223: c1001423     0 NOTYPE  GLOBAL DEFAULT    7 vector165
   224: c1004231    48 FUNC    GLOBAL DEFAULT    7 pte_ptr
   225: c1001513     0 NOTYPE  GLOBAL DEFAULT    7 vector185
   226: c10011f2     0 NOTYPE  GLOBAL DEFAULT    7 vector115
   227: c1002fd4    91 FUNC    GLOBAL DEFAULT    7 sys_free
   228: c1612000  4096 OBJECT  GLOBAL DEFAULT   10 new_pdt
   229: 4000036c   769 FUNC    GLOBAL DEFAULT    3 printf
   230: c1001231     0 NOTYPE  GLOBAL DEFAULT    7 vector122
   231: c100a3c5   252 FUNC    GLOBAL DEFAULT    7 inode_delete
   232: c100791a    16 FUNC    GLOBAL DEFAULT    7 sys_rewinddir
   233: c1001d2d   379 FUNC    GLOBAL DEFAULT    7 kbd_proc_data
   234: c10013b7     0 NOTYPE  GLOBAL DEFAULT    7 vector156
   235: c10017e3     0 NOTYPE  GLOBAL DEFAULT    7 vector245
   236: c1001543     0 NOTYPE  GLOBAL DEFAULT    7 vector189
   237: c1000e36     0 NOTYPE  GLOBAL DEFAULT    7 vector7
   238: c100100c     0 NOTYPE  GLOBAL DEFAULT    7 vector61
   239: c1000ebf     0 NOTYPE  GLOBAL DEFAULT    7 vector24
   240: 00107000  4096 OBJECT  GLOBAL DEFAULT    2 stack_pt
   241: c10011ce     0 NOTYPE  GLOBAL DEFAULT    7 vector111
   242: c10015c7     0 NOTYPE  GLOBAL DEFAULT    7 vector200
   243: c1007065   236 FUNC    GLOBAL DEFAULT    7 sys_lseek
   244: c1001ec1    97 FUNC    GLOBAL DEFAULT    7 kbd_init
   245: c1011cc0    12 OBJECT  GLOBAL DEFAULT   10 highmem_zone
   246: c100a2d5   214 FUNC    GLOBAL DEFAULT    7 inode_open
   247: c1001042     0 NOTYPE  GLOBAL DEFAULT    7 vector67
   248: c100fc68     4 OBJECT  GLOBAL DEFAULT   10 shift
   249: 00105000  4096 OBJECT  GLOBAL DEFAULT    2 pt2
   250: c10012df     0 NOTYPE  GLOBAL DEFAULT    7 vector138
   251: c1001081     0 NOTYPE  GLOBAL DEFAULT    7 vector74
   252: c1000fe8     0 NOTYPE  GLOBAL DEFAULT    7 vector57
   253: c1004f00    85 FUNC    GLOBAL DEFAULT    7 cons_intr
   254: c10051de   285 FUNC    GLOBAL DEFAULT    7 print_char
   255: c1000aa4   343 FUNC    GLOBAL DEFAULT    7 print_trapframe
   256: c100166f     0 NOTYPE  GLOBAL DEFAULT    7 vector214
   257: c1001162     0 NOTYPE  GLOBAL DEFAULT    7 vector99
   258: c10083b6  1083 FUNC    GLOBAL DEFAULT    7 sync_dir_entry
   259: c1000dcf     0 NOTYPE  GLOBAL DEFAULT    7 __alltraps
   260: c1005936    92 FUNC    GLOBAL DEFAULT    7 cons_getc
   261: c1001303     0 NOTYPE  GLOBAL DEFAULT    7 vector141
   262: 40001466   146 FUNC    GLOBAL DEFAULT    3 buildin_mkdir
   263: c1009196   132 FUNC    GLOBAL DEFAULT    7 bitmap_sync
   264: c1001477     0 NOTYPE  GLOBAL DEFAULT    7 vector172
   265: c10017b3     0 NOTYPE  GLOBAL DEFAULT    7 vector241
   266: c1007371  1082 FUNC    GLOBAL DEFAULT    7 sys_mkdir
   267: c1001843     0 NOTYPE  GLOBAL DEFAULT    7 vector253
   268: c1000e12     0 NOTYPE  GLOBAL DEFAULT    7 vector3
   269: c1000df1     0 NOTYPE  GLOBAL DEFAULT    7 forkrets
   270: c1000e09     0 NOTYPE  GLOBAL DEFAULT    7 vector2
   271: 00103000  4096 OBJECT  GLOBAL DEFAULT    2 pt
   272: c10039c1   347 FUNC    GLOBAL DEFAULT    7 do_fork
   273: c100170b     0 NOTYPE  GLOBAL DEFAULT    7 vector227
   274: c1003b2b    95 FUNC    GLOBAL DEFAULT    7 kernel_thread
   275: c100163f     0 NOTYPE  GLOBAL DEFAULT    7 vector210
   276: c100834a   108 FUNC    GLOBAL DEFAULT    7 create_dir_entry
   277: c10016e7     0 NOTYPE  GLOBAL DEFAULT    7 vector224
   278: 400002d5    15 FUNC    GLOBAL DEFAULT    3 ps
   279: c1000f58     0 NOTYPE  GLOBAL DEFAULT    7 vector41
   280: 40000185    16 FUNC    GLOBAL DEFAULT    3 user_backtrace
   281: c1000ea4     0 NOTYPE  GLOBAL DEFAULT    7 vector21
   282: c10014b3     0 NOTYPE  GLOBAL DEFAULT    7 vector177
   283: c100120d     0 NOTYPE  GLOBAL DEFAULT    7 vector118
   284: c100105d     0 NOTYPE  GLOBAL DEFAULT    7 vector70
   285: c100db14     4 OBJECT  GLOBAL DEFAULT    9 highmem_end
   286: c1a14000     4 OBJECT  GLOBAL DEFAULT   10 task0
   287: c1005e0b    61 FUNC    GLOBAL DEFAULT    7 ide_read
   288: c1001054     0 NOTYPE  GLOBAL DEFAULT    7 vector69
   289: c1001783     0 NOTYPE  GLOBAL DEFAULT    7 vector237
   290: c1001027     0 NOTYPE  GLOBAL DEFAULT    7 vector64
   291: c1000eda     0 NOTYPE  GLOBAL DEFAULT    7 vector27
   292: c1001297     0 NOTYPE  GLOBAL DEFAULT    7 vector132
   293: c100151f     0 NOTYPE  GLOBAL DEFAULT    7 vector186
   294: c1006f6d   248 FUNC    GLOBAL DEFAULT    7 sys_read
   295: c1001693     0 NOTYPE  GLOBAL DEFAULT    7 vector217
   296: c1004767   178 FUNC    GLOBAL DEFAULT    7 sys_print_task
   297: c1004819     0 NOTYPE  GLOBAL DEFAULT    7 kernel_thread_entry
   298: c1000108    22 FUNC    GLOBAL DEFAULT    7 memcpy
   299: c1008e90   200 FUNC    GLOBAL DEFAULT    7 dir_remove
   300: c1000e00     0 NOTYPE  GLOBAL DEFAULT    7 vector1
   301: c10014bf     0 NOTYPE  GLOBAL DEFAULT    7 vector178
   302: c1000f3d     0 NOTYPE  GLOBAL DEFAULT    7 vector38
   303: c1004f55    79 FUNC    GLOBAL DEFAULT    7 serial_proc_data
   304: c100178f     0 NOTYPE  GLOBAL DEFAULT    7 vector238
   305: 4000066d    30 FUNC    GLOBAL DEFAULT    3 print_prompt
   306: c1008f7d    69 FUNC    GLOBAL DEFAULT    7 get_free_slot_in_global
   307: c100036b    62 FUNC    GLOBAL DEFAULT    7 __PANIC
   308: c10005c3   194 FUNC    GLOBAL DEFAULT    7 readline
   309: c10012a3     0 NOTYPE  GLOBAL DEFAULT    7 vector133
   310: c1001078     0 NOTYPE  GLOBAL DEFAULT    7 vector73
   311: c1001327     0 NOTYPE  GLOBAL DEFAULT    7 vector144
   312: c10087f1  1186 FUNC    GLOBAL DEFAULT    7 delete_dir_entry
   313: c1011ce0 0x600000 OBJECT  GLOBAL DEFAULT   10 pp
   314: c100024a    12 FUNC    GLOBAL DEFAULT    7 CPU_INVLPG
   315: c100184f     0 NOTYPE  GLOBAL DEFAULT    7 vector254
   316: 40000250    19 FUNC    GLOBAL DEFAULT    3 rewinddir
   317: c1001174     0 NOTYPE  GLOBAL DEFAULT    7 vector101
   318: c100164b     0 NOTYPE  GLOBAL DEFAULT    7 vector211
   319: c1613000 0x300000 OBJECT  GLOBAL DEFAULT   10 user_pt_highmem
   320: c100148f     0 NOTYPE  GLOBAL DEFAULT    7 vector174
   321: 400002e4    18 FUNC    GLOBAL DEFAULT    3 malloc
   322: c10017cb     0 NOTYPE  GLOBAL DEFAULT    7 vector243
   323: c100d040    56 OBJECT  GLOBAL DEFAULT    9 gdt
   324: 4000002f    35 FUNC    GLOBAL DEFAULT    3 test_fork
   325: c1001267     0 NOTYPE  GLOBAL DEFAULT    7 vector128
   326: c10010c0     0 NOTYPE  GLOBAL DEFAULT    7 vector81
   327: c1000e62     0 NOTYPE  GLOBAL DEFAULT    7 vector13
   328: c1011cb4    12 OBJECT  GLOBAL DEFAULT   10 user_sema
   329: c1000fb2     0 NOTYPE  GLOBAL DEFAULT    7 vector51
   330: c1000e79     0 NOTYPE  GLOBAL DEFAULT    7 vector16
   331: 00102000  4096 OBJECT  GLOBAL DEFAULT    2 pt_init
   332: 40001b20   512 OBJECT  GLOBAL DEFAULT    6 cwd_cache
   333: c10017a7     0 NOTYPE  GLOBAL DEFAULT    7 vector240
   334: c1000fcd     0 NOTYPE  GLOBAL DEFAULT    7 vector54
   335: c1000e92     0 NOTYPE  GLOBAL DEFAULT    7 vector19
   336: c100296f   252 FUNC    GLOBAL DEFAULT    7 pmm_alloc
   337: c1001123     0 NOTYPE  GLOBAL DEFAULT    7 vector92
   338: c1004fc8    85 FUNC    GLOBAL DEFAULT    7 serial_putc_sub
   339: c10017d7     0 NOTYPE  GLOBAL DEFAULT    7 vector244
   340: c10012f7     0 NOTYPE  GLOBAL DEFAULT    7 vector140
   341: c1000f7c     0 NOTYPE  GLOBAL DEFAULT    7 vector45
   342: c1008c93   469 FUNC    GLOBAL DEFAULT    7 dir_read
   343: c10010ae     0 NOTYPE  GLOBAL DEFAULT    7 vector79
   344: 40000f92    96 FUNC    GLOBAL DEFAULT    3 buildin_pwd
   345: c1001723     0 NOTYPE  GLOBAL DEFAULT    7 vector229
   346: 4000023e    18 FUNC    GLOBAL DEFAULT    3 rmdir
   347: c10013cf     0 NOTYPE  GLOBAL DEFAULT    7 vector158
   348: c1004bbf    51 FUNC    GLOBAL DEFAULT    7 pic_enable
   349: c1002199   233 FUNC    GLOBAL DEFAULT    7 test_pmm
   350: 400002c3    18 FUNC    GLOBAL DEFAULT    3 readdir
   351: c1000f46     0 NOTYPE  GLOBAL DEFAULT    7 vector39
   352: c10006d2   232 FUNC    GLOBAL DEFAULT    7 gdt_init
   353: c1001447     0 NOTYPE  GLOBAL DEFAULT    7 vector168
   354: c1000f22     0 NOTYPE  GLOBAL DEFAULT    7 vector35
   355: c10011e0     0 NOTYPE  GLOBAL DEFAULT    7 vector113
   356: c100302f    40 FUNC    GLOBAL DEFAULT    7 sys_mmap
   357: c100db10     4 OBJECT  GLOBAL DEFAULT    9 highmem_start
   358: c100124c     0 NOTYPE  GLOBAL DEFAULT    7 vector125
   359: c1008e68    40 FUNC    GLOBAL DEFAULT    7 dir_is_empty
   360: 4000161c     4 OBJECT  GLOBAL DEFAULT    4 argc
   361: c100921a   738 FUNC    GLOBAL DEFAULT    7 file_create
   362: c1a14228     4 OBJECT  GLOBAL DEFAULT   10 second
   363: 40000116    15 FUNC    GLOBAL DEFAULT    3 user_sys_getpid
   364: c1001687     0 NOTYPE  GLOBAL DEFAULT    7 vector216
   365: 400001f7    35 FUNC    GLOBAL DEFAULT    3 lseek
   366: c100101e     0 NOTYPE  GLOBAL DEFAULT    7 vector63
   367: c1000ed1     0 NOTYPE  GLOBAL DEFAULT    7 vector26
   368: c1004fa4    36 FUNC    GLOBAL DEFAULT    7 serial_intr
   369: c1001573     0 NOTYPE  GLOBAL DEFAULT    7 vector193
   370: c1001597     0 NOTYPE  GLOBAL DEFAULT    7 vector196
   371: c1001633     0 NOTYPE  GLOBAL DEFAULT    7 vector209
   372: 4000031b    24 FUNC    GLOBAL DEFAULT    3 mmap
   373: c1000e1b     0 NOTYPE  GLOBAL DEFAULT    7 vector4
   374: c1005ffa   132 FUNC    GLOBAL DEFAULT    7 test_ide_io
   375: c100145f     0 NOTYPE  GLOBAL DEFAULT    7 vector170
   376: c1003c00   165 FUNC    GLOBAL DEFAULT    7 schedule
   377: c10012c7     0 NOTYPE  GLOBAL DEFAULT    7 vector136
   378: c1000e4d     0 NOTYPE  GLOBAL DEFAULT    7 vector10
   379: c100160f     0 NOTYPE  GLOBAL DEFAULT    7 vector206
   380: c100185b     0 NOTYPE  GLOBAL DEFAULT    7 vector255
   381: c1002f19    92 FUNC    GLOBAL DEFAULT    7 setup_pgdir
   382: c10014e3     0 NOTYPE  GLOBAL DEFAULT    7 vector181
   383: 4000158a   146 FUNC    GLOBAL DEFAULT    3 buildin_rm
   384: c1611ce0    12 OBJECT  GLOBAL DEFAULT   10 normal_zone
   385: c100804f    19 FUNC    GLOBAL DEFAULT    7 fs_init
   386: c1000ffa     0 NOTYPE  GLOBAL DEFAULT    7 vector59
   387: c1a14234     4 OBJECT  GLOBAL DEFAULT   10 root_dir
   388: c1003f21   296 FUNC    GLOBAL DEFAULT    7 copy_user_cr3
   389: c10010e4     0 NOTYPE  GLOBAL DEFAULT    7 vector85
   390: c10010db     0 NOTYPE  GLOBAL DEFAULT    7 vector84
   391: c100481e     0 NOTYPE  GLOBAL DEFAULT    7 switch_to
   392: c10014fb     0 NOTYPE  GLOBAL DEFAULT    7 vector183
   393: c10006bb    23 FUNC    GLOBAL DEFAULT    7 ltr
   394: c10013db     0 NOTYPE  GLOBAL DEFAULT    7 vector159
   395: c1001657     0 NOTYPE  GLOBAL DEFAULT    7 vector212
   396: c1004468   767 FUNC    GLOBAL DEFAULT    7 user_task_init
   397: c1000f8e     0 NOTYPE  GLOBAL DEFAULT    7 vector47
   398: c1001717     0 NOTYPE  GLOBAL DEFAULT    7 vector228
   399: c1000f61     0 NOTYPE  GLOBAL DEFAULT    7 vector42
   400: c100043c    47 FUNC    GLOBAL DEFAULT    7 instr_hello
   401: c10011e9     0 NOTYPE  GLOBAL DEFAULT    7 vector114
   402: c100149b     0 NOTYPE  GLOBAL DEFAULT    7 vector175
   403: c100131b     0 NOTYPE  GLOBAL DEFAULT    7 vector143
   404: c1002b37   216 FUNC    GLOBAL DEFAULT    7 setup_vpt
   405: c100127f     0 NOTYPE  GLOBAL DEFAULT    7 vector130
   406: c10017ef     0 NOTYPE  GLOBAL DEFAULT    7 vector246
   407: c1000e46     0 NOTYPE  GLOBAL DEFAULT    7 vector9
   408: c100130f     0 NOTYPE  GLOBAL DEFAULT    7 vector142
   409: c100116b     0 NOTYPE  GLOBAL DEFAULT    7 vector100
   410: c100001d    31 FUNC    GLOBAL DEFAULT    7 inw
   411: c1008124   492 FUNC    GLOBAL DEFAULT    7 search_dir_entry
   412: c10015d3     0 NOTYPE  GLOBAL DEFAULT    7 vector201
   413: c1003e23   254 FUNC    GLOBAL DEFAULT    7 set_user_cr3
   414: c1003cd3   176 FUNC    GLOBAL DEFAULT    7 thread_unblock
   415: c1000196    63 FUNC    GLOBAL DEFAULT    7 strrchr
   416: c10007c6   491 FUNC    GLOBAL DEFAULT    7 idt_init
   417: 00101000  4096 OBJECT  GLOBAL DEFAULT    2 pdt
   418: c1002194     5 FUNC    GLOBAL DEFAULT    7 kernel_main
   419: c1001003     0 NOTYPE  GLOBAL DEFAULT    7 vector60
   420: c1000eb6     0 NOTYPE  GLOBAL DEFAULT    7 vector23
   421: c1005063   124 FUNC    GLOBAL DEFAULT    7 timer_init
   422: c10078e5    53 FUNC    GLOBAL DEFAULT    7 sys_readdir
   423: c1001777     0 NOTYPE  GLOBAL DEFAULT    7 vector236
   424: c1002a6b   167 FUNC    GLOBAL DEFAULT    7 pmm_free
   425: 400001df    24 FUNC    GLOBAL DEFAULT    3 write
   426: c1006b6f   604 FUNC    GLOBAL DEFAULT    7 sys_open
   427: c100173b     0 NOTYPE  GLOBAL DEFAULT    7 vector231
   428: c10054b1   178 FUNC    GLOBAL DEFAULT    7 backtrace
   429: c1001039     0 NOTYPE  GLOBAL DEFAULT    7 vector66
   430: c1000eec     0 NOTYPE  GLOBAL DEFAULT    7 vector29
   431: c10012bb     0 NOTYPE  GLOBAL DEFAULT    7 vector135
   432: 40000cf7    48 FUNC    GLOBAL DEFAULT    3 user_strcpy
   433: c1005166   120 FUNC    GLOBAL DEFAULT    7 clear
   434: 00106000  4096 OBJECT  GLOBAL DEFAULT    2 pt3
   435: c100109c     0 NOTYPE  GLOBAL DEFAULT    7 vector77
   436: c100046b   125 FUNC    GLOBAL DEFAULT    7 instr_help
   437: c10001d5    69 FUNC    GLOBAL DEFAULT    7 strcat
   438: c10014d7     0 NOTYPE  GLOBAL DEFAULT    7 vector180
   439: c1001627     0 NOTYPE  GLOBAL DEFAULT    7 vector208
   440: c10004e8   193 FUNC    GLOBAL DEFAULT    7 instr_game
   441: c1001159     0 NOTYPE  GLOBAL DEFAULT    7 vector98
   442: c1001150     0 NOTYPE  GLOBAL DEFAULT    7 vector97
   443: c1002e2c   237 FUNC    GLOBAL DEFAULT    7 vmm_map
   444: c10014a7     0 NOTYPE  GLOBAL DEFAULT    7 vector176
   445: c100157f     0 NOTYPE  GLOBAL DEFAULT    7 vector194
   446: c1000f07     0 NOTYPE  GLOBAL DEFAULT    7 vector32
   447: 40000278    18 FUNC    GLOBAL DEFAULT    3 chdir
   448: c10015bb     0 NOTYPE  GLOBAL DEFAULT    7 vector199
   449: c1003ddf    24 FUNC    GLOBAL DEFAULT    7 do_exit
   450: 40000c7c    40 FUNC    GLOBAL DEFAULT    3 user_strlen
   451: c100128b     0 NOTYPE  GLOBAL DEFAULT    7 vector131
   452: c1001837     0 NOTYPE  GLOBAL DEFAULT    7 vector252
   453: c1000df7     0 NOTYPE  GLOBAL DEFAULT    7 vector0
   454: c1003ca5    46 FUNC    GLOBAL DEFAULT    7 thread_block
   455: c10058f8    62 FUNC    GLOBAL DEFAULT    7 cons_putc
   456: 40000333    21 FUNC    GLOBAL DEFAULT    3 exec
   457: c1001333     0 NOTYPE  GLOBAL DEFAULT    7 vector145
   458: c1a14004     4 OBJECT  GLOBAL DEFAULT   10 task1
   459: c1006e6a   259 FUNC    GLOBAL DEFAULT    7 sys_write
   460: c10011aa     0 NOTYPE  GLOBAL DEFAULT    7 vector107
   461: c1000f4f     0 NOTYPE  GLOBAL DEFAULT    7 vector40
   462: 40000348    18 FUNC    GLOBAL DEFAULT    3 wait
   463: c1000d6c    31 FUNC    GLOBAL DEFAULT    7 intr_enable
   464: c100117d     0 NOTYPE  GLOBAL DEFAULT    7 vector102
   465: c1009db5   909 FUNC    GLOBAL DEFAULT    7 file_read
   466: 40000156    47 FUNC    GLOBAL DEFAULT    3 user_print_num
   467: c1000fdf     0 NOTYPE  GLOBAL DEFAULT    7 vector56
   468: 40000c3d    63 FUNC    GLOBAL DEFAULT    3 user_strrchr
   469: c100104b     0 NOTYPE  GLOBAL DEFAULT    7 vector68
   470: c100db20  4100 OBJECT  GLOBAL DEFAULT    9 task_pidmap
   471: c1000e2d     0 NOTYPE  GLOBAL DEFAULT    7 vector6
   472: c1001273     0 NOTYPE  GLOBAL DEFAULT    7 vector129
   473: c1a143c0     0 NOTYPE  GLOBAL DEFAULT   10 kernel_end
   474: c10015a3     0 NOTYPE  GLOBAL DEFAULT    7 vector197
   475: 40000195    24 FUNC    GLOBAL DEFAULT    3 read
   476: c1004e47   115 FUNC    GLOBAL DEFAULT    7 lpt_putc_sub
   477: c100501d    70 FUNC    GLOBAL DEFAULT    7 serial_putc
   478: c1001387     0 NOTYPE  GLOBAL DEFAULT    7 vector152
   479: c10078b8    45 FUNC    GLOBAL DEFAULT    7 sys_closedir
   480: c100d100     0 NOTYPE  GLOBAL DEFAULT    9 __vectors
   481: c100172f     0 NOTYPE  GLOBAL DEFAULT    7 vector230
   482: c1000f34     0 NOTYPE  GLOBAL DEFAULT    7 vector37
   483: c1001603     0 NOTYPE  GLOBAL DEFAULT    7 vector205
   484: c10013f3     0 NOTYPE  GLOBAL DEFAULT    7 vector161
   485: c1a14008     4 OBJECT  GLOBAL DEFAULT   10 current
   486: 4000021a    18 FUNC    GLOBAL DEFAULT    3 unlink
   487: c1001066     0 NOTYPE  GLOBAL DEFAULT    7 vector71
   488: c10013e7     0 NOTYPE  GLOBAL DEFAULT    7 vector160
   489: c1004eba    70 FUNC    GLOBAL DEFAULT    7 lpt_putc
   490: c100167b     0 NOTYPE  GLOBAL DEFAULT    7 vector215
   491: c1004049   108 FUNC    GLOBAL DEFAULT    7 list_traversal
   492: c10013c3     0 NOTYPE  GLOBAL DEFAULT    7 vector157
   493: 00109000     0 NOTYPE  GLOBAL DEFAULT    2 init_end
   494: c1000d8b    32 FUNC    GLOBAL DEFAULT    7 intr_disable
   495: c10009e4   192 FUNC    GLOBAL DEFAULT    7 print_regs
   496: c10011d7     0 NOTYPE  GLOBAL DEFAULT    7 vector112
   497: 40000c2a    19 FUNC    GLOBAL DEFAULT    3 user_strcmp
   498: 40001441    37 FUNC    GLOBAL DEFAULT    3 buildin_ps
   499: c1000256    12 FUNC    GLOBAL DEFAULT    7 lcr3
   500: c1913000 0x20000 OBJECT  GLOBAL DEFAULT   10 pt_highmem
   501: c10014ef     0 NOTYPE  GLOBAL DEFAULT    7 vector182
   502: c10034d8    53 FUNC    GLOBAL DEFAULT    7 set_task_name
   503: c1000e5b     0 NOTYPE  GLOBAL DEFAULT    7 vector12
   504: c1000262    94 FUNC    GLOBAL DEFAULT    7 memcmp
   505: 40000143    19 FUNC    GLOBAL DEFAULT    3 user_print_string
   506: c10011bc     0 NOTYPE  GLOBAL DEFAULT    7 vector109
   507: c1000e9b     0 NOTYPE  GLOBAL DEFAULT    7 vector20
   508: c1000d41     7 FUNC    GLOBAL DEFAULT    7 disable_interupt
   509: 4000030c    15 FUNC    GLOBAL DEFAULT    3 fork
   510: c1005563   917 FUNC    GLOBAL DEFAULT    7 printk
   511: c1000fc4     0 NOTYPE  GLOBAL DEFAULT    7 vector53
   512: c1000e89     0 NOTYPE  GLOBAL DEFAULT    7 vector18
   513: 00100000   624 FUNC    GLOBAL DEFAULT    1 init
   514: c1009613    64 FUNC    GLOBAL DEFAULT    7 file_close
   515: c100113e     0 NOTYPE  GLOBAL DEFAULT    7 vector95
   516: c1002536    25 FUNC    GLOBAL DEFAULT    7 test_user
   517: c1003df7    10 FUNC    GLOBAL DEFAULT    7 do_execve
   518: c10016ff     0 NOTYPE  GLOBAL DEFAULT    7 vector226
   519: c1a14230     4 OBJECT  GLOBAL DEFAULT   10 cur_part
   520: c1000fa0     0 NOTYPE  GLOBAL DEFAULT    7 vector49
   521: c1000f73     0 NOTYPE  GLOBAL DEFAULT    7 vector44
   522: 40000ce1    22 FUNC    GLOBAL DEFAULT    3 user_memcpy
   523: c10010a5     0 NOTYPE  GLOBAL DEFAULT    7 vector78
   524: c1001483     0 NOTYPE  GLOBAL DEFAULT    7 vector173
   525: c100003c    33 FUNC    GLOBAL DEFAULT    7 outb
   526: c1001204     0 NOTYPE  GLOBAL DEFAULT    7 vector117
   527: c10010c9     0 NOTYPE  GLOBAL DEFAULT    7 vector82
   528: c10016cf     0 NOTYPE  GLOBAL DEFAULT    7 vector222
   529: c1000e3f     0 NOTYPE  GLOBAL DEFAULT    7 vector8
   530: c1001363     0 NOTYPE  GLOBAL DEFAULT    7 vector149
   531: c10000aa    33 FUNC    GLOBAL DEFAULT    7 memset
   532: c10059b7    54 FUNC    GLOBAL DEFAULT    7 sema_init
   533: c1005af7   148 FUNC    GLOBAL DEFAULT    7 sema_up
   534: c1001747     0 NOTYPE  GLOBAL DEFAULT    7 vector232
   535: c1001f47   173 FUNC    GLOBAL DEFAULT    7 main
   536: c1005b8b    79 FUNC    GLOBAL DEFAULT    7 lock_acquire
   537: c10011a1     0 NOTYPE  GLOBAL DEFAULT    7 vector106
   538: c10016b7     0 NOTYPE  GLOBAL DEFAULT    7 vector220
   539: 40001d20   512 OBJECT  GLOBAL DEFAULT    6 final_path
   540: c1001111     0 NOTYPE  GLOBAL DEFAULT    7 vector90
   541: c100140b     0 NOTYPE  GLOBAL DEFAULT    7 vector163
   542: c100175f     0 NOTYPE  GLOBAL DEFAULT    7 vector234
   543: c1007151   544 FUNC    GLOBAL DEFAULT    7 sys_unlink
   544: c1001015     0 NOTYPE  GLOBAL DEFAULT    7 vector62
   545: c1000ec8     0 NOTYPE  GLOBAL DEFAULT    7 vector25
   546: c10015af     0 NOTYPE  GLOBAL DEFAULT    7 vector198
   547: c10059ed    42 FUNC    GLOBAL DEFAULT    7 lock_init
   548: c100121f     0 NOTYPE  GLOBAL DEFAULT    7 vector120
   549: c1008062   130 FUNC    GLOBAL DEFAULT    7 open_root_dir
   550: c1002f75    95 FUNC    GLOBAL DEFAULT    7 sys_malloc
   551: c1005a17   224 FUNC    GLOBAL DEFAULT    7 sema_down
   552: c1001cb6   119 FUNC    GLOBAL DEFAULT    7 syscall_trap
   553: c10005a9    26 FUNC    GLOBAL DEFAULT    7 getchar
   554: c1000d48     7 FUNC    GLOBAL DEFAULT    7 enable_interupt
   555: 4000029f    18 FUNC    GLOBAL DEFAULT    3 opendir
   556: c1000fa9     0 NOTYPE  GLOBAL DEFAULT    7 vector50
   557: c1000e70     0 NOTYPE  GLOBAL DEFAULT    7 vector15
   558: c1005bda    73 FUNC    GLOBAL DEFAULT    7 lock_release
   559: 00104000  4096 OBJECT  GLOBAL DEFAULT    2 pt1
   560: 40000ff2   138 FUNC    GLOBAL DEFAULT    3 buildin_cd
   561: c1000d4f    29 FUNC    GLOBAL DEFAULT    7 get_now_intr_status
   562: c100137b     0 NOTYPE  GLOBAL DEFAULT    7 vector151
   563: c10010d2     0 NOTYPE  GLOBAL DEFAULT    7 vector83
   564: c1001108     0 NOTYPE  GLOBAL DEFAULT    7 vector89
   565: c10010ff     0 NOTYPE  GLOBAL DEFAULT    7 vector88
   566: c1000d2a    23 FUNC    GLOBAL DEFAULT    7 trap
   567: c10014cb     0 NOTYPE  GLOBAL DEFAULT    7 vector179
   568: c1000f19     0 NOTYPE  GLOBAL DEFAULT    7 vector34
   569: c1000f85     0 NOTYPE  GLOBAL DEFAULT    7 vector46
   570: c1000183    19 FUNC    GLOBAL DEFAULT    7 strcmp
   571: c1000dab    19 FUNC    GLOBAL DEFAULT    7 intr_save
   572: c10012af     0 NOTYPE  GLOBAL DEFAULT    7 vector134
   573: c1004d5b   236 FUNC    GLOBAL DEFAULT    7 serial_init
   574: c10016db     0 NOTYPE  GLOBAL DEFAULT    7 vector223
   575: c1a1422c     4 OBJECT  GLOBAL DEFAULT   10 jiffies
   576: c100307c   843 FUNC    GLOBAL DEFAULT    7 kernel_task_init
   577: c1007ca9   493 FUNC    GLOBAL DEFAULT    7 sys_getcwd
   578: 40000263    21 FUNC    GLOBAL DEFAULT    3 getcwd
   579: c1004d12    73 FUNC    GLOBAL DEFAULT    7 delay
   580: c100a4c1   709 FUNC    GLOBAL DEFAULT    7 inode_release
   581: c100169f     0 NOTYPE  GLOBAL DEFAULT    7 vector218
   582: c1006857   136 FUNC    GLOBAL DEFAULT    7 path_depth_cnt
   583: c10003e2    90 FUNC    GLOBAL DEFAULT    7 run
   584: c10040b5   380 FUNC    GLOBAL DEFAULT    7 task_exit
   585: c1004aaf   178 FUNC    GLOBAL DEFAULT    7 sys_execv
   586: c10050df   135 FUNC    GLOBAL DEFAULT    7 print_cursor
   587: c1004bf2   288 FUNC    GLOBAL DEFAULT    7 pic_init
   588: c10016f3     0 NOTYPE  GLOBAL DEFAULT    7 vector225
   589: c100152b     0 NOTYPE  GLOBAL DEFAULT    7 vector187
   590: c1000dbe    17 FUNC    GLOBAL DEFAULT    7 intr_restore
   591: c100254f  1056 FUNC    GLOBAL DEFAULT    7 pmm_init
   592: c1611cec    12 OBJECT  GLOBAL DEFAULT   10 dma_zone
   593: c100fc70     4 OBJECT  GLOBAL DEFAULT   10 test_user_task
   594: c1000ef5     0 NOTYPE  GLOBAL DEFAULT    7 vector30
   595: c100125e     0 NOTYPE  GLOBAL DEFAULT    7 vector127
   596: c1001567     0 NOTYPE  GLOBAL DEFAULT    7 vector192
   597: c100142f     0 NOTYPE  GLOBAL DEFAULT    7 vector166
   598: c1001093     0 NOTYPE  GLOBAL DEFAULT    7 vector76
   599: c100108a     0 NOTYPE  GLOBAL DEFAULT    7 vector75
   600: c100158b     0 NOTYPE  GLOBAL DEFAULT    7 vector195
   601: c100136f     0 NOTYPE  GLOBAL DEFAULT    7 vector150
   602: c1000ff1     0 NOTYPE  GLOBAL DEFAULT    7 vector58
   603: c1001807     0 NOTYPE  GLOBAL DEFAULT    7 vector248
   604: c100123a     0 NOTYPE  GLOBAL DEFAULT    7 vector123
   605: c1001147     0 NOTYPE  GLOBAL DEFAULT    7 vector96
   606: c100a1b4   289 FUNC    GLOBAL DEFAULT    7 inode_sync
   607: c1000efe     0 NOTYPE  GLOBAL DEFAULT    7 vector31
   608: c10015eb     0 NOTYPE  GLOBAL DEFAULT    7 vector203
   609: c1002c0f   293 FUNC    GLOBAL DEFAULT    7 vmm_malloc
   610: c100fc74     4 OBJECT  GLOBAL DEFAULT   10 offset
   611: c1005332   383 FUNC    GLOBAL DEFAULT    7 print_num
   612: c10012eb     0 NOTYPE  GLOBAL DEFAULT    7 vector139
   613: c1001393     0 NOTYPE  GLOBAL DEFAULT    7 vector153
   614: c1001417     0 NOTYPE  GLOBAL DEFAULT    7 vector164
   615: c1001228     0 NOTYPE  GLOBAL DEFAULT    7 vector121
   616: c1000e24     0 NOTYPE  GLOBAL DEFAULT    7 vector5
   617: c100143b     0 NOTYPE  GLOBAL DEFAULT    7 vector167
   618: c10013ab     0 NOTYPE  GLOBAL DEFAULT    7 vector155
   619: c1001813     0 NOTYPE  GLOBAL DEFAULT    7 vector249
   620: c100005d    33 FUNC    GLOBAL DEFAULT    7 outw
   621: c100181f     0 NOTYPE  GLOBAL DEFAULT    7 vector250
   622: c10080e4    64 FUNC    GLOBAL DEFAULT    7 dir_open
   623: c1001243     0 NOTYPE  GLOBAL DEFAULT    7 vector124
   624: c10011c5     0 NOTYPE  GLOBAL DEFAULT    7 vector110
   625: c100d000    36 OBJECT  GLOBAL DEFAULT    9 instr_list
   626: c10015f7     0 NOTYPE  GLOBAL DEFAULT    7 vector204
   627: 4000028a    21 FUNC    GLOBAL DEFAULT    3 stat
   628: c1000de6     0 NOTYPE  GLOBAL DEFAULT    7 __trapret
   629: c10002c0   171 FUNC    GLOBAL DEFAULT    7 print_seg
   630: c10012d3     0 NOTYPE  GLOBAL DEFAULT    7 vector137
   631: c1933000     4 OBJECT  GLOBAL DEFAULT   10 highmem_ptr
   632: c10077ab   269 FUNC    GLOBAL DEFAULT    7 sys_opendir
   633: c10017fb     0 NOTYPE  GLOBAL DEFAULT    7 vector247
   634: c1000ead     0 NOTYPE  GLOBAL DEFAULT    7 vector22
   635: c10052fb    55 FUNC    GLOBAL DEFAULT    7 print_string
   636: c10015df     0 NOTYPE  GLOBAL DEFAULT    7 vector202
   637: c100106f     0 NOTYPE  GLOBAL DEFAULT    7 vector72
   638: c1000fd6     0 NOTYPE  GLOBAL DEFAULT    7 vector55
   639: c1001255     0 NOTYPE  GLOBAL DEFAULT    7 vector126
   640: c1001030     0 NOTYPE  GLOBAL DEFAULT    7 vector65
   641: c1000ee3     0 NOTYPE  GLOBAL DEFAULT    7 vector28
   642: c1001453     0 NOTYPE  GLOBAL DEFAULT    7 vector169
   643: c1001753     0 NOTYPE  GLOBAL DEFAULT    7 vector233
   644: 40000052   104 FUNC    GLOBAL DEFAULT    3 user_main
   645: 40000125    30 FUNC    GLOBAL DEFAULT    3 user_print_char
   646: c10009b1    14 FUNC    GLOBAL DEFAULT    7 set_ts_esp0
   647: 4000035a    18 FUNC    GLOBAL DEFAULT    3 exit
   648: c100432b   166 FUNC    GLOBAL DEFAULT    7 sys_wait
   649: c10043d1   151 FUNC    GLOBAL DEFAULT    7 sys_exit
   650: c100134b     0 NOTYPE  GLOBAL DEFAULT    7 vector147
   651: 40001fe0     0 NOTYPE  GLOBAL DEFAULT    6 user_end
   652: c100118f     0 NOTYPE  GLOBAL DEFAULT    7 vector104
   653: c10011fb     0 NOTYPE  GLOBAL DEFAULT    7 vector116
   654: c1002d34   248 FUNC    GLOBAL DEFAULT    7 vmm_free
   655: c100a786    80 FUNC    GLOBAL DEFAULT    7 inode_init
   656: c1a1400c     4 OBJECT  GLOBAL DEFAULT   10 user_task
   657: c1a14240   384 OBJECT  GLOBAL DEFAULT   10 file_table
   658: c1000fbb     0 NOTYPE  GLOBAL DEFAULT    7 vector52
   659: c1000e82     0 NOTYPE  GLOBAL DEFAULT    7 vector17
   660: c1001507     0 NOTYPE  GLOBAL DEFAULT    7 vector184
   661: c1004261    69 FUNC    GLOBAL DEFAULT    7 release_prog_resource
   662: c100011e    40 FUNC    GLOBAL DEFAULT    7 strlen
   663: 400001ad    32 FUNC    GLOBAL DEFAULT    3 open
   664: c100792a   288 FUNC    GLOBAL DEFAULT    7 sys_rmdir
   665: c100161b     0 NOTYPE  GLOBAL DEFAULT    7 vector207
   666: c100154f     0 NOTYPE  GLOBAL DEFAULT    7 vector190
   667: c1007e96   300 FUNC    GLOBAL DEFAULT    7 sys_stat
   668: c100179b     0 NOTYPE  GLOBAL DEFAULT    7 vector239
   669: c1001135     0 NOTYPE  GLOBAL DEFAULT    7 vector94
   670: c100112c     0 NOTYPE  GLOBAL DEFAULT    7 vector93
   671: c1001537     0 NOTYPE  GLOBAL DEFAULT    7 vector188
   672: 4000107c   965 FUNC    GLOBAL DEFAULT    3 buildin_ls
   673: c1000f97     0 NOTYPE  GLOBAL DEFAULT    7 vector48
   674: 400014f8   146 FUNC    GLOBAL DEFAULT    3 buildin_rmdir
   675: c10016ab     0 NOTYPE  GLOBAL DEFAULT    7 vector219
   676: c1a14020   520 OBJECT  GLOBAL DEFAULT   10 cons
   677: c1001357     0 NOTYPE  GLOBAL DEFAULT    7 vector148
   678: c10016c3     0 NOTYPE  GLOBAL DEFAULT    7 vector221
   679: 400002b1    18 FUNC    GLOBAL DEFAULT    3 closedir
   680: c1005eb4   326 FUNC    GLOBAL DEFAULT    7 read_main_partition
   681: c10010b7     0 NOTYPE  GLOBAL DEFAULT    7 vector80
   682: c100146b     0 NOTYPE  GLOBAL DEFAULT    7 vector171
   683: c100139f     0 NOTYPE  GLOBAL DEFAULT    7 vector154
   684: c100fc6c     1 OBJECT  GLOBAL DEFAULT   10 shell_input
   685: c1000f2b     0 NOTYPE  GLOBAL DEFAULT    7 vector36
   686: c100eb2c     0 NOTYPE  GLOBAL DEFAULT    9 kernel_bss
   687: c100176b     0 NOTYPE  GLOBAL DEFAULT    7 vector235
   688: c1001198     0 NOTYPE  GLOBAL DEFAULT    7 vector105
   689: c1007fc2   141 FUNC    GLOBAL DEFAULT    7 sys_chdir
   690: 40000ba8    69 FUNC    GLOBAL DEFAULT    3 user_strcat
   691: c1008310    58 FUNC    GLOBAL DEFAULT    7 dir_close
   692: 00108000  4096 OBJECT  GLOBAL DEFAULT    2 user_pt
   693: c1002498    13 FUNC    GLOBAL DEFAULT    7 test_schedule
   694: 4000022c    18 FUNC    GLOBAL DEFAULT    3 mkdir
   695: c100133f     0 NOTYPE  GLOBAL DEFAULT    7 vector146
   696: c1009008   192 FUNC    GLOBAL DEFAULT    7 inode_bitmap_alloc
   697: c100155b     0 NOTYPE  GLOBAL DEFAULT    7 vector191
   698: 400001cd    18 FUNC    GLOBAL DEFAULT    3 close
   699: c1001186     0 NOTYPE  GLOBAL DEFAULT    7 vector103
   700: c10003a9    57 FUNC    GLOBAL DEFAULT    7 monitor
   701: c1005e48    61 FUNC    GLOBAL DEFAULT    7 ide_write
   702: c1008fc2    70 FUNC    GLOBAL DEFAULT    7 task_fd_install
   703: c100a3ab    26 FUNC    GLOBAL DEFAULT    7 inode_close
   704: 400002f6    22 FUNC    GLOBAL DEFAULT    3 free
   705: c10090c8   206 FUNC    GLOBAL DEFAULT    7 block_bitmap_alloc
   706: c1934000 0xe0000 OBJECT  GLOBAL DEFAULT   10 pt_dma_nomal
   707: c1000e54     0 NOTYPE  GLOBAL DEFAULT    7 vector11
   708: c1000e69     0 NOTYPE  GLOBAL DEFAULT    7 vector14

No version information found in this file.
