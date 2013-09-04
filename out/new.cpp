ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 1


   1              		.cpu cortex-m0
   2              		.fpu softvfp
   3              		.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
   4              		.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
   5              		.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
   6              		.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
   7              		.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
   8              		.eabi_attribute 26, 1	@ Tag_ABI_enum_size
   9              		.eabi_attribute 30, 4	@ Tag_ABI_optimization_goals
  10              		.eabi_attribute 34, 0	@ Tag_CPU_unaligned_access
  11              		.eabi_attribute 18, 4	@ Tag_ABI_PCS_wchar_t
  12              		.file	"new.cpp"
  13              	@ GNU C++ (GNU Tools for ARM Embedded Processors) version 4.7.3 20121207 (release) [ARM/embedded-4_
  14              	@	compiled by GNU C version 4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2336.9.00), GMP vers
  15              	@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
  16              	@ options passed:  -I . -imultilib armv6-m
  17              	@ -iprefix /Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi
  18              	@ -isysroot /Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../arm-none-eabi
  19              	@ -MD out/new.d -MF out/new.d -MP -MQ out/new.o -D__USES_INITFINI__ new.cpp
  20              	@ -mcpu=cortex-m0 -mthumb -auxbase-strip out/new.o -g -ggdb3 -Os
  21              	@ -std=gnu++98 -ffunction-sections -fdata-sections -fno-rtti
  22              	@ -fno-exceptions -fverbose-asm
  23              	@ options enabled:  -fauto-inc-dec -fbranch-count-reg -fcaller-saves
  24              	@ -fcombine-stack-adjustments -fcommon -fcompare-elim -fcprop-registers
  25              	@ -fcrossjumping -fcse-follow-jumps -fdata-sections -fdebug-types-section
  26              	@ -fdefer-pop -fdelete-null-pointer-checks -fdevirtualize -fdwarf2-cfi-asm
  27              	@ -fearly-inlining -feliminate-unused-debug-types -fexpensive-optimizations
  28              	@ -fforward-propagate -ffunction-cse -ffunction-sections -fgcse -fgcse-lm
  29              	@ -fgnu-runtime -fguess-branch-probability -fident -fif-conversion
  30              	@ -fif-conversion2 -findirect-inlining -finline -finline-atomics
  31              	@ -finline-functions -finline-functions-called-once
  32              	@ -finline-small-functions -fipa-cp -fipa-profile -fipa-pure-const
  33              	@ -fipa-reference -fipa-sra -fira-hoist-pressure -fira-share-save-slots
  34              	@ -fira-share-spill-slots -fivopts -fkeep-static-consts
  35              	@ -fleading-underscore -fmath-errno -fmerge-constants -fmerge-debug-strings
  36              	@ -fomit-frame-pointer -foptimize-register-move -foptimize-sibling-calls
  37              	@ -fpartial-inlining -fpeephole -fpeephole2 -fprefetch-loop-arrays
  38              	@ -freg-struct-return -fregmove -frename-registers -freorder-blocks
  39              	@ -freorder-functions -frerun-cse-after-loop
  40              	@ -fsched-critical-path-heuristic -fsched-dep-count-heuristic
  41              	@ -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
  42              	@ -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
  43              	@ -fsched-stalled-insns-dep -fschedule-insns2 -fsection-anchors
  44              	@ -fshow-column -fshrink-wrap -fsigned-zeros -fsplit-ivs-in-unroller
  45              	@ -fsplit-wide-types -fstrict-aliasing -fstrict-overflow
  46              	@ -fstrict-volatile-bitfields -fthread-jumps -ftoplevel-reorder
  47              	@ -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce -ftree-ccp
  48              	@ -ftree-ch -ftree-copy-prop -ftree-copyrename -ftree-cselim -ftree-dce
  49              	@ -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
  50              	@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
  51              	@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
  52              	@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink
  53              	@ -ftree-slp-vectorize -ftree-sra -ftree-switch-conversion
  54              	@ -ftree-tail-merge -ftree-ter -ftree-vect-loop-version -ftree-vrp
  55              	@ -funit-at-a-time -funroll-loops -fvar-tracking -fvar-tracking-assignments
  56              	@ -fverbose-asm -fweb -fzero-initialized-in-bss -mlittle-endian
  57              	@ -msched-prolog -mthumb -mvectorize-with-neon-quad
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 2


  58              	
  59              		.text
  60              	.Ltext0:
  61              		.cfi_sections	.debug_frame
  62              		.section	.text._Znwj,"ax",%progbits
  63              		.align	1
  64              		.global	_Znwj
  65              		.code	16
  66              		.thumb_func
  67              		.type	_Znwj, %function
  68              	_Znwj:
  69              	.LFB0:
  70              		.file 1 "new.cpp"
   1:new.cpp       **** #include <new.h>
   2:new.cpp       **** 
   3:new.cpp       **** void * operator new(size_t size)
   4:new.cpp       **** {
  71              		.loc 1 4 0
  72              		.cfi_startproc
  73              	.LVL0:
  74 0000 08B5     		push	{r3, lr}	@
  75              	.LCFI0:
  76              		.cfi_def_cfa_offset 8
  77              		.cfi_offset 3, -8
  78              		.cfi_offset 14, -4
   5:new.cpp       ****   return malloc(size);
  79              		.loc 1 5 0
  80 0002 FFF7FEFF 		bl	malloc	@
  81              	.LVL1:
   6:new.cpp       **** }
  82              		.loc 1 6 0
  83              		@ sp needed for prologue	@
  84 0006 08BD     		pop	{r3, pc}
  85              		.cfi_endproc
  86              	.LFE0:
  87              		.size	_Znwj, .-_Znwj
  88              		.section	.text._Znaj,"ax",%progbits
  89              		.align	1
  90              		.global	_Znaj
  91              		.code	16
  92              		.thumb_func
  93              		.type	_Znaj, %function
  94              	_Znaj:
  95              	.LFB1:
   7:new.cpp       **** 
   8:new.cpp       **** void * operator new[](size_t size)
   9:new.cpp       **** {
  96              		.loc 1 9 0
  97              		.cfi_startproc
  98              	.LVL2:
  99 0000 08B5     		push	{r3, lr}	@
 100              	.LCFI1:
 101              		.cfi_def_cfa_offset 8
 102              		.cfi_offset 3, -8
 103              		.cfi_offset 14, -4
  10:new.cpp       ****   return malloc(size);
 104              		.loc 1 10 0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 3


 105 0002 FFF7FEFF 		bl	malloc	@
 106              	.LVL3:
  11:new.cpp       **** }
 107              		.loc 1 11 0
 108              		@ sp needed for prologue	@
 109 0006 08BD     		pop	{r3, pc}
 110              		.cfi_endproc
 111              	.LFE1:
 112              		.size	_Znaj, .-_Znaj
 113              		.section	.text._ZdlPv,"ax",%progbits
 114              		.align	1
 115              		.global	_ZdlPv
 116              		.code	16
 117              		.thumb_func
 118              		.type	_ZdlPv, %function
 119              	_ZdlPv:
 120              	.LFB2:
  12:new.cpp       **** 
  13:new.cpp       **** void operator delete(void * ptr)
  14:new.cpp       **** {
 121              		.loc 1 14 0
 122              		.cfi_startproc
 123              	.LVL4:
 124 0000 08B5     		push	{r3, lr}	@
 125              	.LCFI2:
 126              		.cfi_def_cfa_offset 8
 127              		.cfi_offset 3, -8
 128              		.cfi_offset 14, -4
  15:new.cpp       ****   free(ptr);
 129              		.loc 1 15 0
 130 0002 FFF7FEFF 		bl	free	@
 131              	.LVL5:
  16:new.cpp       **** }
 132              		.loc 1 16 0
 133              		@ sp needed for prologue	@
 134 0006 08BD     		pop	{r3, pc}
 135              		.cfi_endproc
 136              	.LFE2:
 137              		.size	_ZdlPv, .-_ZdlPv
 138              		.section	.text._ZdaPv,"ax",%progbits
 139              		.align	1
 140              		.global	_ZdaPv
 141              		.code	16
 142              		.thumb_func
 143              		.type	_ZdaPv, %function
 144              	_ZdaPv:
 145              	.LFB3:
  17:new.cpp       **** 
  18:new.cpp       **** void operator delete[](void * ptr)
  19:new.cpp       **** {
 146              		.loc 1 19 0
 147              		.cfi_startproc
 148              	.LVL6:
 149 0000 08B5     		push	{r3, lr}	@
 150              	.LCFI3:
 151              		.cfi_def_cfa_offset 8
 152              		.cfi_offset 3, -8
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 4


 153              		.cfi_offset 14, -4
  20:new.cpp       ****   free(ptr);
 154              		.loc 1 20 0
 155 0002 FFF7FEFF 		bl	free	@
 156              	.LVL7:
  21:new.cpp       **** }
 157              		.loc 1 21 0
 158              		@ sp needed for prologue	@
 159 0006 08BD     		pop	{r3, pc}
 160              		.cfi_endproc
 161              	.LFE3:
 162              		.size	_ZdaPv, .-_ZdaPv
 163              		.section	.text.__cxa_guard_acquire,"ax",%progbits
 164              		.align	1
 165              		.global	__cxa_guard_acquire
 166              		.code	16
 167              		.thumb_func
 168              		.type	__cxa_guard_acquire, %function
 169              	__cxa_guard_acquire:
 170              	.LFB4:
  22:new.cpp       **** 
  23:new.cpp       **** int __cxa_guard_acquire(__guard *g) {return !*(char *)(g);};
 171              		.loc 1 23 0
 172              		.cfi_startproc
 173              	.LVL8:
 174              		.loc 1 23 0
 175 0000 0078     		ldrb	r0, [r0]	@ MEM[(char *)g_1(D)], MEM[(char *)g_1(D)]
 176              	.LVL9:
 177              		@ sp needed for prologue	@
 178 0002 4342     		neg	r3, r0	@ tmp143, MEM[(char *)g_1(D)]
 179 0004 5841     		adc	r0, r0, r3	@ tmp142, MEM[(char *)g_1(D)], tmp143
 180 0006 7047     		bx	lr
 181              		.cfi_endproc
 182              	.LFE4:
 183              		.size	__cxa_guard_acquire, .-__cxa_guard_acquire
 184              		.section	.text.__cxa_guard_release,"ax",%progbits
 185              		.align	1
 186              		.global	__cxa_guard_release
 187              		.code	16
 188              		.thumb_func
 189              		.type	__cxa_guard_release, %function
 190              	__cxa_guard_release:
 191              	.LFB5:
  24:new.cpp       **** void __cxa_guard_release (__guard *g) {*(char *)g = 1;};
 192              		.loc 1 24 0
 193              		.cfi_startproc
 194              	.LVL10:
 195              		.loc 1 24 0
 196 0000 0123     		mov	r3, #1	@ tmp135,
 197 0002 0370     		strb	r3, [r0]	@ tmp135, MEM[(char *)g_1(D)]
 198              		@ sp needed for prologue	@
 199 0004 7047     		bx	lr
 200              		.cfi_endproc
 201              	.LFE5:
 202              		.size	__cxa_guard_release, .-__cxa_guard_release
 203              		.section	.text.__cxa_guard_abort,"ax",%progbits
 204              		.align	1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 5


 205              		.global	__cxa_guard_abort
 206              		.code	16
 207              		.thumb_func
 208              		.type	__cxa_guard_abort, %function
 209              	__cxa_guard_abort:
 210              	.LFB6:
  25:new.cpp       **** void __cxa_guard_abort (__guard *) {}; 
 211              		.loc 1 25 0
 212              		.cfi_startproc
 213              		.loc 1 25 0
 214              		@ sp needed for prologue	@
 215 0000 7047     		bx	lr
 216              		.cfi_endproc
 217              	.LFE6:
 218              		.size	__cxa_guard_abort, .-__cxa_guard_abort
 219              		.text
 220              	.Letext0:
 221              		.file 2 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi/
 222              		.file 3 "./new.h"
 223              		.file 4 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi/
 224              		.section	.debug_info,"",%progbits
 225              	.Ldebug_info0:
 226 0000 30020000 		.4byte	0x230
 227 0004 0200     		.2byte	0x2
 228 0006 00000000 		.4byte	.Ldebug_abbrev0
 229 000a 04       		.byte	0x4
 230 000b 01       		.uleb128 0x1
 231 000c 143D0000 		.4byte	.LASF25
 232 0010 04       		.byte	0x4
 233 0011 3F240000 		.4byte	.LASF26
 234 0015 4F160000 		.4byte	.LASF27
 235 0019 00000000 		.4byte	.Ldebug_ranges0+0
 236 001d 00000000 		.4byte	0
 237 0021 00000000 		.4byte	0
 238 0025 00000000 		.4byte	.Ldebug_line0
 239 0029 00000000 		.4byte	.Ldebug_macro0
 240 002d 02       		.uleb128 0x2
 241 002e 7C100000 		.4byte	.LASF11
 242 0032 02       		.byte	0x2
 243 0033 D5       		.byte	0xd5
 244 0034 38000000 		.4byte	0x38
 245 0038 03       		.uleb128 0x3
 246 0039 04       		.byte	0x4
 247 003a 07       		.byte	0x7
 248 003b 9B030000 		.4byte	.LASF0
 249 003f 03       		.uleb128 0x3
 250 0040 01       		.byte	0x1
 251 0041 06       		.byte	0x6
 252 0042 37090000 		.4byte	.LASF1
 253 0046 03       		.uleb128 0x3
 254 0047 01       		.byte	0x1
 255 0048 08       		.byte	0x8
 256 0049 2E2C0000 		.4byte	.LASF2
 257 004d 03       		.uleb128 0x3
 258 004e 02       		.byte	0x2
 259 004f 05       		.byte	0x5
 260 0050 12230000 		.4byte	.LASF3
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 6


 261 0054 03       		.uleb128 0x3
 262 0055 02       		.byte	0x2
 263 0056 07       		.byte	0x7
 264 0057 26320000 		.4byte	.LASF4
 265 005b 04       		.uleb128 0x4
 266 005c 04       		.byte	0x4
 267 005d 05       		.byte	0x5
 268 005e 696E7400 		.ascii	"int\000"
 269 0062 03       		.uleb128 0x3
 270 0063 08       		.byte	0x8
 271 0064 05       		.byte	0x5
 272 0065 2A190000 		.4byte	.LASF5
 273 0069 03       		.uleb128 0x3
 274 006a 08       		.byte	0x8
 275 006b 07       		.byte	0x7
 276 006c 1A0C0000 		.4byte	.LASF6
 277 0070 03       		.uleb128 0x3
 278 0071 04       		.byte	0x4
 279 0072 05       		.byte	0x5
 280 0073 B1230000 		.4byte	.LASF7
 281 0077 03       		.uleb128 0x3
 282 0078 04       		.byte	0x4
 283 0079 07       		.byte	0x7
 284 007a 48290000 		.4byte	.LASF8
 285 007e 05       		.uleb128 0x5
 286 007f 04       		.byte	0x4
 287 0080 03       		.uleb128 0x3
 288 0081 04       		.byte	0x4
 289 0082 07       		.byte	0x7
 290 0083 6F290000 		.4byte	.LASF9
 291 0087 03       		.uleb128 0x3
 292 0088 01       		.byte	0x1
 293 0089 08       		.byte	0x8
 294 008a 2F220000 		.4byte	.LASF10
 295 008e 02       		.uleb128 0x2
 296 008f 481E0000 		.4byte	.LASF12
 297 0093 03       		.byte	0x3
 298 0094 0F       		.byte	0xf
 299 0095 62000000 		.4byte	0x62
 300 0099 06       		.uleb128 0x6
 301 009a 01       		.byte	0x1
 302 009b 47200000 		.4byte	.LASF13
 303 009f 01       		.byte	0x1
 304 00a0 03       		.byte	0x3
 305 00a1 C60F0000 		.4byte	.LASF15
 306 00a5 7E000000 		.4byte	0x7e
 307 00a9 00000000 		.4byte	.LFB0
 308 00ad 08000000 		.4byte	.LFE0
 309 00b1 00000000 		.4byte	.LLST0
 310 00b5 01       		.byte	0x1
 311 00b6 DB000000 		.4byte	0xdb
 312 00ba 07       		.uleb128 0x7
 313 00bb 611C0000 		.4byte	.LASF17
 314 00bf 01       		.byte	0x1
 315 00c0 03       		.byte	0x3
 316 00c1 2D000000 		.4byte	0x2d
 317 00c5 20000000 		.4byte	.LLST1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 7


 318 00c9 08       		.uleb128 0x8
 319 00ca 06000000 		.4byte	.LVL1
 320 00ce 0D020000 		.4byte	0x20d
 321 00d2 09       		.uleb128 0x9
 322 00d3 01       		.byte	0x1
 323 00d4 50       		.byte	0x50
 324 00d5 03       		.byte	0x3
 325 00d6 F3       		.byte	0xf3
 326 00d7 01       		.uleb128 0x1
 327 00d8 50       		.byte	0x50
 328 00d9 00       		.byte	0
 329 00da 00       		.byte	0
 330 00db 06       		.uleb128 0x6
 331 00dc 01       		.byte	0x1
 332 00dd C8000000 		.4byte	.LASF14
 333 00e1 01       		.byte	0x1
 334 00e2 08       		.byte	0x8
 335 00e3 FA2D0000 		.4byte	.LASF16
 336 00e7 7E000000 		.4byte	0x7e
 337 00eb 00000000 		.4byte	.LFB1
 338 00ef 08000000 		.4byte	.LFE1
 339 00f3 41000000 		.4byte	.LLST2
 340 00f7 01       		.byte	0x1
 341 00f8 1D010000 		.4byte	0x11d
 342 00fc 07       		.uleb128 0x7
 343 00fd 611C0000 		.4byte	.LASF17
 344 0101 01       		.byte	0x1
 345 0102 08       		.byte	0x8
 346 0103 2D000000 		.4byte	0x2d
 347 0107 61000000 		.4byte	.LLST3
 348 010b 08       		.uleb128 0x8
 349 010c 06000000 		.4byte	.LVL3
 350 0110 0D020000 		.4byte	0x20d
 351 0114 09       		.uleb128 0x9
 352 0115 01       		.byte	0x1
 353 0116 50       		.byte	0x50
 354 0117 03       		.byte	0x3
 355 0118 F3       		.byte	0xf3
 356 0119 01       		.uleb128 0x1
 357 011a 50       		.byte	0x50
 358 011b 00       		.byte	0
 359 011c 00       		.byte	0
 360 011d 0A       		.uleb128 0xa
 361 011e 01       		.byte	0x1
 362 011f EB1F0000 		.4byte	.LASF18
 363 0123 01       		.byte	0x1
 364 0124 0D       		.byte	0xd
 365 0125 441A0000 		.4byte	.LASF20
 366 0129 00000000 		.4byte	.LFB2
 367 012d 08000000 		.4byte	.LFE2
 368 0131 82000000 		.4byte	.LLST4
 369 0135 01       		.byte	0x1
 370 0136 5B010000 		.4byte	0x15b
 371 013a 0B       		.uleb128 0xb
 372 013b 70747200 		.ascii	"ptr\000"
 373 013f 01       		.byte	0x1
 374 0140 0D       		.byte	0xd
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 8


 375 0141 7E000000 		.4byte	0x7e
 376 0145 A2000000 		.4byte	.LLST5
 377 0149 08       		.uleb128 0x8
 378 014a 06000000 		.4byte	.LVL5
 379 014e 24020000 		.4byte	0x224
 380 0152 09       		.uleb128 0x9
 381 0153 01       		.byte	0x1
 382 0154 50       		.byte	0x50
 383 0155 03       		.byte	0x3
 384 0156 F3       		.byte	0xf3
 385 0157 01       		.uleb128 0x1
 386 0158 50       		.byte	0x50
 387 0159 00       		.byte	0
 388 015a 00       		.byte	0
 389 015b 0A       		.uleb128 0xa
 390 015c 01       		.byte	0x1
 391 015d 910D0000 		.4byte	.LASF19
 392 0161 01       		.byte	0x1
 393 0162 12       		.byte	0x12
 394 0163 8C070000 		.4byte	.LASF21
 395 0167 00000000 		.4byte	.LFB3
 396 016b 08000000 		.4byte	.LFE3
 397 016f C3000000 		.4byte	.LLST6
 398 0173 01       		.byte	0x1
 399 0174 99010000 		.4byte	0x199
 400 0178 0B       		.uleb128 0xb
 401 0179 70747200 		.ascii	"ptr\000"
 402 017d 01       		.byte	0x1
 403 017e 12       		.byte	0x12
 404 017f 7E000000 		.4byte	0x7e
 405 0183 E3000000 		.4byte	.LLST7
 406 0187 08       		.uleb128 0x8
 407 0188 06000000 		.4byte	.LVL7
 408 018c 24020000 		.4byte	0x224
 409 0190 09       		.uleb128 0x9
 410 0191 01       		.byte	0x1
 411 0192 50       		.byte	0x50
 412 0193 03       		.byte	0x3
 413 0194 F3       		.byte	0xf3
 414 0195 01       		.uleb128 0x1
 415 0196 50       		.byte	0x50
 416 0197 00       		.byte	0
 417 0198 00       		.byte	0
 418 0199 0C       		.uleb128 0xc
 419 019a 01       		.byte	0x1
 420 019b 1C1E0000 		.4byte	.LASF22
 421 019f 01       		.byte	0x1
 422 01a0 17       		.byte	0x17
 423 01a1 5B000000 		.4byte	0x5b
 424 01a5 00000000 		.4byte	.LFB4
 425 01a9 08000000 		.4byte	.LFE4
 426 01ad 02       		.byte	0x2
 427 01ae 7D       		.byte	0x7d
 428 01af 00       		.sleb128 0
 429 01b0 01       		.byte	0x1
 430 01b1 C3010000 		.4byte	0x1c3
 431 01b5 0B       		.uleb128 0xb
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 9


 432 01b6 6700     		.ascii	"g\000"
 433 01b8 01       		.byte	0x1
 434 01b9 17       		.byte	0x17
 435 01ba C3010000 		.4byte	0x1c3
 436 01be 04010000 		.4byte	.LLST8
 437 01c2 00       		.byte	0
 438 01c3 0D       		.uleb128 0xd
 439 01c4 04       		.byte	0x4
 440 01c5 8E000000 		.4byte	0x8e
 441 01c9 0E       		.uleb128 0xe
 442 01ca 01       		.byte	0x1
 443 01cb 0D220000 		.4byte	.LASF23
 444 01cf 01       		.byte	0x1
 445 01d0 18       		.byte	0x18
 446 01d1 00000000 		.4byte	.LFB5
 447 01d5 06000000 		.4byte	.LFE5
 448 01d9 02       		.byte	0x2
 449 01da 7D       		.byte	0x7d
 450 01db 00       		.sleb128 0
 451 01dc 01       		.byte	0x1
 452 01dd ED010000 		.4byte	0x1ed
 453 01e1 0F       		.uleb128 0xf
 454 01e2 6700     		.ascii	"g\000"
 455 01e4 01       		.byte	0x1
 456 01e5 18       		.byte	0x18
 457 01e6 C3010000 		.4byte	0x1c3
 458 01ea 01       		.byte	0x1
 459 01eb 50       		.byte	0x50
 460 01ec 00       		.byte	0
 461 01ed 0E       		.uleb128 0xe
 462 01ee 01       		.byte	0x1
 463 01ef 43090000 		.4byte	.LASF24
 464 01f3 01       		.byte	0x1
 465 01f4 19       		.byte	0x19
 466 01f5 00000000 		.4byte	.LFB6
 467 01f9 02000000 		.4byte	.LFE6
 468 01fd 02       		.byte	0x2
 469 01fe 7D       		.byte	0x7d
 470 01ff 00       		.sleb128 0
 471 0200 01       		.byte	0x1
 472 0201 0D020000 		.4byte	0x20d
 473 0205 10       		.uleb128 0x10
 474 0206 C3010000 		.4byte	0x1c3
 475 020a 01       		.byte	0x1
 476 020b 50       		.byte	0x50
 477 020c 00       		.byte	0
 478 020d 11       		.uleb128 0x11
 479 020e 01       		.byte	0x1
 480 020f DC0A0000 		.4byte	.LASF28
 481 0213 04       		.byte	0x4
 482 0214 5C       		.byte	0x5c
 483 0215 7E000000 		.4byte	0x7e
 484 0219 01       		.byte	0x1
 485 021a 24020000 		.4byte	0x224
 486 021e 12       		.uleb128 0x12
 487 021f 2D000000 		.4byte	0x2d
 488 0223 00       		.byte	0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 10


 489 0224 13       		.uleb128 0x13
 490 0225 01       		.byte	0x1
 491 0226 23120000 		.4byte	.LASF29
 492 022a 04       		.byte	0x4
 493 022b 51       		.byte	0x51
 494 022c 01       		.byte	0x1
 495 022d 12       		.uleb128 0x12
 496 022e 7E000000 		.4byte	0x7e
 497 0232 00       		.byte	0
 498 0233 00       		.byte	0
 499              		.section	.debug_abbrev,"",%progbits
 500              	.Ldebug_abbrev0:
 501 0000 01       		.uleb128 0x1
 502 0001 11       		.uleb128 0x11
 503 0002 01       		.byte	0x1
 504 0003 25       		.uleb128 0x25
 505 0004 0E       		.uleb128 0xe
 506 0005 13       		.uleb128 0x13
 507 0006 0B       		.uleb128 0xb
 508 0007 03       		.uleb128 0x3
 509 0008 0E       		.uleb128 0xe
 510 0009 1B       		.uleb128 0x1b
 511 000a 0E       		.uleb128 0xe
 512 000b 55       		.uleb128 0x55
 513 000c 06       		.uleb128 0x6
 514 000d 11       		.uleb128 0x11
 515 000e 01       		.uleb128 0x1
 516 000f 52       		.uleb128 0x52
 517 0010 01       		.uleb128 0x1
 518 0011 10       		.uleb128 0x10
 519 0012 06       		.uleb128 0x6
 520 0013 9942     		.uleb128 0x2119
 521 0015 06       		.uleb128 0x6
 522 0016 00       		.byte	0
 523 0017 00       		.byte	0
 524 0018 02       		.uleb128 0x2
 525 0019 16       		.uleb128 0x16
 526 001a 00       		.byte	0
 527 001b 03       		.uleb128 0x3
 528 001c 0E       		.uleb128 0xe
 529 001d 3A       		.uleb128 0x3a
 530 001e 0B       		.uleb128 0xb
 531 001f 3B       		.uleb128 0x3b
 532 0020 0B       		.uleb128 0xb
 533 0021 49       		.uleb128 0x49
 534 0022 13       		.uleb128 0x13
 535 0023 00       		.byte	0
 536 0024 00       		.byte	0
 537 0025 03       		.uleb128 0x3
 538 0026 24       		.uleb128 0x24
 539 0027 00       		.byte	0
 540 0028 0B       		.uleb128 0xb
 541 0029 0B       		.uleb128 0xb
 542 002a 3E       		.uleb128 0x3e
 543 002b 0B       		.uleb128 0xb
 544 002c 03       		.uleb128 0x3
 545 002d 0E       		.uleb128 0xe
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 11


 546 002e 00       		.byte	0
 547 002f 00       		.byte	0
 548 0030 04       		.uleb128 0x4
 549 0031 24       		.uleb128 0x24
 550 0032 00       		.byte	0
 551 0033 0B       		.uleb128 0xb
 552 0034 0B       		.uleb128 0xb
 553 0035 3E       		.uleb128 0x3e
 554 0036 0B       		.uleb128 0xb
 555 0037 03       		.uleb128 0x3
 556 0038 08       		.uleb128 0x8
 557 0039 00       		.byte	0
 558 003a 00       		.byte	0
 559 003b 05       		.uleb128 0x5
 560 003c 0F       		.uleb128 0xf
 561 003d 00       		.byte	0
 562 003e 0B       		.uleb128 0xb
 563 003f 0B       		.uleb128 0xb
 564 0040 00       		.byte	0
 565 0041 00       		.byte	0
 566 0042 06       		.uleb128 0x6
 567 0043 2E       		.uleb128 0x2e
 568 0044 01       		.byte	0x1
 569 0045 3F       		.uleb128 0x3f
 570 0046 0C       		.uleb128 0xc
 571 0047 03       		.uleb128 0x3
 572 0048 0E       		.uleb128 0xe
 573 0049 3A       		.uleb128 0x3a
 574 004a 0B       		.uleb128 0xb
 575 004b 3B       		.uleb128 0x3b
 576 004c 0B       		.uleb128 0xb
 577 004d 8740     		.uleb128 0x2007
 578 004f 0E       		.uleb128 0xe
 579 0050 49       		.uleb128 0x49
 580 0051 13       		.uleb128 0x13
 581 0052 11       		.uleb128 0x11
 582 0053 01       		.uleb128 0x1
 583 0054 12       		.uleb128 0x12
 584 0055 01       		.uleb128 0x1
 585 0056 40       		.uleb128 0x40
 586 0057 06       		.uleb128 0x6
 587 0058 9742     		.uleb128 0x2117
 588 005a 0C       		.uleb128 0xc
 589 005b 01       		.uleb128 0x1
 590 005c 13       		.uleb128 0x13
 591 005d 00       		.byte	0
 592 005e 00       		.byte	0
 593 005f 07       		.uleb128 0x7
 594 0060 05       		.uleb128 0x5
 595 0061 00       		.byte	0
 596 0062 03       		.uleb128 0x3
 597 0063 0E       		.uleb128 0xe
 598 0064 3A       		.uleb128 0x3a
 599 0065 0B       		.uleb128 0xb
 600 0066 3B       		.uleb128 0x3b
 601 0067 0B       		.uleb128 0xb
 602 0068 49       		.uleb128 0x49
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 12


 603 0069 13       		.uleb128 0x13
 604 006a 02       		.uleb128 0x2
 605 006b 06       		.uleb128 0x6
 606 006c 00       		.byte	0
 607 006d 00       		.byte	0
 608 006e 08       		.uleb128 0x8
 609 006f 898201   		.uleb128 0x4109
 610 0072 01       		.byte	0x1
 611 0073 11       		.uleb128 0x11
 612 0074 01       		.uleb128 0x1
 613 0075 31       		.uleb128 0x31
 614 0076 13       		.uleb128 0x13
 615 0077 00       		.byte	0
 616 0078 00       		.byte	0
 617 0079 09       		.uleb128 0x9
 618 007a 8A8201   		.uleb128 0x410a
 619 007d 00       		.byte	0
 620 007e 02       		.uleb128 0x2
 621 007f 0A       		.uleb128 0xa
 622 0080 9142     		.uleb128 0x2111
 623 0082 0A       		.uleb128 0xa
 624 0083 00       		.byte	0
 625 0084 00       		.byte	0
 626 0085 0A       		.uleb128 0xa
 627 0086 2E       		.uleb128 0x2e
 628 0087 01       		.byte	0x1
 629 0088 3F       		.uleb128 0x3f
 630 0089 0C       		.uleb128 0xc
 631 008a 03       		.uleb128 0x3
 632 008b 0E       		.uleb128 0xe
 633 008c 3A       		.uleb128 0x3a
 634 008d 0B       		.uleb128 0xb
 635 008e 3B       		.uleb128 0x3b
 636 008f 0B       		.uleb128 0xb
 637 0090 8740     		.uleb128 0x2007
 638 0092 0E       		.uleb128 0xe
 639 0093 11       		.uleb128 0x11
 640 0094 01       		.uleb128 0x1
 641 0095 12       		.uleb128 0x12
 642 0096 01       		.uleb128 0x1
 643 0097 40       		.uleb128 0x40
 644 0098 06       		.uleb128 0x6
 645 0099 9742     		.uleb128 0x2117
 646 009b 0C       		.uleb128 0xc
 647 009c 01       		.uleb128 0x1
 648 009d 13       		.uleb128 0x13
 649 009e 00       		.byte	0
 650 009f 00       		.byte	0
 651 00a0 0B       		.uleb128 0xb
 652 00a1 05       		.uleb128 0x5
 653 00a2 00       		.byte	0
 654 00a3 03       		.uleb128 0x3
 655 00a4 08       		.uleb128 0x8
 656 00a5 3A       		.uleb128 0x3a
 657 00a6 0B       		.uleb128 0xb
 658 00a7 3B       		.uleb128 0x3b
 659 00a8 0B       		.uleb128 0xb
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 13


 660 00a9 49       		.uleb128 0x49
 661 00aa 13       		.uleb128 0x13
 662 00ab 02       		.uleb128 0x2
 663 00ac 06       		.uleb128 0x6
 664 00ad 00       		.byte	0
 665 00ae 00       		.byte	0
 666 00af 0C       		.uleb128 0xc
 667 00b0 2E       		.uleb128 0x2e
 668 00b1 01       		.byte	0x1
 669 00b2 3F       		.uleb128 0x3f
 670 00b3 0C       		.uleb128 0xc
 671 00b4 03       		.uleb128 0x3
 672 00b5 0E       		.uleb128 0xe
 673 00b6 3A       		.uleb128 0x3a
 674 00b7 0B       		.uleb128 0xb
 675 00b8 3B       		.uleb128 0x3b
 676 00b9 0B       		.uleb128 0xb
 677 00ba 49       		.uleb128 0x49
 678 00bb 13       		.uleb128 0x13
 679 00bc 11       		.uleb128 0x11
 680 00bd 01       		.uleb128 0x1
 681 00be 12       		.uleb128 0x12
 682 00bf 01       		.uleb128 0x1
 683 00c0 40       		.uleb128 0x40
 684 00c1 0A       		.uleb128 0xa
 685 00c2 9742     		.uleb128 0x2117
 686 00c4 0C       		.uleb128 0xc
 687 00c5 01       		.uleb128 0x1
 688 00c6 13       		.uleb128 0x13
 689 00c7 00       		.byte	0
 690 00c8 00       		.byte	0
 691 00c9 0D       		.uleb128 0xd
 692 00ca 0F       		.uleb128 0xf
 693 00cb 00       		.byte	0
 694 00cc 0B       		.uleb128 0xb
 695 00cd 0B       		.uleb128 0xb
 696 00ce 49       		.uleb128 0x49
 697 00cf 13       		.uleb128 0x13
 698 00d0 00       		.byte	0
 699 00d1 00       		.byte	0
 700 00d2 0E       		.uleb128 0xe
 701 00d3 2E       		.uleb128 0x2e
 702 00d4 01       		.byte	0x1
 703 00d5 3F       		.uleb128 0x3f
 704 00d6 0C       		.uleb128 0xc
 705 00d7 03       		.uleb128 0x3
 706 00d8 0E       		.uleb128 0xe
 707 00d9 3A       		.uleb128 0x3a
 708 00da 0B       		.uleb128 0xb
 709 00db 3B       		.uleb128 0x3b
 710 00dc 0B       		.uleb128 0xb
 711 00dd 11       		.uleb128 0x11
 712 00de 01       		.uleb128 0x1
 713 00df 12       		.uleb128 0x12
 714 00e0 01       		.uleb128 0x1
 715 00e1 40       		.uleb128 0x40
 716 00e2 0A       		.uleb128 0xa
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 14


 717 00e3 9742     		.uleb128 0x2117
 718 00e5 0C       		.uleb128 0xc
 719 00e6 01       		.uleb128 0x1
 720 00e7 13       		.uleb128 0x13
 721 00e8 00       		.byte	0
 722 00e9 00       		.byte	0
 723 00ea 0F       		.uleb128 0xf
 724 00eb 05       		.uleb128 0x5
 725 00ec 00       		.byte	0
 726 00ed 03       		.uleb128 0x3
 727 00ee 08       		.uleb128 0x8
 728 00ef 3A       		.uleb128 0x3a
 729 00f0 0B       		.uleb128 0xb
 730 00f1 3B       		.uleb128 0x3b
 731 00f2 0B       		.uleb128 0xb
 732 00f3 49       		.uleb128 0x49
 733 00f4 13       		.uleb128 0x13
 734 00f5 02       		.uleb128 0x2
 735 00f6 0A       		.uleb128 0xa
 736 00f7 00       		.byte	0
 737 00f8 00       		.byte	0
 738 00f9 10       		.uleb128 0x10
 739 00fa 05       		.uleb128 0x5
 740 00fb 00       		.byte	0
 741 00fc 49       		.uleb128 0x49
 742 00fd 13       		.uleb128 0x13
 743 00fe 02       		.uleb128 0x2
 744 00ff 0A       		.uleb128 0xa
 745 0100 00       		.byte	0
 746 0101 00       		.byte	0
 747 0102 11       		.uleb128 0x11
 748 0103 2E       		.uleb128 0x2e
 749 0104 01       		.byte	0x1
 750 0105 3F       		.uleb128 0x3f
 751 0106 0C       		.uleb128 0xc
 752 0107 03       		.uleb128 0x3
 753 0108 0E       		.uleb128 0xe
 754 0109 3A       		.uleb128 0x3a
 755 010a 0B       		.uleb128 0xb
 756 010b 3B       		.uleb128 0x3b
 757 010c 0B       		.uleb128 0xb
 758 010d 49       		.uleb128 0x49
 759 010e 13       		.uleb128 0x13
 760 010f 3C       		.uleb128 0x3c
 761 0110 0C       		.uleb128 0xc
 762 0111 01       		.uleb128 0x1
 763 0112 13       		.uleb128 0x13
 764 0113 00       		.byte	0
 765 0114 00       		.byte	0
 766 0115 12       		.uleb128 0x12
 767 0116 05       		.uleb128 0x5
 768 0117 00       		.byte	0
 769 0118 49       		.uleb128 0x49
 770 0119 13       		.uleb128 0x13
 771 011a 00       		.byte	0
 772 011b 00       		.byte	0
 773 011c 13       		.uleb128 0x13
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 15


 774 011d 2E       		.uleb128 0x2e
 775 011e 01       		.byte	0x1
 776 011f 3F       		.uleb128 0x3f
 777 0120 0C       		.uleb128 0xc
 778 0121 03       		.uleb128 0x3
 779 0122 0E       		.uleb128 0xe
 780 0123 3A       		.uleb128 0x3a
 781 0124 0B       		.uleb128 0xb
 782 0125 3B       		.uleb128 0x3b
 783 0126 0B       		.uleb128 0xb
 784 0127 3C       		.uleb128 0x3c
 785 0128 0C       		.uleb128 0xc
 786 0129 00       		.byte	0
 787 012a 00       		.byte	0
 788 012b 00       		.byte	0
 789              		.section	.debug_loc,"",%progbits
 790              	.Ldebug_loc0:
 791              	.LLST0:
 792 0000 00000000 		.4byte	.LFB0
 793 0004 02000000 		.4byte	.LCFI0
 794 0008 0200     		.2byte	0x2
 795 000a 7D       		.byte	0x7d
 796 000b 00       		.sleb128 0
 797 000c 02000000 		.4byte	.LCFI0
 798 0010 08000000 		.4byte	.LFE0
 799 0014 0200     		.2byte	0x2
 800 0016 7D       		.byte	0x7d
 801 0017 08       		.sleb128 8
 802 0018 00000000 		.4byte	0
 803 001c 00000000 		.4byte	0
 804              	.LLST1:
 805 0020 00000000 		.4byte	.LVL0
 806 0024 05000000 		.4byte	.LVL1-1
 807 0028 0100     		.2byte	0x1
 808 002a 50       		.byte	0x50
 809 002b 05000000 		.4byte	.LVL1-1
 810 002f 08000000 		.4byte	.LFE0
 811 0033 0400     		.2byte	0x4
 812 0035 F3       		.byte	0xf3
 813 0036 01       		.uleb128 0x1
 814 0037 50       		.byte	0x50
 815 0038 9F       		.byte	0x9f
 816 0039 00000000 		.4byte	0
 817 003d 00000000 		.4byte	0
 818              	.LLST2:
 819 0041 00000000 		.4byte	.LFB1
 820 0045 02000000 		.4byte	.LCFI1
 821 0049 0200     		.2byte	0x2
 822 004b 7D       		.byte	0x7d
 823 004c 00       		.sleb128 0
 824 004d 02000000 		.4byte	.LCFI1
 825 0051 08000000 		.4byte	.LFE1
 826 0055 0200     		.2byte	0x2
 827 0057 7D       		.byte	0x7d
 828 0058 08       		.sleb128 8
 829 0059 00000000 		.4byte	0
 830 005d 00000000 		.4byte	0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 16


 831              	.LLST3:
 832 0061 00000000 		.4byte	.LVL2
 833 0065 05000000 		.4byte	.LVL3-1
 834 0069 0100     		.2byte	0x1
 835 006b 50       		.byte	0x50
 836 006c 05000000 		.4byte	.LVL3-1
 837 0070 08000000 		.4byte	.LFE1
 838 0074 0400     		.2byte	0x4
 839 0076 F3       		.byte	0xf3
 840 0077 01       		.uleb128 0x1
 841 0078 50       		.byte	0x50
 842 0079 9F       		.byte	0x9f
 843 007a 00000000 		.4byte	0
 844 007e 00000000 		.4byte	0
 845              	.LLST4:
 846 0082 00000000 		.4byte	.LFB2
 847 0086 02000000 		.4byte	.LCFI2
 848 008a 0200     		.2byte	0x2
 849 008c 7D       		.byte	0x7d
 850 008d 00       		.sleb128 0
 851 008e 02000000 		.4byte	.LCFI2
 852 0092 08000000 		.4byte	.LFE2
 853 0096 0200     		.2byte	0x2
 854 0098 7D       		.byte	0x7d
 855 0099 08       		.sleb128 8
 856 009a 00000000 		.4byte	0
 857 009e 00000000 		.4byte	0
 858              	.LLST5:
 859 00a2 00000000 		.4byte	.LVL4
 860 00a6 05000000 		.4byte	.LVL5-1
 861 00aa 0100     		.2byte	0x1
 862 00ac 50       		.byte	0x50
 863 00ad 05000000 		.4byte	.LVL5-1
 864 00b1 08000000 		.4byte	.LFE2
 865 00b5 0400     		.2byte	0x4
 866 00b7 F3       		.byte	0xf3
 867 00b8 01       		.uleb128 0x1
 868 00b9 50       		.byte	0x50
 869 00ba 9F       		.byte	0x9f
 870 00bb 00000000 		.4byte	0
 871 00bf 00000000 		.4byte	0
 872              	.LLST6:
 873 00c3 00000000 		.4byte	.LFB3
 874 00c7 02000000 		.4byte	.LCFI3
 875 00cb 0200     		.2byte	0x2
 876 00cd 7D       		.byte	0x7d
 877 00ce 00       		.sleb128 0
 878 00cf 02000000 		.4byte	.LCFI3
 879 00d3 08000000 		.4byte	.LFE3
 880 00d7 0200     		.2byte	0x2
 881 00d9 7D       		.byte	0x7d
 882 00da 08       		.sleb128 8
 883 00db 00000000 		.4byte	0
 884 00df 00000000 		.4byte	0
 885              	.LLST7:
 886 00e3 00000000 		.4byte	.LVL6
 887 00e7 05000000 		.4byte	.LVL7-1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 17


 888 00eb 0100     		.2byte	0x1
 889 00ed 50       		.byte	0x50
 890 00ee 05000000 		.4byte	.LVL7-1
 891 00f2 08000000 		.4byte	.LFE3
 892 00f6 0400     		.2byte	0x4
 893 00f8 F3       		.byte	0xf3
 894 00f9 01       		.uleb128 0x1
 895 00fa 50       		.byte	0x50
 896 00fb 9F       		.byte	0x9f
 897 00fc 00000000 		.4byte	0
 898 0100 00000000 		.4byte	0
 899              	.LLST8:
 900 0104 00000000 		.4byte	.LVL8
 901 0108 02000000 		.4byte	.LVL9
 902 010c 0100     		.2byte	0x1
 903 010e 50       		.byte	0x50
 904 010f 02000000 		.4byte	.LVL9
 905 0113 08000000 		.4byte	.LFE4
 906 0117 0400     		.2byte	0x4
 907 0119 F3       		.byte	0xf3
 908 011a 01       		.uleb128 0x1
 909 011b 50       		.byte	0x50
 910 011c 9F       		.byte	0x9f
 911 011d 00000000 		.4byte	0
 912 0121 00000000 		.4byte	0
 913              		.section	.debug_aranges,"",%progbits
 914 0000 4C000000 		.4byte	0x4c
 915 0004 0200     		.2byte	0x2
 916 0006 00000000 		.4byte	.Ldebug_info0
 917 000a 04       		.byte	0x4
 918 000b 00       		.byte	0
 919 000c 0000     		.2byte	0
 920 000e 0000     		.2byte	0
 921 0010 00000000 		.4byte	.LFB0
 922 0014 08000000 		.4byte	.LFE0-.LFB0
 923 0018 00000000 		.4byte	.LFB1
 924 001c 08000000 		.4byte	.LFE1-.LFB1
 925 0020 00000000 		.4byte	.LFB2
 926 0024 08000000 		.4byte	.LFE2-.LFB2
 927 0028 00000000 		.4byte	.LFB3
 928 002c 08000000 		.4byte	.LFE3-.LFB3
 929 0030 00000000 		.4byte	.LFB4
 930 0034 08000000 		.4byte	.LFE4-.LFB4
 931 0038 00000000 		.4byte	.LFB5
 932 003c 06000000 		.4byte	.LFE5-.LFB5
 933 0040 00000000 		.4byte	.LFB6
 934 0044 02000000 		.4byte	.LFE6-.LFB6
 935 0048 00000000 		.4byte	0
 936 004c 00000000 		.4byte	0
 937              		.section	.debug_ranges,"",%progbits
 938              	.Ldebug_ranges0:
 939 0000 00000000 		.4byte	.LFB0
 940 0004 08000000 		.4byte	.LFE0
 941 0008 00000000 		.4byte	.LFB1
 942 000c 08000000 		.4byte	.LFE1
 943 0010 00000000 		.4byte	.LFB2
 944 0014 08000000 		.4byte	.LFE2
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 18


 945 0018 00000000 		.4byte	.LFB3
 946 001c 08000000 		.4byte	.LFE3
 947 0020 00000000 		.4byte	.LFB4
 948 0024 08000000 		.4byte	.LFE4
 949 0028 00000000 		.4byte	.LFB5
 950 002c 06000000 		.4byte	.LFE5
 951 0030 00000000 		.4byte	.LFB6
 952 0034 02000000 		.4byte	.LFE6
 953 0038 00000000 		.4byte	0
 954 003c 00000000 		.4byte	0
 955              		.section	.debug_macro,"",%progbits
 956              	.Ldebug_macro0:
 957 0000 0400     		.2byte	0x4
 958 0002 02       		.byte	0x2
 959 0003 00000000 		.4byte	.Ldebug_line0
 960 0007 07       		.byte	0x7
 961 0008 00000000 		.4byte	.Ldebug_macro1
 962 000c 03       		.byte	0x3
 963 000d 00       		.uleb128 0
 964 000e 01       		.uleb128 0x1
 965 000f 03       		.byte	0x3
 966 0010 01       		.uleb128 0x1
 967 0011 03       		.uleb128 0x3
 968 0012 05       		.byte	0x5
 969 0013 06       		.uleb128 0x6
 970 0014 D5110000 		.4byte	.LASF30
 971 0018 03       		.byte	0x3
 972 0019 08       		.uleb128 0x8
 973 001a 04       		.uleb128 0x4
 974 001b 05       		.byte	0x5
 975 001c 08       		.uleb128 0x8
 976 001d 2B060000 		.4byte	.LASF31
 977              		.file 5 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi/
 978 0021 03       		.byte	0x3
 979 0022 0A       		.uleb128 0xa
 980 0023 05       		.uleb128 0x5
 981 0024 05       		.byte	0x5
 982 0025 3C       		.uleb128 0x3c
 983 0026 AB180000 		.4byte	.LASF32
 984 002a 04       		.byte	0x4
 985              		.file 6 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi/
 986 002b 03       		.byte	0x3
 987 002c 0B       		.uleb128 0xb
 988 002d 06       		.uleb128 0x6
 989 002e 05       		.byte	0x5
 990 002f 0D       		.uleb128 0xd
 991 0030 AA3E0000 		.4byte	.LASF33
 992              		.file 7 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi/
 993 0034 03       		.byte	0x3
 994 0035 0F       		.uleb128 0xf
 995 0036 07       		.uleb128 0x7
 996 0037 07       		.byte	0x7
 997 0038 00000000 		.4byte	.Ldebug_macro2
 998 003c 04       		.byte	0x4
 999              		.file 8 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi/
 1000 003d 03       		.byte	0x3
 1001 003e 10       		.uleb128 0x10
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 19


 1002 003f 08       		.uleb128 0x8
 1003 0040 05       		.byte	0x5
 1004 0041 02       		.uleb128 0x2
 1005 0042 B7010000 		.4byte	.LASF34
 1006 0046 03       		.byte	0x3
 1007 0047 04       		.uleb128 0x4
 1008 0048 05       		.uleb128 0x5
 1009 0049 04       		.byte	0x4
 1010              		.file 9 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi/
 1011 004a 03       		.byte	0x3
 1012 004b 05       		.uleb128 0x5
 1013 004c 09       		.uleb128 0x9
 1014 004d 05       		.byte	0x5
 1015 004e 16       		.uleb128 0x16
 1016 004f 090C0000 		.4byte	.LASF35
 1017 0053 04       		.byte	0x4
 1018 0054 07       		.byte	0x7
 1019 0055 00000000 		.4byte	.Ldebug_macro3
 1020 0059 04       		.byte	0x4
 1021 005a 07       		.byte	0x7
 1022 005b 00000000 		.4byte	.Ldebug_macro4
 1023 005f 04       		.byte	0x4
 1024 0060 07       		.byte	0x7
 1025 0061 00000000 		.4byte	.Ldebug_macro5
 1026 0065 03       		.byte	0x3
 1027 0066 0F       		.uleb128 0xf
 1028 0067 02       		.uleb128 0x2
 1029 0068 07       		.byte	0x7
 1030 0069 00000000 		.4byte	.Ldebug_macro6
 1031 006d 04       		.byte	0x4
 1032              		.file 10 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi
 1033 006e 03       		.byte	0x3
 1034 006f 11       		.uleb128 0x11
 1035 0070 0A       		.uleb128 0xa
 1036 0071 05       		.byte	0x5
 1037 0072 0B       		.uleb128 0xb
 1038 0073 B3240000 		.4byte	.LASF36
 1039 0077 03       		.byte	0x3
 1040 0078 0D       		.uleb128 0xd
 1041 0079 06       		.uleb128 0x6
 1042 007a 04       		.byte	0x4
 1043              		.file 11 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi
 1044 007b 03       		.byte	0x3
 1045 007c 0E       		.uleb128 0xe
 1046 007d 0B       		.uleb128 0xb
 1047 007e 05       		.byte	0x5
 1048 007f 0A       		.uleb128 0xa
 1049 0080 3F0B0000 		.4byte	.LASF37
 1050              		.file 12 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi
 1051 0084 03       		.byte	0x3
 1052 0085 0C       		.uleb128 0xc
 1053 0086 0C       		.uleb128 0xc
 1054 0087 05       		.byte	0x5
 1055 0088 06       		.uleb128 0x6
 1056 0089 A6210000 		.4byte	.LASF38
 1057              		.file 13 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi
 1058 008d 03       		.byte	0x3
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 20


 1059 008e 07       		.uleb128 0x7
 1060 008f 0D       		.uleb128 0xd
 1061 0090 07       		.byte	0x7
 1062 0091 00000000 		.4byte	.Ldebug_macro7
 1063 0095 04       		.byte	0x4
 1064 0096 04       		.byte	0x4
 1065              		.file 14 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi
 1066 0097 03       		.byte	0x3
 1067 0098 0D       		.uleb128 0xd
 1068 0099 0E       		.uleb128 0xe
 1069 009a 07       		.byte	0x7
 1070 009b 00000000 		.4byte	.Ldebug_macro8
 1071 009f 04       		.byte	0x4
 1072 00a0 05       		.byte	0x5
 1073 00a1 3E       		.uleb128 0x3e
 1074 00a2 7C2C0000 		.4byte	.LASF39
 1075 00a6 03       		.byte	0x3
 1076 00a7 3F       		.uleb128 0x3f
 1077 00a8 02       		.uleb128 0x2
 1078 00a9 07       		.byte	0x7
 1079 00aa 00000000 		.4byte	.Ldebug_macro9
 1080 00ae 04       		.byte	0x4
 1081 00af 04       		.byte	0x4
 1082 00b0 07       		.byte	0x7
 1083 00b1 00000000 		.4byte	.Ldebug_macro10
 1084 00b5 04       		.byte	0x4
 1085              		.file 15 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi
 1086 00b6 03       		.byte	0x3
 1087 00b7 12       		.uleb128 0x12
 1088 00b8 0F       		.uleb128 0xf
 1089 00b9 05       		.byte	0x5
 1090 00ba 02       		.uleb128 0x2
 1091 00bb E2100000 		.4byte	.LASF40
 1092 00bf 04       		.byte	0x4
 1093              		.file 16 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2012q4/bin/../lib/gcc/arm-none-eabi
 1094 00c0 03       		.byte	0x3
 1095 00c1 14       		.uleb128 0x14
 1096 00c2 10       		.uleb128 0x10
 1097 00c3 07       		.byte	0x7
 1098 00c4 00000000 		.4byte	.Ldebug_macro11
 1099 00c8 04       		.byte	0x4
 1100 00c9 07       		.byte	0x7
 1101 00ca 00000000 		.4byte	.Ldebug_macro12
 1102 00ce 04       		.byte	0x4
 1103 00cf 04       		.byte	0x4
 1104 00d0 04       		.byte	0x4
 1105 00d1 00       		.byte	0
 1106              		.section	.debug_macro,"G",%progbits,wm4.1.9f429f263171477ef80e80a2918b5e39,comdat
 1107              	.Ldebug_macro1:
 1108 0000 0400     		.2byte	0x4
 1109 0002 00       		.byte	0
 1110 0003 05       		.byte	0x5
 1111 0004 01       		.uleb128 0x1
 1112 0005 5A1B0000 		.4byte	.LASF41
 1113 0009 05       		.byte	0x5
 1114 000a 01       		.uleb128 0x1
 1115 000b 17090000 		.4byte	.LASF42
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 21


 1116 000f 05       		.byte	0x5
 1117 0010 01       		.uleb128 0x1
 1118 0011 562A0000 		.4byte	.LASF43
 1119 0015 05       		.byte	0x5
 1120 0016 01       		.uleb128 0x1
 1121 0017 52040000 		.4byte	.LASF44
 1122 001b 05       		.byte	0x5
 1123 001c 01       		.uleb128 0x1
 1124 001d 7F030000 		.4byte	.LASF45
 1125 0021 05       		.byte	0x5
 1126 0022 01       		.uleb128 0x1
 1127 0023 9B1C0000 		.4byte	.LASF46
 1128 0027 05       		.byte	0x5
 1129 0028 01       		.uleb128 0x1
 1130 0029 EC1C0000 		.4byte	.LASF47
 1131 002d 05       		.byte	0x5
 1132 002e 01       		.uleb128 0x1
 1133 002f D5070000 		.4byte	.LASF48
 1134 0033 05       		.byte	0x5
 1135 0034 01       		.uleb128 0x1
 1136 0035 18060000 		.4byte	.LASF49
 1137 0039 05       		.byte	0x5
 1138 003a 01       		.uleb128 0x1
 1139 003b 8B160000 		.4byte	.LASF50
 1140 003f 05       		.byte	0x5
 1141 0040 01       		.uleb128 0x1
 1142 0041 63050000 		.4byte	.LASF51
 1143 0045 05       		.byte	0x5
 1144 0046 01       		.uleb128 0x1
 1145 0047 B32B0000 		.4byte	.LASF52
 1146 004b 05       		.byte	0x5
 1147 004c 01       		.uleb128 0x1
 1148 004d C01B0000 		.4byte	.LASF53
 1149 0051 05       		.byte	0x5
 1150 0052 01       		.uleb128 0x1
 1151 0053 812E0000 		.4byte	.LASF54
 1152 0057 05       		.byte	0x5
 1153 0058 01       		.uleb128 0x1
 1154 0059 B7110000 		.4byte	.LASF55
 1155 005d 05       		.byte	0x5
 1156 005e 01       		.uleb128 0x1
 1157 005f B1190000 		.4byte	.LASF56
 1158 0063 05       		.byte	0x5
 1159 0064 01       		.uleb128 0x1
 1160 0065 30310000 		.4byte	.LASF57
 1161 0069 05       		.byte	0x5
 1162 006a 01       		.uleb128 0x1
 1163 006b 771B0000 		.4byte	.LASF58
 1164 006f 05       		.byte	0x5
 1165 0070 01       		.uleb128 0x1
 1166 0071 55260000 		.4byte	.LASF59
 1167 0075 05       		.byte	0x5
 1168 0076 01       		.uleb128 0x1
 1169 0077 37060000 		.4byte	.LASF60
 1170 007b 05       		.byte	0x5
 1171 007c 01       		.uleb128 0x1
 1172 007d F90F0000 		.4byte	.LASF61
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 22


 1173 0081 05       		.byte	0x5
 1174 0082 01       		.uleb128 0x1
 1175 0083 871C0000 		.4byte	.LASF62
 1176 0087 05       		.byte	0x5
 1177 0088 01       		.uleb128 0x1
 1178 0089 39040000 		.4byte	.LASF63
 1179 008d 05       		.byte	0x5
 1180 008e 01       		.uleb128 0x1
 1181 008f F4030000 		.4byte	.LASF64
 1182 0093 05       		.byte	0x5
 1183 0094 01       		.uleb128 0x1
 1184 0095 E0290000 		.4byte	.LASF65
 1185 0099 05       		.byte	0x5
 1186 009a 01       		.uleb128 0x1
 1187 009b F2100000 		.4byte	.LASF66
 1188 009f 05       		.byte	0x5
 1189 00a0 01       		.uleb128 0x1
 1190 00a1 0B0F0000 		.4byte	.LASF67
 1191 00a5 05       		.byte	0x5
 1192 00a6 01       		.uleb128 0x1
 1193 00a7 5D040000 		.4byte	.LASF68
 1194 00ab 05       		.byte	0x5
 1195 00ac 01       		.uleb128 0x1
 1196 00ad F3210000 		.4byte	.LASF69
 1197 00b1 05       		.byte	0x5
 1198 00b2 01       		.uleb128 0x1
 1199 00b3 30280000 		.4byte	.LASF70
 1200 00b7 05       		.byte	0x5
 1201 00b8 01       		.uleb128 0x1
 1202 00b9 E91E0000 		.4byte	.LASF71
 1203 00bd 05       		.byte	0x5
 1204 00be 01       		.uleb128 0x1
 1205 00bf 6D270000 		.4byte	.LASF72
 1206 00c3 05       		.byte	0x5
 1207 00c4 01       		.uleb128 0x1
 1208 00c5 34240000 		.4byte	.LASF73
 1209 00c9 05       		.byte	0x5
 1210 00ca 01       		.uleb128 0x1
 1211 00cb CA2D0000 		.4byte	.LASF74
 1212 00cf 05       		.byte	0x5
 1213 00d0 01       		.uleb128 0x1
 1214 00d1 76050000 		.4byte	.LASF75
 1215 00d5 05       		.byte	0x5
 1216 00d6 01       		.uleb128 0x1
 1217 00d7 AC160000 		.4byte	.LASF76
 1218 00db 05       		.byte	0x5
 1219 00dc 01       		.uleb128 0x1
 1220 00dd 181C0000 		.4byte	.LASF77
 1221 00e1 05       		.byte	0x5
 1222 00e2 01       		.uleb128 0x1
 1223 00e3 41310000 		.4byte	.LASF78
 1224 00e7 05       		.byte	0x5
 1225 00e8 01       		.uleb128 0x1
 1226 00e9 542C0000 		.4byte	.LASF79
 1227 00ed 05       		.byte	0x5
 1228 00ee 01       		.uleb128 0x1
 1229 00ef 08040000 		.4byte	.LASF80
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 23


 1230 00f3 05       		.byte	0x5
 1231 00f4 01       		.uleb128 0x1
 1232 00f5 25200000 		.4byte	.LASF81
 1233 00f9 05       		.byte	0x5
 1234 00fa 01       		.uleb128 0x1
 1235 00fb 2F3E0000 		.4byte	.LASF82
 1236 00ff 05       		.byte	0x5
 1237 0100 01       		.uleb128 0x1
 1238 0101 60240000 		.4byte	.LASF83
 1239 0105 05       		.byte	0x5
 1240 0106 01       		.uleb128 0x1
 1241 0107 9F050000 		.4byte	.LASF84
 1242 010b 05       		.byte	0x5
 1243 010c 01       		.uleb128 0x1
 1244 010d 6D230000 		.4byte	.LASF85
 1245 0111 05       		.byte	0x5
 1246 0112 01       		.uleb128 0x1
 1247 0113 DB120000 		.4byte	.LASF86
 1248 0117 05       		.byte	0x5
 1249 0118 01       		.uleb128 0x1
 1250 0119 7B260000 		.4byte	.LASF87
 1251 011d 05       		.byte	0x5
 1252 011e 01       		.uleb128 0x1
 1253 011f 55120000 		.4byte	.LASF88
 1254 0123 05       		.byte	0x5
 1255 0124 01       		.uleb128 0x1
 1256 0125 30270000 		.4byte	.LASF89
 1257 0129 05       		.byte	0x5
 1258 012a 01       		.uleb128 0x1
 1259 012b E8310000 		.4byte	.LASF90
 1260 012f 05       		.byte	0x5
 1261 0130 01       		.uleb128 0x1
 1262 0131 BB120000 		.4byte	.LASF91
 1263 0135 05       		.byte	0x5
 1264 0136 01       		.uleb128 0x1
 1265 0137 93170000 		.4byte	.LASF92
 1266 013b 05       		.byte	0x5
 1267 013c 01       		.uleb128 0x1
 1268 013d 6B0C0000 		.4byte	.LASF93
 1269 0141 05       		.byte	0x5
 1270 0142 01       		.uleb128 0x1
 1271 0143 E8260000 		.4byte	.LASF94
 1272 0147 05       		.byte	0x5
 1273 0148 01       		.uleb128 0x1
 1274 0149 69070000 		.4byte	.LASF95
 1275 014d 05       		.byte	0x5
 1276 014e 01       		.uleb128 0x1
 1277 014f 94320000 		.4byte	.LASF96
 1278 0153 05       		.byte	0x5
 1279 0154 01       		.uleb128 0x1
 1280 0155 07210000 		.4byte	.LASF97
 1281 0159 05       		.byte	0x5
 1282 015a 01       		.uleb128 0x1
 1283 015b FE040000 		.4byte	.LASF98
 1284 015f 05       		.byte	0x5
 1285 0160 01       		.uleb128 0x1
 1286 0161 7A0D0000 		.4byte	.LASF99
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 24


 1287 0165 05       		.byte	0x5
 1288 0166 01       		.uleb128 0x1
 1289 0167 3D120000 		.4byte	.LASF100
 1290 016b 05       		.byte	0x5
 1291 016c 01       		.uleb128 0x1
 1292 016d EE300000 		.4byte	.LASF101
 1293 0171 05       		.byte	0x5
 1294 0172 01       		.uleb128 0x1
 1295 0173 F5080000 		.4byte	.LASF102
 1296 0177 05       		.byte	0x5
 1297 0178 01       		.uleb128 0x1
 1298 0179 B6150000 		.4byte	.LASF103
 1299 017d 05       		.byte	0x5
 1300 017e 01       		.uleb128 0x1
 1301 017f A40D0000 		.4byte	.LASF104
 1302 0183 05       		.byte	0x5
 1303 0184 01       		.uleb128 0x1
 1304 0185 252D0000 		.4byte	.LASF105
 1305 0189 05       		.byte	0x5
 1306 018a 01       		.uleb128 0x1
 1307 018b C62B0000 		.4byte	.LASF106
 1308 018f 05       		.byte	0x5
 1309 0190 01       		.uleb128 0x1
 1310 0191 CC2C0000 		.4byte	.LASF107
 1311 0195 05       		.byte	0x5
 1312 0196 01       		.uleb128 0x1
 1313 0197 EA090000 		.4byte	.LASF108
 1314 019b 05       		.byte	0x5
 1315 019c 01       		.uleb128 0x1
 1316 019d C5100000 		.4byte	.LASF109
 1317 01a1 05       		.byte	0x5
 1318 01a2 01       		.uleb128 0x1
 1319 01a3 B2290000 		.4byte	.LASF110
 1320 01a7 05       		.byte	0x5
 1321 01a8 01       		.uleb128 0x1
 1322 01a9 A0110000 		.4byte	.LASF111
 1323 01ad 05       		.byte	0x5
 1324 01ae 01       		.uleb128 0x1
 1325 01af F9060000 		.4byte	.LASF112
 1326 01b3 05       		.byte	0x5
 1327 01b4 01       		.uleb128 0x1
 1328 01b5 311A0000 		.4byte	.LASF113
 1329 01b9 05       		.byte	0x5
 1330 01ba 01       		.uleb128 0x1
 1331 01bb ED050000 		.4byte	.LASF114
 1332 01bf 05       		.byte	0x5
 1333 01c0 01       		.uleb128 0x1
 1334 01c1 C9010000 		.4byte	.LASF115
 1335 01c5 05       		.byte	0x5
 1336 01c6 01       		.uleb128 0x1
 1337 01c7 3E000000 		.4byte	.LASF116
 1338 01cb 05       		.byte	0x5
 1339 01cc 01       		.uleb128 0x1
 1340 01cd 97000000 		.4byte	.LASF117
 1341 01d1 05       		.byte	0x5
 1342 01d2 01       		.uleb128 0x1
 1343 01d3 EB2E0000 		.4byte	.LASF118
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 25


 1344 01d7 05       		.byte	0x5
 1345 01d8 01       		.uleb128 0x1
 1346 01d9 77220000 		.4byte	.LASF119
 1347 01dd 05       		.byte	0x5
 1348 01de 01       		.uleb128 0x1
 1349 01df 571D0000 		.4byte	.LASF120
 1350 01e3 05       		.byte	0x5
 1351 01e4 01       		.uleb128 0x1
 1352 01e5 0A000000 		.4byte	.LASF121
 1353 01e9 05       		.byte	0x5
 1354 01ea 01       		.uleb128 0x1
 1355 01eb 55090000 		.4byte	.LASF122
 1356 01ef 05       		.byte	0x5
 1357 01f0 01       		.uleb128 0x1
 1358 01f1 682A0000 		.4byte	.LASF123
 1359 01f5 05       		.byte	0x5
 1360 01f6 01       		.uleb128 0x1
 1361 01f7 5F310000 		.4byte	.LASF124
 1362 01fb 05       		.byte	0x5
 1363 01fc 01       		.uleb128 0x1
 1364 01fd 132A0000 		.4byte	.LASF125
 1365 0201 05       		.byte	0x5
 1366 0202 01       		.uleb128 0x1
 1367 0203 7B060000 		.4byte	.LASF126
 1368 0207 05       		.byte	0x5
 1369 0208 01       		.uleb128 0x1
 1370 0209 57280000 		.4byte	.LASF127
 1371 020d 05       		.byte	0x5
 1372 020e 01       		.uleb128 0x1
 1373 020f 691F0000 		.4byte	.LASF128
 1374 0213 05       		.byte	0x5
 1375 0214 01       		.uleb128 0x1
 1376 0215 71010000 		.4byte	.LASF129
 1377 0219 05       		.byte	0x5
 1378 021a 01       		.uleb128 0x1
 1379 021b 16190000 		.4byte	.LASF130
 1380 021f 05       		.byte	0x5
 1381 0220 01       		.uleb128 0x1
 1382 0221 9D010000 		.4byte	.LASF131
 1383 0225 05       		.byte	0x5
 1384 0226 01       		.uleb128 0x1
 1385 0227 4F250000 		.4byte	.LASF132
 1386 022b 05       		.byte	0x5
 1387 022c 01       		.uleb128 0x1
 1388 022d B9210000 		.4byte	.LASF133
 1389 0231 05       		.byte	0x5
 1390 0232 01       		.uleb128 0x1
 1391 0233 CB290000 		.4byte	.LASF134
 1392 0237 05       		.byte	0x5
 1393 0238 01       		.uleb128 0x1
 1394 0239 F3140000 		.4byte	.LASF135
 1395 023d 05       		.byte	0x5
 1396 023e 01       		.uleb128 0x1
 1397 023f CE080000 		.4byte	.LASF136
 1398 0243 05       		.byte	0x5
 1399 0244 01       		.uleb128 0x1
 1400 0245 44010000 		.4byte	.LASF137
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 26


 1401 0249 05       		.byte	0x5
 1402 024a 01       		.uleb128 0x1
 1403 024b EE170000 		.4byte	.LASF138
 1404 024f 05       		.byte	0x5
 1405 0250 01       		.uleb128 0x1
 1406 0251 1D110000 		.4byte	.LASF139
 1407 0255 05       		.byte	0x5
 1408 0256 01       		.uleb128 0x1
 1409 0257 D1240000 		.4byte	.LASF140
 1410 025b 05       		.byte	0x5
 1411 025c 01       		.uleb128 0x1
 1412 025d 34170000 		.4byte	.LASF141
 1413 0261 05       		.byte	0x5
 1414 0262 01       		.uleb128 0x1
 1415 0263 66330000 		.4byte	.LASF142
 1416 0267 05       		.byte	0x5
 1417 0268 01       		.uleb128 0x1
 1418 0269 8E020000 		.4byte	.LASF143
 1419 026d 05       		.byte	0x5
 1420 026e 01       		.uleb128 0x1
 1421 026f 98260000 		.4byte	.LASF144
 1422 0273 05       		.byte	0x5
 1423 0274 01       		.uleb128 0x1
 1424 0275 E1060000 		.4byte	.LASF145
 1425 0279 05       		.byte	0x5
 1426 027a 01       		.uleb128 0x1
 1427 027b 8E010000 		.4byte	.LASF146
 1428 027f 05       		.byte	0x5
 1429 0280 01       		.uleb128 0x1
 1430 0281 65180000 		.4byte	.LASF147
 1431 0285 05       		.byte	0x5
 1432 0286 01       		.uleb128 0x1
 1433 0287 E4030000 		.4byte	.LASF148
 1434 028b 05       		.byte	0x5
 1435 028c 01       		.uleb128 0x1
 1436 028d 78200000 		.4byte	.LASF149
 1437 0291 05       		.byte	0x5
 1438 0292 01       		.uleb128 0x1
 1439 0293 19100000 		.4byte	.LASF150
 1440 0297 05       		.byte	0x5
 1441 0298 01       		.uleb128 0x1
 1442 0299 B2170000 		.4byte	.LASF151
 1443 029d 05       		.byte	0x5
 1444 029e 01       		.uleb128 0x1
 1445 029f 96280000 		.4byte	.LASF152
 1446 02a3 05       		.byte	0x5
 1447 02a4 01       		.uleb128 0x1
 1448 02a5 AD2D0000 		.4byte	.LASF153
 1449 02a9 05       		.byte	0x5
 1450 02aa 01       		.uleb128 0x1
 1451 02ab 93060000 		.4byte	.LASF154
 1452 02af 05       		.byte	0x5
 1453 02b0 01       		.uleb128 0x1
 1454 02b1 890C0000 		.4byte	.LASF155
 1455 02b5 05       		.byte	0x5
 1456 02b6 01       		.uleb128 0x1
 1457 02b7 D82A0000 		.4byte	.LASF156
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 27


 1458 02bb 05       		.byte	0x5
 1459 02bc 01       		.uleb128 0x1
 1460 02bd 9F080000 		.4byte	.LASF157
 1461 02c1 05       		.byte	0x5
 1462 02c2 01       		.uleb128 0x1
 1463 02c3 C2250000 		.4byte	.LASF158
 1464 02c7 05       		.byte	0x5
 1465 02c8 01       		.uleb128 0x1
 1466 02c9 F2220000 		.4byte	.LASF159
 1467 02cd 05       		.byte	0x5
 1468 02ce 01       		.uleb128 0x1
 1469 02cf 0E250000 		.4byte	.LASF160
 1470 02d3 05       		.byte	0x5
 1471 02d4 01       		.uleb128 0x1
 1472 02d5 331C0000 		.4byte	.LASF161
 1473 02d9 05       		.byte	0x5
 1474 02da 01       		.uleb128 0x1
 1475 02db 93070000 		.4byte	.LASF162
 1476 02df 05       		.byte	0x5
 1477 02e0 01       		.uleb128 0x1
 1478 02e1 7B150000 		.4byte	.LASF163
 1479 02e5 05       		.byte	0x5
 1480 02e6 01       		.uleb128 0x1
 1481 02e7 B0140000 		.4byte	.LASF164
 1482 02eb 05       		.byte	0x5
 1483 02ec 01       		.uleb128 0x1
 1484 02ed 54170000 		.4byte	.LASF165
 1485 02f1 05       		.byte	0x5
 1486 02f2 01       		.uleb128 0x1
 1487 02f3 F7130000 		.4byte	.LASF166
 1488 02f7 05       		.byte	0x5
 1489 02f8 01       		.uleb128 0x1
 1490 02f9 BF0A0000 		.4byte	.LASF167
 1491 02fd 05       		.byte	0x5
 1492 02fe 01       		.uleb128 0x1
 1493 02ff BD320000 		.4byte	.LASF168
 1494 0303 05       		.byte	0x5
 1495 0304 01       		.uleb128 0x1
 1496 0305 C32E0000 		.4byte	.LASF169
 1497 0309 05       		.byte	0x5
 1498 030a 01       		.uleb128 0x1
 1499 030b 9F2B0000 		.4byte	.LASF170
 1500 030f 05       		.byte	0x5
 1501 0310 01       		.uleb128 0x1
 1502 0311 F8120000 		.4byte	.LASF171
 1503 0315 05       		.byte	0x5
 1504 0316 01       		.uleb128 0x1
 1505 0317 34220000 		.4byte	.LASF172
 1506 031b 05       		.byte	0x5
 1507 031c 01       		.uleb128 0x1
 1508 031d 12020000 		.4byte	.LASF173
 1509 0321 05       		.byte	0x5
 1510 0322 01       		.uleb128 0x1
 1511 0323 B21E0000 		.4byte	.LASF174
 1512 0327 05       		.byte	0x5
 1513 0328 01       		.uleb128 0x1
 1514 0329 C1260000 		.4byte	.LASF175
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 28


 1515 032d 05       		.byte	0x5
 1516 032e 01       		.uleb128 0x1
 1517 032f C90C0000 		.4byte	.LASF176
 1518 0333 05       		.byte	0x5
 1519 0334 01       		.uleb128 0x1
 1520 0335 663F0000 		.4byte	.LASF177
 1521 0339 05       		.byte	0x5
 1522 033a 01       		.uleb128 0x1
 1523 033b 341B0000 		.4byte	.LASF178
 1524 033f 05       		.byte	0x5
 1525 0340 01       		.uleb128 0x1
 1526 0341 18310000 		.4byte	.LASF179
 1527 0345 05       		.byte	0x5
 1528 0346 01       		.uleb128 0x1
 1529 0347 EA040000 		.4byte	.LASF180
 1530 034b 05       		.byte	0x5
 1531 034c 01       		.uleb128 0x1
 1532 034d 5B1A0000 		.4byte	.LASF181
 1533 0351 05       		.byte	0x5
 1534 0352 01       		.uleb128 0x1
 1535 0353 54020000 		.4byte	.LASF182
 1536 0357 05       		.byte	0x5
 1537 0358 01       		.uleb128 0x1
 1538 0359 C6140000 		.4byte	.LASF183
 1539 035d 05       		.byte	0x5
 1540 035e 01       		.uleb128 0x1
 1541 035f A11B0000 		.4byte	.LASF184
 1542 0363 05       		.byte	0x5
 1543 0364 01       		.uleb128 0x1
 1544 0365 0F320000 		.4byte	.LASF185
 1545 0369 05       		.byte	0x5
 1546 036a 01       		.uleb128 0x1
 1547 036b B1000000 		.4byte	.LASF186
 1548 036f 05       		.byte	0x5
 1549 0370 01       		.uleb128 0x1
 1550 0371 D1160000 		.4byte	.LASF187
 1551 0375 05       		.byte	0x5
 1552 0376 01       		.uleb128 0x1
 1553 0377 86250000 		.4byte	.LASF188
 1554 037b 05       		.byte	0x5
 1555 037c 01       		.uleb128 0x1
 1556 037d B1060000 		.4byte	.LASF189
 1557 0381 05       		.byte	0x5
 1558 0382 01       		.uleb128 0x1
 1559 0383 6A2D0000 		.4byte	.LASF190
 1560 0387 05       		.byte	0x5
 1561 0388 01       		.uleb128 0x1
 1562 0389 5F3D0000 		.4byte	.LASF191
 1563 038d 05       		.byte	0x5
 1564 038e 01       		.uleb128 0x1
 1565 038f FC2E0000 		.4byte	.LASF192
 1566 0393 05       		.byte	0x5
 1567 0394 01       		.uleb128 0x1
 1568 0395 300D0000 		.4byte	.LASF193
 1569 0399 05       		.byte	0x5
 1570 039a 01       		.uleb128 0x1
 1571 039b ED190000 		.4byte	.LASF194
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 29


 1572 039f 05       		.byte	0x5
 1573 03a0 01       		.uleb128 0x1
 1574 03a1 D1050000 		.4byte	.LASF195
 1575 03a5 05       		.byte	0x5
 1576 03a6 01       		.uleb128 0x1
 1577 03a7 661E0000 		.4byte	.LASF196
 1578 03ab 05       		.byte	0x5
 1579 03ac 01       		.uleb128 0x1
 1580 03ad 52270000 		.4byte	.LASF197
 1581 03b1 05       		.byte	0x5
 1582 03b2 01       		.uleb128 0x1
 1583 03b3 BA230000 		.4byte	.LASF198
 1584 03b7 05       		.byte	0x5
 1585 03b8 01       		.uleb128 0x1
 1586 03b9 FB1F0000 		.4byte	.LASF199
 1587 03bd 05       		.byte	0x5
 1588 03be 01       		.uleb128 0x1
 1589 03bf 35330000 		.4byte	.LASF200
 1590 03c3 05       		.byte	0x5
 1591 03c4 01       		.uleb128 0x1
 1592 03c5 8B190000 		.4byte	.LASF201
 1593 03c9 05       		.byte	0x5
 1594 03ca 01       		.uleb128 0x1
 1595 03cb F61D0000 		.4byte	.LASF202
 1596 03cf 05       		.byte	0x5
 1597 03d0 01       		.uleb128 0x1
 1598 03d1 A32C0000 		.4byte	.LASF203
 1599 03d5 05       		.byte	0x5
 1600 03d6 01       		.uleb128 0x1
 1601 03d7 CB0E0000 		.4byte	.LASF204
 1602 03db 05       		.byte	0x5
 1603 03dc 01       		.uleb128 0x1
 1604 03dd D93E0000 		.4byte	.LASF205
 1605 03e1 05       		.byte	0x5
 1606 03e2 01       		.uleb128 0x1
 1607 03e3 301E0000 		.4byte	.LASF206
 1608 03e7 05       		.byte	0x5
 1609 03e8 01       		.uleb128 0x1
 1610 03e9 47240000 		.4byte	.LASF207
 1611 03ed 05       		.byte	0x5
 1612 03ee 01       		.uleb128 0x1
 1613 03ef 461F0000 		.4byte	.LASF208
 1614 03f3 05       		.byte	0x5
 1615 03f4 01       		.uleb128 0x1
 1616 03f5 3C2C0000 		.4byte	.LASF209
 1617 03f9 05       		.byte	0x5
 1618 03fa 01       		.uleb128 0x1
 1619 03fb 2F100000 		.4byte	.LASF210
 1620 03ff 05       		.byte	0x5
 1621 0400 01       		.uleb128 0x1
 1622 0401 F70A0000 		.4byte	.LASF211
 1623 0405 05       		.byte	0x5
 1624 0406 01       		.uleb128 0x1
 1625 0407 64170000 		.4byte	.LASF212
 1626 040b 05       		.byte	0x5
 1627 040c 01       		.uleb128 0x1
 1628 040d B8050000 		.4byte	.LASF213
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 30


 1629 0411 05       		.byte	0x5
 1630 0412 01       		.uleb128 0x1
 1631 0413 0D1B0000 		.4byte	.LASF214
 1632 0417 05       		.byte	0x5
 1633 0418 01       		.uleb128 0x1
 1634 0419 503F0000 		.4byte	.LASF215
 1635 041d 05       		.byte	0x5
 1636 041e 01       		.uleb128 0x1
 1637 041f 22160000 		.4byte	.LASF216
 1638 0423 05       		.byte	0x5
 1639 0424 01       		.uleb128 0x1
 1640 0425 47230000 		.4byte	.LASF217
 1641 0429 05       		.byte	0x5
 1642 042a 01       		.uleb128 0x1
 1643 042b FC3D0000 		.4byte	.LASF218
 1644 042f 05       		.byte	0x5
 1645 0430 01       		.uleb128 0x1
 1646 0431 0A0E0000 		.4byte	.LASF219
 1647 0435 05       		.byte	0x5
 1648 0436 01       		.uleb128 0x1
 1649 0437 2A010000 		.4byte	.LASF220
 1650 043b 05       		.byte	0x5
 1651 043c 01       		.uleb128 0x1
 1652 043d 66000000 		.4byte	.LASF221
 1653 0441 05       		.byte	0x5
 1654 0442 01       		.uleb128 0x1
 1655 0443 950F0000 		.4byte	.LASF222
 1656 0447 05       		.byte	0x5
 1657 0448 01       		.uleb128 0x1
 1658 0449 310C0000 		.4byte	.LASF223
 1659 044d 05       		.byte	0x5
 1660 044e 01       		.uleb128 0x1
 1661 044f 901D0000 		.4byte	.LASF224
 1662 0453 05       		.byte	0x5
 1663 0454 01       		.uleb128 0x1
 1664 0455 A3040000 		.4byte	.LASF225
 1665 0459 05       		.byte	0x5
 1666 045a 01       		.uleb128 0x1
 1667 045b D4320000 		.4byte	.LASF226
 1668 045f 05       		.byte	0x5
 1669 0460 01       		.uleb128 0x1
 1670 0461 5C220000 		.4byte	.LASF227
 1671 0465 05       		.byte	0x5
 1672 0466 01       		.uleb128 0x1
 1673 0467 9F220000 		.4byte	.LASF228
 1674 046b 05       		.byte	0x5
 1675 046c 01       		.uleb128 0x1
 1676 046d 13200000 		.4byte	.LASF229
 1677 0471 05       		.byte	0x5
 1678 0472 01       		.uleb128 0x1
 1679 0473 29260000 		.4byte	.LASF230
 1680 0477 05       		.byte	0x5
 1681 0478 01       		.uleb128 0x1
 1682 0479 3F0F0000 		.4byte	.LASF231
 1683 047d 05       		.byte	0x5
 1684 047e 01       		.uleb128 0x1
 1685 047f AA0B0000 		.4byte	.LASF232
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 31


 1686 0483 05       		.byte	0x5
 1687 0484 01       		.uleb128 0x1
 1688 0485 2C290000 		.4byte	.LASF233
 1689 0489 05       		.byte	0x5
 1690 048a 01       		.uleb128 0x1
 1691 048b 73250000 		.4byte	.LASF234
 1692 048f 05       		.byte	0x5
 1693 0490 01       		.uleb128 0x1
 1694 0491 032D0000 		.4byte	.LASF235
 1695 0495 05       		.byte	0x5
 1696 0496 01       		.uleb128 0x1
 1697 0497 F7020000 		.4byte	.LASF236
 1698 049b 05       		.byte	0x5
 1699 049c 01       		.uleb128 0x1
 1700 049d 37110000 		.4byte	.LASF237
 1701 04a1 05       		.byte	0x5
 1702 04a2 01       		.uleb128 0x1
 1703 04a3 F0240000 		.4byte	.LASF238
 1704 04a7 05       		.byte	0x5
 1705 04a8 01       		.uleb128 0x1
 1706 04a9 25150000 		.4byte	.LASF239
 1707 04ad 05       		.byte	0x5
 1708 04ae 01       		.uleb128 0x1
 1709 04af BF200000 		.4byte	.LASF240
 1710 04b3 05       		.byte	0x5
 1711 04b4 01       		.uleb128 0x1
 1712 04b5 300E0000 		.4byte	.LASF241
 1713 04b9 05       		.byte	0x5
 1714 04ba 01       		.uleb128 0x1
 1715 04bb 3D1D0000 		.4byte	.LASF242
 1716 04bf 05       		.byte	0x5
 1717 04c0 01       		.uleb128 0x1
 1718 04c1 3B2A0000 		.4byte	.LASF243
 1719 04c5 05       		.byte	0x5
 1720 04c6 01       		.uleb128 0x1
 1721 04c7 FA1A0000 		.4byte	.LASF244
 1722 04cb 05       		.byte	0x5
 1723 04cc 01       		.uleb128 0x1
 1724 04cd 341F0000 		.4byte	.LASF245
 1725 04d1 05       		.byte	0x5
 1726 04d2 01       		.uleb128 0x1
 1727 04d3 7B1D0000 		.4byte	.LASF246
 1728 04d7 05       		.byte	0x5
 1729 04d8 01       		.uleb128 0x1
 1730 04d9 8E0B0000 		.4byte	.LASF247
 1731 04dd 05       		.byte	0x5
 1732 04de 01       		.uleb128 0x1
 1733 04df 2A180000 		.4byte	.LASF248
 1734 04e3 05       		.byte	0x5
 1735 04e4 01       		.uleb128 0x1
 1736 04e5 80170000 		.4byte	.LASF249
 1737 04e9 05       		.byte	0x5
 1738 04ea 01       		.uleb128 0x1
 1739 04eb C03D0000 		.4byte	.LASF250
 1740 04ef 05       		.byte	0x5
 1741 04f0 01       		.uleb128 0x1
 1742 04f1 00240000 		.4byte	.LASF251
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 32


 1743 04f5 05       		.byte	0x5
 1744 04f6 01       		.uleb128 0x1
 1745 04f7 903D0000 		.4byte	.LASF252
 1746 04fb 05       		.byte	0x5
 1747 04fc 01       		.uleb128 0x1
 1748 04fd 5D0D0000 		.4byte	.LASF253
 1749 0501 05       		.byte	0x5
 1750 0502 01       		.uleb128 0x1
 1751 0503 4D1C0000 		.4byte	.LASF254
 1752 0507 05       		.byte	0x5
 1753 0508 01       		.uleb128 0x1
 1754 0509 A70C0000 		.4byte	.LASF255
 1755 050d 05       		.byte	0x5
 1756 050e 01       		.uleb128 0x1
 1757 050f E0130000 		.4byte	.LASF256
 1758 0513 05       		.byte	0x5
 1759 0514 01       		.uleb128 0x1
 1760 0515 EC270000 		.4byte	.LASF257
 1761 0519 05       		.byte	0x5
 1762 051a 01       		.uleb128 0x1
 1763 051b 4C0C0000 		.4byte	.LASF258
 1764 051f 05       		.byte	0x5
 1765 0520 01       		.uleb128 0x1
 1766 0521 AD260000 		.4byte	.LASF259
 1767 0525 05       		.byte	0x5
 1768 0526 01       		.uleb128 0x1
 1769 0527 6D0F0000 		.4byte	.LASF260
 1770 052b 05       		.byte	0x5
 1771 052c 01       		.uleb128 0x1
 1772 052d 893E0000 		.4byte	.LASF261
 1773 0531 05       		.byte	0x5
 1774 0532 01       		.uleb128 0x1
 1775 0533 790A0000 		.4byte	.LASF262
 1776 0537 05       		.byte	0x5
 1777 0538 01       		.uleb128 0x1
 1778 0539 961F0000 		.4byte	.LASF263
 1779 053d 05       		.byte	0x5
 1780 053e 01       		.uleb128 0x1
 1781 053f 881E0000 		.4byte	.LASF264
 1782 0543 05       		.byte	0x5
 1783 0544 01       		.uleb128 0x1
 1784 0545 C1070000 		.4byte	.LASF265
 1785 0549 05       		.byte	0x5
 1786 054a 01       		.uleb128 0x1
 1787 054b 170D0000 		.4byte	.LASF266
 1788 054f 05       		.byte	0x5
 1789 0550 01       		.uleb128 0x1
 1790 0551 77040000 		.4byte	.LASF267
 1791 0555 05       		.byte	0x5
 1792 0556 01       		.uleb128 0x1
 1793 0557 B83E0000 		.4byte	.LASF268
 1794 055b 05       		.byte	0x5
 1795 055c 01       		.uleb128 0x1
 1796 055d C60D0000 		.4byte	.LASF269
 1797 0561 05       		.byte	0x5
 1798 0562 01       		.uleb128 0x1
 1799 0563 06310000 		.4byte	.LASF270
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 33


 1800 0567 05       		.byte	0x5
 1801 0568 01       		.uleb128 0x1
 1802 0569 B8020000 		.4byte	.LASF271
 1803 056d 05       		.byte	0x5
 1804 056e 01       		.uleb128 0x1
 1805 056f C8190000 		.4byte	.LASF272
 1806 0573 05       		.byte	0x5
 1807 0574 01       		.uleb128 0x1
 1808 0575 07120000 		.4byte	.LASF273
 1809 0579 05       		.byte	0x5
 1810 057a 01       		.uleb128 0x1
 1811 057b F80E0000 		.4byte	.LASF274
 1812 057f 05       		.byte	0x5
 1813 0580 01       		.uleb128 0x1
 1814 0581 E0140000 		.4byte	.LASF275
 1815 0585 05       		.byte	0x5
 1816 0586 01       		.uleb128 0x1
 1817 0587 EC2C0000 		.4byte	.LASF276
 1818 058b 05       		.byte	0x5
 1819 058c 01       		.uleb128 0x1
 1820 058d 3E210000 		.4byte	.LASF277
 1821 0591 05       		.byte	0x5
 1822 0592 01       		.uleb128 0x1
 1823 0593 0D0B0000 		.4byte	.LASF278
 1824 0597 05       		.byte	0x5
 1825 0598 01       		.uleb128 0x1
 1826 0599 EF150000 		.4byte	.LASF279
 1827 059d 05       		.byte	0x5
 1828 059e 01       		.uleb128 0x1
 1829 059f B90E0000 		.4byte	.LASF280
 1830 05a3 05       		.byte	0x5
 1831 05a4 01       		.uleb128 0x1
 1832 05a5 661C0000 		.4byte	.LASF281
 1833 05a9 05       		.byte	0x5
 1834 05aa 01       		.uleb128 0x1
 1835 05ab 161F0000 		.4byte	.LASF282
 1836 05af 05       		.byte	0x5
 1837 05b0 01       		.uleb128 0x1
 1838 05b1 38190000 		.4byte	.LASF283
 1839 05b5 05       		.byte	0x5
 1840 05b6 01       		.uleb128 0x1
 1841 05b7 7B3F0000 		.4byte	.LASF284
 1842 05bb 05       		.byte	0x5
 1843 05bc 01       		.uleb128 0x1
 1844 05bd 9D140000 		.4byte	.LASF285
 1845 05c1 05       		.byte	0x5
 1846 05c2 01       		.uleb128 0x1
 1847 05c3 480D0000 		.4byte	.LASF286
 1848 05c7 05       		.byte	0x5
 1849 05c8 01       		.uleb128 0x1
 1850 05c9 1C230000 		.4byte	.LASF287
 1851 05cd 05       		.byte	0x5
 1852 05ce 01       		.uleb128 0x1
 1853 05cf 9C0E0000 		.4byte	.LASF288
 1854 05d3 05       		.byte	0x5
 1855 05d4 01       		.uleb128 0x1
 1856 05d5 17180000 		.4byte	.LASF289
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 34


 1857 05d9 05       		.byte	0x5
 1858 05da 01       		.uleb128 0x1
 1859 05db 0A110000 		.4byte	.LASF290
 1860 05df 05       		.byte	0x5
 1861 05e0 01       		.uleb128 0x1
 1862 05e1 10080000 		.4byte	.LASF291
 1863 05e5 05       		.byte	0x5
 1864 05e6 01       		.uleb128 0x1
 1865 05e7 CB210000 		.4byte	.LASF292
 1866 05eb 05       		.byte	0x5
 1867 05ec 01       		.uleb128 0x1
 1868 05ed BA280000 		.4byte	.LASF293
 1869 05f1 05       		.byte	0x5
 1870 05f2 01       		.uleb128 0x1
 1871 05f3 671D0000 		.4byte	.LASF294
 1872 05f7 05       		.byte	0x5
 1873 05f8 01       		.uleb128 0x1
 1874 05f9 3B160000 		.4byte	.LASF295
 1875 05fd 05       		.byte	0x5
 1876 05fe 01       		.uleb128 0x1
 1877 05ff 60080000 		.4byte	.LASF296
 1878 0603 05       		.byte	0x5
 1879 0604 01       		.uleb128 0x1
 1880 0605 640B0000 		.4byte	.LASF297
 1881 0609 05       		.byte	0x5
 1882 060a 01       		.uleb128 0x1
 1883 060b 87210000 		.4byte	.LASF298
 1884 060f 05       		.byte	0x5
 1885 0610 01       		.uleb128 0x1
 1886 0611 E83D0000 		.4byte	.LASF299
 1887 0615 05       		.byte	0x5
 1888 0616 01       		.uleb128 0x1
 1889 0617 04060000 		.4byte	.LASF300
 1890 061b 05       		.byte	0x5
 1891 061c 01       		.uleb128 0x1
 1892 061d 79110000 		.4byte	.LASF301
 1893 0621 05       		.byte	0x5
 1894 0622 01       		.uleb128 0x1
 1895 0623 0E130000 		.4byte	.LASF302
 1896 0627 05       		.byte	0x5
 1897 0628 01       		.uleb128 0x1
 1898 0629 38130000 		.4byte	.LASF303
 1899 062d 05       		.byte	0x5
 1900 062e 01       		.uleb128 0x1
 1901 062f E52D0000 		.4byte	.LASF304
 1902 0633 05       		.byte	0x5
 1903 0634 01       		.uleb128 0x1
 1904 0635 3A250000 		.4byte	.LASF305
 1905 0639 05       		.byte	0x5
 1906 063a 01       		.uleb128 0x1
 1907 063b A4090000 		.4byte	.LASF306
 1908 063f 05       		.byte	0x5
 1909 0640 01       		.uleb128 0x1
 1910 0641 34080000 		.4byte	.LASF307
 1911 0645 05       		.byte	0x5
 1912 0646 01       		.uleb128 0x1
 1913 0647 2F3F0000 		.4byte	.LASF308
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 35


 1914 064b 05       		.byte	0x5
 1915 064c 01       		.uleb128 0x1
 1916 064d 48320000 		.4byte	.LASF309
 1917 0651 05       		.byte	0x5
 1918 0652 01       		.uleb128 0x1
 1919 0653 FB0B0000 		.4byte	.LASF310
 1920 0657 05       		.byte	0x5
 1921 0658 01       		.uleb128 0x1
 1922 0659 B3250000 		.4byte	.LASF311
 1923 065d 05       		.byte	0x5
 1924 065e 01       		.uleb128 0x1
 1925 065f 9E160000 		.4byte	.LASF312
 1926 0663 05       		.byte	0x5
 1927 0664 01       		.uleb128 0x1
 1928 0665 D0230000 		.4byte	.LASF313
 1929 0669 05       		.byte	0x5
 1930 066a 01       		.uleb128 0x1
 1931 066b 21220000 		.4byte	.LASF314
 1932 066f 05       		.byte	0x5
 1933 0670 01       		.uleb128 0x1
 1934 0671 2F210000 		.4byte	.LASF315
 1935 0675 05       		.byte	0x5
 1936 0676 01       		.uleb128 0x1
 1937 0677 5C2D0000 		.4byte	.LASF316
 1938 067b 05       		.byte	0x5
 1939 067c 01       		.uleb128 0x1
 1940 067d E0240000 		.4byte	.LASF317
 1941 0681 05       		.byte	0x5
 1942 0682 01       		.uleb128 0x1
 1943 0683 141A0000 		.4byte	.LASF318
 1944 0687 05       		.byte	0x5
 1945 0688 01       		.uleb128 0x1
 1946 0689 90220000 		.4byte	.LASF319
 1947 068d 05       		.byte	0x5
 1948 068e 01       		.uleb128 0x1
 1949 068f 6C260000 		.4byte	.LASF320
 1950 0693 05       		.byte	0x5
 1951 0694 01       		.uleb128 0x1
 1952 0695 5D230000 		.4byte	.LASF321
 1953 0699 05       		.byte	0x5
 1954 069a 01       		.uleb128 0x1
 1955 069b AC120000 		.4byte	.LASF322
 1956 069f 05       		.byte	0x5
 1957 06a0 01       		.uleb128 0x1
 1958 06a1 51290000 		.4byte	.LASF323
 1959 06a5 05       		.byte	0x5
 1960 06a6 01       		.uleb128 0x1
 1961 06a7 32140000 		.4byte	.LASF324
 1962 06ab 05       		.byte	0x5
 1963 06ac 01       		.uleb128 0x1
 1964 06ad 80180000 		.4byte	.LASF325
 1965 06b1 05       		.byte	0x5
 1966 06b2 01       		.uleb128 0x1
 1967 06b3 E2010000 		.4byte	.LASF326
 1968 06b7 05       		.byte	0x5
 1969 06b8 01       		.uleb128 0x1
 1970 06b9 05190000 		.4byte	.LASF327
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 36


 1971 06bd 05       		.byte	0x5
 1972 06be 01       		.uleb128 0x1
 1973 06bf BA0C0000 		.4byte	.LASF328
 1974 06c3 05       		.byte	0x5
 1975 06c4 01       		.uleb128 0x1
 1976 06c5 0E280000 		.4byte	.LASF329
 1977 06c9 05       		.byte	0x5
 1978 06ca 01       		.uleb128 0x1
 1979 06cb 61290000 		.4byte	.LASF330
 1980 06cf 05       		.byte	0x5
 1981 06d0 01       		.uleb128 0x1
 1982 06d1 C6110000 		.4byte	.LASF331
 1983 06d5 05       		.byte	0x5
 1984 06d6 01       		.uleb128 0x1
 1985 06d7 6A0A0000 		.4byte	.LASF332
 1986 06db 05       		.byte	0x5
 1987 06dc 01       		.uleb128 0x1
 1988 06dd CD0A0000 		.4byte	.LASF333
 1989 06e1 05       		.byte	0x5
 1990 06e2 01       		.uleb128 0x1
 1991 06e3 E71D0000 		.4byte	.LASF334
 1992 06e7 05       		.byte	0x5
 1993 06e8 01       		.uleb128 0x1
 1994 06e9 84080000 		.4byte	.LASF335
 1995 06ed 05       		.byte	0x5
 1996 06ee 01       		.uleb128 0x1
 1997 06ef 39320000 		.4byte	.LASF336
 1998 06f3 05       		.byte	0x5
 1999 06f4 01       		.uleb128 0x1
 2000 06f5 221A0000 		.4byte	.LASF337
 2001 06f9 05       		.byte	0x5
 2002 06fa 01       		.uleb128 0x1
 2003 06fb E2250000 		.4byte	.LASF338
 2004 06ff 05       		.byte	0x5
 2005 0700 01       		.uleb128 0x1
 2006 0701 7B160000 		.4byte	.LASF339
 2007 0705 05       		.byte	0x5
 2008 0706 01       		.uleb128 0x1
 2009 0707 5D0F0000 		.4byte	.LASF340
 2010 070b 05       		.byte	0x5
 2011 070c 01       		.uleb128 0x1
 2012 070d B03D0000 		.4byte	.LASF341
 2013 0711 05       		.byte	0x5
 2014 0712 01       		.uleb128 0x1
 2015 0713 BE080000 		.4byte	.LASF342
 2016 0717 05       		.byte	0x5
 2017 0718 01       		.uleb128 0x1
 2018 0719 DA040000 		.4byte	.LASF343
 2019 071d 05       		.byte	0x5
 2020 071e 01       		.uleb128 0x1
 2021 071f 743D0000 		.4byte	.LASF344
 2022 0723 05       		.byte	0x5
 2023 0724 01       		.uleb128 0x1
 2024 0725 66060000 		.4byte	.LASF345
 2025 0729 05       		.byte	0x5
 2026 072a 01       		.uleb128 0x1
 2027 072b 7A240000 		.4byte	.LASF346
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 37


 2028 072f 05       		.byte	0x5
 2029 0730 01       		.uleb128 0x1
 2030 0731 1E240000 		.4byte	.LASF347
 2031 0735 05       		.byte	0x5
 2032 0736 01       		.uleb128 0x1
 2033 0737 8B050000 		.4byte	.LASF348
 2034 073b 05       		.byte	0x5
 2035 073c 01       		.uleb128 0x1
 2036 073d B0100000 		.4byte	.LASF349
 2037 0741 05       		.byte	0x5
 2038 0742 01       		.uleb128 0x1
 2039 0743 6D190000 		.4byte	.LASF350
 2040 0747 05       		.byte	0x5
 2041 0748 01       		.uleb128 0x1
 2042 0749 78120000 		.4byte	.LASF351
 2043 074d 05       		.byte	0x5
 2044 074e 01       		.uleb128 0x1
 2045 074f 6C020000 		.4byte	.LASF352
 2046 0753 05       		.byte	0x5
 2047 0754 01       		.uleb128 0x1
 2048 0755 90290000 		.4byte	.LASF353
 2049 0759 05       		.byte	0x5
 2050 075a 01       		.uleb128 0x1
 2051 075b 01160000 		.4byte	.LASF354
 2052 075f 05       		.byte	0x5
 2053 0760 01       		.uleb128 0x1
 2054 0761 2A2E0000 		.4byte	.LASF355
 2055 0765 05       		.byte	0x5
 2056 0766 01       		.uleb128 0x1
 2057 0767 4B0E0000 		.4byte	.LASF356
 2058 076b 05       		.byte	0x5
 2059 076c 01       		.uleb128 0x1
 2060 076d 47180000 		.4byte	.LASF357
 2061 0771 05       		.byte	0x5
 2062 0772 01       		.uleb128 0x1
 2063 0773 462B0000 		.4byte	.LASF358
 2064 0777 05       		.byte	0x5
 2065 0778 01       		.uleb128 0x1
 2066 0779 BA1A0000 		.4byte	.LASF359
 2067 077d 05       		.byte	0x5
 2068 077e 01       		.uleb128 0x1
 2069 077f 75280000 		.4byte	.LASF360
 2070 0783 05       		.byte	0x5
 2071 0784 01       		.uleb128 0x1
 2072 0785 DE1A0000 		.4byte	.LASF361
 2073 0789 05       		.byte	0x5
 2074 078a 01       		.uleb128 0x1
 2075 078b 133E0000 		.4byte	.LASF362
 2076 078f 05       		.byte	0x5
 2077 0790 01       		.uleb128 0x1
 2078 0791 9D1E0000 		.4byte	.LASF363
 2079 0795 05       		.byte	0x5
 2080 0796 01       		.uleb128 0x1
 2081 0797 DA020000 		.4byte	.LASF364
 2082 079b 05       		.byte	0x5
 2083 079c 01       		.uleb128 0x1
 2084 079d 280F0000 		.4byte	.LASF365
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 38


 2085 07a1 05       		.byte	0x5
 2086 07a2 01       		.uleb128 0x1
 2087 07a3 E3190000 		.4byte	.LASF366
 2088 07a7 05       		.byte	0x5
 2089 07a8 01       		.uleb128 0x1
 2090 07a9 75310000 		.4byte	.LASF367
 2091 07ad 05       		.byte	0x5
 2092 07ae 01       		.uleb128 0x1
 2093 07af E1050000 		.4byte	.LASF368
 2094 07b3 05       		.byte	0x5
 2095 07b4 01       		.uleb128 0x1
 2096 07b5 93080000 		.4byte	.LASF369
 2097 07b9 05       		.byte	0x5
 2098 07ba 01       		.uleb128 0x1
 2099 07bb D4100000 		.4byte	.LASF370
 2100 07bf 05       		.byte	0x5
 2101 07c0 01       		.uleb128 0x1
 2102 07c1 CB2A0000 		.4byte	.LASF371
 2103 07c5 05       		.byte	0x5
 2104 07c6 01       		.uleb128 0x1
 2105 07c7 BC270000 		.4byte	.LASF372
 2106 07cb 05       		.byte	0x5
 2107 07cc 01       		.uleb128 0x1
 2108 07cd 0F150000 		.4byte	.LASF373
 2109 07d1 05       		.byte	0x5
 2110 07d2 01       		.uleb128 0x1
 2111 07d3 AF070000 		.4byte	.LASF374
 2112 07d7 05       		.byte	0x5
 2113 07d8 01       		.uleb128 0x1
 2114 07d9 6C200000 		.4byte	.LASF375
 2115 07dd 05       		.byte	0x5
 2116 07de 01       		.uleb128 0x1
 2117 07df 81290000 		.4byte	.LASF376
 2118 07e3 05       		.byte	0x5
 2119 07e4 01       		.uleb128 0x1
 2120 07e5 B11C0000 		.4byte	.LASF377
 2121 07e9 05       		.byte	0x5
 2122 07ea 01       		.uleb128 0x1
 2123 07eb 721A0000 		.4byte	.LASF378
 2124 07ef 05       		.byte	0x5
 2125 07f0 00       		.uleb128 0
 2126 07f1 E30A0000 		.4byte	.LASF379
 2127 07f5 00       		.byte	0
 2128              		.section	.debug_macro,"G",%progbits,wm4.newlib.h.8.a9901dc52d1357e3e94003403d43f8b5,comdat
 2129              	.Ldebug_macro2:
 2130 0000 0400     		.2byte	0x4
 2131 0002 00       		.byte	0
 2132 0003 05       		.byte	0x5
 2133 0004 08       		.uleb128 0x8
 2134 0005 012B0000 		.4byte	.LASF380
 2135 0009 05       		.byte	0x5
 2136 000a 0E       		.uleb128 0xe
 2137 000b 25000000 		.4byte	.LASF381
 2138 000f 05       		.byte	0x5
 2139 0010 15       		.uleb128 0x15
 2140 0011 472D0000 		.4byte	.LASF382
 2141 0015 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 39


 2142 0016 18       		.uleb128 0x18
 2143 0017 5B010000 		.4byte	.LASF383
 2144 001b 05       		.byte	0x5
 2145 001c 28       		.uleb128 0x28
 2146 001d E4220000 		.4byte	.LASF384
 2147 0021 05       		.byte	0x5
 2148 0022 32       		.uleb128 0x32
 2149 0023 96120000 		.4byte	.LASF385
 2150 0027 05       		.byte	0x5
 2151 0028 36       		.uleb128 0x36
 2152 0029 D7150000 		.4byte	.LASF386
 2153 002d 05       		.byte	0x5
 2154 002e 39       		.uleb128 0x39
 2155 002f 05170000 		.4byte	.LASF387
 2156 0033 05       		.byte	0x5
 2157 0034 3C       		.uleb128 0x3c
 2158 0035 A7150000 		.4byte	.LASF388
 2159 0039 00       		.byte	0
 2160              		.section	.debug_macro,"G",%progbits,wm4.config.h.193.5fb8ef056cdff92dec3dee9552839d8c,comdat
 2161              	.Ldebug_macro3:
 2162 0000 0400     		.2byte	0x4
 2163 0002 00       		.byte	0
 2164 0003 05       		.byte	0x5
 2165 0004 C101     		.uleb128 0xc1
 2166 0006 A1240000 		.4byte	.LASF389
 2167 000a 06       		.byte	0x6
 2168 000b C701     		.uleb128 0xc7
 2169 000d 3C230000 		.4byte	.LASF390
 2170 0011 05       		.byte	0x5
 2171 0012 CB01     		.uleb128 0xcb
 2172 0014 0B270000 		.4byte	.LASF391
 2173 0018 05       		.byte	0x5
 2174 0019 DB01     		.uleb128 0xdb
 2175 001b 000E0000 		.4byte	.LASF392
 2176 001f 05       		.byte	0x5
 2177 0020 DF01     		.uleb128 0xdf
 2178 0022 2B330000 		.4byte	.LASF393
 2179 0026 05       		.byte	0x5
 2180 0027 E601     		.uleb128 0xe6
 2181 0029 4A060000 		.4byte	.LASF394
 2182 002d 00       		.byte	0
 2183              		.section	.debug_macro,"G",%progbits,wm4._ansi.h.23.fa6206289f154965d075fc01e2867808,comdat
 2184              	.Ldebug_macro4:
 2185 0000 0400     		.2byte	0x4
 2186 0002 00       		.byte	0
 2187 0003 05       		.byte	0x5
 2188 0004 17       		.uleb128 0x17
 2189 0005 E02C0000 		.4byte	.LASF395
 2190 0009 05       		.byte	0x5
 2191 000a 22       		.uleb128 0x22
 2192 000b 3B260000 		.4byte	.LASF396
 2193 000f 05       		.byte	0x5
 2194 0010 23       		.uleb128 0x23
 2195 0011 BD090000 		.4byte	.LASF397
 2196 0015 05       		.byte	0x5
 2197 0016 28       		.uleb128 0x28
 2198 0017 F40C0000 		.4byte	.LASF398
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 40


 2199 001b 05       		.byte	0x5
 2200 001c 34       		.uleb128 0x34
 2201 001d 2B090000 		.4byte	.LASF399
 2202 0021 05       		.byte	0x5
 2203 0022 35       		.uleb128 0x35
 2204 0023 FE160000 		.4byte	.LASF400
 2205 0027 05       		.byte	0x5
 2206 0028 36       		.uleb128 0x36
 2207 0029 2B050000 		.4byte	.LASF401
 2208 002d 05       		.byte	0x5
 2209 002e 37       		.uleb128 0x37
 2210 002f 0C100000 		.4byte	.LASF402
 2211 0033 05       		.byte	0x5
 2212 0034 38       		.uleb128 0x38
 2213 0035 4C140000 		.4byte	.LASF403
 2214 0039 05       		.byte	0x5
 2215 003a 39       		.uleb128 0x39
 2216 003b DC2E0000 		.4byte	.LASF404
 2217 003f 05       		.byte	0x5
 2218 0040 3A       		.uleb128 0x3a
 2219 0041 BF2A0000 		.4byte	.LASF405
 2220 0045 05       		.byte	0x5
 2221 0046 3B       		.uleb128 0x3b
 2222 0047 FB000000 		.4byte	.LASF406
 2223 004b 05       		.byte	0x5
 2224 004c 42       		.uleb128 0x42
 2225 004d A7310000 		.4byte	.LASF407
 2226 0051 05       		.byte	0x5
 2227 0052 43       		.uleb128 0x43
 2228 0053 48330000 		.4byte	.LASF408
 2229 0057 05       		.byte	0x5
 2230 0058 44       		.uleb128 0x44
 2231 0059 C9270000 		.4byte	.LASF409
 2232 005d 05       		.byte	0x5
 2233 005e 45       		.uleb128 0x45
 2234 005f EF290000 		.4byte	.LASF410
 2235 0063 05       		.byte	0x5
 2236 0064 47       		.uleb128 0x47
 2237 0065 9A200000 		.4byte	.LASF411
 2238 0069 05       		.byte	0x5
 2239 006a 48       		.uleb128 0x48
 2240 006b 39030000 		.4byte	.LASF412
 2241 006f 05       		.byte	0x5
 2242 0070 49       		.uleb128 0x49
 2243 0071 021A0000 		.4byte	.LASF413
 2244 0075 05       		.byte	0x5
 2245 0076 4B       		.uleb128 0x4b
 2246 0077 682E0000 		.4byte	.LASF414
 2247 007b 05       		.byte	0x5
 2248 007c 4E       		.uleb128 0x4e
 2249 007d AC0F0000 		.4byte	.LASF415
 2250 0081 05       		.byte	0x5
 2251 0082 51       		.uleb128 0x51
 2252 0083 0E330000 		.4byte	.LASF416
 2253 0087 05       		.byte	0x5
 2254 0088 6B       		.uleb128 0x6b
 2255 0089 972A0000 		.4byte	.LASF417
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 41


 2256 008d 05       		.byte	0x5
 2257 008e 7E       		.uleb128 0x7e
 2258 008f C1180000 		.4byte	.LASF418
 2259 0093 00       		.byte	0
 2260              		.section	.debug_macro,"G",%progbits,wm4.stdlib.h.13.603ed7eb09a1561ab06840b7c0fcff58,comdat
 2261              	.Ldebug_macro5:
 2262 0000 0400     		.2byte	0x4
 2263 0002 00       		.byte	0
 2264 0003 05       		.byte	0x5
 2265 0004 0D       		.uleb128 0xd
 2266 0005 54200000 		.4byte	.LASF419
 2267 0009 05       		.byte	0x5
 2268 000a 0E       		.uleb128 0xe
 2269 000b 4B1A0000 		.4byte	.LASF420
 2270 000f 00       		.byte	0
 2271              		.section	.debug_macro,"G",%progbits,wm4.stddef.h.187.40b3a084f9bc2c020a9e00b9eabe9c14,comdat
 2272              	.Ldebug_macro6:
 2273 0000 0400     		.2byte	0x4
 2274 0002 00       		.byte	0
 2275 0003 05       		.byte	0x5
 2276 0004 BB01     		.uleb128 0xbb
 2277 0006 233F0000 		.4byte	.LASF421
 2278 000a 05       		.byte	0x5
 2279 000b BC01     		.uleb128 0xbc
 2280 000d EB1B0000 		.4byte	.LASF422
 2281 0011 05       		.byte	0x5
 2282 0012 BD01     		.uleb128 0xbd
 2283 0014 EE020000 		.4byte	.LASF423
 2284 0018 05       		.byte	0x5
 2285 0019 BE01     		.uleb128 0xbe
 2286 001b C2240000 		.4byte	.LASF424
 2287 001f 05       		.byte	0x5
 2288 0020 BF01     		.uleb128 0xbf
 2289 0022 71150000 		.4byte	.LASF425
 2290 0026 05       		.byte	0x5
 2291 0027 C001     		.uleb128 0xc0
 2292 0029 63200000 		.4byte	.LASF426
 2293 002d 05       		.byte	0x5
 2294 002e C101     		.uleb128 0xc1
 2295 0030 C83C0000 		.4byte	.LASF427
 2296 0034 05       		.byte	0x5
 2297 0035 C201     		.uleb128 0xc2
 2298 0037 00000000 		.4byte	.LASF428
 2299 003b 05       		.byte	0x5
 2300 003c C301     		.uleb128 0xc3
 2301 003e A30A0000 		.4byte	.LASF429
 2302 0042 05       		.byte	0x5
 2303 0043 C401     		.uleb128 0xc4
 2304 0045 52110000 		.4byte	.LASF430
 2305 0049 05       		.byte	0x5
 2306 004a C501     		.uleb128 0xc5
 2307 004c CF130000 		.4byte	.LASF431
 2308 0050 05       		.byte	0x5
 2309 0051 C601     		.uleb128 0xc6
 2310 0053 4E0B0000 		.4byte	.LASF432
 2311 0057 05       		.byte	0x5
 2312 0058 C701     		.uleb128 0xc7
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 42


 2313 005a D6310000 		.4byte	.LASF433
 2314 005e 05       		.byte	0x5
 2315 005f C801     		.uleb128 0xc8
 2316 0061 590A0000 		.4byte	.LASF434
 2317 0065 05       		.byte	0x5
 2318 0066 C901     		.uleb128 0xc9
 2319 0068 DD090000 		.4byte	.LASF435
 2320 006c 05       		.byte	0x5
 2321 006d CA01     		.uleb128 0xca
 2322 006f C8160000 		.4byte	.LASF436
 2323 0073 05       		.byte	0x5
 2324 0074 CF01     		.uleb128 0xcf
 2325 0076 B61B0000 		.4byte	.LASF437
 2326 007a 06       		.byte	0x6
 2327 007b EB01     		.uleb128 0xeb
 2328 007d 5B1F0000 		.4byte	.LASF438
 2329 0081 05       		.byte	0x5
 2330 0082 8802     		.uleb128 0x108
 2331 0084 AD280000 		.4byte	.LASF439
 2332 0088 05       		.byte	0x5
 2333 0089 8902     		.uleb128 0x109
 2334 008b 77080000 		.4byte	.LASF440
 2335 008f 05       		.byte	0x5
 2336 0090 8A02     		.uleb128 0x10a
 2337 0092 C1290000 		.4byte	.LASF441
 2338 0096 05       		.byte	0x5
 2339 0097 8B02     		.uleb128 0x10b
 2340 0099 7C210000 		.4byte	.LASF442
 2341 009d 05       		.byte	0x5
 2342 009e 8C02     		.uleb128 0x10c
 2343 00a0 8D2A0000 		.4byte	.LASF443
 2344 00a4 05       		.byte	0x5
 2345 00a5 8D02     		.uleb128 0x10d
 2346 00a7 90030000 		.4byte	.LASF444
 2347 00ab 05       		.byte	0x5
 2348 00ac 8E02     		.uleb128 0x10e
 2349 00ae 41140000 		.4byte	.LASF445
 2350 00b2 05       		.byte	0x5
 2351 00b3 8F02     		.uleb128 0x10f
 2352 00b5 9E2D0000 		.4byte	.LASF446
 2353 00b9 05       		.byte	0x5
 2354 00ba 9002     		.uleb128 0x110
 2355 00bc CA090000 		.4byte	.LASF447
 2356 00c0 05       		.byte	0x5
 2357 00c1 9102     		.uleb128 0x111
 2358 00c3 651B0000 		.4byte	.LASF448
 2359 00c7 05       		.byte	0x5
 2360 00c8 9202     		.uleb128 0x112
 2361 00ca 82010000 		.4byte	.LASF449
 2362 00ce 05       		.byte	0x5
 2363 00cf 9302     		.uleb128 0x113
 2364 00d1 E9000000 		.4byte	.LASF450
 2365 00d5 05       		.byte	0x5
 2366 00d6 9402     		.uleb128 0x114
 2367 00d8 D8000000 		.4byte	.LASF451
 2368 00dc 05       		.byte	0x5
 2369 00dd 9502     		.uleb128 0x115
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 43


 2370 00df B10A0000 		.4byte	.LASF452
 2371 00e3 05       		.byte	0x5
 2372 00e4 9602     		.uleb128 0x116
 2373 00e6 080A0000 		.4byte	.LASF453
 2374 00ea 06       		.byte	0x6
 2375 00eb A302     		.uleb128 0x123
 2376 00ed 59030000 		.4byte	.LASF454
 2377 00f1 06       		.byte	0x6
 2378 00f2 D802     		.uleb128 0x158
 2379 00f4 DF170000 		.4byte	.LASF455
 2380 00f8 06       		.byte	0x6
 2381 00f9 9903     		.uleb128 0x199
 2382 00fb F4230000 		.4byte	.LASF456
 2383 00ff 00       		.byte	0
 2384              		.section	.debug_macro,"G",%progbits,wm4._default_types.h.6.1dbd2e581fd590860c7c17f21d147e91,comdat
 2385              	.Ldebug_macro7:
 2386 0000 0400     		.2byte	0x4
 2387 0002 00       		.byte	0
 2388 0003 05       		.byte	0x5
 2389 0004 06       		.uleb128 0x6
 2390 0005 90180000 		.4byte	.LASF457
 2391 0009 05       		.byte	0x5
 2392 000a 12       		.uleb128 0x12
 2393 000b DF230000 		.4byte	.LASF458
 2394 000f 05       		.byte	0x5
 2395 0010 1C       		.uleb128 0x1c
 2396 0011 2B0B0000 		.4byte	.LASF459
 2397 0015 05       		.byte	0x5
 2398 0016 26       		.uleb128 0x26
 2399 0017 64110000 		.4byte	.LASF460
 2400 001b 05       		.byte	0x5
 2401 001c 30       		.uleb128 0x30
 2402 001d 19170000 		.4byte	.LASF461
 2403 0021 05       		.byte	0x5
 2404 0022 3C       		.uleb128 0x3c
 2405 0023 28120000 		.4byte	.LASF462
 2406 0027 05       		.byte	0x5
 2407 0028 4E       		.uleb128 0x4e
 2408 0029 FC170000 		.4byte	.LASF463
 2409 002d 05       		.byte	0x5
 2410 002e 65       		.uleb128 0x65
 2411 002f 800F0000 		.4byte	.LASF464
 2412 0033 06       		.byte	0x6
 2413 0034 73       		.uleb128 0x73
 2414 0035 242E0000 		.4byte	.LASF465
 2415 0039 00       		.byte	0
 2416              		.section	.debug_macro,"G",%progbits,wm4.lock.h.2.9bc98482741e5e2a9450b12934a684ea,comdat
 2417              	.Ldebug_macro8:
 2418 0000 0400     		.2byte	0x4
 2419 0002 00       		.byte	0
 2420 0003 05       		.byte	0x5
 2421 0004 02       		.uleb128 0x2
 2422 0005 56320000 		.4byte	.LASF466
 2423 0009 05       		.byte	0x5
 2424 000a 0B       		.uleb128 0xb
 2425 000b CC0F0000 		.4byte	.LASF467
 2426 000f 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 44


 2427 0010 0C       		.uleb128 0xc
 2428 0011 D0200000 		.4byte	.LASF468
 2429 0015 05       		.byte	0x5
 2430 0016 0D       		.uleb128 0xd
 2431 0017 5B210000 		.4byte	.LASF469
 2432 001b 05       		.byte	0x5
 2433 001c 0E       		.uleb128 0xe
 2434 001d 38050000 		.4byte	.LASF470
 2435 0021 05       		.byte	0x5
 2436 0022 0F       		.uleb128 0xf
 2437 0023 47070000 		.4byte	.LASF471
 2438 0027 05       		.byte	0x5
 2439 0028 10       		.uleb128 0x10
 2440 0029 85230000 		.4byte	.LASF472
 2441 002d 05       		.byte	0x5
 2442 002e 11       		.uleb128 0x11
 2443 002f 002E0000 		.4byte	.LASF473
 2444 0033 05       		.byte	0x5
 2445 0034 12       		.uleb128 0x12
 2446 0035 952E0000 		.4byte	.LASF474
 2447 0039 05       		.byte	0x5
 2448 003a 13       		.uleb128 0x13
 2449 003b E8070000 		.4byte	.LASF475
 2450 003f 05       		.byte	0x5
 2451 0040 14       		.uleb128 0x14
 2452 0041 1B0A0000 		.4byte	.LASF476
 2453 0045 05       		.byte	0x5
 2454 0046 15       		.uleb128 0x15
 2455 0047 06010000 		.4byte	.LASF477
 2456 004b 05       		.byte	0x5
 2457 004c 16       		.uleb128 0x16
 2458 004d 66320000 		.4byte	.LASF478
 2459 0051 00       		.byte	0
 2460              		.section	.debug_macro,"G",%progbits,wm4.stddef.h.349.31f4c5baff3fa2689010b32028da9c47,comdat
 2461              	.Ldebug_macro9:
 2462 0000 0400     		.2byte	0x4
 2463 0002 00       		.byte	0
 2464 0003 05       		.byte	0x5
 2465 0004 DD02     		.uleb128 0x15d
 2466 0006 7F1E0000 		.4byte	.LASF479
 2467 000a 06       		.byte	0x6
 2468 000b E402     		.uleb128 0x164
 2469 000d 2B040000 		.4byte	.LASF480
 2470 0011 06       		.byte	0x6
 2471 0012 9903     		.uleb128 0x199
 2472 0014 F4230000 		.4byte	.LASF456
 2473 0018 00       		.byte	0
 2474              		.section	.debug_macro,"G",%progbits,wm4.reent.h.16.9e42f0e588b85e70b2bf6572af57ce64,comdat
 2475              	.Ldebug_macro10:
 2476 0000 0400     		.2byte	0x4
 2477 0002 00       		.byte	0
 2478 0003 05       		.byte	0x5
 2479 0004 10       		.uleb128 0x10
 2480 0005 6A1A0000 		.4byte	.LASF481
 2481 0009 05       		.byte	0x5
 2482 000a 14       		.uleb128 0x14
 2483 000b 4D0A0000 		.4byte	.LASF482
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 45


 2484 000f 05       		.byte	0x5
 2485 0010 45       		.uleb128 0x45
 2486 0011 91240000 		.4byte	.LASF483
 2487 0015 05       		.byte	0x5
 2488 0016 A601     		.uleb128 0xa6
 2489 0018 36020000 		.4byte	.LASF484
 2490 001c 05       		.byte	0x5
 2491 001d AA02     		.uleb128 0x12a
 2492 001f 8C090000 		.4byte	.LASF485
 2493 0023 05       		.byte	0x5
 2494 0024 AB02     		.uleb128 0x12b
 2495 0026 8B2C0000 		.4byte	.LASF486
 2496 002a 05       		.byte	0x5
 2497 002b AC02     		.uleb128 0x12c
 2498 002d 98100000 		.4byte	.LASF487
 2499 0031 05       		.byte	0x5
 2500 0032 AD02     		.uleb128 0x12d
 2501 0034 67030000 		.4byte	.LASF488
 2502 0038 05       		.byte	0x5
 2503 0039 AE02     		.uleb128 0x12e
 2504 003b 57130000 		.4byte	.LASF489
 2505 003f 05       		.byte	0x5
 2506 0040 AF02     		.uleb128 0x12f
 2507 0042 D31B0000 		.4byte	.LASF490
 2508 0046 05       		.byte	0x5
 2509 0047 B002     		.uleb128 0x130
 2510 0049 83100000 		.4byte	.LASF491
 2511 004d 05       		.byte	0x5
 2512 004e BC02     		.uleb128 0x13c
 2513 0050 102B0000 		.4byte	.LASF492
 2514 0054 05       		.byte	0x5
 2515 0055 BD02     		.uleb128 0x13d
 2516 0057 6E090000 		.4byte	.LASF493
 2517 005b 05       		.byte	0x5
 2518 005c BE02     		.uleb128 0x13e
 2519 005e D23D0000 		.4byte	.LASF494
 2520 0062 05       		.byte	0x5
 2521 0063 FE04     		.uleb128 0x27e
 2522 0065 843D0000 		.4byte	.LASF495
 2523 0069 05       		.byte	0x5
 2524 006a 9205     		.uleb128 0x292
 2525 006c 132F0000 		.4byte	.LASF496
 2526 0070 05       		.byte	0x5
 2527 0071 C305     		.uleb128 0x2c3
 2528 0073 7A330000 		.4byte	.LASF497
 2529 0077 05       		.byte	0x5
 2530 0078 8106     		.uleb128 0x301
 2531 007a 53190000 		.4byte	.LASF498
 2532 007e 05       		.byte	0x5
 2533 007f 8206     		.uleb128 0x302
 2534 0081 501E0000 		.4byte	.LASF499
 2535 0085 05       		.byte	0x5
 2536 0086 8306     		.uleb128 0x303
 2537 0088 91150000 		.4byte	.LASF500
 2538 008c 05       		.byte	0x5
 2539 008d 8406     		.uleb128 0x304
 2540 008f 492E0000 		.4byte	.LASF501
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 46


 2541 0093 05       		.byte	0x5
 2542 0094 8506     		.uleb128 0x305
 2543 0096 292B0000 		.4byte	.LASF502
 2544 009a 05       		.byte	0x5
 2545 009b 8606     		.uleb128 0x306
 2546 009d 891B0000 		.4byte	.LASF503
 2547 00a1 05       		.byte	0x5
 2548 00a2 8706     		.uleb128 0x307
 2549 00a4 BC040000 		.4byte	.LASF504
 2550 00a8 05       		.byte	0x5
 2551 00a9 8906     		.uleb128 0x309
 2552 00ab F4280000 		.4byte	.LASF505
 2553 00af 05       		.byte	0x5
 2554 00b0 8A06     		.uleb128 0x30a
 2555 00b2 99130000 		.4byte	.LASF506
 2556 00b6 05       		.byte	0x5
 2557 00b7 8B06     		.uleb128 0x30b
 2558 00b9 F1250000 		.4byte	.LASF507
 2559 00bd 05       		.byte	0x5
 2560 00be 8C06     		.uleb128 0x30c
 2561 00c0 C30B0000 		.4byte	.LASF508
 2562 00c4 05       		.byte	0x5
 2563 00c5 8D06     		.uleb128 0x30d
 2564 00c7 B51F0000 		.4byte	.LASF509
 2565 00cb 05       		.byte	0x5
 2566 00cc 8E06     		.uleb128 0x30e
 2567 00ce 0B140000 		.4byte	.LASF510
 2568 00d2 05       		.byte	0x5
 2569 00d3 8F06     		.uleb128 0x30f
 2570 00d5 0E030000 		.4byte	.LASF511
 2571 00d9 05       		.byte	0x5
 2572 00da 9006     		.uleb128 0x310
 2573 00dc F1010000 		.4byte	.LASF512
 2574 00e0 05       		.byte	0x5
 2575 00e1 9106     		.uleb128 0x311
 2576 00e3 DC110000 		.4byte	.LASF513
 2577 00e7 05       		.byte	0x5
 2578 00e8 9206     		.uleb128 0x312
 2579 00ea 37150000 		.4byte	.LASF514
 2580 00ee 05       		.byte	0x5
 2581 00ef 9306     		.uleb128 0x313
 2582 00f1 680E0000 		.4byte	.LASF515
 2583 00f5 05       		.byte	0x5
 2584 00f6 9406     		.uleb128 0x314
 2585 00f8 6F130000 		.4byte	.LASF516
 2586 00fc 05       		.byte	0x5
 2587 00fd 9506     		.uleb128 0x315
 2588 00ff 82270000 		.4byte	.LASF517
 2589 0103 05       		.byte	0x5
 2590 0104 9606     		.uleb128 0x316
 2591 0106 652B0000 		.4byte	.LASF518
 2592 010a 05       		.byte	0x5
 2593 010b 9706     		.uleb128 0x317
 2594 010d 0B070000 		.4byte	.LASF519
 2595 0111 05       		.byte	0x5
 2596 0112 9806     		.uleb128 0x318
 2597 0114 A8030000 		.4byte	.LASF520
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 47


 2598 0118 05       		.byte	0x5
 2599 0119 9906     		.uleb128 0x319
 2600 011b F22B0000 		.4byte	.LASF521
 2601 011f 05       		.byte	0x5
 2602 0120 9A06     		.uleb128 0x31a
 2603 0122 5F140000 		.4byte	.LASF522
 2604 0126 05       		.byte	0x5
 2605 0127 9B06     		.uleb128 0x31b
 2606 0129 D23C0000 		.4byte	.LASF523
 2607 012d 05       		.byte	0x5
 2608 012e 9C06     		.uleb128 0x31c
 2609 0130 7C1A0000 		.4byte	.LASF524
 2610 0134 05       		.byte	0x5
 2611 0135 9D06     		.uleb128 0x31d
 2612 0137 473E0000 		.4byte	.LASF525
 2613 013b 05       		.byte	0x5
 2614 013c 9E06     		.uleb128 0x31e
 2615 013e EF3E0000 		.4byte	.LASF526
 2616 0142 05       		.byte	0x5
 2617 0143 9F06     		.uleb128 0x31f
 2618 0145 44100000 		.4byte	.LASF527
 2619 0149 05       		.byte	0x5
 2620 014a A006     		.uleb128 0x320
 2621 014c A81D0000 		.4byte	.LASF528
 2622 0150 05       		.byte	0x5
 2623 0151 A706     		.uleb128 0x327
 2624 0153 D7280000 		.4byte	.LASF529
 2625 0157 05       		.byte	0x5
 2626 0158 AF06     		.uleb128 0x32f
 2627 015a D21C0000 		.4byte	.LASF530
 2628 015e 05       		.byte	0x5
 2629 015f C106     		.uleb128 0x341
 2630 0161 D61E0000 		.4byte	.LASF531
 2631 0165 05       		.byte	0x5
 2632 0166 C606     		.uleb128 0x346
 2633 0168 D80D0000 		.4byte	.LASF532
 2634 016c 00       		.byte	0
 2635              		.section	.debug_macro,"G",%progbits,wm4.alloca.h.8.dfc0c703c47ec3e69746825b17d9e66d,comdat
 2636              	.Ldebug_macro11:
 2637 0000 0400     		.2byte	0x4
 2638 0002 00       		.byte	0
 2639 0003 05       		.byte	0x5
 2640 0004 08       		.uleb128 0x8
 2641 0005 4A220000 		.4byte	.LASF533
 2642 0009 06       		.byte	0x6
 2643 000a 0D       		.uleb128 0xd
 2644 000b 85090000 		.4byte	.LASF534
 2645 000f 05       		.byte	0x5
 2646 0010 10       		.uleb128 0x10
 2647 0011 83310000 		.4byte	.LASF535
 2648 0015 00       		.byte	0
 2649              		.section	.debug_macro,"G",%progbits,wm4.stdlib.h.50.f5923f1950ced340a337f4676566f65a,comdat
 2650              	.Ldebug_macro12:
 2651 0000 0400     		.2byte	0x4
 2652 0002 00       		.byte	0
 2653 0003 05       		.byte	0x5
 2654 0004 32       		.uleb128 0x32
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 48


 2655 0005 F90D0000 		.4byte	.LASF536
 2656 0009 05       		.byte	0x5
 2657 000a 35       		.uleb128 0x35
 2658 000b 162D0000 		.4byte	.LASF537
 2659 000f 05       		.byte	0x5
 2660 0010 36       		.uleb128 0x36
 2661 0011 21270000 		.4byte	.LASF538
 2662 0015 05       		.byte	0x5
 2663 0016 38       		.uleb128 0x38
 2664 0017 1C280000 		.4byte	.LASF539
 2665 001b 05       		.byte	0x5
 2666 001c 3C       		.uleb128 0x3c
 2667 001d F71B0000 		.4byte	.LASF540
 2668 0021 05       		.byte	0x5
 2669 0022 8401     		.uleb128 0x84
 2670 0024 4B1B0000 		.4byte	.LASF541
 2671 0028 00       		.byte	0
 2672              		.section	.debug_line,"",%progbits
 2673              	.Ldebug_line0:
 2674 0000 43030000 		.section	.debug_str,"MS",%progbits,1
 2674      0200CD02 
 2674      00000201 
 2674      FB0E0D00 
 2674      01010101 
 2675              	.LASF428:
 2676 0000 5F53495A 		.ascii	"_SIZE_T_ \000"
 2676      455F545F 
 2676      2000
 2677              	.LASF121:
 2678 000a 5F5F5054 		.ascii	"__PTRDIFF_MAX__ 2147483647\000"
 2678      52444946 
 2678      465F4D41 
 2678      585F5F20 
 2678      32313437 
 2679              	.LASF381:
 2680 0025 5F4E4557 		.ascii	"_NEWLIB_VERSION \"1.19.0\"\000"
 2680      4C49425F 
 2680      56455253 
 2680      494F4E20 
 2680      22312E31 
 2681              	.LASF116:
 2682 003e 5F5F4C4F 		.ascii	"__LONG_LONG_MAX__ 9223372036854775807LL\000"
 2682      4E475F4C 
 2682      4F4E475F 
 2682      4D41585F 
 2682      5F203932 
 2683              	.LASF221:
 2684 0066 5F5F4445 		.ascii	"__DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD\000"
 2684      4336345F 
 2684      5355424E 
 2684      4F524D41 
 2684      4C5F4D49 
 2685              	.LASF117:
 2686 0097 5F5F5743 		.ascii	"__WCHAR_MAX__ 4294967295U\000"
 2686      4841525F 
 2686      4D41585F 
 2686      5F203432 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 49


 2686      39343936 
 2687              	.LASF186:
 2688 00b1 5F5F4442 		.ascii	"__DBL_DECIMAL_DIG__ 17\000"
 2688      4C5F4445 
 2688      43494D41 
 2688      4C5F4449 
 2688      475F5F20 
 2689              	.LASF14:
 2690 00c8 6F706572 		.ascii	"operator new []\000"
 2690      61746F72 
 2690      206E6577 
 2690      205B5D00 
 2691              	.LASF451:
 2692 00d8 5F5F494E 		.ascii	"__INT_WCHAR_T_H \000"
 2692      545F5743 
 2692      4841525F 
 2692      545F4820 
 2692      00
 2693              	.LASF450:
 2694 00e9 5F5F5F69 		.ascii	"___int_wchar_t_h \000"
 2694      6E745F77 
 2694      63686172 
 2694      5F745F68 
 2694      2000
 2695              	.LASF406:
 2696 00fb 5F564F49 		.ascii	"_VOID void\000"
 2696      4420766F 
 2696      696400
 2697              	.LASF477:
 2698 0106 5F5F6C6F 		.ascii	"__lock_release(lock) (_CAST_VOID 0)\000"
 2698      636B5F72 
 2698      656C6561 
 2698      7365286C 
 2698      6F636B29 
 2699              	.LASF220:
 2700 012a 5F5F4445 		.ascii	"__DEC64_EPSILON__ 1E-15DD\000"
 2700      4336345F 
 2700      45505349 
 2700      4C4F4E5F 
 2700      5F203145 
 2701              	.LASF137:
 2702 0144 5F5F494E 		.ascii	"__INT_LEAST8_MAX__ 127\000"
 2702      545F4C45 
 2702      41535438 
 2702      5F4D4158 
 2702      5F5F2031 
 2703              	.LASF383:
 2704 015b 5F57414E 		.ascii	"_WANT_REGISTER_FINI 1\000"
 2704      545F5245 
 2704      47495354 
 2704      45525F46 
 2704      494E4920 
 2705              	.LASF129:
 2706 0171 5F5F494E 		.ascii	"__INT8_MAX__ 127\000"
 2706      54385F4D 
 2706      41585F5F 
 2706      20313237 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 50


 2706      00
 2707              	.LASF449:
 2708 0182 5F574348 		.ascii	"_WCHAR_T_H \000"
 2708      41525F54 
 2708      5F482000 
 2709              	.LASF146:
 2710 018e 5F5F5549 		.ascii	"__UINT8_C(c) c\000"
 2710      4E54385F 
 2710      43286329 
 2710      206300
 2711              	.LASF131:
 2712 019d 5F5F494E 		.ascii	"__INT32_MAX__ 2147483647L\000"
 2712      5433325F 
 2712      4D41585F 
 2712      5F203231 
 2712      34373438 
 2713              	.LASF34:
 2714 01b7 5F5F5359 		.ascii	"__SYS_CONFIG_H__ \000"
 2714      535F434F 
 2714      4E464947 
 2714      5F485F5F 
 2714      2000
 2715              	.LASF115:
 2716 01c9 5F5F4C4F 		.ascii	"__LONG_MAX__ 2147483647L\000"
 2716      4E475F4D 
 2716      41585F5F 
 2716      20323134 
 2716      37343833 
 2717              	.LASF326:
 2718 01e2 5F5F5544 		.ascii	"__UDQ_IBIT__ 0\000"
 2718      515F4942 
 2718      49545F5F 
 2718      203000
 2719              	.LASF512:
 2720 01f1 5F524545 		.ascii	"_REENT_MP_P5S(ptr) ((ptr)->_p5s)\000"
 2720      4E545F4D 
 2720      505F5035 
 2720      53287074 
 2720      72292028 
 2721              	.LASF173:
 2722 0212 5F5F464C 		.ascii	"__FLT_MAX__ 3.4028234663852886e+38F\000"
 2722      545F4D41 
 2722      585F5F20 
 2722      332E3430 
 2722      32383233 
 2723              	.LASF484:
 2724 0236 5F524545 		.ascii	"_REENT_SMALL_CHECK_INIT(ptr) \000"
 2724      4E545F53 
 2724      4D414C4C 
 2724      5F434845 
 2724      434B5F49 
 2725              	.LASF182:
 2726 0254 5F5F4442 		.ascii	"__DBL_MIN_EXP__ (-1021)\000"
 2726      4C5F4D49 
 2726      4E5F4558 
 2726      505F5F20 
 2726      282D3130 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 51


 2727              	.LASF352:
 2728 026c 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR16_T_LOCK_FREE 1\000"
 2728      435F4154 
 2728      4F4D4943 
 2728      5F434841 
 2728      5231365F 
 2729              	.LASF143:
 2730 028e 5F5F494E 		.ascii	"__INT_LEAST64_MAX__ 9223372036854775807LL\000"
 2730      545F4C45 
 2730      41535436 
 2730      345F4D41 
 2730      585F5F20 
 2731              	.LASF271:
 2732 02b8 5F5F5341 		.ascii	"__SACCUM_MIN__ (-0X1P7HK-0X1P7HK)\000"
 2732      4343554D 
 2732      5F4D494E 
 2732      5F5F2028 
 2732      2D305831 
 2733              	.LASF364:
 2734 02da 5F5F5349 		.ascii	"__SIZEOF_WINT_T__ 4\000"
 2734      5A454F46 
 2734      5F57494E 
 2734      545F545F 
 2734      5F203400 
 2735              	.LASF423:
 2736 02ee 5F53495A 		.ascii	"_SIZE_T \000"
 2736      455F5420 
 2736      00
 2737              	.LASF236:
 2738 02f7 5F5F5553 		.ascii	"__USFRACT_MIN__ 0.0UHR\000"
 2738      46524143 
 2738      545F4D49 
 2738      4E5F5F20 
 2738      302E3055 
 2739              	.LASF511:
 2740 030e 5F524545 		.ascii	"_REENT_MP_RESULT_K(ptr) ((ptr)->_result_k)\000"
 2740      4E545F4D 
 2740      505F5245 
 2740      53554C54 
 2740      5F4B2870 
 2741              	.LASF412:
 2742 0339 5F444546 		.ascii	"_DEFUN_VOID(name) name(_NOARGS)\000"
 2742      554E5F56 
 2742      4F494428 
 2742      6E616D65 
 2742      29206E61 
 2743              	.LASF454:
 2744 0359 5F425344 		.ascii	"_BSD_WCHAR_T_\000"
 2744      5F574348 
 2744      41525F54 
 2744      5F00
 2745              	.LASF488:
 2746 0367 5F52414E 		.ascii	"_RAND48_MULT_0 (0xe66d)\000"
 2746      4434385F 
 2746      4D554C54 
 2746      5F302028 
 2746      30786536 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 52


 2747              	.LASF45:
 2748 037f 5F5F474E 		.ascii	"__GNUC_MINOR__ 7\000"
 2748      55435F4D 
 2748      494E4F52 
 2748      5F5F2037 
 2748      00
 2749              	.LASF444:
 2750 0390 5F5F5743 		.ascii	"__WCHAR_T \000"
 2750      4841525F 
 2750      542000
 2751              	.LASF0:
 2752 039b 756E7369 		.ascii	"unsigned int\000"
 2752      676E6564 
 2752      20696E74 
 2752      00
 2753              	.LASF520:
 2754 03a8 5F524545 		.ascii	"_REENT_WCTOMB_STATE(ptr) ((ptr)->_new._reent._wctom"
 2754      4E545F57 
 2754      43544F4D 
 2754      425F5354 
 2754      41544528 
 2755 03db 625F7374 		.ascii	"b_state)\000"
 2755      61746529 
 2755      00
 2756              	.LASF148:
 2757 03e4 5F5F5549 		.ascii	"__UINT16_C(c) c\000"
 2757      4E543136 
 2757      5F432863 
 2757      29206300 
 2758              	.LASF64:
 2759 03f4 5F5F5349 		.ascii	"__SIZEOF_SIZE_T__ 4\000"
 2759      5A454F46 
 2759      5F53495A 
 2759      455F545F 
 2759      5F203400 
 2760              	.LASF80:
 2761 0408 5F5F4348 		.ascii	"__CHAR16_TYPE__ short unsigned int\000"
 2761      41523136 
 2761      5F545950 
 2761      455F5F20 
 2761      73686F72 
 2762              	.LASF480:
 2763 042b 5F5F6E65 		.ascii	"__need_wint_t\000"
 2763      65645F77 
 2763      696E745F 
 2763      7400
 2764              	.LASF63:
 2765 0439 5F5F5349 		.ascii	"__SIZEOF_LONG_DOUBLE__ 8\000"
 2765      5A454F46 
 2765      5F4C4F4E 
 2765      475F444F 
 2765      55424C45 
 2766              	.LASF44:
 2767 0452 5F5F474E 		.ascii	"__GNUC__ 4\000"
 2767      55435F5F 
 2767      203400
 2768              	.LASF68:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 53


 2769 045d 5F5F4F52 		.ascii	"__ORDER_BIG_ENDIAN__ 4321\000"
 2769      4445525F 
 2769      4249475F 
 2769      454E4449 
 2769      414E5F5F 
 2770              	.LASF267:
 2771 0477 5F5F554C 		.ascii	"__ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR\000"
 2771      4C465241 
 2771      43545F4D 
 2771      41585F5F 
 2771      20305846 
 2772              	.LASF225:
 2773 04a3 5F5F4445 		.ascii	"__DEC128_MIN__ 1E-6143DL\000"
 2773      43313238 
 2773      5F4D494E 
 2773      5F5F2031 
 2773      452D3631 
 2774              	.LASF504:
 2775 04bc 5F524545 		.ascii	"_REENT_CHECK_SIGNAL_BUF(ptr) \000"
 2775      4E545F43 
 2775      4845434B 
 2775      5F534947 
 2775      4E414C5F 
 2776              	.LASF343:
 2777 04da 5F5F5554 		.ascii	"__UTA_FBIT__ 64\000"
 2777      415F4642 
 2777      49545F5F 
 2777      20363400 
 2778              	.LASF180:
 2779 04ea 5F5F4442 		.ascii	"__DBL_MANT_DIG__ 53\000"
 2779      4C5F4D41 
 2779      4E545F44 
 2779      49475F5F 
 2779      20353300 
 2780              	.LASF98:
 2781 04fe 5F5F5549 		.ascii	"__UINT_LEAST64_TYPE__ long long unsigned int\000"
 2781      4E545F4C 
 2781      45415354 
 2781      36345F54 
 2781      5950455F 
 2782              	.LASF401:
 2783 052b 5F4E4F41 		.ascii	"_NOARGS void\000"
 2783      52475320 
 2783      766F6964 
 2783      00
 2784              	.LASF470:
 2785 0538 5F5F6C6F 		.ascii	"__lock_init_recursive(lock) (_CAST_VOID 0)\000"
 2785      636B5F69 
 2785      6E69745F 
 2785      72656375 
 2785      72736976 
 2786              	.LASF51:
 2787 0563 5F5F4154 		.ascii	"__ATOMIC_RELEASE 3\000"
 2787      4F4D4943 
 2787      5F52454C 
 2787      45415345 
 2787      203300
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 54


 2788              	.LASF75:
 2789 0576 5F5F5054 		.ascii	"__PTRDIFF_TYPE__ int\000"
 2789      52444946 
 2789      465F5459 
 2789      50455F5F 
 2789      20696E74 
 2790              	.LASF348:
 2791 058b 5F5F4348 		.ascii	"__CHAR_UNSIGNED__ 1\000"
 2791      41525F55 
 2791      4E534947 
 2791      4E45445F 
 2791      5F203100 
 2792              	.LASF84:
 2793 059f 5F5F494E 		.ascii	"__INT16_TYPE__ short int\000"
 2793      5431365F 
 2793      54595045 
 2793      5F5F2073 
 2793      686F7274 
 2794              	.LASF213:
 2795 05b8 5F5F4445 		.ascii	"__DEC32_EPSILON__ 1E-6DF\000"
 2795      4333325F 
 2795      45505349 
 2795      4C4F4E5F 
 2795      5F203145 
 2796              	.LASF195:
 2797 05d1 5F5F4C44 		.ascii	"__LDBL_DIG__ 15\000"
 2797      424C5F44 
 2797      49475F5F 
 2797      20313500 
 2798              	.LASF368:
 2799 05e1 5F5F7468 		.ascii	"__thumb__ 1\000"
 2799      756D625F 
 2799      5F203100 
 2800              	.LASF114:
 2801 05ed 5F5F494E 		.ascii	"__INT_MAX__ 2147483647\000"
 2801      545F4D41 
 2801      585F5F20 
 2801      32313437 
 2801      34383336 
 2802              	.LASF300:
 2803 0604 5F5F4C4C 		.ascii	"__LLACCUM_IBIT__ 32\000"
 2803      41434355 
 2803      4D5F4942 
 2803      49545F5F 
 2803      20333200 
 2804              	.LASF49:
 2805 0618 5F5F4154 		.ascii	"__ATOMIC_SEQ_CST 5\000"
 2805      4F4D4943 
 2805      5F534551 
 2805      5F435354 
 2805      203500
 2806              	.LASF31:
 2807 062b 5F535444 		.ascii	"_STDLIB_H_ \000"
 2807      4C49425F 
 2807      485F2000 
 2808              	.LASF60:
 2809 0637 5F5F5349 		.ascii	"__SIZEOF_SHORT__ 2\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 55


 2809      5A454F46 
 2809      5F53484F 
 2809      52545F5F 
 2809      203200
 2810              	.LASF394:
 2811 064a 5F524541 		.ascii	"_READ_WRITE_RETURN_TYPE int\000"
 2811      445F5752 
 2811      4954455F 
 2811      52455455 
 2811      524E5F54 
 2812              	.LASF345:
 2813 0666 5F5F5245 		.ascii	"__REGISTER_PREFIX__ \000"
 2813      47495354 
 2813      45525F50 
 2813      52454649 
 2813      585F5F20 
 2814              	.LASF126:
 2815 067b 5F5F5549 		.ascii	"__UINTMAX_C(c) c ## ULL\000"
 2815      4E544D41 
 2815      585F4328 
 2815      63292063 
 2815      20232320 
 2816              	.LASF154:
 2817 0693 5F5F494E 		.ascii	"__INT_FAST16_MAX__ 2147483647\000"
 2817      545F4641 
 2817      53543136 
 2817      5F4D4158 
 2817      5F5F2032 
 2818              	.LASF189:
 2819 06b1 5F5F4442 		.ascii	"__DBL_EPSILON__ double(2.2204460492503131e-16L)\000"
 2819      4C5F4550 
 2819      53494C4F 
 2819      4E5F5F20 
 2819      646F7562 
 2820              	.LASF145:
 2821 06e1 5F5F5549 		.ascii	"__UINT_LEAST8_MAX__ 255\000"
 2821      4E545F4C 
 2821      45415354 
 2821      385F4D41 
 2821      585F5F20 
 2822              	.LASF112:
 2823 06f9 5F5F5343 		.ascii	"__SCHAR_MAX__ 127\000"
 2823      4841525F 
 2823      4D41585F 
 2823      5F203132 
 2823      3700
 2824              	.LASF519:
 2825 070b 5F524545 		.ascii	"_REENT_MBTOWC_STATE(ptr) ((ptr)->_new._reent._mbtow"
 2825      4E545F4D 
 2825      42544F57 
 2825      435F5354 
 2825      41544528 
 2826 073e 635F7374 		.ascii	"c_state)\000"
 2826      61746529 
 2826      00
 2827              	.LASF471:
 2828 0747 5F5F6C6F 		.ascii	"__lock_close(lock) (_CAST_VOID 0)\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 56


 2828      636B5F63 
 2828      6C6F7365 
 2828      286C6F63 
 2828      6B292028 
 2829              	.LASF95:
 2830 0769 5F5F5549 		.ascii	"__UINT_LEAST8_TYPE__ unsigned char\000"
 2830      4E545F4C 
 2830      45415354 
 2830      385F5459 
 2830      50455F5F 
 2831              	.LASF21:
 2832 078c 5F5A6461 		.ascii	"_ZdaPv\000"
 2832      507600
 2833              	.LASF162:
 2834 0793 5F5F5549 		.ascii	"__UINTPTR_MAX__ 4294967295U\000"
 2834      4E545054 
 2834      525F4D41 
 2834      585F5F20 
 2834      34323934 
 2835              	.LASF374:
 2836 07af 5F5F4152 		.ascii	"__ARM_ARCH_6M__ 1\000"
 2836      4D5F4152 
 2836      43485F36 
 2836      4D5F5F20 
 2836      3100
 2837              	.LASF265:
 2838 07c1 5F5F554C 		.ascii	"__ULLFRACT_IBIT__ 0\000"
 2838      4C465241 
 2838      43545F49 
 2838      4249545F 
 2838      5F203000 
 2839              	.LASF48:
 2840 07d5 5F5F4154 		.ascii	"__ATOMIC_RELAXED 0\000"
 2840      4F4D4943 
 2840      5F52454C 
 2840      41584544 
 2840      203000
 2841              	.LASF475:
 2842 07e8 5F5F6C6F 		.ascii	"__lock_try_acquire(lock) (_CAST_VOID 0)\000"
 2842      636B5F74 
 2842      72795F61 
 2842      63717569 
 2842      7265286C 
 2843              	.LASF291:
 2844 0810 5F5F4C41 		.ascii	"__LACCUM_MIN__ (-0X1P31LK-0X1P31LK)\000"
 2844      4343554D 
 2844      5F4D494E 
 2844      5F5F2028 
 2844      2D305831 
 2845              	.LASF307:
 2846 0834 5F5F554C 		.ascii	"__ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK\000"
 2846      4C414343 
 2846      554D5F4D 
 2846      41585F5F 
 2846      20305846 
 2847              	.LASF296:
 2848 0860 5F5F554C 		.ascii	"__ULACCUM_MIN__ 0.0ULK\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 57


 2848      41434355 
 2848      4D5F4D49 
 2848      4E5F5F20 
 2848      302E3055 
 2849              	.LASF440:
 2850 0877 5F5F5743 		.ascii	"__WCHAR_T__ \000"
 2850      4841525F 
 2850      545F5F20 
 2850      00
 2851              	.LASF335:
 2852 0884 5F5F5441 		.ascii	"__TA_FBIT__ 63\000"
 2852      5F464249 
 2852      545F5F20 
 2852      363300
 2853              	.LASF369:
 2854 0893 5F5F4152 		.ascii	"__ARMEL__ 1\000"
 2854      4D454C5F 
 2854      5F203100 
 2855              	.LASF157:
 2856 089f 5F5F5549 		.ascii	"__UINT_FAST8_MAX__ 4294967295U\000"
 2856      4E545F46 
 2856      41535438 
 2856      5F4D4158 
 2856      5F5F2034 
 2857              	.LASF342:
 2858 08be 5F5F5544 		.ascii	"__UDA_IBIT__ 32\000"
 2858      415F4942 
 2858      49545F5F 
 2858      20333200 
 2859              	.LASF136:
 2860 08ce 5F5F5549 		.ascii	"__UINT64_MAX__ 18446744073709551615ULL\000"
 2860      4E543634 
 2860      5F4D4158 
 2860      5F5F2031 
 2860      38343436 
 2861              	.LASF102:
 2862 08f5 5F5F494E 		.ascii	"__INT_FAST64_TYPE__ long long int\000"
 2862      545F4641 
 2862      53543634 
 2862      5F545950 
 2862      455F5F20 
 2863              	.LASF42:
 2864 0917 5F5F6370 		.ascii	"__cplusplus 199711L\000"
 2864      6C757370 
 2864      6C757320 
 2864      31393937 
 2864      31314C00 
 2865              	.LASF399:
 2866 092b 5F505452 		.ascii	"_PTR void *\000"
 2866      20766F69 
 2866      64202A00 
 2867              	.LASF1:
 2868 0937 7369676E 		.ascii	"signed char\000"
 2868      65642063 
 2868      68617200 
 2869              	.LASF24:
 2870 0943 5F5F6378 		.ascii	"__cxa_guard_abort\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 58


 2870      615F6775 
 2870      6172645F 
 2870      61626F72 
 2870      7400
 2871              	.LASF122:
 2872 0955 5F5F5349 		.ascii	"__SIZE_MAX__ 4294967295U\000"
 2872      5A455F4D 
 2872      41585F5F 
 2872      20343239 
 2872      34393637 
 2873              	.LASF493:
 2874 096e 5F524545 		.ascii	"_REENT_ASCTIME_SIZE 26\000"
 2874      4E545F41 
 2874      53435449 
 2874      4D455F53 
 2874      495A4520 
 2875              	.LASF534:
 2876 0985 616C6C6F 		.ascii	"alloca\000"
 2876      636100
 2877              	.LASF485:
 2878 098c 5F52414E 		.ascii	"_RAND48_SEED_0 (0x330e)\000"
 2878      4434385F 
 2878      53454544 
 2878      5F302028 
 2878      30783333 
 2879              	.LASF306:
 2880 09a4 5F5F554C 		.ascii	"__ULLACCUM_MIN__ 0.0ULLK\000"
 2880      4C414343 
 2880      554D5F4D 
 2880      494E5F5F 
 2880      20302E30 
 2881              	.LASF397:
 2882 09bd 5F454E44 		.ascii	"_END_STD_C }\000"
 2882      5F535444 
 2882      5F43207D 
 2882      00
 2883              	.LASF447:
 2884 09ca 5F574348 		.ascii	"_WCHAR_T_DEFINED_ \000"
 2884      41525F54 
 2884      5F444546 
 2884      494E4544 
 2884      5F2000
 2885              	.LASF435:
 2886 09dd 5F474343 		.ascii	"_GCC_SIZE_T \000"
 2886      5F53495A 
 2886      455F5420 
 2886      00
 2887              	.LASF108:
 2888 09ea 5F5F5549 		.ascii	"__UINTPTR_TYPE__ unsigned int\000"
 2888      4E545054 
 2888      525F5459 
 2888      50455F5F 
 2888      20756E73 
 2889              	.LASF453:
 2890 0a08 5F574348 		.ascii	"_WCHAR_T_DECLARED \000"
 2890      41525F54 
 2890      5F444543 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 59


 2890      4C415245 
 2890      442000
 2891              	.LASF476:
 2892 0a1b 5F5F6C6F 		.ascii	"__lock_try_acquire_recursive(lock) (_CAST_VOID 0)\000"
 2892      636B5F74 
 2892      72795F61 
 2892      63717569 
 2892      72655F72 
 2893              	.LASF482:
 2894 0a4d 5F5F4C6F 		.ascii	"__Long long\000"
 2894      6E67206C 
 2894      6F6E6700 
 2895              	.LASF434:
 2896 0a59 5F5F5F69 		.ascii	"___int_size_t_h \000"
 2896      6E745F73 
 2896      697A655F 
 2896      745F6820 
 2896      00
 2897              	.LASF332:
 2898 0a6a 5F5F5341 		.ascii	"__SA_IBIT__ 16\000"
 2898      5F494249 
 2898      545F5F20 
 2898      313600
 2899              	.LASF262:
 2900 0a79 5F5F4C4C 		.ascii	"__LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR\000"
 2900      46524143 
 2900      545F4D41 
 2900      585F5F20 
 2900      30583746 
 2901              	.LASF429:
 2902 0aa3 5F425344 		.ascii	"_BSD_SIZE_T_ \000"
 2902      5F53495A 
 2902      455F545F 
 2902      2000
 2903              	.LASF452:
 2904 0ab1 5F474343 		.ascii	"_GCC_WCHAR_T \000"
 2904      5F574348 
 2904      41525F54 
 2904      2000
 2905              	.LASF167:
 2906 0abf 5F5F464C 		.ascii	"__FLT_DIG__ 6\000"
 2906      545F4449 
 2906      475F5F20 
 2906      3600
 2907              	.LASF333:
 2908 0acd 5F5F4441 		.ascii	"__DA_FBIT__ 31\000"
 2908      5F464249 
 2908      545F5F20 
 2908      333100
 2909              	.LASF28:
 2910 0adc 6D616C6C 		.ascii	"malloc\000"
 2910      6F6300
 2911              	.LASF379:
 2912 0ae3 5F5F5553 		.ascii	"__USES_INITFINI__ 1\000"
 2912      45535F49 
 2912      4E495446 
 2912      494E495F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 60


 2912      5F203100 
 2913              	.LASF211:
 2914 0af7 5F5F4445 		.ascii	"__DEC32_MIN__ 1E-95DF\000"
 2914      4333325F 
 2914      4D494E5F 
 2914      5F203145 
 2914      2D393544 
 2915              	.LASF278:
 2916 0b0d 5F5F5553 		.ascii	"__USACCUM_EPSILON__ 0x1P-8UHK\000"
 2916      41434355 
 2916      4D5F4550 
 2916      53494C4F 
 2916      4E5F5F20 
 2917              	.LASF459:
 2918 0b2b 5F5F5F69 		.ascii	"___int8_t_defined 1\000"
 2918      6E74385F 
 2918      745F6465 
 2918      66696E65 
 2918      64203100 
 2919              	.LASF37:
 2920 0b3f 5F535953 		.ascii	"_SYS__TYPES_H \000"
 2920      5F5F5459 
 2920      5045535F 
 2920      482000
 2921              	.LASF432:
 2922 0b4e 5F425344 		.ascii	"_BSD_SIZE_T_DEFINED_ \000"
 2922      5F53495A 
 2922      455F545F 
 2922      44454649 
 2922      4E45445F 
 2923              	.LASF297:
 2924 0b64 5F5F554C 		.ascii	"__ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK\000"
 2924      41434355 
 2924      4D5F4D41 
 2924      585F5F20 
 2924      30584646 
 2925              	.LASF247:
 2926 0b8e 5F5F5546 		.ascii	"__UFRACT_MAX__ 0XFFFFP-16UR\000"
 2926      52414354 
 2926      5F4D4158 
 2926      5F5F2030 
 2926      58464646 
 2927              	.LASF232:
 2928 0baa 5F5F5346 		.ascii	"__SFRACT_MAX__ 0X7FP-7HR\000"
 2928      52414354 
 2928      5F4D4158 
 2928      5F5F2030 
 2928      58374650 
 2929              	.LASF508:
 2930 0bc3 5F524545 		.ascii	"_REENT_RAND48_MULT(ptr) ((ptr)->_new._reent._r48._m"
 2930      4E545F52 
 2930      414E4434 
 2930      385F4D55 
 2930      4C542870 
 2931 0bf6 756C7429 		.ascii	"ult)\000"
 2931      00
 2932              	.LASF310:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 61


 2933 0bfb 5F5F5151 		.ascii	"__QQ_IBIT__ 0\000"
 2933      5F494249 
 2933      545F5F20 
 2933      3000
 2934              	.LASF35:
 2935 0c09 5F535953 		.ascii	"_SYS_FEATURES_H \000"
 2935      5F464541 
 2935      54555245 
 2935      535F4820 
 2935      00
 2936              	.LASF6:
 2937 0c1a 6C6F6E67 		.ascii	"long long unsigned int\000"
 2937      206C6F6E 
 2937      6720756E 
 2937      7369676E 
 2937      65642069 
 2938              	.LASF223:
 2939 0c31 5F5F4445 		.ascii	"__DEC128_MIN_EXP__ (-6142)\000"
 2939      43313238 
 2939      5F4D494E 
 2939      5F455850 
 2939      5F5F2028 
 2940              	.LASF258:
 2941 0c4c 5F5F554C 		.ascii	"__ULFRACT_EPSILON__ 0x1P-32ULR\000"
 2941      46524143 
 2941      545F4550 
 2941      53494C4F 
 2941      4E5F5F20 
 2942              	.LASF93:
 2943 0c6b 5F5F494E 		.ascii	"__INT_LEAST32_TYPE__ long int\000"
 2943      545F4C45 
 2943      41535433 
 2943      325F5459 
 2943      50455F5F 
 2944              	.LASF155:
 2945 0c89 5F5F494E 		.ascii	"__INT_FAST32_MAX__ 2147483647\000"
 2945      545F4641 
 2945      53543332 
 2945      5F4D4158 
 2945      5F5F2032 
 2946              	.LASF255:
 2947 0ca7 5F5F554C 		.ascii	"__ULFRACT_IBIT__ 0\000"
 2947      46524143 
 2947      545F4942 
 2947      49545F5F 
 2947      203000
 2948              	.LASF328:
 2949 0cba 5F5F5554 		.ascii	"__UTQ_IBIT__ 0\000"
 2949      515F4942 
 2949      49545F5F 
 2949      203000
 2950              	.LASF176:
 2951 0cc9 5F5F464C 		.ascii	"__FLT_DENORM_MIN__ 1.4012984643248171e-45F\000"
 2951      545F4445 
 2951      4E4F524D 
 2951      5F4D494E 
 2951      5F5F2031 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 62


 2952              	.LASF398:
 2953 0cf4 5F4E4F54 		.ascii	"_NOTHROW __attribute__ ((nothrow))\000"
 2953      48524F57 
 2953      205F5F61 
 2953      74747269 
 2953      62757465 
 2954              	.LASF266:
 2955 0d17 5F5F554C 		.ascii	"__ULLFRACT_MIN__ 0.0ULLR\000"
 2955      4C465241 
 2955      43545F4D 
 2955      494E5F5F 
 2955      20302E30 
 2956              	.LASF193:
 2957 0d30 5F5F4442 		.ascii	"__DBL_HAS_QUIET_NAN__ 1\000"
 2957      4C5F4841 
 2957      535F5155 
 2957      4945545F 
 2957      4E414E5F 
 2958              	.LASF286:
 2959 0d48 5F5F5541 		.ascii	"__UACCUM_MIN__ 0.0UK\000"
 2959      4343554D 
 2959      5F4D494E 
 2959      5F5F2030 
 2959      2E30554B 
 2960              	.LASF253:
 2961 0d5d 5F5F4C46 		.ascii	"__LFRACT_EPSILON__ 0x1P-31LR\000"
 2961      52414354 
 2961      5F455053 
 2961      494C4F4E 
 2961      5F5F2030 
 2962              	.LASF99:
 2963 0d7a 5F5F494E 		.ascii	"__INT_FAST8_TYPE__ int\000"
 2963      545F4641 
 2963      5354385F 
 2963      54595045 
 2963      5F5F2069 
 2964              	.LASF19:
 2965 0d91 6F706572 		.ascii	"operator delete []\000"
 2965      61746F72 
 2965      2064656C 
 2965      65746520 
 2965      5B5D00
 2966              	.LASF104:
 2967 0da4 5F5F5549 		.ascii	"__UINT_FAST16_TYPE__ unsigned int\000"
 2967      4E545F46 
 2967      41535431 
 2967      365F5459 
 2967      50455F5F 
 2968              	.LASF269:
 2969 0dc6 5F5F5341 		.ascii	"__SACCUM_FBIT__ 7\000"
 2969      4343554D 
 2969      5F464249 
 2969      545F5F20 
 2969      3700
 2970              	.LASF532:
 2971 0dd8 5F474C4F 		.ascii	"_GLOBAL_REENT _global_impure_ptr\000"
 2971      42414C5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 63


 2971      5245454E 
 2971      54205F67 
 2971      6C6F6261 
 2972              	.LASF536:
 2973 0df9 4E554C4C 		.ascii	"NULL 0\000"
 2973      203000
 2974              	.LASF392:
 2975 0e00 5F5F4558 		.ascii	"__EXPORT \000"
 2975      504F5254 
 2975      2000
 2976              	.LASF219:
 2977 0e0a 5F5F4445 		.ascii	"__DEC64_MAX__ 9.999999999999999E384DD\000"
 2977      4336345F 
 2977      4D41585F 
 2977      5F20392E 
 2977      39393939 
 2978              	.LASF241:
 2979 0e30 5F5F4652 		.ascii	"__FRACT_MIN__ (-0.5R-0.5R)\000"
 2979      4143545F 
 2979      4D494E5F 
 2979      5F20282D 
 2979      302E3552 
 2980              	.LASF356:
 2981 0e4b 5F5F4743 		.ascii	"__GCC_ATOMIC_INT_LOCK_FREE 1\000"
 2981      435F4154 
 2981      4F4D4943 
 2981      5F494E54 
 2981      5F4C4F43 
 2982              	.LASF515:
 2983 0e68 5F524545 		.ascii	"_REENT_TM(ptr) (&(ptr)->_new._reent._localtime_buf)"
 2983      4E545F54 
 2983      4D287074 
 2983      72292028 
 2983      26287074 
 2984 0e9b 00       		.ascii	"\000"
 2985              	.LASF288:
 2986 0e9c 5F5F5541 		.ascii	"__UACCUM_EPSILON__ 0x1P-16UK\000"
 2986      4343554D 
 2986      5F455053 
 2986      494C4F4E 
 2986      5F5F2030 
 2987              	.LASF280:
 2988 0eb9 5F5F4143 		.ascii	"__ACCUM_IBIT__ 16\000"
 2988      43554D5F 
 2988      49424954 
 2988      5F5F2031 
 2988      3600
 2989              	.LASF204:
 2990 0ecb 5F5F4C44 		.ascii	"__LDBL_DENORM_MIN__ 4.9406564584124654e-324L\000"
 2990      424C5F44 
 2990      454E4F52 
 2990      4D5F4D49 
 2990      4E5F5F20 
 2991              	.LASF274:
 2992 0ef8 5F5F5553 		.ascii	"__USACCUM_FBIT__ 8\000"
 2992      41434355 
 2992      4D5F4642 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 64


 2992      49545F5F 
 2992      203800
 2993              	.LASF67:
 2994 0f0b 5F5F4F52 		.ascii	"__ORDER_LITTLE_ENDIAN__ 1234\000"
 2994      4445525F 
 2994      4C495454 
 2994      4C455F45 
 2994      4E444941 
 2995              	.LASF365:
 2996 0f28 5F5F5349 		.ascii	"__SIZEOF_PTRDIFF_T__ 4\000"
 2996      5A454F46 
 2996      5F505452 
 2996      44494646 
 2996      5F545F5F 
 2997              	.LASF231:
 2998 0f3f 5F5F5346 		.ascii	"__SFRACT_MIN__ (-0.5HR-0.5HR)\000"
 2998      52414354 
 2998      5F4D494E 
 2998      5F5F2028 
 2998      2D302E35 
 2999              	.LASF340:
 3000 0f5d 5F5F5553 		.ascii	"__USA_IBIT__ 16\000"
 3000      415F4942 
 3000      49545F5F 
 3000      20313600 
 3001              	.LASF260:
 3002 0f6d 5F5F4C4C 		.ascii	"__LLFRACT_IBIT__ 0\000"
 3002      46524143 
 3002      545F4942 
 3002      49545F5F 
 3002      203000
 3003              	.LASF464:
 3004 0f80 5F5F5F69 		.ascii	"___int64_t_defined 1\000"
 3004      6E743634 
 3004      5F745F64 
 3004      6566696E 
 3004      65642031 
 3005              	.LASF222:
 3006 0f95 5F5F4445 		.ascii	"__DEC128_MANT_DIG__ 34\000"
 3006      43313238 
 3006      5F4D414E 
 3006      545F4449 
 3006      475F5F20 
 3007              	.LASF415:
 3008 0fac 5F4C4F4E 		.ascii	"_LONG_LONG_TYPE long long\000"
 3008      475F4C4F 
 3008      4E475F54 
 3008      59504520 
 3008      6C6F6E67 
 3009              	.LASF15:
 3010 0fc6 5F5A6E77 		.ascii	"_Znwj\000"
 3010      6A00
 3011              	.LASF467:
 3012 0fcc 5F5F4C4F 		.ascii	"__LOCK_INIT(class,lock) static int lock = 0;\000"
 3012      434B5F49 
 3012      4E495428 
 3012      636C6173 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 65


 3012      732C6C6F 
 3013              	.LASF61:
 3014 0ff9 5F5F5349 		.ascii	"__SIZEOF_FLOAT__ 4\000"
 3014      5A454F46 
 3014      5F464C4F 
 3014      41545F5F 
 3014      203400
 3015              	.LASF402:
 3016 100c 5F434F4E 		.ascii	"_CONST const\000"
 3016      53542063 
 3016      6F6E7374 
 3016      00
 3017              	.LASF150:
 3018 1019 5F5F5549 		.ascii	"__UINT32_C(c) c ## UL\000"
 3018      4E543332 
 3018      5F432863 
 3018      29206320 
 3018      23232055 
 3019              	.LASF210:
 3020 102f 5F5F4445 		.ascii	"__DEC32_MAX_EXP__ 97\000"
 3020      4333325F 
 3020      4D41585F 
 3020      4558505F 
 3020      5F203937 
 3021              	.LASF527:
 3022 1044 5F524545 		.ascii	"_REENT_SIGNAL_BUF(ptr) ((ptr)->_new._reent._signal_"
 3022      4E545F53 
 3022      49474E41 
 3022      4C5F4255 
 3022      46287074 
 3023 1077 62756629 		.ascii	"buf)\000"
 3023      00
 3024              	.LASF11:
 3025 107c 73697A65 		.ascii	"size_t\000"
 3025      5F7400
 3026              	.LASF491:
 3027 1083 5F52414E 		.ascii	"_RAND48_ADD (0x000b)\000"
 3027      4434385F 
 3027      41444420 
 3027      28307830 
 3027      30306229 
 3028              	.LASF487:
 3029 1098 5F52414E 		.ascii	"_RAND48_SEED_2 (0x1234)\000"
 3029      4434385F 
 3029      53454544 
 3029      5F322028 
 3029      30783132 
 3030              	.LASF349:
 3031 10b0 5F5F5743 		.ascii	"__WCHAR_UNSIGNED__ 1\000"
 3031      4841525F 
 3031      554E5349 
 3031      474E4544 
 3031      5F5F2031 
 3032              	.LASF109:
 3033 10c5 5F5F4758 		.ascii	"__GXX_WEAK__ 1\000"
 3033      585F5745 
 3033      414B5F5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 66


 3033      203100
 3034              	.LASF370:
 3035 10d4 5F5F5448 		.ascii	"__THUMBEL__ 1\000"
 3035      554D4245 
 3035      4C5F5F20 
 3035      3100
 3036              	.LASF40:
 3037 10e2 5F4D4143 		.ascii	"_MACHSTDLIB_H_ \000"
 3037      48535444 
 3037      4C49425F 
 3037      485F2000 
 3038              	.LASF66:
 3039 10f2 5F5F4249 		.ascii	"__BIGGEST_ALIGNMENT__ 8\000"
 3039      47474553 
 3039      545F414C 
 3039      49474E4D 
 3039      454E545F 
 3040              	.LASF290:
 3041 110a 5F5F4C41 		.ascii	"__LACCUM_IBIT__ 32\000"
 3041      4343554D 
 3041      5F494249 
 3041      545F5F20 
 3041      333200
 3042              	.LASF139:
 3043 111d 5F5F494E 		.ascii	"__INT_LEAST16_MAX__ 32767\000"
 3043      545F4C45 
 3043      41535431 
 3043      365F4D41 
 3043      585F5F20 
 3044              	.LASF237:
 3045 1137 5F5F5553 		.ascii	"__USFRACT_MAX__ 0XFFP-8UHR\000"
 3045      46524143 
 3045      545F4D41 
 3045      585F5F20 
 3045      30584646 
 3046              	.LASF430:
 3047 1152 5F53495A 		.ascii	"_SIZE_T_DEFINED_ \000"
 3047      455F545F 
 3047      44454649 
 3047      4E45445F 
 3047      2000
 3048              	.LASF460:
 3049 1164 5F5F5F69 		.ascii	"___int16_t_defined 1\000"
 3049      6E743136 
 3049      5F745F64 
 3049      6566696E 
 3049      65642031 
 3050              	.LASF301:
 3051 1179 5F5F4C4C 		.ascii	"__LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)\000"
 3051      41434355 
 3051      4D5F4D49 
 3051      4E5F5F20 
 3051      282D3058 
 3052              	.LASF111:
 3053 11a0 5F5F4758 		.ascii	"__GXX_ABI_VERSION 1002\000"
 3053      585F4142 
 3053      495F5645 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 67


 3053      5253494F 
 3053      4E203130 
 3054              	.LASF55:
 3055 11b7 5F5F4F50 		.ascii	"__OPTIMIZE__ 1\000"
 3055      54494D49 
 3055      5A455F5F 
 3055      203100
 3056              	.LASF331:
 3057 11c6 5F5F5341 		.ascii	"__SA_FBIT__ 15\000"
 3057      5F464249 
 3057      545F5F20 
 3057      313500
 3058              	.LASF30:
 3059 11d5 4E45575F 		.ascii	"NEW_H \000"
 3059      482000
 3060              	.LASF513:
 3061 11dc 5F524545 		.ascii	"_REENT_MP_FREELIST(ptr) ((ptr)->_freelist)\000"
 3061      4E545F4D 
 3061      505F4652 
 3061      45454C49 
 3061      53542870 
 3062              	.LASF273:
 3063 1207 5F5F5341 		.ascii	"__SACCUM_EPSILON__ 0x1P-7HK\000"
 3063      4343554D 
 3063      5F455053 
 3063      494C4F4E 
 3063      5F5F2030 
 3064              	.LASF29:
 3065 1223 66726565 		.ascii	"free\000"
 3065      00
 3066              	.LASF462:
 3067 1228 5F5F5F69 		.ascii	"___int32_t_defined 1\000"
 3067      6E743332 
 3067      5F745F64 
 3067      6566696E 
 3067      65642031 
 3068              	.LASF100:
 3069 123d 5F5F494E 		.ascii	"__INT_FAST16_TYPE__ int\000"
 3069      545F4641 
 3069      53543136 
 3069      5F545950 
 3069      455F5F20 
 3070              	.LASF88:
 3071 1255 5F5F5549 		.ascii	"__UINT16_TYPE__ short unsigned int\000"
 3071      4E543136 
 3071      5F545950 
 3071      455F5F20 
 3071      73686F72 
 3072              	.LASF351:
 3073 1278 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR_LOCK_FREE 1\000"
 3073      435F4154 
 3073      4F4D4943 
 3073      5F434841 
 3073      525F4C4F 
 3074              	.LASF385:
 3075 1296 48415645 		.ascii	"HAVE_INITFINI_ARRAY 1\000"
 3075      5F494E49 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 68


 3075      5446494E 
 3075      495F4152 
 3075      52415920 
 3076              	.LASF322:
 3077 12ac 5F5F5548 		.ascii	"__UHQ_IBIT__ 0\000"
 3077      515F4942 
 3077      49545F5F 
 3077      203000
 3078              	.LASF91:
 3079 12bb 5F5F494E 		.ascii	"__INT_LEAST8_TYPE__ signed char\000"
 3079      545F4C45 
 3079      41535438 
 3079      5F545950 
 3079      455F5F20 
 3080              	.LASF86:
 3081 12db 5F5F494E 		.ascii	"__INT64_TYPE__ long long int\000"
 3081      5436345F 
 3081      54595045 
 3081      5F5F206C 
 3081      6F6E6720 
 3082              	.LASF171:
 3083 12f8 5F5F464C 		.ascii	"__FLT_MAX_10_EXP__ 38\000"
 3083      545F4D41 
 3083      585F3130 
 3083      5F455850 
 3083      5F5F2033 
 3084              	.LASF302:
 3085 130e 5F5F4C4C 		.ascii	"__LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK\000"
 3085      41434355 
 3085      4D5F4D41 
 3085      585F5F20 
 3085      30583746 
 3086              	.LASF303:
 3087 1338 5F5F4C4C 		.ascii	"__LLACCUM_EPSILON__ 0x1P-31LLK\000"
 3087      41434355 
 3087      4D5F4550 
 3087      53494C4F 
 3087      4E5F5F20 
 3088              	.LASF489:
 3089 1357 5F52414E 		.ascii	"_RAND48_MULT_1 (0xdeec)\000"
 3089      4434385F 
 3089      4D554C54 
 3089      5F312028 
 3089      30786465 
 3090              	.LASF516:
 3091 136f 5F524545 		.ascii	"_REENT_EMERGENCY(ptr) ((ptr)->_emergency)\000"
 3091      4E545F45 
 3091      4D455247 
 3091      454E4359 
 3091      28707472 
 3092              	.LASF506:
 3093 1399 5F524545 		.ascii	"_REENT_RAND_NEXT(ptr) ((ptr)->_new._reent._rand_nex"
 3093      4E545F52 
 3093      414E445F 
 3093      4E455854 
 3093      28707472 
 3094 13cc 742900   		.ascii	"t)\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 69


 3095              	.LASF431:
 3096 13cf 5F53495A 		.ascii	"_SIZE_T_DEFINED \000"
 3096      455F545F 
 3096      44454649 
 3096      4E454420 
 3096      00
 3097              	.LASF256:
 3098 13e0 5F5F554C 		.ascii	"__ULFRACT_MIN__ 0.0ULR\000"
 3098      46524143 
 3098      545F4D49 
 3098      4E5F5F20 
 3098      302E3055 
 3099              	.LASF166:
 3100 13f7 5F5F464C 		.ascii	"__FLT_MANT_DIG__ 24\000"
 3100      545F4D41 
 3100      4E545F44 
 3100      49475F5F 
 3100      20323400 
 3101              	.LASF510:
 3102 140b 5F524545 		.ascii	"_REENT_MP_RESULT(ptr) ((ptr)->_result)\000"
 3102      4E545F4D 
 3102      505F5245 
 3102      53554C54 
 3102      28707472 
 3103              	.LASF324:
 3104 1432 5F5F5553 		.ascii	"__USQ_IBIT__ 0\000"
 3104      515F4942 
 3104      49545F5F 
 3104      203000
 3105              	.LASF445:
 3106 1441 5F574348 		.ascii	"_WCHAR_T_ \000"
 3106      41525F54 
 3106      5F2000
 3107              	.LASF403:
 3108 144c 5F564F4C 		.ascii	"_VOLATILE volatile\000"
 3108      4154494C 
 3108      4520766F 
 3108      6C617469 
 3108      6C6500
 3109              	.LASF522:
 3110 145f 5F524545 		.ascii	"_REENT_MBRTOWC_STATE(ptr) ((ptr)->_new._reent._mbrt"
 3110      4E545F4D 
 3110      4252544F 
 3110      57435F53 
 3110      54415445 
 3111 1492 6F77635F 		.ascii	"owc_state)\000"
 3111      73746174 
 3111      652900
 3112              	.LASF285:
 3113 149d 5F5F5541 		.ascii	"__UACCUM_IBIT__ 16\000"
 3113      4343554D 
 3113      5F494249 
 3113      545F5F20 
 3113      313600
 3114              	.LASF164:
 3115 14b0 5F5F4445 		.ascii	"__DEC_EVAL_METHOD__ 2\000"
 3115      435F4556 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 70


 3115      414C5F4D 
 3115      4554484F 
 3115      445F5F20 
 3116              	.LASF183:
 3117 14c6 5F5F4442 		.ascii	"__DBL_MIN_10_EXP__ (-307)\000"
 3117      4C5F4D49 
 3117      4E5F3130 
 3117      5F455850 
 3117      5F5F2028 
 3118              	.LASF275:
 3119 14e0 5F5F5553 		.ascii	"__USACCUM_IBIT__ 8\000"
 3119      41434355 
 3119      4D5F4942 
 3119      49545F5F 
 3119      203800
 3120              	.LASF135:
 3121 14f3 5F5F5549 		.ascii	"__UINT32_MAX__ 4294967295UL\000"
 3121      4E543332 
 3121      5F4D4158 
 3121      5F5F2034 
 3121      32393439 
 3122              	.LASF373:
 3123 150f 5F5F5448 		.ascii	"__THUMB_INTERWORK__ 1\000"
 3123      554D425F 
 3123      494E5445 
 3123      52574F52 
 3123      4B5F5F20 
 3124              	.LASF239:
 3125 1525 5F5F4652 		.ascii	"__FRACT_FBIT__ 15\000"
 3125      4143545F 
 3125      46424954 
 3125      5F5F2031 
 3125      3500
 3126              	.LASF514:
 3127 1537 5F524545 		.ascii	"_REENT_ASCTIME_BUF(ptr) ((ptr)->_new._reent._asctim"
 3127      4E545F41 
 3127      53435449 
 3127      4D455F42 
 3127      55462870 
 3128 156a 655F6275 		.ascii	"e_buf)\000"
 3128      662900
 3129              	.LASF425:
 3130 1571 5F545F53 		.ascii	"_T_SIZE_ \000"
 3130      495A455F 
 3130      2000
 3131              	.LASF163:
 3132 157b 5F5F464C 		.ascii	"__FLT_EVAL_METHOD__ 0\000"
 3132      545F4556 
 3132      414C5F4D 
 3132      4554484F 
 3132      445F5F20 
 3133              	.LASF500:
 3134 1591 5F524545 		.ascii	"_REENT_CHECK_TM(ptr) \000"
 3134      4E545F43 
 3134      4845434B 
 3134      5F544D28 
 3134      70747229 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 71


 3135              	.LASF388:
 3136 15a7 5F4C4442 		.ascii	"_LDBL_EQ_DBL 1\000"
 3136      4C5F4551 
 3136      5F44424C 
 3136      203100
 3137              	.LASF103:
 3138 15b6 5F5F5549 		.ascii	"__UINT_FAST8_TYPE__ unsigned int\000"
 3138      4E545F46 
 3138      41535438 
 3138      5F545950 
 3138      455F5F20 
 3139              	.LASF386:
 3140 15d7 5F415445 		.ascii	"_ATEXIT_DYNAMIC_ALLOC 1\000"
 3140      5849545F 
 3140      44594E41 
 3140      4D49435F 
 3140      414C4C4F 
 3141              	.LASF279:
 3142 15ef 5F5F4143 		.ascii	"__ACCUM_FBIT__ 15\000"
 3142      43554D5F 
 3142      46424954 
 3142      5F5F2031 
 3142      3500
 3143              	.LASF354:
 3144 1601 5F5F4743 		.ascii	"__GCC_ATOMIC_WCHAR_T_LOCK_FREE 1\000"
 3144      435F4154 
 3144      4F4D4943 
 3144      5F574348 
 3144      41525F54 
 3145              	.LASF216:
 3146 1622 5F5F4445 		.ascii	"__DEC64_MIN_EXP__ (-382)\000"
 3146      4336345F 
 3146      4D494E5F 
 3146      4558505F 
 3146      5F20282D 
 3147              	.LASF295:
 3148 163b 5F5F554C 		.ascii	"__ULACCUM_IBIT__ 32\000"
 3148      41434355 
 3148      4D5F4942 
 3148      49545F5F 
 3148      20333200 
 3149              	.LASF27:
 3150 164f 2F557365 		.ascii	"/Users/stevenparker/project/lpc1114/arduino\000"
 3150      72732F73 
 3150      74657665 
 3150      6E706172 
 3150      6B65722F 
 3151              	.LASF339:
 3152 167b 5F5F5553 		.ascii	"__USA_FBIT__ 16\000"
 3152      415F4642 
 3152      49545F5F 
 3152      20313600 
 3153              	.LASF50:
 3154 168b 5F5F4154 		.ascii	"__ATOMIC_ACQUIRE 2\000"
 3154      4F4D4943 
 3154      5F414351 
 3154      55495245 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 72


 3154      203200
 3155              	.LASF312:
 3156 169e 5F5F4851 		.ascii	"__HQ_IBIT__ 0\000"
 3156      5F494249 
 3156      545F5F20 
 3156      3000
 3157              	.LASF76:
 3158 16ac 5F5F5743 		.ascii	"__WCHAR_TYPE__ unsigned int\000"
 3158      4841525F 
 3158      54595045 
 3158      5F5F2075 
 3158      6E736967 
 3159              	.LASF436:
 3160 16c8 5F53495A 		.ascii	"_SIZET_ \000"
 3160      45545F20 
 3160      00
 3161              	.LASF187:
 3162 16d1 5F5F4442 		.ascii	"__DBL_MAX__ double(1.7976931348623157e+308L)\000"
 3162      4C5F4D41 
 3162      585F5F20 
 3162      646F7562 
 3162      6C652831 
 3163              	.LASF400:
 3164 16fe 5F414E44 		.ascii	"_AND ,\000"
 3164      202C00
 3165              	.LASF387:
 3166 1705 5F484156 		.ascii	"_HAVE_LONG_DOUBLE 1\000"
 3166      455F4C4F 
 3166      4E475F44 
 3166      4F55424C 
 3166      45203100 
 3167              	.LASF461:
 3168 1719 5F5F5F69 		.ascii	"___int_least16_t_defined 1\000"
 3168      6E745F6C 
 3168      65617374 
 3168      31365F74 
 3168      5F646566 
 3169              	.LASF141:
 3170 1734 5F5F494E 		.ascii	"__INT_LEAST32_MAX__ 2147483647L\000"
 3170      545F4C45 
 3170      41535433 
 3170      325F4D41 
 3170      585F5F20 
 3171              	.LASF165:
 3172 1754 5F5F464C 		.ascii	"__FLT_RADIX__ 2\000"
 3172      545F5241 
 3172      4449585F 
 3172      5F203200 
 3173              	.LASF212:
 3174 1764 5F5F4445 		.ascii	"__DEC32_MAX__ 9.999999E96DF\000"
 3174      4333325F 
 3174      4D41585F 
 3174      5F20392E 
 3174      39393939 
 3175              	.LASF249:
 3176 1780 5F5F4C46 		.ascii	"__LFRACT_FBIT__ 31\000"
 3176      52414354 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 73


 3176      5F464249 
 3176      545F5F20 
 3176      333100
 3177              	.LASF92:
 3178 1793 5F5F494E 		.ascii	"__INT_LEAST16_TYPE__ short int\000"
 3178      545F4C45 
 3178      41535431 
 3178      365F5459 
 3178      50455F5F 
 3179              	.LASF151:
 3180 17b2 5F5F5549 		.ascii	"__UINT_LEAST64_MAX__ 18446744073709551615ULL\000"
 3180      4E545F4C 
 3180      45415354 
 3180      36345F4D 
 3180      41585F5F 
 3181              	.LASF455:
 3182 17df 5F5F6E65 		.ascii	"__need_wchar_t\000"
 3182      65645F77 
 3182      63686172 
 3182      5F7400
 3183              	.LASF138:
 3184 17ee 5F5F494E 		.ascii	"__INT8_C(c) c\000"
 3184      54385F43 
 3184      28632920 
 3184      6300
 3185              	.LASF463:
 3186 17fc 5F5F5F69 		.ascii	"___int_least32_t_defined 1\000"
 3186      6E745F6C 
 3186      65617374 
 3186      33325F74 
 3186      5F646566 
 3187              	.LASF289:
 3188 1817 5F5F4C41 		.ascii	"__LACCUM_FBIT__ 31\000"
 3188      4343554D 
 3188      5F464249 
 3188      545F5F20 
 3188      333100
 3189              	.LASF248:
 3190 182a 5F5F5546 		.ascii	"__UFRACT_EPSILON__ 0x1P-16UR\000"
 3190      52414354 
 3190      5F455053 
 3190      494C4F4E 
 3190      5F5F2030 
 3191              	.LASF357:
 3192 1847 5F5F4743 		.ascii	"__GCC_ATOMIC_LONG_LOCK_FREE 1\000"
 3192      435F4154 
 3192      4F4D4943 
 3192      5F4C4F4E 
 3192      475F4C4F 
 3193              	.LASF147:
 3194 1865 5F5F5549 		.ascii	"__UINT_LEAST16_MAX__ 65535\000"
 3194      4E545F4C 
 3194      45415354 
 3194      31365F4D 
 3194      41585F5F 
 3195              	.LASF325:
 3196 1880 5F5F5544 		.ascii	"__UDQ_FBIT__ 64\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 74


 3196      515F4642 
 3196      49545F5F 
 3196      20363400 
 3197              	.LASF457:
 3198 1890 5F4D4143 		.ascii	"_MACHINE__DEFAULT_TYPES_H \000"
 3198      48494E45 
 3198      5F5F4445 
 3198      4641554C 
 3198      545F5459 
 3199              	.LASF32:
 3200 18ab 5F5F4945 		.ascii	"__IEEE_LITTLE_ENDIAN \000"
 3200      45455F4C 
 3200      4954544C 
 3200      455F454E 
 3200      4449414E 
 3201              	.LASF418:
 3202 18c1 5F454C49 		.ascii	"_ELIDABLE_INLINE extern __inline__ _ATTRIBUTE ((__a"
 3202      4441424C 
 3202      455F494E 
 3202      4C494E45 
 3202      20657874 
 3203 18f4 6C776179 		.ascii	"lways_inline__))\000"
 3203      735F696E 
 3203      6C696E65 
 3203      5F5F2929 
 3203      00
 3204              	.LASF327:
 3205 1905 5F5F5554 		.ascii	"__UTQ_FBIT__ 128\000"
 3205      515F4642 
 3205      49545F5F 
 3205      20313238 
 3205      00
 3206              	.LASF130:
 3207 1916 5F5F494E 		.ascii	"__INT16_MAX__ 32767\000"
 3207      5431365F 
 3207      4D41585F 
 3207      5F203332 
 3207      37363700 
 3208              	.LASF5:
 3209 192a 6C6F6E67 		.ascii	"long long int\000"
 3209      206C6F6E 
 3209      6720696E 
 3209      7400
 3210              	.LASF283:
 3211 1938 5F5F4143 		.ascii	"__ACCUM_EPSILON__ 0x1P-15K\000"
 3211      43554D5F 
 3211      45505349 
 3211      4C4F4E5F 
 3211      5F203078 
 3212              	.LASF498:
 3213 1953 5F524545 		.ascii	"_REENT_CHECK_RAND48(ptr) \000"
 3213      4E545F43 
 3213      4845434B 
 3213      5F52414E 
 3213      44343828 
 3214              	.LASF350:
 3215 196d 5F5F4743 		.ascii	"__GCC_ATOMIC_BOOL_LOCK_FREE 1\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 75


 3215      435F4154 
 3215      4F4D4943 
 3215      5F424F4F 
 3215      4C5F4C4F 
 3216              	.LASF201:
 3217 198b 5F5F4C44 		.ascii	"__LDBL_MAX__ 1.7976931348623157e+308L\000"
 3217      424C5F4D 
 3217      41585F5F 
 3217      20312E37 
 3217      39373639 
 3218              	.LASF56:
 3219 19b1 5F5F4649 		.ascii	"__FINITE_MATH_ONLY__ 0\000"
 3219      4E495445 
 3219      5F4D4154 
 3219      485F4F4E 
 3219      4C595F5F 
 3220              	.LASF272:
 3221 19c8 5F5F5341 		.ascii	"__SACCUM_MAX__ 0X7FFFP-7HK\000"
 3221      4343554D 
 3221      5F4D4158 
 3221      5F5F2030 
 3221      58374646 
 3222              	.LASF366:
 3223 19e3 5F5F6172 		.ascii	"__arm__ 1\000"
 3223      6D5F5F20 
 3223      3100
 3224              	.LASF194:
 3225 19ed 5F5F4C44 		.ascii	"__LDBL_MANT_DIG__ 53\000"
 3225      424C5F4D 
 3225      414E545F 
 3225      4449475F 
 3225      5F203533 
 3226              	.LASF413:
 3227 1a02 5F434153 		.ascii	"_CAST_VOID (void)\000"
 3227      545F564F 
 3227      49442028 
 3227      766F6964 
 3227      2900
 3228              	.LASF318:
 3229 1a14 5F5F5451 		.ascii	"__TQ_IBIT__ 0\000"
 3229      5F494249 
 3229      545F5F20 
 3229      3000
 3230              	.LASF337:
 3231 1a22 5F5F5548 		.ascii	"__UHA_FBIT__ 8\000"
 3231      415F4642 
 3231      49545F5F 
 3231      203800
 3232              	.LASF113:
 3233 1a31 5F5F5348 		.ascii	"__SHRT_MAX__ 32767\000"
 3233      52545F4D 
 3233      41585F5F 
 3233      20333237 
 3233      363700
 3234              	.LASF20:
 3235 1a44 5F5A646C 		.ascii	"_ZdlPv\000"
 3235      507600
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 76


 3236              	.LASF420:
 3237 1a4b 5F5F6E65 		.ascii	"__need_wchar_t \000"
 3237      65645F77 
 3237      63686172 
 3237      5F742000 
 3238              	.LASF181:
 3239 1a5b 5F5F4442 		.ascii	"__DBL_DIG__ 15\000"
 3239      4C5F4449 
 3239      475F5F20 
 3239      313500
 3240              	.LASF481:
 3241 1a6a 5F4E554C 		.ascii	"_NULL 0\000"
 3241      4C203000 
 3242              	.LASF378:
 3243 1a72 5F5F454C 		.ascii	"__ELF__ 1\000"
 3243      465F5F20 
 3243      3100
 3244              	.LASF524:
 3245 1a7c 5F524545 		.ascii	"_REENT_WCRTOMB_STATE(ptr) ((ptr)->_new._reent._wcrt"
 3245      4E545F57 
 3245      4352544F 
 3245      4D425F53 
 3245      54415445 
 3246 1aaf 6F6D625F 		.ascii	"omb_state)\000"
 3246      73746174 
 3246      652900
 3247              	.LASF359:
 3248 1aba 5F5F4743 		.ascii	"__GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1\000"
 3248      435F4154 
 3248      4F4D4943 
 3248      5F544553 
 3248      545F414E 
 3249              	.LASF361:
 3250 1ade 5F5F4743 		.ascii	"__GCC_HAVE_DWARF2_CFI_ASM 1\000"
 3250      435F4841 
 3250      56455F44 
 3250      57415246 
 3250      325F4346 
 3251              	.LASF244:
 3252 1afa 5F5F5546 		.ascii	"__UFRACT_FBIT__ 16\000"
 3252      52414354 
 3252      5F464249 
 3252      545F5F20 
 3252      313600
 3253              	.LASF214:
 3254 1b0d 5F5F4445 		.ascii	"__DEC32_SUBNORMAL_MIN__ 0.000001E-95DF\000"
 3254      4333325F 
 3254      5355424E 
 3254      4F524D41 
 3254      4C5F4D49 
 3255              	.LASF178:
 3256 1b34 5F5F464C 		.ascii	"__FLT_HAS_INFINITY__ 1\000"
 3256      545F4841 
 3256      535F494E 
 3256      46494E49 
 3256      54595F5F 
 3257              	.LASF541:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 77


 3258 1b4b 73747274 		.ascii	"strtodf strtof\000"
 3258      6F646620 
 3258      73747274 
 3258      6F6600
 3259              	.LASF41:
 3260 1b5a 5F5F5354 		.ascii	"__STDC__ 1\000"
 3260      44435F5F 
 3260      203100
 3261              	.LASF448:
 3262 1b65 5F574348 		.ascii	"_WCHAR_T_DEFINED \000"
 3262      41525F54 
 3262      5F444546 
 3262      494E4544 
 3262      2000
 3263              	.LASF58:
 3264 1b77 5F5F5349 		.ascii	"__SIZEOF_LONG__ 4\000"
 3264      5A454F46 
 3264      5F4C4F4E 
 3264      475F5F20 
 3264      3400
 3265              	.LASF503:
 3266 1b89 5F524545 		.ascii	"_REENT_CHECK_MISC(ptr) \000"
 3266      4E545F43 
 3266      4845434B 
 3266      5F4D4953 
 3266      43287074 
 3267              	.LASF184:
 3268 1ba1 5F5F4442 		.ascii	"__DBL_MAX_EXP__ 1024\000"
 3268      4C5F4D41 
 3268      585F4558 
 3268      505F5F20 
 3268      31303234 
 3269              	.LASF437:
 3270 1bb6 5F5F7369 		.ascii	"__size_t \000"
 3270      7A655F74 
 3270      2000
 3271              	.LASF53:
 3272 1bc0 5F5F4154 		.ascii	"__ATOMIC_CONSUME 1\000"
 3272      4F4D4943 
 3272      5F434F4E 
 3272      53554D45 
 3272      203100
 3273              	.LASF490:
 3274 1bd3 5F52414E 		.ascii	"_RAND48_MULT_2 (0x0005)\000"
 3274      4434385F 
 3274      4D554C54 
 3274      5F322028 
 3274      30783030 
 3275              	.LASF422:
 3276 1beb 5F5F5349 		.ascii	"__SIZE_T__ \000"
 3276      5A455F54 
 3276      5F5F2000 
 3277              	.LASF540:
 3278 1bf7 4D425F43 		.ascii	"MB_CUR_MAX __locale_mb_cur_max()\000"
 3278      55525F4D 
 3278      4158205F 
 3278      5F6C6F63 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 78


 3278      616C655F 
 3279              	.LASF77:
 3280 1c18 5F5F5749 		.ascii	"__WINT_TYPE__ unsigned int\000"
 3280      4E545F54 
 3280      5950455F 
 3280      5F20756E 
 3280      7369676E 
 3281              	.LASF161:
 3282 1c33 5F5F494E 		.ascii	"__INTPTR_MAX__ 2147483647\000"
 3282      54505452 
 3282      5F4D4158 
 3282      5F5F2032 
 3282      31343734 
 3283              	.LASF254:
 3284 1c4d 5F5F554C 		.ascii	"__ULFRACT_FBIT__ 32\000"
 3284      46524143 
 3284      545F4642 
 3284      49545F5F 
 3284      20333200 
 3285              	.LASF17:
 3286 1c61 73697A65 		.ascii	"size\000"
 3286      00
 3287              	.LASF281:
 3288 1c66 5F5F4143 		.ascii	"__ACCUM_MIN__ (-0X1P15K-0X1P15K)\000"
 3288      43554D5F 
 3288      4D494E5F 
 3288      5F20282D 
 3288      30583150 
 3289              	.LASF62:
 3290 1c87 5F5F5349 		.ascii	"__SIZEOF_DOUBLE__ 8\000"
 3290      5A454F46 
 3290      5F444F55 
 3290      424C455F 
 3290      5F203800 
 3291              	.LASF46:
 3292 1c9b 5F5F474E 		.ascii	"__GNUC_PATCHLEVEL__ 3\000"
 3292      55435F50 
 3292      41544348 
 3292      4C455645 
 3292      4C5F5F20 
 3293              	.LASF377:
 3294 1cb1 5F5F4758 		.ascii	"__GXX_TYPEINFO_EQUALITY_INLINE 0\000"
 3294      585F5459 
 3294      5045494E 
 3294      464F5F45 
 3294      5155414C 
 3295              	.LASF530:
 3296 1cd2 5F5F4154 		.ascii	"__ATTRIBUTE_IMPURE_PTR__ \000"
 3296      54524942 
 3296      5554455F 
 3296      494D5055 
 3296      52455F50 
 3297              	.LASF47:
 3298 1cec 5F5F5645 		.ascii	"__VERSION__ \"4.7.3 20121207 (release) [ARM/embedde"
 3298      5253494F 
 3298      4E5F5F20 
 3298      22342E37 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 79


 3298      2E332032 
 3299 1d1e 642D345F 		.ascii	"d-4_7-branch revision 194305]\"\000"
 3299      372D6272 
 3299      616E6368 
 3299      20726576 
 3299      6973696F 
 3300              	.LASF242:
 3301 1d3d 5F5F4652 		.ascii	"__FRACT_MAX__ 0X7FFFP-15R\000"
 3301      4143545F 
 3301      4D41585F 
 3301      5F203058 
 3301      37464646 
 3302              	.LASF120:
 3303 1d57 5F5F5749 		.ascii	"__WINT_MIN__ 0U\000"
 3303      4E545F4D 
 3303      494E5F5F 
 3303      20305500 
 3304              	.LASF294:
 3305 1d67 5F5F554C 		.ascii	"__ULACCUM_FBIT__ 32\000"
 3305      41434355 
 3305      4D5F4642 
 3305      49545F5F 
 3305      20333200 
 3306              	.LASF246:
 3307 1d7b 5F5F5546 		.ascii	"__UFRACT_MIN__ 0.0UR\000"
 3307      52414354 
 3307      5F4D494E 
 3307      5F5F2030 
 3307      2E305552 
 3308              	.LASF224:
 3309 1d90 5F5F4445 		.ascii	"__DEC128_MAX_EXP__ 6145\000"
 3309      43313238 
 3309      5F4D4158 
 3309      5F455850 
 3309      5F5F2036 
 3310              	.LASF528:
 3311 1da8 5F524545 		.ascii	"_REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._ge"
 3311      4E545F47 
 3311      45544441 
 3311      54455F45 
 3311      52525F50 
 3312 1ddb 74646174 		.ascii	"tdate_err))\000"
 3312      655F6572 
 3312      72292900 
 3313              	.LASF334:
 3314 1de7 5F5F4441 		.ascii	"__DA_IBIT__ 32\000"
 3314      5F494249 
 3314      545F5F20 
 3314      333200
 3315              	.LASF202:
 3316 1df6 5F5F4C44 		.ascii	"__LDBL_MIN__ 2.2250738585072014e-308L\000"
 3316      424C5F4D 
 3316      494E5F5F 
 3316      20322E32 
 3316      32353037 
 3317              	.LASF22:
 3318 1e1c 5F5F6378 		.ascii	"__cxa_guard_acquire\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 80


 3318      615F6775 
 3318      6172645F 
 3318      61637175 
 3318      69726500 
 3319              	.LASF206:
 3320 1e30 5F5F4C44 		.ascii	"__LDBL_HAS_INFINITY__ 1\000"
 3320      424C5F48 
 3320      41535F49 
 3320      4E46494E 
 3320      4954595F 
 3321              	.LASF12:
 3322 1e48 5F5F6775 		.ascii	"__guard\000"
 3322      61726400 
 3323              	.LASF499:
 3324 1e50 5F524545 		.ascii	"_REENT_CHECK_MP(ptr) \000"
 3324      4E545F43 
 3324      4845434B 
 3324      5F4D5028 
 3324      70747229 
 3325              	.LASF196:
 3326 1e66 5F5F4C44 		.ascii	"__LDBL_MIN_EXP__ (-1021)\000"
 3326      424C5F4D 
 3326      494E5F45 
 3326      58505F5F 
 3326      20282D31 
 3327              	.LASF479:
 3328 1e7f 5F57494E 		.ascii	"_WINT_T \000"
 3328      545F5420 
 3328      00
 3329              	.LASF264:
 3330 1e88 5F5F554C 		.ascii	"__ULLFRACT_FBIT__ 64\000"
 3330      4C465241 
 3330      43545F46 
 3330      4249545F 
 3330      5F203634 
 3331              	.LASF363:
 3332 1e9d 5F5F5349 		.ascii	"__SIZEOF_WCHAR_T__ 4\000"
 3332      5A454F46 
 3332      5F574348 
 3332      41525F54 
 3332      5F5F2034 
 3333              	.LASF174:
 3334 1eb2 5F5F464C 		.ascii	"__FLT_MIN__ 1.1754943508222875e-38F\000"
 3334      545F4D49 
 3334      4E5F5F20 
 3334      312E3137 
 3334      35343934 
 3335              	.LASF531:
 3336 1ed6 5F524545 		.ascii	"_REENT _impure_ptr\000"
 3336      4E54205F 
 3336      696D7075 
 3336      72655F70 
 3336      747200
 3337              	.LASF71:
 3338 1ee9 5F5F464C 		.ascii	"__FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__\000"
 3338      4F41545F 
 3338      574F5244 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 81


 3338      5F4F5244 
 3338      45525F5F 
 3339              	.LASF282:
 3340 1f16 5F5F4143 		.ascii	"__ACCUM_MAX__ 0X7FFFFFFFP-15K\000"
 3340      43554D5F 
 3340      4D41585F 
 3340      5F203058 
 3340      37464646 
 3341              	.LASF245:
 3342 1f34 5F5F5546 		.ascii	"__UFRACT_IBIT__ 0\000"
 3342      52414354 
 3342      5F494249 
 3342      545F5F20 
 3342      3000
 3343              	.LASF208:
 3344 1f46 5F5F4445 		.ascii	"__DEC32_MANT_DIG__ 7\000"
 3344      4333325F 
 3344      4D414E54 
 3344      5F444947 
 3344      5F5F2037 
 3345              	.LASF438:
 3346 1f5b 5F5F6E65 		.ascii	"__need_size_t\000"
 3346      65645F73 
 3346      697A655F 
 3346      7400
 3347              	.LASF128:
 3348 1f69 5F5F5349 		.ascii	"__SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)\000"
 3348      475F4154 
 3348      4F4D4943 
 3348      5F4D494E 
 3348      5F5F2028 
 3349              	.LASF263:
 3350 1f96 5F5F4C4C 		.ascii	"__LLFRACT_EPSILON__ 0x1P-63LLR\000"
 3350      46524143 
 3350      545F4550 
 3350      53494C4F 
 3350      4E5F5F20 
 3351              	.LASF509:
 3352 1fb5 5F524545 		.ascii	"_REENT_RAND48_ADD(ptr) ((ptr)->_new._reent._r48._ad"
 3352      4E545F52 
 3352      414E4434 
 3352      385F4144 
 3352      44287074 
 3353 1fe8 642900   		.ascii	"d)\000"
 3354              	.LASF18:
 3355 1feb 6F706572 		.ascii	"operator delete\000"
 3355      61746F72 
 3355      2064656C 
 3355      65746500 
 3356              	.LASF199:
 3357 1ffb 5F5F4C44 		.ascii	"__LDBL_MAX_10_EXP__ 308\000"
 3357      424C5F4D 
 3357      41585F31 
 3357      305F4558 
 3357      505F5F20 
 3358              	.LASF229:
 3359 2013 5F5F5346 		.ascii	"__SFRACT_FBIT__ 7\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 82


 3359      52414354 
 3359      5F464249 
 3359      545F5F20 
 3359      3700
 3360              	.LASF81:
 3361 2025 5F5F4348 		.ascii	"__CHAR32_TYPE__ long unsigned int\000"
 3361      41523332 
 3361      5F545950 
 3361      455F5F20 
 3361      6C6F6E67 
 3362              	.LASF13:
 3363 2047 6F706572 		.ascii	"operator new\000"
 3363      61746F72 
 3363      206E6577 
 3363      00
 3364              	.LASF419:
 3365 2054 5F5F6E65 		.ascii	"__need_size_t \000"
 3365      65645F73 
 3365      697A655F 
 3365      742000
 3366              	.LASF426:
 3367 2063 5F545F53 		.ascii	"_T_SIZE \000"
 3367      495A4520 
 3367      00
 3368              	.LASF375:
 3369 206c 5F5F4152 		.ascii	"__ARM_PCS 1\000"
 3369      4D5F5043 
 3369      53203100 
 3370              	.LASF149:
 3371 2078 5F5F5549 		.ascii	"__UINT_LEAST32_MAX__ 4294967295UL\000"
 3371      4E545F4C 
 3371      45415354 
 3371      33325F4D 
 3371      41585F5F 
 3372              	.LASF411:
 3373 209a 5F444546 		.ascii	"_DEFUN(name,arglist,args) name(args)\000"
 3373      554E286E 
 3373      616D652C 
 3373      6172676C 
 3373      6973742C 
 3374              	.LASF240:
 3375 20bf 5F5F4652 		.ascii	"__FRACT_IBIT__ 0\000"
 3375      4143545F 
 3375      49424954 
 3375      5F5F2030 
 3375      00
 3376              	.LASF468:
 3377 20d0 5F5F4C4F 		.ascii	"__LOCK_INIT_RECURSIVE(class,lock) static int lock ="
 3377      434B5F49 
 3377      4E49545F 
 3377      52454355 
 3377      52534956 
 3378 2103 20303B00 		.ascii	" 0;\000"
 3379              	.LASF97:
 3380 2107 5F5F5549 		.ascii	"__UINT_LEAST32_TYPE__ long unsigned int\000"
 3380      4E545F4C 
 3380      45415354 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 83


 3380      33325F54 
 3380      5950455F 
 3381              	.LASF315:
 3382 212f 5F5F4451 		.ascii	"__DQ_FBIT__ 63\000"
 3382      5F464249 
 3382      545F5F20 
 3382      363300
 3383              	.LASF277:
 3384 213e 5F5F5553 		.ascii	"__USACCUM_MAX__ 0XFFFFP-8UHK\000"
 3384      41434355 
 3384      4D5F4D41 
 3384      585F5F20 
 3384      30584646 
 3385              	.LASF469:
 3386 215b 5F5F6C6F 		.ascii	"__lock_init(lock) (_CAST_VOID 0)\000"
 3386      636B5F69 
 3386      6E697428 
 3386      6C6F636B 
 3386      2920285F 
 3387              	.LASF442:
 3388 217c 5F545F57 		.ascii	"_T_WCHAR_ \000"
 3388      43484152 
 3388      5F2000
 3389              	.LASF298:
 3390 2187 5F5F554C 		.ascii	"__ULACCUM_EPSILON__ 0x1P-32ULK\000"
 3390      41434355 
 3390      4D5F4550 
 3390      53494C4F 
 3390      4E5F5F20 
 3391              	.LASF38:
 3392 21a6 5F4D4143 		.ascii	"_MACHINE__TYPES_H \000"
 3392      48494E45 
 3392      5F5F5459 
 3392      5045535F 
 3392      482000
 3393              	.LASF133:
 3394 21b9 5F5F5549 		.ascii	"__UINT8_MAX__ 255\000"
 3394      4E54385F 
 3394      4D41585F 
 3394      5F203235 
 3394      3500
 3395              	.LASF292:
 3396 21cb 5F5F4C41 		.ascii	"__LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK\000"
 3396      4343554D 
 3396      5F4D4158 
 3396      5F5F2030 
 3396      58374646 
 3397              	.LASF69:
 3398 21f3 5F5F4F52 		.ascii	"__ORDER_PDP_ENDIAN__ 3412\000"
 3398      4445525F 
 3398      5044505F 
 3398      454E4449 
 3398      414E5F5F 
 3399              	.LASF23:
 3400 220d 5F5F6378 		.ascii	"__cxa_guard_release\000"
 3400      615F6775 
 3400      6172645F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 84


 3400      72656C65 
 3400      61736500 
 3401              	.LASF314:
 3402 2221 5F5F5351 		.ascii	"__SQ_IBIT__ 0\000"
 3402      5F494249 
 3402      545F5F20 
 3402      3000
 3403              	.LASF10:
 3404 222f 63686172 		.ascii	"char\000"
 3404      00
 3405              	.LASF172:
 3406 2234 5F5F464C 		.ascii	"__FLT_DECIMAL_DIG__ 9\000"
 3406      545F4445 
 3406      43494D41 
 3406      4C5F4449 
 3406      475F5F20 
 3407              	.LASF533:
 3408 224a 5F4E4557 		.ascii	"_NEWLIB_ALLOCA_H \000"
 3408      4C49425F 
 3408      414C4C4F 
 3408      43415F48 
 3408      2000
 3409              	.LASF227:
 3410 225c 5F5F4445 		.ascii	"__DEC128_EPSILON__ 1E-33DL\000"
 3410      43313238 
 3410      5F455053 
 3410      494C4F4E 
 3410      5F5F2031 
 3411              	.LASF119:
 3412 2277 5F5F5749 		.ascii	"__WINT_MAX__ 4294967295U\000"
 3412      4E545F4D 
 3412      41585F5F 
 3412      20343239 
 3412      34393637 
 3413              	.LASF319:
 3414 2290 5F5F5551 		.ascii	"__UQQ_FBIT__ 8\000"
 3414      515F4642 
 3414      49545F5F 
 3414      203800
 3415              	.LASF228:
 3416 229f 5F5F4445 		.ascii	"__DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000"
 3416      43313238 
 3416      5F535542 
 3416      4E4F524D 
 3416      414C5F4D 
 3417 22d2 30303030 		.ascii	"000000001E-6143DL\000"
 3417      30303030 
 3417      31452D36 
 3417      31343344 
 3417      4C00
 3418              	.LASF384:
 3419 22e4 5F4D425F 		.ascii	"_MB_LEN_MAX 1\000"
 3419      4C454E5F 
 3419      4D415820 
 3419      3100
 3420              	.LASF159:
 3421 22f2 5F5F5549 		.ascii	"__UINT_FAST32_MAX__ 4294967295U\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 85


 3421      4E545F46 
 3421      41535433 
 3421      325F4D41 
 3421      585F5F20 
 3422              	.LASF3:
 3423 2312 73686F72 		.ascii	"short int\000"
 3423      7420696E 
 3423      7400
 3424              	.LASF287:
 3425 231c 5F5F5541 		.ascii	"__UACCUM_MAX__ 0XFFFFFFFFP-16UK\000"
 3425      4343554D 
 3425      5F4D4158 
 3425      5F5F2030 
 3425      58464646 
 3426              	.LASF390:
 3427 233c 5F5F5241 		.ascii	"__RAND_MAX\000"
 3427      4E445F4D 
 3427      415800
 3428              	.LASF217:
 3429 2347 5F5F4445 		.ascii	"__DEC64_MAX_EXP__ 385\000"
 3429      4336345F 
 3429      4D41585F 
 3429      4558505F 
 3429      5F203338 
 3430              	.LASF321:
 3431 235d 5F5F5548 		.ascii	"__UHQ_FBIT__ 16\000"
 3431      515F4642 
 3431      49545F5F 
 3431      20313600 
 3432              	.LASF85:
 3433 236d 5F5F494E 		.ascii	"__INT32_TYPE__ long int\000"
 3433      5433325F 
 3433      54595045 
 3433      5F5F206C 
 3433      6F6E6720 
 3434              	.LASF472:
 3435 2385 5F5F6C6F 		.ascii	"__lock_close_recursive(lock) (_CAST_VOID 0)\000"
 3435      636B5F63 
 3435      6C6F7365 
 3435      5F726563 
 3435      75727369 
 3436              	.LASF7:
 3437 23b1 6C6F6E67 		.ascii	"long int\000"
 3437      20696E74 
 3437      00
 3438              	.LASF198:
 3439 23ba 5F5F4C44 		.ascii	"__LDBL_MAX_EXP__ 1024\000"
 3439      424C5F4D 
 3439      41585F45 
 3439      58505F5F 
 3439      20313032 
 3440              	.LASF313:
 3441 23d0 5F5F5351 		.ascii	"__SQ_FBIT__ 31\000"
 3441      5F464249 
 3441      545F5F20 
 3441      333100
 3442              	.LASF458:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 86


 3443 23df 5F5F4558 		.ascii	"__EXP(x) __ ##x ##__\000"
 3443      50287829 
 3443      205F5F20 
 3443      23237820 
 3443      23235F5F 
 3444              	.LASF456:
 3445 23f4 5F5F6E65 		.ascii	"__need_NULL\000"
 3445      65645F4E 
 3445      554C4C00 
 3446              	.LASF251:
 3447 2400 5F5F4C46 		.ascii	"__LFRACT_MIN__ (-0.5LR-0.5LR)\000"
 3447      52414354 
 3447      5F4D494E 
 3447      5F5F2028 
 3447      2D302E35 
 3448              	.LASF347:
 3449 241e 5F5F474E 		.ascii	"__GNUC_GNU_INLINE__ 1\000"
 3449      55435F47 
 3449      4E555F49 
 3449      4E4C494E 
 3449      455F5F20 
 3450              	.LASF73:
 3451 2434 5F5F474E 		.ascii	"__GNUG__ 4\000"
 3451      55475F5F 
 3451      203400
 3452              	.LASF26:
 3453 243f 6E65772E 		.ascii	"new.cpp\000"
 3453      63707000 
 3454              	.LASF207:
 3455 2447 5F5F4C44 		.ascii	"__LDBL_HAS_QUIET_NAN__ 1\000"
 3455      424C5F48 
 3455      41535F51 
 3455      55494554 
 3455      5F4E414E 
 3456              	.LASF83:
 3457 2460 5F5F494E 		.ascii	"__INT8_TYPE__ signed char\000"
 3457      54385F54 
 3457      5950455F 
 3457      5F207369 
 3457      676E6564 
 3458              	.LASF346:
 3459 247a 5F5F5553 		.ascii	"__USER_LABEL_PREFIX__ \000"
 3459      45525F4C 
 3459      4142454C 
 3459      5F505245 
 3459      4649585F 
 3460              	.LASF483:
 3461 2491 5F415445 		.ascii	"_ATEXIT_SIZE 32\000"
 3461      5849545F 
 3461      53495A45 
 3461      20333200 
 3462              	.LASF389:
 3463 24a1 5F504F49 		.ascii	"_POINTER_INT long\000"
 3463      4E544552 
 3463      5F494E54 
 3463      206C6F6E 
 3463      6700
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 87


 3464              	.LASF36:
 3465 24b3 5F535953 		.ascii	"_SYS_REENT_H_ \000"
 3465      5F524545 
 3465      4E545F48 
 3465      5F2000
 3466              	.LASF424:
 3467 24c2 5F535953 		.ascii	"_SYS_SIZE_T_H \000"
 3467      5F53495A 
 3467      455F545F 
 3467      482000
 3468              	.LASF140:
 3469 24d1 5F5F494E 		.ascii	"__INT16_C(c) c\000"
 3469      5431365F 
 3469      43286329 
 3469      206300
 3470              	.LASF317:
 3471 24e0 5F5F5451 		.ascii	"__TQ_FBIT__ 127\000"
 3471      5F464249 
 3471      545F5F20 
 3471      31323700 
 3472              	.LASF238:
 3473 24f0 5F5F5553 		.ascii	"__USFRACT_EPSILON__ 0x1P-8UHR\000"
 3473      46524143 
 3473      545F4550 
 3473      53494C4F 
 3473      4E5F5F20 
 3474              	.LASF160:
 3475 250e 5F5F5549 		.ascii	"__UINT_FAST64_MAX__ 18446744073709551615ULL\000"
 3475      4E545F46 
 3475      41535436 
 3475      345F4D41 
 3475      585F5F20 
 3476              	.LASF305:
 3477 253a 5F5F554C 		.ascii	"__ULLACCUM_IBIT__ 32\000"
 3477      4C414343 
 3477      554D5F49 
 3477      4249545F 
 3477      5F203332 
 3478              	.LASF132:
 3479 254f 5F5F494E 		.ascii	"__INT64_MAX__ 9223372036854775807LL\000"
 3479      5436345F 
 3479      4D41585F 
 3479      5F203932 
 3479      32333337 
 3480              	.LASF234:
 3481 2573 5F5F5553 		.ascii	"__USFRACT_FBIT__ 8\000"
 3481      46524143 
 3481      545F4642 
 3481      49545F5F 
 3481      203800
 3482              	.LASF188:
 3483 2586 5F5F4442 		.ascii	"__DBL_MIN__ double(2.2250738585072014e-308L)\000"
 3483      4C5F4D49 
 3483      4E5F5F20 
 3483      646F7562 
 3483      6C652832 
 3484              	.LASF311:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 88


 3485 25b3 5F5F4851 		.ascii	"__HQ_FBIT__ 15\000"
 3485      5F464249 
 3485      545F5F20 
 3485      313500
 3486              	.LASF158:
 3487 25c2 5F5F5549 		.ascii	"__UINT_FAST16_MAX__ 4294967295U\000"
 3487      4E545F46 
 3487      41535431 
 3487      365F4D41 
 3487      585F5F20 
 3488              	.LASF338:
 3489 25e2 5F5F5548 		.ascii	"__UHA_IBIT__ 8\000"
 3489      415F4942 
 3489      49545F5F 
 3489      203800
 3490              	.LASF507:
 3491 25f1 5F524545 		.ascii	"_REENT_RAND48_SEED(ptr) ((ptr)->_new._reent._r48._s"
 3491      4E545F52 
 3491      414E4434 
 3491      385F5345 
 3491      45442870 
 3492 2624 65656429 		.ascii	"eed)\000"
 3492      00
 3493              	.LASF230:
 3494 2629 5F5F5346 		.ascii	"__SFRACT_IBIT__ 0\000"
 3494      52414354 
 3494      5F494249 
 3494      545F5F20 
 3494      3000
 3495              	.LASF396:
 3496 263b 5F424547 		.ascii	"_BEGIN_STD_C extern \"C\" {\000"
 3496      494E5F53 
 3496      54445F43 
 3496      20657874 
 3496      65726E20 
 3497              	.LASF59:
 3498 2655 5F5F5349 		.ascii	"__SIZEOF_LONG_LONG__ 8\000"
 3498      5A454F46 
 3498      5F4C4F4E 
 3498      475F4C4F 
 3498      4E475F5F 
 3499              	.LASF320:
 3500 266c 5F5F5551 		.ascii	"__UQQ_IBIT__ 0\000"
 3500      515F4942 
 3500      49545F5F 
 3500      203000
 3501              	.LASF87:
 3502 267b 5F5F5549 		.ascii	"__UINT8_TYPE__ unsigned char\000"
 3502      4E54385F 
 3502      54595045 
 3502      5F5F2075 
 3502      6E736967 
 3503              	.LASF144:
 3504 2698 5F5F494E 		.ascii	"__INT64_C(c) c ## LL\000"
 3504      5436345F 
 3504      43286329 
 3504      20632023 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 89


 3504      23204C4C 
 3505              	.LASF259:
 3506 26ad 5F5F4C4C 		.ascii	"__LLFRACT_FBIT__ 63\000"
 3506      46524143 
 3506      545F4642 
 3506      49545F5F 
 3506      20363300 
 3507              	.LASF175:
 3508 26c1 5F5F464C 		.ascii	"__FLT_EPSILON__ 1.1920928955078125e-7F\000"
 3508      545F4550 
 3508      53494C4F 
 3508      4E5F5F20 
 3508      312E3139 
 3509              	.LASF94:
 3510 26e8 5F5F494E 		.ascii	"__INT_LEAST64_TYPE__ long long int\000"
 3510      545F4C45 
 3510      41535436 
 3510      345F5459 
 3510      50455F5F 
 3511              	.LASF391:
 3512 270b 5F5F5241 		.ascii	"__RAND_MAX 0x7fffffff\000"
 3512      4E445F4D 
 3512      41582030 
 3512      78376666 
 3512      66666666 
 3513              	.LASF538:
 3514 2721 45584954 		.ascii	"EXIT_SUCCESS 0\000"
 3514      5F535543 
 3514      43455353 
 3514      203000
 3515              	.LASF89:
 3516 2730 5F5F5549 		.ascii	"__UINT32_TYPE__ long unsigned int\000"
 3516      4E543332 
 3516      5F545950 
 3516      455F5F20 
 3516      6C6F6E67 
 3517              	.LASF197:
 3518 2752 5F5F4C44 		.ascii	"__LDBL_MIN_10_EXP__ (-307)\000"
 3518      424C5F4D 
 3518      494E5F31 
 3518      305F4558 
 3518      505F5F20 
 3519              	.LASF72:
 3520 276d 5F5F5349 		.ascii	"__SIZEOF_POINTER__ 4\000"
 3520      5A454F46 
 3520      5F504F49 
 3520      4E544552 
 3520      5F5F2034 
 3521              	.LASF517:
 3522 2782 5F524545 		.ascii	"_REENT_STRTOK_LAST(ptr) ((ptr)->_new._reent._strtok"
 3522      4E545F53 
 3522      5452544F 
 3522      4B5F4C41 
 3522      53542870 
 3523 27b5 5F6C6173 		.ascii	"_last)\000"
 3523      742900
 3524              	.LASF372:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 90


 3525 27bc 5F5F5646 		.ascii	"__VFP_FP__ 1\000"
 3525      505F4650 
 3525      5F5F2031 
 3525      00
 3526              	.LASF409:
 3527 27c9 5F455850 		.ascii	"_EXPARM(name,proto) (* name) proto\000"
 3527      41524D28 
 3527      6E616D65 
 3527      2C70726F 
 3527      746F2920 
 3528              	.LASF257:
 3529 27ec 5F5F554C 		.ascii	"__ULFRACT_MAX__ 0XFFFFFFFFP-32ULR\000"
 3529      46524143 
 3529      545F4D41 
 3529      585F5F20 
 3529      30584646 
 3530              	.LASF329:
 3531 280e 5F5F4841 		.ascii	"__HA_FBIT__ 7\000"
 3531      5F464249 
 3531      545F5F20 
 3531      3700
 3532              	.LASF539:
 3533 281c 52414E44 		.ascii	"RAND_MAX __RAND_MAX\000"
 3533      5F4D4158 
 3533      205F5F52 
 3533      414E445F 
 3533      4D415800 
 3534              	.LASF70:
 3535 2830 5F5F4259 		.ascii	"__BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\000"
 3535      54455F4F 
 3535      52444552 
 3535      5F5F205F 
 3535      5F4F5244 
 3536              	.LASF127:
 3537 2857 5F5F5349 		.ascii	"__SIG_ATOMIC_MAX__ 2147483647\000"
 3537      475F4154 
 3537      4F4D4943 
 3537      5F4D4158 
 3537      5F5F2032 
 3538              	.LASF360:
 3539 2875 5F5F4743 		.ascii	"__GCC_ATOMIC_POINTER_LOCK_FREE 1\000"
 3539      435F4154 
 3539      4F4D4943 
 3539      5F504F49 
 3539      4E544552 
 3540              	.LASF152:
 3541 2896 5F5F5549 		.ascii	"__UINT64_C(c) c ## ULL\000"
 3541      4E543634 
 3541      5F432863 
 3541      29206320 
 3541      23232055 
 3542              	.LASF439:
 3543 28ad 5F5F7763 		.ascii	"__wchar_t__ \000"
 3543      6861725F 
 3543      745F5F20 
 3543      00
 3544              	.LASF293:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 91


 3545 28ba 5F5F4C41 		.ascii	"__LACCUM_EPSILON__ 0x1P-31LK\000"
 3545      4343554D 
 3545      5F455053 
 3545      494C4F4E 
 3545      5F5F2030 
 3546              	.LASF529:
 3547 28d7 5F4B6D61 		.ascii	"_Kmax (sizeof (size_t) << 3)\000"
 3547      78202873 
 3547      697A656F 
 3547      66202873 
 3547      697A655F 
 3548              	.LASF505:
 3549 28f4 5F524545 		.ascii	"_REENT_SIGNGAM(ptr) ((ptr)->_new._reent._gamma_sign"
 3549      4E545F53 
 3549      49474E47 
 3549      414D2870 
 3549      74722920 
 3550 2927 67616D29 		.ascii	"gam)\000"
 3550      00
 3551              	.LASF233:
 3552 292c 5F5F5346 		.ascii	"__SFRACT_EPSILON__ 0x1P-7HR\000"
 3552      52414354 
 3552      5F455053 
 3552      494C4F4E 
 3552      5F5F2030 
 3553              	.LASF8:
 3554 2948 73697A65 		.ascii	"sizetype\000"
 3554      74797065 
 3554      00
 3555              	.LASF323:
 3556 2951 5F5F5553 		.ascii	"__USQ_FBIT__ 32\000"
 3556      515F4642 
 3556      49545F5F 
 3556      20333200 
 3557              	.LASF330:
 3558 2961 5F5F4841 		.ascii	"__HA_IBIT__ 8\000"
 3558      5F494249 
 3558      545F5F20 
 3558      3800
 3559              	.LASF9:
 3560 296f 6C6F6E67 		.ascii	"long unsigned int\000"
 3560      20756E73 
 3560      69676E65 
 3560      6420696E 
 3560      7400
 3561              	.LASF376:
 3562 2981 5F5F4152 		.ascii	"__ARM_EABI__ 1\000"
 3562      4D5F4541 
 3562      42495F5F 
 3562      203100
 3563              	.LASF353:
 3564 2990 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR32_T_LOCK_FREE 1\000"
 3564      435F4154 
 3564      4F4D4943 
 3564      5F434841 
 3564      5233325F 
 3565              	.LASF110:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 92


 3566 29b2 5F5F4445 		.ascii	"__DEPRECATED 1\000"
 3566      50524543 
 3566      41544544 
 3566      203100
 3567              	.LASF441:
 3568 29c1 5F574348 		.ascii	"_WCHAR_T \000"
 3568      41525F54 
 3568      2000
 3569              	.LASF134:
 3570 29cb 5F5F5549 		.ascii	"__UINT16_MAX__ 65535\000"
 3570      4E543136 
 3570      5F4D4158 
 3570      5F5F2036 
 3570      35353335 
 3571              	.LASF65:
 3572 29e0 5F5F4348 		.ascii	"__CHAR_BIT__ 8\000"
 3572      41525F42 
 3572      49545F5F 
 3572      203800
 3573              	.LASF410:
 3574 29ef 5F455846 		.ascii	"_EXFNPTR(name,proto) (* name) proto\000"
 3574      4E505452 
 3574      286E616D 
 3574      652C7072 
 3574      6F746F29 
 3575              	.LASF125:
 3576 2a13 5F5F5549 		.ascii	"__UINTMAX_MAX__ 18446744073709551615ULL\000"
 3576      4E544D41 
 3576      585F4D41 
 3576      585F5F20 
 3576      31383434 
 3577              	.LASF243:
 3578 2a3b 5F5F4652 		.ascii	"__FRACT_EPSILON__ 0x1P-15R\000"
 3578      4143545F 
 3578      45505349 
 3578      4C4F4E5F 
 3578      5F203078 
 3579              	.LASF43:
 3580 2a56 5F5F5354 		.ascii	"__STDC_HOSTED__ 1\000"
 3580      44435F48 
 3580      4F535445 
 3580      445F5F20 
 3580      3100
 3581              	.LASF123:
 3582 2a68 5F5F494E 		.ascii	"__INTMAX_MAX__ 9223372036854775807LL\000"
 3582      544D4158 
 3582      5F4D4158 
 3582      5F5F2039 
 3582      32323333 
 3583              	.LASF443:
 3584 2a8d 5F545F57 		.ascii	"_T_WCHAR \000"
 3584      43484152 
 3584      2000
 3585              	.LASF417:
 3586 2a97 5F415454 		.ascii	"_ATTRIBUTE(attrs) __attribute__ (attrs)\000"
 3586      52494255 
 3586      54452861 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 93


 3586      74747273 
 3586      29205F5F 
 3587              	.LASF405:
 3588 2abf 5F444F54 		.ascii	"_DOTS , ...\000"
 3588      53202C20 
 3588      2E2E2E00 
 3589              	.LASF371:
 3590 2acb 5F5F534F 		.ascii	"__SOFTFP__ 1\000"
 3590      46544650 
 3590      5F5F2031 
 3590      00
 3591              	.LASF156:
 3592 2ad8 5F5F494E 		.ascii	"__INT_FAST64_MAX__ 9223372036854775807LL\000"
 3592      545F4641 
 3592      53543634 
 3592      5F4D4158 
 3592      5F5F2039 
 3593              	.LASF380:
 3594 2b01 5F5F4E45 		.ascii	"__NEWLIB_H__ 1\000"
 3594      574C4942 
 3594      5F485F5F 
 3594      203100
 3595              	.LASF492:
 3596 2b10 5F524545 		.ascii	"_REENT_EMERGENCY_SIZE 25\000"
 3596      4E545F45 
 3596      4D455247 
 3596      454E4359 
 3596      5F53495A 
 3597              	.LASF502:
 3598 2b29 5F524545 		.ascii	"_REENT_CHECK_EMERGENCY(ptr) \000"
 3598      4E545F43 
 3598      4845434B 
 3598      5F454D45 
 3598      5247454E 
 3599              	.LASF358:
 3600 2b46 5F5F4743 		.ascii	"__GCC_ATOMIC_LLONG_LOCK_FREE 1\000"
 3600      435F4154 
 3600      4F4D4943 
 3600      5F4C4C4F 
 3600      4E475F4C 
 3601              	.LASF518:
 3602 2b65 5F524545 		.ascii	"_REENT_MBLEN_STATE(ptr) ((ptr)->_new._reent._mblen_"
 3602      4E545F4D 
 3602      424C454E 
 3602      5F535441 
 3602      54452870 
 3603 2b98 73746174 		.ascii	"state)\000"
 3603      652900
 3604              	.LASF170:
 3605 2b9f 5F5F464C 		.ascii	"__FLT_MAX_EXP__ 128\000"
 3605      545F4D41 
 3605      585F4558 
 3605      505F5F20 
 3605      31323800 
 3606              	.LASF52:
 3607 2bb3 5F5F4154 		.ascii	"__ATOMIC_ACQ_REL 4\000"
 3607      4F4D4943 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 94


 3607      5F414351 
 3607      5F52454C 
 3607      203400
 3608              	.LASF106:
 3609 2bc6 5F5F5549 		.ascii	"__UINT_FAST64_TYPE__ long long unsigned int\000"
 3609      4E545F46 
 3609      41535436 
 3609      345F5459 
 3609      50455F5F 
 3610              	.LASF521:
 3611 2bf2 5F524545 		.ascii	"_REENT_MBRLEN_STATE(ptr) ((ptr)->_new._reent._mbrle"
 3611      4E545F4D 
 3611      42524C45 
 3611      4E5F5354 
 3611      41544528 
 3612 2c25 6E5F7374 		.ascii	"n_state)\000"
 3612      61746529 
 3612      00
 3613              	.LASF2:
 3614 2c2e 756E7369 		.ascii	"unsigned char\000"
 3614      676E6564 
 3614      20636861 
 3614      7200
 3615              	.LASF209:
 3616 2c3c 5F5F4445 		.ascii	"__DEC32_MIN_EXP__ (-94)\000"
 3616      4333325F 
 3616      4D494E5F 
 3616      4558505F 
 3616      5F20282D 
 3617              	.LASF79:
 3618 2c54 5F5F5549 		.ascii	"__UINTMAX_TYPE__ long long unsigned int\000"
 3618      4E544D41 
 3618      585F5459 
 3618      50455F5F 
 3618      206C6F6E 
 3619              	.LASF39:
 3620 2c7c 5F5F6E65 		.ascii	"__need_wint_t \000"
 3620      65645F77 
 3620      696E745F 
 3620      742000
 3621              	.LASF486:
 3622 2c8b 5F52414E 		.ascii	"_RAND48_SEED_1 (0xabcd)\000"
 3622      4434385F 
 3622      53454544 
 3622      5F312028 
 3622      30786162 
 3623              	.LASF203:
 3624 2ca3 5F5F4C44 		.ascii	"__LDBL_EPSILON__ 2.2204460492503131e-16L\000"
 3624      424C5F45 
 3624      5053494C 
 3624      4F4E5F5F 
 3624      20322E32 
 3625              	.LASF107:
 3626 2ccc 5F5F494E 		.ascii	"__INTPTR_TYPE__ int\000"
 3626      54505452 
 3626      5F545950 
 3626      455F5F20 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 95


 3626      696E7400 
 3627              	.LASF395:
 3628 2ce0 5F484156 		.ascii	"_HAVE_STDC \000"
 3628      455F5354 
 3628      44432000 
 3629              	.LASF276:
 3630 2cec 5F5F5553 		.ascii	"__USACCUM_MIN__ 0.0UHK\000"
 3630      41434355 
 3630      4D5F4D49 
 3630      4E5F5F20 
 3630      302E3055 
 3631              	.LASF235:
 3632 2d03 5F5F5553 		.ascii	"__USFRACT_IBIT__ 0\000"
 3632      46524143 
 3632      545F4942 
 3632      49545F5F 
 3632      203000
 3633              	.LASF537:
 3634 2d16 45584954 		.ascii	"EXIT_FAILURE 1\000"
 3634      5F464149 
 3634      4C555245 
 3634      203100
 3635              	.LASF105:
 3636 2d25 5F5F5549 		.ascii	"__UINT_FAST32_TYPE__ unsigned int\000"
 3636      4E545F46 
 3636      41535433 
 3636      325F5459 
 3636      50455F5F 
 3637              	.LASF382:
 3638 2d47 5F57414E 		.ascii	"_WANT_IO_LONG_LONG 1\000"
 3638      545F494F 
 3638      5F4C4F4E 
 3638      475F4C4F 
 3638      4E472031 
 3639              	.LASF316:
 3640 2d5c 5F5F4451 		.ascii	"__DQ_IBIT__ 0\000"
 3640      5F494249 
 3640      545F5F20 
 3640      3000
 3641              	.LASF190:
 3642 2d6a 5F5F4442 		.ascii	"__DBL_DENORM_MIN__ double(4.9406564584124654e-324L)"
 3642      4C5F4445 
 3642      4E4F524D 
 3642      5F4D494E 
 3642      5F5F2064 
 3643 2d9d 00       		.ascii	"\000"
 3644              	.LASF446:
 3645 2d9e 5F425344 		.ascii	"_BSD_WCHAR_T_ \000"
 3645      5F574348 
 3645      41525F54 
 3645      5F2000
 3646              	.LASF153:
 3647 2dad 5F5F494E 		.ascii	"__INT_FAST8_MAX__ 2147483647\000"
 3647      545F4641 
 3647      5354385F 
 3647      4D41585F 
 3647      5F203231 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 96


 3648              	.LASF74:
 3649 2dca 5F5F5349 		.ascii	"__SIZE_TYPE__ unsigned int\000"
 3649      5A455F54 
 3649      5950455F 
 3649      5F20756E 
 3649      7369676E 
 3650              	.LASF304:
 3651 2de5 5F5F554C 		.ascii	"__ULLACCUM_FBIT__ 32\000"
 3651      4C414343 
 3651      554D5F46 
 3651      4249545F 
 3651      5F203332 
 3652              	.LASF16:
 3653 2dfa 5F5A6E61 		.ascii	"_Znaj\000"
 3653      6A00
 3654              	.LASF473:
 3655 2e00 5F5F6C6F 		.ascii	"__lock_acquire(lock) (_CAST_VOID 0)\000"
 3655      636B5F61 
 3655      63717569 
 3655      7265286C 
 3655      6F636B29 
 3656              	.LASF465:
 3657 2e24 5F5F4558 		.ascii	"__EXP\000"
 3657      5000
 3658              	.LASF355:
 3659 2e2a 5F5F4743 		.ascii	"__GCC_ATOMIC_SHORT_LOCK_FREE 1\000"
 3659      435F4154 
 3659      4F4D4943 
 3659      5F53484F 
 3659      52545F4C 
 3660              	.LASF501:
 3661 2e49 5F524545 		.ascii	"_REENT_CHECK_ASCTIME_BUF(ptr) \000"
 3661      4E545F43 
 3661      4845434B 
 3661      5F415343 
 3661      54494D45 
 3662              	.LASF414:
 3663 2e68 5F4C4F4E 		.ascii	"_LONG_DOUBLE long double\000"
 3663      475F444F 
 3663      55424C45 
 3663      206C6F6E 
 3663      6720646F 
 3664              	.LASF54:
 3665 2e81 5F5F4F50 		.ascii	"__OPTIMIZE_SIZE__ 1\000"
 3665      54494D49 
 3665      5A455F53 
 3665      495A455F 
 3665      5F203100 
 3666              	.LASF474:
 3667 2e95 5F5F6C6F 		.ascii	"__lock_acquire_recursive(lock) (_CAST_VOID 0)\000"
 3667      636B5F61 
 3667      63717569 
 3667      72655F72 
 3667      65637572 
 3668              	.LASF169:
 3669 2ec3 5F5F464C 		.ascii	"__FLT_MIN_10_EXP__ (-37)\000"
 3669      545F4D49 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 97


 3669      4E5F3130 
 3669      5F455850 
 3669      5F5F2028 
 3670              	.LASF404:
 3671 2edc 5F534947 		.ascii	"_SIGNED signed\000"
 3671      4E454420 
 3671      7369676E 
 3671      656400
 3672              	.LASF118:
 3673 2eeb 5F5F5743 		.ascii	"__WCHAR_MIN__ 0U\000"
 3673      4841525F 
 3673      4D494E5F 
 3673      5F203055 
 3673      00
 3674              	.LASF192:
 3675 2efc 5F5F4442 		.ascii	"__DBL_HAS_INFINITY__ 1\000"
 3675      4C5F4841 
 3675      535F494E 
 3675      46494E49 
 3675      54595F5F 
 3676              	.LASF496:
 3677 2f13 5F524545 		.ascii	"_REENT_INIT(var) { 0, &(var).__sf[0], &(var).__sf[1"
 3677      4E545F49 
 3677      4E495428 
 3677      76617229 
 3677      207B2030 
 3678 2f46 5D2C2026 		.ascii	"], &(var).__sf[2], 0, \"\", 0, \"C\", 0, _NULL, _NU"
 3678      28766172 
 3678      292E5F5F 
 3678      73665B32 
 3678      5D2C2030 
 3679 2f75 4C4C2C20 		.ascii	"LL, 0, _NULL, _NULL, 0, _NULL, { { 0, _NULL, \"\", "
 3679      302C205F 
 3679      4E554C4C 
 3679      2C205F4E 
 3679      554C4C2C 
 3680 2fa6 7B302C20 		.ascii	"{0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 1, { {_RAND48_SEED_"
 3680      302C2030 
 3680      2C20302C 
 3680      20302C20 
 3680      302C2030 
 3681 2fd9 302C205F 		.ascii	"0, _RAND48_SEED_1, _RAND48_SEED_2}, {_RAND48_MULT_0"
 3681      52414E44 
 3681      34385F53 
 3681      4545445F 
 3681      312C205F 
 3682 300c 2C205F52 		.ascii	", _RAND48_MULT_1, _RAND48_MULT_2}, _RAND48_ADD }, {"
 3682      414E4434 
 3682      385F4D55 
 3682      4C545F31 
 3682      2C205F52 
 3683 303f 302C207B 		.ascii	"0, {0}}, {0, {0}}, {0, {0}}, \"\", \"\", 0, {0, {0}"
 3683      307D7D2C 
 3683      207B302C 
 3683      207B307D 
 3683      7D2C207B 
 3684 306e 7D2C207B 		.ascii	"}, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}} } }, _NUL"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 98


 3684      302C207B 
 3684      307D7D2C 
 3684      207B302C 
 3684      207B307D 
 3685 30a1 4C2C207B 		.ascii	"L, {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}, _"
 3685      5F4E554C 
 3685      4C2C2030 
 3685      2C207B5F 
 3685      4E554C4C 
 3686 30d4 4E554C4C 		.ascii	"NULL, {_NULL, 0, _NULL} }\000"
 3686      2C207B5F 
 3686      4E554C4C 
 3686      2C20302C 
 3686      205F4E55 
 3687              	.LASF101:
 3688 30ee 5F5F494E 		.ascii	"__INT_FAST32_TYPE__ int\000"
 3688      545F4641 
 3688      53543332 
 3688      5F545950 
 3688      455F5F20 
 3689              	.LASF270:
 3690 3106 5F5F5341 		.ascii	"__SACCUM_IBIT__ 8\000"
 3690      4343554D 
 3690      5F494249 
 3690      545F5F20 
 3690      3800
 3691              	.LASF179:
 3692 3118 5F5F464C 		.ascii	"__FLT_HAS_QUIET_NAN__ 1\000"
 3692      545F4841 
 3692      535F5155 
 3692      4945545F 
 3692      4E414E5F 
 3693              	.LASF57:
 3694 3130 5F5F5349 		.ascii	"__SIZEOF_INT__ 4\000"
 3694      5A454F46 
 3694      5F494E54 
 3694      5F5F2034 
 3694      00
 3695              	.LASF78:
 3696 3141 5F5F494E 		.ascii	"__INTMAX_TYPE__ long long int\000"
 3696      544D4158 
 3696      5F545950 
 3696      455F5F20 
 3696      6C6F6E67 
 3697              	.LASF124:
 3698 315f 5F5F494E 		.ascii	"__INTMAX_C(c) c ## LL\000"
 3698      544D4158 
 3698      5F432863 
 3698      29206320 
 3698      2323204C 
 3699              	.LASF367:
 3700 3175 5F5F4150 		.ascii	"__APCS_32__ 1\000"
 3700      43535F33 
 3700      325F5F20 
 3700      3100
 3701              	.LASF535:
 3702 3183 616C6C6F 		.ascii	"alloca(size) __builtin_alloca(size)\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 99


 3702      63612873 
 3702      697A6529 
 3702      205F5F62 
 3702      75696C74 
 3703              	.LASF407:
 3704 31a7 5F455846 		.ascii	"_EXFUN_NOTHROW(name,proto) name proto _NOTHROW\000"
 3704      554E5F4E 
 3704      4F544852 
 3704      4F57286E 
 3704      616D652C 
 3705              	.LASF433:
 3706 31d6 5F53495A 		.ascii	"_SIZE_T_DECLARED \000"
 3706      455F545F 
 3706      4445434C 
 3706      41524544 
 3706      2000
 3707              	.LASF90:
 3708 31e8 5F5F5549 		.ascii	"__UINT64_TYPE__ long long unsigned int\000"
 3708      4E543634 
 3708      5F545950 
 3708      455F5F20 
 3708      6C6F6E67 
 3709              	.LASF185:
 3710 320f 5F5F4442 		.ascii	"__DBL_MAX_10_EXP__ 308\000"
 3710      4C5F4D41 
 3710      585F3130 
 3710      5F455850 
 3710      5F5F2033 
 3711              	.LASF4:
 3712 3226 73686F72 		.ascii	"short unsigned int\000"
 3712      7420756E 
 3712      7369676E 
 3712      65642069 
 3712      6E7400
 3713              	.LASF336:
 3714 3239 5F5F5441 		.ascii	"__TA_IBIT__ 64\000"
 3714      5F494249 
 3714      545F5F20 
 3714      363400
 3715              	.LASF309:
 3716 3248 5F5F5151 		.ascii	"__QQ_FBIT__ 7\000"
 3716      5F464249 
 3716      545F5F20 
 3716      3700
 3717              	.LASF466:
 3718 3256 5F5F5359 		.ascii	"__SYS_LOCK_H__ \000"
 3718      535F4C4F 
 3718      434B5F48 
 3718      5F5F2000 
 3719              	.LASF478:
 3720 3266 5F5F6C6F 		.ascii	"__lock_release_recursive(lock) (_CAST_VOID 0)\000"
 3720      636B5F72 
 3720      656C6561 
 3720      73655F72 
 3720      65637572 
 3721              	.LASF96:
 3722 3294 5F5F5549 		.ascii	"__UINT_LEAST16_TYPE__ short unsigned int\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 100


 3722      4E545F4C 
 3722      45415354 
 3722      31365F54 
 3722      5950455F 
 3723              	.LASF168:
 3724 32bd 5F5F464C 		.ascii	"__FLT_MIN_EXP__ (-125)\000"
 3724      545F4D49 
 3724      4E5F4558 
 3724      505F5F20 
 3724      282D3132 
 3725              	.LASF226:
 3726 32d4 5F5F4445 		.ascii	"__DEC128_MAX__ 9.999999999999999999999999999999999E"
 3726      43313238 
 3726      5F4D4158 
 3726      5F5F2039 
 3726      2E393939 
 3727 3307 36313434 		.ascii	"6144DL\000"
 3727      444C00
 3728              	.LASF416:
 3729 330e 5F504152 		.ascii	"_PARAMS(paramlist) paramlist\000"
 3729      414D5328 
 3729      70617261 
 3729      6D6C6973 
 3729      74292070 
 3730              	.LASF393:
 3731 332b 5F5F494D 		.ascii	"__IMPORT \000"
 3731      504F5254 
 3731      2000
 3732              	.LASF200:
 3733 3335 5F5F4445 		.ascii	"__DECIMAL_DIG__ 17\000"
 3733      43494D41 
 3733      4C5F4449 
 3733      475F5F20 
 3733      313700
 3734              	.LASF408:
 3735 3348 5F455846 		.ascii	"_EXFUN(name,proto) name proto\000"
 3735      554E286E 
 3735      616D652C 
 3735      70726F74 
 3735      6F29206E 
 3736              	.LASF142:
 3737 3366 5F5F494E 		.ascii	"__INT32_C(c) c ## L\000"
 3737      5433325F 
 3737      43286329 
 3737      20632023 
 3737      23204C00 
 3738              	.LASF497:
 3739 337a 5F524545 		.ascii	"_REENT_INIT_PTR(var) { (var)->_errno = 0; (var)->_s"
 3739      4E545F49 
 3739      4E49545F 
 3739      50545228 
 3739      76617229 
 3740 33ad 7464696E 		.ascii	"tdin = &(var)->__sf[0]; (var)->_stdout = &(var)->__"
 3740      203D2026 
 3740      28766172 
 3740      292D3E5F 
 3740      5F73665B 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 101


 3741 33e0 73665B31 		.ascii	"sf[1]; (var)->_stderr = &(var)->__sf[2]; (var)->_in"
 3741      5D3B2028 
 3741      76617229 
 3741      2D3E5F73 
 3741      74646572 
 3742 3413 63203D20 		.ascii	"c = 0; memset(&(var)->_emergency, 0, sizeof((var)->"
 3742      303B206D 
 3742      656D7365 
 3742      74282628 
 3742      76617229 
 3743 3446 5F656D65 		.ascii	"_emergency)); (var)->_current_category = 0; (var)->"
 3743      7267656E 
 3743      63792929 
 3743      3B202876 
 3743      6172292D 
 3744 3479 5F637572 		.ascii	"_current_locale = \"C\"; (var)->__sdidinit = 0; (va"
 3744      72656E74 
 3744      5F6C6F63 
 3744      616C6520 
 3744      3D202243 
 3745 34aa 72292D3E 		.ascii	"r)->__cleanup = _NULL; (var)->_result = _NULL; (var"
 3745      5F5F636C 
 3745      65616E75 
 3745      70203D20 
 3745      5F4E554C 
 3746 34dd 292D3E5F 		.ascii	")->_result_k = 0; (var)->_p5s = _NULL; (var)->_free"
 3746      72657375 
 3746      6C745F6B 
 3746      203D2030 
 3746      3B202876 
 3747 3510 6C697374 		.ascii	"list = _NULL; (var)->_cvtlen = 0; (var)->_cvtbuf = "
 3747      203D205F 
 3747      4E554C4C 
 3747      3B202876 
 3747      6172292D 
 3748 3543 5F4E554C 		.ascii	"_NULL; (var)->_new._reent._unused_rand = 0; (var)->"
 3748      4C3B2028 
 3748      76617229 
 3748      2D3E5F6E 
 3748      65772E5F 
 3749 3576 5F6E6577 		.ascii	"_new._reent._strtok_last = _NULL; (var)->_new._reen"
 3749      2E5F7265 
 3749      656E742E 
 3749      5F737472 
 3749      746F6B5F 
 3750 35a9 742E5F61 		.ascii	"t._asctime_buf[0] = 0; memset(&(var)->_new._reent._"
 3750      73637469 
 3750      6D655F62 
 3750      75665B30 
 3750      5D203D20 
 3751 35dc 6C6F6361 		.ascii	"localtime_buf, 0, sizeof((var)->_new._reent._localt"
 3751      6C74696D 
 3751      655F6275 
 3751      662C2030 
 3751      2C207369 
 3752 360f 696D655F 		.ascii	"ime_buf)); (var)->_new._reent._gamma_signgam = 0; ("
 3752      62756629 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 102


 3752      293B2028 
 3752      76617229 
 3752      2D3E5F6E 
 3753 3642 76617229 		.ascii	"var)->_new._reent._rand_next = 1; (var)->_new._reen"
 3753      2D3E5F6E 
 3753      65772E5F 
 3753      7265656E 
 3753      742E5F72 
 3754 3675 742E5F72 		.ascii	"t._r48._seed[0] = _RAND48_SEED_0; (var)->_new._reen"
 3754      34382E5F 
 3754      73656564 
 3754      5B305D20 
 3754      3D205F52 
 3755 36a8 742E5F72 		.ascii	"t._r48._seed[1] = _RAND48_SEED_1; (var)->_new._reen"
 3755      34382E5F 
 3755      73656564 
 3755      5B315D20 
 3755      3D205F52 
 3756 36db 742E5F72 		.ascii	"t._r48._seed[2] = _RAND48_SEED_2; (var)->_new._reen"
 3756      34382E5F 
 3756      73656564 
 3756      5B325D20 
 3756      3D205F52 
 3757 370e 742E5F72 		.ascii	"t._r48._mult[0] = _RAND48_MULT_0; (var)->_new._reen"
 3757      34382E5F 
 3757      6D756C74 
 3757      5B305D20 
 3757      3D205F52 
 3758 3741 742E5F72 		.ascii	"t._r48._mult[1] = _RAND48_MULT_1; (var)->_new._reen"
 3758      34382E5F 
 3758      6D756C74 
 3758      5B315D20 
 3758      3D205F52 
 3759 3774 742E5F72 		.ascii	"t._r48._mult[2] = _RAND48_MULT_2; (var)->_new._reen"
 3759      34382E5F 
 3759      6D756C74 
 3759      5B325D20 
 3759      3D205F52 
 3760 37a7 742E5F72 		.ascii	"t._r48._add = _RAND48_ADD; (var)->_new._reent._mble"
 3760      34382E5F 
 3760      61646420 
 3760      3D205F52 
 3760      414E4434 
 3761 37da 6E5F7374 		.ascii	"n_state.__count = 0; (var)->_new._reent._mblen_stat"
 3761      6174652E 
 3761      5F5F636F 
 3761      756E7420 
 3761      3D20303B 
 3762 380d 652E5F5F 		.ascii	"e.__value.__wch = 0; (var)->_new._reent._mbtowc_sta"
 3762      76616C75 
 3762      652E5F5F 
 3762      77636820 
 3762      3D20303B 
 3763 3840 74652E5F 		.ascii	"te.__count = 0; (var)->_new._reent._mbtowc_state.__"
 3763      5F636F75 
 3763      6E74203D 
 3763      20303B20 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 103


 3763      28766172 
 3764 3873 76616C75 		.ascii	"value.__wch = 0; (var)->_new._reent._wctomb_state._"
 3764      652E5F5F 
 3764      77636820 
 3764      3D20303B 
 3764      20287661 
 3765 38a6 5F636F75 		.ascii	"_count = 0; (var)->_new._reent._wctomb_state.__valu"
 3765      6E74203D 
 3765      20303B20 
 3765      28766172 
 3765      292D3E5F 
 3766 38d9 652E5F5F 		.ascii	"e.__wch = 0; (var)->_new._reent._mbrlen_state.__cou"
 3766      77636820 
 3766      3D20303B 
 3766      20287661 
 3766      72292D3E 
 3767 390c 6E74203D 		.ascii	"nt = 0; (var)->_new._reent._mbrlen_state.__value.__"
 3767      20303B20 
 3767      28766172 
 3767      292D3E5F 
 3767      6E65772E 
 3768 393f 77636820 		.ascii	"wch = 0; (var)->_new._reent._mbrtowc_state.__count "
 3768      3D20303B 
 3768      20287661 
 3768      72292D3E 
 3768      5F6E6577 
 3769 3972 3D20303B 		.ascii	"= 0; (var)->_new._reent._mbrtowc_state.__value.__wc"
 3769      20287661 
 3769      72292D3E 
 3769      5F6E6577 
 3769      2E5F7265 
 3770 39a5 68203D20 		.ascii	"h = 0; (var)->_new._reent._mbsrtowcs_state.__count "
 3770      303B2028 
 3770      76617229 
 3770      2D3E5F6E 
 3770      65772E5F 
 3771 39d8 3D20303B 		.ascii	"= 0; (var)->_new._reent._mbsrtowcs_state.__value.__"
 3771      20287661 
 3771      72292D3E 
 3771      5F6E6577 
 3771      2E5F7265 
 3772 3a0b 77636820 		.ascii	"wch = 0; (var)->_new._reent._wcrtomb_state.__count "
 3772      3D20303B 
 3772      20287661 
 3772      72292D3E 
 3772      5F6E6577 
 3773 3a3e 3D20303B 		.ascii	"= 0; (var)->_new._reent._wcrtomb_state.__value.__wc"
 3773      20287661 
 3773      72292D3E 
 3773      5F6E6577 
 3773      2E5F7265 
 3774 3a71 68203D20 		.ascii	"h = 0; (var)->_new._reent._wcsrtombs_state.__count "
 3774      303B2028 
 3774      76617229 
 3774      2D3E5F6E 
 3774      65772E5F 
 3775 3aa4 3D20303B 		.ascii	"= 0; (var)->_new._reent._wcsrtombs_state.__value.__"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 104


 3775      20287661 
 3775      72292D3E 
 3775      5F6E6577 
 3775      2E5F7265 
 3776 3ad7 77636820 		.ascii	"wch = 0; (var)->_new._reent._l64a_buf[0] = '\\0'; ("
 3776      3D20303B 
 3776      20287661 
 3776      72292D3E 
 3776      5F6E6577 
 3777 3b09 76617229 		.ascii	"var)->_new._reent._signal_buf[0] = '\\0'; (var)->_n"
 3777      2D3E5F6E 
 3777      65772E5F 
 3777      7265656E 
 3777      742E5F73 
 3778 3b3b 65772E5F 		.ascii	"ew._reent._getd"
 3778      7265656E 
 3778      742E5F67 
 3778      657464
 3779 3b4a 6174655F 		.ascii	"ate_err = 0; (var)->_atexit = _NULL; (var)->_atexit"
 3779      65727220 
 3779      3D20303B 
 3779      20287661 
 3779      72292D3E 
 3780 3b7d 302E5F6E 		.ascii	"0._next = _NULL; (var)->_atexit0._ind = 0; (var)->_"
 3780      65787420 
 3780      3D205F4E 
 3780      554C4C3B 
 3780      20287661 
 3781 3bb0 61746578 		.ascii	"atexit0._fns[0] = _NULL; (var)->_atexit0._on_exit_a"
 3781      6974302E 
 3781      5F666E73 
 3781      5B305D20 
 3781      3D205F4E 
 3782 3be3 7267732E 		.ascii	"rgs._fntypes = 0; (var)->_atexit0._on_exit_args._fn"
 3782      5F666E74 
 3782      79706573 
 3782      203D2030 
 3782      3B202876 
 3783 3c16 61726773 		.ascii	"args[0] = _NULL; (var)->_sig_func = _NULL; (var)->_"
 3783      5B305D20 
 3783      3D205F4E 
 3783      554C4C3B 
 3783      20287661 
 3784 3c49 5F73676C 		.ascii	"_sglue._next = _NULL; (var)->__sglue._niobs = 0; (v"
 3784      75652E5F 
 3784      6E657874 
 3784      203D205F 
 3784      4E554C4C 
 3785 3c7c 6172292D 		.ascii	"ar)->__sglue._iobs = _NULL; memset(&(var)->__sf, 0,"
 3785      3E5F5F73 
 3785      676C7565 
 3785      2E5F696F 
 3785      6273203D 
 3786 3caf 2073697A 		.ascii	" sizeof((var)->__sf)); }\000"
 3786      656F6628 
 3786      28766172 
 3786      292D3E5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 105


 3786      5F736629 
 3787              	.LASF427:
 3788 3cc8 5F5F5349 		.ascii	"__SIZE_T \000"
 3788      5A455F54 
 3788      2000
 3789              	.LASF523:
 3790 3cd2 5F524545 		.ascii	"_REENT_MBSRTOWCS_STATE(ptr) ((ptr)->_new._reent._mb"
 3790      4E545F4D 
 3790      42535254 
 3790      4F574353 
 3790      5F535441 
 3791 3d05 7372746F 		.ascii	"srtowcs_state)\000"
 3791      7763735F 
 3791      73746174 
 3791      652900
 3792              	.LASF25:
 3793 3d14 474E5520 		.ascii	"GNU C++ 4.7.3 20121207 (release) [ARM/embedded-4_7-"
 3793      432B2B20 
 3793      342E372E 
 3793      33203230 
 3793      31323132 
 3794 3d47 6272616E 		.ascii	"branch revision 194305]\000"
 3794      63682072 
 3794      65766973 
 3794      696F6E20 
 3794      31393433 
 3795              	.LASF191:
 3796 3d5f 5F5F4442 		.ascii	"__DBL_HAS_DENORM__ 1\000"
 3796      4C5F4841 
 3796      535F4445 
 3796      4E4F524D 
 3796      5F5F2031 
 3797              	.LASF344:
 3798 3d74 5F5F5554 		.ascii	"__UTA_IBIT__ 64\000"
 3798      415F4942 
 3798      49545F5F 
 3798      20363400 
 3799              	.LASF495:
 3800 3d84 5F4E5F4C 		.ascii	"_N_LISTS 30\000"
 3800      49535453 
 3800      20333000 
 3801              	.LASF252:
 3802 3d90 5F5F4C46 		.ascii	"__LFRACT_MAX__ 0X7FFFFFFFP-31LR\000"
 3802      52414354 
 3802      5F4D4158 
 3802      5F5F2030 
 3802      58374646 
 3803              	.LASF341:
 3804 3db0 5F5F5544 		.ascii	"__UDA_FBIT__ 32\000"
 3804      415F4642 
 3804      49545F5F 
 3804      20333200 
 3805              	.LASF250:
 3806 3dc0 5F5F4C46 		.ascii	"__LFRACT_IBIT__ 0\000"
 3806      52414354 
 3806      5F494249 
 3806      545F5F20 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 106


 3806      3000
 3807              	.LASF494:
 3808 3dd2 5F524545 		.ascii	"_REENT_SIGNAL_SIZE 24\000"
 3808      4E545F53 
 3808      49474E41 
 3808      4C5F5349 
 3808      5A452032 
 3809              	.LASF299:
 3810 3de8 5F5F4C4C 		.ascii	"__LLACCUM_FBIT__ 31\000"
 3810      41434355 
 3810      4D5F4642 
 3810      49545F5F 
 3810      20333100 
 3811              	.LASF218:
 3812 3dfc 5F5F4445 		.ascii	"__DEC64_MIN__ 1E-383DD\000"
 3812      4336345F 
 3812      4D494E5F 
 3812      5F203145 
 3812      2D333833 
 3813              	.LASF362:
 3814 3e13 5F5F5052 		.ascii	"__PRAGMA_REDEFINE_EXTNAME 1\000"
 3814      41474D41 
 3814      5F524544 
 3814      4546494E 
 3814      455F4558 
 3815              	.LASF82:
 3816 3e2f 5F5F5349 		.ascii	"__SIG_ATOMIC_TYPE__ int\000"
 3816      475F4154 
 3816      4F4D4943 
 3816      5F545950 
 3816      455F5F20 
 3817              	.LASF525:
 3818 3e47 5F524545 		.ascii	"_REENT_WCSRTOMBS_STATE(ptr) ((ptr)->_new._reent._wc"
 3818      4E545F57 
 3818      43535254 
 3818      4F4D4253 
 3818      5F535441 
 3819 3e7a 7372746F 		.ascii	"srtombs_state)\000"
 3819      6D62735F 
 3819      73746174 
 3819      652900
 3820              	.LASF261:
 3821 3e89 5F5F4C4C 		.ascii	"__LLFRACT_MIN__ (-0.5LLR-0.5LLR)\000"
 3821      46524143 
 3821      545F4D49 
 3821      4E5F5F20 
 3821      282D302E 
 3822              	.LASF33:
 3823 3eaa 5F414E53 		.ascii	"_ANSIDECL_H_ \000"
 3823      49444543 
 3823      4C5F485F 
 3823      2000
 3824              	.LASF268:
 3825 3eb8 5F5F554C 		.ascii	"__ULLFRACT_EPSILON__ 0x1P-64ULLR\000"
 3825      4C465241 
 3825      43545F45 
 3825      5053494C 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 107


 3825      4F4E5F5F 
 3826              	.LASF205:
 3827 3ed9 5F5F4C44 		.ascii	"__LDBL_HAS_DENORM__ 1\000"
 3827      424C5F48 
 3827      41535F44 
 3827      454E4F52 
 3827      4D5F5F20 
 3828              	.LASF526:
 3829 3eef 5F524545 		.ascii	"_REENT_L64A_BUF(ptr) ((ptr)->_new._reent._l64a_buf)"
 3829      4E545F4C 
 3829      3634415F 
 3829      42554628 
 3829      70747229 
 3830 3f22 00       		.ascii	"\000"
 3831              	.LASF421:
 3832 3f23 5F5F7369 		.ascii	"__size_t__ \000"
 3832      7A655F74 
 3832      5F5F2000 
 3833              	.LASF308:
 3834 3f2f 5F5F554C 		.ascii	"__ULLACCUM_EPSILON__ 0x1P-32ULLK\000"
 3834      4C414343 
 3834      554D5F45 
 3834      5053494C 
 3834      4F4E5F5F 
 3835              	.LASF215:
 3836 3f50 5F5F4445 		.ascii	"__DEC64_MANT_DIG__ 16\000"
 3836      4336345F 
 3836      4D414E54 
 3836      5F444947 
 3836      5F5F2031 
 3837              	.LASF177:
 3838 3f66 5F5F464C 		.ascii	"__FLT_HAS_DENORM__ 1\000"
 3838      545F4841 
 3838      535F4445 
 3838      4E4F524D 
 3838      5F5F2031 
 3839              	.LASF284:
 3840 3f7b 5F5F5541 		.ascii	"__UACCUM_FBIT__ 16\000"
 3840      4343554D 
 3840      5F464249 
 3840      545F5F20 
 3840      313600
 3841              		.ident	"GCC: (GNU Tools for ARM Embedded Processors) 4.7.3 20121207 (release) [ARM/embedded-4_7-br
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s 			page 108


DEFINED SYMBOLS
                            *ABS*:0000000000000000 new.cpp
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:63     .text._Znwj:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:68     .text._Znwj:0000000000000000 _Znwj
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:89     .text._Znaj:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:94     .text._Znaj:0000000000000000 _Znaj
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:114    .text._ZdlPv:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:119    .text._ZdlPv:0000000000000000 _ZdlPv
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:139    .text._ZdaPv:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:144    .text._ZdaPv:0000000000000000 _ZdaPv
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:164    .text.__cxa_guard_acquire:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:169    .text.__cxa_guard_acquire:0000000000000000 __cxa_guard_acquire
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:185    .text.__cxa_guard_release:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:190    .text.__cxa_guard_release:0000000000000000 __cxa_guard_release
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:204    .text.__cxa_guard_abort:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccwuvxrV.s:209    .text.__cxa_guard_abort:0000000000000000 __cxa_guard_abort
                     .debug_frame:0000000000000010 $d
                           .group:0000000000000000 wm4.1.9f429f263171477ef80e80a2918b5e39
                           .group:0000000000000000 wm4.newlib.h.8.a9901dc52d1357e3e94003403d43f8b5
                           .group:0000000000000000 wm4.config.h.193.5fb8ef056cdff92dec3dee9552839d8c
                           .group:0000000000000000 wm4._ansi.h.23.fa6206289f154965d075fc01e2867808
                           .group:0000000000000000 wm4.stdlib.h.13.603ed7eb09a1561ab06840b7c0fcff58
                           .group:0000000000000000 wm4.stddef.h.187.40b3a084f9bc2c020a9e00b9eabe9c14
                           .group:0000000000000000 wm4._default_types.h.6.1dbd2e581fd590860c7c17f21d147e91
                           .group:0000000000000000 wm4.lock.h.2.9bc98482741e5e2a9450b12934a684ea
                           .group:0000000000000000 wm4.stddef.h.349.31f4c5baff3fa2689010b32028da9c47
                           .group:0000000000000000 wm4.reent.h.16.9e42f0e588b85e70b2bf6572af57ce64
                           .group:0000000000000000 wm4.alloca.h.8.dfc0c703c47ec3e69746825b17d9e66d
                           .group:0000000000000000 wm4.stdlib.h.50.f5923f1950ced340a337f4676566f65a

UNDEFINED SYMBOLS
malloc
free
