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
  Start of section headers:          241288 (bytes into file)
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
  [ 1] .init.text        PROGBITS        00100000 001000 0001f5 00  AX  0   0  1
  [ 2] .init.data        PROGBITS        00101000 002000 008000 00  WA  0   0 4096
  [ 3] .user.text        PROGBITS        40000000 019000 00167c 00  AX  0   0  1
  [ 4] .user.data        PROGBITS        4000167c 01a67c 000004 00  WA  0   0  4
  [ 5] .user.rodata      PROGBITS        40001680 01a680 000623 00   A  0   0  4
  [ 6] .user.bss         NOBITS          40001cc0 01aca3 0004c0 00  WA  0   0 32
  [ 7] .text             PROGBITS        c1000000 00a000 00af40 00  AX  0   0  1
  [ 8] .rodata           PROGBITS        c100af40 014f40 001967 00   A  0   0  4
  [ 9] .data             PROGBITS        c100d000 017000 001b2c 00  WA  0   0 32
  [10] .bss              NOBITS          c100f000 018b2c a053c0 00  WA  0   0 4096
  [11] .debug_info       PROGBITS        00000000 01aca3 00c8f4 00      0   0  1
  [12] .debug_abbrev     PROGBITS        00000000 027597 003372 00      0   0  1
  [13] .debug_aranges    PROGBITS        00000000 02a909 000400 00      0   0  1
  [14] .debug_ranges     PROGBITS        00000000 02ad09 000060 00      0   0  1
  [15] .debug_line       PROGBITS        00000000 02ad69 0065c3 00      0   0  1
  [16] .debug_str        PROGBITS        00000000 03132c 002a67 01  MS  0   0  1
  [17] .comment          PROGBITS        00000000 033d93 000011 01  MS  0   0  1
  [18] .stab             PROGBITS        00000000 033da4 002610 0c     19   0  4
  [19] .stabstr          STRTAB          00000000 0363b4 0001d4 00      0   0  1
  [20] .symtab           SYMTAB          00000000 036588 002dc0 10     21 211  4
  [21] .strtab           STRTAB          00000000 039348 001a7b 00      0   0  1
  [22] .shstrtab         STRTAB          00000000 03adc3 0000c4 00      0   0  1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), I (info),
  L (link order), O (extra OS processing required), G (group), T (TLS),
  C (compressed), x (unknown), o (OS specific), E (exclude),
  p (processor specific)

There are no section groups in this file.

Program Headers:
  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align
  LOAD           0x001000 0x00100000 0x00100000 0x001f5 0x001f5 R E 0x1000
  LOAD           0x002000 0x00101000 0x00101000 0x08000 0x08000 RW  0x1000
  LOAD           0x00a000 0xc1000000 0x01000000 0x0c8a7 0x0c8a7 R E 0x1000
  LOAD           0x017000 0xc100d000 0x0100d000 0x01b2c 0xa073c0 RW  0x1000
  LOAD           0x019000 0x40000000 0x40000000 0x01ca3 0x02180 RWE 0x1000

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

Symbol table '.symtab' contains 732 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00100000     0 SECTION LOCAL  DEFAULT    1 
     2: 00101000     0 SECTION LOCAL  DEFAULT    2 
     3: 40000000     0 SECTION LOCAL  DEFAULT    3 
     4: 4000167c     0 SECTION LOCAL  DEFAULT    4 
     5: 40001680     0 SECTION LOCAL  DEFAULT    5 
     6: 40001cc0     0 SECTION LOCAL  DEFAULT    6 
     7: c1000000     0 SECTION LOCAL  DEFAULT    7 
     8: c100af40     0 SECTION LOCAL  DEFAULT    8 
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
    21: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_main.c
    22: 40000000    47 FUNC    LOCAL  DEFAULT    3 delay
    23: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_syscall.c
    24: 400000ba    92 FUNC    LOCAL  DEFAULT    3 user_syscall
    25: 00000000     0 FILE    LOCAL  DEFAULT  ABS stdio.c
    26: 00000000     0 FILE    LOCAL  DEFAULT  ABS shell.c
    27: 400020c0   128 OBJECT  LOCAL  DEFAULT    6 cmd_line
    28: 40002140    64 OBJECT  LOCAL  DEFAULT    6 argv
    29: 4000069d   176 FUNC    LOCAL  DEFAULT    3 user_readline
    30: 4000074d   196 FUNC    LOCAL  DEFAULT    3 cmd_parse
    31: 00000000     0 FILE    LOCAL  DEFAULT  ABS string.c
    32: 40000ba2    44 FUNC    LOCAL  DEFAULT    3 __memset
    33: 40000c34    61 FUNC    LOCAL  DEFAULT    3 __strcmp
    34: 40000ceb    61 FUNC    LOCAL  DEFAULT    3 __memcpy
    35: 00000000     0 FILE    LOCAL  DEFAULT  ABS buildin_cmd.c
    36: 40000d6e    94 FUNC    LOCAL  DEFAULT    3 path_parse
    37: 40000dcc   330 FUNC    LOCAL  DEFAULT    3 wash_path
    38: 00000000     0 FILE    LOCAL  DEFAULT  ABS asm.c
    39: c100007e    44 FUNC    LOCAL  DEFAULT    7 __memset
    40: c10000cb    61 FUNC    LOCAL  DEFAULT    7 __memcpy
    41: c1000146    61 FUNC    LOCAL  DEFAULT    7 __strcmp
    42: 00000000     0 FILE    LOCAL  DEFAULT  ABS debug.c
    43: 00000000     0 FILE    LOCAL  DEFAULT  ABS monitor.c
    44: 00000000     0 FILE    LOCAL  DEFAULT  ABS readline.c
    45: c100f000  1024 OBJECT  LOCAL  DEFAULT   10 buf
    46: 00000000     0 FILE    LOCAL  DEFAULT  ABS dt.c
    47: c100f400  2048 OBJECT  LOCAL  DEFAULT   10 idt
    48: c100d078     6 OBJECT  LOCAL  DEFAULT    9 gdtinfo
    49: c100fc00   104 OBJECT  LOCAL  DEFAULT   10 ts
    50: c100d080     6 OBJECT  LOCAL  DEFAULT    9 idtinfo
    51: c1000685    54 FUNC    LOCAL  DEFAULT    7 lgdt
    52: c10007ba    12 FUNC    LOCAL  DEFAULT    7 lidt
    53: 00000000     0 FILE    LOCAL  DEFAULT  ABS trap.c
    54: c10009bf    37 FUNC    LOCAL  DEFAULT    7 hash32
    55: c100d0a0    96 OBJECT  LOCAL  DEFAULT    9 IA32flags
    56: c1000bfb   303 FUNC    LOCAL  DEFAULT    7 trap_dispatch
    57: 00000000     0 FILE    LOCAL  DEFAULT  ABS syscall.c
    58: c1001867    37 FUNC    LOCAL  DEFAULT    7 hash32
    59: c100188c    35 FUNC    LOCAL  DEFAULT    7 syscall_exit
    60: c10018af    47 FUNC    LOCAL  DEFAULT    7 sys_fork
    61: c10018de    30 FUNC    LOCAL  DEFAULT    7 syscall_wait
    62: c10018fc    44 FUNC    LOCAL  DEFAULT    7 sys_exec
    63: c1001928     6 FUNC    LOCAL  DEFAULT    7 sys_yield
    64: c100192e    17 FUNC    LOCAL  DEFAULT    7 sys_kill
    65: c100193f    13 FUNC    LOCAL  DEFAULT    7 sys_getpid
    66: c100194c    41 FUNC    LOCAL  DEFAULT    7 sys_print_char
    67: c1001975    39 FUNC    LOCAL  DEFAULT    7 sys_print_string
    68: c100199c    92 FUNC    LOCAL  DEFAULT    7 sys_print_num
    69: c10019f8    18 FUNC    LOCAL  DEFAULT    7 sys_backtrace
    70: c1001a0a    10 FUNC    LOCAL  DEFAULT    7 sys_pgdir
    71: c1001a14    56 FUNC    LOCAL  DEFAULT    7 sys_fdread
    72: c1001a4c    46 FUNC    LOCAL  DEFAULT    7 syscall_open
    73: c1001a7a    30 FUNC    LOCAL  DEFAULT    7 syscall_close
    74: c1001a98    56 FUNC    LOCAL  DEFAULT    7 syscall_write
    75: c1001ad0    60 FUNC    LOCAL  DEFAULT    7 syscall_lseek
    76: c1001b0c    30 FUNC    LOCAL  DEFAULT    7 syscall_unlink
    77: c1001b2a    30 FUNC    LOCAL  DEFAULT    7 syscall_mkdir
    78: c1001b48    30 FUNC    LOCAL  DEFAULT    7 syscall_rmdir
    79: c1001b66    35 FUNC    LOCAL  DEFAULT    7 syscall_rewinddir
    80: c1001b89    42 FUNC    LOCAL  DEFAULT    7 syscall_getcwd
    81: c1001bb3    30 FUNC    LOCAL  DEFAULT    7 syscall_chdir
    82: c1001bd1    44 FUNC    LOCAL  DEFAULT    7 syscall_stat
    83: c1001bfd    30 FUNC    LOCAL  DEFAULT    7 syscall_opendir
    84: c1001c1b    30 FUNC    LOCAL  DEFAULT    7 syscall_closedir
    85: c1001c39    30 FUNC    LOCAL  DEFAULT    7 syscall_readdir
    86: c1001c57    18 FUNC    LOCAL  DEFAULT    7 syscall_print_task
    87: c1001c69    30 FUNC    LOCAL  DEFAULT    7 syscall_malloc
    88: c1001c87    47 FUNC    LOCAL  DEFAULT    7 syscall_free
    89: c1001cb6    35 FUNC    LOCAL  DEFAULT    7 syscall_pipe
    90: c100d500   236 OBJECT  LOCAL  DEFAULT    9 syscalls
    91: 00000000     0 FILE    LOCAL  DEFAULT  ABS keyboard.c
    92: c100d600   256 OBJECT  LOCAL  DEFAULT    9 shiftcode
    93: c100d700   256 OBJECT  LOCAL  DEFAULT    9 togglecode
    94: c100d800   256 OBJECT  LOCAL  DEFAULT    9 normalmap
    95: c100d900   256 OBJECT  LOCAL  DEFAULT    9 shiftmap
    96: c100da00   256 OBJECT  LOCAL  DEFAULT    9 ctlmap
    97: c100db00    16 OBJECT  LOCAL  DEFAULT    9 charcode
    98: 00000000     0 FILE    LOCAL  DEFAULT  ABS main.c
    99: c1001f45    37 FUNC    LOCAL  DEFAULT    7 hash32
   100: c1002012   550 FUNC    LOCAL  DEFAULT    7 write2fs
   101: c1002549    49 FUNC    LOCAL  DEFAULT    7 print_task1
   102: c10025ab    47 FUNC    LOCAL  DEFAULT    7 delay
   103: c100257a    49 FUNC    LOCAL  DEFAULT    7 print_task2
   104: 00000000     0 FILE    LOCAL  DEFAULT  ABS pmm.c
   105: 00000000     0 FILE    LOCAL  DEFAULT  ABS vmm.c
   106: c1002bb6    37 FUNC    LOCAL  DEFAULT    7 hash32
   107: 00000000     0 FILE    LOCAL  DEFAULT  ABS task.c
   108: c10030fb    37 FUNC    LOCAL  DEFAULT    7 hash32
   109: c100fc80  8192 OBJECT  LOCAL  DEFAULT   10 hash_list
   110: c1011c80     4 OBJECT  LOCAL  DEFAULT   10 last_pid
   111: c1011c84     8 OBJECT  LOCAL  DEFAULT   10 ready_task_list
   112: c1011c8c     8 OBJECT  LOCAL  DEFAULT   10 all_task_list
   113: c1011c94     4 OBJECT  LOCAL  DEFAULT   10 nr_task
   114: c1003808   247 FUNC    LOCAL  DEFAULT    7 alloc_task
   115: c1003609    80 FUNC    LOCAL  DEFAULT    7 add_link
   116: c1003659    80 FUNC    LOCAL  DEFAULT    7 add_all_link
   117: c10036dc   122 FUNC    LOCAL  DEFAULT    7 add_pid_hash
   118: c1003cd9    15 FUNC    LOCAL  DEFAULT    7 wakeup_task
   119: c100348e    43 FUNC    LOCAL  DEFAULT    7 set_pid_bit
   120: c10034b9    43 FUNC    LOCAL  DEFAULT    7 clear_pid_bit
   121: c10034e4    65 FUNC    LOCAL  DEFAULT    7 find_free_pid
   122: c1003525    92 FUNC    LOCAL  DEFAULT    7 alloc_pid
   123: c1003581    30 FUNC    LOCAL  DEFAULT    7 free_pid
   124: c1011c98    21 OBJECT  LOCAL  DEFAULT   10 name.2644
   125: c10036a9    51 FUNC    LOCAL  DEFAULT    7 remove_link
   126: c1003756    71 FUNC    LOCAL  DEFAULT    7 remove_pid_hash
   127: c100379d   107 FUNC    LOCAL  DEFAULT    7 find_task
   128: c10038ff    29 FUNC    LOCAL  DEFAULT    7 forkret
   129: c100391c   364 FUNC    LOCAL  DEFAULT    7 copy_thread
   130: c1003a88   185 FUNC    LOCAL  DEFAULT    7 update_inode_open_cnts
   131: c100b62c    23 OBJECT  LOCAL  DEFAULT    8 __func__.2696
   132: c100b644     8 OBJECT  LOCAL  DEFAULT    8 __func__.2708
   133: c1003d47   118 FUNC    LOCAL  DEFAULT    7 task_run
   134: c100b64c    15 OBJECT  LOCAL  DEFAULT    8 __func__.2747
   135: c1003f40    92 FUNC    LOCAL  DEFAULT    7 print_taskinfo
   136: c1003fbe    28 FUNC    LOCAL  DEFAULT    7 kernel_execve
   137: c1003fda     6 FUNC    LOCAL  DEFAULT    7 user_main
   138: c10044d0    40 FUNC    LOCAL  DEFAULT    7 find_child
   139: c10044f8    50 FUNC    LOCAL  DEFAULT    7 find_hanging_child
   140: c100452a    43 FUNC    LOCAL  DEFAULT    7 task0_adopt_a_child
   141: c100b65c     9 OBJECT  LOCAL  DEFAULT    8 __func__.2854
   142: 00000000     0 FILE    LOCAL  DEFAULT  ABS exec.c
   143: c1004aa3    37 FUNC    LOCAL  DEFAULT    7 hash32
   144: c1004ac8   168 FUNC    LOCAL  DEFAULT    7 segment_load
   145: c1004b70   397 FUNC    LOCAL  DEFAULT    7 load
   146: 00000000     0 FILE    LOCAL  DEFAULT  ABS pic.c
   147: c100eb24     2 OBJECT  LOCAL  DEFAULT    9 irq_mask
   148: c1011cad     1 OBJECT  LOCAL  DEFAULT   10 did_init
   149: c1004daf    94 FUNC    LOCAL  DEFAULT    7 pic_setmask
   150: 00000000     0 FILE    LOCAL  DEFAULT  ABS serial.c
   151: c1011cae     1 OBJECT  LOCAL  DEFAULT   10 serial_exists
   152: 00000000     0 FILE    LOCAL  DEFAULT  ABS timer.c
   153: 00000000     0 FILE    LOCAL  DEFAULT  ABS vga.c
   154: c1011caf     1 OBJECT  LOCAL  DEFAULT   10 cursor_x
   155: c1011cb0     1 OBJECT  LOCAL  DEFAULT   10 cursor_y
   156: c100eb28     4 OBJECT  LOCAL  DEFAULT    9 vga_memory
   157: 00000000     0 FILE    LOCAL  DEFAULT  ABS sync.c
   158: c1005be0    37 FUNC    LOCAL  DEFAULT    7 hash32
   159: c100b82c    10 OBJECT  LOCAL  DEFAULT    8 __func__.2519
   160: 00000000     0 FILE    LOCAL  DEFAULT  ABS ide-dev.c
   161: c1005e71    40 FUNC    LOCAL  DEFAULT    7 waitdisk
   162: c1005e99    38 FUNC    LOCAL  DEFAULT    7 insl
   163: c1005ebf    38 FUNC    LOCAL  DEFAULT    7 outsl
   164: c1005ee5   186 FUNC    LOCAL  DEFAULT    7 ide_read_sect
   165: c1005f9f   186 FUNC    LOCAL  DEFAULT    7 ide_write_sect
   166: c10060d3    47 FUNC    LOCAL  DEFAULT    7 delay
   167: 00000000     0 FILE    LOCAL  DEFAULT  ABS fs.c
   168: c10061c2    37 FUNC    LOCAL  DEFAULT    7 hash32
   169: c10061e7  1171 FUNC    LOCAL  DEFAULT    7 partition_format
   170: c100693d    94 FUNC    LOCAL  DEFAULT    7 path_parse
   171: c100c03c    15 OBJECT  LOCAL  DEFAULT    8 __func__.2590
   172: c1006a23   656 FUNC    LOCAL  DEFAULT    7 search_file
   173: c100c04c    12 OBJECT  LOCAL  DEFAULT    8 __func__.2602
   174: c100c058     9 OBJECT  LOCAL  DEFAULT    8 __func__.2615
   175: c100c064    16 OBJECT  LOCAL  DEFAULT    8 __func__.2629
   176: c100c074     9 OBJECT  LOCAL  DEFAULT    8 __func__.2649
   177: c100c080    10 OBJECT  LOCAL  DEFAULT    8 __func__.2662
   178: c100c08c    11 OBJECT  LOCAL  DEFAULT    8 __func__.2674
   179: c100c098    10 OBJECT  LOCAL  DEFAULT    8 __func__.2704
   180: c100c0a4    12 OBJECT  LOCAL  DEFAULT    8 __func__.2715
   181: c100c0b0    12 OBJECT  LOCAL  DEFAULT    8 __func__.2726
   182: c100c0bc    10 OBJECT  LOCAL  DEFAULT    8 __func__.2735
   183: c1007ce8   184 FUNC    LOCAL  DEFAULT    7 get_parent_dir_inode_nr
   184: c100c0c8    24 OBJECT  LOCAL  DEFAULT    8 __func__.2748
   185: c1007da0   423 FUNC    LOCAL  DEFAULT    7 get_child_dir_name
   186: c100c0e0    11 OBJECT  LOCAL  DEFAULT    8 __func__.2777
   187: 00000000     0 FILE    LOCAL  DEFAULT  ABS dir.c
   188: c100c2d4    17 OBJECT  LOCAL  DEFAULT    8 __func__.2227
   189: c100c2e8    15 OBJECT  LOCAL  DEFAULT    8 __func__.2236
   190: c100c2f8    17 OBJECT  LOCAL  DEFAULT    8 __func__.2280
   191: c100c30c     9 OBJECT  LOCAL  DEFAULT    8 __func__.2309
   192: c100c318    11 OBJECT  LOCAL  DEFAULT    8 __func__.2324
   193: 00000000     0 FILE    LOCAL  DEFAULT  ABS file.c
   194: c10091bf    37 FUNC    LOCAL  DEFAULT    7 hash32
   195: c100c738    11 OBJECT  LOCAL  DEFAULT    8 __func__.2602
   196: c100c744    10 OBJECT  LOCAL  DEFAULT    8 __func__.2632
   197: 00000000     0 FILE    LOCAL  DEFAULT  ABS inode.c
   198: c100a3a9   114 FUNC    LOCAL  DEFAULT    7 inode_locate
   199: c100c80c    13 OBJECT  LOCAL  DEFAULT    8 __func__.2223
   200: c100c81c    14 OBJECT  LOCAL  DEFAULT    8 __func__.2231
   201: 00000000     0 FILE    LOCAL  DEFAULT  ABS pipe.c
   202: c100aa3d    37 FUNC    LOCAL  DEFAULT    7 hash32
   203: 00000000     0 FILE    LOCAL  DEFAULT  ABS ioqueue.c
   204: c100ac7e    37 FUNC    LOCAL  DEFAULT    7 hash32
   205: c100ace7    28 FUNC    LOCAL  DEFAULT    7 next_pos
   206: c100ad22    22 FUNC    LOCAL  DEFAULT    7 ioq_empty
   207: c100ad38    70 FUNC    LOCAL  DEFAULT    7 ioq_wait
   208: c100c894     9 OBJECT  LOCAL  DEFAULT    8 __func__.2538
   209: c100ad7e    66 FUNC    LOCAL  DEFAULT    7 wakeup
   210: c100c8a0     7 OBJECT  LOCAL  DEFAULT    8 __func__.2542
   211: c10017bf     0 NOTYPE  GLOBAL DEFAULT    7 vector242
   212: c1001216     0 NOTYPE  GLOBAL DEFAULT    7 vector119
   213: c10098ba  1890 FUNC    GLOBAL DEFAULT    7 file_write
   214: c10010f6     0 NOTYPE  GLOBAL DEFAULT    7 vector87
   215: c10010ed     0 NOTYPE  GLOBAL DEFAULT    7 vector86
   216: c1006f51   252 FUNC    GLOBAL DEFAULT    7 sys_close
   217: c100aeed    83 FUNC    GLOBAL DEFAULT    7 ioq_length
   218: c1009763   279 FUNC    GLOBAL DEFAULT    7 file_open
   219: c100182b     0 NOTYPE  GLOBAL DEFAULT    7 vector251
   220: c100021a    48 FUNC    GLOBAL DEFAULT    7 strcpy
   221: c100667a   707 FUNC    GLOBAL DEFAULT    7 mount_partition
   222: c1001ecb    25 FUNC    GLOBAL DEFAULT    7 kbd_intr
   223: c1000000    29 FUNC    GLOBAL DEFAULT    7 inb
   224: 40000811   913 FUNC    GLOBAL DEFAULT    3 my_shell
   225: c100111a     0 NOTYPE  GLOBAL DEFAULT    7 vector91
   226: c1000f10     0 NOTYPE  GLOBAL DEFAULT    7 vector33
   227: c1002326   534 FUNC    GLOBAL DEFAULT    7 test_vmm
   228: c10013ff     0 NOTYPE  GLOBAL DEFAULT    7 vector162
   229: 40000bce    33 FUNC    GLOBAL DEFAULT    3 user_memset
   230: c1001663     0 NOTYPE  GLOBAL DEFAULT    7 vector213
   231: 40000f16   195 FUNC    GLOBAL DEFAULT    3 make_clear_abs_path
   232: c10011b3     0 NOTYPE  GLOBAL DEFAULT    7 vector108
   233: c1000f6a     0 NOTYPE  GLOBAL DEFAULT    7 vector43
   234: c10035d4    53 FUNC    GLOBAL DEFAULT    7 get_task_name
   235: c1001423     0 NOTYPE  GLOBAL DEFAULT    7 vector165
   236: c10043aa    48 FUNC    GLOBAL DEFAULT    7 pte_ptr
   237: c1001513     0 NOTYPE  GLOBAL DEFAULT    7 vector185
   238: c10011f2     0 NOTYPE  GLOBAL DEFAULT    7 vector115
   239: c1003078    91 FUNC    GLOBAL DEFAULT    7 sys_free
   240: c1612000  4096 OBJECT  GLOBAL DEFAULT   10 new_pdt
   241: 4000037e   769 FUNC    GLOBAL DEFAULT    3 printf
   242: c1001231     0 NOTYPE  GLOBAL DEFAULT    7 vector122
   243: c100a62c   252 FUNC    GLOBAL DEFAULT    7 inode_delete
   244: c1007bb8    16 FUNC    GLOBAL DEFAULT    7 sys_rewinddir
   245: c1001d50   379 FUNC    GLOBAL DEFAULT    7 kbd_proc_data
   246: c10013b7     0 NOTYPE  GLOBAL DEFAULT    7 vector156
   247: c10017e3     0 NOTYPE  GLOBAL DEFAULT    7 vector245
   248: c1001543     0 NOTYPE  GLOBAL DEFAULT    7 vector189
   249: c1000e36     0 NOTYPE  GLOBAL DEFAULT    7 vector7
   250: c100100c     0 NOTYPE  GLOBAL DEFAULT    7 vector61
   251: c1000ebf     0 NOTYPE  GLOBAL DEFAULT    7 vector24
   252: 00107000  4096 OBJECT  GLOBAL DEFAULT    2 stack_pt
   253: c10011ce     0 NOTYPE  GLOBAL DEFAULT    7 vector111
   254: c10015c7     0 NOTYPE  GLOBAL DEFAULT    7 vector200
   255: c1007303   236 FUNC    GLOBAL DEFAULT    7 sys_lseek
   256: c1001ee4    97 FUNC    GLOBAL DEFAULT    7 kbd_init
   257: c1011cc0    12 OBJECT  GLOBAL DEFAULT   10 highmem_zone
   258: c100a53c   214 FUNC    GLOBAL DEFAULT    7 inode_open
   259: c1001042     0 NOTYPE  GLOBAL DEFAULT    7 vector67
   260: c100fc68     4 OBJECT  GLOBAL DEFAULT   10 shift
   261: 00105000  4096 OBJECT  GLOBAL DEFAULT    2 pt2
   262: c10012df     0 NOTYPE  GLOBAL DEFAULT    7 vector138
   263: c1001081     0 NOTYPE  GLOBAL DEFAULT    7 vector74
   264: c1000fe8     0 NOTYPE  GLOBAL DEFAULT    7 vector57
   265: c100514e    85 FUNC    GLOBAL DEFAULT    7 cons_intr
   266: c100542c   285 FUNC    GLOBAL DEFAULT    7 print_char
   267: c1000aa4   343 FUNC    GLOBAL DEFAULT    7 print_trapframe
   268: c100166f     0 NOTYPE  GLOBAL DEFAULT    7 vector214
   269: c1001162     0 NOTYPE  GLOBAL DEFAULT    7 vector99
   270: c100861d  1083 FUNC    GLOBAL DEFAULT    7 sync_dir_entry
   271: c1000dcf     0 NOTYPE  GLOBAL DEFAULT    7 __alltraps
   272: c1005b84    92 FUNC    GLOBAL DEFAULT    7 cons_getc
   273: c1001303     0 NOTYPE  GLOBAL DEFAULT    7 vector141
   274: 400014ad   146 FUNC    GLOBAL DEFAULT    3 buildin_mkdir
   275: c10093fd   132 FUNC    GLOBAL DEFAULT    7 bitmap_sync
   276: c1001477     0 NOTYPE  GLOBAL DEFAULT    7 vector172
   277: c10017b3     0 NOTYPE  GLOBAL DEFAULT    7 vector241
   278: c100760f  1082 FUNC    GLOBAL DEFAULT    7 sys_mkdir
   279: c1001843     0 NOTYPE  GLOBAL DEFAULT    7 vector253
   280: c1000e12     0 NOTYPE  GLOBAL DEFAULT    7 vector3
   281: c1000df1     0 NOTYPE  GLOBAL DEFAULT    7 forkrets
   282: c1000e09     0 NOTYPE  GLOBAL DEFAULT    7 vector2
   283: 00103000  4096 OBJECT  GLOBAL DEFAULT    2 pt
   284: c1003b41   408 FUNC    GLOBAL DEFAULT    7 do_fork
   285: c100170b     0 NOTYPE  GLOBAL DEFAULT    7 vector227
   286: c1003ce8    95 FUNC    GLOBAL DEFAULT    7 kernel_thread
   287: c100163f     0 NOTYPE  GLOBAL DEFAULT    7 vector210
   288: c10085b1   108 FUNC    GLOBAL DEFAULT    7 create_dir_entry
   289: c10016e7     0 NOTYPE  GLOBAL DEFAULT    7 vector224
   290: 400002d5    15 FUNC    GLOBAL DEFAULT    3 ps
   291: c1000f58     0 NOTYPE  GLOBAL DEFAULT    7 vector41
   292: 40000185    16 FUNC    GLOBAL DEFAULT    3 user_backtrace
   293: c1000ea4     0 NOTYPE  GLOBAL DEFAULT    7 vector21
   294: c10014b3     0 NOTYPE  GLOBAL DEFAULT    7 vector177
   295: c100120d     0 NOTYPE  GLOBAL DEFAULT    7 vector118
   296: c100105d     0 NOTYPE  GLOBAL DEFAULT    7 vector70
   297: c100db14     4 OBJECT  GLOBAL DEFAULT    9 highmem_end
   298: c1a14000     4 OBJECT  GLOBAL DEFAULT   10 task0
   299: c1006059    61 FUNC    GLOBAL DEFAULT    7 ide_read
   300: c1001054     0 NOTYPE  GLOBAL DEFAULT    7 vector69
   301: c1001783     0 NOTYPE  GLOBAL DEFAULT    7 vector237
   302: c1001027     0 NOTYPE  GLOBAL DEFAULT    7 vector64
   303: c1000eda     0 NOTYPE  GLOBAL DEFAULT    7 vector27
   304: c1001297     0 NOTYPE  GLOBAL DEFAULT    7 vector132
   305: c100151f     0 NOTYPE  GLOBAL DEFAULT    7 vector186
   306: c10071ac   343 FUNC    GLOBAL DEFAULT    7 sys_read
   307: c1001693     0 NOTYPE  GLOBAL DEFAULT    7 vector217
   308: c10049b5   178 FUNC    GLOBAL DEFAULT    7 sys_print_task
   309: c1004a67     0 NOTYPE  GLOBAL DEFAULT    7 kernel_thread_entry
   310: c1000108    22 FUNC    GLOBAL DEFAULT    7 memcpy
   311: c10090f7   200 FUNC    GLOBAL DEFAULT    7 dir_remove
   312: c1000e00     0 NOTYPE  GLOBAL DEFAULT    7 vector1
   313: c10014bf     0 NOTYPE  GLOBAL DEFAULT    7 vector178
   314: c1000f3d     0 NOTYPE  GLOBAL DEFAULT    7 vector38
   315: c10051a3    79 FUNC    GLOBAL DEFAULT    7 serial_proc_data
   316: c100178f     0 NOTYPE  GLOBAL DEFAULT    7 vector238
   317: 4000067f    30 FUNC    GLOBAL DEFAULT    3 print_prompt
   318: c100adc0   149 FUNC    GLOBAL DEFAULT    7 ioq_getchar
   319: c10091e4    69 FUNC    GLOBAL DEFAULT    7 get_free_slot_in_global
   320: c100036b    62 FUNC    GLOBAL DEFAULT    7 __PANIC
   321: c10005c3   194 FUNC    GLOBAL DEFAULT    7 readline
   322: c10012a3     0 NOTYPE  GLOBAL DEFAULT    7 vector133
   323: c1001078     0 NOTYPE  GLOBAL DEFAULT    7 vector73
   324: c1001327     0 NOTYPE  GLOBAL DEFAULT    7 vector144
   325: c1008a58  1186 FUNC    GLOBAL DEFAULT    7 delete_dir_entry
   326: c1011ce0 0x600000 OBJECT  GLOBAL DEFAULT   10 pp
   327: c100ae55   152 FUNC    GLOBAL DEFAULT    7 ioq_putchar
   328: c100024a    12 FUNC    GLOBAL DEFAULT    7 CPU_INVLPG
   329: c100184f     0 NOTYPE  GLOBAL DEFAULT    7 vector254
   330: 40000250    19 FUNC    GLOBAL DEFAULT    3 rewinddir
   331: c1001174     0 NOTYPE  GLOBAL DEFAULT    7 vector101
   332: c100164b     0 NOTYPE  GLOBAL DEFAULT    7 vector211
   333: c1613000 0x300000 OBJECT  GLOBAL DEFAULT   10 user_pt_highmem
   334: c100148f     0 NOTYPE  GLOBAL DEFAULT    7 vector174
   335: 400002e4    18 FUNC    GLOBAL DEFAULT    3 malloc
   336: c10017cb     0 NOTYPE  GLOBAL DEFAULT    7 vector243
   337: c100d040    56 OBJECT  GLOBAL DEFAULT    9 gdt
   338: 4000002f    35 FUNC    GLOBAL DEFAULT    3 test_fork
   339: c1001267     0 NOTYPE  GLOBAL DEFAULT    7 vector128
   340: c10010c0     0 NOTYPE  GLOBAL DEFAULT    7 vector81
   341: c1000e62     0 NOTYPE  GLOBAL DEFAULT    7 vector13
   342: c1011cb4    12 OBJECT  GLOBAL DEFAULT   10 user_sema
   343: c1000fb2     0 NOTYPE  GLOBAL DEFAULT    7 vector51
   344: c1000e79     0 NOTYPE  GLOBAL DEFAULT    7 vector16
   345: 00102000  4096 OBJECT  GLOBAL DEFAULT    2 pt_init
   346: 40001cc0   512 OBJECT  GLOBAL DEFAULT    6 cwd_cache
   347: c10017a7     0 NOTYPE  GLOBAL DEFAULT    7 vector240
   348: c1000fcd     0 NOTYPE  GLOBAL DEFAULT    7 vector54
   349: c1000e92     0 NOTYPE  GLOBAL DEFAULT    7 vector19
   350: c1002a13   252 FUNC    GLOBAL DEFAULT    7 pmm_alloc
   351: c1001123     0 NOTYPE  GLOBAL DEFAULT    7 vector92
   352: c1005216    85 FUNC    GLOBAL DEFAULT    7 serial_putc_sub
   353: c10017d7     0 NOTYPE  GLOBAL DEFAULT    7 vector244
   354: c10012f7     0 NOTYPE  GLOBAL DEFAULT    7 vector140
   355: c1000f7c     0 NOTYPE  GLOBAL DEFAULT    7 vector45
   356: c1008efa   469 FUNC    GLOBAL DEFAULT    7 dir_read
   357: c10010ae     0 NOTYPE  GLOBAL DEFAULT    7 vector79
   358: 40000fd9    96 FUNC    GLOBAL DEFAULT    3 buildin_pwd
   359: c1001723     0 NOTYPE  GLOBAL DEFAULT    7 vector229
   360: 4000023e    18 FUNC    GLOBAL DEFAULT    3 rmdir
   361: c10013cf     0 NOTYPE  GLOBAL DEFAULT    7 vector158
   362: c1004e0d    51 FUNC    GLOBAL DEFAULT    7 pic_enable
   363: c100223d   233 FUNC    GLOBAL DEFAULT    7 test_pmm
   364: 400002c3    18 FUNC    GLOBAL DEFAULT    3 readdir
   365: c1000f46     0 NOTYPE  GLOBAL DEFAULT    7 vector39
   366: c10006d2   232 FUNC    GLOBAL DEFAULT    7 gdt_init
   367: c1001447     0 NOTYPE  GLOBAL DEFAULT    7 vector168
   368: c1000f22     0 NOTYPE  GLOBAL DEFAULT    7 vector35
   369: c10011e0     0 NOTYPE  GLOBAL DEFAULT    7 vector113
   370: c10030d3    40 FUNC    GLOBAL DEFAULT    7 sys_mmap
   371: c100db10     4 OBJECT  GLOBAL DEFAULT    9 highmem_start
   372: c100124c     0 NOTYPE  GLOBAL DEFAULT    7 vector125
   373: c10090cf    40 FUNC    GLOBAL DEFAULT    7 dir_is_empty
   374: 4000167c     4 OBJECT  GLOBAL DEFAULT    4 argc
   375: c1009481   738 FUNC    GLOBAL DEFAULT    7 file_create
   376: c1a14228     4 OBJECT  GLOBAL DEFAULT   10 second
   377: 40000116    15 FUNC    GLOBAL DEFAULT    3 user_sys_getpid
   378: c1001687     0 NOTYPE  GLOBAL DEFAULT    7 vector216
   379: 400001f7    35 FUNC    GLOBAL DEFAULT    3 lseek
   380: c100101e     0 NOTYPE  GLOBAL DEFAULT    7 vector63
   381: c1000ed1     0 NOTYPE  GLOBAL DEFAULT    7 vector26
   382: c10051f2    36 FUNC    GLOBAL DEFAULT    7 serial_intr
   383: c1001573     0 NOTYPE  GLOBAL DEFAULT    7 vector193
   384: c1001597     0 NOTYPE  GLOBAL DEFAULT    7 vector196
   385: c1001633     0 NOTYPE  GLOBAL DEFAULT    7 vector209
   386: 4000031b    24 FUNC    GLOBAL DEFAULT    3 mmap
   387: c1000e1b     0 NOTYPE  GLOBAL DEFAULT    7 vector4
   388: c100613e   132 FUNC    GLOBAL DEFAULT    7 test_ide_io
   389: c100145f     0 NOTYPE  GLOBAL DEFAULT    7 vector170
   390: c1003dbd   165 FUNC    GLOBAL DEFAULT    7 schedule
   391: c10012c7     0 NOTYPE  GLOBAL DEFAULT    7 vector136
   392: c1000e4d     0 NOTYPE  GLOBAL DEFAULT    7 vector10
   393: c100160f     0 NOTYPE  GLOBAL DEFAULT    7 vector206
   394: c100185b     0 NOTYPE  GLOBAL DEFAULT    7 vector255
   395: c1002fbd    92 FUNC    GLOBAL DEFAULT    7 setup_pgdir
   396: c10014e3     0 NOTYPE  GLOBAL DEFAULT    7 vector181
   397: 400015d1   146 FUNC    GLOBAL DEFAULT    3 buildin_rm
   398: c1611ce0    12 OBJECT  GLOBAL DEFAULT   10 normal_zone
   399: c10082ed    14 FUNC    GLOBAL DEFAULT    7 fs_init
   400: c1000ffa     0 NOTYPE  GLOBAL DEFAULT    7 vector59
   401: c1a14234     4 OBJECT  GLOBAL DEFAULT   10 root_dir
   402: c100409a   296 FUNC    GLOBAL DEFAULT    7 copy_user_cr3
   403: c10010e4     0 NOTYPE  GLOBAL DEFAULT    7 vector85
   404: c10010db     0 NOTYPE  GLOBAL DEFAULT    7 vector84
   405: c1004a6c     0 NOTYPE  GLOBAL DEFAULT    7 switch_to
   406: c10014fb     0 NOTYPE  GLOBAL DEFAULT    7 vector183
   407: c10006bb    23 FUNC    GLOBAL DEFAULT    7 ltr
   408: c10013db     0 NOTYPE  GLOBAL DEFAULT    7 vector159
   409: c1001657     0 NOTYPE  GLOBAL DEFAULT    7 vector212
   410: c100aa62    52 FUNC    GLOBAL DEFAULT    7 is_pipe
   411: c1004692   803 FUNC    GLOBAL DEFAULT    7 user_task_init
   412: c1000f8e     0 NOTYPE  GLOBAL DEFAULT    7 vector47
   413: c1001717     0 NOTYPE  GLOBAL DEFAULT    7 vector228
   414: c1000f61     0 NOTYPE  GLOBAL DEFAULT    7 vector42
   415: c100043c    47 FUNC    GLOBAL DEFAULT    7 instr_hello
   416: 4000036c    18 FUNC    GLOBAL DEFAULT    3 pipe
   417: c10011e9     0 NOTYPE  GLOBAL DEFAULT    7 vector114
   418: c100149b     0 NOTYPE  GLOBAL DEFAULT    7 vector175
   419: c100131b     0 NOTYPE  GLOBAL DEFAULT    7 vector143
   420: c1002bdb   216 FUNC    GLOBAL DEFAULT    7 setup_vpt
   421: c100127f     0 NOTYPE  GLOBAL DEFAULT    7 vector130
   422: c10017ef     0 NOTYPE  GLOBAL DEFAULT    7 vector246
   423: c1000e46     0 NOTYPE  GLOBAL DEFAULT    7 vector9
   424: c100130f     0 NOTYPE  GLOBAL DEFAULT    7 vector142
   425: c100116b     0 NOTYPE  GLOBAL DEFAULT    7 vector100
   426: c100001d    31 FUNC    GLOBAL DEFAULT    7 inw
   427: c100838b   492 FUNC    GLOBAL DEFAULT    7 search_dir_entry
   428: c10015d3     0 NOTYPE  GLOBAL DEFAULT    7 vector201
   429: c1003fe0   186 FUNC    GLOBAL DEFAULT    7 set_user_cr3
   430: c1003e90   176 FUNC    GLOBAL DEFAULT    7 thread_unblock
   431: c1000196    63 FUNC    GLOBAL DEFAULT    7 strrchr
   432: c10007c6   491 FUNC    GLOBAL DEFAULT    7 idt_init
   433: 00101000  4096 OBJECT  GLOBAL DEFAULT    2 pdt
   434: c1002238     5 FUNC    GLOBAL DEFAULT    7 kernel_main
   435: c1001003     0 NOTYPE  GLOBAL DEFAULT    7 vector60
   436: c1000eb6     0 NOTYPE  GLOBAL DEFAULT    7 vector23
   437: c10052b1   124 FUNC    GLOBAL DEFAULT    7 timer_init
   438: c1007b83    53 FUNC    GLOBAL DEFAULT    7 sys_readdir
   439: c1001777     0 NOTYPE  GLOBAL DEFAULT    7 vector236
   440: c1002b0f   167 FUNC    GLOBAL DEFAULT    7 pmm_free
   441: 400001df    24 FUNC    GLOBAL DEFAULT    3 write
   442: c1006cb3   604 FUNC    GLOBAL DEFAULT    7 sys_open
   443: c100173b     0 NOTYPE  GLOBAL DEFAULT    7 vector231
   444: c10056ff   178 FUNC    GLOBAL DEFAULT    7 backtrace
   445: c1001039     0 NOTYPE  GLOBAL DEFAULT    7 vector66
   446: c1000eec     0 NOTYPE  GLOBAL DEFAULT    7 vector29
   447: c10012bb     0 NOTYPE  GLOBAL DEFAULT    7 vector135
   448: 40000d3e    48 FUNC    GLOBAL DEFAULT    3 user_strcpy
   449: c10053b4   120 FUNC    GLOBAL DEFAULT    7 clear
   450: 00106000  4096 OBJECT  GLOBAL DEFAULT    2 pt3
   451: c100109c     0 NOTYPE  GLOBAL DEFAULT    7 vector77
   452: c100046b   125 FUNC    GLOBAL DEFAULT    7 instr_help
   453: c10001d5    69 FUNC    GLOBAL DEFAULT    7 strcat
   454: c10014d7     0 NOTYPE  GLOBAL DEFAULT    7 vector180
   455: c1001627     0 NOTYPE  GLOBAL DEFAULT    7 vector208
   456: c10004e8   193 FUNC    GLOBAL DEFAULT    7 instr_game
   457: c1001159     0 NOTYPE  GLOBAL DEFAULT    7 vector98
   458: c1001150     0 NOTYPE  GLOBAL DEFAULT    7 vector97
   459: c1002ed0   237 FUNC    GLOBAL DEFAULT    7 vmm_map
   460: c1006f0f    66 FUNC    GLOBAL DEFAULT    7 fd_local2global
   461: c10014a7     0 NOTYPE  GLOBAL DEFAULT    7 vector176
   462: c100157f     0 NOTYPE  GLOBAL DEFAULT    7 vector194
   463: c1000f07     0 NOTYPE  GLOBAL DEFAULT    7 vector32
   464: 40000278    18 FUNC    GLOBAL DEFAULT    3 chdir
   465: c10015bb     0 NOTYPE  GLOBAL DEFAULT    7 vector199
   466: c1003f9c    24 FUNC    GLOBAL DEFAULT    7 do_exit
   467: 40000cc3    40 FUNC    GLOBAL DEFAULT    3 user_strlen
   468: c100128b     0 NOTYPE  GLOBAL DEFAULT    7 vector131
   469: c1001837     0 NOTYPE  GLOBAL DEFAULT    7 vector252
   470: c1000df7     0 NOTYPE  GLOBAL DEFAULT    7 vector0
   471: c1003e62    46 FUNC    GLOBAL DEFAULT    7 thread_block
   472: c1005b46    62 FUNC    GLOBAL DEFAULT    7 cons_putc
   473: 40000333    21 FUNC    GLOBAL DEFAULT    3 exec
   474: c1001333     0 NOTYPE  GLOBAL DEFAULT    7 vector145
   475: c1a14004     4 OBJECT  GLOBAL DEFAULT   10 task1
   476: c100704d   351 FUNC    GLOBAL DEFAULT    7 sys_write
   477: c10011aa     0 NOTYPE  GLOBAL DEFAULT    7 vector107
   478: c1000f4f     0 NOTYPE  GLOBAL DEFAULT    7 vector40
   479: 40000348    18 FUNC    GLOBAL DEFAULT    3 wait
   480: c1000d6c    31 FUNC    GLOBAL DEFAULT    7 intr_enable
   481: c100117d     0 NOTYPE  GLOBAL DEFAULT    7 vector102
   482: c100a01c   909 FUNC    GLOBAL DEFAULT    7 file_read
   483: 40000156    47 FUNC    GLOBAL DEFAULT    3 user_print_num
   484: c1000fdf     0 NOTYPE  GLOBAL DEFAULT    7 vector56
   485: 40000c84    63 FUNC    GLOBAL DEFAULT    3 user_strrchr
   486: c100104b     0 NOTYPE  GLOBAL DEFAULT    7 vector68
   487: c100db20  4100 OBJECT  GLOBAL DEFAULT    9 task_pidmap
   488: c1000e2d     0 NOTYPE  GLOBAL DEFAULT    7 vector6
   489: c1001273     0 NOTYPE  GLOBAL DEFAULT    7 vector129
   490: c100ad03    31 FUNC    GLOBAL DEFAULT    7 ioq_full
   491: c1a143c0     0 NOTYPE  GLOBAL DEFAULT   10 kernel_end
   492: c10015a3     0 NOTYPE  GLOBAL DEFAULT    7 vector197
   493: 40000195    24 FUNC    GLOBAL DEFAULT    3 read
   494: c1005095   115 FUNC    GLOBAL DEFAULT    7 lpt_putc_sub
   495: c100526b    70 FUNC    GLOBAL DEFAULT    7 serial_putc
   496: c1001387     0 NOTYPE  GLOBAL DEFAULT    7 vector152
   497: c1007b56    45 FUNC    GLOBAL DEFAULT    7 sys_closedir
   498: c100d100     0 NOTYPE  GLOBAL DEFAULT    9 __vectors
   499: c100172f     0 NOTYPE  GLOBAL DEFAULT    7 vector230
   500: c1000f34     0 NOTYPE  GLOBAL DEFAULT    7 vector37
   501: c1001603     0 NOTYPE  GLOBAL DEFAULT    7 vector205
   502: c10013f3     0 NOTYPE  GLOBAL DEFAULT    7 vector161
   503: c1a14008     4 OBJECT  GLOBAL DEFAULT   10 current
   504: 4000021a    18 FUNC    GLOBAL DEFAULT    3 unlink
   505: c1001066     0 NOTYPE  GLOBAL DEFAULT    7 vector71
   506: c10013e7     0 NOTYPE  GLOBAL DEFAULT    7 vector160
   507: c1005108    70 FUNC    GLOBAL DEFAULT    7 lpt_putc
   508: c100167b     0 NOTYPE  GLOBAL DEFAULT    7 vector215
   509: c10041c2   108 FUNC    GLOBAL DEFAULT    7 list_traversal
   510: c10013c3     0 NOTYPE  GLOBAL DEFAULT    7 vector157
   511: 00109000     0 NOTYPE  GLOBAL DEFAULT    2 init_end
   512: c1000d8b    32 FUNC    GLOBAL DEFAULT    7 intr_disable
   513: c10009e4   192 FUNC    GLOBAL DEFAULT    7 print_regs
   514: c10011d7     0 NOTYPE  GLOBAL DEFAULT    7 vector112
   515: 40000c71    19 FUNC    GLOBAL DEFAULT    3 user_strcmp
   516: 40001488    37 FUNC    GLOBAL DEFAULT    3 buildin_ps
   517: c1000256    12 FUNC    GLOBAL DEFAULT    7 lcr3
   518: c1913000 0x20000 OBJECT  GLOBAL DEFAULT   10 pt_highmem
   519: c10014ef     0 NOTYPE  GLOBAL DEFAULT    7 vector182
   520: c100359f    53 FUNC    GLOBAL DEFAULT    7 set_task_name
   521: c1000e5b     0 NOTYPE  GLOBAL DEFAULT    7 vector12
   522: c1000262    94 FUNC    GLOBAL DEFAULT    7 memcmp
   523: 40000143    19 FUNC    GLOBAL DEFAULT    3 user_print_string
   524: c10011bc     0 NOTYPE  GLOBAL DEFAULT    7 vector109
   525: c1000e9b     0 NOTYPE  GLOBAL DEFAULT    7 vector20
   526: c1000d41     7 FUNC    GLOBAL DEFAULT    7 disable_interupt
   527: 4000030c    15 FUNC    GLOBAL DEFAULT    3 fork
   528: c10057b1   917 FUNC    GLOBAL DEFAULT    7 printk
   529: c1000fc4     0 NOTYPE  GLOBAL DEFAULT    7 vector53
   530: c1000e89     0 NOTYPE  GLOBAL DEFAULT    7 vector18
   531: 00100000   501 FUNC    GLOBAL DEFAULT    1 init
   532: c100987a    64 FUNC    GLOBAL DEFAULT    7 file_close
   533: c100113e     0 NOTYPE  GLOBAL DEFAULT    7 vector95
   534: c100abed   145 FUNC    GLOBAL DEFAULT    7 pipe_write
   535: c10025da    25 FUNC    GLOBAL DEFAULT    7 test_user
   536: c1003fb4    10 FUNC    GLOBAL DEFAULT    7 do_execve
   537: c10016ff     0 NOTYPE  GLOBAL DEFAULT    7 vector226
   538: c1a14230     4 OBJECT  GLOBAL DEFAULT   10 cur_part
   539: c1000fa0     0 NOTYPE  GLOBAL DEFAULT    7 vector49
   540: c1000f73     0 NOTYPE  GLOBAL DEFAULT    7 vector44
   541: 40000d28    22 FUNC    GLOBAL DEFAULT    3 user_memcpy
   542: c10010a5     0 NOTYPE  GLOBAL DEFAULT    7 vector78
   543: c1001483     0 NOTYPE  GLOBAL DEFAULT    7 vector173
   544: c100003c    33 FUNC    GLOBAL DEFAULT    7 outb
   545: c1001204     0 NOTYPE  GLOBAL DEFAULT    7 vector117
   546: c10010c9     0 NOTYPE  GLOBAL DEFAULT    7 vector82
   547: c10016cf     0 NOTYPE  GLOBAL DEFAULT    7 vector222
   548: c1000e3f     0 NOTYPE  GLOBAL DEFAULT    7 vector8
   549: c1001363     0 NOTYPE  GLOBAL DEFAULT    7 vector149
   550: c10000aa    33 FUNC    GLOBAL DEFAULT    7 memset
   551: c1005c05    54 FUNC    GLOBAL DEFAULT    7 sema_init
   552: c1005d45   148 FUNC    GLOBAL DEFAULT    7 sema_up
   553: c1001747     0 NOTYPE  GLOBAL DEFAULT    7 vector232
   554: c1001f6a   168 FUNC    GLOBAL DEFAULT    7 main
   555: c1005dd9    79 FUNC    GLOBAL DEFAULT    7 lock_acquire
   556: c10011a1     0 NOTYPE  GLOBAL DEFAULT    7 vector106
   557: c10016b7     0 NOTYPE  GLOBAL DEFAULT    7 vector220
   558: 40001ec0   512 OBJECT  GLOBAL DEFAULT    6 final_path
   559: c1001111     0 NOTYPE  GLOBAL DEFAULT    7 vector90
   560: c100140b     0 NOTYPE  GLOBAL DEFAULT    7 vector163
   561: c100175f     0 NOTYPE  GLOBAL DEFAULT    7 vector234
   562: c10073ef   544 FUNC    GLOBAL DEFAULT    7 sys_unlink
   563: c1001015     0 NOTYPE  GLOBAL DEFAULT    7 vector62
   564: c1000ec8     0 NOTYPE  GLOBAL DEFAULT    7 vector25
   565: c10015af     0 NOTYPE  GLOBAL DEFAULT    7 vector198
   566: c1005c3b    42 FUNC    GLOBAL DEFAULT    7 lock_init
   567: c100121f     0 NOTYPE  GLOBAL DEFAULT    7 vector120
   568: c10082fb    80 FUNC    GLOBAL DEFAULT    7 open_root_dir
   569: c1003019    95 FUNC    GLOBAL DEFAULT    7 sys_malloc
   570: c1005c65   224 FUNC    GLOBAL DEFAULT    7 sema_down
   571: c1001cd9   119 FUNC    GLOBAL DEFAULT    7 syscall_trap
   572: c10005a9    26 FUNC    GLOBAL DEFAULT    7 getchar
   573: c1000d48     7 FUNC    GLOBAL DEFAULT    7 enable_interupt
   574: 4000029f    18 FUNC    GLOBAL DEFAULT    3 opendir
   575: c1000fa9     0 NOTYPE  GLOBAL DEFAULT    7 vector50
   576: c1000e70     0 NOTYPE  GLOBAL DEFAULT    7 vector15
   577: c1005e28    73 FUNC    GLOBAL DEFAULT    7 lock_release
   578: 00104000  4096 OBJECT  GLOBAL DEFAULT    2 pt1
   579: 40001039   138 FUNC    GLOBAL DEFAULT    3 buildin_cd
   580: c1000d4f    29 FUNC    GLOBAL DEFAULT    7 get_now_intr_status
   581: c100137b     0 NOTYPE  GLOBAL DEFAULT    7 vector151
   582: c10010d2     0 NOTYPE  GLOBAL DEFAULT    7 vector83
   583: c1001108     0 NOTYPE  GLOBAL DEFAULT    7 vector89
   584: c10010ff     0 NOTYPE  GLOBAL DEFAULT    7 vector88
   585: c1000d2a    23 FUNC    GLOBAL DEFAULT    7 trap
   586: c10014cb     0 NOTYPE  GLOBAL DEFAULT    7 vector179
   587: c1000f19     0 NOTYPE  GLOBAL DEFAULT    7 vector34
   588: c1000f85     0 NOTYPE  GLOBAL DEFAULT    7 vector46
   589: c1000183    19 FUNC    GLOBAL DEFAULT    7 strcmp
   590: c1000dab    19 FUNC    GLOBAL DEFAULT    7 intr_save
   591: c10012af     0 NOTYPE  GLOBAL DEFAULT    7 vector134
   592: c1004fa9   236 FUNC    GLOBAL DEFAULT    7 serial_init
   593: c10016db     0 NOTYPE  GLOBAL DEFAULT    7 vector223
   594: c1a1422c     4 OBJECT  GLOBAL DEFAULT   10 jiffies
   595: c1003120   878 FUNC    GLOBAL DEFAULT    7 kernel_task_init
   596: c1007f47   493 FUNC    GLOBAL DEFAULT    7 sys_getcwd
   597: 40000263    21 FUNC    GLOBAL DEFAULT    3 getcwd
   598: c1004f60    73 FUNC    GLOBAL DEFAULT    7 delay
   599: c100a728   709 FUNC    GLOBAL DEFAULT    7 inode_release
   600: c100169f     0 NOTYPE  GLOBAL DEFAULT    7 vector218
   601: c100699b   136 FUNC    GLOBAL DEFAULT    7 path_depth_cnt
   602: c10003e2    90 FUNC    GLOBAL DEFAULT    7 run
   603: c100422e   380 FUNC    GLOBAL DEFAULT    7 task_exit
   604: c1004cfd   178 FUNC    GLOBAL DEFAULT    7 sys_execv
   605: c100532d   135 FUNC    GLOBAL DEFAULT    7 print_cursor
   606: c1004e40   288 FUNC    GLOBAL DEFAULT    7 pic_init
   607: c10016f3     0 NOTYPE  GLOBAL DEFAULT    7 vector225
   608: c100152b     0 NOTYPE  GLOBAL DEFAULT    7 vector187
   609: c1000dbe    17 FUNC    GLOBAL DEFAULT    7 intr_restore
   610: c10025f3  1056 FUNC    GLOBAL DEFAULT    7 pmm_init
   611: c1611cec    12 OBJECT  GLOBAL DEFAULT   10 dma_zone
   612: c100fc70     4 OBJECT  GLOBAL DEFAULT   10 test_user_task
   613: c1000ef5     0 NOTYPE  GLOBAL DEFAULT    7 vector30
   614: c100125e     0 NOTYPE  GLOBAL DEFAULT    7 vector127
   615: c1001567     0 NOTYPE  GLOBAL DEFAULT    7 vector192
   616: c100142f     0 NOTYPE  GLOBAL DEFAULT    7 vector166
   617: c1001093     0 NOTYPE  GLOBAL DEFAULT    7 vector76
   618: c100108a     0 NOTYPE  GLOBAL DEFAULT    7 vector75
   619: c100158b     0 NOTYPE  GLOBAL DEFAULT    7 vector195
   620: c100136f     0 NOTYPE  GLOBAL DEFAULT    7 vector150
   621: c1000ff1     0 NOTYPE  GLOBAL DEFAULT    7 vector58
   622: c1001807     0 NOTYPE  GLOBAL DEFAULT    7 vector248
   623: c100123a     0 NOTYPE  GLOBAL DEFAULT    7 vector123
   624: c1001147     0 NOTYPE  GLOBAL DEFAULT    7 vector96
   625: c100a41b   289 FUNC    GLOBAL DEFAULT    7 inode_sync
   626: c1000efe     0 NOTYPE  GLOBAL DEFAULT    7 vector31
   627: c10015eb     0 NOTYPE  GLOBAL DEFAULT    7 vector203
   628: c1002cb3   293 FUNC    GLOBAL DEFAULT    7 vmm_malloc
   629: c100fc74     4 OBJECT  GLOBAL DEFAULT   10 offset
   630: c1005580   383 FUNC    GLOBAL DEFAULT    7 print_num
   631: c10012eb     0 NOTYPE  GLOBAL DEFAULT    7 vector139
   632: c1001393     0 NOTYPE  GLOBAL DEFAULT    7 vector153
   633: c1001417     0 NOTYPE  GLOBAL DEFAULT    7 vector164
   634: c1001228     0 NOTYPE  GLOBAL DEFAULT    7 vector121
   635: c1000e24     0 NOTYPE  GLOBAL DEFAULT    7 vector5
   636: c100143b     0 NOTYPE  GLOBAL DEFAULT    7 vector167
   637: c10013ab     0 NOTYPE  GLOBAL DEFAULT    7 vector155
   638: c1001813     0 NOTYPE  GLOBAL DEFAULT    7 vector249
   639: c100005d    33 FUNC    GLOBAL DEFAULT    7 outw
   640: c100181f     0 NOTYPE  GLOBAL DEFAULT    7 vector250
   641: c100834b    64 FUNC    GLOBAL DEFAULT    7 dir_open
   642: c1001243     0 NOTYPE  GLOBAL DEFAULT    7 vector124
   643: c10011c5     0 NOTYPE  GLOBAL DEFAULT    7 vector110
   644: c100d000    36 OBJECT  GLOBAL DEFAULT    9 instr_list
   645: c10015f7     0 NOTYPE  GLOBAL DEFAULT    7 vector204
   646: 4000028a    21 FUNC    GLOBAL DEFAULT    3 stat
   647: c1000de6     0 NOTYPE  GLOBAL DEFAULT    7 __trapret
   648: c10002c0   171 FUNC    GLOBAL DEFAULT    7 print_seg
   649: c10012d3     0 NOTYPE  GLOBAL DEFAULT    7 vector137
   650: c1933000     4 OBJECT  GLOBAL DEFAULT   10 highmem_ptr
   651: c1007a49   269 FUNC    GLOBAL DEFAULT    7 sys_opendir
   652: c10017fb     0 NOTYPE  GLOBAL DEFAULT    7 vector247
   653: c1000ead     0 NOTYPE  GLOBAL DEFAULT    7 vector22
   654: c1005549    55 FUNC    GLOBAL DEFAULT    7 print_string
   655: c10015df     0 NOTYPE  GLOBAL DEFAULT    7 vector202
   656: c100106f     0 NOTYPE  GLOBAL DEFAULT    7 vector72
   657: c1000fd6     0 NOTYPE  GLOBAL DEFAULT    7 vector55
   658: c1001255     0 NOTYPE  GLOBAL DEFAULT    7 vector126
   659: c1001030     0 NOTYPE  GLOBAL DEFAULT    7 vector65
   660: c1000ee3     0 NOTYPE  GLOBAL DEFAULT    7 vector28
   661: c1001453     0 NOTYPE  GLOBAL DEFAULT    7 vector169
   662: c1001753     0 NOTYPE  GLOBAL DEFAULT    7 vector233
   663: 40000052   104 FUNC    GLOBAL DEFAULT    3 user_main
   664: c100aca3    68 FUNC    GLOBAL DEFAULT    7 ioqueue_init
   665: 40000125    30 FUNC    GLOBAL DEFAULT    3 user_print_char
   666: c100ab6a   131 FUNC    GLOBAL DEFAULT    7 pipe_read
   667: c10009b1    14 FUNC    GLOBAL DEFAULT    7 set_ts_esp0
   668: 4000035a    18 FUNC    GLOBAL DEFAULT    3 exit
   669: c1004555   166 FUNC    GLOBAL DEFAULT    7 sys_wait
   670: c10045fb   151 FUNC    GLOBAL DEFAULT    7 sys_exit
   671: c100134b     0 NOTYPE  GLOBAL DEFAULT    7 vector147
   672: 40002180     0 NOTYPE  GLOBAL DEFAULT    6 user_end
   673: c100118f     0 NOTYPE  GLOBAL DEFAULT    7 vector104
   674: c10011fb     0 NOTYPE  GLOBAL DEFAULT    7 vector116
   675: c1002dd8   248 FUNC    GLOBAL DEFAULT    7 vmm_free
   676: c100a9ed    80 FUNC    GLOBAL DEFAULT    7 inode_init
   677: c1a1400c     4 OBJECT  GLOBAL DEFAULT   10 user_task
   678: c1a14240   384 OBJECT  GLOBAL DEFAULT   10 file_table
   679: c1000fbb     0 NOTYPE  GLOBAL DEFAULT    7 vector52
   680: c1000e82     0 NOTYPE  GLOBAL DEFAULT    7 vector17
   681: c1001507     0 NOTYPE  GLOBAL DEFAULT    7 vector184
   682: c10043da   246 FUNC    GLOBAL DEFAULT    7 release_prog_resource
   683: c100011e    40 FUNC    GLOBAL DEFAULT    7 strlen
   684: 40001663    25 FUNC    GLOBAL DEFAULT    3 buildin_help
   685: 400001ad    32 FUNC    GLOBAL DEFAULT    3 open
   686: c100aa96   212 FUNC    GLOBAL DEFAULT    7 sys_pipe
   687: c1007bc8   288 FUNC    GLOBAL DEFAULT    7 sys_rmdir
   688: c100161b     0 NOTYPE  GLOBAL DEFAULT    7 vector207
   689: c100154f     0 NOTYPE  GLOBAL DEFAULT    7 vector190
   690: c1008134   300 FUNC    GLOBAL DEFAULT    7 sys_stat
   691: c100179b     0 NOTYPE  GLOBAL DEFAULT    7 vector239
   692: c1001135     0 NOTYPE  GLOBAL DEFAULT    7 vector94
   693: c100112c     0 NOTYPE  GLOBAL DEFAULT    7 vector93
   694: c1001537     0 NOTYPE  GLOBAL DEFAULT    7 vector188
   695: 400010c3   965 FUNC    GLOBAL DEFAULT    3 buildin_ls
   696: c1000f97     0 NOTYPE  GLOBAL DEFAULT    7 vector48
   697: 4000153f   146 FUNC    GLOBAL DEFAULT    3 buildin_rmdir
   698: c10016ab     0 NOTYPE  GLOBAL DEFAULT    7 vector219
   699: c1a14020   520 OBJECT  GLOBAL DEFAULT   10 cons
   700: c1001357     0 NOTYPE  GLOBAL DEFAULT    7 vector148
   701: c10016c3     0 NOTYPE  GLOBAL DEFAULT    7 vector221
   702: 400002b1    18 FUNC    GLOBAL DEFAULT    3 closedir
   703: c1006102    60 FUNC    GLOBAL DEFAULT    7 read_main_partition
   704: c10010b7     0 NOTYPE  GLOBAL DEFAULT    7 vector80
   705: c100146b     0 NOTYPE  GLOBAL DEFAULT    7 vector171
   706: c100139f     0 NOTYPE  GLOBAL DEFAULT    7 vector154
   707: c100fc6c     1 OBJECT  GLOBAL DEFAULT   10 shell_input
   708: c1000f2b     0 NOTYPE  GLOBAL DEFAULT    7 vector36
   709: c100eb2c     0 NOTYPE  GLOBAL DEFAULT    9 kernel_bss
   710: c100176b     0 NOTYPE  GLOBAL DEFAULT    7 vector235
   711: c1001198     0 NOTYPE  GLOBAL DEFAULT    7 vector105
   712: c1008260   141 FUNC    GLOBAL DEFAULT    7 sys_chdir
   713: 40000bef    69 FUNC    GLOBAL DEFAULT    3 user_strcat
   714: c1008577    58 FUNC    GLOBAL DEFAULT    7 dir_close
   715: 00108000  4096 OBJECT  GLOBAL DEFAULT    2 user_pt
   716: c100253c    13 FUNC    GLOBAL DEFAULT    7 test_schedule
   717: 4000022c    18 FUNC    GLOBAL DEFAULT    3 mkdir
   718: c100133f     0 NOTYPE  GLOBAL DEFAULT    7 vector146
   719: c100926f   192 FUNC    GLOBAL DEFAULT    7 inode_bitmap_alloc
   720: c100155b     0 NOTYPE  GLOBAL DEFAULT    7 vector191
   721: 400001cd    18 FUNC    GLOBAL DEFAULT    3 close
   722: c1001186     0 NOTYPE  GLOBAL DEFAULT    7 vector103
   723: c10003a9    57 FUNC    GLOBAL DEFAULT    7 monitor
   724: c1006096    61 FUNC    GLOBAL DEFAULT    7 ide_write
   725: c1009229    70 FUNC    GLOBAL DEFAULT    7 task_fd_install
   726: c100a612    26 FUNC    GLOBAL DEFAULT    7 inode_close
   727: 400002f6    22 FUNC    GLOBAL DEFAULT    3 free
   728: c100932f   206 FUNC    GLOBAL DEFAULT    7 block_bitmap_alloc
   729: c1934000 0xe0000 OBJECT  GLOBAL DEFAULT   10 pt_dma_nomal
   730: c1000e54     0 NOTYPE  GLOBAL DEFAULT    7 vector11
   731: c1000e69     0 NOTYPE  GLOBAL DEFAULT    7 vector14

No version information found in this file.
