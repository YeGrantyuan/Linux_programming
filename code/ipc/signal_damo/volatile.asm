
volatile:     file format elf64-x86-64
volatile
architecture: i386:x86-64, flags 0x00000112:
EXEC_P, HAS_SYMS, D_PAGED
start address 0x0000000000400410

Program Header:
    PHDR off    0x0000000000000040 vaddr 0x0000000000400040 paddr 0x0000000000400040 align 2**3
         filesz 0x00000000000001f8 memsz 0x00000000000001f8 flags r-x
  INTERP off    0x0000000000000238 vaddr 0x0000000000400238 paddr 0x0000000000400238 align 2**0
         filesz 0x000000000000001c memsz 0x000000000000001c flags r--
    LOAD off    0x0000000000000000 vaddr 0x0000000000400000 paddr 0x0000000000400000 align 2**21
         filesz 0x00000000000006ec memsz 0x00000000000006ec flags r-x
    LOAD off    0x0000000000000e28 vaddr 0x0000000000600e28 paddr 0x0000000000600e28 align 2**21
         filesz 0x00000000000001f8 memsz 0x0000000000000208 flags rw-
 DYNAMIC off    0x0000000000000e50 vaddr 0x0000000000600e50 paddr 0x0000000000600e50 align 2**3
         filesz 0x0000000000000190 memsz 0x0000000000000190 flags rw-
    NOTE off    0x0000000000000254 vaddr 0x0000000000400254 paddr 0x0000000000400254 align 2**2
         filesz 0x0000000000000044 memsz 0x0000000000000044 flags r--
EH_FRAME off    0x0000000000000618 vaddr 0x0000000000400618 paddr 0x0000000000400618 align 2**2
         filesz 0x000000000000002c memsz 0x000000000000002c flags r--
   STACK off    0x0000000000000000 vaddr 0x0000000000000000 paddr 0x0000000000000000 align 2**3
         filesz 0x0000000000000000 memsz 0x0000000000000000 flags rw-
   RELRO off    0x0000000000000e28 vaddr 0x0000000000600e28 paddr 0x0000000000600e28 align 2**0
         filesz 0x00000000000001d8 memsz 0x00000000000001d8 flags r--

Dynamic Section:
  NEEDED               libc.so.6
  INIT                 0x00000000004003c8
  FINI                 0x00000000004005f8
  GNU_HASH             0x0000000000400298
  STRTAB               0x0000000000400318
  SYMTAB               0x00000000004002b8
  STRSZ                0x000000000000003d
  SYMENT               0x0000000000000018
  DEBUG                0x0000000000000000
  PLTGOT               0x0000000000600fe8
  PLTRELSZ             0x0000000000000030
  PLTREL               0x0000000000000007
  JMPREL               0x0000000000400398
  RELA                 0x0000000000400380
  RELASZ               0x0000000000000018
  RELAENT              0x0000000000000018
  VERNEED              0x0000000000400360
  VERNEEDNUM           0x0000000000000001
  VERSYM               0x0000000000400356

Version References:
  required from libc.so.6:
    0x09691a75 0x00 02 GLIBC_2.2.5

Sections:
Idx Name          Size      VMA               LMA               File off  Algn
  0 .interp       0000001c  0000000000400238  0000000000400238  00000238  2**0
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  1 .note.ABI-tag 00000020  0000000000400254  0000000000400254  00000254  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  2 .note.gnu.build-id 00000024  0000000000400274  0000000000400274  00000274  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  3 .gnu.hash     0000001c  0000000000400298  0000000000400298  00000298  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  4 .dynsym       00000060  00000000004002b8  00000000004002b8  000002b8  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  5 .dynstr       0000003d  0000000000400318  0000000000400318  00000318  2**0
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  6 .gnu.version  00000008  0000000000400356  0000000000400356  00000356  2**1
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  7 .gnu.version_r 00000020  0000000000400360  0000000000400360  00000360  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  8 .rela.dyn     00000018  0000000000400380  0000000000400380  00000380  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  9 .rela.plt     00000030  0000000000400398  0000000000400398  00000398  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
 10 .init         00000018  00000000004003c8  00000000004003c8  000003c8  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
 11 .plt          00000030  00000000004003e0  00000000004003e0  000003e0  2**4
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
 12 .text         000001e8  0000000000400410  0000000000400410  00000410  2**4
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
 13 .fini         0000000e  00000000004005f8  00000000004005f8  000005f8  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
 14 .rodata       00000010  0000000000400608  0000000000400608  00000608  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
 15 .eh_frame_hdr 0000002c  0000000000400618  0000000000400618  00000618  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
 16 .eh_frame     000000a4  0000000000400648  0000000000400648  00000648  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
 17 .ctors        00000010  0000000000600e28  0000000000600e28  00000e28  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 18 .dtors        00000010  0000000000600e38  0000000000600e38  00000e38  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 19 .jcr          00000008  0000000000600e48  0000000000600e48  00000e48  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 20 .dynamic      00000190  0000000000600e50  0000000000600e50  00000e50  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 21 .got          00000008  0000000000600fe0  0000000000600fe0  00000fe0  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 22 .got.plt      00000028  0000000000600fe8  0000000000600fe8  00000fe8  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 23 .data         00000010  0000000000601010  0000000000601010  00001010  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 24 .bss          00000010  0000000000601020  0000000000601020  00001020  2**3
                  ALLOC
 25 .comment      0000002a  0000000000000000  0000000000000000  00001020  2**0
                  CONTENTS, READONLY
 26 .debug_aranges 00000030  0000000000000000  0000000000000000  0000104a  2**0
                  CONTENTS, READONLY, DEBUGGING
 27 .debug_info   0000009a  0000000000000000  0000000000000000  0000107a  2**0
                  CONTENTS, READONLY, DEBUGGING
 28 .debug_abbrev 0000004e  0000000000000000  0000000000000000  00001114  2**0
                  CONTENTS, READONLY, DEBUGGING
 29 .debug_line   00000046  0000000000000000  0000000000000000  00001162  2**0
                  CONTENTS, READONLY, DEBUGGING
 30 .debug_str    0000008a  0000000000000000  0000000000000000  000011a8  2**0
                  CONTENTS, READONLY, DEBUGGING
 31 .debug_loc    00000060  0000000000000000  0000000000000000  00001232  2**0
                  CONTENTS, READONLY, DEBUGGING
SYMBOL TABLE:
0000000000400238 l    d  .interp	0000000000000000              .interp
0000000000400254 l    d  .note.ABI-tag	0000000000000000              .note.ABI-tag
0000000000400274 l    d  .note.gnu.build-id	0000000000000000              .note.gnu.build-id
0000000000400298 l    d  .gnu.hash	0000000000000000              .gnu.hash
00000000004002b8 l    d  .dynsym	0000000000000000              .dynsym
0000000000400318 l    d  .dynstr	0000000000000000              .dynstr
0000000000400356 l    d  .gnu.version	0000000000000000              .gnu.version
0000000000400360 l    d  .gnu.version_r	0000000000000000              .gnu.version_r
0000000000400380 l    d  .rela.dyn	0000000000000000              .rela.dyn
0000000000400398 l    d  .rela.plt	0000000000000000              .rela.plt
00000000004003c8 l    d  .init	0000000000000000              .init
00000000004003e0 l    d  .plt	0000000000000000              .plt
0000000000400410 l    d  .text	0000000000000000              .text
00000000004005f8 l    d  .fini	0000000000000000              .fini
0000000000400608 l    d  .rodata	0000000000000000              .rodata
0000000000400618 l    d  .eh_frame_hdr	0000000000000000              .eh_frame_hdr
0000000000400648 l    d  .eh_frame	0000000000000000              .eh_frame
0000000000600e28 l    d  .ctors	0000000000000000              .ctors
0000000000600e38 l    d  .dtors	0000000000000000              .dtors
0000000000600e48 l    d  .jcr	0000000000000000              .jcr
0000000000600e50 l    d  .dynamic	0000000000000000              .dynamic
0000000000600fe0 l    d  .got	0000000000000000              .got
0000000000600fe8 l    d  .got.plt	0000000000000000              .got.plt
0000000000601010 l    d  .data	0000000000000000              .data
0000000000601020 l    d  .bss	0000000000000000              .bss
0000000000000000 l    d  .comment	0000000000000000              .comment
0000000000000000 l    d  .debug_aranges	0000000000000000              .debug_aranges
0000000000000000 l    d  .debug_info	0000000000000000              .debug_info
0000000000000000 l    d  .debug_abbrev	0000000000000000              .debug_abbrev
0000000000000000 l    d  .debug_line	0000000000000000              .debug_line
0000000000000000 l    d  .debug_str	0000000000000000              .debug_str
0000000000000000 l    d  .debug_loc	0000000000000000              .debug_loc
000000000040043c l     F .text	0000000000000000              call_gmon_start
0000000000000000 l    df *ABS*	0000000000000000              crtstuff.c
0000000000600e28 l     O .ctors	0000000000000000              __CTOR_LIST__
0000000000600e38 l     O .dtors	0000000000000000              __DTOR_LIST__
0000000000600e48 l     O .jcr	0000000000000000              __JCR_LIST__
0000000000400460 l     F .text	0000000000000000              __do_global_dtors_aux
0000000000601020 l     O .bss	0000000000000001              completed.6531
0000000000601028 l     O .bss	0000000000000008              dtor_idx.6533
00000000004004d0 l     F .text	0000000000000000              frame_dummy
0000000000000000 l    df *ABS*	0000000000000000              crtstuff.c
0000000000600e30 l     O .ctors	0000000000000000              __CTOR_END__
00000000004006e8 l     O .eh_frame	0000000000000000              __FRAME_END__
0000000000600e48 l     O .jcr	0000000000000000              __JCR_END__
00000000004005c0 l     F .text	0000000000000000              __do_global_ctors_aux
0000000000000000 l    df *ABS*	0000000000000000              volatile.c
0000000000600e24 l       .ctors	0000000000000000              __init_array_end
0000000000600e50 l     O .dynamic	0000000000000000              _DYNAMIC
0000000000600e24 l       .ctors	0000000000000000              __init_array_start
0000000000600fe8 l     O .got.plt	0000000000000000              _GLOBAL_OFFSET_TABLE_
00000000004005b0 g     F .text	0000000000000002              __libc_csu_fini
0000000000601010  w      .data	0000000000000000              data_start
0000000000000000       F *UND*	0000000000000000              puts@@GLIBC_2.2.5
0000000000601020 g       *ABS*	0000000000000000              _edata
00000000004005f8 g     F .fini	0000000000000000              _fini
0000000000600e40 g     O .dtors	0000000000000000              .hidden __DTOR_END__
0000000000000000       F *UND*	0000000000000000              __libc_start_main@@GLIBC_2.2.5
0000000000601010 g       .data	0000000000000000              __data_start
0000000000000000  w      *UND*	0000000000000000              __gmon_start__
0000000000601018 g     O .data	0000000000000000              .hidden __dso_handle
0000000000400608 g     O .rodata	0000000000000004              _IO_stdin_used
0000000000400520 g     F .text	0000000000000089              __libc_csu_init
0000000000601030 g       *ABS*	0000000000000000              _end
0000000000400410 g     F .text	0000000000000000              _start
0000000000601020 g       *ABS*	0000000000000000              __bss_start
00000000004004f4 g     F .text	0000000000000028              main
0000000000000000  w      *UND*	0000000000000000              _Jv_RegisterClasses
00000000004003c8 g     F .init	0000000000000000              _init


Contents of section .interp:
 400238 2f6c6962 36342f6c 642d6c69 6e75782d  /lib64/ld-linux-
 400248 7838362d 36342e73 6f2e3200           x86-64.so.2.    
Contents of section .note.ABI-tag:
 400254 04000000 10000000 01000000 474e5500  ............GNU.
 400264 00000000 02000000 06000000 18000000  ................
Contents of section .note.gnu.build-id:
 400274 04000000 14000000 03000000 474e5500  ............GNU.
 400284 d34791ca 2f83c24b 1df6bd05 acc480f9  .G../..K........
 400294 6fda226d                             o."m            
Contents of section .gnu.hash:
 400298 01000000 01000000 01000000 00000000  ................
 4002a8 00000000 00000000 00000000           ............    
Contents of section .dynsym:
 4002b8 00000000 00000000 00000000 00000000  ................
 4002c8 00000000 00000000 1a000000 12000000  ................
 4002d8 00000000 00000000 00000000 00000000  ................
 4002e8 1f000000 12000000 00000000 00000000  ................
 4002f8 00000000 00000000 01000000 20000000  ............ ...
 400308 00000000 00000000 00000000 00000000  ................
Contents of section .dynstr:
 400318 005f5f67 6d6f6e5f 73746172 745f5f00  .__gmon_start__.
 400328 6c696263 2e736f2e 36007075 7473005f  libc.so.6.puts._
 400338 5f6c6962 635f7374 6172745f 6d61696e  _libc_start_main
 400348 00474c49 42435f32 2e322e35 00        .GLIBC_2.2.5.   
Contents of section .gnu.version:
 400356 00000200 02000000                    ........        
Contents of section .gnu.version_r:
 400360 01000100 10000000 10000000 00000000  ................
 400370 751a6909 00000200 31000000 00000000  u.i.....1.......
Contents of section .rela.dyn:
 400380 e00f6000 00000000 06000000 03000000  ..`.............
 400390 00000000 00000000                    ........        
Contents of section .rela.plt:
 400398 00106000 00000000 07000000 01000000  ..`.............
 4003a8 00000000 00000000 08106000 00000000  ..........`.....
 4003b8 07000000 02000000 00000000 00000000  ................
Contents of section .init:
 4003c8 4883ec08 e86b0000 00e8fa00 0000e8e5  H....k..........
 4003d8 01000048 83c408c3                    ...H....        
Contents of section .plt:
 4003e0 ff350a0c 2000ff25 0c0c2000 0f1f4000  .5.. ..%.. ...@.
 4003f0 ff250a0c 20006800 000000e9 e0ffffff  .%.. .h.........
 400400 ff25020c 20006801 000000e9 d0ffffff  .%.. .h.........
Contents of section .text:
 400410 31ed4989 d15e4889 e24883e4 f0505449  1.I..^H..H...PTI
 400420 c7c0b005 400048c7 c1200540 0048c7c7  ....@.H.. .@.H..
 400430 f4044000 e8c7ffff fff49090 4883ec08  ..@.........H...
 400440 488b0599 0b200048 85c07402 ffd04883  H.... .H..t...H.
 400450 c408c390 90909090 90909090 90909090  ................
 400460 554889e5 534883ec 08803db0 0b200000  UH..SH....=.. ..
 400470 754bbb40 0e600048 8b05aa0b 20004881  uK.@.`.H.... .H.
 400480 eb380e60 0048c1fb 034883eb 014839d8  .8.`.H...H...H9.
 400490 7324660f 1f440000 4883c001 48890585  s$f..D..H...H...
 4004a0 0b2000ff 14c5380e 6000488b 05770b20  . ....8.`.H..w. 
 4004b0 004839d8 72e2c605 630b2000 014883c4  .H9.r...c. ..H..
 4004c0 085b5dc3 6666662e 0f1f8400 00000000  .[].fff.........
 4004d0 48833d70 09200000 554889e5 7412b800  H.=p. ..UH..t...
 4004e0 00000048 85c07408 5dbf480e 6000ffe0  ...H..t.].H.`...
 4004f0 5dc39090 554889e5 4883ec10 c745fc05  ]...UH..H....E..
 400500 000000eb 0abf0c06 4000e8e1 feffff83  ........@.......
 400510 7dfc0075 f0b80000 0000c9c3 90909090  }..u............
 400520 48896c24 d84c8964 24e0488d 2df30820  H.l$.L.d$.H.-.. 
 400530 004c8d25 ec082000 4c896c24 e84c8974  .L.%.. .L.l$.L.t
 400540 24f04c89 7c24f848 895c24d0 4883ec38  $.L.|$.H.\$.H..8
 400550 4c29e541 89fd4989 f648c1fd 034989d7  L).A..I..H...I..
 400560 e863feff ff4885ed 741c31db 0f1f4000  .c...H..t.1...@.
 400570 4c89fa4c 89f64489 ef41ff14 dc4883c3  L..L..D..A...H..
 400580 014839eb 75ea488b 5c240848 8b6c2410  .H9.u.H.\$.H.l$.
 400590 4c8b6424 184c8b6c 24204c8b 7424284c  L.d$.L.l$ L.t$(L
 4005a0 8b7c2430 4883c438 c30f1f80 00000000  .|$0H..8........
 4005b0 f3c39090 90909090 90909090 90909090  ................
 4005c0 554889e5 534883ec 08488b05 58082000  UH..SH...H..X. .
 4005d0 4883f8ff 7419bb28 0e60000f 1f440000  H...t..(.`...D..
 4005e0 4883eb08 ffd0488b 034883f8 ff75f148  H.....H..H...u.H
 4005f0 83c4085b 5dc39090                    ...[]...        
Contents of section .fini:
 4005f8 4883ec08 e85ffeff ff4883c4 08c3      H...._...H....  
Contents of section .rodata:
 400608 01000200 68656c6c 6f776f72 6c642100  ....helloworld!.
Contents of section .eh_frame_hdr:
 400618 011b033b 2c000000 04000000 c8fdffff  ...;,...........
 400628 48000000 dcfeffff 70000000 08ffffff  H.......p.......
 400638 90000000 98ffffff b8000000           ............    
Contents of section .eh_frame:
 400648 14000000 00000000 017a5200 01781001  .........zR..x..
 400658 1b0c0708 90010000 24000000 1c000000  ........$.......
 400668 78fdffff 30000000 000e1046 0e184a0f  x...0......F..J.
 400678 0b770880 003f1a3b 2a332422 00000000  .w...?.;*3$"....
 400688 1c000000 44000000 64feffff 28000000  ....D...d...(...
 400698 00410e10 8602430d 06630c07 08000000  .A....C..c......
 4006a8 24000000 64000000 70feffff 89000000  $...d...p.......
 4006b8 00518c05 86065f0e 4083078f 028e038d  .Q...._.@.......
 4006c8 0402580e 08000000 14000000 8c000000  ..X.............
 4006d8 d8feffff 02000000 00000000 00000000  ................
 4006e8 00000000                             ....            
Contents of section .ctors:
 600e28 ffffffff ffffffff 00000000 00000000  ................
Contents of section .dtors:
 600e38 ffffffff ffffffff 00000000 00000000  ................
Contents of section .jcr:
 600e48 00000000 00000000                    ........        
Contents of section .dynamic:
 600e50 01000000 00000000 10000000 00000000  ................
 600e60 0c000000 00000000 c8034000 00000000  ..........@.....
 600e70 0d000000 00000000 f8054000 00000000  ..........@.....
 600e80 f5feff6f 00000000 98024000 00000000  ...o......@.....
 600e90 05000000 00000000 18034000 00000000  ..........@.....
 600ea0 06000000 00000000 b8024000 00000000  ..........@.....
 600eb0 0a000000 00000000 3d000000 00000000  ........=.......
 600ec0 0b000000 00000000 18000000 00000000  ................
 600ed0 15000000 00000000 00000000 00000000  ................
 600ee0 03000000 00000000 e80f6000 00000000  ..........`.....
 600ef0 02000000 00000000 30000000 00000000  ........0.......
 600f00 14000000 00000000 07000000 00000000  ................
 600f10 17000000 00000000 98034000 00000000  ..........@.....
 600f20 07000000 00000000 80034000 00000000  ..........@.....
 600f30 08000000 00000000 18000000 00000000  ................
 600f40 09000000 00000000 18000000 00000000  ................
 600f50 feffff6f 00000000 60034000 00000000  ...o....`.@.....
 600f60 ffffff6f 00000000 01000000 00000000  ...o............
 600f70 f0ffff6f 00000000 56034000 00000000  ...o....V.@.....
 600f80 00000000 00000000 00000000 00000000  ................
 600f90 00000000 00000000 00000000 00000000  ................
 600fa0 00000000 00000000 00000000 00000000  ................
 600fb0 00000000 00000000 00000000 00000000  ................
 600fc0 00000000 00000000 00000000 00000000  ................
 600fd0 00000000 00000000 00000000 00000000  ................
Contents of section .got:
 600fe0 00000000 00000000                    ........        
Contents of section .got.plt:
 600fe8 500e6000 00000000 00000000 00000000  P.`.............
 600ff8 00000000 00000000 f6034000 00000000  ..........@.....
 601008 06044000 00000000                    ..@.....        
Contents of section .data:
 601010 00000000 00000000 00000000 00000000  ................
Contents of section .comment:
 0000 4743433a 20285562 756e7475 2f4c696e  GCC: (Ubuntu/Lin
 0010 61726f20 342e362e 332d3175 62756e74  aro 4.6.3-1ubunt
 0020 75352920 342e362e 3300               u5) 4.6.3.      
Contents of section .debug_aranges:
 0000 2c000000 02000000 00000800 00000000  ,...............
 0010 f4044000 00000000 28000000 00000000  ..@.....(.......
 0020 00000000 00000000 00000000 00000000  ................
Contents of section .debug_info:
 0000 96000000 02000000 00000801 4f000000  ............O...
 0010 01000000 001d0000 00f40440 00000000  ...........@....
 0020 001c0540 00000000 00000000 00020807  ...@............
 0030 0b000000 0201085b 00000002 02077700  .......[......w.
 0040 00000204 07100000 00020106 5d000000  ............]...
 0050 02020545 00000003 0405696e 74000208  ...E......int...
 0060 05690000 00020106 64000000 04017200  .i......d.....r.
 0070 00000103 57000000 f4044000 00000000  ....W.....@.....
 0080 1c054000 00000000 00000000 056e0001  ..@..........n..
 0090 05570000 0002916c 0000               .W.....l..      
Contents of section .debug_abbrev:
 0000 01110125 0e130b03 0e1b0e11 01120110  ...%............
 0010 06000002 24000b0b 3e0b030e 00000324  ....$...>......$
 0020 000b0b3e 0b030800 00042e01 3f0c030e  ...>........?...
 0030 3a0b3b0b 49131101 12014006 00000534  :.;.I.....@....4
 0040 0003083a 0b3b0b49 13020a00 0000      ...:.;.I......  
Contents of section .debug_line:
 0000 42000000 02002100 00000101 fb0e0d00  B.....!.........
 0010 01010101 00000001 00000100 766f6c61  ............vola
 0020 74696c65 2e630000 00000000 0902f404  tile.c..........
 0030 40000000 00001583 75300002 04019c6b  @.......u0.....k
 0040 59020200 0101                        Y.....          
Contents of section .debug_str:
 0000 766f6c61 74696c65 2e63006c 6f6e6720  volatile.c.long 
 0010 756e7369 676e6564 20696e74 002f686f  unsigned int./ho
 0020 6d652f79 652f474e 552f4c69 6e75785f  me/ye/GNU/Linux_
 0030 4841442f 636f6465 2f736967 6e616c5f  HAD/code/signal_
 0040 64616d6f 0073686f 72742069 6e740047  damo.short int.G
 0050 4e552043 20342e36 2e330075 6e736967  NU C 4.6.3.unsig
 0060 6e656420 63686172 006c6f6e 6720696e  ned char.long in
 0070 74006d61 696e0073 686f7274 20756e73  t.main.short uns
 0080 69676e65 6420696e 7400               igned int.      
Contents of section .debug_loc:
 0000 00000000 00000000 01000000 00000000  ................
 0010 02007708 01000000 00000000 04000000  ..w.............
 0020 00000000 02007710 04000000 00000000  ......w.........
 0030 27000000 00000000 02007610 27000000  '.........v.'...
 0040 00000000 28000000 00000000 02007708  ....(.........w.
 0050 00000000 00000000 00000000 00000000  ................

Disassembly of section .init:

00000000004003c8 <_init>:
  4003c8:	48 83 ec 08          	sub    $0x8,%rsp
  4003cc:	e8 6b 00 00 00       	callq  40043c <call_gmon_start>
  4003d1:	e8 fa 00 00 00       	callq  4004d0 <frame_dummy>
  4003d6:	e8 e5 01 00 00       	callq  4005c0 <__do_global_ctors_aux>
  4003db:	48 83 c4 08          	add    $0x8,%rsp
  4003df:	c3                   	retq   

Disassembly of section .plt:

00000000004003e0 <puts@plt-0x10>:
  4003e0:	ff 35 0a 0c 20 00    	pushq  0x200c0a(%rip)        # 600ff0 <_GLOBAL_OFFSET_TABLE_+0x8>
  4003e6:	ff 25 0c 0c 20 00    	jmpq   *0x200c0c(%rip)        # 600ff8 <_GLOBAL_OFFSET_TABLE_+0x10>
  4003ec:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004003f0 <puts@plt>:
  4003f0:	ff 25 0a 0c 20 00    	jmpq   *0x200c0a(%rip)        # 601000 <_GLOBAL_OFFSET_TABLE_+0x18>
  4003f6:	68 00 00 00 00       	pushq  $0x0
  4003fb:	e9 e0 ff ff ff       	jmpq   4003e0 <_init+0x18>

0000000000400400 <__libc_start_main@plt>:
  400400:	ff 25 02 0c 20 00    	jmpq   *0x200c02(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x20>
  400406:	68 01 00 00 00       	pushq  $0x1
  40040b:	e9 d0 ff ff ff       	jmpq   4003e0 <_init+0x18>

Disassembly of section .text:

0000000000400410 <_start>:
  400410:	31 ed                	xor    %ebp,%ebp
  400412:	49 89 d1             	mov    %rdx,%r9
  400415:	5e                   	pop    %rsi
  400416:	48 89 e2             	mov    %rsp,%rdx
  400419:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40041d:	50                   	push   %rax
  40041e:	54                   	push   %rsp
  40041f:	49 c7 c0 b0 05 40 00 	mov    $0x4005b0,%r8
  400426:	48 c7 c1 20 05 40 00 	mov    $0x400520,%rcx
  40042d:	48 c7 c7 f4 04 40 00 	mov    $0x4004f4,%rdi
  400434:	e8 c7 ff ff ff       	callq  400400 <__libc_start_main@plt>
  400439:	f4                   	hlt    
  40043a:	90                   	nop
  40043b:	90                   	nop

000000000040043c <call_gmon_start>:
  40043c:	48 83 ec 08          	sub    $0x8,%rsp
  400440:	48 8b 05 99 0b 20 00 	mov    0x200b99(%rip),%rax        # 600fe0 <_DYNAMIC+0x190>
  400447:	48 85 c0             	test   %rax,%rax
  40044a:	74 02                	je     40044e <call_gmon_start+0x12>
  40044c:	ff d0                	callq  *%rax
  40044e:	48 83 c4 08          	add    $0x8,%rsp
  400452:	c3                   	retq   
  400453:	90                   	nop
  400454:	90                   	nop
  400455:	90                   	nop
  400456:	90                   	nop
  400457:	90                   	nop
  400458:	90                   	nop
  400459:	90                   	nop
  40045a:	90                   	nop
  40045b:	90                   	nop
  40045c:	90                   	nop
  40045d:	90                   	nop
  40045e:	90                   	nop
  40045f:	90                   	nop

0000000000400460 <__do_global_dtors_aux>:
  400460:	55                   	push   %rbp
  400461:	48 89 e5             	mov    %rsp,%rbp
  400464:	53                   	push   %rbx
  400465:	48 83 ec 08          	sub    $0x8,%rsp
  400469:	80 3d b0 0b 20 00 00 	cmpb   $0x0,0x200bb0(%rip)        # 601020 <__bss_start>
  400470:	75 4b                	jne    4004bd <__do_global_dtors_aux+0x5d>
  400472:	bb 40 0e 60 00       	mov    $0x600e40,%ebx
  400477:	48 8b 05 aa 0b 20 00 	mov    0x200baa(%rip),%rax        # 601028 <dtor_idx.6533>
  40047e:	48 81 eb 38 0e 60 00 	sub    $0x600e38,%rbx
  400485:	48 c1 fb 03          	sar    $0x3,%rbx
  400489:	48 83 eb 01          	sub    $0x1,%rbx
  40048d:	48 39 d8             	cmp    %rbx,%rax
  400490:	73 24                	jae    4004b6 <__do_global_dtors_aux+0x56>
  400492:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
  400498:	48 83 c0 01          	add    $0x1,%rax
  40049c:	48 89 05 85 0b 20 00 	mov    %rax,0x200b85(%rip)        # 601028 <dtor_idx.6533>
  4004a3:	ff 14 c5 38 0e 60 00 	callq  *0x600e38(,%rax,8)
  4004aa:	48 8b 05 77 0b 20 00 	mov    0x200b77(%rip),%rax        # 601028 <dtor_idx.6533>
  4004b1:	48 39 d8             	cmp    %rbx,%rax
  4004b4:	72 e2                	jb     400498 <__do_global_dtors_aux+0x38>
  4004b6:	c6 05 63 0b 20 00 01 	movb   $0x1,0x200b63(%rip)        # 601020 <__bss_start>
  4004bd:	48 83 c4 08          	add    $0x8,%rsp
  4004c1:	5b                   	pop    %rbx
  4004c2:	5d                   	pop    %rbp
  4004c3:	c3                   	retq   
  4004c4:	66 66 66 2e 0f 1f 84 	data32 data32 nopw %cs:0x0(%rax,%rax,1)
  4004cb:	00 00 00 00 00 

00000000004004d0 <frame_dummy>:
  4004d0:	48 83 3d 70 09 20 00 	cmpq   $0x0,0x200970(%rip)        # 600e48 <__JCR_END__>
  4004d7:	00 
  4004d8:	55                   	push   %rbp
  4004d9:	48 89 e5             	mov    %rsp,%rbp
  4004dc:	74 12                	je     4004f0 <frame_dummy+0x20>
  4004de:	b8 00 00 00 00       	mov    $0x0,%eax
  4004e3:	48 85 c0             	test   %rax,%rax
  4004e6:	74 08                	je     4004f0 <frame_dummy+0x20>
  4004e8:	5d                   	pop    %rbp
  4004e9:	bf 48 0e 60 00       	mov    $0x600e48,%edi
  4004ee:	ff e0                	jmpq   *%rax
  4004f0:	5d                   	pop    %rbp
  4004f1:	c3                   	retq   
  4004f2:	90                   	nop
  4004f3:	90                   	nop

00000000004004f4 <main>:
#include <stdio.h>

int main()
{
  4004f4:	55                   	push   %rbp
  4004f5:	48 89 e5             	mov    %rsp,%rbp
  4004f8:	48 83 ec 10          	sub    $0x10,%rsp
	int n = 5;
  4004fc:	c7 45 fc 05 00 00 00 	movl   $0x5,-0x4(%rbp)
	while(n)
  400503:	eb 0a                	jmp    40050f <main+0x1b>
	{
		printf("helloworld!\n");
  400505:	bf 0c 06 40 00       	mov    $0x40060c,%edi
  40050a:	e8 e1 fe ff ff       	callq  4003f0 <puts@plt>
#include <stdio.h>

int main()
{
	int n = 5;
	while(n)
  40050f:	83 7d fc 00          	cmpl   $0x0,-0x4(%rbp)
  400513:	75 f0                	jne    400505 <main+0x11>
	{
		printf("helloworld!\n");
	}

	return 0;
  400515:	b8 00 00 00 00       	mov    $0x0,%eax
}
  40051a:	c9                   	leaveq 
  40051b:	c3                   	retq   
  40051c:	90                   	nop
  40051d:	90                   	nop
  40051e:	90                   	nop
  40051f:	90                   	nop

0000000000400520 <__libc_csu_init>:
  400520:	48 89 6c 24 d8       	mov    %rbp,-0x28(%rsp)
  400525:	4c 89 64 24 e0       	mov    %r12,-0x20(%rsp)
  40052a:	48 8d 2d f3 08 20 00 	lea    0x2008f3(%rip),%rbp        # 600e24 <__init_array_end>
  400531:	4c 8d 25 ec 08 20 00 	lea    0x2008ec(%rip),%r12        # 600e24 <__init_array_end>
  400538:	4c 89 6c 24 e8       	mov    %r13,-0x18(%rsp)
  40053d:	4c 89 74 24 f0       	mov    %r14,-0x10(%rsp)
  400542:	4c 89 7c 24 f8       	mov    %r15,-0x8(%rsp)
  400547:	48 89 5c 24 d0       	mov    %rbx,-0x30(%rsp)
  40054c:	48 83 ec 38          	sub    $0x38,%rsp
  400550:	4c 29 e5             	sub    %r12,%rbp
  400553:	41 89 fd             	mov    %edi,%r13d
  400556:	49 89 f6             	mov    %rsi,%r14
  400559:	48 c1 fd 03          	sar    $0x3,%rbp
  40055d:	49 89 d7             	mov    %rdx,%r15
  400560:	e8 63 fe ff ff       	callq  4003c8 <_init>
  400565:	48 85 ed             	test   %rbp,%rbp
  400568:	74 1c                	je     400586 <__libc_csu_init+0x66>
  40056a:	31 db                	xor    %ebx,%ebx
  40056c:	0f 1f 40 00          	nopl   0x0(%rax)
  400570:	4c 89 fa             	mov    %r15,%rdx
  400573:	4c 89 f6             	mov    %r14,%rsi
  400576:	44 89 ef             	mov    %r13d,%edi
  400579:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  40057d:	48 83 c3 01          	add    $0x1,%rbx
  400581:	48 39 eb             	cmp    %rbp,%rbx
  400584:	75 ea                	jne    400570 <__libc_csu_init+0x50>
  400586:	48 8b 5c 24 08       	mov    0x8(%rsp),%rbx
  40058b:	48 8b 6c 24 10       	mov    0x10(%rsp),%rbp
  400590:	4c 8b 64 24 18       	mov    0x18(%rsp),%r12
  400595:	4c 8b 6c 24 20       	mov    0x20(%rsp),%r13
  40059a:	4c 8b 74 24 28       	mov    0x28(%rsp),%r14
  40059f:	4c 8b 7c 24 30       	mov    0x30(%rsp),%r15
  4005a4:	48 83 c4 38          	add    $0x38,%rsp
  4005a8:	c3                   	retq   
  4005a9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000004005b0 <__libc_csu_fini>:
  4005b0:	f3 c3                	repz retq 
  4005b2:	90                   	nop
  4005b3:	90                   	nop
  4005b4:	90                   	nop
  4005b5:	90                   	nop
  4005b6:	90                   	nop
  4005b7:	90                   	nop
  4005b8:	90                   	nop
  4005b9:	90                   	nop
  4005ba:	90                   	nop
  4005bb:	90                   	nop
  4005bc:	90                   	nop
  4005bd:	90                   	nop
  4005be:	90                   	nop
  4005bf:	90                   	nop

00000000004005c0 <__do_global_ctors_aux>:
  4005c0:	55                   	push   %rbp
  4005c1:	48 89 e5             	mov    %rsp,%rbp
  4005c4:	53                   	push   %rbx
  4005c5:	48 83 ec 08          	sub    $0x8,%rsp
  4005c9:	48 8b 05 58 08 20 00 	mov    0x200858(%rip),%rax        # 600e28 <__CTOR_LIST__>
  4005d0:	48 83 f8 ff          	cmp    $0xffffffffffffffff,%rax
  4005d4:	74 19                	je     4005ef <__do_global_ctors_aux+0x2f>
  4005d6:	bb 28 0e 60 00       	mov    $0x600e28,%ebx
  4005db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  4005e0:	48 83 eb 08          	sub    $0x8,%rbx
  4005e4:	ff d0                	callq  *%rax
  4005e6:	48 8b 03             	mov    (%rbx),%rax
  4005e9:	48 83 f8 ff          	cmp    $0xffffffffffffffff,%rax
  4005ed:	75 f1                	jne    4005e0 <__do_global_ctors_aux+0x20>
  4005ef:	48 83 c4 08          	add    $0x8,%rsp
  4005f3:	5b                   	pop    %rbx
  4005f4:	5d                   	pop    %rbp
  4005f5:	c3                   	retq   
  4005f6:	90                   	nop
  4005f7:	90                   	nop

Disassembly of section .fini:

00000000004005f8 <_fini>:
  4005f8:	48 83 ec 08          	sub    $0x8,%rsp
  4005fc:	e8 5f fe ff ff       	callq  400460 <__do_global_dtors_aux>
  400601:	48 83 c4 08          	add    $0x8,%rsp
  400605:	c3                   	retq   
