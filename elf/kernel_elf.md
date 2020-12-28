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
  Start of section headers:          241656 (bytes into file)
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
  [ 3] .user.text        PROGBITS        40000000 019000 00167c 00  AX  0   0  1
  [ 4] .user.data        PROGBITS        4000167c 01a67c 000004 00  WA  0   0  4
  [ 5] .user.rodata      PROGBITS        40001680 01a680 000623 00   A  0   0  4
  [ 6] .user.bss         NOBITS          40001cc0 01aca3 0004c0 00  WA  0   0 32
  [ 7] .text             PROGBITS        c1000000 00a000 00b07d 00  AX  0   0  1
  [ 8] .rodata           PROGBITS        c100b080 015080 001acf 00   A  0   0  4
  [ 9] .data             PROGBITS        c100d000 017000 001b2c 00  WA  0   0 32
  [10] .bss              NOBITS          c100f000 018b2c a053c0 00  WA  0   0 4096
  [11] .debug_info       PROGBITS        00000000 01aca3 00c980 00      0   0  1
  [12] .debug_abbrev     PROGBITS        00000000 027623 003391 00      0   0  1
  [13] .debug_aranges    PROGBITS        00000000 02a9b4 000400 00      0   0  1
  [14] .debug_ranges     PROGBITS        00000000 02adb4 000060 00      0   0  1
  [15] .debug_line       PROGBITS        00000000 02ae14 00664f 00      0   0  1
  [16] .debug_str        PROGBITS        00000000 031463 002a80 01  MS  0   0  1
  [17] .comment          PROGBITS        00000000 033ee3 000011 01  MS  0   0  1
  [18] .stab             PROGBITS        00000000 033ef4 002610 0c     19   0  4
  [19] .stabstr          STRTAB          00000000 036504 0001d4 00      0   0  1
  [20] .symtab           SYMTAB          00000000 0366d8 002dd0 10     21 212  4
  [21] .strtab           STRTAB          00000000 0394a8 001a89 00      0   0  1
  [22] .shstrtab         STRTAB          00000000 03af31 0000c4 00      0   0  1
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
  LOAD           0x00a000 0xc1000000 0x01000000 0x0cb4f 0x0cb4f R E 0x1000
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

Symbol table '.symtab' contains 733 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00100000     0 SECTION LOCAL  DEFAULT    1 
     2: 00101000     0 SECTION LOCAL  DEFAULT    2 
     3: 40000000     0 SECTION LOCAL  DEFAULT    3 
     4: 4000167c     0 SECTION LOCAL  DEFAULT    4 
     5: 40001680     0 SECTION LOCAL  DEFAULT    5 
     6: 40001cc0     0 SECTION LOCAL  DEFAULT    6 
     7: c1000000     0 SECTION LOCAL  DEFAULT    7 
     8: c100b080     0 SECTION LOCAL  DEFAULT    8 
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
    21: c100b0ec     5 OBJECT  LOCAL  DEFAULT    8 __func__.1906
    22: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_main.c
    23: 40000000    47 FUNC    LOCAL  DEFAULT    3 delay
    24: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_syscall.c
    25: 400000ba    92 FUNC    LOCAL  DEFAULT    3 user_syscall
    26: 00000000     0 FILE    LOCAL  DEFAULT  ABS stdio.c
    27: 00000000     0 FILE    LOCAL  DEFAULT  ABS shell.c
    28: 400020c0   128 OBJECT  LOCAL  DEFAULT    6 cmd_line
    29: 40002140    64 OBJECT  LOCAL  DEFAULT    6 argv
    30: 4000069d   176 FUNC    LOCAL  DEFAULT    3 user_readline
    31: 4000074d   196 FUNC    LOCAL  DEFAULT    3 cmd_parse
    32: 00000000     0 FILE    LOCAL  DEFAULT  ABS string.c
    33: 40000ba2    44 FUNC    LOCAL  DEFAULT    3 __memset
    34: 40000c34    61 FUNC    LOCAL  DEFAULT    3 __strcmp
    35: 40000ceb    61 FUNC    LOCAL  DEFAULT    3 __memcpy
    36: 00000000     0 FILE    LOCAL  DEFAULT  ABS buildin_cmd.c
    37: 40000d6e    94 FUNC    LOCAL  DEFAULT    3 path_parse
    38: 40000dcc   330 FUNC    LOCAL  DEFAULT    3 wash_path
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
    90: c1001cb6    35 FUNC    LOCAL  DEFAULT    7 syscall_pipe
    91: c100d500   236 OBJECT  LOCAL  DEFAULT    9 syscalls
    92: 00000000     0 FILE    LOCAL  DEFAULT  ABS keyboard.c
    93: c100d600   256 OBJECT  LOCAL  DEFAULT    9 shiftcode
    94: c100d700   256 OBJECT  LOCAL  DEFAULT    9 togglecode
    95: c100d800   256 OBJECT  LOCAL  DEFAULT    9 normalmap
    96: c100d900   256 OBJECT  LOCAL  DEFAULT    9 shiftmap
    97: c100da00   256 OBJECT  LOCAL  DEFAULT    9 ctlmap
    98: c100db00    16 OBJECT  LOCAL  DEFAULT    9 charcode
    99: 00000000     0 FILE    LOCAL  DEFAULT  ABS main.c
   100: c1001f45    37 FUNC    LOCAL  DEFAULT    7 hash32
   101: c1002012   550 FUNC    LOCAL  DEFAULT    7 write2fs
   102: c1002549    49 FUNC    LOCAL  DEFAULT    7 print_task1
   103: c10025ab    47 FUNC    LOCAL  DEFAULT    7 delay
   104: c100257a    49 FUNC    LOCAL  DEFAULT    7 print_task2
   105: 00000000     0 FILE    LOCAL  DEFAULT  ABS pmm.c
   106: 00000000     0 FILE    LOCAL  DEFAULT  ABS vmm.c
   107: c1002bb6    37 FUNC    LOCAL  DEFAULT    7 hash32
   108: 00000000     0 FILE    LOCAL  DEFAULT  ABS task.c
   109: c10030fb    37 FUNC    LOCAL  DEFAULT    7 hash32
   110: c100fc80  8192 OBJECT  LOCAL  DEFAULT   10 hash_list
   111: c1011c80     4 OBJECT  LOCAL  DEFAULT   10 last_pid
   112: c1011c84     8 OBJECT  LOCAL  DEFAULT   10 ready_task_list
   113: c1011c8c     8 OBJECT  LOCAL  DEFAULT   10 all_task_list
   114: c1011c94     4 OBJECT  LOCAL  DEFAULT   10 nr_task
   115: c1003809   247 FUNC    LOCAL  DEFAULT    7 alloc_task
   116: c1003900    29 FUNC    LOCAL  DEFAULT    7 forkret
   117: c100360a    80 FUNC    LOCAL  DEFAULT    7 add_link
   118: c100365a    80 FUNC    LOCAL  DEFAULT    7 add_all_link
   119: c10036dd   122 FUNC    LOCAL  DEFAULT    7 add_pid_hash
   120: c1003cda    15 FUNC    LOCAL  DEFAULT    7 wakeup_task
   121: c100348f    43 FUNC    LOCAL  DEFAULT    7 set_pid_bit
   122: c10034ba    43 FUNC    LOCAL  DEFAULT    7 clear_pid_bit
   123: c10034e5    65 FUNC    LOCAL  DEFAULT    7 find_free_pid
   124: c1003526    92 FUNC    LOCAL  DEFAULT    7 alloc_pid
   125: c1003582    30 FUNC    LOCAL  DEFAULT    7 free_pid
   126: c1011c98    21 OBJECT  LOCAL  DEFAULT   10 name.2644
   127: c10036aa    51 FUNC    LOCAL  DEFAULT    7 remove_link
   128: c1003757    71 FUNC    LOCAL  DEFAULT    7 remove_pid_hash
   129: c100379e   107 FUNC    LOCAL  DEFAULT    7 find_task
   130: c100391d   364 FUNC    LOCAL  DEFAULT    7 copy_thread
   131: c1003a89   185 FUNC    LOCAL  DEFAULT    7 update_inode_open_cnts
   132: c100b7e0    23 OBJECT  LOCAL  DEFAULT    8 __func__.2696
   133: c100b7f8     8 OBJECT  LOCAL  DEFAULT    8 __func__.2708
   134: c1003d48   118 FUNC    LOCAL  DEFAULT    7 task_run
   135: c100b800    15 OBJECT  LOCAL  DEFAULT    8 __func__.2747
   136: c1003f41    92 FUNC    LOCAL  DEFAULT    7 print_taskinfo
   137: c1003fbf    28 FUNC    LOCAL  DEFAULT    7 kernel_execve
   138: c1003fdb     6 FUNC    LOCAL  DEFAULT    7 user_main
   139: c10044d1    40 FUNC    LOCAL  DEFAULT    7 find_child
   140: c10044f9    50 FUNC    LOCAL  DEFAULT    7 find_hanging_child
   141: c100452b    43 FUNC    LOCAL  DEFAULT    7 task0_adopt_a_child
   142: c100b810     9 OBJECT  LOCAL  DEFAULT    8 __func__.2854
   143: 00000000     0 FILE    LOCAL  DEFAULT  ABS exec.c
   144: c1004aa4    37 FUNC    LOCAL  DEFAULT    7 hash32
   145: c1004ac9   168 FUNC    LOCAL  DEFAULT    7 segment_load
   146: c1004b71   397 FUNC    LOCAL  DEFAULT    7 load
   147: 00000000     0 FILE    LOCAL  DEFAULT  ABS pic.c
   148: c100eb24     2 OBJECT  LOCAL  DEFAULT    9 irq_mask
   149: c1011cad     1 OBJECT  LOCAL  DEFAULT   10 did_init
   150: c1004db0    94 FUNC    LOCAL  DEFAULT    7 pic_setmask
   151: 00000000     0 FILE    LOCAL  DEFAULT  ABS serial.c
   152: c1011cae     1 OBJECT  LOCAL  DEFAULT   10 serial_exists
   153: 00000000     0 FILE    LOCAL  DEFAULT  ABS timer.c
   154: 00000000     0 FILE    LOCAL  DEFAULT  ABS vga.c
   155: c1011caf     1 OBJECT  LOCAL  DEFAULT   10 cursor_x
   156: c1011cb0     1 OBJECT  LOCAL  DEFAULT   10 cursor_y
   157: c100eb28     4 OBJECT  LOCAL  DEFAULT    9 vga_memory
   158: 00000000     0 FILE    LOCAL  DEFAULT  ABS sync.c
   159: c1005be1    37 FUNC    LOCAL  DEFAULT    7 hash32
   160: c100b9e0    10 OBJECT  LOCAL  DEFAULT    8 __func__.2519
   161: 00000000     0 FILE    LOCAL  DEFAULT  ABS ide-dev.c
   162: c1005e72    40 FUNC    LOCAL  DEFAULT    7 waitdisk
   163: c1005e9a    38 FUNC    LOCAL  DEFAULT    7 insl
   164: c1005ec0    38 FUNC    LOCAL  DEFAULT    7 outsl
   165: c1005ee6   186 FUNC    LOCAL  DEFAULT    7 ide_read_sect
   166: c1005fa0   186 FUNC    LOCAL  DEFAULT    7 ide_write_sect
   167: c10060d4    47 FUNC    LOCAL  DEFAULT    7 delay
   168: 00000000     0 FILE    LOCAL  DEFAULT  ABS fs.c
   169: c10062cd    37 FUNC    LOCAL  DEFAULT    7 hash32
   170: c10062f2  1171 FUNC    LOCAL  DEFAULT    7 partition_format
   171: c1006a48    94 FUNC    LOCAL  DEFAULT    7 path_parse
   172: c100c2b8    15 OBJECT  LOCAL  DEFAULT    8 __func__.2590
   173: c1006b2e   656 FUNC    LOCAL  DEFAULT    7 search_file
   174: c100c2c8    12 OBJECT  LOCAL  DEFAULT    8 __func__.2602
   175: c100c2d4     9 OBJECT  LOCAL  DEFAULT    8 __func__.2615
   176: c100c2e0    16 OBJECT  LOCAL  DEFAULT    8 __func__.2629
   177: c100c2f0     9 OBJECT  LOCAL  DEFAULT    8 __func__.2649
   178: c100c2fc    10 OBJECT  LOCAL  DEFAULT    8 __func__.2662
   179: c100c308    11 OBJECT  LOCAL  DEFAULT    8 __func__.2674
   180: c100c314    10 OBJECT  LOCAL  DEFAULT    8 __func__.2704
   181: c100c320    12 OBJECT  LOCAL  DEFAULT    8 __func__.2715
   182: c100c32c    12 OBJECT  LOCAL  DEFAULT    8 __func__.2726
   183: c100c338    10 OBJECT  LOCAL  DEFAULT    8 __func__.2735
   184: c1007df3   184 FUNC    LOCAL  DEFAULT    7 get_parent_dir_inode_nr
   185: c100c344    24 OBJECT  LOCAL  DEFAULT    8 __func__.2748
   186: c1007eab   423 FUNC    LOCAL  DEFAULT    7 get_child_dir_name
   187: c100c35c    11 OBJECT  LOCAL  DEFAULT    8 __func__.2777
   188: 00000000     0 FILE    LOCAL  DEFAULT  ABS dir.c
   189: c100c57c    17 OBJECT  LOCAL  DEFAULT    8 __func__.2228
   190: c100c590    15 OBJECT  LOCAL  DEFAULT    8 __func__.2237
   191: c100c5a0    17 OBJECT  LOCAL  DEFAULT    8 __func__.2281
   192: c100c5b4     9 OBJECT  LOCAL  DEFAULT    8 __func__.2310
   193: c100c5c0    11 OBJECT  LOCAL  DEFAULT    8 __func__.2325
   194: 00000000     0 FILE    LOCAL  DEFAULT  ABS file.c
   195: c10092fc    37 FUNC    LOCAL  DEFAULT    7 hash32
   196: c100c9e0    11 OBJECT  LOCAL  DEFAULT    8 __func__.2602
   197: c100c9ec    10 OBJECT  LOCAL  DEFAULT    8 __func__.2632
   198: 00000000     0 FILE    LOCAL  DEFAULT  ABS inode.c
   199: c100a4e6   114 FUNC    LOCAL  DEFAULT    7 inode_locate
   200: c100cab4    13 OBJECT  LOCAL  DEFAULT    8 __func__.2223
   201: c100cac4    14 OBJECT  LOCAL  DEFAULT    8 __func__.2231
   202: 00000000     0 FILE    LOCAL  DEFAULT  ABS pipe.c
   203: c100ab7a    37 FUNC    LOCAL  DEFAULT    7 hash32
   204: 00000000     0 FILE    LOCAL  DEFAULT  ABS ioqueue.c
   205: c100adbb    37 FUNC    LOCAL  DEFAULT    7 hash32
   206: c100ae24    28 FUNC    LOCAL  DEFAULT    7 next_pos
   207: c100ae5f    22 FUNC    LOCAL  DEFAULT    7 ioq_empty
   208: c100ae75    70 FUNC    LOCAL  DEFAULT    7 ioq_wait
   209: c100cb3c     9 OBJECT  LOCAL  DEFAULT    8 __func__.2538
   210: c100aebb    66 FUNC    LOCAL  DEFAULT    7 wakeup
   211: c100cb48     7 OBJECT  LOCAL  DEFAULT    8 __func__.2542
   212: c10017bf     0 NOTYPE  GLOBAL DEFAULT    7 vector242
   213: c1001216     0 NOTYPE  GLOBAL DEFAULT    7 vector119
   214: c10099f7  1890 FUNC    GLOBAL DEFAULT    7 file_write
   215: c10010f6     0 NOTYPE  GLOBAL DEFAULT    7 vector87
   216: c10010ed     0 NOTYPE  GLOBAL DEFAULT    7 vector86
   217: c100705c   252 FUNC    GLOBAL DEFAULT    7 sys_close
   218: c100b02a    83 FUNC    GLOBAL DEFAULT    7 ioq_length
   219: c10098a0   279 FUNC    GLOBAL DEFAULT    7 file_open
   220: c100182b     0 NOTYPE  GLOBAL DEFAULT    7 vector251
   221: c100021a    48 FUNC    GLOBAL DEFAULT    7 strcpy
   222: c1006785   707 FUNC    GLOBAL DEFAULT    7 mount_partition
   223: c1001ecb    25 FUNC    GLOBAL DEFAULT    7 kbd_intr
   224: c1000000    29 FUNC    GLOBAL DEFAULT    7 inb
   225: 40000811   913 FUNC    GLOBAL DEFAULT    3 my_shell
   226: c100111a     0 NOTYPE  GLOBAL DEFAULT    7 vector91
   227: c1000f10     0 NOTYPE  GLOBAL DEFAULT    7 vector33
   228: c1002326   534 FUNC    GLOBAL DEFAULT    7 test_vmm
   229: c10013ff     0 NOTYPE  GLOBAL DEFAULT    7 vector162
   230: 40000bce    33 FUNC    GLOBAL DEFAULT    3 user_memset
   231: c1001663     0 NOTYPE  GLOBAL DEFAULT    7 vector213
   232: 40000f16   195 FUNC    GLOBAL DEFAULT    3 make_clear_abs_path
   233: c10011b3     0 NOTYPE  GLOBAL DEFAULT    7 vector108
   234: c1000f6a     0 NOTYPE  GLOBAL DEFAULT    7 vector43
   235: c10035d5    53 FUNC    GLOBAL DEFAULT    7 get_task_name
   236: c1001423     0 NOTYPE  GLOBAL DEFAULT    7 vector165
   237: c10043ab    48 FUNC    GLOBAL DEFAULT    7 pte_ptr
   238: c1001513     0 NOTYPE  GLOBAL DEFAULT    7 vector185
   239: c10011f2     0 NOTYPE  GLOBAL DEFAULT    7 vector115
   240: c1003078    91 FUNC    GLOBAL DEFAULT    7 sys_free
   241: c1612000  4096 OBJECT  GLOBAL DEFAULT   10 new_pdt
   242: 4000037e   769 FUNC    GLOBAL DEFAULT    3 printf
   243: c1001231     0 NOTYPE  GLOBAL DEFAULT    7 vector122
   244: c100a769   252 FUNC    GLOBAL DEFAULT    7 inode_delete
   245: c1007cc3    16 FUNC    GLOBAL DEFAULT    7 sys_rewinddir
   246: c1001d50   379 FUNC    GLOBAL DEFAULT    7 kbd_proc_data
   247: c10013b7     0 NOTYPE  GLOBAL DEFAULT    7 vector156
   248: c10017e3     0 NOTYPE  GLOBAL DEFAULT    7 vector245
   249: c1001543     0 NOTYPE  GLOBAL DEFAULT    7 vector189
   250: c1000e36     0 NOTYPE  GLOBAL DEFAULT    7 vector7
   251: c100100c     0 NOTYPE  GLOBAL DEFAULT    7 vector61
   252: c1000ebf     0 NOTYPE  GLOBAL DEFAULT    7 vector24
   253: 00107000  4096 OBJECT  GLOBAL DEFAULT    2 stack_pt
   254: c10011ce     0 NOTYPE  GLOBAL DEFAULT    7 vector111
   255: c10015c7     0 NOTYPE  GLOBAL DEFAULT    7 vector200
   256: c100740e   236 FUNC    GLOBAL DEFAULT    7 sys_lseek
   257: c1001ee4    97 FUNC    GLOBAL DEFAULT    7 kbd_init
   258: c1011cc0    12 OBJECT  GLOBAL DEFAULT   10 highmem_zone
   259: c100a679   214 FUNC    GLOBAL DEFAULT    7 inode_open
   260: c1001042     0 NOTYPE  GLOBAL DEFAULT    7 vector67
   261: c100fc68     4 OBJECT  GLOBAL DEFAULT   10 shift
   262: 00105000  4096 OBJECT  GLOBAL DEFAULT    2 pt2
   263: c10012df     0 NOTYPE  GLOBAL DEFAULT    7 vector138
   264: c1001081     0 NOTYPE  GLOBAL DEFAULT    7 vector74
   265: c1000fe8     0 NOTYPE  GLOBAL DEFAULT    7 vector57
   266: c100514f    85 FUNC    GLOBAL DEFAULT    7 cons_intr
   267: c100542d   285 FUNC    GLOBAL DEFAULT    7 print_char
   268: c1000aa4   343 FUNC    GLOBAL DEFAULT    7 print_trapframe
   269: c100166f     0 NOTYPE  GLOBAL DEFAULT    7 vector214
   270: c1001162     0 NOTYPE  GLOBAL DEFAULT    7 vector99
   271: c100875a  1083 FUNC    GLOBAL DEFAULT    7 sync_dir_entry
   272: c1000dcf     0 NOTYPE  GLOBAL DEFAULT    7 __alltraps
   273: c1005b85    92 FUNC    GLOBAL DEFAULT    7 cons_getc
   274: c1001303     0 NOTYPE  GLOBAL DEFAULT    7 vector141
   275: 400014ad   146 FUNC    GLOBAL DEFAULT    3 buildin_mkdir
   276: c100953a   132 FUNC    GLOBAL DEFAULT    7 bitmap_sync
   277: c1001477     0 NOTYPE  GLOBAL DEFAULT    7 vector172
   278: c10017b3     0 NOTYPE  GLOBAL DEFAULT    7 vector241
   279: c100771a  1082 FUNC    GLOBAL DEFAULT    7 sys_mkdir
   280: c1001843     0 NOTYPE  GLOBAL DEFAULT    7 vector253
   281: c1000e12     0 NOTYPE  GLOBAL DEFAULT    7 vector3
   282: c1000df1     0 NOTYPE  GLOBAL DEFAULT    7 forkrets
   283: c1000e09     0 NOTYPE  GLOBAL DEFAULT    7 vector2
   284: 00103000  4096 OBJECT  GLOBAL DEFAULT    2 pt
   285: c1003b42   408 FUNC    GLOBAL DEFAULT    7 do_fork
   286: c100170b     0 NOTYPE  GLOBAL DEFAULT    7 vector227
   287: c1003ce9    95 FUNC    GLOBAL DEFAULT    7 kernel_thread
   288: c100163f     0 NOTYPE  GLOBAL DEFAULT    7 vector210
   289: c10086ee   108 FUNC    GLOBAL DEFAULT    7 create_dir_entry
   290: c10016e7     0 NOTYPE  GLOBAL DEFAULT    7 vector224
   291: 400002d5    15 FUNC    GLOBAL DEFAULT    3 ps
   292: c1000f58     0 NOTYPE  GLOBAL DEFAULT    7 vector41
   293: 40000185    16 FUNC    GLOBAL DEFAULT    3 user_backtrace
   294: c1000ea4     0 NOTYPE  GLOBAL DEFAULT    7 vector21
   295: c10014b3     0 NOTYPE  GLOBAL DEFAULT    7 vector177
   296: c100120d     0 NOTYPE  GLOBAL DEFAULT    7 vector118
   297: c100105d     0 NOTYPE  GLOBAL DEFAULT    7 vector70
   298: c100db14     4 OBJECT  GLOBAL DEFAULT    9 highmem_end
   299: c1a14000     4 OBJECT  GLOBAL DEFAULT   10 task0
   300: c100605a    61 FUNC    GLOBAL DEFAULT    7 ide_read
   301: c1001054     0 NOTYPE  GLOBAL DEFAULT    7 vector69
   302: c1001783     0 NOTYPE  GLOBAL DEFAULT    7 vector237
   303: c1001027     0 NOTYPE  GLOBAL DEFAULT    7 vector64
   304: c1000eda     0 NOTYPE  GLOBAL DEFAULT    7 vector27
   305: c1001297     0 NOTYPE  GLOBAL DEFAULT    7 vector132
   306: c100151f     0 NOTYPE  GLOBAL DEFAULT    7 vector186
   307: c10072b7   343 FUNC    GLOBAL DEFAULT    7 sys_read
   308: c1001693     0 NOTYPE  GLOBAL DEFAULT    7 vector217
   309: c10049b6   178 FUNC    GLOBAL DEFAULT    7 sys_print_task
   310: c1004a68     0 NOTYPE  GLOBAL DEFAULT    7 kernel_thread_entry
   311: c1000108    22 FUNC    GLOBAL DEFAULT    7 memcpy
   312: c1009234   200 FUNC    GLOBAL DEFAULT    7 dir_remove
   313: c1000e00     0 NOTYPE  GLOBAL DEFAULT    7 vector1
   314: c10014bf     0 NOTYPE  GLOBAL DEFAULT    7 vector178
   315: c1000f3d     0 NOTYPE  GLOBAL DEFAULT    7 vector38
   316: c10051a4    79 FUNC    GLOBAL DEFAULT    7 serial_proc_data
   317: c100178f     0 NOTYPE  GLOBAL DEFAULT    7 vector238
   318: 4000067f    30 FUNC    GLOBAL DEFAULT    3 print_prompt
   319: c100aefd   149 FUNC    GLOBAL DEFAULT    7 ioq_getchar
   320: c1009321    69 FUNC    GLOBAL DEFAULT    7 get_free_slot_in_global
   321: c100036b    62 FUNC    GLOBAL DEFAULT    7 __PANIC
   322: c10005c3   194 FUNC    GLOBAL DEFAULT    7 readline
   323: c10012a3     0 NOTYPE  GLOBAL DEFAULT    7 vector133
   324: c1001078     0 NOTYPE  GLOBAL DEFAULT    7 vector73
   325: c1001327     0 NOTYPE  GLOBAL DEFAULT    7 vector144
   326: c1008b95  1186 FUNC    GLOBAL DEFAULT    7 delete_dir_entry
   327: c1011ce0 0x600000 OBJECT  GLOBAL DEFAULT   10 pp
   328: c100af92   152 FUNC    GLOBAL DEFAULT    7 ioq_putchar
   329: c100024a    12 FUNC    GLOBAL DEFAULT    7 CPU_INVLPG
   330: c100184f     0 NOTYPE  GLOBAL DEFAULT    7 vector254
   331: 40000250    19 FUNC    GLOBAL DEFAULT    3 rewinddir
   332: c1001174     0 NOTYPE  GLOBAL DEFAULT    7 vector101
   333: c100164b     0 NOTYPE  GLOBAL DEFAULT    7 vector211
   334: c1613000 0x300000 OBJECT  GLOBAL DEFAULT   10 user_pt_highmem
   335: c100148f     0 NOTYPE  GLOBAL DEFAULT    7 vector174
   336: 400002e4    18 FUNC    GLOBAL DEFAULT    3 malloc
   337: c10017cb     0 NOTYPE  GLOBAL DEFAULT    7 vector243
   338: c100d040    56 OBJECT  GLOBAL DEFAULT    9 gdt
   339: 4000002f    35 FUNC    GLOBAL DEFAULT    3 test_fork
   340: c1001267     0 NOTYPE  GLOBAL DEFAULT    7 vector128
   341: c10010c0     0 NOTYPE  GLOBAL DEFAULT    7 vector81
   342: c1000e62     0 NOTYPE  GLOBAL DEFAULT    7 vector13
   343: c1011cb4    12 OBJECT  GLOBAL DEFAULT   10 user_sema
   344: c1000fb2     0 NOTYPE  GLOBAL DEFAULT    7 vector51
   345: c1000e79     0 NOTYPE  GLOBAL DEFAULT    7 vector16
   346: 00102000  4096 OBJECT  GLOBAL DEFAULT    2 pt_init
   347: 40001cc0   512 OBJECT  GLOBAL DEFAULT    6 cwd_cache
   348: c10017a7     0 NOTYPE  GLOBAL DEFAULT    7 vector240
   349: c1000fcd     0 NOTYPE  GLOBAL DEFAULT    7 vector54
   350: c1000e92     0 NOTYPE  GLOBAL DEFAULT    7 vector19
   351: c1002a13   252 FUNC    GLOBAL DEFAULT    7 pmm_alloc
   352: c1001123     0 NOTYPE  GLOBAL DEFAULT    7 vector92
   353: c1005217    85 FUNC    GLOBAL DEFAULT    7 serial_putc_sub
   354: c10017d7     0 NOTYPE  GLOBAL DEFAULT    7 vector244
   355: c10012f7     0 NOTYPE  GLOBAL DEFAULT    7 vector140
   356: c1000f7c     0 NOTYPE  GLOBAL DEFAULT    7 vector45
   357: c1009037   469 FUNC    GLOBAL DEFAULT    7 dir_read
   358: c10010ae     0 NOTYPE  GLOBAL DEFAULT    7 vector79
   359: 40000fd9    96 FUNC    GLOBAL DEFAULT    3 buildin_pwd
   360: c1001723     0 NOTYPE  GLOBAL DEFAULT    7 vector229
   361: 4000023e    18 FUNC    GLOBAL DEFAULT    3 rmdir
   362: c10013cf     0 NOTYPE  GLOBAL DEFAULT    7 vector158
   363: c1004e0e    51 FUNC    GLOBAL DEFAULT    7 pic_enable
   364: c100223d   233 FUNC    GLOBAL DEFAULT    7 test_pmm
   365: 400002c3    18 FUNC    GLOBAL DEFAULT    3 readdir
   366: c1000f46     0 NOTYPE  GLOBAL DEFAULT    7 vector39
   367: c10006d2   232 FUNC    GLOBAL DEFAULT    7 gdt_init
   368: c1001447     0 NOTYPE  GLOBAL DEFAULT    7 vector168
   369: c1000f22     0 NOTYPE  GLOBAL DEFAULT    7 vector35
   370: c10011e0     0 NOTYPE  GLOBAL DEFAULT    7 vector113
   371: c10030d3    40 FUNC    GLOBAL DEFAULT    7 sys_mmap
   372: c100db10     4 OBJECT  GLOBAL DEFAULT    9 highmem_start
   373: c100124c     0 NOTYPE  GLOBAL DEFAULT    7 vector125
   374: c100920c    40 FUNC    GLOBAL DEFAULT    7 dir_is_empty
   375: 4000167c     4 OBJECT  GLOBAL DEFAULT    4 argc
   376: c10095be   738 FUNC    GLOBAL DEFAULT    7 file_create
   377: c1a14228     4 OBJECT  GLOBAL DEFAULT   10 second
   378: 40000116    15 FUNC    GLOBAL DEFAULT    3 user_sys_getpid
   379: c1001687     0 NOTYPE  GLOBAL DEFAULT    7 vector216
   380: 400001f7    35 FUNC    GLOBAL DEFAULT    3 lseek
   381: c100101e     0 NOTYPE  GLOBAL DEFAULT    7 vector63
   382: c1000ed1     0 NOTYPE  GLOBAL DEFAULT    7 vector26
   383: c10051f3    36 FUNC    GLOBAL DEFAULT    7 serial_intr
   384: c1001573     0 NOTYPE  GLOBAL DEFAULT    7 vector193
   385: c1001597     0 NOTYPE  GLOBAL DEFAULT    7 vector196
   386: c1001633     0 NOTYPE  GLOBAL DEFAULT    7 vector209
   387: 4000031b    24 FUNC    GLOBAL DEFAULT    3 mmap
   388: c1000e1b     0 NOTYPE  GLOBAL DEFAULT    7 vector4
   389: c1006249   132 FUNC    GLOBAL DEFAULT    7 test_ide_io
   390: c100145f     0 NOTYPE  GLOBAL DEFAULT    7 vector170
   391: c1003dbe   165 FUNC    GLOBAL DEFAULT    7 schedule
   392: c10012c7     0 NOTYPE  GLOBAL DEFAULT    7 vector136
   393: c1000e4d     0 NOTYPE  GLOBAL DEFAULT    7 vector10
   394: c100160f     0 NOTYPE  GLOBAL DEFAULT    7 vector206
   395: c100185b     0 NOTYPE  GLOBAL DEFAULT    7 vector255
   396: c1002fbd    92 FUNC    GLOBAL DEFAULT    7 setup_pgdir
   397: c10014e3     0 NOTYPE  GLOBAL DEFAULT    7 vector181
   398: 400015d1   146 FUNC    GLOBAL DEFAULT    3 buildin_rm
   399: c1611ce0    12 OBJECT  GLOBAL DEFAULT   10 normal_zone
   400: c10083f8    14 FUNC    GLOBAL DEFAULT    7 fs_init
   401: c1000ffa     0 NOTYPE  GLOBAL DEFAULT    7 vector59
   402: c1a14234     4 OBJECT  GLOBAL DEFAULT   10 root_dir
   403: c100409b   296 FUNC    GLOBAL DEFAULT    7 copy_user_cr3
   404: c10010e4     0 NOTYPE  GLOBAL DEFAULT    7 vector85
   405: c10010db     0 NOTYPE  GLOBAL DEFAULT    7 vector84
   406: c1004a6d     0 NOTYPE  GLOBAL DEFAULT    7 switch_to
   407: c10014fb     0 NOTYPE  GLOBAL DEFAULT    7 vector183
   408: c10006bb    23 FUNC    GLOBAL DEFAULT    7 ltr
   409: c10013db     0 NOTYPE  GLOBAL DEFAULT    7 vector159
   410: c1001657     0 NOTYPE  GLOBAL DEFAULT    7 vector212
   411: c100ab9f    52 FUNC    GLOBAL DEFAULT    7 is_pipe
   412: c1004693   803 FUNC    GLOBAL DEFAULT    7 user_task_init
   413: c1000f8e     0 NOTYPE  GLOBAL DEFAULT    7 vector47
   414: c1001717     0 NOTYPE  GLOBAL DEFAULT    7 vector228
   415: c1000f61     0 NOTYPE  GLOBAL DEFAULT    7 vector42
   416: c100043c    47 FUNC    GLOBAL DEFAULT    7 instr_hello
   417: 4000036c    18 FUNC    GLOBAL DEFAULT    3 pipe
   418: c10011e9     0 NOTYPE  GLOBAL DEFAULT    7 vector114
   419: c100149b     0 NOTYPE  GLOBAL DEFAULT    7 vector175
   420: c100131b     0 NOTYPE  GLOBAL DEFAULT    7 vector143
   421: c1002bdb   216 FUNC    GLOBAL DEFAULT    7 setup_vpt
   422: c100127f     0 NOTYPE  GLOBAL DEFAULT    7 vector130
   423: c10017ef     0 NOTYPE  GLOBAL DEFAULT    7 vector246
   424: c1000e46     0 NOTYPE  GLOBAL DEFAULT    7 vector9
   425: c100130f     0 NOTYPE  GLOBAL DEFAULT    7 vector142
   426: c100116b     0 NOTYPE  GLOBAL DEFAULT    7 vector100
   427: c100001d    31 FUNC    GLOBAL DEFAULT    7 inw
   428: c10084c8   492 FUNC    GLOBAL DEFAULT    7 search_dir_entry
   429: c10015d3     0 NOTYPE  GLOBAL DEFAULT    7 vector201
   430: c1003fe1   186 FUNC    GLOBAL DEFAULT    7 set_user_cr3
   431: c1003e91   176 FUNC    GLOBAL DEFAULT    7 thread_unblock
   432: c1000196    63 FUNC    GLOBAL DEFAULT    7 strrchr
   433: c10007c6   491 FUNC    GLOBAL DEFAULT    7 idt_init
   434: 00101000  4096 OBJECT  GLOBAL DEFAULT    2 pdt
   435: c1002238     5 FUNC    GLOBAL DEFAULT    7 kernel_main
   436: c1001003     0 NOTYPE  GLOBAL DEFAULT    7 vector60
   437: c1000eb6     0 NOTYPE  GLOBAL DEFAULT    7 vector23
   438: c10052b2   124 FUNC    GLOBAL DEFAULT    7 timer_init
   439: c1007c8e    53 FUNC    GLOBAL DEFAULT    7 sys_readdir
   440: c1001777     0 NOTYPE  GLOBAL DEFAULT    7 vector236
   441: c1002b0f   167 FUNC    GLOBAL DEFAULT    7 pmm_free
   442: 400001df    24 FUNC    GLOBAL DEFAULT    3 write
   443: c1006dbe   604 FUNC    GLOBAL DEFAULT    7 sys_open
   444: c100173b     0 NOTYPE  GLOBAL DEFAULT    7 vector231
   445: c1005700   178 FUNC    GLOBAL DEFAULT    7 backtrace
   446: c1001039     0 NOTYPE  GLOBAL DEFAULT    7 vector66
   447: c1000eec     0 NOTYPE  GLOBAL DEFAULT    7 vector29
   448: c10012bb     0 NOTYPE  GLOBAL DEFAULT    7 vector135
   449: 40000d3e    48 FUNC    GLOBAL DEFAULT    3 user_strcpy
   450: c10053b5   120 FUNC    GLOBAL DEFAULT    7 clear
   451: 00106000  4096 OBJECT  GLOBAL DEFAULT    2 pt3
   452: c100109c     0 NOTYPE  GLOBAL DEFAULT    7 vector77
   453: c100046b   125 FUNC    GLOBAL DEFAULT    7 instr_help
   454: c10001d5    69 FUNC    GLOBAL DEFAULT    7 strcat
   455: c10014d7     0 NOTYPE  GLOBAL DEFAULT    7 vector180
   456: c1001627     0 NOTYPE  GLOBAL DEFAULT    7 vector208
   457: c10004e8   193 FUNC    GLOBAL DEFAULT    7 instr_game
   458: c1001159     0 NOTYPE  GLOBAL DEFAULT    7 vector98
   459: c1001150     0 NOTYPE  GLOBAL DEFAULT    7 vector97
   460: c1002ed0   237 FUNC    GLOBAL DEFAULT    7 vmm_map
   461: c100701a    66 FUNC    GLOBAL DEFAULT    7 fd_local2global
   462: c10014a7     0 NOTYPE  GLOBAL DEFAULT    7 vector176
   463: c100157f     0 NOTYPE  GLOBAL DEFAULT    7 vector194
   464: c1000f07     0 NOTYPE  GLOBAL DEFAULT    7 vector32
   465: 40000278    18 FUNC    GLOBAL DEFAULT    3 chdir
   466: c10015bb     0 NOTYPE  GLOBAL DEFAULT    7 vector199
   467: c1003f9d    24 FUNC    GLOBAL DEFAULT    7 do_exit
   468: 40000cc3    40 FUNC    GLOBAL DEFAULT    3 user_strlen
   469: c100128b     0 NOTYPE  GLOBAL DEFAULT    7 vector131
   470: c1001837     0 NOTYPE  GLOBAL DEFAULT    7 vector252
   471: c1000df7     0 NOTYPE  GLOBAL DEFAULT    7 vector0
   472: c1003e63    46 FUNC    GLOBAL DEFAULT    7 thread_block
   473: c1005b47    62 FUNC    GLOBAL DEFAULT    7 cons_putc
   474: 40000333    21 FUNC    GLOBAL DEFAULT    3 exec
   475: c1001333     0 NOTYPE  GLOBAL DEFAULT    7 vector145
   476: c1a14004     4 OBJECT  GLOBAL DEFAULT   10 task1
   477: c1007158   351 FUNC    GLOBAL DEFAULT    7 sys_write
   478: c10011aa     0 NOTYPE  GLOBAL DEFAULT    7 vector107
   479: c1000f4f     0 NOTYPE  GLOBAL DEFAULT    7 vector40
   480: 40000348    18 FUNC    GLOBAL DEFAULT    3 wait
   481: c1000d6c    31 FUNC    GLOBAL DEFAULT    7 intr_enable
   482: c100117d     0 NOTYPE  GLOBAL DEFAULT    7 vector102
   483: c100a159   909 FUNC    GLOBAL DEFAULT    7 file_read
   484: 40000156    47 FUNC    GLOBAL DEFAULT    3 user_print_num
   485: c1000fdf     0 NOTYPE  GLOBAL DEFAULT    7 vector56
   486: 40000c84    63 FUNC    GLOBAL DEFAULT    3 user_strrchr
   487: c100104b     0 NOTYPE  GLOBAL DEFAULT    7 vector68
   488: c100db20  4100 OBJECT  GLOBAL DEFAULT    9 task_pidmap
   489: c1000e2d     0 NOTYPE  GLOBAL DEFAULT    7 vector6
   490: c1001273     0 NOTYPE  GLOBAL DEFAULT    7 vector129
   491: c100ae40    31 FUNC    GLOBAL DEFAULT    7 ioq_full
   492: c1a143c0     0 NOTYPE  GLOBAL DEFAULT   10 kernel_end
   493: c10015a3     0 NOTYPE  GLOBAL DEFAULT    7 vector197
   494: 40000195    24 FUNC    GLOBAL DEFAULT    3 read
   495: c1005096   115 FUNC    GLOBAL DEFAULT    7 lpt_putc_sub
   496: c100526c    70 FUNC    GLOBAL DEFAULT    7 serial_putc
   497: c1001387     0 NOTYPE  GLOBAL DEFAULT    7 vector152
   498: c1007c61    45 FUNC    GLOBAL DEFAULT    7 sys_closedir
   499: c100d100     0 NOTYPE  GLOBAL DEFAULT    9 __vectors
   500: c100172f     0 NOTYPE  GLOBAL DEFAULT    7 vector230
   501: c1000f34     0 NOTYPE  GLOBAL DEFAULT    7 vector37
   502: c1001603     0 NOTYPE  GLOBAL DEFAULT    7 vector205
   503: c10013f3     0 NOTYPE  GLOBAL DEFAULT    7 vector161
   504: c1a14008     4 OBJECT  GLOBAL DEFAULT   10 current
   505: 4000021a    18 FUNC    GLOBAL DEFAULT    3 unlink
   506: c1001066     0 NOTYPE  GLOBAL DEFAULT    7 vector71
   507: c10013e7     0 NOTYPE  GLOBAL DEFAULT    7 vector160
   508: c1005109    70 FUNC    GLOBAL DEFAULT    7 lpt_putc
   509: c100167b     0 NOTYPE  GLOBAL DEFAULT    7 vector215
   510: c10041c3   108 FUNC    GLOBAL DEFAULT    7 list_traversal
   511: c10013c3     0 NOTYPE  GLOBAL DEFAULT    7 vector157
   512: 00109000     0 NOTYPE  GLOBAL DEFAULT    2 init_end
   513: c1000d8b    32 FUNC    GLOBAL DEFAULT    7 intr_disable
   514: c10009e4   192 FUNC    GLOBAL DEFAULT    7 print_regs
   515: c10011d7     0 NOTYPE  GLOBAL DEFAULT    7 vector112
   516: 40000c71    19 FUNC    GLOBAL DEFAULT    3 user_strcmp
   517: 40001488    37 FUNC    GLOBAL DEFAULT    3 buildin_ps
   518: c1000256    12 FUNC    GLOBAL DEFAULT    7 lcr3
   519: c1913000 0x20000 OBJECT  GLOBAL DEFAULT   10 pt_highmem
   520: c10014ef     0 NOTYPE  GLOBAL DEFAULT    7 vector182
   521: c10035a0    53 FUNC    GLOBAL DEFAULT    7 set_task_name
   522: c1000e5b     0 NOTYPE  GLOBAL DEFAULT    7 vector12
   523: c1000262    94 FUNC    GLOBAL DEFAULT    7 memcmp
   524: 40000143    19 FUNC    GLOBAL DEFAULT    3 user_print_string
   525: c10011bc     0 NOTYPE  GLOBAL DEFAULT    7 vector109
   526: c1000e9b     0 NOTYPE  GLOBAL DEFAULT    7 vector20
   527: c1000d41     7 FUNC    GLOBAL DEFAULT    7 disable_interupt
   528: 4000030c    15 FUNC    GLOBAL DEFAULT    3 fork
   529: c10057b2   917 FUNC    GLOBAL DEFAULT    7 printk
   530: c1000fc4     0 NOTYPE  GLOBAL DEFAULT    7 vector53
   531: c1000e89     0 NOTYPE  GLOBAL DEFAULT    7 vector18
   532: 00100000   624 FUNC    GLOBAL DEFAULT    1 init
   533: c10099b7    64 FUNC    GLOBAL DEFAULT    7 file_close
   534: c100113e     0 NOTYPE  GLOBAL DEFAULT    7 vector95
   535: c100ad2a   145 FUNC    GLOBAL DEFAULT    7 pipe_write
   536: c10025da    25 FUNC    GLOBAL DEFAULT    7 test_user
   537: c1003fb5    10 FUNC    GLOBAL DEFAULT    7 do_execve
   538: c10016ff     0 NOTYPE  GLOBAL DEFAULT    7 vector226
   539: c1a14230     4 OBJECT  GLOBAL DEFAULT   10 cur_part
   540: c1000fa0     0 NOTYPE  GLOBAL DEFAULT    7 vector49
   541: c1000f73     0 NOTYPE  GLOBAL DEFAULT    7 vector44
   542: 40000d28    22 FUNC    GLOBAL DEFAULT    3 user_memcpy
   543: c10010a5     0 NOTYPE  GLOBAL DEFAULT    7 vector78
   544: c1001483     0 NOTYPE  GLOBAL DEFAULT    7 vector173
   545: c100003c    33 FUNC    GLOBAL DEFAULT    7 outb
   546: c1001204     0 NOTYPE  GLOBAL DEFAULT    7 vector117
   547: c10010c9     0 NOTYPE  GLOBAL DEFAULT    7 vector82
   548: c10016cf     0 NOTYPE  GLOBAL DEFAULT    7 vector222
   549: c1000e3f     0 NOTYPE  GLOBAL DEFAULT    7 vector8
   550: c1001363     0 NOTYPE  GLOBAL DEFAULT    7 vector149
   551: c10000aa    33 FUNC    GLOBAL DEFAULT    7 memset
   552: c1005c06    54 FUNC    GLOBAL DEFAULT    7 sema_init
   553: c1005d46   148 FUNC    GLOBAL DEFAULT    7 sema_up
   554: c1001747     0 NOTYPE  GLOBAL DEFAULT    7 vector232
   555: c1001f6a   168 FUNC    GLOBAL DEFAULT    7 main
   556: c1005dda    79 FUNC    GLOBAL DEFAULT    7 lock_acquire
   557: c10011a1     0 NOTYPE  GLOBAL DEFAULT    7 vector106
   558: c10016b7     0 NOTYPE  GLOBAL DEFAULT    7 vector220
   559: 40001ec0   512 OBJECT  GLOBAL DEFAULT    6 final_path
   560: c1001111     0 NOTYPE  GLOBAL DEFAULT    7 vector90
   561: c100140b     0 NOTYPE  GLOBAL DEFAULT    7 vector163
   562: c100175f     0 NOTYPE  GLOBAL DEFAULT    7 vector234
   563: c10074fa   544 FUNC    GLOBAL DEFAULT    7 sys_unlink
   564: c1001015     0 NOTYPE  GLOBAL DEFAULT    7 vector62
   565: c1000ec8     0 NOTYPE  GLOBAL DEFAULT    7 vector25
   566: c10015af     0 NOTYPE  GLOBAL DEFAULT    7 vector198
   567: c1005c3c    42 FUNC    GLOBAL DEFAULT    7 lock_init
   568: c100121f     0 NOTYPE  GLOBAL DEFAULT    7 vector120
   569: c1008406   130 FUNC    GLOBAL DEFAULT    7 open_root_dir
   570: c1003019    95 FUNC    GLOBAL DEFAULT    7 sys_malloc
   571: c1005c66   224 FUNC    GLOBAL DEFAULT    7 sema_down
   572: c1001cd9   119 FUNC    GLOBAL DEFAULT    7 syscall_trap
   573: c10005a9    26 FUNC    GLOBAL DEFAULT    7 getchar
   574: c1000d48     7 FUNC    GLOBAL DEFAULT    7 enable_interupt
   575: 4000029f    18 FUNC    GLOBAL DEFAULT    3 opendir
   576: c1000fa9     0 NOTYPE  GLOBAL DEFAULT    7 vector50
   577: c1000e70     0 NOTYPE  GLOBAL DEFAULT    7 vector15
   578: c1005e29    73 FUNC    GLOBAL DEFAULT    7 lock_release
   579: 00104000  4096 OBJECT  GLOBAL DEFAULT    2 pt1
   580: 40001039   138 FUNC    GLOBAL DEFAULT    3 buildin_cd
   581: c1000d4f    29 FUNC    GLOBAL DEFAULT    7 get_now_intr_status
   582: c100137b     0 NOTYPE  GLOBAL DEFAULT    7 vector151
   583: c10010d2     0 NOTYPE  GLOBAL DEFAULT    7 vector83
   584: c1001108     0 NOTYPE  GLOBAL DEFAULT    7 vector89
   585: c10010ff     0 NOTYPE  GLOBAL DEFAULT    7 vector88
   586: c1000d2a    23 FUNC    GLOBAL DEFAULT    7 trap
   587: c10014cb     0 NOTYPE  GLOBAL DEFAULT    7 vector179
   588: c1000f19     0 NOTYPE  GLOBAL DEFAULT    7 vector34
   589: c1000f85     0 NOTYPE  GLOBAL DEFAULT    7 vector46
   590: c1000183    19 FUNC    GLOBAL DEFAULT    7 strcmp
   591: c1000dab    19 FUNC    GLOBAL DEFAULT    7 intr_save
   592: c10012af     0 NOTYPE  GLOBAL DEFAULT    7 vector134
   593: c1004faa   236 FUNC    GLOBAL DEFAULT    7 serial_init
   594: c10016db     0 NOTYPE  GLOBAL DEFAULT    7 vector223
   595: c1a1422c     4 OBJECT  GLOBAL DEFAULT   10 jiffies
   596: c1003120   879 FUNC    GLOBAL DEFAULT    7 kernel_task_init
   597: c1008052   493 FUNC    GLOBAL DEFAULT    7 sys_getcwd
   598: 40000263    21 FUNC    GLOBAL DEFAULT    3 getcwd
   599: c1004f61    73 FUNC    GLOBAL DEFAULT    7 delay
   600: c100a865   709 FUNC    GLOBAL DEFAULT    7 inode_release
   601: c100169f     0 NOTYPE  GLOBAL DEFAULT    7 vector218
   602: c1006aa6   136 FUNC    GLOBAL DEFAULT    7 path_depth_cnt
   603: c10003e2    90 FUNC    GLOBAL DEFAULT    7 run
   604: c100422f   380 FUNC    GLOBAL DEFAULT    7 task_exit
   605: c1004cfe   178 FUNC    GLOBAL DEFAULT    7 sys_execv
   606: c100532e   135 FUNC    GLOBAL DEFAULT    7 print_cursor
   607: c1004e41   288 FUNC    GLOBAL DEFAULT    7 pic_init
   608: c10016f3     0 NOTYPE  GLOBAL DEFAULT    7 vector225
   609: c100152b     0 NOTYPE  GLOBAL DEFAULT    7 vector187
   610: c1000dbe    17 FUNC    GLOBAL DEFAULT    7 intr_restore
   611: c10025f3  1056 FUNC    GLOBAL DEFAULT    7 pmm_init
   612: c1611cec    12 OBJECT  GLOBAL DEFAULT   10 dma_zone
   613: c100fc70     4 OBJECT  GLOBAL DEFAULT   10 test_user_task
   614: c1000ef5     0 NOTYPE  GLOBAL DEFAULT    7 vector30
   615: c100125e     0 NOTYPE  GLOBAL DEFAULT    7 vector127
   616: c1001567     0 NOTYPE  GLOBAL DEFAULT    7 vector192
   617: c100142f     0 NOTYPE  GLOBAL DEFAULT    7 vector166
   618: c1001093     0 NOTYPE  GLOBAL DEFAULT    7 vector76
   619: c100108a     0 NOTYPE  GLOBAL DEFAULT    7 vector75
   620: c100158b     0 NOTYPE  GLOBAL DEFAULT    7 vector195
   621: c100136f     0 NOTYPE  GLOBAL DEFAULT    7 vector150
   622: c1000ff1     0 NOTYPE  GLOBAL DEFAULT    7 vector58
   623: c1001807     0 NOTYPE  GLOBAL DEFAULT    7 vector248
   624: c100123a     0 NOTYPE  GLOBAL DEFAULT    7 vector123
   625: c1001147     0 NOTYPE  GLOBAL DEFAULT    7 vector96
   626: c100a558   289 FUNC    GLOBAL DEFAULT    7 inode_sync
   627: c1000efe     0 NOTYPE  GLOBAL DEFAULT    7 vector31
   628: c10015eb     0 NOTYPE  GLOBAL DEFAULT    7 vector203
   629: c1002cb3   293 FUNC    GLOBAL DEFAULT    7 vmm_malloc
   630: c100fc74     4 OBJECT  GLOBAL DEFAULT   10 offset
   631: c1005581   383 FUNC    GLOBAL DEFAULT    7 print_num
   632: c10012eb     0 NOTYPE  GLOBAL DEFAULT    7 vector139
   633: c1001393     0 NOTYPE  GLOBAL DEFAULT    7 vector153
   634: c1001417     0 NOTYPE  GLOBAL DEFAULT    7 vector164
   635: c1001228     0 NOTYPE  GLOBAL DEFAULT    7 vector121
   636: c1000e24     0 NOTYPE  GLOBAL DEFAULT    7 vector5
   637: c100143b     0 NOTYPE  GLOBAL DEFAULT    7 vector167
   638: c10013ab     0 NOTYPE  GLOBAL DEFAULT    7 vector155
   639: c1001813     0 NOTYPE  GLOBAL DEFAULT    7 vector249
   640: c100005d    33 FUNC    GLOBAL DEFAULT    7 outw
   641: c100181f     0 NOTYPE  GLOBAL DEFAULT    7 vector250
   642: c1008488    64 FUNC    GLOBAL DEFAULT    7 dir_open
   643: c1001243     0 NOTYPE  GLOBAL DEFAULT    7 vector124
   644: c10011c5     0 NOTYPE  GLOBAL DEFAULT    7 vector110
   645: c100d000    36 OBJECT  GLOBAL DEFAULT    9 instr_list
   646: c10015f7     0 NOTYPE  GLOBAL DEFAULT    7 vector204
   647: 4000028a    21 FUNC    GLOBAL DEFAULT    3 stat
   648: c1000de6     0 NOTYPE  GLOBAL DEFAULT    7 __trapret
   649: c10002c0   171 FUNC    GLOBAL DEFAULT    7 print_seg
   650: c10012d3     0 NOTYPE  GLOBAL DEFAULT    7 vector137
   651: c1933000     4 OBJECT  GLOBAL DEFAULT   10 highmem_ptr
   652: c1007b54   269 FUNC    GLOBAL DEFAULT    7 sys_opendir
   653: c10017fb     0 NOTYPE  GLOBAL DEFAULT    7 vector247
   654: c1000ead     0 NOTYPE  GLOBAL DEFAULT    7 vector22
   655: c100554a    55 FUNC    GLOBAL DEFAULT    7 print_string
   656: c10015df     0 NOTYPE  GLOBAL DEFAULT    7 vector202
   657: c100106f     0 NOTYPE  GLOBAL DEFAULT    7 vector72
   658: c1000fd6     0 NOTYPE  GLOBAL DEFAULT    7 vector55
   659: c1001255     0 NOTYPE  GLOBAL DEFAULT    7 vector126
   660: c1001030     0 NOTYPE  GLOBAL DEFAULT    7 vector65
   661: c1000ee3     0 NOTYPE  GLOBAL DEFAULT    7 vector28
   662: c1001453     0 NOTYPE  GLOBAL DEFAULT    7 vector169
   663: c1001753     0 NOTYPE  GLOBAL DEFAULT    7 vector233
   664: 40000052   104 FUNC    GLOBAL DEFAULT    3 user_main
   665: c100ade0    68 FUNC    GLOBAL DEFAULT    7 ioqueue_init
   666: 40000125    30 FUNC    GLOBAL DEFAULT    3 user_print_char
   667: c100aca7   131 FUNC    GLOBAL DEFAULT    7 pipe_read
   668: c10009b1    14 FUNC    GLOBAL DEFAULT    7 set_ts_esp0
   669: 4000035a    18 FUNC    GLOBAL DEFAULT    3 exit
   670: c1004556   166 FUNC    GLOBAL DEFAULT    7 sys_wait
   671: c10045fc   151 FUNC    GLOBAL DEFAULT    7 sys_exit
   672: c100134b     0 NOTYPE  GLOBAL DEFAULT    7 vector147
   673: 40002180     0 NOTYPE  GLOBAL DEFAULT    6 user_end
   674: c100118f     0 NOTYPE  GLOBAL DEFAULT    7 vector104
   675: c10011fb     0 NOTYPE  GLOBAL DEFAULT    7 vector116
   676: c1002dd8   248 FUNC    GLOBAL DEFAULT    7 vmm_free
   677: c100ab2a    80 FUNC    GLOBAL DEFAULT    7 inode_init
   678: c1a1400c     4 OBJECT  GLOBAL DEFAULT   10 user_task
   679: c1a14240   384 OBJECT  GLOBAL DEFAULT   10 file_table
   680: c1000fbb     0 NOTYPE  GLOBAL DEFAULT    7 vector52
   681: c1000e82     0 NOTYPE  GLOBAL DEFAULT    7 vector17
   682: c1001507     0 NOTYPE  GLOBAL DEFAULT    7 vector184
   683: c10043db   246 FUNC    GLOBAL DEFAULT    7 release_prog_resource
   684: c100011e    40 FUNC    GLOBAL DEFAULT    7 strlen
   685: 40001663    25 FUNC    GLOBAL DEFAULT    3 buildin_help
   686: 400001ad    32 FUNC    GLOBAL DEFAULT    3 open
   687: c100abd3   212 FUNC    GLOBAL DEFAULT    7 sys_pipe
   688: c1007cd3   288 FUNC    GLOBAL DEFAULT    7 sys_rmdir
   689: c100161b     0 NOTYPE  GLOBAL DEFAULT    7 vector207
   690: c100154f     0 NOTYPE  GLOBAL DEFAULT    7 vector190
   691: c100823f   300 FUNC    GLOBAL DEFAULT    7 sys_stat
   692: c100179b     0 NOTYPE  GLOBAL DEFAULT    7 vector239
   693: c1001135     0 NOTYPE  GLOBAL DEFAULT    7 vector94
   694: c100112c     0 NOTYPE  GLOBAL DEFAULT    7 vector93
   695: c1001537     0 NOTYPE  GLOBAL DEFAULT    7 vector188
   696: 400010c3   965 FUNC    GLOBAL DEFAULT    3 buildin_ls
   697: c1000f97     0 NOTYPE  GLOBAL DEFAULT    7 vector48
   698: 4000153f   146 FUNC    GLOBAL DEFAULT    3 buildin_rmdir
   699: c10016ab     0 NOTYPE  GLOBAL DEFAULT    7 vector219
   700: c1a14020   520 OBJECT  GLOBAL DEFAULT   10 cons
   701: c1001357     0 NOTYPE  GLOBAL DEFAULT    7 vector148
   702: c10016c3     0 NOTYPE  GLOBAL DEFAULT    7 vector221
   703: 400002b1    18 FUNC    GLOBAL DEFAULT    3 closedir
   704: c1006103   326 FUNC    GLOBAL DEFAULT    7 read_main_partition
   705: c10010b7     0 NOTYPE  GLOBAL DEFAULT    7 vector80
   706: c100146b     0 NOTYPE  GLOBAL DEFAULT    7 vector171
   707: c100139f     0 NOTYPE  GLOBAL DEFAULT    7 vector154
   708: c100fc6c     1 OBJECT  GLOBAL DEFAULT   10 shell_input
   709: c1000f2b     0 NOTYPE  GLOBAL DEFAULT    7 vector36
   710: c100eb2c     0 NOTYPE  GLOBAL DEFAULT    9 kernel_bss
   711: c100176b     0 NOTYPE  GLOBAL DEFAULT    7 vector235
   712: c1001198     0 NOTYPE  GLOBAL DEFAULT    7 vector105
   713: c100836b   141 FUNC    GLOBAL DEFAULT    7 sys_chdir
   714: 40000bef    69 FUNC    GLOBAL DEFAULT    3 user_strcat
   715: c10086b4    58 FUNC    GLOBAL DEFAULT    7 dir_close
   716: 00108000  4096 OBJECT  GLOBAL DEFAULT    2 user_pt
   717: c100253c    13 FUNC    GLOBAL DEFAULT    7 test_schedule
   718: 4000022c    18 FUNC    GLOBAL DEFAULT    3 mkdir
   719: c100133f     0 NOTYPE  GLOBAL DEFAULT    7 vector146
   720: c10093ac   192 FUNC    GLOBAL DEFAULT    7 inode_bitmap_alloc
   721: c100155b     0 NOTYPE  GLOBAL DEFAULT    7 vector191
   722: 400001cd    18 FUNC    GLOBAL DEFAULT    3 close
   723: c1001186     0 NOTYPE  GLOBAL DEFAULT    7 vector103
   724: c10003a9    57 FUNC    GLOBAL DEFAULT    7 monitor
   725: c1006097    61 FUNC    GLOBAL DEFAULT    7 ide_write
   726: c1009366    70 FUNC    GLOBAL DEFAULT    7 task_fd_install
   727: c100a74f    26 FUNC    GLOBAL DEFAULT    7 inode_close
   728: 400002f6    22 FUNC    GLOBAL DEFAULT    3 free
   729: c100946c   206 FUNC    GLOBAL DEFAULT    7 block_bitmap_alloc
   730: c1934000 0xe0000 OBJECT  GLOBAL DEFAULT   10 pt_dma_nomal
   731: c1000e54     0 NOTYPE  GLOBAL DEFAULT    7 vector11
   732: c1000e69     0 NOTYPE  GLOBAL DEFAULT    7 vector14

No version information found in this file.
