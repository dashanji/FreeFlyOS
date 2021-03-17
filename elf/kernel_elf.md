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
  Start of section headers:          281380 (bytes into file)
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
  [ 4] .user.text        PROGBITS        40000000 01e000 00167c 00  AX  0   0  1
  [ 5] .user.data        PROGBITS        4000167c 01f67c 000004 00  WA  0   0  4
  [ 6] .user.rodata      PROGBITS        40001680 01f680 000623 00   A  0   0  4
  [ 7] .user.bss         NOBITS          40001cc0 01fca3 0004c0 00  WA  0   0 32
  [ 8] .text             PROGBITS        c1000000 00b000 00d7bd 00  AX  0   0  1
  [ 9] .rodata           PROGBITS        c100d7c0 0187c0 002880 00   A  0   0  4
  [10] .data             PROGBITS        c1011000 01c000 001b2c 00  WA  0   0 32
  [11] .bss              NOBITS          c1013000 01db2c a07af4 00  WA  0   0 4096
  [12] .debug_info       PROGBITS        00000000 01fca3 00e55f 00      0   0  1
  [13] .debug_abbrev     PROGBITS        00000000 02e202 003c8a 00      0   0  1
  [14] .debug_aranges    PROGBITS        00000000 031e8c 0004a0 00      0   0  1
  [15] .debug_ranges     PROGBITS        00000000 03232c 000048 00      0   0  1
  [16] .debug_line       PROGBITS        00000000 032374 007631 00      0   0  1
  [17] .debug_str        PROGBITS        00000000 0399a5 0035e4 01  MS  0   0  1
  [18] .comment          PROGBITS        00000000 03cf89 000011 01  MS  0   0  1
  [19] .stab             PROGBITS        00000000 03cf9c 00276c 0c     20   0  4
  [20] .stabstr          STRTAB          00000000 03f708 000244 00      0   0  1
  [21] .symtab           SYMTAB          00000000 03f94c 0032b0 10     22 223  4
  [22] .strtab           STRTAB          00000000 042bfc 001e56 00      0   0  1
  [23] .shstrtab         STRTAB          00000000 044a52 0000d2 00      0   0  1
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
  LOAD           0x00b000 0xc1000000 0x01000000 0x10040 0x10040 R E 0x1000
  LOAD           0x01c000 0xc1011000 0x01011000 0x01b2c 0xa09af4 RW  0x1000
  LOAD           0x01e000 0x40000000 0x40000000 0x01ca3 0x02180 RWE 0x1000

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

Symbol table '.symtab' contains 811 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00009000     0 SECTION LOCAL  DEFAULT    1 
     2: 00100000     0 SECTION LOCAL  DEFAULT    2 
     3: 00101000     0 SECTION LOCAL  DEFAULT    3 
     4: 40000000     0 SECTION LOCAL  DEFAULT    4 
     5: 4000167c     0 SECTION LOCAL  DEFAULT    5 
     6: 40001680     0 SECTION LOCAL  DEFAULT    6 
     7: 40001cc0     0 SECTION LOCAL  DEFAULT    7 
     8: c1000000     0 SECTION LOCAL  DEFAULT    8 
     9: c100d7c0     0 SECTION LOCAL  DEFAULT    9 
    10: c1011000     0 SECTION LOCAL  DEFAULT   10 
    11: c1013000     0 SECTION LOCAL  DEFAULT   11 
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
    32: 400020c0   128 OBJECT  LOCAL  DEFAULT    7 cmd_line
    33: 40002140    64 OBJECT  LOCAL  DEFAULT    7 argv
    34: 4000069d   176 FUNC    LOCAL  DEFAULT    4 user_readline
    35: 4000074d   196 FUNC    LOCAL  DEFAULT    4 cmd_parse
    36: 00000000     0 FILE    LOCAL  DEFAULT  ABS string.c
    37: 40000ba2    44 FUNC    LOCAL  DEFAULT    4 __memset
    38: 40000c34    61 FUNC    LOCAL  DEFAULT    4 __strcmp
    39: 40000ceb    61 FUNC    LOCAL  DEFAULT    4 __memcpy
    40: 00000000     0 FILE    LOCAL  DEFAULT  ABS buildin_cmd.c
    41: 40000d6e    94 FUNC    LOCAL  DEFAULT    4 path_parse
    42: 40000dcc   330 FUNC    LOCAL  DEFAULT    4 wash_path
    43: 00000000     0 FILE    LOCAL  DEFAULT  ABS asm.c
    44: c10000b2    44 FUNC    LOCAL  DEFAULT    8 __memset
    45: c10000ff    61 FUNC    LOCAL  DEFAULT    8 __memcpy
    46: c100017a    61 FUNC    LOCAL  DEFAULT    8 __strcmp
    47: 00000000     0 FILE    LOCAL  DEFAULT  ABS debug.c
    48: 00000000     0 FILE    LOCAL  DEFAULT  ABS monitor.c
    49: 00000000     0 FILE    LOCAL  DEFAULT  ABS readline.c
    50: c1013000  1024 OBJECT  LOCAL  DEFAULT   11 buf
    51: 00000000     0 FILE    LOCAL  DEFAULT  ABS dt.c
    52: c1013400  2048 OBJECT  LOCAL  DEFAULT   11 idt
    53: c1011078     6 OBJECT  LOCAL  DEFAULT   10 gdtinfo
    54: c1013c00   104 OBJECT  LOCAL  DEFAULT   11 ts
    55: c1011080     6 OBJECT  LOCAL  DEFAULT   10 idtinfo
    56: c10006c1    54 FUNC    LOCAL  DEFAULT    8 lgdt
    57: c10007f6    12 FUNC    LOCAL  DEFAULT    8 lidt
    58: 00000000     0 FILE    LOCAL  DEFAULT  ABS trap.c
    59: c10009fb    37 FUNC    LOCAL  DEFAULT    8 hash32
    60: c10110a0    96 OBJECT  LOCAL  DEFAULT   10 IA32flags
    61: c1000c37   376 FUNC    LOCAL  DEFAULT    8 trap_dispatch
    62: 00000000     0 FILE    LOCAL  DEFAULT  ABS syscall.c
    63: c10018ec    37 FUNC    LOCAL  DEFAULT    8 hash32
    64: c1001911    35 FUNC    LOCAL  DEFAULT    8 syscall_exit
    65: c1001934    47 FUNC    LOCAL  DEFAULT    8 sys_fork
    66: c1001963    30 FUNC    LOCAL  DEFAULT    8 syscall_wait
    67: c1001981    44 FUNC    LOCAL  DEFAULT    8 sys_exec
    68: c10019ad     6 FUNC    LOCAL  DEFAULT    8 sys_yield
    69: c10019b3    17 FUNC    LOCAL  DEFAULT    8 sys_kill
    70: c10019c4    13 FUNC    LOCAL  DEFAULT    8 sys_getpid
    71: c10019d1    41 FUNC    LOCAL  DEFAULT    8 sys_print_char
    72: c10019fa    39 FUNC    LOCAL  DEFAULT    8 sys_print_string
    73: c1001a21    92 FUNC    LOCAL  DEFAULT    8 sys_print_num
    74: c1001a7d    18 FUNC    LOCAL  DEFAULT    8 sys_backtrace
    75: c1001a8f    10 FUNC    LOCAL  DEFAULT    8 sys_pgdir
    76: c1001a99    56 FUNC    LOCAL  DEFAULT    8 sys_fdread
    77: c1001ad1    46 FUNC    LOCAL  DEFAULT    8 syscall_open
    78: c1001aff    30 FUNC    LOCAL  DEFAULT    8 syscall_close
    79: c1001b1d    56 FUNC    LOCAL  DEFAULT    8 syscall_write
    80: c1001b55    60 FUNC    LOCAL  DEFAULT    8 syscall_lseek
    81: c1001b91    30 FUNC    LOCAL  DEFAULT    8 syscall_unlink
    82: c1001baf    30 FUNC    LOCAL  DEFAULT    8 syscall_mkdir
    83: c1001bcd    30 FUNC    LOCAL  DEFAULT    8 syscall_rmdir
    84: c1001beb    35 FUNC    LOCAL  DEFAULT    8 syscall_rewinddir
    85: c1001c0e    42 FUNC    LOCAL  DEFAULT    8 syscall_getcwd
    86: c1001c38    30 FUNC    LOCAL  DEFAULT    8 syscall_chdir
    87: c1001c56    44 FUNC    LOCAL  DEFAULT    8 syscall_stat
    88: c1001c82    30 FUNC    LOCAL  DEFAULT    8 syscall_opendir
    89: c1001ca0    30 FUNC    LOCAL  DEFAULT    8 syscall_closedir
    90: c1001cbe    30 FUNC    LOCAL  DEFAULT    8 syscall_readdir
    91: c1001cdc    18 FUNC    LOCAL  DEFAULT    8 syscall_print_task
    92: c1001cee    30 FUNC    LOCAL  DEFAULT    8 syscall_malloc
    93: c1001d0c    47 FUNC    LOCAL  DEFAULT    8 syscall_free
    94: c1001d3b    35 FUNC    LOCAL  DEFAULT    8 syscall_pipe
    95: c1011500   236 OBJECT  LOCAL  DEFAULT   10 syscalls
    96: 00000000     0 FILE    LOCAL  DEFAULT  ABS keyboard.c
    97: c1011600   256 OBJECT  LOCAL  DEFAULT   10 shiftcode
    98: c1011700   256 OBJECT  LOCAL  DEFAULT   10 togglecode
    99: c1011800   256 OBJECT  LOCAL  DEFAULT   10 normalmap
   100: c1011900   256 OBJECT  LOCAL  DEFAULT   10 shiftmap
   101: c1011a00   256 OBJECT  LOCAL  DEFAULT   10 ctlmap
   102: c1011b00    16 OBJECT  LOCAL  DEFAULT   10 charcode
   103: 00000000     0 FILE    LOCAL  DEFAULT  ABS main.c
   104: c1001fca    37 FUNC    LOCAL  DEFAULT    8 hash32
   105: c1002115   701 FUNC    LOCAL  DEFAULT    8 write2fs
   106: c10026e3    49 FUNC    LOCAL  DEFAULT    8 print_task1
   107: c1002745    47 FUNC    LOCAL  DEFAULT    8 delay
   108: c1002714    49 FUNC    LOCAL  DEFAULT    8 print_task2
   109: 00000000     0 FILE    LOCAL  DEFAULT  ABS pmm.c
   110: 00000000     0 FILE    LOCAL  DEFAULT  ABS vmm.c
   111: c1002dcf    37 FUNC    LOCAL  DEFAULT    8 hash32
   112: 00000000     0 FILE    LOCAL  DEFAULT  ABS task.c
   113: c1003399    37 FUNC    LOCAL  DEFAULT    8 hash32
   114: c1013c80  8192 OBJECT  LOCAL  DEFAULT   11 hash_list
   115: c1015c80     4 OBJECT  LOCAL  DEFAULT   11 last_pid
   116: c1015c84     8 OBJECT  LOCAL  DEFAULT   11 ready_task_list
   117: c1015c8c     8 OBJECT  LOCAL  DEFAULT   11 all_task_list
   118: c1015c94     4 OBJECT  LOCAL  DEFAULT   11 nr_task
   119: c1003aa6   247 FUNC    LOCAL  DEFAULT    8 alloc_task
   120: c10038a7    80 FUNC    LOCAL  DEFAULT    8 add_link
   121: c10038f7    80 FUNC    LOCAL  DEFAULT    8 add_all_link
   122: c100397a   122 FUNC    LOCAL  DEFAULT    8 add_pid_hash
   123: c1003f77    15 FUNC    LOCAL  DEFAULT    8 wakeup_task
   124: c100372c    43 FUNC    LOCAL  DEFAULT    8 set_pid_bit
   125: c1003757    43 FUNC    LOCAL  DEFAULT    8 clear_pid_bit
   126: c1003782    65 FUNC    LOCAL  DEFAULT    8 find_free_pid
   127: c10037c3    92 FUNC    LOCAL  DEFAULT    8 alloc_pid
   128: c100381f    30 FUNC    LOCAL  DEFAULT    8 free_pid
   129: c1015c98    21 OBJECT  LOCAL  DEFAULT   11 name.2651
   130: c1003947    51 FUNC    LOCAL  DEFAULT    8 remove_link
   131: c10039f4    71 FUNC    LOCAL  DEFAULT    8 remove_pid_hash
   132: c1003a3b   107 FUNC    LOCAL  DEFAULT    8 find_task
   133: c1003b9d    29 FUNC    LOCAL  DEFAULT    8 forkret
   134: c1003bba   364 FUNC    LOCAL  DEFAULT    8 copy_thread
   135: c1003d26   185 FUNC    LOCAL  DEFAULT    8 update_inode_open_cnts
   136: c100ded4    23 OBJECT  LOCAL  DEFAULT    9 __func__.2703
   137: c100deec     8 OBJECT  LOCAL  DEFAULT    9 __func__.2715
   138: c1003fe5   118 FUNC    LOCAL  DEFAULT    8 task_run
   139: c100def4    15 OBJECT  LOCAL  DEFAULT    9 __func__.2754
   140: c10041de    92 FUNC    LOCAL  DEFAULT    8 print_taskinfo
   141: c100425c    28 FUNC    LOCAL  DEFAULT    8 kernel_execve
   142: c1004278     6 FUNC    LOCAL  DEFAULT    8 user_main
   143: c100476e    40 FUNC    LOCAL  DEFAULT    8 find_child
   144: c1004796    50 FUNC    LOCAL  DEFAULT    8 find_hanging_child
   145: c10047c8    43 FUNC    LOCAL  DEFAULT    8 task0_adopt_a_child
   146: c100df04     9 OBJECT  LOCAL  DEFAULT    9 __func__.2861
   147: 00000000     0 FILE    LOCAL  DEFAULT  ABS exec.c
   148: c1004d41    37 FUNC    LOCAL  DEFAULT    8 hash32
   149: c1004d66   168 FUNC    LOCAL  DEFAULT    8 segment_load
   150: c1004e0e   397 FUNC    LOCAL  DEFAULT    8 load
   151: 00000000     0 FILE    LOCAL  DEFAULT  ABS pic.c
   152: c1012b24     2 OBJECT  LOCAL  DEFAULT   10 irq_mask
   153: c1015cad     1 OBJECT  LOCAL  DEFAULT   11 did_init
   154: c100504d    94 FUNC    LOCAL  DEFAULT    8 pic_setmask
   155: 00000000     0 FILE    LOCAL  DEFAULT  ABS serial.c
   156: c1015cae     1 OBJECT  LOCAL  DEFAULT   11 serial_exists
   157: 00000000     0 FILE    LOCAL  DEFAULT  ABS timer.c
   158: 00000000     0 FILE    LOCAL  DEFAULT  ABS vga.c
   159: c1015caf     1 OBJECT  LOCAL  DEFAULT   11 cursor_x
   160: c1015cb0     1 OBJECT  LOCAL  DEFAULT   11 cursor_y
   161: c1012b28     4 OBJECT  LOCAL  DEFAULT   10 vga_memory
   162: 00000000     0 FILE    LOCAL  DEFAULT  ABS sync.c
   163: c1005e7e    37 FUNC    LOCAL  DEFAULT    8 hash32
   164: c100e0d4    10 OBJECT  LOCAL  DEFAULT    9 __func__.2526
   165: 00000000     0 FILE    LOCAL  DEFAULT  ABS ide-dev.c
   166: c100610f    40 FUNC    LOCAL  DEFAULT    8 waitdisk
   167: c1006137    38 FUNC    LOCAL  DEFAULT    8 insl
   168: c100615d    38 FUNC    LOCAL  DEFAULT    8 outsl
   169: c1006183   186 FUNC    LOCAL  DEFAULT    8 ide_read_sect
   170: c100623d   186 FUNC    LOCAL  DEFAULT    8 ide_write_sect
   171: c1006371    47 FUNC    LOCAL  DEFAULT    8 delay
   172: 00000000     0 FILE    LOCAL  DEFAULT  ABS fs.c
   173: c1006460    37 FUNC    LOCAL  DEFAULT    8 hash32
   174: c1006485  1171 FUNC    LOCAL  DEFAULT    8 partition_format
   175: c1006bdb    94 FUNC    LOCAL  DEFAULT    8 path_parse
   176: c100e8e4    15 OBJECT  LOCAL  DEFAULT    9 __func__.2597
   177: c1006cc1   656 FUNC    LOCAL  DEFAULT    8 search_file
   178: c100e8f4    12 OBJECT  LOCAL  DEFAULT    9 __func__.2609
   179: c100e900     9 OBJECT  LOCAL  DEFAULT    9 __func__.2622
   180: c100e90c    16 OBJECT  LOCAL  DEFAULT    9 __func__.2636
   181: c100e91c     9 OBJECT  LOCAL  DEFAULT    9 __func__.2656
   182: c100e928    10 OBJECT  LOCAL  DEFAULT    9 __func__.2669
   183: c100e934    11 OBJECT  LOCAL  DEFAULT    9 __func__.2681
   184: c100e940    10 OBJECT  LOCAL  DEFAULT    9 __func__.2711
   185: c100e94c    12 OBJECT  LOCAL  DEFAULT    9 __func__.2722
   186: c100e958    12 OBJECT  LOCAL  DEFAULT    9 __func__.2733
   187: c100e964    10 OBJECT  LOCAL  DEFAULT    9 __func__.2742
   188: c1007f86   184 FUNC    LOCAL  DEFAULT    8 get_parent_dir_inode_nr
   189: c100e970    24 OBJECT  LOCAL  DEFAULT    9 __func__.2755
   190: c100803e   423 FUNC    LOCAL  DEFAULT    8 get_child_dir_name
   191: c100e988    11 OBJECT  LOCAL  DEFAULT    9 __func__.2784
   192: 00000000     0 FILE    LOCAL  DEFAULT  ABS dir.c
   193: c100eb7c    17 OBJECT  LOCAL  DEFAULT    9 __func__.2234
   194: c100eb90    15 OBJECT  LOCAL  DEFAULT    9 __func__.2243
   195: c100eba0    17 OBJECT  LOCAL  DEFAULT    9 __func__.2287
   196: c100ebb4     9 OBJECT  LOCAL  DEFAULT    9 __func__.2316
   197: c100ebc0    11 OBJECT  LOCAL  DEFAULT    9 __func__.2331
   198: 00000000     0 FILE    LOCAL  DEFAULT  ABS file.c
   199: c100945d    37 FUNC    LOCAL  DEFAULT    8 hash32
   200: c100efe0    11 OBJECT  LOCAL  DEFAULT    9 __func__.2609
   201: c100efec    10 OBJECT  LOCAL  DEFAULT    9 __func__.2639
   202: 00000000     0 FILE    LOCAL  DEFAULT  ABS inode.c
   203: c100a647   114 FUNC    LOCAL  DEFAULT    8 inode_locate
   204: c100f0b4    13 OBJECT  LOCAL  DEFAULT    9 __func__.2230
   205: c100f0c4    14 OBJECT  LOCAL  DEFAULT    9 __func__.2238
   206: 00000000     0 FILE    LOCAL  DEFAULT  ABS pipe.c
   207: c100acdb    37 FUNC    LOCAL  DEFAULT    8 hash32
   208: 00000000     0 FILE    LOCAL  DEFAULT  ABS ioqueue.c
   209: c100af1c    37 FUNC    LOCAL  DEFAULT    8 hash32
   210: c100af85    28 FUNC    LOCAL  DEFAULT    8 next_pos
   211: c100afc0    22 FUNC    LOCAL  DEFAULT    8 ioq_empty
   212: c100afd6    70 FUNC    LOCAL  DEFAULT    8 ioq_wait
   213: c100f13c     9 OBJECT  LOCAL  DEFAULT    9 __func__.2545
   214: c100b01c    66 FUNC    LOCAL  DEFAULT    8 wakeup
   215: c100f148     7 OBJECT  LOCAL  DEFAULT    9 __func__.2549
   216: 00000000     0 FILE    LOCAL  DEFAULT  ABS apic.c
   217: c100b70d    57 FUNC    LOCAL  DEFAULT    8 wait_8254_wraparound
   218: c100b942    51 FUNC    LOCAL  DEFAULT    8 lapic_wrmsr
   219: 00000000     0 FILE    LOCAL  DEFAULT  ABS mp_config.c
   220: 00000000     0 FILE    LOCAL  DEFAULT  ABS ap.c
   221: 00000000     0 FILE    LOCAL  DEFAULT  ABS pci.c
   222: 00000000     0 FILE    LOCAL  DEFAULT  ABS rtl8139.c
   223: c100b975    59 FUNC    GLOBAL DEFAULT    8 init_lapic
   224: c1001844     0 NOTYPE  GLOBAL DEFAULT    8 vector242
   225: c100129b     0 NOTYPE  GLOBAL DEFAULT    8 vector119
   226: c1009b58  1890 FUNC    GLOBAL DEFAULT    8 file_write
   227: c100117b     0 NOTYPE  GLOBAL DEFAULT    8 vector87
   228: c1001172     0 NOTYPE  GLOBAL DEFAULT    8 vector86
   229: c10071ef   252 FUNC    GLOBAL DEFAULT    8 sys_close
   230: c100b18b    83 FUNC    GLOBAL DEFAULT    8 ioq_length
   231: c1009a01   279 FUNC    GLOBAL DEFAULT    8 file_open
   232: c10018b0     0 NOTYPE  GLOBAL DEFAULT    8 vector251
   233: c100024e    48 FUNC    GLOBAL DEFAULT    8 strcpy
   234: c1006918   707 FUNC    GLOBAL DEFAULT    8 mount_partition
   235: c1001f50    25 FUNC    GLOBAL DEFAULT    8 kbd_intr
   236: c1000000    29 FUNC    GLOBAL DEFAULT    8 inb
   237: 40000811   913 FUNC    GLOBAL DEFAULT    4 my_shell
   238: c100119f     0 NOTYPE  GLOBAL DEFAULT    8 vector91
   239: c1000f95     0 NOTYPE  GLOBAL DEFAULT    8 vector33
   240: c10024c0   534 FUNC    GLOBAL DEFAULT    8 test_vmm
   241: c1001484     0 NOTYPE  GLOBAL DEFAULT    8 vector162
   242: 40000bce    33 FUNC    GLOBAL DEFAULT    4 user_memset
   243: c10016e8     0 NOTYPE  GLOBAL DEFAULT    8 vector213
   244: 40000f16   195 FUNC    GLOBAL DEFAULT    4 make_clear_abs_path
   245: c1001238     0 NOTYPE  GLOBAL DEFAULT    8 vector108
   246: c1000fef     0 NOTYPE  GLOBAL DEFAULT    8 vector43
   247: c1003872    53 FUNC    GLOBAL DEFAULT    8 get_task_name
   248: c100ce23   405 FUNC    GLOBAL DEFAULT    8 dump
   249: c100c056   261 FUNC    GLOBAL DEFAULT    8 check_floating_pointer_ex
   250: c10014a8     0 NOTYPE  GLOBAL DEFAULT    8 vector165
   251: c1004648    48 FUNC    GLOBAL DEFAULT    8 pte_ptr
   252: c1001598     0 NOTYPE  GLOBAL DEFAULT    8 vector185
   253: c1a1aac0    52 OBJECT  GLOBAL DEFAULT   11 rtl
   254: c1001277     0 NOTYPE  GLOBAL DEFAULT    8 vector115
   255: c1003316    91 FUNC    GLOBAL DEFAULT    8 sys_free
   256: c1616000  4096 OBJECT  GLOBAL DEFAULT   11 new_pdt
   257: 4000037e   769 FUNC    GLOBAL DEFAULT    4 printf
   258: c10012b6     0 NOTYPE  GLOBAL DEFAULT    8 vector122
   259: c100c74b   295 FUNC    GLOBAL DEFAULT    8 start_ap
   260: c100a8ca   252 FUNC    GLOBAL DEFAULT    8 inode_delete
   261: c1007e56    16 FUNC    GLOBAL DEFAULT    8 sys_rewinddir
   262: c1001dd5   379 FUNC    GLOBAL DEFAULT    8 kbd_proc_data
   263: c100143c     0 NOTYPE  GLOBAL DEFAULT    8 vector156
   264: c1001868     0 NOTYPE  GLOBAL DEFAULT    8 vector245
   265: c10015c8     0 NOTYPE  GLOBAL DEFAULT    8 vector189
   266: c1000ebb     0 NOTYPE  GLOBAL DEFAULT    8 vector7
   267: c1001091     0 NOTYPE  GLOBAL DEFAULT    8 vector61
   268: c1000f44     0 NOTYPE  GLOBAL DEFAULT    8 vector24
   269: 00107000  4096 OBJECT  GLOBAL DEFAULT    3 stack_pt
   270: c1001253     0 NOTYPE  GLOBAL DEFAULT    8 vector111
   271: c100164c     0 NOTYPE  GLOBAL DEFAULT    8 vector200
   272: c10075a1   236 FUNC    GLOBAL DEFAULT    8 sys_lseek
   273: c1001f69    97 FUNC    GLOBAL DEFAULT    8 kbd_init
   274: c1015ce0    12 OBJECT  GLOBAL DEFAULT   11 highmem_zone
   275: c100a7da   214 FUNC    GLOBAL DEFAULT    8 inode_open
   276: c10010c7     0 NOTYPE  GLOBAL DEFAULT    8 vector67
   277: c100c9a7    37 FUNC    GLOBAL DEFAULT    8 apmain
   278: c1013c68     4 OBJECT  GLOBAL DEFAULT   11 shift
   279: 00105000  4096 OBJECT  GLOBAL DEFAULT    3 pt2
   280: c1001364     0 NOTYPE  GLOBAL DEFAULT    8 vector138
   281: c1001106     0 NOTYPE  GLOBAL DEFAULT    8 vector74
   282: c100106d     0 NOTYPE  GLOBAL DEFAULT    8 vector57
   283: c10053ec    85 FUNC    GLOBAL DEFAULT    8 cons_intr
   284: c10056ca   285 FUNC    GLOBAL DEFAULT    8 print_char
   285: c1000ae0   343 FUNC    GLOBAL DEFAULT    8 print_trapframe
   286: c100c872   309 FUNC    GLOBAL DEFAULT    8 ap_init
   287: c10016f4     0 NOTYPE  GLOBAL DEFAULT    8 vector214
   288: c10011e7     0 NOTYPE  GLOBAL DEFAULT    8 vector99
   289: c10088bb  1083 FUNC    GLOBAL DEFAULT    8 sync_dir_entry
   290: c1000e54     0 NOTYPE  GLOBAL DEFAULT    8 __alltraps
   291: c1005e22    92 FUNC    GLOBAL DEFAULT    8 cons_getc
   292: c1001388     0 NOTYPE  GLOBAL DEFAULT    8 vector141
   293: 400014ad   146 FUNC    GLOBAL DEFAULT    4 buildin_mkdir
   294: c100969b   132 FUNC    GLOBAL DEFAULT    8 bitmap_sync
   295: c10014fc     0 NOTYPE  GLOBAL DEFAULT    8 vector172
   296: c1001838     0 NOTYPE  GLOBAL DEFAULT    8 vector241
   297: c10078ad  1082 FUNC    GLOBAL DEFAULT    8 sys_mkdir
   298: c10018c8     0 NOTYPE  GLOBAL DEFAULT    8 vector253
   299: c1000e97     0 NOTYPE  GLOBAL DEFAULT    8 vector3
   300: c1000e76     0 NOTYPE  GLOBAL DEFAULT    8 forkrets
   301: c1000e8e     0 NOTYPE  GLOBAL DEFAULT    8 vector2
   302: 00103000  4096 OBJECT  GLOBAL DEFAULT    3 pt
   303: c1003ddf   408 FUNC    GLOBAL DEFAULT    8 do_fork
   304: c1001790     0 NOTYPE  GLOBAL DEFAULT    8 vector227
   305: c1003f86    95 FUNC    GLOBAL DEFAULT    8 kernel_thread
   306: c10016c4     0 NOTYPE  GLOBAL DEFAULT    8 vector210
   307: c100884f   108 FUNC    GLOBAL DEFAULT    8 create_dir_entry
   308: c100176c     0 NOTYPE  GLOBAL DEFAULT    8 vector224
   309: 400002d5    15 FUNC    GLOBAL DEFAULT    4 ps
   310: c1000fdd     0 NOTYPE  GLOBAL DEFAULT    8 vector41
   311: 40000185    16 FUNC    GLOBAL DEFAULT    4 user_backtrace
   312: c100c4ba   171 FUNC    GLOBAL DEFAULT    8 mp_config_io_interrupt_du
   313: c1000f29     0 NOTYPE  GLOBAL DEFAULT    8 vector21
   314: c1001538     0 NOTYPE  GLOBAL DEFAULT    8 vector177
   315: c1001292     0 NOTYPE  GLOBAL DEFAULT    8 vector118
   316: c10010e2     0 NOTYPE  GLOBAL DEFAULT    8 vector70
   317: c100b61e    44 FUNC    GLOBAL DEFAULT    8 global_enable
   318: c1011b14     4 OBJECT  GLOBAL DEFAULT   10 highmem_end
   319: c1a1a000     4 OBJECT  GLOBAL DEFAULT   11 task0
   320: c10062f7    61 FUNC    GLOBAL DEFAULT    8 ide_read
   321: c10010d9     0 NOTYPE  GLOBAL DEFAULT    8 vector69
   322: c1001808     0 NOTYPE  GLOBAL DEFAULT    8 vector237
   323: c10010ac     0 NOTYPE  GLOBAL DEFAULT    8 vector64
   324: c1000f5f     0 NOTYPE  GLOBAL DEFAULT    8 vector27
   325: c100131c     0 NOTYPE  GLOBAL DEFAULT    8 vector132
   326: c10015a4     0 NOTYPE  GLOBAL DEFAULT    8 vector186
   327: c100744a   343 FUNC    GLOBAL DEFAULT    8 sys_read
   328: c1001718     0 NOTYPE  GLOBAL DEFAULT    8 vector217
   329: c1004c53   178 FUNC    GLOBAL DEFAULT    8 sys_print_task
   330: c1004d05     0 NOTYPE  GLOBAL DEFAULT    8 kernel_thread_entry
   331: c100013c    22 FUNC    GLOBAL DEFAULT    8 memcpy
   332: c100be89   243 FUNC    GLOBAL DEFAULT    8 mp_floating_dump
   333: c1009395   200 FUNC    GLOBAL DEFAULT    8 dir_remove
   334: c1000e85     0 NOTYPE  GLOBAL DEFAULT    8 vector1
   335: c1001544     0 NOTYPE  GLOBAL DEFAULT    8 vector178
   336: c1000fc2     0 NOTYPE  GLOBAL DEFAULT    8 vector38
   337: c1005441    79 FUNC    GLOBAL DEFAULT    8 serial_proc_data
   338: c1001814     0 NOTYPE  GLOBAL DEFAULT    8 vector238
   339: 4000067f    30 FUNC    GLOBAL DEFAULT    4 print_prompt
   340: c100c620   182 FUNC    GLOBAL DEFAULT    8 parse_config_entries
   341: c100b05e   149 FUNC    GLOBAL DEFAULT    8 ioq_getchar
   342: c100ba8f    68 FUNC    GLOBAL DEFAULT    8 enable_irq
   343: c1009482    69 FUNC    GLOBAL DEFAULT    8 get_free_slot_in_global
   344: c10003a7    62 FUNC    GLOBAL DEFAULT    8 __PANIC
   345: c10005ff   194 FUNC    GLOBAL DEFAULT    8 readline
   346: c1001328     0 NOTYPE  GLOBAL DEFAULT    8 vector133
   347: c10010fd     0 NOTYPE  GLOBAL DEFAULT    8 vector73
   348: c10013ac     0 NOTYPE  GLOBAL DEFAULT    8 vector144
   349: c1008cf6  1186 FUNC    GLOBAL DEFAULT    8 delete_dir_entry
   350: c1015d00 0x600000 OBJECT  GLOBAL DEFAULT   11 pp
   351: c100b0f3   152 FUNC    GLOBAL DEFAULT    8 ioq_putchar
   352: c100c263   205 FUNC    GLOBAL DEFAULT    8 find_config_table
   353: c100027e    12 FUNC    GLOBAL DEFAULT    8 CPU_INVLPG
   354: c10018d4     0 NOTYPE  GLOBAL DEFAULT    8 vector254
   355: 40000250    19 FUNC    GLOBAL DEFAULT    4 rewinddir
   356: c10011f9     0 NOTYPE  GLOBAL DEFAULT    8 vector101
   357: c10016d0     0 NOTYPE  GLOBAL DEFAULT    8 vector211
   358: c1617000 0x300000 OBJECT  GLOBAL DEFAULT   11 user_pt_highmem
   359: c1001514     0 NOTYPE  GLOBAL DEFAULT    8 vector174
   360: 400002e4    18 FUNC    GLOBAL DEFAULT    4 malloc
   361: c1001850     0 NOTYPE  GLOBAL DEFAULT    8 vector243
   362: c1011040    56 OBJECT  GLOBAL DEFAULT   10 gdt
   363: 4000002f    35 FUNC    GLOBAL DEFAULT    4 test_fork
   364: c10012ec     0 NOTYPE  GLOBAL DEFAULT    8 vector128
   365: c1001145     0 NOTYPE  GLOBAL DEFAULT    8 vector81
   366: c1000ee7     0 NOTYPE  GLOBAL DEFAULT    8 vector13
   367: c100bb13    40 FUNC    GLOBAL DEFAULT    8 get_cpuid
   368: c1015cc0    12 OBJECT  GLOBAL DEFAULT   11 user_sema
   369: c1001037     0 NOTYPE  GLOBAL DEFAULT    8 vector51
   370: c1000efe     0 NOTYPE  GLOBAL DEFAULT    8 vector16
   371: 00102000  4096 OBJECT  GLOBAL DEFAULT    3 pt_init
   372: c100b87f    35 FUNC    GLOBAL DEFAULT    8 init_timer
   373: 40001cc0   512 OBJECT  GLOBAL DEFAULT    7 cwd_cache
   374: c100182c     0 NOTYPE  GLOBAL DEFAULT    8 vector240
   375: c1001052     0 NOTYPE  GLOBAL DEFAULT    8 vector54
   376: c1000f17     0 NOTYPE  GLOBAL DEFAULT    8 vector19
   377: c1002c2c   252 FUNC    GLOBAL DEFAULT    8 pmm_alloc
   378: c10011a8     0 NOTYPE  GLOBAL DEFAULT    8 vector92
   379: c10054b4    85 FUNC    GLOBAL DEFAULT    8 serial_putc_sub
   380: c100185c     0 NOTYPE  GLOBAL DEFAULT    8 vector244
   381: c100137c     0 NOTYPE  GLOBAL DEFAULT    8 vector140
   382: c100c330   152 FUNC    GLOBAL DEFAULT    8 mp_config_processor_dump
   383: c1015cb8     4 OBJECT  GLOBAL DEFAULT   11 ap_started
   384: c1001001     0 NOTYPE  GLOBAL DEFAULT    8 vector45
   385: c1009198   469 FUNC    GLOBAL DEFAULT    8 dir_read
   386: c1001133     0 NOTYPE  GLOBAL DEFAULT    8 vector79
   387: 40000fd9    96 FUNC    GLOBAL DEFAULT    4 buildin_pwd
   388: c10017a8     0 NOTYPE  GLOBAL DEFAULT    8 vector229
   389: 4000023e    18 FUNC    GLOBAL DEFAULT    4 rmdir
   390: c1001454     0 NOTYPE  GLOBAL DEFAULT    8 vector158
   391: c100c439   129 FUNC    GLOBAL DEFAULT    8 mp_config_io_apic_dump
   392: c10050ab    51 FUNC    GLOBAL DEFAULT    8 pic_enable
   393: c10023d7   233 FUNC    GLOBAL DEFAULT    8 test_pmm
   394: 400002c3    18 FUNC    GLOBAL DEFAULT    4 readdir
   395: c1000fcb     0 NOTYPE  GLOBAL DEFAULT    8 vector39
   396: c100070e   232 FUNC    GLOBAL DEFAULT    8 gdt_init
   397: c10014cc     0 NOTYPE  GLOBAL DEFAULT    8 vector168
   398: c100ba0a   133 FUNC    GLOBAL DEFAULT    8 ioapic_init
   399: c1000fa7     0 NOTYPE  GLOBAL DEFAULT    8 vector35
   400: c1001265     0 NOTYPE  GLOBAL DEFAULT    8 vector113
   401: c1003371    40 FUNC    GLOBAL DEFAULT    8 sys_mmap
   402: c1011b10     4 OBJECT  GLOBAL DEFAULT   10 highmem_start
   403: c10012d1     0 NOTYPE  GLOBAL DEFAULT    8 vector125
   404: c100936d    40 FUNC    GLOBAL DEFAULT    8 dir_is_empty
   405: 4000167c     4 OBJECT  GLOBAL DEFAULT    5 argc
   406: c100bad3    29 FUNC    GLOBAL DEFAULT    8 ioapic_read
   407: c100c6d6   117 FUNC    GLOBAL DEFAULT    8 mp_config_init
   408: c100971f   738 FUNC    GLOBAL DEFAULT    8 file_create
   409: c1a1a228     4 OBJECT  GLOBAL DEFAULT   11 second
   410: c100b250   163 FUNC    GLOBAL DEFAULT    8 test_apic
   411: 40000116    15 FUNC    GLOBAL DEFAULT    4 user_sys_getpid
   412: c100170c     0 NOTYPE  GLOBAL DEFAULT    8 vector216
   413: 400001f7    35 FUNC    GLOBAL DEFAULT    4 lseek
   414: c10010a3     0 NOTYPE  GLOBAL DEFAULT    8 vector63
   415: c1000f56     0 NOTYPE  GLOBAL DEFAULT    8 vector26
   416: c1005490    36 FUNC    GLOBAL DEFAULT    8 serial_intr
   417: c10015f8     0 NOTYPE  GLOBAL DEFAULT    8 vector193
   418: c100161c     0 NOTYPE  GLOBAL DEFAULT    8 vector196
   419: c10016b8     0 NOTYPE  GLOBAL DEFAULT    8 vector209
   420: 4000031b    24 FUNC    GLOBAL DEFAULT    4 mmap
   421: c1000ea0     0 NOTYPE  GLOBAL DEFAULT    8 vector4
   422: c10063dc   132 FUNC    GLOBAL DEFAULT    8 test_ide_io
   423: c10014e4     0 NOTYPE  GLOBAL DEFAULT    8 vector170
   424: c100405b   165 FUNC    GLOBAL DEFAULT    8 schedule
   425: c100134c     0 NOTYPE  GLOBAL DEFAULT    8 vector136
   426: c1000ed2     0 NOTYPE  GLOBAL DEFAULT    8 vector10
   427: c1001694     0 NOTYPE  GLOBAL DEFAULT    8 vector206
   428: c10018e0     0 NOTYPE  GLOBAL DEFAULT    8 vector255
   429: c100b22f    15 FUNC    GLOBAL DEFAULT    8 apic_read
   430: c100325b    92 FUNC    GLOBAL DEFAULT    8 setup_pgdir
   431: c1001568     0 NOTYPE  GLOBAL DEFAULT    8 vector181
   432: 400015d1   146 FUNC    GLOBAL DEFAULT    4 buildin_rm
   433: c1615d00    12 OBJECT  GLOBAL DEFAULT   11 normal_zone
   434: c100858b    14 FUNC    GLOBAL DEFAULT    8 fs_init
   435: c100107f     0 NOTYPE  GLOBAL DEFAULT    8 vector59
   436: c1a1a234     4 OBJECT  GLOBAL DEFAULT   11 root_dir
   437: c1004338   296 FUNC    GLOBAL DEFAULT    8 copy_user_cr3
   438: c1001169     0 NOTYPE  GLOBAL DEFAULT    8 vector85
   439: c1001160     0 NOTYPE  GLOBAL DEFAULT    8 vector84
   440: c1004d0a     0 NOTYPE  GLOBAL DEFAULT    8 switch_to
   441: c1001580     0 NOTYPE  GLOBAL DEFAULT    8 vector183
   442: c10006f7    23 FUNC    GLOBAL DEFAULT    8 ltr
   443: c1001460     0 NOTYPE  GLOBAL DEFAULT    8 vector159
   444: c1015cbc     4 OBJECT  GLOBAL DEFAULT   11 pci_devices_num
   445: c10016dc     0 NOTYPE  GLOBAL DEFAULT    8 vector212
   446: c100ad00    52 FUNC    GLOBAL DEFAULT    8 is_pipe
   447: c1004930   803 FUNC    GLOBAL DEFAULT    8 user_task_init
   448: c1001013     0 NOTYPE  GLOBAL DEFAULT    8 vector47
   449: c100179c     0 NOTYPE  GLOBAL DEFAULT    8 vector228
   450: c1000fe6     0 NOTYPE  GLOBAL DEFAULT    8 vector42
   451: c1000478    47 FUNC    GLOBAL DEFAULT    8 instr_hello
   452: 4000036c    18 FUNC    GLOBAL DEFAULT    4 pipe
   453: c100126e     0 NOTYPE  GLOBAL DEFAULT    8 vector114
   454: c100c15b   264 FUNC    GLOBAL DEFAULT    8 mp_config_table_dump
   455: c1001520     0 NOTYPE  GLOBAL DEFAULT    8 vector175
   456: c10013a0     0 NOTYPE  GLOBAL DEFAULT    8 vector143
   457: c1002df4   349 FUNC    GLOBAL DEFAULT    8 setup_vpt
   458: c1001304     0 NOTYPE  GLOBAL DEFAULT    8 vector130
   459: c100b6d6    55 FUNC    GLOBAL DEFAULT    8 setup_lvt_timer
   460: c1001874     0 NOTYPE  GLOBAL DEFAULT    8 vector246
   461: c1000ecb     0 NOTYPE  GLOBAL DEFAULT    8 vector9
   462: c1001394     0 NOTYPE  GLOBAL DEFAULT    8 vector142
   463: c10011f0     0 NOTYPE  GLOBAL DEFAULT    8 vector100
   464: c100001d    31 FUNC    GLOBAL DEFAULT    8 inw
   465: c1008629   492 FUNC    GLOBAL DEFAULT    8 search_dir_entry
   466: c1001658     0 NOTYPE  GLOBAL DEFAULT    8 vector201
   467: c100427e   186 FUNC    GLOBAL DEFAULT    8 set_user_cr3
   468: c100412e   176 FUNC    GLOBAL DEFAULT    8 thread_unblock
   469: c10001ca    63 FUNC    GLOBAL DEFAULT    8 strrchr
   470: c1000802   491 FUNC    GLOBAL DEFAULT    8 idt_init
   471: 00101000  4096 OBJECT  GLOBAL DEFAULT    3 pdt
   472: c10023d2     5 FUNC    GLOBAL DEFAULT    8 kernel_main
   473: c1001088     0 NOTYPE  GLOBAL DEFAULT    8 vector60
   474: c1000f3b     0 NOTYPE  GLOBAL DEFAULT    8 vector23
   475: c100554f   124 FUNC    GLOBAL DEFAULT    8 timer_init
   476: c1007e21    53 FUNC    GLOBAL DEFAULT    8 sys_readdir
   477: c10017fc     0 NOTYPE  GLOBAL DEFAULT    8 vector236
   478: c1002d28   167 FUNC    GLOBAL DEFAULT    8 pmm_free
   479: 400001df    24 FUNC    GLOBAL DEFAULT    4 write
   480: c1006f51   604 FUNC    GLOBAL DEFAULT    8 sys_open
   481: c10017c0     0 NOTYPE  GLOBAL DEFAULT    8 vector231
   482: c100599d   178 FUNC    GLOBAL DEFAULT    8 backtrace
   483: c10010be     0 NOTYPE  GLOBAL DEFAULT    8 vector66
   484: c1000f71     0 NOTYPE  GLOBAL DEFAULT    8 vector29
   485: c1a1a3c0     4 OBJECT  GLOBAL DEFAULT   11 m_config_table_header
   486: c1001340     0 NOTYPE  GLOBAL DEFAULT    8 vector135
   487: 40000d3e    48 FUNC    GLOBAL DEFAULT    4 user_strcpy
   488: c1005652   120 FUNC    GLOBAL DEFAULT    8 clear
   489: 00106000  4096 OBJECT  GLOBAL DEFAULT    3 pt3
   490: c1001121     0 NOTYPE  GLOBAL DEFAULT    8 vector77
   491: c100b6a6    48 FUNC    GLOBAL DEFAULT    8 software_disable
   492: c10004a7   125 FUNC    GLOBAL DEFAULT    8 instr_help
   493: c1000209    69 FUNC    GLOBAL DEFAULT    8 strcat
   494: c100155c     0 NOTYPE  GLOBAL DEFAULT    8 vector180
   495: c10016ac     0 NOTYPE  GLOBAL DEFAULT    8 vector208
   496: c1000524   193 FUNC    GLOBAL DEFAULT    8 instr_game
   497: c10011de     0 NOTYPE  GLOBAL DEFAULT    8 vector98
   498: c10011d5     0 NOTYPE  GLOBAL DEFAULT    8 vector97
   499: c100316e   237 FUNC    GLOBAL DEFAULT    8 vmm_map
   500: c10071ad    66 FUNC    GLOBAL DEFAULT    8 fd_local2global
   501: c100152c     0 NOTYPE  GLOBAL DEFAULT    8 vector176
   502: c1001604     0 NOTYPE  GLOBAL DEFAULT    8 vector194
   503: c1000f8c     0 NOTYPE  GLOBAL DEFAULT    8 vector32
   504: 40000278    18 FUNC    GLOBAL DEFAULT    4 chdir
   505: c1001640     0 NOTYPE  GLOBAL DEFAULT    8 vector199
   506: c100423a    24 FUNC    GLOBAL DEFAULT    8 do_exit
   507: 40000cc3    40 FUNC    GLOBAL DEFAULT    4 user_strlen
   508: c1001310     0 NOTYPE  GLOBAL DEFAULT    8 vector131
   509: c10018bc     0 NOTYPE  GLOBAL DEFAULT    8 vector252
   510: c1000e7c     0 NOTYPE  GLOBAL DEFAULT    8 vector0
   511: c100b1f3    60 FUNC    GLOBAL DEFAULT    8 apic_write64
   512: c100b676    48 FUNC    GLOBAL DEFAULT    8 software_enable
   513: c1004100    46 FUNC    GLOBAL DEFAULT    8 thread_block
   514: c100b2f3   811 FUNC    GLOBAL DEFAULT    8 check
   515: c1005de4    62 FUNC    GLOBAL DEFAULT    8 cons_putc
   516: c100b9f5    21 FUNC    GLOBAL DEFAULT    8 eoi
   517: 40000333    21 FUNC    GLOBAL DEFAULT    4 exec
   518: c10013b8     0 NOTYPE  GLOBAL DEFAULT    8 vector145
   519: c1a1a004     4 OBJECT  GLOBAL DEFAULT   11 task1
   520: c10072eb   351 FUNC    GLOBAL DEFAULT    8 sys_write
   521: c100122f     0 NOTYPE  GLOBAL DEFAULT    8 vector107
   522: c1000fd4     0 NOTYPE  GLOBAL DEFAULT    8 vector40
   523: 40000348    18 FUNC    GLOBAL DEFAULT    4 wait
   524: c1000df1    31 FUNC    GLOBAL DEFAULT    8 intr_enable
   525: c1001202     0 NOTYPE  GLOBAL DEFAULT    8 vector102
   526: c100a2ba   909 FUNC    GLOBAL DEFAULT    8 file_read
   527: 40000156    47 FUNC    GLOBAL DEFAULT    4 user_print_num
   528: c1001064     0 NOTYPE  GLOBAL DEFAULT    8 vector56
   529: 40000c84    63 FUNC    GLOBAL DEFAULT    4 user_strrchr
   530: c10010d0     0 NOTYPE  GLOBAL DEFAULT    8 vector68
   531: c1011b20  4100 OBJECT  GLOBAL DEFAULT   10 task_pidmap
   532: c1000eb2     0 NOTYPE  GLOBAL DEFAULT    8 vector6
   533: c100d062    88 FUNC    GLOBAL DEFAULT    8 pci_init
   534: c10012f8     0 NOTYPE  GLOBAL DEFAULT    8 vector129
   535: c100afa1    31 FUNC    GLOBAL DEFAULT    8 ioq_full
   536: c1a1aaf4     0 NOTYPE  GLOBAL DEFAULT   11 kernel_end
   537: c100ccc4    83 FUNC    GLOBAL DEFAULT    8 enum_buses
   538: c1001628     0 NOTYPE  GLOBAL DEFAULT    8 vector197
   539: 40000195    24 FUNC    GLOBAL DEFAULT    4 read
   540: c1005333   115 FUNC    GLOBAL DEFAULT    8 lpt_putc_sub
   541: c1005509    70 FUNC    GLOBAL DEFAULT    8 serial_putc
   542: c100d23f   609 FUNC    GLOBAL DEFAULT    8 rtl8139_init
   543: c100140c     0 NOTYPE  GLOBAL DEFAULT    8 vector152
   544: c1007df4    45 FUNC    GLOBAL DEFAULT    8 sys_closedir
   545: c1011100     0 NOTYPE  GLOBAL DEFAULT   10 __vectors
   546: c10017b4     0 NOTYPE  GLOBAL DEFAULT    8 vector230
   547: c1000fb9     0 NOTYPE  GLOBAL DEFAULT    8 vector37
   548: c1001688     0 NOTYPE  GLOBAL DEFAULT    8 vector205
   549: c1001478     0 NOTYPE  GLOBAL DEFAULT    8 vector161
   550: c1a1a008     4 OBJECT  GLOBAL DEFAULT   11 current
   551: c100003c    28 FUNC    GLOBAL DEFAULT    8 inl
   552: 4000021a    18 FUNC    GLOBAL DEFAULT    4 unlink
   553: c10010eb     0 NOTYPE  GLOBAL DEFAULT    8 vector71
   554: c100146c     0 NOTYPE  GLOBAL DEFAULT    8 vector160
   555: c10053a6    70 FUNC    GLOBAL DEFAULT    8 lpt_putc
   556: c1001700     0 NOTYPE  GLOBAL DEFAULT    8 vector215
   557: c1004460   108 FUNC    GLOBAL DEFAULT    8 list_traversal
   558: c100b64a    44 FUNC    GLOBAL DEFAULT    8 global_disable
   559: c1001448     0 NOTYPE  GLOBAL DEFAULT    8 vector157
   560: 00109000     0 NOTYPE  GLOBAL DEFAULT    3 init_end
   561: c1000e10    32 FUNC    GLOBAL DEFAULT    8 intr_disable
   562: c1000a20   192 FUNC    GLOBAL DEFAULT    8 print_regs
   563: c100ca62   610 FUNC    GLOBAL DEFAULT    8 check_device
   564: c100b23e    18 FUNC    GLOBAL DEFAULT    8 apic_read64
   565: c100125c     0 NOTYPE  GLOBAL DEFAULT    8 vector112
   566: 40000c71    19 FUNC    GLOBAL DEFAULT    4 user_strcmp
   567: 40001488    37 FUNC    GLOBAL DEFAULT    4 buildin_ps
   568: c100028a    12 FUNC    GLOBAL DEFAULT    8 lcr3
   569: c1917000 0x20000 OBJECT  GLOBAL DEFAULT   11 pt_highmem
   570: c1001574     0 NOTYPE  GLOBAL DEFAULT    8 vector182
   571: c100383d    53 FUNC    GLOBAL DEFAULT    8 set_task_name
   572: c1000ee0     0 NOTYPE  GLOBAL DEFAULT    8 vector12
   573: c1000296    94 FUNC    GLOBAL DEFAULT    8 memcmp
   574: 40000143    19 FUNC    GLOBAL DEFAULT    4 user_print_string
   575: c1001241     0 NOTYPE  GLOBAL DEFAULT    8 vector109
   576: c1000f20     0 NOTYPE  GLOBAL DEFAULT    8 vector20
   577: c1000dc6     7 FUNC    GLOBAL DEFAULT    8 disable_interupt
   578: 4000030c    15 FUNC    GLOBAL DEFAULT    4 fork
   579: c1005a4f   917 FUNC    GLOBAL DEFAULT    8 printk
   580: c100bfb5   161 FUNC    GLOBAL DEFAULT    8 find_floating_pointer
   581: c1001049     0 NOTYPE  GLOBAL DEFAULT    8 vector53
   582: c1000f0e     0 NOTYPE  GLOBAL DEFAULT    8 vector18
   583: 00100000   508 FUNC    GLOBAL DEFAULT    2 init
   584: c1009b18    64 FUNC    GLOBAL DEFAULT    8 file_close
   585: c10011c3     0 NOTYPE  GLOBAL DEFAULT    8 vector95
   586: c100ae8b   145 FUNC    GLOBAL DEFAULT    8 pipe_write
   587: c1002774    25 FUNC    GLOBAL DEFAULT    8 test_user
   588: c1004252    10 FUNC    GLOBAL DEFAULT    8 do_execve
   589: c1001784     0 NOTYPE  GLOBAL DEFAULT    8 vector226
   590: c100d0ba   389 FUNC    GLOBAL DEFAULT    8 get_info_from_pci
   591: c1a1a230     4 OBJECT  GLOBAL DEFAULT   11 cur_part
   592: c1001025     0 NOTYPE  GLOBAL DEFAULT    8 vector49
   593: c1937000  4096 OBJECT  GLOBAL DEFAULT   11 pt_4MB
   594: c1000ff8     0 NOTYPE  GLOBAL DEFAULT    8 vector44
   595: 40000d28    22 FUNC    GLOBAL DEFAULT    4 user_memcpy
   596: c100112a     0 NOTYPE  GLOBAL DEFAULT    8 vector78
   597: c1001508     0 NOTYPE  GLOBAL DEFAULT    8 vector173
   598: c1000058    33 FUNC    GLOBAL DEFAULT    8 outb
   599: c1001289     0 NOTYPE  GLOBAL DEFAULT    8 vector117
   600: c100114e     0 NOTYPE  GLOBAL DEFAULT    8 vector82
   601: c1001754     0 NOTYPE  GLOBAL DEFAULT    8 vector222
   602: c100b9b0    69 FUNC    GLOBAL DEFAULT    8 do_timer_irq
   603: c1000ec4     0 NOTYPE  GLOBAL DEFAULT    8 vector8
   604: c10013e8     0 NOTYPE  GLOBAL DEFAULT    8 vector149
   605: c10000de    33 FUNC    GLOBAL DEFAULT    8 memset
   606: c1005ea3    54 FUNC    GLOBAL DEFAULT    8 sema_init
   607: c1005fe3   148 FUNC    GLOBAL DEFAULT    8 sema_up
   608: c10017cc     0 NOTYPE  GLOBAL DEFAULT    8 vector232
   609: c1001fef   294 FUNC    GLOBAL DEFAULT    8 main
   610: c1006077    79 FUNC    GLOBAL DEFAULT    8 lock_acquire
   611: c1001226     0 NOTYPE  GLOBAL DEFAULT    8 vector106
   612: c100173c     0 NOTYPE  GLOBAL DEFAULT    8 vector220
   613: 40001ec0   512 OBJECT  GLOBAL DEFAULT    7 final_path
   614: c1001196     0 NOTYPE  GLOBAL DEFAULT    8 vector90
   615: c1001490     0 NOTYPE  GLOBAL DEFAULT    8 vector163
   616: c10017e4     0 NOTYPE  GLOBAL DEFAULT    8 vector234
   617: c100768d   544 FUNC    GLOBAL DEFAULT    8 sys_unlink
   618: c100109a     0 NOTYPE  GLOBAL DEFAULT    8 vector62
   619: c1000f4d     0 NOTYPE  GLOBAL DEFAULT    8 vector25
   620: c1001634     0 NOTYPE  GLOBAL DEFAULT    8 vector198
   621: c1005ed9    42 FUNC    GLOBAL DEFAULT    8 lock_init
   622: c10012a4     0 NOTYPE  GLOBAL DEFAULT    8 vector120
   623: c1008599    80 FUNC    GLOBAL DEFAULT    8 open_root_dir
   624: c10032b7    95 FUNC    GLOBAL DEFAULT    8 sys_malloc
   625: c1005f03   224 FUNC    GLOBAL DEFAULT    8 sema_down
   626: c1001d5e   119 FUNC    GLOBAL DEFAULT    8 syscall_trap
   627: c10005e5    26 FUNC    GLOBAL DEFAULT    8 getchar
   628: c1000dcd     7 FUNC    GLOBAL DEFAULT    8 enable_interupt
   629: 4000029f    18 FUNC    GLOBAL DEFAULT    4 opendir
   630: c100102e     0 NOTYPE  GLOBAL DEFAULT    8 vector50
   631: c1000ef5     0 NOTYPE  GLOBAL DEFAULT    8 vector15
   632: c10060c6    73 FUNC    GLOBAL DEFAULT    8 lock_release
   633: 00104000  4096 OBJECT  GLOBAL DEFAULT    3 pt1
   634: 40001039   138 FUNC    GLOBAL DEFAULT    4 buildin_cd
   635: c1000dd4    29 FUNC    GLOBAL DEFAULT    8 get_now_intr_status
   636: c1001400     0 NOTYPE  GLOBAL DEFAULT    8 vector151
   637: c1001157     0 NOTYPE  GLOBAL DEFAULT    8 vector83
   638: c100118d     0 NOTYPE  GLOBAL DEFAULT    8 vector89
   639: c1001184     0 NOTYPE  GLOBAL DEFAULT    8 vector88
   640: c100baf0    35 FUNC    GLOBAL DEFAULT    8 ioapic_write
   641: c1000daf    23 FUNC    GLOBAL DEFAULT    8 trap
   642: c1001550     0 NOTYPE  GLOBAL DEFAULT    8 vector179
   643: c1000f9e     0 NOTYPE  GLOBAL DEFAULT    8 vector34
   644: c100b746   313 FUNC    GLOBAL DEFAULT    8 calibrate_clock
   645: c100100a     0 NOTYPE  GLOBAL DEFAULT    8 vector46
   646: c10001b7    19 FUNC    GLOBAL DEFAULT    8 strcmp
   647: c100d564   339 FUNC    GLOBAL DEFAULT    8 transmit
   648: c100ca15    77 FUNC    GLOBAL DEFAULT    8 pci_write
   649: c100bb3b   653 FUNC    GLOBAL DEFAULT    8 Local_APIC_init
   650: c1000e30    19 FUNC    GLOBAL DEFAULT    8 intr_save
   651: c1001334     0 NOTYPE  GLOBAL DEFAULT    8 vector134
   652: c1005247   236 FUNC    GLOBAL DEFAULT    8 serial_init
   653: c1001760     0 NOTYPE  GLOBAL DEFAULT    8 vector223
   654: c1a1a22c     4 OBJECT  GLOBAL DEFAULT   11 jiffies
   655: c10033be   878 FUNC    GLOBAL DEFAULT    8 kernel_task_init
   656: c10081e5   493 FUNC    GLOBAL DEFAULT    8 sys_getcwd
   657: 40000263    21 FUNC    GLOBAL DEFAULT    4 getcwd
   658: c10051fe    73 FUNC    GLOBAL DEFAULT    8 delay
   659: c100a9c6   709 FUNC    GLOBAL DEFAULT    8 inode_release
   660: c1001724     0 NOTYPE  GLOBAL DEFAULT    8 vector218
   661: c1006c39   136 FUNC    GLOBAL DEFAULT    8 path_depth_cnt
   662: c100041e    90 FUNC    GLOBAL DEFAULT    8 run
   663: c10044cc   380 FUNC    GLOBAL DEFAULT    8 task_exit
   664: c1004f9b   178 FUNC    GLOBAL DEFAULT    8 sys_execv
   665: c10055cb   135 FUNC    GLOBAL DEFAULT    8 print_cursor
   666: c10050de   288 FUNC    GLOBAL DEFAULT    8 pic_init
   667: c1001778     0 NOTYPE  GLOBAL DEFAULT    8 vector225
   668: c10015b0     0 NOTYPE  GLOBAL DEFAULT    8 vector187
   669: c100b8a2   160 FUNC    GLOBAL DEFAULT    8 init_apic
   670: c1000e43    17 FUNC    GLOBAL DEFAULT    8 intr_restore
   671: c100278d  1183 FUNC    GLOBAL DEFAULT    8 pmm_init
   672: c1615d0c    12 OBJECT  GLOBAL DEFAULT   11 dma_zone
   673: c1013c70     4 OBJECT  GLOBAL DEFAULT   11 test_user_task
   674: c1000f7a     0 NOTYPE  GLOBAL DEFAULT    8 vector30
   675: c10012e3     0 NOTYPE  GLOBAL DEFAULT    8 vector127
   676: c100bf7c    57 FUNC    GLOBAL DEFAULT    8 check_sum
   677: c100d6b7   262 FUNC    GLOBAL DEFAULT    8 receive
   678: c10015ec     0 NOTYPE  GLOBAL DEFAULT    8 vector192
   679: c10014b4     0 NOTYPE  GLOBAL DEFAULT    8 vector166
   680: c1001118     0 NOTYPE  GLOBAL DEFAULT    8 vector76
   681: c100110f     0 NOTYPE  GLOBAL DEFAULT    8 vector75
   682: c1001610     0 NOTYPE  GLOBAL DEFAULT    8 vector195
   683: c10013f4     0 NOTYPE  GLOBAL DEFAULT    8 vector150
   684: c1938000  4096 OBJECT  GLOBAL DEFAULT   11 local_apic
   685: c1001076     0 NOTYPE  GLOBAL DEFAULT    8 vector58
   686: c100188c     0 NOTYPE  GLOBAL DEFAULT    8 vector248
   687: c10012bf     0 NOTYPE  GLOBAL DEFAULT    8 vector123
   688: c1a1a3e0  1760 OBJECT  GLOBAL DEFAULT   11 pci_devices
   689: c10011cc     0 NOTYPE  GLOBAL DEFAULT    8 vector96
   690: c100a6b9   289 FUNC    GLOBAL DEFAULT    8 inode_sync
   691: c1000f83     0 NOTYPE  GLOBAL DEFAULT    8 vector31
   692: c1001670     0 NOTYPE  GLOBAL DEFAULT    8 vector203
   693: c1002f51   293 FUNC    GLOBAL DEFAULT    8 vmm_malloc
   694: c1013c74     4 OBJECT  GLOBAL DEFAULT   11 offset
   695: c100581e   383 FUNC    GLOBAL DEFAULT    8 print_num
   696: c1001370     0 NOTYPE  GLOBAL DEFAULT    8 vector139
   697: c1001418     0 NOTYPE  GLOBAL DEFAULT    8 vector153
   698: c100149c     0 NOTYPE  GLOBAL DEFAULT    8 vector164
   699: c10012ad     0 NOTYPE  GLOBAL DEFAULT    8 vector121
   700: c1000ea9     0 NOTYPE  GLOBAL DEFAULT    8 vector5
   701: c10014c0     0 NOTYPE  GLOBAL DEFAULT    8 vector167
   702: c1001430     0 NOTYPE  GLOBAL DEFAULT    8 vector155
   703: c1001898     0 NOTYPE  GLOBAL DEFAULT    8 vector249
   704: c1000079    33 FUNC    GLOBAL DEFAULT    8 outw
   705: c10018a4     0 NOTYPE  GLOBAL DEFAULT    8 vector250
   706: c10085e9    64 FUNC    GLOBAL DEFAULT    8 dir_open
   707: c10012c8     0 NOTYPE  GLOBAL DEFAULT    8 vector124
   708: c100124a     0 NOTYPE  GLOBAL DEFAULT    8 vector110
   709: c1011000    36 OBJECT  GLOBAL DEFAULT   10 instr_list
   710: c100167c     0 NOTYPE  GLOBAL DEFAULT    8 vector204
   711: 4000028a    21 FUNC    GLOBAL DEFAULT    4 stat
   712: c1000e6b     0 NOTYPE  GLOBAL DEFAULT    8 __trapret
   713: c10002fc   171 FUNC    GLOBAL DEFAULT    8 print_seg
   714: c1001358     0 NOTYPE  GLOBAL DEFAULT    8 vector137
   715: c1939000     4 OBJECT  GLOBAL DEFAULT   11 highmem_ptr
   716: c100009a    24 FUNC    GLOBAL DEFAULT    8 outl
   717: c1007ce7   269 FUNC    GLOBAL DEFAULT    8 sys_opendir
   718: c1001880     0 NOTYPE  GLOBAL DEFAULT    8 vector247
   719: c1000f32     0 NOTYPE  GLOBAL DEFAULT    8 vector22
   720: c10057e7    55 FUNC    GLOBAL DEFAULT    8 print_string
   721: c100c3c8   113 FUNC    GLOBAL DEFAULT    8 mp_config_bus_dump
   722: c1001664     0 NOTYPE  GLOBAL DEFAULT    8 vector202
   723: c10010f4     0 NOTYPE  GLOBAL DEFAULT    8 vector72
   724: c100105b     0 NOTYPE  GLOBAL DEFAULT    8 vector55
   725: c10012da     0 NOTYPE  GLOBAL DEFAULT    8 vector126
   726: c10010b5     0 NOTYPE  GLOBAL DEFAULT    8 vector65
   727: c1000f68     0 NOTYPE  GLOBAL DEFAULT    8 vector28
   728: c100cd84   159 FUNC    GLOBAL DEFAULT    8 pci_device_init
   729: c10014d8     0 NOTYPE  GLOBAL DEFAULT    8 vector169
   730: c10017d8     0 NOTYPE  GLOBAL DEFAULT    8 vector233
   731: 40000052   104 FUNC    GLOBAL DEFAULT    4 user_main
   732: c1a1a3c4     4 OBJECT  GLOBAL DEFAULT   11 m_floating_pointer
   733: c100af41    68 FUNC    GLOBAL DEFAULT    8 ioqueue_init
   734: c100cd17   109 FUNC    GLOBAL DEFAULT    8 pci_device_bar_init
   735: c100bdc8   193 FUNC    GLOBAL DEFAULT    8 APIC_IOAPIC_init
   736: 40000125    30 FUNC    GLOBAL DEFAULT    4 user_print_char
   737: c100c9cc    73 FUNC    GLOBAL DEFAULT    8 pci_read
   738: c100ae08   131 FUNC    GLOBAL DEFAULT    8 pipe_read
   739: c10009ed    14 FUNC    GLOBAL DEFAULT    8 set_ts_esp0
   740: 4000035a    18 FUNC    GLOBAL DEFAULT    4 exit
   741: c10047f3   166 FUNC    GLOBAL DEFAULT    8 sys_wait
   742: c1004899   151 FUNC    GLOBAL DEFAULT    8 sys_exit
   743: c10013d0     0 NOTYPE  GLOBAL DEFAULT    8 vector147
   744: 40002180     0 NOTYPE  GLOBAL DEFAULT    7 user_end
   745: c1015cb4     4 OBJECT  GLOBAL DEFAULT   11 m_tick
   746: c1001214     0 NOTYPE  GLOBAL DEFAULT    8 vector104
   747: c100b1de    21 FUNC    GLOBAL DEFAULT    8 apic_write
   748: c1001280     0 NOTYPE  GLOBAL DEFAULT    8 vector116
   749: 00009000     0 NOTYPE  GLOBAL DEFAULT    1 apstart
   750: c1003076   248 FUNC    GLOBAL DEFAULT    8 vmm_free
   751: c100ac8b    80 FUNC    GLOBAL DEFAULT    8 inode_init
   752: c1a1a00c     4 OBJECT  GLOBAL DEFAULT   11 user_task
   753: c1a1a240   384 OBJECT  GLOBAL DEFAULT   11 file_table
   754: c1001040     0 NOTYPE  GLOBAL DEFAULT    8 vector52
   755: c1000f07     0 NOTYPE  GLOBAL DEFAULT    8 vector17
   756: c100158c     0 NOTYPE  GLOBAL DEFAULT    8 vector184
   757: c1004678   246 FUNC    GLOBAL DEFAULT    8 release_prog_resource
   758: c1000152    40 FUNC    GLOBAL DEFAULT    8 strlen
   759: 40001663    25 FUNC    GLOBAL DEFAULT    4 buildin_help
   760: 400001ad    32 FUNC    GLOBAL DEFAULT    4 open
   761: c100ad34   212 FUNC    GLOBAL DEFAULT    8 sys_pipe
   762: c1007e66   288 FUNC    GLOBAL DEFAULT    8 sys_rmdir
   763: c10016a0     0 NOTYPE  GLOBAL DEFAULT    8 vector207
   764: c10015d4     0 NOTYPE  GLOBAL DEFAULT    8 vector190
   765: c10002f4     8 FUNC    GLOBAL DEFAULT    8 nop
   766: c10083d2   300 FUNC    GLOBAL DEFAULT    8 sys_stat
   767: c1001820     0 NOTYPE  GLOBAL DEFAULT    8 vector239
   768: c10011ba     0 NOTYPE  GLOBAL DEFAULT    8 vector94
   769: c10011b1     0 NOTYPE  GLOBAL DEFAULT    8 vector93
   770: c100d4a0   196 FUNC    GLOBAL DEFAULT    8 do_rtl8139_irq
   771: c10015bc     0 NOTYPE  GLOBAL DEFAULT    8 vector188
   772: 400010c3   965 FUNC    GLOBAL DEFAULT    4 buildin_ls
   773: c100101c     0 NOTYPE  GLOBAL DEFAULT    8 vector48
   774: 4000153f   146 FUNC    GLOBAL DEFAULT    4 buildin_rmdir
   775: c1001730     0 NOTYPE  GLOBAL DEFAULT    8 vector219
   776: c1a1a020   520 OBJECT  GLOBAL DEFAULT   11 cons
   777: c10013dc     0 NOTYPE  GLOBAL DEFAULT    8 vector148
   778: c1001748     0 NOTYPE  GLOBAL DEFAULT    8 vector221
   779: 400002b1    18 FUNC    GLOBAL DEFAULT    4 closedir
   780: c10063a0    60 FUNC    GLOBAL DEFAULT    8 read_main_partition
   781: c100113c     0 NOTYPE  GLOBAL DEFAULT    8 vector80
   782: c10014f0     0 NOTYPE  GLOBAL DEFAULT    8 vector171
   783: c1001424     0 NOTYPE  GLOBAL DEFAULT    8 vector154
   784: c1013c6c     1 OBJECT  GLOBAL DEFAULT   11 shell_input
   785: c1000fb0     0 NOTYPE  GLOBAL DEFAULT    8 vector36
   786: c1012b2c     0 NOTYPE  GLOBAL DEFAULT   10 kernel_bss
   787: c10017f0     0 NOTYPE  GLOBAL DEFAULT    8 vector235
   788: c100121d     0 NOTYPE  GLOBAL DEFAULT    8 vector105
   789: c10084fe   141 FUNC    GLOBAL DEFAULT    8 sys_chdir
   790: 40000bef    69 FUNC    GLOBAL DEFAULT    4 user_strcat
   791: c1008815    58 FUNC    GLOBAL DEFAULT    8 dir_close
   792: 00108000  4096 OBJECT  GLOBAL DEFAULT    3 user_pt
   793: c10026d6    13 FUNC    GLOBAL DEFAULT    8 test_schedule
   794: 4000022c    18 FUNC    GLOBAL DEFAULT    4 mkdir
   795: c10013c4     0 NOTYPE  GLOBAL DEFAULT    8 vector146
   796: c100950d   192 FUNC    GLOBAL DEFAULT    8 inode_bitmap_alloc
   797: c10015e0     0 NOTYPE  GLOBAL DEFAULT    8 vector191
   798: 400001cd    18 FUNC    GLOBAL DEFAULT    4 close
   799: c100120b     0 NOTYPE  GLOBAL DEFAULT    8 vector103
   800: c10003e5    57 FUNC    GLOBAL DEFAULT    8 monitor
   801: c1006334    61 FUNC    GLOBAL DEFAULT    8 ide_write
   802: c100cfb8   170 FUNC    GLOBAL DEFAULT    8 enable_bus_mastering
   803: c10094c7    70 FUNC    GLOBAL DEFAULT    8 task_fd_install
   804: c100c565   187 FUNC    GLOBAL DEFAULT    8 mp_config_local_interrupt
   805: c100a8b0    26 FUNC    GLOBAL DEFAULT    8 inode_close
   806: 400002f6    22 FUNC    GLOBAL DEFAULT    4 free
   807: c10095cd   206 FUNC    GLOBAL DEFAULT    8 block_bitmap_alloc
   808: c193a000 0xe0000 OBJECT  GLOBAL DEFAULT   11 pt_dma_nomal
   809: c1000ed9     0 NOTYPE  GLOBAL DEFAULT    8 vector11
   810: c1000eee     0 NOTYPE  GLOBAL DEFAULT    8 vector14

No version information found in this file.
