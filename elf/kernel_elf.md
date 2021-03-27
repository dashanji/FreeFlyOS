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
  Start of section headers:          311924 (bytes into file)
  Flags:                             0x0
  Size of this header:               52 (bytes)
  Size of program headers:           32 (bytes)
  Number of program headers:         6
  Size of section headers:           40 (bytes)
  Number of section headers:         24
  Section header string table index: 23

Section Headers:
  [Nr] Name              Type            Addr     Off    Size   ES Flg Lk Inf Al
  [ 0]                   NULL            00000000 000000 000000 00      0   0  0
  [ 1] .apstart.text     PROGBITS        00009000 001000 000084 00  AX  0   0  2
  [ 2] .init.text        PROGBITS        00100000 002000 0001fc 00  AX  0   0  1
  [ 3] .init.data        PROGBITS        00101000 003000 008000 00  WA  0   0 4096
  [ 4] .user.text        PROGBITS        40000000 020000 0016d9 00  AX  0   0  1
  [ 5] .user.data        PROGBITS        400016dc 0216dc 000004 00  WA  0   0  4
  [ 6] .user.rodata      PROGBITS        400016e0 0216e0 000623 00   A  0   0  4
  [ 7] .user.bss         NOBITS          40001d20 021d03 0004c0 00  WA  0   0 32
  [ 8] .text             PROGBITS        c1000000 00b000 00f71f 00  AX  0   0  1
  [ 9] .rodata           PROGBITS        c100f720 01a720 002c19 00   A  0   0  4
  [10] .data             PROGBITS        c1013000 01e000 001b2c 00  WA  0   0 32
  [11] .bss              NOBITS          c1015000 01fb2c a28bcc 00  WA  0   0 4096
  [12] .debug_info       PROGBITS        00000000 021d03 010dca 00      0   0  1
  [13] .debug_abbrev     PROGBITS        00000000 032acd 0045f6 00      0   0  1
  [14] .debug_aranges    PROGBITS        00000000 0370c3 000540 00      0   0  1
  [15] .debug_ranges     PROGBITS        00000000 037603 000078 00      0   0  1
  [16] .debug_line       PROGBITS        00000000 03767b 008c78 00      0   0  1
  [17] .debug_str        PROGBITS        00000000 0402f3 003d0c 01  MS  0   0  1
  [18] .comment          PROGBITS        00000000 043fff 000011 01  MS  0   0  1
  [19] .stab             PROGBITS        00000000 044010 00276c 0c     20   0  4
  [20] .stabstr          STRTAB          00000000 04677c 000244 00      0   0  1
  [21] .symtab           SYMTAB          00000000 0469c0 0036b0 10     22 236  4
  [22] .strtab           STRTAB          00000000 04a070 00212f 00      0   0  1
  [23] .shstrtab         STRTAB          00000000 04c19f 0000d2 00      0   0  1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), I (info),
  L (link order), O (extra OS processing required), G (group), T (TLS),
  C (compressed), x (unknown), o (OS specific), E (exclude),
  p (processor specific)

There are no section groups in this file.

Program Headers:
  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align
  LOAD           0x001000 0x00009000 0x00009000 0x00084 0x00084 R E 0x1000
  LOAD           0x002000 0x00100000 0x00100000 0x001fc 0x001fc R E 0x1000
  LOAD           0x003000 0x00101000 0x00101000 0x08000 0x08000 RW  0x1000
  LOAD           0x00b000 0xc1000000 0x01000000 0x12339 0x12339 R E 0x1000
  LOAD           0x01e000 0xc1013000 0x01013000 0x01b2c 0xa2abcc RW  0x1000
  LOAD           0x020000 0x40000000 0x40000000 0x01d03 0x021e0 RWE 0x1000

 Section to Segment mapping:
  Segment Sections...
   00     .apstart.text 
   01     .init.text 
   02     .init.data 
   03     .text .rodata 
   04     .data .bss 
   05     .user.text .user.data .user.rodata .user.bss 

There is no dynamic section in this file.

There are no relocations in this file.

The decoding of unwind sections for machine type Intel 80386 is not currently supported.

Symbol table '.symtab' contains 875 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00009000     0 SECTION LOCAL  DEFAULT    1 
     2: 00100000     0 SECTION LOCAL  DEFAULT    2 
     3: 00101000     0 SECTION LOCAL  DEFAULT    3 
     4: 40000000     0 SECTION LOCAL  DEFAULT    4 
     5: 400016dc     0 SECTION LOCAL  DEFAULT    5 
     6: 400016e0     0 SECTION LOCAL  DEFAULT    6 
     7: 40001d20     0 SECTION LOCAL  DEFAULT    7 
     8: c1000000     0 SECTION LOCAL  DEFAULT    8 
     9: c100f720     0 SECTION LOCAL  DEFAULT    9 
    10: c1013000     0 SECTION LOCAL  DEFAULT   10 
    11: c1015000     0 SECTION LOCAL  DEFAULT   11 
    12: 00000000     0 SECTION LOCAL  DEFAULT   12 
    13: 00000000     0 SECTION LOCAL  DEFAULT   13 
    14: 00000000     0 SECTION LOCAL  DEFAULT   14 
    15: 00000000     0 SECTION LOCAL  DEFAULT   15 
    16: 00000000     0 SECTION LOCAL  DEFAULT   16 
    17: 00000000     0 SECTION LOCAL  DEFAULT   17 
    18: 00000000     0 SECTION LOCAL  DEFAULT   18 
    19: 00000000     0 SECTION LOCAL  DEFAULT   19 
    20: 00000000     0 SECTION LOCAL  DEFAULT   20 
    21: 00000000     0 FILE    LOCAL  DEFAULT  ABS ap/CMakeFiles/ap.dir/star
    22: 0000907e     0 NOTYPE  LOCAL  DEFAULT    1 gdt_ptr
    23: 00009026     0 NOTYPE  LOCAL  DEFAULT    1 apstart32
    24: 0000905e     0 NOTYPE  LOCAL  DEFAULT    1 gdt
    25: 00000000     0 FILE    LOCAL  DEFAULT  ABS init.c
    26: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_main.c
    27: 40000000    47 FUNC    LOCAL  DEFAULT    4 delay
    28: 00000000     0 FILE    LOCAL  DEFAULT  ABS user_syscall.c
    29: 400000ba    92 FUNC    LOCAL  DEFAULT    4 user_syscall
    30: 00000000     0 FILE    LOCAL  DEFAULT  ABS stdio.c
    31: 00000000     0 FILE    LOCAL  DEFAULT  ABS shell.c
    32: 40002120   128 OBJECT  LOCAL  DEFAULT    7 cmd_line
    33: 400021a0    64 OBJECT  LOCAL  DEFAULT    7 argv
    34: 400006fa   176 FUNC    LOCAL  DEFAULT    4 user_readline
    35: 400007aa   196 FUNC    LOCAL  DEFAULT    4 cmd_parse
    36: 00000000     0 FILE    LOCAL  DEFAULT  ABS string.c
    37: 40000bff    44 FUNC    LOCAL  DEFAULT    4 __memset
    38: 40000c91    61 FUNC    LOCAL  DEFAULT    4 __strcmp
    39: 40000d48    61 FUNC    LOCAL  DEFAULT    4 __memcpy
    40: 00000000     0 FILE    LOCAL  DEFAULT  ABS buildin_cmd.c
    41: 40000dcb    94 FUNC    LOCAL  DEFAULT    4 path_parse
    42: 40000e29   330 FUNC    LOCAL  DEFAULT    4 wash_path
    43: 00000000     0 FILE    LOCAL  DEFAULT  ABS asm.c
    44: c10000b2    44 FUNC    LOCAL  DEFAULT    8 __memset
    45: c10000ff    61 FUNC    LOCAL  DEFAULT    8 __memcpy
    46: c100017a    61 FUNC    LOCAL  DEFAULT    8 __strcmp
    47: 00000000     0 FILE    LOCAL  DEFAULT  ABS debug.c
    48: 00000000     0 FILE    LOCAL  DEFAULT  ABS monitor.c
    49: 00000000     0 FILE    LOCAL  DEFAULT  ABS readline.c
    50: c1015000  1024 OBJECT  LOCAL  DEFAULT   11 buf
    51: 00000000     0 FILE    LOCAL  DEFAULT  ABS dt.c
    52: c1015400  2048 OBJECT  LOCAL  DEFAULT   11 idt
    53: c1013078     6 OBJECT  LOCAL  DEFAULT   10 gdtinfo
    54: c1015c00   104 OBJECT  LOCAL  DEFAULT   11 ts
    55: c1013080     6 OBJECT  LOCAL  DEFAULT   10 idtinfo
    56: c10006c1    54 FUNC    LOCAL  DEFAULT    8 lgdt
    57: c10007f6    12 FUNC    LOCAL  DEFAULT    8 lidt
    58: 00000000     0 FILE    LOCAL  DEFAULT  ABS trap.c
    59: c10009fb    37 FUNC    LOCAL  DEFAULT    8 hash32
    60: c10130a0    96 OBJECT  LOCAL  DEFAULT   10 IA32flags
    61: c1000c37   332 FUNC    LOCAL  DEFAULT    8 trap_dispatch
    62: 00000000     0 FILE    LOCAL  DEFAULT  ABS syscall.c
    63: c10018c0    37 FUNC    LOCAL  DEFAULT    8 hash32
    64: c10018e5    35 FUNC    LOCAL  DEFAULT    8 syscall_exit
    65: c1001908    47 FUNC    LOCAL  DEFAULT    8 sys_fork
    66: c1001937    30 FUNC    LOCAL  DEFAULT    8 syscall_wait
    67: c1001955    44 FUNC    LOCAL  DEFAULT    8 sys_exec
    68: c1001981     6 FUNC    LOCAL  DEFAULT    8 sys_yield
    69: c1001987    17 FUNC    LOCAL  DEFAULT    8 sys_kill
    70: c1001998    13 FUNC    LOCAL  DEFAULT    8 sys_getpid
    71: c10019a5    41 FUNC    LOCAL  DEFAULT    8 sys_print_char
    72: c10019ce    39 FUNC    LOCAL  DEFAULT    8 sys_print_string
    73: c10019f5    92 FUNC    LOCAL  DEFAULT    8 sys_print_num
    74: c1001a51    18 FUNC    LOCAL  DEFAULT    8 sys_backtrace
    75: c1001a63    10 FUNC    LOCAL  DEFAULT    8 sys_pgdir
    76: c1001a6d    56 FUNC    LOCAL  DEFAULT    8 sys_fdread
    77: c1001aa5    46 FUNC    LOCAL  DEFAULT    8 syscall_open
    78: c1001ad3    30 FUNC    LOCAL  DEFAULT    8 syscall_close
    79: c1001af1    56 FUNC    LOCAL  DEFAULT    8 syscall_write
    80: c1001b29    60 FUNC    LOCAL  DEFAULT    8 syscall_lseek
    81: c1001b65    30 FUNC    LOCAL  DEFAULT    8 syscall_unlink
    82: c1001b83    30 FUNC    LOCAL  DEFAULT    8 syscall_mkdir
    83: c1001ba1    30 FUNC    LOCAL  DEFAULT    8 syscall_rmdir
    84: c1001bbf    35 FUNC    LOCAL  DEFAULT    8 syscall_rewinddir
    85: c1001be2    42 FUNC    LOCAL  DEFAULT    8 syscall_getcwd
    86: c1001c0c    30 FUNC    LOCAL  DEFAULT    8 syscall_chdir
    87: c1001c2a    44 FUNC    LOCAL  DEFAULT    8 syscall_stat
    88: c1001c56    30 FUNC    LOCAL  DEFAULT    8 syscall_opendir
    89: c1001c74    30 FUNC    LOCAL  DEFAULT    8 syscall_closedir
    90: c1001c92    30 FUNC    LOCAL  DEFAULT    8 syscall_readdir
    91: c1001cb0    18 FUNC    LOCAL  DEFAULT    8 syscall_print_task
    92: c1001cc2    30 FUNC    LOCAL  DEFAULT    8 syscall_malloc
    93: c1001ce0    47 FUNC    LOCAL  DEFAULT    8 syscall_free
    94: c1001d0f    35 FUNC    LOCAL  DEFAULT    8 syscall_pipe
    95: c1001d32    13 FUNC    LOCAL  DEFAULT    8 syscall_socket
    96: c1001d3f    44 FUNC    LOCAL  DEFAULT    8 syscall_bind
    97: c1001d6b    30 FUNC    LOCAL  DEFAULT    8 syscall_listen
    98: c1001d89    44 FUNC    LOCAL  DEFAULT    8 syscall_accept
    99: c1001db5    44 FUNC    LOCAL  DEFAULT    8 syscall_connect
   100: c1013500   256 OBJECT  LOCAL  DEFAULT   10 syscalls
   101: 00000000     0 FILE    LOCAL  DEFAULT  ABS keyboard.c
   102: c1013600   256 OBJECT  LOCAL  DEFAULT   10 shiftcode
   103: c1013700   256 OBJECT  LOCAL  DEFAULT   10 togglecode
   104: c1013800   256 OBJECT  LOCAL  DEFAULT   10 normalmap
   105: c1013900   256 OBJECT  LOCAL  DEFAULT   10 shiftmap
   106: c1013a00   256 OBJECT  LOCAL  DEFAULT   10 ctlmap
   107: c1013b00    16 OBJECT  LOCAL  DEFAULT   10 charcode
   108: 00000000     0 FILE    LOCAL  DEFAULT  ABS main.c
   109: c100204d    37 FUNC    LOCAL  DEFAULT    8 hash32
   110: c1002306   852 FUNC    LOCAL  DEFAULT    8 write2fs
   111: c10029cd    47 FUNC    LOCAL  DEFAULT    8 delay
   112: c100296b    49 FUNC    LOCAL  DEFAULT    8 print_task1
   113: c100299c    49 FUNC    LOCAL  DEFAULT    8 print_task2
   114: 00000000     0 FILE    LOCAL  DEFAULT  ABS pmm.c
   115: 00000000     0 FILE    LOCAL  DEFAULT  ABS vmm.c
   116: c1003057    37 FUNC    LOCAL  DEFAULT    8 hash32
   117: 00000000     0 FILE    LOCAL  DEFAULT  ABS task.c
   118: c1003621    37 FUNC    LOCAL  DEFAULT    8 hash32
   119: c1015c80  8192 OBJECT  LOCAL  DEFAULT   11 hash_list
   120: c1017c80     4 OBJECT  LOCAL  DEFAULT   11 last_pid
   121: c1017c84     8 OBJECT  LOCAL  DEFAULT   11 ready_task_list
   122: c1017c8c     8 OBJECT  LOCAL  DEFAULT   11 all_task_list
   123: c1017c94     4 OBJECT  LOCAL  DEFAULT   11 nr_task
   124: c1003d2e   247 FUNC    LOCAL  DEFAULT    8 alloc_task
   125: c1003b2f    80 FUNC    LOCAL  DEFAULT    8 add_link
   126: c1003b7f    80 FUNC    LOCAL  DEFAULT    8 add_all_link
   127: c1003c02   122 FUNC    LOCAL  DEFAULT    8 add_pid_hash
   128: c10041ed    15 FUNC    LOCAL  DEFAULT    8 wakeup_task
   129: c10039b4    43 FUNC    LOCAL  DEFAULT    8 set_pid_bit
   130: c10039df    43 FUNC    LOCAL  DEFAULT    8 clear_pid_bit
   131: c1003a0a    65 FUNC    LOCAL  DEFAULT    8 find_free_pid
   132: c1003a4b    92 FUNC    LOCAL  DEFAULT    8 alloc_pid
   133: c1003aa7    30 FUNC    LOCAL  DEFAULT    8 free_pid
   134: c1017c98    21 OBJECT  LOCAL  DEFAULT   11 name.2716
   135: c1003bcf    51 FUNC    LOCAL  DEFAULT    8 remove_link
   136: c1003c7c    71 FUNC    LOCAL  DEFAULT    8 remove_pid_hash
   137: c1003cc3   107 FUNC    LOCAL  DEFAULT    8 find_task
   138: c1003e25    29 FUNC    LOCAL  DEFAULT    8 forkret
   139: c1003e42   364 FUNC    LOCAL  DEFAULT    8 copy_thread
   140: c1003fae   167 FUNC    LOCAL  DEFAULT    8 update_inode_open_cnts
   141: c100fe40    23 OBJECT  LOCAL  DEFAULT    9 __func__.2768
   142: c100fe58     8 OBJECT  LOCAL  DEFAULT    9 __func__.2780
   143: c100425b   118 FUNC    LOCAL  DEFAULT    8 task_run
   144: c100fe60    15 OBJECT  LOCAL  DEFAULT    9 __func__.2819
   145: c1004454    92 FUNC    LOCAL  DEFAULT    8 print_taskinfo
   146: c10044d2    28 FUNC    LOCAL  DEFAULT    8 kernel_execve
   147: c10044ee     6 FUNC    LOCAL  DEFAULT    8 user_main
   148: c10049c2    40 FUNC    LOCAL  DEFAULT    8 find_child
   149: c10049ea    50 FUNC    LOCAL  DEFAULT    8 find_hanging_child
   150: c1004a1c    43 FUNC    LOCAL  DEFAULT    8 task0_adopt_a_child
   151: c100fe70     9 OBJECT  LOCAL  DEFAULT    9 __func__.2926
   152: 00000000     0 FILE    LOCAL  DEFAULT  ABS exec.c
   153: c1004f95    37 FUNC    LOCAL  DEFAULT    8 hash32
   154: c1004fba   168 FUNC    LOCAL  DEFAULT    8 segment_load
   155: c1005062   397 FUNC    LOCAL  DEFAULT    8 load
   156: 00000000     0 FILE    LOCAL  DEFAULT  ABS pic.c
   157: c1014b24     2 OBJECT  LOCAL  DEFAULT   10 irq_mask
   158: c1017cad     1 OBJECT  LOCAL  DEFAULT   11 did_init
   159: c10052a1    94 FUNC    LOCAL  DEFAULT    8 pic_setmask
   160: 00000000     0 FILE    LOCAL  DEFAULT  ABS serial.c
   161: c1017cae     1 OBJECT  LOCAL  DEFAULT   11 serial_exists
   162: 00000000     0 FILE    LOCAL  DEFAULT  ABS timer.c
   163: 00000000     0 FILE    LOCAL  DEFAULT  ABS vga.c
   164: c1017caf     1 OBJECT  LOCAL  DEFAULT   11 cursor_x
   165: c1017cb0     1 OBJECT  LOCAL  DEFAULT   11 cursor_y
   166: c1014b28     4 OBJECT  LOCAL  DEFAULT   10 vga_memory
   167: 00000000     0 FILE    LOCAL  DEFAULT  ABS sync.c
   168: c10060d2    37 FUNC    LOCAL  DEFAULT    8 hash32
   169: c1010040    10 OBJECT  LOCAL  DEFAULT    9 __func__.2591
   170: 00000000     0 FILE    LOCAL  DEFAULT  ABS ide-dev.c
   171: c1006363    40 FUNC    LOCAL  DEFAULT    8 waitdisk
   172: c100638b    38 FUNC    LOCAL  DEFAULT    8 insl
   173: c10063b1    38 FUNC    LOCAL  DEFAULT    8 outsl
   174: c10063d7   186 FUNC    LOCAL  DEFAULT    8 ide_read_sect
   175: c1006491   186 FUNC    LOCAL  DEFAULT    8 ide_write_sect
   176: c10065c5    47 FUNC    LOCAL  DEFAULT    8 delay
   177: 00000000     0 FILE    LOCAL  DEFAULT  ABS fs.c
   178: c10066b4    37 FUNC    LOCAL  DEFAULT    8 hash32
   179: c10066d9  1171 FUNC    LOCAL  DEFAULT    8 partition_format
   180: c1006e29    94 FUNC    LOCAL  DEFAULT    8 path_parse
   181: c1010850    15 OBJECT  LOCAL  DEFAULT    9 __func__.2662
   182: c1006f0f   656 FUNC    LOCAL  DEFAULT    8 search_file
   183: c1010860    12 OBJECT  LOCAL  DEFAULT    9 __func__.2674
   184: c101086c     9 OBJECT  LOCAL  DEFAULT    9 __func__.2687
   185: c1010878    16 OBJECT  LOCAL  DEFAULT    9 __func__.2701
   186: c1010888     9 OBJECT  LOCAL  DEFAULT    9 __func__.2721
   187: c1010894    10 OBJECT  LOCAL  DEFAULT    9 __func__.2734
   188: c10108a0    11 OBJECT  LOCAL  DEFAULT    9 __func__.2746
   189: c10108ac    10 OBJECT  LOCAL  DEFAULT    9 __func__.2776
   190: c10108b8    12 OBJECT  LOCAL  DEFAULT    9 __func__.2787
   191: c10108c4    12 OBJECT  LOCAL  DEFAULT    9 __func__.2798
   192: c10108d0    10 OBJECT  LOCAL  DEFAULT    9 __func__.2807
   193: c100818e   184 FUNC    LOCAL  DEFAULT    8 get_parent_dir_inode_nr
   194: c10108dc    24 OBJECT  LOCAL  DEFAULT    9 __func__.2820
   195: c1008246   423 FUNC    LOCAL  DEFAULT    8 get_child_dir_name
   196: c10108f4    11 OBJECT  LOCAL  DEFAULT    9 __func__.2849
   197: 00000000     0 FILE    LOCAL  DEFAULT  ABS dir.c
   198: c10087a6    37 FUNC    LOCAL  DEFAULT    8 hash32
   199: c1010ae8    17 OBJECT  LOCAL  DEFAULT    9 __func__.2635
   200: c1010afc    15 OBJECT  LOCAL  DEFAULT    9 __func__.2644
   201: c1010b0c    17 OBJECT  LOCAL  DEFAULT    9 __func__.2685
   202: c1010b20     9 OBJECT  LOCAL  DEFAULT    9 __func__.2714
   203: c1010b2c    11 OBJECT  LOCAL  DEFAULT    9 __func__.2729
   204: 00000000     0 FILE    LOCAL  DEFAULT  ABS file.c
   205: c100968f    37 FUNC    LOCAL  DEFAULT    8 hash32
   206: c1010f4c    11 OBJECT  LOCAL  DEFAULT    9 __func__.2694
   207: c1010f58    10 OBJECT  LOCAL  DEFAULT    9 __func__.2724
   208: 00000000     0 FILE    LOCAL  DEFAULT  ABS inode.c
   209: c100a83a    37 FUNC    LOCAL  DEFAULT    8 hash32
   210: c100a85f   114 FUNC    LOCAL  DEFAULT    8 inode_locate
   211: c1011020    13 OBJECT  LOCAL  DEFAULT    9 __func__.2633
   212: c1011030    14 OBJECT  LOCAL  DEFAULT    9 __func__.2641
   213: 00000000     0 FILE    LOCAL  DEFAULT  ABS pipe.c
   214: c100aef3    37 FUNC    LOCAL  DEFAULT    8 hash32
   215: 00000000     0 FILE    LOCAL  DEFAULT  ABS ioqueue.c
   216: c100b104    37 FUNC    LOCAL  DEFAULT    8 hash32
   217: c100b16d    28 FUNC    LOCAL  DEFAULT    8 next_pos
   218: c100b1a8    22 FUNC    LOCAL  DEFAULT    8 ioq_empty
   219: c100b1be    70 FUNC    LOCAL  DEFAULT    8 ioq_wait
   220: c10110a8     9 OBJECT  LOCAL  DEFAULT    9 __func__.2610
   221: c100b204    66 FUNC    LOCAL  DEFAULT    8 wakeup
   222: c10110b4     7 OBJECT  LOCAL  DEFAULT    9 __func__.2614
   223: 00000000     0 FILE    LOCAL  DEFAULT  ABS apic.c
   224: c100b8f5    57 FUNC    LOCAL  DEFAULT    8 wait_8254_wraparound
   225: c100bb2a    51 FUNC    LOCAL  DEFAULT    8 lapic_wrmsr
   226: 00000000     0 FILE    LOCAL  DEFAULT  ABS mp_config.c
   227: 00000000     0 FILE    LOCAL  DEFAULT  ABS ap.c
   228: 00000000     0 FILE    LOCAL  DEFAULT  ABS pci.c
   229: 00000000     0 FILE    LOCAL  DEFAULT  ABS rtl8139.c
   230: 00000000     0 FILE    LOCAL  DEFAULT  ABS ethernet.c
   231: 00000000     0 FILE    LOCAL  DEFAULT  ABS arp.c
   232: 00000000     0 FILE    LOCAL  DEFAULT  ABS ip.c
   233: 00000000     0 FILE    LOCAL  DEFAULT  ABS icmp.c
   234: 00000000     0 FILE    LOCAL  DEFAULT  ABS localsocket.c
   235: c100f231    37 FUNC    LOCAL  DEFAULT    8 hash32
   236: c100bb5d    59 FUNC    GLOBAL DEFAULT    8 init_lapic
   237: c1001818     0 NOTYPE  GLOBAL DEFAULT    8 vector242
   238: c100126f     0 NOTYPE  GLOBAL DEFAULT    8 vector119
   239: c1009d4b  1890 FUNC    GLOBAL DEFAULT    8 file_write
   240: c100114f     0 NOTYPE  GLOBAL DEFAULT    8 vector87
   241: c1001146     0 NOTYPE  GLOBAL DEFAULT    8 vector86
   242: c100743d   212 FUNC    GLOBAL DEFAULT    8 sys_close
   243: c100b373    83 FUNC    GLOBAL DEFAULT    8 ioq_length
   244: c1009c0c   255 FUNC    GLOBAL DEFAULT    8 file_open
   245: c1001884     0 NOTYPE  GLOBAL DEFAULT    8 vector251
   246: c100024e    48 FUNC    GLOBAL DEFAULT    8 strcpy
   247: c1006b6c   701 FUNC    GLOBAL DEFAULT    8 mount_partition
   248: c1001fd3    25 FUNC    GLOBAL DEFAULT    8 kbd_intr
   249: c1000000    29 FUNC    GLOBAL DEFAULT    8 inb
   250: 4000086e   913 FUNC    GLOBAL DEFAULT    4 my_shell
   251: c1001173     0 NOTYPE  GLOBAL DEFAULT    8 vector91
   252: c1000f69     0 NOTYPE  GLOBAL DEFAULT    8 vector33
   253: c1002748   534 FUNC    GLOBAL DEFAULT    8 test_vmm
   254: c1001458     0 NOTYPE  GLOBAL DEFAULT    8 vector162
   255: 40000c2b    33 FUNC    GLOBAL DEFAULT    4 user_memset
   256: c10016bc     0 NOTYPE  GLOBAL DEFAULT    8 vector213
   257: 40000f73   195 FUNC    GLOBAL DEFAULT    4 make_clear_abs_path
   258: c100120c     0 NOTYPE  GLOBAL DEFAULT    8 vector108
   259: c1000fc3     0 NOTYPE  GLOBAL DEFAULT    8 vector43
   260: c1003afa    53 FUNC    GLOBAL DEFAULT    8 get_task_name
   261: c100d00b   405 FUNC    GLOBAL DEFAULT    8 dump
   262: c100c23e   261 FUNC    GLOBAL DEFAULT    8 check_floating_pointer_ex
   263: c100147c     0 NOTYPE  GLOBAL DEFAULT    8 vector165
   264: c10048be    48 FUNC    GLOBAL DEFAULT    8 pte_ptr
   265: c100156c     0 NOTYPE  GLOBAL DEFAULT    8 vector185
   266: c100dba5   104 FUNC    GLOBAL DEFAULT    8 insert_net_send_list
   267: c1a1cb40    52 OBJECT  GLOBAL DEFAULT   11 rtl
   268: c100124b     0 NOTYPE  GLOBAL DEFAULT    8 vector115
   269: c100359e    91 FUNC    GLOBAL DEFAULT    8 sys_free
   270: c1618000  4096 OBJECT  GLOBAL DEFAULT   11 new_pdt
   271: 400003db   769 FUNC    GLOBAL DEFAULT    4 printf
   272: c100128a     0 NOTYPE  GLOBAL DEFAULT    8 vector122
   273: c100c933   295 FUNC    GLOBAL DEFAULT    8 start_ap
   274: c100aae2   252 FUNC    GLOBAL DEFAULT    8 inode_delete
   275: c100805e    16 FUNC    GLOBAL DEFAULT    8 sys_rewinddir
   276: c1001e58   379 FUNC    GLOBAL DEFAULT    8 kbd_proc_data
   277: c1001410     0 NOTYPE  GLOBAL DEFAULT    8 vector156
   278: c100183c     0 NOTYPE  GLOBAL DEFAULT    8 vector245
   279: 400003c9    18 FUNC    GLOBAL DEFAULT    4 connect
   280: c100159c     0 NOTYPE  GLOBAL DEFAULT    8 vector189
   281: c1000e8f     0 NOTYPE  GLOBAL DEFAULT    8 vector7
   282: c1001065     0 NOTYPE  GLOBAL DEFAULT    8 vector61
   283: c1000f18     0 NOTYPE  GLOBAL DEFAULT    8 vector24
   284: 00107000  4096 OBJECT  GLOBAL DEFAULT    3 stack_pt
   285: c1001227     0 NOTYPE  GLOBAL DEFAULT    8 vector111
   286: c1001620     0 NOTYPE  GLOBAL DEFAULT    8 vector200
   287: c10077bb   230 FUNC    GLOBAL DEFAULT    8 sys_lseek
   288: c1001fec    97 FUNC    GLOBAL DEFAULT    8 kbd_init
   289: c100e64e    19 FUNC    GLOBAL DEFAULT    8 check_same_subnet
   290: c1017ce0    12 OBJECT  GLOBAL DEFAULT   11 highmem_zone
   291: c100a9f2   214 FUNC    GLOBAL DEFAULT    8 inode_open
   292: c100109b     0 NOTYPE  GLOBAL DEFAULT    8 vector67
   293: c100cb8f    37 FUNC    GLOBAL DEFAULT    8 apmain
   294: c1015c68     4 OBJECT  GLOBAL DEFAULT   11 shift
   295: 00105000  4096 OBJECT  GLOBAL DEFAULT    3 pt2
   296: c1001338     0 NOTYPE  GLOBAL DEFAULT    8 vector138
   297: c10010da     0 NOTYPE  GLOBAL DEFAULT    8 vector74
   298: c1a1cba0    20 OBJECT  GLOBAL DEFAULT   11 local_lock
   299: c1001041     0 NOTYPE  GLOBAL DEFAULT    8 vector57
   300: c1005640    85 FUNC    GLOBAL DEFAULT    8 cons_intr
   301: c100591e   285 FUNC    GLOBAL DEFAULT    8 print_char
   302: c1000ae0   343 FUNC    GLOBAL DEFAULT    8 print_trapframe
   303: c100ca5a   309 FUNC    GLOBAL DEFAULT    8 ap_init
   304: c10016c8     0 NOTYPE  GLOBAL DEFAULT    8 vector214
   305: c1a1cb74     4 OBJECT  GLOBAL DEFAULT   11 my_ip
   306: c10011bb     0 NOTYPE  GLOBAL DEFAULT    8 vector99
   307: c1008aed  1083 FUNC    GLOBAL DEFAULT    8 sync_dir_entry
   308: c1000e28     0 NOTYPE  GLOBAL DEFAULT    8 __alltraps
   309: c100e7fa   532 FUNC    GLOBAL DEFAULT    8 send_ip_packet
   310: c1006076    92 FUNC    GLOBAL DEFAULT    8 cons_getc
   311: c100135c     0 NOTYPE  GLOBAL DEFAULT    8 vector141
   312: 4000150a   146 FUNC    GLOBAL DEFAULT    4 buildin_mkdir
   313: c10098c7   132 FUNC    GLOBAL DEFAULT    8 bitmap_sync
   314: c10014d0     0 NOTYPE  GLOBAL DEFAULT    8 vector172
   315: c100180c     0 NOTYPE  GLOBAL DEFAULT    8 vector241
   316: c1007ab5  1082 FUNC    GLOBAL DEFAULT    8 sys_mkdir
   317: c1a1cbb4    12 OBJECT  GLOBAL DEFAULT   11 local_wait_connect_sema
   318: c100f36b   214 FUNC    GLOBAL DEFAULT    8 sys_socket
   319: c100189c     0 NOTYPE  GLOBAL DEFAULT    8 vector253
   320: c1000e6b     0 NOTYPE  GLOBAL DEFAULT    8 vector3
   321: c1000e4a     0 NOTYPE  GLOBAL DEFAULT    8 forkrets
   322: c1000e62     0 NOTYPE  GLOBAL DEFAULT    8 vector2
   323: 00103000  4096 OBJECT  GLOBAL DEFAULT    3 pt
   324: c1004055   408 FUNC    GLOBAL DEFAULT    8 do_fork
   325: c1001764     0 NOTYPE  GLOBAL DEFAULT    8 vector227
   326: c10041fc    95 FUNC    GLOBAL DEFAULT    8 kernel_thread
   327: c1001698     0 NOTYPE  GLOBAL DEFAULT    8 vector210
   328: c100ebcc   204 FUNC    GLOBAL DEFAULT    8 wake_up_ip_packet
   329: c1008a81   108 FUNC    GLOBAL DEFAULT    8 create_dir_entry
   330: c1001740     0 NOTYPE  GLOBAL DEFAULT    8 vector224
   331: 400002d5    15 FUNC    GLOBAL DEFAULT    4 ps
   332: c1000fb1     0 NOTYPE  GLOBAL DEFAULT    8 vector41
   333: 40000185    16 FUNC    GLOBAL DEFAULT    4 user_backtrace
   334: c100c6a2   171 FUNC    GLOBAL DEFAULT    8 mp_config_io_interrupt_du
   335: c100ef48   117 FUNC    GLOBAL DEFAULT    8 receive_icmp_reply
   336: c1000efd     0 NOTYPE  GLOBAL DEFAULT    8 vector21
   337: c100150c     0 NOTYPE  GLOBAL DEFAULT    8 vector177
   338: c1001266     0 NOTYPE  GLOBAL DEFAULT    8 vector118
   339: c10010b6     0 NOTYPE  GLOBAL DEFAULT    8 vector70
   340: c100b806    44 FUNC    GLOBAL DEFAULT    8 global_enable
   341: c1013b14     4 OBJECT  GLOBAL DEFAULT   10 highmem_end
   342: c1a1c000     4 OBJECT  GLOBAL DEFAULT   11 task0
   343: c100654b    61 FUNC    GLOBAL DEFAULT    8 ide_read
   344: c10010ad     0 NOTYPE  GLOBAL DEFAULT    8 vector69
   345: c10017dc     0 NOTYPE  GLOBAL DEFAULT    8 vector237
   346: c1001080     0 NOTYPE  GLOBAL DEFAULT    8 vector64
   347: c1000f33     0 NOTYPE  GLOBAL DEFAULT    8 vector27
   348: c10012f0     0 NOTYPE  GLOBAL DEFAULT    8 vector132
   349: c1001578     0 NOTYPE  GLOBAL DEFAULT    8 vector186
   350: c100766a   337 FUNC    GLOBAL DEFAULT    8 sys_read
   351: c10016ec     0 NOTYPE  GLOBAL DEFAULT    8 vector217
   352: c1004ea7   178 FUNC    GLOBAL DEFAULT    8 sys_print_task
   353: c100f477    69 FUNC    GLOBAL DEFAULT    8 sys_listen
   354: c1004f59     0 NOTYPE  GLOBAL DEFAULT    8 kernel_thread_entry
   355: c100013c    22 FUNC    GLOBAL DEFAULT    8 memcpy
   356: c100c071   243 FUNC    GLOBAL DEFAULT    8 mp_floating_dump
   357: c10095c7   200 FUNC    GLOBAL DEFAULT    8 dir_remove
   358: c1000e59     0 NOTYPE  GLOBAL DEFAULT    8 vector1
   359: c1001518     0 NOTYPE  GLOBAL DEFAULT    8 vector178
   360: c1000f96     0 NOTYPE  GLOBAL DEFAULT    8 vector38
   361: c1005695    79 FUNC    GLOBAL DEFAULT    8 serial_proc_data
   362: c10017e8     0 NOTYPE  GLOBAL DEFAULT    8 vector238
   363: 400006dc    30 FUNC    GLOBAL DEFAULT    4 print_prompt
   364: c100c808   182 FUNC    GLOBAL DEFAULT    8 parse_config_entries
   365: c100bc77    68 FUNC    GLOBAL DEFAULT    8 enable_irq
   366: c100b246   149 FUNC    GLOBAL DEFAULT    8 ioq_getchar
   367: c10096b4    63 FUNC    GLOBAL DEFAULT    8 get_free_slot_in_global
   368: c10003a7    62 FUNC    GLOBAL DEFAULT    8 __PANIC
   369: c10005ff   194 FUNC    GLOBAL DEFAULT    8 readline
   370: c10012fc     0 NOTYPE  GLOBAL DEFAULT    8 vector133
   371: c10010d1     0 NOTYPE  GLOBAL DEFAULT    8 vector73
   372: c1001380     0 NOTYPE  GLOBAL DEFAULT    8 vector144
   373: c1008f28  1186 FUNC    GLOBAL DEFAULT    8 delete_dir_entry
   374: c1017d00 0x600000 OBJECT  GLOBAL DEFAULT   11 pp
   375: c100b2db   152 FUNC    GLOBAL DEFAULT    8 ioq_putchar
   376: c100c44b   205 FUNC    GLOBAL DEFAULT    8 find_config_table
   377: c100027e    12 FUNC    GLOBAL DEFAULT    8 CPU_INVLPG
   378: c10018a8     0 NOTYPE  GLOBAL DEFAULT    8 vector254
   379: 40000250    19 FUNC    GLOBAL DEFAULT    4 rewinddir
   380: c10011cd     0 NOTYPE  GLOBAL DEFAULT    8 vector101
   381: c10016a4     0 NOTYPE  GLOBAL DEFAULT    8 vector211
   382: c1619000 0x300000 OBJECT  GLOBAL DEFAULT   11 user_pt_highmem
   383: c10014e8     0 NOTYPE  GLOBAL DEFAULT    8 vector174
   384: 400002e4    18 FUNC    GLOBAL DEFAULT    4 malloc
   385: c1001824     0 NOTYPE  GLOBAL DEFAULT    8 vector243
   386: c1013040    56 OBJECT  GLOBAL DEFAULT   10 gdt
   387: 4000002f    35 FUNC    GLOBAL DEFAULT    4 test_fork
   388: c10012c0     0 NOTYPE  GLOBAL DEFAULT    8 vector128
   389: c1001119     0 NOTYPE  GLOBAL DEFAULT    8 vector81
   390: c100ec98   344 FUNC    GLOBAL DEFAULT    8 send_icmp_request
   391: c1000ebb     0 NOTYPE  GLOBAL DEFAULT    8 vector13
   392: c100bcfb    40 FUNC    GLOBAL DEFAULT    8 get_cpuid
   393: c1017cc4    12 OBJECT  GLOBAL DEFAULT   11 user_sema
   394: c100100b     0 NOTYPE  GLOBAL DEFAULT    8 vector51
   395: c1000ed2     0 NOTYPE  GLOBAL DEFAULT    8 vector16
   396: 00102000  4096 OBJECT  GLOBAL DEFAULT    3 pt_init
   397: c100ba67    35 FUNC    GLOBAL DEFAULT    8 init_timer
   398: 40001d20   512 OBJECT  GLOBAL DEFAULT    7 cwd_cache
   399: c1001800     0 NOTYPE  GLOBAL DEFAULT    8 vector240
   400: c1001026     0 NOTYPE  GLOBAL DEFAULT    8 vector54
   401: c1000eeb     0 NOTYPE  GLOBAL DEFAULT    8 vector19
   402: c1002eb4   252 FUNC    GLOBAL DEFAULT    8 pmm_alloc
   403: c100117c     0 NOTYPE  GLOBAL DEFAULT    8 vector92
   404: c1005708    85 FUNC    GLOBAL DEFAULT    8 serial_putc_sub
   405: c1001830     0 NOTYPE  GLOBAL DEFAULT    8 vector244
   406: c1001350     0 NOTYPE  GLOBAL DEFAULT    8 vector140
   407: c100c518   152 FUNC    GLOBAL DEFAULT    8 mp_config_processor_dump
   408: c1017cb8     4 OBJECT  GLOBAL DEFAULT   11 ap_started
   409: c1000fd5     0 NOTYPE  GLOBAL DEFAULT    8 vector45
   410: c10093ca   469 FUNC    GLOBAL DEFAULT    8 dir_read
   411: c1001107     0 NOTYPE  GLOBAL DEFAULT    8 vector79
   412: 40001036    96 FUNC    GLOBAL DEFAULT    4 buildin_pwd
   413: c100177c     0 NOTYPE  GLOBAL DEFAULT    8 vector229
   414: 4000023e    18 FUNC    GLOBAL DEFAULT    4 rmdir
   415: c1001428     0 NOTYPE  GLOBAL DEFAULT    8 vector158
   416: c100c621   129 FUNC    GLOBAL DEFAULT    8 mp_config_io_apic_dump
   417: c10052ff    51 FUNC    GLOBAL DEFAULT    8 pic_enable
   418: c100265f   233 FUNC    GLOBAL DEFAULT    8 test_pmm
   419: 4000037e    15 FUNC    GLOBAL DEFAULT    4 socket
   420: 400002c3    18 FUNC    GLOBAL DEFAULT    4 readdir
   421: c1000f9f     0 NOTYPE  GLOBAL DEFAULT    8 vector39
   422: c100070e   232 FUNC    GLOBAL DEFAULT    8 gdt_init
   423: c10014a0     0 NOTYPE  GLOBAL DEFAULT    8 vector168
   424: c1a1cb78     4 OBJECT  GLOBAL DEFAULT   11 my_mask
   425: c100bbf2   133 FUNC    GLOBAL DEFAULT    8 ioapic_init
   426: c1000f7b     0 NOTYPE  GLOBAL DEFAULT    8 vector35
   427: c1001239     0 NOTYPE  GLOBAL DEFAULT    8 vector113
   428: c10035f9    40 FUNC    GLOBAL DEFAULT    8 sys_mmap
   429: c1013b10     4 OBJECT  GLOBAL DEFAULT   10 highmem_start
   430: c10012a5     0 NOTYPE  GLOBAL DEFAULT    8 vector125
   431: c100959f    40 FUNC    GLOBAL DEFAULT    8 dir_is_empty
   432: 400016dc     4 OBJECT  GLOBAL DEFAULT    5 argc
   433: c100c8be   117 FUNC    GLOBAL DEFAULT    8 mp_config_init
   434: c100bcbb    29 FUNC    GLOBAL DEFAULT    8 ioapic_read
   435: c100994b   705 FUNC    GLOBAL DEFAULT    8 file_create
   436: c1a1c228     4 OBJECT  GLOBAL DEFAULT   11 second
   437: c100b438   163 FUNC    GLOBAL DEFAULT    8 test_apic
   438: 40000116    15 FUNC    GLOBAL DEFAULT    4 user_sys_getpid
   439: c10016e0     0 NOTYPE  GLOBAL DEFAULT    8 vector216
   440: 400001f7    35 FUNC    GLOBAL DEFAULT    4 lseek
   441: c1001077     0 NOTYPE  GLOBAL DEFAULT    8 vector63
   442: c1000f2a     0 NOTYPE  GLOBAL DEFAULT    8 vector26
   443: c10056e4    36 FUNC    GLOBAL DEFAULT    8 serial_intr
   444: c10015cc     0 NOTYPE  GLOBAL DEFAULT    8 vector193
   445: c10015f0     0 NOTYPE  GLOBAL DEFAULT    8 vector196
   446: c100168c     0 NOTYPE  GLOBAL DEFAULT    8 vector209
   447: 4000031b    24 FUNC    GLOBAL DEFAULT    4 mmap
   448: c1000e74     0 NOTYPE  GLOBAL DEFAULT    8 vector4
   449: c1006630   132 FUNC    GLOBAL DEFAULT    8 test_ide_io
   450: c1a1cbc0 0x21000 OBJECT  GLOBAL DEFAULT   11 local_sockets
   451: c10014b8     0 NOTYPE  GLOBAL DEFAULT    8 vector170
   452: c10042d1   165 FUNC    GLOBAL DEFAULT    8 schedule
   453: c1001320     0 NOTYPE  GLOBAL DEFAULT    8 vector136
   454: c1000ea6     0 NOTYPE  GLOBAL DEFAULT    8 vector10
   455: c1001668     0 NOTYPE  GLOBAL DEFAULT    8 vector206
   456: c10018b4     0 NOTYPE  GLOBAL DEFAULT    8 vector255
   457: c100f136   251 FUNC    GLOBAL DEFAULT    8 receive_echo_reply
   458: c100b417    15 FUNC    GLOBAL DEFAULT    8 apic_read
   459: c10034e3    92 FUNC    GLOBAL DEFAULT    8 setup_pgdir
   460: c100153c     0 NOTYPE  GLOBAL DEFAULT    8 vector181
   461: 4000162e   146 FUNC    GLOBAL DEFAULT    4 buildin_rm
   462: c1617d00    12 OBJECT  GLOBAL DEFAULT   11 normal_zone
   463: c1008793    19 FUNC    GLOBAL DEFAULT    8 fs_init
   464: c1001053     0 NOTYPE  GLOBAL DEFAULT    8 vector59
   465: c1a1c234     4 OBJECT  GLOBAL DEFAULT   11 root_dir
   466: c10045ae   296 FUNC    GLOBAL DEFAULT    8 copy_user_cr3
   467: c100113d     0 NOTYPE  GLOBAL DEFAULT    8 vector85
   468: c1001134     0 NOTYPE  GLOBAL DEFAULT    8 vector84
   469: c1004f5e     0 NOTYPE  GLOBAL DEFAULT    8 switch_to
   470: c1001554     0 NOTYPE  GLOBAL DEFAULT    8 vector183
   471: c100f441    54 FUNC    GLOBAL DEFAULT    8 sys_bind
   472: c10006f7    23 FUNC    GLOBAL DEFAULT    8 ltr
   473: c1001434     0 NOTYPE  GLOBAL DEFAULT    8 vector159
   474: c1017cbc     4 OBJECT  GLOBAL DEFAULT   11 pci_devices_num
   475: c10016b0     0 NOTYPE  GLOBAL DEFAULT    8 vector212
   476: c1a1cb7c     6 OBJECT  GLOBAL DEFAULT   11 my_mac
   477: c100af18    46 FUNC    GLOBAL DEFAULT    8 is_pipe
   478: c1004b84   803 FUNC    GLOBAL DEFAULT    8 user_task_init
   479: c1000fe7     0 NOTYPE  GLOBAL DEFAULT    8 vector47
   480: c1001770     0 NOTYPE  GLOBAL DEFAULT    8 vector228
   481: c1000fba     0 NOTYPE  GLOBAL DEFAULT    8 vector42
   482: c1000478    47 FUNC    GLOBAL DEFAULT    8 instr_hello
   483: 4000036c    18 FUNC    GLOBAL DEFAULT    4 pipe
   484: c1001242     0 NOTYPE  GLOBAL DEFAULT    8 vector114
   485: c1017cc0     2 OBJECT  GLOBAL DEFAULT   11 id
   486: c100c343   264 FUNC    GLOBAL DEFAULT    8 mp_config_table_dump
   487: c10014f4     0 NOTYPE  GLOBAL DEFAULT    8 vector175
   488: c1001374     0 NOTYPE  GLOBAL DEFAULT    8 vector143
   489: c100307c   349 FUNC    GLOBAL DEFAULT    8 setup_vpt
   490: 400003b4    21 FUNC    GLOBAL DEFAULT    4 accept
   491: c10012d8     0 NOTYPE  GLOBAL DEFAULT    8 vector130
   492: c100b8be    55 FUNC    GLOBAL DEFAULT    8 setup_lvt_timer
   493: c1001848     0 NOTYPE  GLOBAL DEFAULT    8 vector246
   494: c1000e9f     0 NOTYPE  GLOBAL DEFAULT    8 vector9
   495: c1001368     0 NOTYPE  GLOBAL DEFAULT    8 vector142
   496: c10011c4     0 NOTYPE  GLOBAL DEFAULT    8 vector100
   497: c100001d    31 FUNC    GLOBAL DEFAULT    8 inw
   498: c100885b   492 FUNC    GLOBAL DEFAULT    8 search_dir_entry
   499: c100162c     0 NOTYPE  GLOBAL DEFAULT    8 vector201
   500: c10044f4   186 FUNC    GLOBAL DEFAULT    8 set_user_cr3
   501: c100211f   151 FUNC    GLOBAL DEFAULT    8 test_arp
   502: c10043a4   176 FUNC    GLOBAL DEFAULT    8 thread_unblock
   503: c10001ca    63 FUNC    GLOBAL DEFAULT    8 strrchr
   504: c1000802   491 FUNC    GLOBAL DEFAULT    8 idt_init
   505: 00101000  4096 OBJECT  GLOBAL DEFAULT    3 pdt
   506: c100ddd9   272 FUNC    GLOBAL DEFAULT    8 build_ef
   507: c100265a     5 FUNC    GLOBAL DEFAULT    8 kernel_main
   508: c100105c     0 NOTYPE  GLOBAL DEFAULT    8 vector60
   509: c1000f0f     0 NOTYPE  GLOBAL DEFAULT    8 vector23
   510: c10057a3   124 FUNC    GLOBAL DEFAULT    8 timer_init
   511: c1008029    53 FUNC    GLOBAL DEFAULT    8 sys_readdir
   512: c100ea0e   446 FUNC    GLOBAL DEFAULT    8 receive_ip_packet
   513: c10017d0     0 NOTYPE  GLOBAL DEFAULT    8 vector236
   514: c1002fb0   167 FUNC    GLOBAL DEFAULT    8 pmm_free
   515: 400001df    24 FUNC    GLOBAL DEFAULT    4 write
   516: c100f256   277 FUNC    GLOBAL DEFAULT    8 socket_init
   517: c100719f   604 FUNC    GLOBAL DEFAULT    8 sys_open
   518: c1001794     0 NOTYPE  GLOBAL DEFAULT    8 vector231
   519: c1005bf1   178 FUNC    GLOBAL DEFAULT    8 backtrace
   520: c1001092     0 NOTYPE  GLOBAL DEFAULT    8 vector66
   521: c1000f45     0 NOTYPE  GLOBAL DEFAULT    8 vector29
   522: c1a1c440     4 OBJECT  GLOBAL DEFAULT   11 m_config_table_header
   523: c1001314     0 NOTYPE  GLOBAL DEFAULT    8 vector135
   524: 40000d9b    48 FUNC    GLOBAL DEFAULT    4 user_strcpy
   525: c10058a6   120 FUNC    GLOBAL DEFAULT    8 clear
   526: 00106000  4096 OBJECT  GLOBAL DEFAULT    3 pt3
   527: c10010f5     0 NOTYPE  GLOBAL DEFAULT    8 vector77
   528: c100b88e    48 FUNC    GLOBAL DEFAULT    8 software_disable
   529: c10004a7   125 FUNC    GLOBAL DEFAULT    8 instr_help
   530: c1000209    69 FUNC    GLOBAL DEFAULT    8 strcat
   531: c1001530     0 NOTYPE  GLOBAL DEFAULT    8 vector180
   532: 4000038d    21 FUNC    GLOBAL DEFAULT    4 bind
   533: c1001680     0 NOTYPE  GLOBAL DEFAULT    8 vector208
   534: c1000524   193 FUNC    GLOBAL DEFAULT    8 instr_game
   535: c10011b2     0 NOTYPE  GLOBAL DEFAULT    8 vector98
   536: c10011a9     0 NOTYPE  GLOBAL DEFAULT    8 vector97
   537: c10033f6   237 FUNC    GLOBAL DEFAULT    8 vmm_map
   538: c10073fb    66 FUNC    GLOBAL DEFAULT    8 fd_local2global
   539: c1001500     0 NOTYPE  GLOBAL DEFAULT    8 vector176
   540: c10015d8     0 NOTYPE  GLOBAL DEFAULT    8 vector194
   541: c1000f60     0 NOTYPE  GLOBAL DEFAULT    8 vector32
   542: 40000278    18 FUNC    GLOBAL DEFAULT    4 chdir
   543: c1001614     0 NOTYPE  GLOBAL DEFAULT    8 vector199
   544: c10044b0    24 FUNC    GLOBAL DEFAULT    8 do_exit
   545: c100f4bc   349 FUNC    GLOBAL DEFAULT    8 sys_accept
   546: 40000d20    40 FUNC    GLOBAL DEFAULT    4 user_strlen
   547: c10012e4     0 NOTYPE  GLOBAL DEFAULT    8 vector131
   548: c1001890     0 NOTYPE  GLOBAL DEFAULT    8 vector252
   549: c1000e50     0 NOTYPE  GLOBAL DEFAULT    8 vector0
   550: c100b3db    60 FUNC    GLOBAL DEFAULT    8 apic_write64
   551: c100b85e    48 FUNC    GLOBAL DEFAULT    8 software_enable
   552: c1004376    46 FUNC    GLOBAL DEFAULT    8 thread_block
   553: c100b4db   811 FUNC    GLOBAL DEFAULT    8 check
   554: c1006038    62 FUNC    GLOBAL DEFAULT    8 cons_putc
   555: c100bbdd    21 FUNC    GLOBAL DEFAULT    8 eoi
   556: 40000333    21 FUNC    GLOBAL DEFAULT    4 exec
   557: c100138c     0 NOTYPE  GLOBAL DEFAULT    8 vector145
   558: c1a1c004     4 OBJECT  GLOBAL DEFAULT   11 task1
   559: c1007511   345 FUNC    GLOBAL DEFAULT    8 sys_write
   560: c1001203     0 NOTYPE  GLOBAL DEFAULT    8 vector107
   561: c1000fa8     0 NOTYPE  GLOBAL DEFAULT    8 vector40
   562: 40000348    18 FUNC    GLOBAL DEFAULT    4 wait
   563: c1000dc5    31 FUNC    GLOBAL DEFAULT    8 intr_enable
   564: c10011d6     0 NOTYPE  GLOBAL DEFAULT    8 vector102
   565: c100a4ad   909 FUNC    GLOBAL DEFAULT    8 file_read
   566: 40000156    47 FUNC    GLOBAL DEFAULT    4 user_print_num
   567: c1001038     0 NOTYPE  GLOBAL DEFAULT    8 vector56
   568: 40000ce1    63 FUNC    GLOBAL DEFAULT    4 user_strrchr
   569: c10010a4     0 NOTYPE  GLOBAL DEFAULT    8 vector68
   570: c1013b20  4100 OBJECT  GLOBAL DEFAULT   10 task_pidmap
   571: c1000e86     0 NOTYPE  GLOBAL DEFAULT    8 vector6
   572: c100d24a    88 FUNC    GLOBAL DEFAULT    8 pci_init
   573: c10012cc     0 NOTYPE  GLOBAL DEFAULT    8 vector129
   574: c100b189    31 FUNC    GLOBAL DEFAULT    8 ioq_full
   575: c1a3dbcc     0 NOTYPE  GLOBAL DEFAULT   11 kernel_end
   576: c100ceac    83 FUNC    GLOBAL DEFAULT    8 enum_buses
   577: c10015fc     0 NOTYPE  GLOBAL DEFAULT    8 vector197
   578: 40000195    24 FUNC    GLOBAL DEFAULT    4 read
   579: c1005587   115 FUNC    GLOBAL DEFAULT    8 lpt_putc_sub
   580: c100d427  1301 FUNC    GLOBAL DEFAULT    8 rtl8139_init
   581: c100575d    70 FUNC    GLOBAL DEFAULT    8 serial_putc
   582: c10013e0     0 NOTYPE  GLOBAL DEFAULT    8 vector152
   583: c1007ffc    45 FUNC    GLOBAL DEFAULT    8 sys_closedir
   584: c1013100     0 NOTYPE  GLOBAL DEFAULT   10 __vectors
   585: c1001788     0 NOTYPE  GLOBAL DEFAULT    8 vector230
   586: c100e22a   532 FUNC    GLOBAL DEFAULT    8 arp_receive
   587: c1000f8d     0 NOTYPE  GLOBAL DEFAULT    8 vector37
   588: c100165c     0 NOTYPE  GLOBAL DEFAULT    8 vector205
   589: c100144c     0 NOTYPE  GLOBAL DEFAULT    8 vector161
   590: c1a1c008     4 OBJECT  GLOBAL DEFAULT   11 current
   591: c100003c    28 FUNC    GLOBAL DEFAULT    8 inl
   592: c100e094   406 FUNC    GLOBAL DEFAULT    8 arp_request
   593: 4000021a    18 FUNC    GLOBAL DEFAULT    4 unlink
   594: c10010bf     0 NOTYPE  GLOBAL DEFAULT    8 vector71
   595: c1001440     0 NOTYPE  GLOBAL DEFAULT    8 vector160
   596: c100e61f    47 FUNC    GLOBAL DEFAULT    8 htonl
   597: c10055fa    70 FUNC    GLOBAL DEFAULT    8 lpt_putc
   598: c100dce6   147 FUNC    GLOBAL DEFAULT    8 delete_net_wait_list
   599: c10016d4     0 NOTYPE  GLOBAL DEFAULT    8 vector215
   600: c10046d6   108 FUNC    GLOBAL DEFAULT    8 list_traversal
   601: c100b832    44 FUNC    GLOBAL DEFAULT    8 global_disable
   602: c100141c     0 NOTYPE  GLOBAL DEFAULT    8 vector157
   603: 00109000     0 NOTYPE  GLOBAL DEFAULT    3 init_end
   604: c1000de4    32 FUNC    GLOBAL DEFAULT    8 intr_disable
   605: c1000a20   192 FUNC    GLOBAL DEFAULT    8 print_regs
   606: c100cc4a   610 FUNC    GLOBAL DEFAULT    8 check_device
   607: c100b426    18 FUNC    GLOBAL DEFAULT    8 apic_read64
   608: c1001230     0 NOTYPE  GLOBAL DEFAULT    8 vector112
   609: 40000cce    19 FUNC    GLOBAL DEFAULT    4 user_strcmp
   610: 400014e5    37 FUNC    GLOBAL DEFAULT    4 buildin_ps
   611: c100028a    12 FUNC    GLOBAL DEFAULT    8 lcr3
   612: c1919000 0x20000 OBJECT  GLOBAL DEFAULT   11 pt_highmem
   613: c1001548     0 NOTYPE  GLOBAL DEFAULT    8 vector182
   614: c100efbd   377 FUNC    GLOBAL DEFAULT    8 receive_echo_request
   615: c1003ac5    53 FUNC    GLOBAL DEFAULT    8 set_task_name
   616: c1000eb4     0 NOTYPE  GLOBAL DEFAULT    8 vector12
   617: c1000296    94 FUNC    GLOBAL DEFAULT    8 memcmp
   618: 400003a2    18 FUNC    GLOBAL DEFAULT    4 listen
   619: 40000143    19 FUNC    GLOBAL DEFAULT    4 user_print_string
   620: c1001215     0 NOTYPE  GLOBAL DEFAULT    8 vector109
   621: c1000ef4     0 NOTYPE  GLOBAL DEFAULT    8 vector20
   622: c1000d9a     7 FUNC    GLOBAL DEFAULT    8 disable_interupt
   623: 4000030c    15 FUNC    GLOBAL DEFAULT    4 fork
   624: c1005ca3   917 FUNC    GLOBAL DEFAULT    8 printk
   625: c100c19d   161 FUNC    GLOBAL DEFAULT    8 find_floating_pointer
   626: c100101d     0 NOTYPE  GLOBAL DEFAULT    8 vector53
   627: c1000ee2     0 NOTYPE  GLOBAL DEFAULT    8 vector18
   628: 00100000   508 FUNC    GLOBAL DEFAULT    2 init
   629: c100dc7e   104 FUNC    GLOBAL DEFAULT    8 insert_net_wait_list
   630: c1009d0b    64 FUNC    GLOBAL DEFAULT    8 file_close
   631: c1001197     0 NOTYPE  GLOBAL DEFAULT    8 vector95
   632: c100b079   139 FUNC    GLOBAL DEFAULT    8 pipe_write
   633: c10029fc    25 FUNC    GLOBAL DEFAULT    8 test_user
   634: c10044c8    10 FUNC    GLOBAL DEFAULT    8 do_execve
   635: c1001758     0 NOTYPE  GLOBAL DEFAULT    8 vector226
   636: c100dc0d   113 FUNC    GLOBAL DEFAULT    8 delete_net_send_list
   637: c100d2a2   389 FUNC    GLOBAL DEFAULT    8 get_info_from_pci
   638: c1a1c230     4 OBJECT  GLOBAL DEFAULT   11 cur_part
   639: c1000ff9     0 NOTYPE  GLOBAL DEFAULT    8 vector49
   640: c1939000  4096 OBJECT  GLOBAL DEFAULT   11 pt_4MB
   641: c1000fcc     0 NOTYPE  GLOBAL DEFAULT    8 vector44
   642: 40000d85    22 FUNC    GLOBAL DEFAULT    4 user_memcpy
   643: c10010fe     0 NOTYPE  GLOBAL DEFAULT    8 vector78
   644: c10014dc     0 NOTYPE  GLOBAL DEFAULT    8 vector173
   645: c1000058    33 FUNC    GLOBAL DEFAULT    8 outb
   646: c100125d     0 NOTYPE  GLOBAL DEFAULT    8 vector117
   647: c1001122     0 NOTYPE  GLOBAL DEFAULT    8 vector82
   648: c1001728     0 NOTYPE  GLOBAL DEFAULT    8 vector222
   649: c100bb98    69 FUNC    GLOBAL DEFAULT    8 do_timer_irq
   650: c1000e98     0 NOTYPE  GLOBAL DEFAULT    8 vector8
   651: c10013bc     0 NOTYPE  GLOBAL DEFAULT    8 vector149
   652: c10000de    33 FUNC    GLOBAL DEFAULT    8 memset
   653: c10060f7    54 FUNC    GLOBAL DEFAULT    8 sema_init
   654: c1006237   148 FUNC    GLOBAL DEFAULT    8 sema_up
   655: c10017a0     0 NOTYPE  GLOBAL DEFAULT    8 vector232
   656: c1002072   173 FUNC    GLOBAL DEFAULT    8 main
   657: c10062cb    79 FUNC    GLOBAL DEFAULT    8 lock_acquire
   658: c10011fa     0 NOTYPE  GLOBAL DEFAULT    8 vector106
   659: c1001710     0 NOTYPE  GLOBAL DEFAULT    8 vector220
   660: c1a1cb84     4 OBJECT  GLOBAL DEFAULT   11 nb_send_list
   661: 40001f20   512 OBJECT  GLOBAL DEFAULT    7 final_path
   662: c100116a     0 NOTYPE  GLOBAL DEFAULT    8 vector90
   663: c1001464     0 NOTYPE  GLOBAL DEFAULT    8 vector163
   664: c10017b8     0 NOTYPE  GLOBAL DEFAULT    8 vector234
   665: c10078a1   532 FUNC    GLOBAL DEFAULT    8 sys_unlink
   666: c100106e     0 NOTYPE  GLOBAL DEFAULT    8 vector62
   667: c1000f21     0 NOTYPE  GLOBAL DEFAULT    8 vector25
   668: c1001608     0 NOTYPE  GLOBAL DEFAULT    8 vector198
   669: c100612d    42 FUNC    GLOBAL DEFAULT    8 lock_init
   670: c1001278     0 NOTYPE  GLOBAL DEFAULT    8 vector120
   671: c10087cb    80 FUNC    GLOBAL DEFAULT    8 open_root_dir
   672: c100353f    95 FUNC    GLOBAL DEFAULT    8 sys_malloc
   673: c1006157   224 FUNC    GLOBAL DEFAULT    8 sema_down
   674: c100e5d3    76 FUNC    GLOBAL DEFAULT    8 chartoui
   675: c1001de1   119 FUNC    GLOBAL DEFAULT    8 syscall_trap
   676: c10005e5    26 FUNC    GLOBAL DEFAULT    8 getchar
   677: c100e072    34 FUNC    GLOBAL DEFAULT    8 ntohs
   678: c1000da1     7 FUNC    GLOBAL DEFAULT    8 enable_interupt
   679: 4000029f    18 FUNC    GLOBAL DEFAULT    4 opendir
   680: c1001002     0 NOTYPE  GLOBAL DEFAULT    8 vector50
   681: c1000ec9     0 NOTYPE  GLOBAL DEFAULT    8 vector15
   682: c100631a    73 FUNC    GLOBAL DEFAULT    8 lock_release
   683: 00104000  4096 OBJECT  GLOBAL DEFAULT    3 pt1
   684: 40001096   138 FUNC    GLOBAL DEFAULT    4 buildin_cd
   685: c1000da8    29 FUNC    GLOBAL DEFAULT    8 get_now_intr_status
   686: c10013d4     0 NOTYPE  GLOBAL DEFAULT    8 vector151
   687: c100112b     0 NOTYPE  GLOBAL DEFAULT    8 vector83
   688: c1001161     0 NOTYPE  GLOBAL DEFAULT    8 vector89
   689: c1001158     0 NOTYPE  GLOBAL DEFAULT    8 vector88
   690: c100bcd8    35 FUNC    GLOBAL DEFAULT    8 ioapic_write
   691: c1000d83    23 FUNC    GLOBAL DEFAULT    8 trap
   692: c1001524     0 NOTYPE  GLOBAL DEFAULT    8 vector179
   693: c1000f72     0 NOTYPE  GLOBAL DEFAULT    8 vector34
   694: c100b92e   313 FUNC    GLOBAL DEFAULT    8 calibrate_clock
   695: c1a1cb88     4 OBJECT  GLOBAL DEFAULT   11 nb_wait_list
   696: c1000fde     0 NOTYPE  GLOBAL DEFAULT    8 vector46
   697: c10001b7    19 FUNC    GLOBAL DEFAULT    8 strcmp
   698: c100d9c8   281 FUNC    GLOBAL DEFAULT    8 transmit
   699: c100cbfd    77 FUNC    GLOBAL DEFAULT    8 pci_write
   700: c100bd23   653 FUNC    GLOBAL DEFAULT    8 Local_APIC_init
   701: c1000e04    19 FUNC    GLOBAL DEFAULT    8 intr_save
   702: c1001308     0 NOTYPE  GLOBAL DEFAULT    8 vector134
   703: c100549b   236 FUNC    GLOBAL DEFAULT    8 serial_init
   704: c1001734     0 NOTYPE  GLOBAL DEFAULT    8 vector223
   705: c1a1c22c     4 OBJECT  GLOBAL DEFAULT   11 jiffies
   706: c1003646   878 FUNC    GLOBAL DEFAULT    8 kernel_task_init
   707: c10083ed   493 FUNC    GLOBAL DEFAULT    8 sys_getcwd
   708: 40000263    21 FUNC    GLOBAL DEFAULT    4 getcwd
   709: c1005452    73 FUNC    GLOBAL DEFAULT    8 delay
   710: c100abde   709 FUNC    GLOBAL DEFAULT    8 inode_release
   711: c10016f8     0 NOTYPE  GLOBAL DEFAULT    8 vector218
   712: c1a1cb8c     4 OBJECT  GLOBAL DEFAULT   11 my_gw
   713: c1006e87   136 FUNC    GLOBAL DEFAULT    8 path_depth_cnt
   714: c100041e    90 FUNC    GLOBAL DEFAULT    8 run
   715: c1004742   380 FUNC    GLOBAL DEFAULT    8 task_exit
   716: c10051ef   178 FUNC    GLOBAL DEFAULT    8 sys_execv
   717: c100581f   135 FUNC    GLOBAL DEFAULT    8 print_cursor
   718: c1005332   288 FUNC    GLOBAL DEFAULT    8 pic_init
   719: c100174c     0 NOTYPE  GLOBAL DEFAULT    8 vector225
   720: c1001584     0 NOTYPE  GLOBAL DEFAULT    8 vector187
   721: c100ba8a   160 FUNC    GLOBAL DEFAULT    8 init_apic
   722: c1a1cb90     4 OBJECT  GLOBAL DEFAULT   11 arp_cache
   723: c1000e17    17 FUNC    GLOBAL DEFAULT    8 intr_restore
   724: c1002a15  1183 FUNC    GLOBAL DEFAULT    8 pmm_init
   725: c1617d0c    12 OBJECT  GLOBAL DEFAULT   11 dma_zone
   726: c1015c70     4 OBJECT  GLOBAL DEFAULT   11 test_user_task
   727: c1000f4e     0 NOTYPE  GLOBAL DEFAULT    8 vector30
   728: c10012b7     0 NOTYPE  GLOBAL DEFAULT    8 vector127
   729: c100c164    57 FUNC    GLOBAL DEFAULT    8 check_sum
   730: c100dae1   196 FUNC    GLOBAL DEFAULT    8 receive
   731: c10015c0     0 NOTYPE  GLOBAL DEFAULT    8 vector192
   732: c1001488     0 NOTYPE  GLOBAL DEFAULT    8 vector166
   733: c10010ec     0 NOTYPE  GLOBAL DEFAULT    8 vector76
   734: c10010e3     0 NOTYPE  GLOBAL DEFAULT    8 vector75
   735: c10015e4     0 NOTYPE  GLOBAL DEFAULT    8 vector195
   736: c10013c8     0 NOTYPE  GLOBAL DEFAULT    8 vector150
   737: c193a000  4096 OBJECT  GLOBAL DEFAULT   11 local_apic
   738: c100104a     0 NOTYPE  GLOBAL DEFAULT    8 vector58
   739: c1001860     0 NOTYPE  GLOBAL DEFAULT    8 vector248
   740: c1001293     0 NOTYPE  GLOBAL DEFAULT    8 vector123
   741: c1a1c460  1760 OBJECT  GLOBAL DEFAULT   11 pci_devices
   742: c10011a0     0 NOTYPE  GLOBAL DEFAULT    8 vector96
   743: c100a8d1   289 FUNC    GLOBAL DEFAULT    8 inode_sync
   744: c1000f57     0 NOTYPE  GLOBAL DEFAULT    8 vector31
   745: c1001644     0 NOTYPE  GLOBAL DEFAULT    8 vector203
   746: c10031d9   293 FUNC    GLOBAL DEFAULT    8 vmm_malloc
   747: c1015c74     4 OBJECT  GLOBAL DEFAULT   11 offset
   748: c1005a72   383 FUNC    GLOBAL DEFAULT    8 print_num
   749: c1001344     0 NOTYPE  GLOBAL DEFAULT    8 vector139
   750: c10013ec     0 NOTYPE  GLOBAL DEFAULT    8 vector153
   751: c1001470     0 NOTYPE  GLOBAL DEFAULT    8 vector164
   752: c1001281     0 NOTYPE  GLOBAL DEFAULT    8 vector121
   753: c1000e7d     0 NOTYPE  GLOBAL DEFAULT    8 vector5
   754: c1001494     0 NOTYPE  GLOBAL DEFAULT    8 vector167
   755: c1001404     0 NOTYPE  GLOBAL DEFAULT    8 vector155
   756: c100186c     0 NOTYPE  GLOBAL DEFAULT    8 vector249
   757: c1000079    33 FUNC    GLOBAL DEFAULT    8 outw
   758: c100e43e    93 FUNC    GLOBAL DEFAULT    8 find_arp_cache
   759: c1001878     0 NOTYPE  GLOBAL DEFAULT    8 vector250
   760: c100881b    64 FUNC    GLOBAL DEFAULT    8 dir_open
   761: c10021b6   159 FUNC    GLOBAL DEFAULT    8 test_ip
   762: c100f619   262 FUNC    GLOBAL DEFAULT    8 sys_connect
   763: c100129c     0 NOTYPE  GLOBAL DEFAULT    8 vector124
   764: c100121e     0 NOTYPE  GLOBAL DEFAULT    8 vector110
   765: c1013000    36 OBJECT  GLOBAL DEFAULT   10 instr_list
   766: c1001650     0 NOTYPE  GLOBAL DEFAULT    8 vector204
   767: 4000028a    21 FUNC    GLOBAL DEFAULT    4 stat
   768: c1000e3f     0 NOTYPE  GLOBAL DEFAULT    8 __trapret
   769: c10002fc   171 FUNC    GLOBAL DEFAULT    8 print_seg
   770: c100e49b   312 FUNC    GLOBAL DEFAULT    8 insert_arp_cache
   771: c100132c     0 NOTYPE  GLOBAL DEFAULT    8 vector137
   772: c193b000     4 OBJECT  GLOBAL DEFAULT   11 highmem_ptr
   773: c100009a    24 FUNC    GLOBAL DEFAULT    8 outl
   774: c1007eef   269 FUNC    GLOBAL DEFAULT    8 sys_opendir
   775: c1001854     0 NOTYPE  GLOBAL DEFAULT    8 vector247
   776: c1000f06     0 NOTYPE  GLOBAL DEFAULT    8 vector22
   777: c1005a3b    55 FUNC    GLOBAL DEFAULT    8 print_string
   778: c100c5b0   113 FUNC    GLOBAL DEFAULT    8 mp_config_bus_dump
   779: c1001638     0 NOTYPE  GLOBAL DEFAULT    8 vector202
   780: c100dee9   393 FUNC    GLOBAL DEFAULT    8 receive_ef
   781: c10010c8     0 NOTYPE  GLOBAL DEFAULT    8 vector72
   782: c100102f     0 NOTYPE  GLOBAL DEFAULT    8 vector55
   783: c10012ae     0 NOTYPE  GLOBAL DEFAULT    8 vector126
   784: c1001089     0 NOTYPE  GLOBAL DEFAULT    8 vector65
   785: c1000f3c     0 NOTYPE  GLOBAL DEFAULT    8 vector28
   786: c100cf6c   159 FUNC    GLOBAL DEFAULT    8 pci_device_init
   787: c10014ac     0 NOTYPE  GLOBAL DEFAULT    8 vector169
   788: c10017ac     0 NOTYPE  GLOBAL DEFAULT    8 vector233
   789: c1002255   177 FUNC    GLOBAL DEFAULT    8 test_icmp
   790: 40000052   104 FUNC    GLOBAL DEFAULT    4 user_main
   791: c1a1c444     4 OBJECT  GLOBAL DEFAULT   11 m_floating_pointer
   792: c100b129    68 FUNC    GLOBAL DEFAULT    8 ioqueue_init
   793: c100ceff   109 FUNC    GLOBAL DEFAULT    8 pci_device_bar_init
   794: c100bfb0   193 FUNC    GLOBAL DEFAULT    8 APIC_IOAPIC_init
   795: 40000125    30 FUNC    GLOBAL DEFAULT    4 user_print_char
   796: c100cbb4    73 FUNC    GLOBAL DEFAULT    8 pci_read
   797: c100affc   125 FUNC    GLOBAL DEFAULT    8 pipe_read
   798: c10009ed    14 FUNC    GLOBAL DEFAULT    8 set_ts_esp0
   799: 4000035a    18 FUNC    GLOBAL DEFAULT    4 exit
   800: c1004a47   166 FUNC    GLOBAL DEFAULT    8 sys_wait
   801: c1004aed   151 FUNC    GLOBAL DEFAULT    8 sys_exit
   802: c10013a4     0 NOTYPE  GLOBAL DEFAULT    8 vector147
   803: 400021e0     0 NOTYPE  GLOBAL DEFAULT    7 user_end
   804: c1017cb4     4 OBJECT  GLOBAL DEFAULT   11 m_tick
   805: c10011e8     0 NOTYPE  GLOBAL DEFAULT    8 vector104
   806: c100b3c6    21 FUNC    GLOBAL DEFAULT    8 apic_write
   807: c1a3dbc0    12 OBJECT  GLOBAL DEFAULT   11 local_wait_accept_sema
   808: c1001254     0 NOTYPE  GLOBAL DEFAULT    8 vector116
   809: 00009000     0 NOTYPE  GLOBAL DEFAULT    1 apstart
   810: c100e661    97 FUNC    GLOBAL DEFAULT    8 checksum
   811: c10032fe   248 FUNC    GLOBAL DEFAULT    8 vmm_free
   812: c100aea3    80 FUNC    GLOBAL DEFAULT    8 inode_init
   813: c1a1c00c     4 OBJECT  GLOBAL DEFAULT   11 user_task
   814: c1a1c240   512 OBJECT  GLOBAL DEFAULT   11 file_table
   815: c1001014     0 NOTYPE  GLOBAL DEFAULT    8 vector52
   816: c1000edb     0 NOTYPE  GLOBAL DEFAULT    8 vector17
   817: c1001560     0 NOTYPE  GLOBAL DEFAULT    8 vector184
   818: c10048ee   212 FUNC    GLOBAL DEFAULT    8 release_prog_resource
   819: c1000152    40 FUNC    GLOBAL DEFAULT    8 strlen
   820: 400016c0    25 FUNC    GLOBAL DEFAULT    4 buildin_help
   821: 400001ad    32 FUNC    GLOBAL DEFAULT    4 open
   822: c100af46   182 FUNC    GLOBAL DEFAULT    8 sys_pipe
   823: c100806e   288 FUNC    GLOBAL DEFAULT    8 sys_rmdir
   824: c1001674     0 NOTYPE  GLOBAL DEFAULT    8 vector207
   825: c10015a8     0 NOTYPE  GLOBAL DEFAULT    8 vector190
   826: c10002f4     8 FUNC    GLOBAL DEFAULT    8 nop
   827: c10085da   300 FUNC    GLOBAL DEFAULT    8 sys_stat
   828: c10017f4     0 NOTYPE  GLOBAL DEFAULT    8 vector239
   829: c100118e     0 NOTYPE  GLOBAL DEFAULT    8 vector94
   830: c1001185     0 NOTYPE  GLOBAL DEFAULT    8 vector93
   831: c100e6c2   312 FUNC    GLOBAL DEFAULT    8 build_ip_packet
   832: c100d93c   140 FUNC    GLOBAL DEFAULT    8 do_rtl8139_irq
   833: c1001590     0 NOTYPE  GLOBAL DEFAULT    8 vector188
   834: 40001120   965 FUNC    GLOBAL DEFAULT    4 buildin_ls
   835: c1000ff0     0 NOTYPE  GLOBAL DEFAULT    8 vector48
   836: 4000159c   146 FUNC    GLOBAL DEFAULT    4 buildin_rmdir
   837: c1001704     0 NOTYPE  GLOBAL DEFAULT    8 vector219
   838: c1a1c020   520 OBJECT  GLOBAL DEFAULT   11 cons
   839: c10013b0     0 NOTYPE  GLOBAL DEFAULT    8 vector148
   840: c100171c     0 NOTYPE  GLOBAL DEFAULT    8 vector221
   841: 400002b1    18 FUNC    GLOBAL DEFAULT    4 closedir
   842: c10065f4    60 FUNC    GLOBAL DEFAULT    8 read_main_partition
   843: c1001110     0 NOTYPE  GLOBAL DEFAULT    8 vector80
   844: c10014c4     0 NOTYPE  GLOBAL DEFAULT    8 vector171
   845: c10013f8     0 NOTYPE  GLOBAL DEFAULT    8 vector154
   846: c1015c6c     1 OBJECT  GLOBAL DEFAULT   11 shell_input
   847: c1000f84     0 NOTYPE  GLOBAL DEFAULT    8 vector36
   848: c1014b2c     0 NOTYPE  GLOBAL DEFAULT   10 kernel_bss
   849: c10017c4     0 NOTYPE  GLOBAL DEFAULT    8 vector235
   850: c10011f1     0 NOTYPE  GLOBAL DEFAULT    8 vector105
   851: c1008706   141 FUNC    GLOBAL DEFAULT    8 sys_chdir
   852: 40000c4c    69 FUNC    GLOBAL DEFAULT    4 user_strcat
   853: c1008a47    58 FUNC    GLOBAL DEFAULT    8 dir_close
   854: 00108000  4096 OBJECT  GLOBAL DEFAULT    3 user_pt
   855: c100295e    13 FUNC    GLOBAL DEFAULT    8 test_schedule
   856: 4000022c    18 FUNC    GLOBAL DEFAULT    4 mkdir
   857: c1001398     0 NOTYPE  GLOBAL DEFAULT    8 vector146
   858: c1009739   192 FUNC    GLOBAL DEFAULT    8 inode_bitmap_alloc
   859: c10015b4     0 NOTYPE  GLOBAL DEFAULT    8 vector191
   860: 400001cd    18 FUNC    GLOBAL DEFAULT    4 close
   861: c10011df     0 NOTYPE  GLOBAL DEFAULT    8 vector103
   862: c100edf0   344 FUNC    GLOBAL DEFAULT    8 send_icmp_reply
   863: c10003e5    57 FUNC    GLOBAL DEFAULT    8 monitor
   864: c1006588    61 FUNC    GLOBAL DEFAULT    8 ide_write
   865: c100d1a0   170 FUNC    GLOBAL DEFAULT    8 enable_bus_mastering
   866: c10096f3    70 FUNC    GLOBAL DEFAULT    8 task_fd_install
   867: c100c74d   187 FUNC    GLOBAL DEFAULT    8 mp_config_local_interrupt
   868: c100aac8    26 FUNC    GLOBAL DEFAULT    8 inode_close
   869: 400002f6    22 FUNC    GLOBAL DEFAULT    4 free
   870: c100dd79    96 FUNC    GLOBAL DEFAULT    8 clear_net_send_list
   871: c10097f9   206 FUNC    GLOBAL DEFAULT    8 block_bitmap_alloc
   872: c193c000 0xe0000 OBJECT  GLOBAL DEFAULT   11 pt_dma_nomal
   873: c1000ead     0 NOTYPE  GLOBAL DEFAULT    8 vector11
   874: c1000ec2     0 NOTYPE  GLOBAL DEFAULT    8 vector14

No version information found in this file.
