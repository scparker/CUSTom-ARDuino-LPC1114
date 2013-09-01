ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 1


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
  13              	@ GNU C++ (GNU Tools for ARM Embedded Processors) version 4.7.4 20130613 (release) [ARM/embedded-4_
  14              	@	compiled by GNU C version 4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2336.9.00), GMP vers
  15              	@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
  16              	@ options passed:  -I . -imultilib armv6-m
  17              	@ -iprefix /Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
  18              	@ -isysroot /Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../arm-none-eabi
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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 2


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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 3


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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 4


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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 5


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
 221              		.file 2 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 222              		.file 3 "./new.h"
 223              		.file 4 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 224              		.section	.debug_info,"",%progbits
 225              	.Ldebug_info0:
 226 0000 30020000 		.4byte	0x230
 227 0004 0200     		.2byte	0x2
 228 0006 00000000 		.4byte	.Ldebug_abbrev0
 229 000a 04       		.byte	0x4
 230 000b 01       		.uleb128 0x1
 231 000c 0E0D0000 		.4byte	.LASF25
 232 0010 04       		.byte	0x4
 233 0011 AB240000 		.4byte	.LASF26
 234 0015 14170000 		.4byte	.LASF27
 235 0019 00000000 		.4byte	.Ldebug_ranges0+0
 236 001d 00000000 		.4byte	0
 237 0021 00000000 		.4byte	0
 238 0025 00000000 		.4byte	.Ldebug_line0
 239 0029 00000000 		.4byte	.Ldebug_macro0
 240 002d 02       		.uleb128 0x2
 241 002e 0C110000 		.4byte	.LASF11
 242 0032 02       		.byte	0x2
 243 0033 D5       		.byte	0xd5
 244 0034 38000000 		.4byte	0x38
 245 0038 03       		.uleb128 0x3
 246 0039 04       		.byte	0x4
 247 003a 07       		.byte	0x7
 248 003b E4030000 		.4byte	.LASF0
 249 003f 03       		.uleb128 0x3
 250 0040 01       		.byte	0x1
 251 0041 06       		.byte	0x6
 252 0042 7B090000 		.4byte	.LASF1
 253 0046 03       		.uleb128 0x3
 254 0047 01       		.byte	0x1
 255 0048 08       		.byte	0x8
 256 0049 D02C0000 		.4byte	.LASF2
 257 004d 03       		.uleb128 0x3
 258 004e 02       		.byte	0x2
 259 004f 05       		.byte	0x5
 260 0050 5C230000 		.4byte	.LASF3
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 6


 261 0054 03       		.uleb128 0x3
 262 0055 02       		.byte	0x2
 263 0056 07       		.byte	0x7
 264 0057 D6320000 		.4byte	.LASF4
 265 005b 04       		.uleb128 0x4
 266 005c 04       		.byte	0x4
 267 005d 05       		.byte	0x5
 268 005e 696E7400 		.ascii	"int\000"
 269 0062 03       		.uleb128 0x3
 270 0063 08       		.byte	0x8
 271 0064 05       		.byte	0x5
 272 0065 F5190000 		.4byte	.LASF5
 273 0069 03       		.uleb128 0x3
 274 006a 08       		.byte	0x8
 275 006b 07       		.byte	0x7
 276 006c 5F0C0000 		.4byte	.LASF6
 277 0070 03       		.uleb128 0x3
 278 0071 04       		.byte	0x4
 279 0072 05       		.byte	0x5
 280 0073 FB230000 		.4byte	.LASF7
 281 0077 03       		.uleb128 0x3
 282 0078 04       		.byte	0x4
 283 0079 07       		.byte	0x7
 284 007a DD290000 		.4byte	.LASF8
 285 007e 05       		.uleb128 0x5
 286 007f 04       		.byte	0x4
 287 0080 03       		.uleb128 0x3
 288 0081 04       		.byte	0x4
 289 0082 07       		.byte	0x7
 290 0083 042A0000 		.4byte	.LASF9
 291 0087 03       		.uleb128 0x3
 292 0088 01       		.byte	0x1
 293 0089 08       		.byte	0x8
 294 008a 75220000 		.4byte	.LASF10
 295 008e 02       		.uleb128 0x2
 296 008f 9F1E0000 		.4byte	.LASF12
 297 0093 03       		.byte	0x3
 298 0094 0F       		.byte	0xf
 299 0095 62000000 		.4byte	0x62
 300 0099 06       		.uleb128 0x6
 301 009a 01       		.byte	0x1
 302 009b 9E200000 		.4byte	.LASF13
 303 009f 01       		.byte	0x1
 304 00a0 03       		.byte	0x3
 305 00a1 56100000 		.4byte	.LASF15
 306 00a5 7E000000 		.4byte	0x7e
 307 00a9 00000000 		.4byte	.LFB0
 308 00ad 08000000 		.4byte	.LFE0
 309 00b1 00000000 		.4byte	.LLST0
 310 00b5 01       		.byte	0x1
 311 00b6 DB000000 		.4byte	0xdb
 312 00ba 07       		.uleb128 0x7
 313 00bb 281D0000 		.4byte	.LASF17
 314 00bf 01       		.byte	0x1
 315 00c0 03       		.byte	0x3
 316 00c1 2D000000 		.4byte	0x2d
 317 00c5 20000000 		.4byte	.LLST1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 7


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
 335 00e3 9C2E0000 		.4byte	.LASF16
 336 00e7 7E000000 		.4byte	0x7e
 337 00eb 00000000 		.4byte	.LFB1
 338 00ef 08000000 		.4byte	.LFE1
 339 00f3 41000000 		.4byte	.LLST2
 340 00f7 01       		.byte	0x1
 341 00f8 1D010000 		.4byte	0x11d
 342 00fc 07       		.uleb128 0x7
 343 00fd 281D0000 		.4byte	.LASF17
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
 362 011f 42200000 		.4byte	.LASF18
 363 0123 01       		.byte	0x1
 364 0124 0D       		.byte	0xd
 365 0125 0F1B0000 		.4byte	.LASF20
 366 0129 00000000 		.4byte	.LFB2
 367 012d 08000000 		.4byte	.LFE2
 368 0131 82000000 		.4byte	.LLST4
 369 0135 01       		.byte	0x1
 370 0136 5B010000 		.4byte	0x15b
 371 013a 0B       		.uleb128 0xb
 372 013b 70747200 		.ascii	"ptr\000"
 373 013f 01       		.byte	0x1
 374 0140 0D       		.byte	0xd
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 8


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
 391 015d 210E0000 		.4byte	.LASF19
 392 0161 01       		.byte	0x1
 393 0162 12       		.byte	0x12
 394 0163 D5070000 		.4byte	.LASF21
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
 420 019b 731E0000 		.4byte	.LASF22
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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 9


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
 443 01cb 53220000 		.4byte	.LASF23
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
 463 01ef 87090000 		.4byte	.LASF24
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
 480 020f 200B0000 		.4byte	.LASF28
 481 0213 04       		.byte	0x4
 482 0214 5C       		.byte	0x5c
 483 0215 7E000000 		.4byte	0x7e
 484 0219 01       		.byte	0x1
 485 021a 24020000 		.4byte	0x224
 486 021e 12       		.uleb128 0x12
 487 021f 2D000000 		.4byte	0x2d
 488 0223 00       		.byte	0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 10


 489 0224 13       		.uleb128 0x13
 490 0225 01       		.byte	0x1
 491 0226 D3120000 		.4byte	.LASF29
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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 11


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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 12


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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 13


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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 14


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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 15


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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 16


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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 17


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
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 18


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
 970 0014 85120000 		.4byte	.LASF30
 971 0018 03       		.byte	0x3
 972 0019 08       		.uleb128 0x8
 973 001a 04       		.uleb128 0x4
 974 001b 05       		.byte	0x5
 975 001c 08       		.uleb128 0x8
 976 001d 74060000 		.4byte	.LASF31
 977              		.file 5 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 978 0021 03       		.byte	0x3
 979 0022 0A       		.uleb128 0xa
 980 0023 05       		.uleb128 0x5
 981 0024 05       		.byte	0x5
 982 0025 3C       		.uleb128 0x3c
 983 0026 76190000 		.4byte	.LASF32
 984 002a 04       		.byte	0x4
 985              		.file 6 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 986 002b 03       		.byte	0x3
 987 002c 0B       		.uleb128 0xb
 988 002d 06       		.uleb128 0x6
 989 002e 05       		.byte	0x5
 990 002f 0D       		.uleb128 0xd
 991 0030 0D3F0000 		.4byte	.LASF33
 992              		.file 7 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 993 0034 03       		.byte	0x3
 994 0035 0F       		.uleb128 0xf
 995 0036 07       		.uleb128 0x7
 996 0037 07       		.byte	0x7
 997 0038 00000000 		.4byte	.Ldebug_macro2
 998 003c 04       		.byte	0x4
 999              		.file 8 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 1000 003d 03       		.byte	0x3
 1001 003e 10       		.uleb128 0x10
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 19


 1002 003f 08       		.uleb128 0x8
 1003 0040 05       		.byte	0x5
 1004 0041 02       		.uleb128 0x2
 1005 0042 B7010000 		.4byte	.LASF34
 1006 0046 03       		.byte	0x3
 1007 0047 04       		.uleb128 0x4
 1008 0048 05       		.uleb128 0x5
 1009 0049 04       		.byte	0x4
 1010              		.file 9 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 1011 004a 03       		.byte	0x3
 1012 004b 05       		.uleb128 0x5
 1013 004c 09       		.uleb128 0x9
 1014 004d 07       		.byte	0x7
 1015 004e 00000000 		.4byte	.Ldebug_macro3
 1016 0052 04       		.byte	0x4
 1017 0053 07       		.byte	0x7
 1018 0054 00000000 		.4byte	.Ldebug_macro4
 1019 0058 04       		.byte	0x4
 1020 0059 07       		.byte	0x7
 1021 005a 00000000 		.4byte	.Ldebug_macro5
 1022 005e 04       		.byte	0x4
 1023 005f 07       		.byte	0x7
 1024 0060 00000000 		.4byte	.Ldebug_macro6
 1025 0064 03       		.byte	0x3
 1026 0065 0F       		.uleb128 0xf
 1027 0066 02       		.uleb128 0x2
 1028 0067 07       		.byte	0x7
 1029 0068 00000000 		.4byte	.Ldebug_macro7
 1030 006c 04       		.byte	0x4
 1031              		.file 10 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 1032 006d 03       		.byte	0x3
 1033 006e 11       		.uleb128 0x11
 1034 006f 0A       		.uleb128 0xa
 1035 0070 05       		.byte	0x5
 1036 0071 0B       		.uleb128 0xb
 1037 0072 1F250000 		.4byte	.LASF35
 1038 0076 03       		.byte	0x3
 1039 0077 0D       		.uleb128 0xd
 1040 0078 06       		.uleb128 0x6
 1041 0079 04       		.byte	0x4
 1042              		.file 11 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 1043 007a 03       		.byte	0x3
 1044 007b 0E       		.uleb128 0xe
 1045 007c 0B       		.uleb128 0xb
 1046 007d 05       		.byte	0x5
 1047 007e 0A       		.uleb128 0xa
 1048 007f 830B0000 		.4byte	.LASF36
 1049              		.file 12 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 1050 0083 03       		.byte	0x3
 1051 0084 0C       		.uleb128 0xc
 1052 0085 0C       		.uleb128 0xc
 1053 0086 05       		.byte	0x5
 1054 0087 06       		.uleb128 0x6
 1055 0088 EC210000 		.4byte	.LASF37
 1056              		.file 13 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 1057 008c 03       		.byte	0x3
 1058 008d 07       		.uleb128 0x7
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 20


 1059 008e 0D       		.uleb128 0xd
 1060 008f 07       		.byte	0x7
 1061 0090 00000000 		.4byte	.Ldebug_macro8
 1062 0094 04       		.byte	0x4
 1063 0095 04       		.byte	0x4
 1064              		.file 14 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 1065 0096 03       		.byte	0x3
 1066 0097 0D       		.uleb128 0xd
 1067 0098 0E       		.uleb128 0xe
 1068 0099 07       		.byte	0x7
 1069 009a 00000000 		.4byte	.Ldebug_macro9
 1070 009e 04       		.byte	0x4
 1071 009f 05       		.byte	0x5
 1072 00a0 3E       		.uleb128 0x3e
 1073 00a1 1E2D0000 		.4byte	.LASF38
 1074 00a5 03       		.byte	0x3
 1075 00a6 3F       		.uleb128 0x3f
 1076 00a7 02       		.uleb128 0x2
 1077 00a8 07       		.byte	0x7
 1078 00a9 00000000 		.4byte	.Ldebug_macro10
 1079 00ad 04       		.byte	0x4
 1080 00ae 04       		.byte	0x4
 1081 00af 07       		.byte	0x7
 1082 00b0 00000000 		.4byte	.Ldebug_macro11
 1083 00b4 04       		.byte	0x4
 1084              		.file 15 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 1085 00b5 03       		.byte	0x3
 1086 00b6 12       		.uleb128 0x12
 1087 00b7 0F       		.uleb128 0xf
 1088 00b8 05       		.byte	0x5
 1089 00b9 02       		.uleb128 0x2
 1090 00ba C43D0000 		.4byte	.LASF39
 1091 00be 04       		.byte	0x4
 1092              		.file 16 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 1093 00bf 03       		.byte	0x3
 1094 00c0 14       		.uleb128 0x14
 1095 00c1 10       		.uleb128 0x10
 1096 00c2 07       		.byte	0x7
 1097 00c3 00000000 		.4byte	.Ldebug_macro12
 1098 00c7 04       		.byte	0x4
 1099 00c8 07       		.byte	0x7
 1100 00c9 00000000 		.4byte	.Ldebug_macro13
 1101 00cd 04       		.byte	0x4
 1102 00ce 04       		.byte	0x4
 1103 00cf 04       		.byte	0x4
 1104 00d0 00       		.byte	0
 1105              		.section	.debug_macro,"G",%progbits,wm4.1.8ebf1c990d6a0cbee7a5e554ec03ca59,comdat
 1106              	.Ldebug_macro1:
 1107 0000 0400     		.2byte	0x4
 1108 0002 00       		.byte	0
 1109 0003 05       		.byte	0x5
 1110 0004 01       		.uleb128 0x1
 1111 0005 211C0000 		.4byte	.LASF40
 1112 0009 05       		.byte	0x5
 1113 000a 01       		.uleb128 0x1
 1114 000b 5B090000 		.4byte	.LASF41
 1115 000f 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 21


 1116 0010 01       		.uleb128 0x1
 1117 0011 F82A0000 		.4byte	.LASF42
 1118 0015 05       		.byte	0x5
 1119 0016 01       		.uleb128 0x1
 1120 0017 9B040000 		.4byte	.LASF43
 1121 001b 05       		.byte	0x5
 1122 001c 01       		.uleb128 0x1
 1123 001d C8030000 		.4byte	.LASF44
 1124 0021 05       		.byte	0x5
 1125 0022 01       		.uleb128 0x1
 1126 0023 621D0000 		.4byte	.LASF45
 1127 0027 05       		.byte	0x5
 1128 0028 01       		.uleb128 0x1
 1129 0029 C93F0000 		.4byte	.LASF46
 1130 002d 05       		.byte	0x5
 1131 002e 01       		.uleb128 0x1
 1132 002f 02080000 		.4byte	.LASF47
 1133 0033 05       		.byte	0x5
 1134 0034 01       		.uleb128 0x1
 1135 0035 61060000 		.4byte	.LASF48
 1136 0039 05       		.byte	0x5
 1137 003a 01       		.uleb128 0x1
 1138 003b FF1B0000 		.4byte	.LASF49
 1139 003f 05       		.byte	0x5
 1140 0040 01       		.uleb128 0x1
 1141 0041 AC050000 		.4byte	.LASF50
 1142 0045 05       		.byte	0x5
 1143 0046 01       		.uleb128 0x1
 1144 0047 552C0000 		.4byte	.LASF51
 1145 004b 05       		.byte	0x5
 1146 004c 01       		.uleb128 0x1
 1147 004d 871C0000 		.4byte	.LASF52
 1148 0051 05       		.byte	0x5
 1149 0052 01       		.uleb128 0x1
 1150 0053 232F0000 		.4byte	.LASF53
 1151 0057 05       		.byte	0x5
 1152 0058 01       		.uleb128 0x1
 1153 0059 67120000 		.4byte	.LASF54
 1154 005d 05       		.byte	0x5
 1155 005e 01       		.uleb128 0x1
 1156 005f 7C1A0000 		.4byte	.LASF55
 1157 0063 05       		.byte	0x5
 1158 0064 01       		.uleb128 0x1
 1159 0065 D2310000 		.4byte	.LASF56
 1160 0069 05       		.byte	0x5
 1161 006a 01       		.uleb128 0x1
 1162 006b 3E1C0000 		.4byte	.LASF57
 1163 006f 05       		.byte	0x5
 1164 0070 01       		.uleb128 0x1
 1165 0071 EA260000 		.4byte	.LASF58
 1166 0075 05       		.byte	0x5
 1167 0076 01       		.uleb128 0x1
 1168 0077 80060000 		.4byte	.LASF59
 1169 007b 05       		.byte	0x5
 1170 007c 01       		.uleb128 0x1
 1171 007d 89100000 		.4byte	.LASF60
 1172 0081 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 22


 1173 0082 01       		.uleb128 0x1
 1174 0083 4E1D0000 		.4byte	.LASF61
 1175 0087 05       		.byte	0x5
 1176 0088 01       		.uleb128 0x1
 1177 0089 82040000 		.4byte	.LASF62
 1178 008d 05       		.byte	0x5
 1179 008e 01       		.uleb128 0x1
 1180 008f 3D040000 		.4byte	.LASF63
 1181 0093 05       		.byte	0x5
 1182 0094 01       		.uleb128 0x1
 1183 0095 822A0000 		.4byte	.LASF64
 1184 0099 05       		.byte	0x5
 1185 009a 01       		.uleb128 0x1
 1186 009b A2110000 		.4byte	.LASF65
 1187 009f 05       		.byte	0x5
 1188 00a0 01       		.uleb128 0x1
 1189 00a1 9B0F0000 		.4byte	.LASF66
 1190 00a5 05       		.byte	0x5
 1191 00a6 01       		.uleb128 0x1
 1192 00a7 A6040000 		.4byte	.LASF67
 1193 00ab 05       		.byte	0x5
 1194 00ac 01       		.uleb128 0x1
 1195 00ad 39220000 		.4byte	.LASF68
 1196 00b1 05       		.byte	0x5
 1197 00b2 01       		.uleb128 0x1
 1198 00b3 C5280000 		.4byte	.LASF69
 1199 00b7 05       		.byte	0x5
 1200 00b8 01       		.uleb128 0x1
 1201 00b9 401F0000 		.4byte	.LASF70
 1202 00bd 05       		.byte	0x5
 1203 00be 01       		.uleb128 0x1
 1204 00bf 02280000 		.4byte	.LASF71
 1205 00c3 05       		.byte	0x5
 1206 00c4 01       		.uleb128 0x1
 1207 00c5 7E240000 		.4byte	.LASF72
 1208 00c9 05       		.byte	0x5
 1209 00ca 01       		.uleb128 0x1
 1210 00cb 6C2E0000 		.4byte	.LASF73
 1211 00cf 05       		.byte	0x5
 1212 00d0 01       		.uleb128 0x1
 1213 00d1 BF050000 		.4byte	.LASF74
 1214 00d5 05       		.byte	0x5
 1215 00d6 01       		.uleb128 0x1
 1216 00d7 77170000 		.4byte	.LASF75
 1217 00db 05       		.byte	0x5
 1218 00dc 01       		.uleb128 0x1
 1219 00dd DF1C0000 		.4byte	.LASF76
 1220 00e1 05       		.byte	0x5
 1221 00e2 01       		.uleb128 0x1
 1222 00e3 E3310000 		.4byte	.LASF77
 1223 00e7 05       		.byte	0x5
 1224 00e8 01       		.uleb128 0x1
 1225 00e9 F62C0000 		.4byte	.LASF78
 1226 00ed 05       		.byte	0x5
 1227 00ee 01       		.uleb128 0x1
 1228 00ef 51040000 		.4byte	.LASF79
 1229 00f3 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 23


 1230 00f4 01       		.uleb128 0x1
 1231 00f5 7C200000 		.4byte	.LASF80
 1232 00f9 05       		.byte	0x5
 1233 00fa 01       		.uleb128 0x1
 1234 00fb 923E0000 		.4byte	.LASF81
 1235 00ff 05       		.byte	0x5
 1236 0100 01       		.uleb128 0x1
 1237 0101 CC240000 		.4byte	.LASF82
 1238 0105 05       		.byte	0x5
 1239 0106 01       		.uleb128 0x1
 1240 0107 E8050000 		.4byte	.LASF83
 1241 010b 05       		.byte	0x5
 1242 010c 01       		.uleb128 0x1
 1243 010d B7230000 		.4byte	.LASF84
 1244 0111 05       		.byte	0x5
 1245 0112 01       		.uleb128 0x1
 1246 0113 8B130000 		.4byte	.LASF85
 1247 0117 05       		.byte	0x5
 1248 0118 01       		.uleb128 0x1
 1249 0119 10270000 		.4byte	.LASF86
 1250 011d 05       		.byte	0x5
 1251 011e 01       		.uleb128 0x1
 1252 011f 05130000 		.4byte	.LASF87
 1253 0123 05       		.byte	0x5
 1254 0124 01       		.uleb128 0x1
 1255 0125 C5270000 		.4byte	.LASF88
 1256 0129 05       		.byte	0x5
 1257 012a 01       		.uleb128 0x1
 1258 012b 98320000 		.4byte	.LASF89
 1259 012f 05       		.byte	0x5
 1260 0130 01       		.uleb128 0x1
 1261 0131 6B130000 		.4byte	.LASF90
 1262 0135 05       		.byte	0x5
 1263 0136 01       		.uleb128 0x1
 1264 0137 5E180000 		.4byte	.LASF91
 1265 013b 05       		.byte	0x5
 1266 013c 01       		.uleb128 0x1
 1267 013d B00C0000 		.4byte	.LASF92
 1268 0141 05       		.byte	0x5
 1269 0142 01       		.uleb128 0x1
 1270 0143 7D270000 		.4byte	.LASF93
 1271 0147 05       		.byte	0x5
 1272 0148 01       		.uleb128 0x1
 1273 0149 B2070000 		.4byte	.LASF94
 1274 014d 05       		.byte	0x5
 1275 014e 01       		.uleb128 0x1
 1276 014f 44330000 		.4byte	.LASF95
 1277 0153 05       		.byte	0x5
 1278 0154 01       		.uleb128 0x1
 1279 0155 4D210000 		.4byte	.LASF96
 1280 0159 05       		.byte	0x5
 1281 015a 01       		.uleb128 0x1
 1282 015b 47050000 		.4byte	.LASF97
 1283 015f 05       		.byte	0x5
 1284 0160 01       		.uleb128 0x1
 1285 0161 0A0E0000 		.4byte	.LASF98
 1286 0165 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 24


 1287 0166 01       		.uleb128 0x1
 1288 0167 ED120000 		.4byte	.LASF99
 1289 016b 05       		.byte	0x5
 1290 016c 01       		.uleb128 0x1
 1291 016d 90310000 		.4byte	.LASF100
 1292 0171 05       		.byte	0x5
 1293 0172 01       		.uleb128 0x1
 1294 0173 39090000 		.4byte	.LASF101
 1295 0177 05       		.byte	0x5
 1296 0178 01       		.uleb128 0x1
 1297 0179 7B160000 		.4byte	.LASF102
 1298 017d 05       		.byte	0x5
 1299 017e 01       		.uleb128 0x1
 1300 017f 340E0000 		.4byte	.LASF103
 1301 0183 05       		.byte	0x5
 1302 0184 01       		.uleb128 0x1
 1303 0185 C72D0000 		.4byte	.LASF104
 1304 0189 05       		.byte	0x5
 1305 018a 01       		.uleb128 0x1
 1306 018b 682C0000 		.4byte	.LASF105
 1307 018f 05       		.byte	0x5
 1308 0190 01       		.uleb128 0x1
 1309 0191 6E2D0000 		.4byte	.LASF106
 1310 0195 05       		.byte	0x5
 1311 0196 01       		.uleb128 0x1
 1312 0197 2E0A0000 		.4byte	.LASF107
 1313 019b 05       		.byte	0x5
 1314 019c 01       		.uleb128 0x1
 1315 019d 76110000 		.4byte	.LASF108
 1316 01a1 05       		.byte	0x5
 1317 01a2 01       		.uleb128 0x1
 1318 01a3 542A0000 		.4byte	.LASF109
 1319 01a7 05       		.byte	0x5
 1320 01a8 01       		.uleb128 0x1
 1321 01a9 50120000 		.4byte	.LASF110
 1322 01ad 05       		.byte	0x5
 1323 01ae 01       		.uleb128 0x1
 1324 01af 2A230000 		.4byte	.LASF111
 1325 01b3 05       		.byte	0x5
 1326 01b4 01       		.uleb128 0x1
 1327 01b5 FC1A0000 		.4byte	.LASF112
 1328 01b9 05       		.byte	0x5
 1329 01ba 01       		.uleb128 0x1
 1330 01bb 36060000 		.4byte	.LASF113
 1331 01bf 05       		.byte	0x5
 1332 01c0 01       		.uleb128 0x1
 1333 01c1 CC2E0000 		.4byte	.LASF114
 1334 01c5 05       		.byte	0x5
 1335 01c6 01       		.uleb128 0x1
 1336 01c7 3E000000 		.4byte	.LASF115
 1337 01cb 05       		.byte	0x5
 1338 01cc 01       		.uleb128 0x1
 1339 01cd 97000000 		.4byte	.LASF116
 1340 01d1 05       		.byte	0x5
 1341 01d2 01       		.uleb128 0x1
 1342 01d3 8D2F0000 		.4byte	.LASF117
 1343 01d7 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 25


 1344 01d8 01       		.uleb128 0x1
 1345 01d9 BD220000 		.4byte	.LASF118
 1346 01dd 05       		.byte	0x5
 1347 01de 01       		.uleb128 0x1
 1348 01df AC1D0000 		.4byte	.LASF119
 1349 01e3 05       		.byte	0x5
 1350 01e4 01       		.uleb128 0x1
 1351 01e5 0A000000 		.4byte	.LASF120
 1352 01e9 05       		.byte	0x5
 1353 01ea 01       		.uleb128 0x1
 1354 01eb 99090000 		.4byte	.LASF121
 1355 01ef 05       		.byte	0x5
 1356 01f0 01       		.uleb128 0x1
 1357 01f1 0A2B0000 		.4byte	.LASF122
 1358 01f5 05       		.byte	0x5
 1359 01f6 01       		.uleb128 0x1
 1360 01f7 01320000 		.4byte	.LASF123
 1361 01fb 05       		.byte	0x5
 1362 01fc 01       		.uleb128 0x1
 1363 01fd B52A0000 		.4byte	.LASF124
 1364 0201 05       		.byte	0x5
 1365 0202 01       		.uleb128 0x1
 1366 0203 C4060000 		.4byte	.LASF125
 1367 0207 05       		.byte	0x5
 1368 0208 01       		.uleb128 0x1
 1369 0209 EC280000 		.4byte	.LASF126
 1370 020d 05       		.byte	0x5
 1371 020e 01       		.uleb128 0x1
 1372 020f C01F0000 		.4byte	.LASF127
 1373 0213 05       		.byte	0x5
 1374 0214 01       		.uleb128 0x1
 1375 0215 71010000 		.4byte	.LASF128
 1376 0219 05       		.byte	0x5
 1377 021a 01       		.uleb128 0x1
 1378 021b E1190000 		.4byte	.LASF129
 1379 021f 05       		.byte	0x5
 1380 0220 01       		.uleb128 0x1
 1381 0221 9D010000 		.4byte	.LASF130
 1382 0225 05       		.byte	0x5
 1383 0226 01       		.uleb128 0x1
 1384 0227 E4250000 		.4byte	.LASF131
 1385 022b 05       		.byte	0x5
 1386 022c 01       		.uleb128 0x1
 1387 022d FF210000 		.4byte	.LASF132
 1388 0231 05       		.byte	0x5
 1389 0232 01       		.uleb128 0x1
 1390 0233 6D2A0000 		.4byte	.LASF133
 1391 0237 05       		.byte	0x5
 1392 0238 01       		.uleb128 0x1
 1393 0239 A3150000 		.4byte	.LASF134
 1394 023d 05       		.byte	0x5
 1395 023e 01       		.uleb128 0x1
 1396 023f 12090000 		.4byte	.LASF135
 1397 0243 05       		.byte	0x5
 1398 0244 01       		.uleb128 0x1
 1399 0245 44010000 		.4byte	.LASF136
 1400 0249 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 26


 1401 024a 01       		.uleb128 0x1
 1402 024b B9180000 		.4byte	.LASF137
 1403 024f 05       		.byte	0x5
 1404 0250 01       		.uleb128 0x1
 1405 0251 CD110000 		.4byte	.LASF138
 1406 0255 05       		.byte	0x5
 1407 0256 01       		.uleb128 0x1
 1408 0257 66250000 		.4byte	.LASF139
 1409 025b 05       		.byte	0x5
 1410 025c 01       		.uleb128 0x1
 1411 025d FF170000 		.4byte	.LASF140
 1412 0261 05       		.byte	0x5
 1413 0262 01       		.uleb128 0x1
 1414 0263 16340000 		.4byte	.LASF141
 1415 0267 05       		.byte	0x5
 1416 0268 01       		.uleb128 0x1
 1417 0269 83020000 		.4byte	.LASF142
 1418 026d 05       		.byte	0x5
 1419 026e 01       		.uleb128 0x1
 1420 026f 2D270000 		.4byte	.LASF143
 1421 0273 05       		.byte	0x5
 1422 0274 01       		.uleb128 0x1
 1423 0275 2A070000 		.4byte	.LASF144
 1424 0279 05       		.byte	0x5
 1425 027a 01       		.uleb128 0x1
 1426 027b 8E010000 		.4byte	.LASF145
 1427 027f 05       		.byte	0x5
 1428 0280 01       		.uleb128 0x1
 1429 0281 30190000 		.4byte	.LASF146
 1430 0285 05       		.byte	0x5
 1431 0286 01       		.uleb128 0x1
 1432 0287 2D040000 		.4byte	.LASF147
 1433 028b 05       		.byte	0x5
 1434 028c 01       		.uleb128 0x1
 1435 028d CF200000 		.4byte	.LASF148
 1436 0291 05       		.byte	0x5
 1437 0292 01       		.uleb128 0x1
 1438 0293 A9100000 		.4byte	.LASF149
 1439 0297 05       		.byte	0x5
 1440 0298 01       		.uleb128 0x1
 1441 0299 7D180000 		.4byte	.LASF150
 1442 029d 05       		.byte	0x5
 1443 029e 01       		.uleb128 0x1
 1444 029f 2B290000 		.4byte	.LASF151
 1445 02a3 05       		.byte	0x5
 1446 02a4 01       		.uleb128 0x1
 1447 02a5 4F2E0000 		.4byte	.LASF152
 1448 02a9 05       		.byte	0x5
 1449 02aa 01       		.uleb128 0x1
 1450 02ab DC060000 		.4byte	.LASF153
 1451 02af 05       		.byte	0x5
 1452 02b0 01       		.uleb128 0x1
 1453 02b1 CE0C0000 		.4byte	.LASF154
 1454 02b5 05       		.byte	0x5
 1455 02b6 01       		.uleb128 0x1
 1456 02b7 7A2B0000 		.4byte	.LASF155
 1457 02bb 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 27


 1458 02bc 01       		.uleb128 0x1
 1459 02bd E3080000 		.4byte	.LASF156
 1460 02c1 05       		.byte	0x5
 1461 02c2 01       		.uleb128 0x1
 1462 02c3 57260000 		.4byte	.LASF157
 1463 02c7 05       		.byte	0x5
 1464 02c8 01       		.uleb128 0x1
 1465 02c9 3C230000 		.4byte	.LASF158
 1466 02cd 05       		.byte	0x5
 1467 02ce 01       		.uleb128 0x1
 1468 02cf A3250000 		.4byte	.LASF159
 1469 02d3 05       		.byte	0x5
 1470 02d4 01       		.uleb128 0x1
 1471 02d5 FA1C0000 		.4byte	.LASF160
 1472 02d9 05       		.byte	0x5
 1473 02da 01       		.uleb128 0x1
 1474 02db 162A0000 		.4byte	.LASF161
 1475 02df 05       		.byte	0x5
 1476 02e0 01       		.uleb128 0x1
 1477 02e1 40160000 		.4byte	.LASF162
 1478 02e5 05       		.byte	0x5
 1479 02e6 01       		.uleb128 0x1
 1480 02e7 60150000 		.4byte	.LASF163
 1481 02eb 05       		.byte	0x5
 1482 02ec 01       		.uleb128 0x1
 1483 02ed 1F180000 		.4byte	.LASF164
 1484 02f1 05       		.byte	0x5
 1485 02f2 01       		.uleb128 0x1
 1486 02f3 A7140000 		.4byte	.LASF165
 1487 02f7 05       		.byte	0x5
 1488 02f8 01       		.uleb128 0x1
 1489 02f9 030B0000 		.4byte	.LASF166
 1490 02fd 05       		.byte	0x5
 1491 02fe 01       		.uleb128 0x1
 1492 02ff 6D330000 		.4byte	.LASF167
 1493 0303 05       		.byte	0x5
 1494 0304 01       		.uleb128 0x1
 1495 0305 652F0000 		.4byte	.LASF168
 1496 0309 05       		.byte	0x5
 1497 030a 01       		.uleb128 0x1
 1498 030b 412C0000 		.4byte	.LASF169
 1499 030f 05       		.byte	0x5
 1500 0310 01       		.uleb128 0x1
 1501 0311 A8130000 		.4byte	.LASF170
 1502 0315 05       		.byte	0x5
 1503 0316 01       		.uleb128 0x1
 1504 0317 7A220000 		.4byte	.LASF171
 1505 031b 05       		.byte	0x5
 1506 031c 01       		.uleb128 0x1
 1507 031d 07020000 		.4byte	.LASF172
 1508 0321 05       		.byte	0x5
 1509 0322 01       		.uleb128 0x1
 1510 0323 091F0000 		.4byte	.LASF173
 1511 0327 05       		.byte	0x5
 1512 0328 01       		.uleb128 0x1
 1513 0329 56270000 		.4byte	.LASF174
 1514 032d 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 28


 1515 032e 01       		.uleb128 0x1
 1516 032f 590D0000 		.4byte	.LASF175
 1517 0333 05       		.byte	0x5
 1518 0334 01       		.uleb128 0x1
 1519 0335 BF150000 		.4byte	.LASF176
 1520 0339 05       		.byte	0x5
 1521 033a 01       		.uleb128 0x1
 1522 033b A4080000 		.4byte	.LASF177
 1523 033f 05       		.byte	0x5
 1524 0340 01       		.uleb128 0x1
 1525 0341 BA310000 		.4byte	.LASF178
 1526 0345 05       		.byte	0x5
 1527 0346 01       		.uleb128 0x1
 1528 0347 33050000 		.4byte	.LASF179
 1529 034b 05       		.byte	0x5
 1530 034c 01       		.uleb128 0x1
 1531 034d 261B0000 		.4byte	.LASF180
 1532 0351 05       		.byte	0x5
 1533 0352 01       		.uleb128 0x1
 1534 0353 49020000 		.4byte	.LASF181
 1535 0357 05       		.byte	0x5
 1536 0358 01       		.uleb128 0x1
 1537 0359 76150000 		.4byte	.LASF182
 1538 035d 05       		.byte	0x5
 1539 035e 01       		.uleb128 0x1
 1540 035f 681C0000 		.4byte	.LASF183
 1541 0363 05       		.byte	0x5
 1542 0364 01       		.uleb128 0x1
 1543 0365 BF320000 		.4byte	.LASF184
 1544 0369 05       		.byte	0x5
 1545 036a 01       		.uleb128 0x1
 1546 036b B1000000 		.4byte	.LASF185
 1547 036f 05       		.byte	0x5
 1548 0370 01       		.uleb128 0x1
 1549 0371 9C170000 		.4byte	.LASF186
 1550 0375 05       		.byte	0x5
 1551 0376 01       		.uleb128 0x1
 1552 0377 1B260000 		.4byte	.LASF187
 1553 037b 05       		.byte	0x5
 1554 037c 01       		.uleb128 0x1
 1555 037d FA060000 		.4byte	.LASF188
 1556 0381 05       		.byte	0x5
 1557 0382 01       		.uleb128 0x1
 1558 0383 0C2E0000 		.4byte	.LASF189
 1559 0387 05       		.byte	0x5
 1560 0388 01       		.uleb128 0x1
 1561 0389 D43D0000 		.4byte	.LASF190
 1562 038d 05       		.byte	0x5
 1563 038e 01       		.uleb128 0x1
 1564 038f 9E2F0000 		.4byte	.LASF191
 1565 0393 05       		.byte	0x5
 1566 0394 01       		.uleb128 0x1
 1567 0395 C00D0000 		.4byte	.LASF192
 1568 0399 05       		.byte	0x5
 1569 039a 01       		.uleb128 0x1
 1570 039b B81A0000 		.4byte	.LASF193
 1571 039f 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 29


 1572 03a0 01       		.uleb128 0x1
 1573 03a1 1A060000 		.4byte	.LASF194
 1574 03a5 05       		.byte	0x5
 1575 03a6 01       		.uleb128 0x1
 1576 03a7 BD1E0000 		.4byte	.LASF195
 1577 03ab 05       		.byte	0x5
 1578 03ac 01       		.uleb128 0x1
 1579 03ad E7270000 		.4byte	.LASF196
 1580 03b1 05       		.byte	0x5
 1581 03b2 01       		.uleb128 0x1
 1582 03b3 04240000 		.4byte	.LASF197
 1583 03b7 05       		.byte	0x5
 1584 03b8 01       		.uleb128 0x1
 1585 03b9 52200000 		.4byte	.LASF198
 1586 03bd 05       		.byte	0x5
 1587 03be 01       		.uleb128 0x1
 1588 03bf E5330000 		.4byte	.LASF199
 1589 03c3 05       		.byte	0x5
 1590 03c4 01       		.uleb128 0x1
 1591 03c5 561A0000 		.4byte	.LASF200
 1592 03c9 05       		.byte	0x5
 1593 03ca 01       		.uleb128 0x1
 1594 03cb 4D1E0000 		.4byte	.LASF201
 1595 03cf 05       		.byte	0x5
 1596 03d0 01       		.uleb128 0x1
 1597 03d1 452D0000 		.4byte	.LASF202
 1598 03d5 05       		.byte	0x5
 1599 03d6 01       		.uleb128 0x1
 1600 03d7 5B0F0000 		.4byte	.LASF203
 1601 03db 05       		.byte	0x5
 1602 03dc 01       		.uleb128 0x1
 1603 03dd 3C3F0000 		.4byte	.LASF204
 1604 03e1 05       		.byte	0x5
 1605 03e2 01       		.uleb128 0x1
 1606 03e3 871E0000 		.4byte	.LASF205
 1607 03e7 05       		.byte	0x5
 1608 03e8 01       		.uleb128 0x1
 1609 03e9 B3240000 		.4byte	.LASF206
 1610 03ed 05       		.byte	0x5
 1611 03ee 01       		.uleb128 0x1
 1612 03ef 9D1F0000 		.4byte	.LASF207
 1613 03f3 05       		.byte	0x5
 1614 03f4 01       		.uleb128 0x1
 1615 03f5 DE2C0000 		.4byte	.LASF208
 1616 03f9 05       		.byte	0x5
 1617 03fa 01       		.uleb128 0x1
 1618 03fb BF100000 		.4byte	.LASF209
 1619 03ff 05       		.byte	0x5
 1620 0400 01       		.uleb128 0x1
 1621 0401 3B0B0000 		.4byte	.LASF210
 1622 0405 05       		.byte	0x5
 1623 0406 01       		.uleb128 0x1
 1624 0407 2F180000 		.4byte	.LASF211
 1625 040b 05       		.byte	0x5
 1626 040c 01       		.uleb128 0x1
 1627 040d 01060000 		.4byte	.LASF212
 1628 0411 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 30


 1629 0412 01       		.uleb128 0x1
 1630 0413 D81B0000 		.4byte	.LASF213
 1631 0417 05       		.byte	0x5
 1632 0418 01       		.uleb128 0x1
 1633 0419 B33F0000 		.4byte	.LASF214
 1634 041d 05       		.byte	0x5
 1635 041e 01       		.uleb128 0x1
 1636 041f E7160000 		.4byte	.LASF215
 1637 0423 05       		.byte	0x5
 1638 0424 01       		.uleb128 0x1
 1639 0425 91230000 		.4byte	.LASF216
 1640 0429 05       		.byte	0x5
 1641 042a 01       		.uleb128 0x1
 1642 042b 5F3E0000 		.4byte	.LASF217
 1643 042f 05       		.byte	0x5
 1644 0430 01       		.uleb128 0x1
 1645 0431 9A0E0000 		.4byte	.LASF218
 1646 0435 05       		.byte	0x5
 1647 0436 01       		.uleb128 0x1
 1648 0437 2A010000 		.4byte	.LASF219
 1649 043b 05       		.byte	0x5
 1650 043c 01       		.uleb128 0x1
 1651 043d 66000000 		.4byte	.LASF220
 1652 0441 05       		.byte	0x5
 1653 0442 01       		.uleb128 0x1
 1654 0443 25100000 		.4byte	.LASF221
 1655 0447 05       		.byte	0x5
 1656 0448 01       		.uleb128 0x1
 1657 0449 760C0000 		.4byte	.LASF222
 1658 044d 05       		.byte	0x5
 1659 044e 01       		.uleb128 0x1
 1660 044f E51D0000 		.4byte	.LASF223
 1661 0453 05       		.byte	0x5
 1662 0454 01       		.uleb128 0x1
 1663 0455 EC040000 		.4byte	.LASF224
 1664 0459 05       		.byte	0x5
 1665 045a 01       		.uleb128 0x1
 1666 045b 84330000 		.4byte	.LASF225
 1667 045f 05       		.byte	0x5
 1668 0460 01       		.uleb128 0x1
 1669 0461 A2220000 		.4byte	.LASF226
 1670 0465 05       		.byte	0x5
 1671 0466 01       		.uleb128 0x1
 1672 0467 E5220000 		.4byte	.LASF227
 1673 046b 05       		.byte	0x5
 1674 046c 01       		.uleb128 0x1
 1675 046d 6A200000 		.4byte	.LASF228
 1676 0471 05       		.byte	0x5
 1677 0472 01       		.uleb128 0x1
 1678 0473 BE260000 		.4byte	.LASF229
 1679 0477 05       		.byte	0x5
 1680 0478 01       		.uleb128 0x1
 1681 0479 CF0F0000 		.4byte	.LASF230
 1682 047d 05       		.byte	0x5
 1683 047e 01       		.uleb128 0x1
 1684 047f EE0B0000 		.4byte	.LASF231
 1685 0483 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 31


 1686 0484 01       		.uleb128 0x1
 1687 0485 C1290000 		.4byte	.LASF232
 1688 0489 05       		.byte	0x5
 1689 048a 01       		.uleb128 0x1
 1690 048b 08260000 		.4byte	.LASF233
 1691 048f 05       		.byte	0x5
 1692 0490 01       		.uleb128 0x1
 1693 0491 A52D0000 		.4byte	.LASF234
 1694 0495 05       		.byte	0x5
 1695 0496 01       		.uleb128 0x1
 1696 0497 40030000 		.4byte	.LASF235
 1697 049b 05       		.byte	0x5
 1698 049c 01       		.uleb128 0x1
 1699 049d E7110000 		.4byte	.LASF236
 1700 04a1 05       		.byte	0x5
 1701 04a2 01       		.uleb128 0x1
 1702 04a3 85250000 		.4byte	.LASF237
 1703 04a7 05       		.byte	0x5
 1704 04a8 01       		.uleb128 0x1
 1705 04a9 EA150000 		.4byte	.LASF238
 1706 04ad 05       		.byte	0x5
 1707 04ae 01       		.uleb128 0x1
 1708 04af 3C1E0000 		.4byte	.LASF239
 1709 04b3 05       		.byte	0x5
 1710 04b4 01       		.uleb128 0x1
 1711 04b5 C00E0000 		.4byte	.LASF240
 1712 04b9 05       		.byte	0x5
 1713 04ba 01       		.uleb128 0x1
 1714 04bb 921D0000 		.4byte	.LASF241
 1715 04bf 05       		.byte	0x5
 1716 04c0 01       		.uleb128 0x1
 1717 04c1 DD2A0000 		.4byte	.LASF242
 1718 04c5 05       		.byte	0x5
 1719 04c6 01       		.uleb128 0x1
 1720 04c7 C51B0000 		.4byte	.LASF243
 1721 04cb 05       		.byte	0x5
 1722 04cc 01       		.uleb128 0x1
 1723 04cd 8B1F0000 		.4byte	.LASF244
 1724 04d1 05       		.byte	0x5
 1725 04d2 01       		.uleb128 0x1
 1726 04d3 D01D0000 		.4byte	.LASF245
 1727 04d7 05       		.byte	0x5
 1728 04d8 01       		.uleb128 0x1
 1729 04d9 D20B0000 		.4byte	.LASF246
 1730 04dd 05       		.byte	0x5
 1731 04de 01       		.uleb128 0x1
 1732 04df F5180000 		.4byte	.LASF247
 1733 04e3 05       		.byte	0x5
 1734 04e4 01       		.uleb128 0x1
 1735 04e5 4B180000 		.4byte	.LASF248
 1736 04e9 05       		.byte	0x5
 1737 04ea 01       		.uleb128 0x1
 1738 04eb 42070000 		.4byte	.LASF249
 1739 04ef 05       		.byte	0x5
 1740 04f0 01       		.uleb128 0x1
 1741 04f1 4A240000 		.4byte	.LASF250
 1742 04f5 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 32


 1743 04f6 01       		.uleb128 0x1
 1744 04f7 053E0000 		.4byte	.LASF251
 1745 04fb 05       		.byte	0x5
 1746 04fc 01       		.uleb128 0x1
 1747 04fd ED0D0000 		.4byte	.LASF252
 1748 0501 05       		.byte	0x5
 1749 0502 01       		.uleb128 0x1
 1750 0503 141D0000 		.4byte	.LASF253
 1751 0507 05       		.byte	0x5
 1752 0508 01       		.uleb128 0x1
 1753 0509 EC0C0000 		.4byte	.LASF254
 1754 050d 05       		.byte	0x5
 1755 050e 01       		.uleb128 0x1
 1756 050f 90140000 		.4byte	.LASF255
 1757 0513 05       		.byte	0x5
 1758 0514 01       		.uleb128 0x1
 1759 0515 81280000 		.4byte	.LASF256
 1760 0519 05       		.byte	0x5
 1761 051a 01       		.uleb128 0x1
 1762 051b 910C0000 		.4byte	.LASF257
 1763 051f 05       		.byte	0x5
 1764 0520 01       		.uleb128 0x1
 1765 0521 42270000 		.4byte	.LASF258
 1766 0525 05       		.byte	0x5
 1767 0526 01       		.uleb128 0x1
 1768 0527 FD0F0000 		.4byte	.LASF259
 1769 052b 05       		.byte	0x5
 1770 052c 01       		.uleb128 0x1
 1771 052d EC3E0000 		.4byte	.LASF260
 1772 0531 05       		.byte	0x5
 1773 0532 01       		.uleb128 0x1
 1774 0533 BD0A0000 		.4byte	.LASF261
 1775 0537 05       		.byte	0x5
 1776 0538 01       		.uleb128 0x1
 1777 0539 ED1F0000 		.4byte	.LASF262
 1778 053d 05       		.byte	0x5
 1779 053e 01       		.uleb128 0x1
 1780 053f DF1E0000 		.4byte	.LASF263
 1781 0543 05       		.byte	0x5
 1782 0544 01       		.uleb128 0x1
 1783 0545 EE070000 		.4byte	.LASF264
 1784 0549 05       		.byte	0x5
 1785 054a 01       		.uleb128 0x1
 1786 054b A70D0000 		.4byte	.LASF265
 1787 054f 05       		.byte	0x5
 1788 0550 01       		.uleb128 0x1
 1789 0551 C0040000 		.4byte	.LASF266
 1790 0555 05       		.byte	0x5
 1791 0556 01       		.uleb128 0x1
 1792 0557 1B3F0000 		.4byte	.LASF267
 1793 055b 05       		.byte	0x5
 1794 055c 01       		.uleb128 0x1
 1795 055d 560E0000 		.4byte	.LASF268
 1796 0561 05       		.byte	0x5
 1797 0562 01       		.uleb128 0x1
 1798 0563 A8310000 		.4byte	.LASF269
 1799 0567 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 33


 1800 0568 01       		.uleb128 0x1
 1801 0569 AD020000 		.4byte	.LASF270
 1802 056d 05       		.byte	0x5
 1803 056e 01       		.uleb128 0x1
 1804 056f 931A0000 		.4byte	.LASF271
 1805 0573 05       		.byte	0x5
 1806 0574 01       		.uleb128 0x1
 1807 0575 B7120000 		.4byte	.LASF272
 1808 0579 05       		.byte	0x5
 1809 057a 01       		.uleb128 0x1
 1810 057b 880F0000 		.4byte	.LASF273
 1811 057f 05       		.byte	0x5
 1812 0580 01       		.uleb128 0x1
 1813 0581 90150000 		.4byte	.LASF274
 1814 0585 05       		.byte	0x5
 1815 0586 01       		.uleb128 0x1
 1816 0587 8E2D0000 		.4byte	.LASF275
 1817 058b 05       		.byte	0x5
 1818 058c 01       		.uleb128 0x1
 1819 058d 84210000 		.4byte	.LASF276
 1820 0591 05       		.byte	0x5
 1821 0592 01       		.uleb128 0x1
 1822 0593 510B0000 		.4byte	.LASF277
 1823 0597 05       		.byte	0x5
 1824 0598 01       		.uleb128 0x1
 1825 0599 B4160000 		.4byte	.LASF278
 1826 059d 05       		.byte	0x5
 1827 059e 01       		.uleb128 0x1
 1828 059f 490F0000 		.4byte	.LASF279
 1829 05a3 05       		.byte	0x5
 1830 05a4 01       		.uleb128 0x1
 1831 05a5 2D1D0000 		.4byte	.LASF280
 1832 05a9 05       		.byte	0x5
 1833 05aa 01       		.uleb128 0x1
 1834 05ab 6D1F0000 		.4byte	.LASF281
 1835 05af 05       		.byte	0x5
 1836 05b0 01       		.uleb128 0x1
 1837 05b1 031A0000 		.4byte	.LASF282
 1838 05b5 05       		.byte	0x5
 1839 05b6 01       		.uleb128 0x1
 1840 05b7 1A400000 		.4byte	.LASF283
 1841 05bb 05       		.byte	0x5
 1842 05bc 01       		.uleb128 0x1
 1843 05bd 4D150000 		.4byte	.LASF284
 1844 05c1 05       		.byte	0x5
 1845 05c2 01       		.uleb128 0x1
 1846 05c3 D80D0000 		.4byte	.LASF285
 1847 05c7 05       		.byte	0x5
 1848 05c8 01       		.uleb128 0x1
 1849 05c9 66230000 		.4byte	.LASF286
 1850 05cd 05       		.byte	0x5
 1851 05ce 01       		.uleb128 0x1
 1852 05cf 2C0F0000 		.4byte	.LASF287
 1853 05d3 05       		.byte	0x5
 1854 05d4 01       		.uleb128 0x1
 1855 05d5 E2180000 		.4byte	.LASF288
 1856 05d9 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 34


 1857 05da 01       		.uleb128 0x1
 1858 05db BA110000 		.4byte	.LASF289
 1859 05df 05       		.byte	0x5
 1860 05e0 01       		.uleb128 0x1
 1861 05e1 3D080000 		.4byte	.LASF290
 1862 05e5 05       		.byte	0x5
 1863 05e6 01       		.uleb128 0x1
 1864 05e7 11220000 		.4byte	.LASF291
 1865 05eb 05       		.byte	0x5
 1866 05ec 01       		.uleb128 0x1
 1867 05ed 4F290000 		.4byte	.LASF292
 1868 05f1 05       		.byte	0x5
 1869 05f2 01       		.uleb128 0x1
 1870 05f3 BC1D0000 		.4byte	.LASF293
 1871 05f7 05       		.byte	0x5
 1872 05f8 01       		.uleb128 0x1
 1873 05f9 00170000 		.4byte	.LASF294
 1874 05fd 05       		.byte	0x5
 1875 05fe 01       		.uleb128 0x1
 1876 05ff 8D080000 		.4byte	.LASF295
 1877 0603 05       		.byte	0x5
 1878 0604 01       		.uleb128 0x1
 1879 0605 A80B0000 		.4byte	.LASF296
 1880 0609 05       		.byte	0x5
 1881 060a 01       		.uleb128 0x1
 1882 060b CD210000 		.4byte	.LASF297
 1883 060f 05       		.byte	0x5
 1884 0610 01       		.uleb128 0x1
 1885 0611 4B3E0000 		.4byte	.LASF298
 1886 0615 05       		.byte	0x5
 1887 0616 01       		.uleb128 0x1
 1888 0617 4D060000 		.4byte	.LASF299
 1889 061b 05       		.byte	0x5
 1890 061c 01       		.uleb128 0x1
 1891 061d 29120000 		.4byte	.LASF300
 1892 0621 05       		.byte	0x5
 1893 0622 01       		.uleb128 0x1
 1894 0623 BE130000 		.4byte	.LASF301
 1895 0627 05       		.byte	0x5
 1896 0628 01       		.uleb128 0x1
 1897 0629 E8130000 		.4byte	.LASF302
 1898 062d 05       		.byte	0x5
 1899 062e 01       		.uleb128 0x1
 1900 062f 872E0000 		.4byte	.LASF303
 1901 0633 05       		.byte	0x5
 1902 0634 01       		.uleb128 0x1
 1903 0635 CF250000 		.4byte	.LASF304
 1904 0639 05       		.byte	0x5
 1905 063a 01       		.uleb128 0x1
 1906 063b E8090000 		.4byte	.LASF305
 1907 063f 05       		.byte	0x5
 1908 0640 01       		.uleb128 0x1
 1909 0641 61080000 		.4byte	.LASF306
 1910 0645 05       		.byte	0x5
 1911 0646 01       		.uleb128 0x1
 1912 0647 923F0000 		.4byte	.LASF307
 1913 064b 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 35


 1914 064c 01       		.uleb128 0x1
 1915 064d F8320000 		.4byte	.LASF308
 1916 0651 05       		.byte	0x5
 1917 0652 01       		.uleb128 0x1
 1918 0653 C9010000 		.4byte	.LASF309
 1919 0657 05       		.byte	0x5
 1920 0658 01       		.uleb128 0x1
 1921 0659 48260000 		.4byte	.LASF310
 1922 065d 05       		.byte	0x5
 1923 065e 01       		.uleb128 0x1
 1924 065f 69170000 		.4byte	.LASF311
 1925 0663 05       		.byte	0x5
 1926 0664 01       		.uleb128 0x1
 1927 0665 1A240000 		.4byte	.LASF312
 1928 0669 05       		.byte	0x5
 1929 066a 01       		.uleb128 0x1
 1930 066b 67220000 		.4byte	.LASF313
 1931 066f 05       		.byte	0x5
 1932 0670 01       		.uleb128 0x1
 1933 0671 75210000 		.4byte	.LASF314
 1934 0675 05       		.byte	0x5
 1935 0676 01       		.uleb128 0x1
 1936 0677 FE2D0000 		.4byte	.LASF315
 1937 067b 05       		.byte	0x5
 1938 067c 01       		.uleb128 0x1
 1939 067d 75250000 		.4byte	.LASF316
 1940 0681 05       		.byte	0x5
 1941 0682 01       		.uleb128 0x1
 1942 0683 DF1A0000 		.4byte	.LASF317
 1943 0687 05       		.byte	0x5
 1944 0688 01       		.uleb128 0x1
 1945 0689 D6220000 		.4byte	.LASF318
 1946 068d 05       		.byte	0x5
 1947 068e 01       		.uleb128 0x1
 1948 068f 01270000 		.4byte	.LASF319
 1949 0693 05       		.byte	0x5
 1950 0694 01       		.uleb128 0x1
 1951 0695 A7230000 		.4byte	.LASF320
 1952 0699 05       		.byte	0x5
 1953 069a 01       		.uleb128 0x1
 1954 069b 5C130000 		.4byte	.LASF321
 1955 069f 05       		.byte	0x5
 1956 06a0 01       		.uleb128 0x1
 1957 06a1 E6290000 		.4byte	.LASF322
 1958 06a5 05       		.byte	0x5
 1959 06a6 01       		.uleb128 0x1
 1960 06a7 E2140000 		.4byte	.LASF323
 1961 06ab 05       		.byte	0x5
 1962 06ac 01       		.uleb128 0x1
 1963 06ad 4B190000 		.4byte	.LASF324
 1964 06b1 05       		.byte	0x5
 1965 06b2 01       		.uleb128 0x1
 1966 06b3 D7010000 		.4byte	.LASF325
 1967 06b7 05       		.byte	0x5
 1968 06b8 01       		.uleb128 0x1
 1969 06b9 D0190000 		.4byte	.LASF326
 1970 06bd 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 36


 1971 06be 01       		.uleb128 0x1
 1972 06bf FF0C0000 		.4byte	.LASF327
 1973 06c3 05       		.byte	0x5
 1974 06c4 01       		.uleb128 0x1
 1975 06c5 A3280000 		.4byte	.LASF328
 1976 06c9 05       		.byte	0x5
 1977 06ca 01       		.uleb128 0x1
 1978 06cb F6290000 		.4byte	.LASF329
 1979 06cf 05       		.byte	0x5
 1980 06d0 01       		.uleb128 0x1
 1981 06d1 76120000 		.4byte	.LASF330
 1982 06d5 05       		.byte	0x5
 1983 06d6 01       		.uleb128 0x1
 1984 06d7 AE0A0000 		.4byte	.LASF331
 1985 06db 05       		.byte	0x5
 1986 06dc 01       		.uleb128 0x1
 1987 06dd 110B0000 		.4byte	.LASF332
 1988 06e1 05       		.byte	0x5
 1989 06e2 01       		.uleb128 0x1
 1990 06e3 93110000 		.4byte	.LASF333
 1991 06e7 05       		.byte	0x5
 1992 06e8 01       		.uleb128 0x1
 1993 06e9 C8080000 		.4byte	.LASF334
 1994 06ed 05       		.byte	0x5
 1995 06ee 01       		.uleb128 0x1
 1996 06ef E9320000 		.4byte	.LASF335
 1997 06f3 05       		.byte	0x5
 1998 06f4 01       		.uleb128 0x1
 1999 06f5 ED1A0000 		.4byte	.LASF336
 2000 06f9 05       		.byte	0x5
 2001 06fa 01       		.uleb128 0x1
 2002 06fb 77260000 		.4byte	.LASF337
 2003 06ff 05       		.byte	0x5
 2004 0700 01       		.uleb128 0x1
 2005 0701 40170000 		.4byte	.LASF338
 2006 0705 05       		.byte	0x5
 2007 0706 01       		.uleb128 0x1
 2008 0707 ED0F0000 		.4byte	.LASF339
 2009 070b 05       		.byte	0x5
 2010 070c 01       		.uleb128 0x1
 2011 070d 253E0000 		.4byte	.LASF340
 2012 0711 05       		.byte	0x5
 2013 0712 01       		.uleb128 0x1
 2014 0713 02090000 		.4byte	.LASF341
 2015 0717 05       		.byte	0x5
 2016 0718 01       		.uleb128 0x1
 2017 0719 23050000 		.4byte	.LASF342
 2018 071d 05       		.byte	0x5
 2019 071e 01       		.uleb128 0x1
 2020 071f E93D0000 		.4byte	.LASF343
 2021 0723 05       		.byte	0x5
 2022 0724 01       		.uleb128 0x1
 2023 0725 AF060000 		.4byte	.LASF344
 2024 0729 05       		.byte	0x5
 2025 072a 01       		.uleb128 0x1
 2026 072b E6240000 		.4byte	.LASF345
 2027 072f 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 37


 2028 0730 01       		.uleb128 0x1
 2029 0731 68240000 		.4byte	.LASF346
 2030 0735 05       		.byte	0x5
 2031 0736 01       		.uleb128 0x1
 2032 0737 D4050000 		.4byte	.LASF347
 2033 073b 05       		.byte	0x5
 2034 073c 01       		.uleb128 0x1
 2035 073d 61110000 		.4byte	.LASF348
 2036 0741 05       		.byte	0x5
 2037 0742 01       		.uleb128 0x1
 2038 0743 381A0000 		.4byte	.LASF349
 2039 0747 05       		.byte	0x5
 2040 0748 01       		.uleb128 0x1
 2041 0749 28130000 		.4byte	.LASF350
 2042 074d 05       		.byte	0x5
 2043 074e 01       		.uleb128 0x1
 2044 074f 61020000 		.4byte	.LASF351
 2045 0753 05       		.byte	0x5
 2046 0754 01       		.uleb128 0x1
 2047 0755 322A0000 		.4byte	.LASF352
 2048 0759 05       		.byte	0x5
 2049 075a 01       		.uleb128 0x1
 2050 075b C6160000 		.4byte	.LASF353
 2051 075f 05       		.byte	0x5
 2052 0760 01       		.uleb128 0x1
 2053 0761 E52E0000 		.4byte	.LASF354
 2054 0765 05       		.byte	0x5
 2055 0766 01       		.uleb128 0x1
 2056 0767 DB0E0000 		.4byte	.LASF355
 2057 076b 05       		.byte	0x5
 2058 076c 01       		.uleb128 0x1
 2059 076d 12190000 		.4byte	.LASF356
 2060 0771 05       		.byte	0x5
 2061 0772 01       		.uleb128 0x1
 2062 0773 E82B0000 		.4byte	.LASF357
 2063 0777 05       		.byte	0x5
 2064 0778 01       		.uleb128 0x1
 2065 0779 851B0000 		.4byte	.LASF358
 2066 077d 05       		.byte	0x5
 2067 077e 01       		.uleb128 0x1
 2068 077f 0A290000 		.4byte	.LASF359
 2069 0783 05       		.byte	0x5
 2070 0784 01       		.uleb128 0x1
 2071 0785 A91B0000 		.4byte	.LASF360
 2072 0789 05       		.byte	0x5
 2073 078a 01       		.uleb128 0x1
 2074 078b 763E0000 		.4byte	.LASF361
 2075 078f 05       		.byte	0x5
 2076 0790 01       		.uleb128 0x1
 2077 0791 F41E0000 		.4byte	.LASF362
 2078 0795 05       		.byte	0x5
 2079 0796 01       		.uleb128 0x1
 2080 0797 CF020000 		.4byte	.LASF363
 2081 079b 05       		.byte	0x5
 2082 079c 01       		.uleb128 0x1
 2083 079d B80F0000 		.4byte	.LASF364
 2084 07a1 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 38


 2085 07a2 01       		.uleb128 0x1
 2086 07a3 AE1A0000 		.4byte	.LASF365
 2087 07a7 05       		.byte	0x5
 2088 07a8 01       		.uleb128 0x1
 2089 07a9 17320000 		.4byte	.LASF366
 2090 07ad 05       		.byte	0x5
 2091 07ae 01       		.uleb128 0x1
 2092 07af 2A060000 		.4byte	.LASF367
 2093 07b3 05       		.byte	0x5
 2094 07b4 01       		.uleb128 0x1
 2095 07b5 D7080000 		.4byte	.LASF368
 2096 07b9 05       		.byte	0x5
 2097 07ba 01       		.uleb128 0x1
 2098 07bb 85110000 		.4byte	.LASF369
 2099 07bf 05       		.byte	0x5
 2100 07c0 01       		.uleb128 0x1
 2101 07c1 6D2B0000 		.4byte	.LASF370
 2102 07c5 05       		.byte	0x5
 2103 07c6 01       		.uleb128 0x1
 2104 07c7 51280000 		.4byte	.LASF371
 2105 07cb 05       		.byte	0x5
 2106 07cc 01       		.uleb128 0x1
 2107 07cd D4150000 		.4byte	.LASF372
 2108 07d1 05       		.byte	0x5
 2109 07d2 01       		.uleb128 0x1
 2110 07d3 DC070000 		.4byte	.LASF373
 2111 07d7 05       		.byte	0x5
 2112 07d8 01       		.uleb128 0x1
 2113 07d9 C3200000 		.4byte	.LASF374
 2114 07dd 05       		.byte	0x5
 2115 07de 01       		.uleb128 0x1
 2116 07df 3F0C0000 		.4byte	.LASF375
 2117 07e3 05       		.byte	0x5
 2118 07e4 01       		.uleb128 0x1
 2119 07e5 13110000 		.4byte	.LASF376
 2120 07e9 05       		.byte	0x5
 2121 07ea 01       		.uleb128 0x1
 2122 07eb 3D1B0000 		.4byte	.LASF377
 2123 07ef 05       		.byte	0x5
 2124 07f0 00       		.uleb128 0
 2125 07f1 270B0000 		.4byte	.LASF378
 2126 07f5 00       		.byte	0
 2127              		.section	.debug_macro,"G",%progbits,wm4.newlib.h.8.a9901dc52d1357e3e94003403d43f8b5,comdat
 2128              	.Ldebug_macro2:
 2129 0000 0400     		.2byte	0x4
 2130 0002 00       		.byte	0
 2131 0003 05       		.byte	0x5
 2132 0004 08       		.uleb128 0x8
 2133 0005 A32B0000 		.4byte	.LASF379
 2134 0009 05       		.byte	0x5
 2135 000a 0E       		.uleb128 0xe
 2136 000b 25000000 		.4byte	.LASF380
 2137 000f 05       		.byte	0x5
 2138 0010 15       		.uleb128 0x15
 2139 0011 E92D0000 		.4byte	.LASF381
 2140 0015 05       		.byte	0x5
 2141 0016 18       		.uleb128 0x18
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 39


 2142 0017 5B010000 		.4byte	.LASF382
 2143 001b 05       		.byte	0x5
 2144 001c 28       		.uleb128 0x28
 2145 001d 8A320000 		.4byte	.LASF383
 2146 0021 05       		.byte	0x5
 2147 0022 32       		.uleb128 0x32
 2148 0023 46130000 		.4byte	.LASF384
 2149 0027 05       		.byte	0x5
 2150 0028 36       		.uleb128 0x36
 2151 0029 9C160000 		.4byte	.LASF385
 2152 002d 05       		.byte	0x5
 2153 002e 39       		.uleb128 0x39
 2154 002f D0170000 		.4byte	.LASF386
 2155 0033 05       		.byte	0x5
 2156 0034 3C       		.uleb128 0x3c
 2157 0035 6C160000 		.4byte	.LASF387
 2158 0039 00       		.byte	0
 2159              		.section	.debug_macro,"G",%progbits,wm4.features.h.22.b72b3baab2bb2eab3661375590100b6b,comdat
 2160              	.Ldebug_macro3:
 2161 0000 0400     		.2byte	0x4
 2162 0002 00       		.byte	0
 2163 0003 05       		.byte	0x5
 2164 0004 16       		.uleb128 0x16
 2165 0005 4E0C0000 		.4byte	.LASF388
 2166 0009 05       		.byte	0x5
 2167 000a 1F       		.uleb128 0x1f
 2168 000b E3020000 		.4byte	.LASF389
 2169 000f 00       		.byte	0
 2170              		.section	.debug_macro,"G",%progbits,wm4.config.h.193.5fb8ef056cdff92dec3dee9552839d8c,comdat
 2171              	.Ldebug_macro4:
 2172 0000 0400     		.2byte	0x4
 2173 0002 00       		.byte	0
 2174 0003 05       		.byte	0x5
 2175 0004 C101     		.uleb128 0xc1
 2176 0006 0D250000 		.4byte	.LASF390
 2177 000a 06       		.byte	0x6
 2178 000b C701     		.uleb128 0xc7
 2179 000d 86230000 		.4byte	.LASF391
 2180 0011 05       		.byte	0x5
 2181 0012 CB01     		.uleb128 0xcb
 2182 0014 A0270000 		.4byte	.LASF392
 2183 0018 05       		.byte	0x5
 2184 0019 DB01     		.uleb128 0xdb
 2185 001b 900E0000 		.4byte	.LASF393
 2186 001f 05       		.byte	0x5
 2187 0020 DF01     		.uleb128 0xdf
 2188 0022 DB330000 		.4byte	.LASF394
 2189 0026 05       		.byte	0x5
 2190 0027 E601     		.uleb128 0xe6
 2191 0029 93060000 		.4byte	.LASF395
 2192 002d 00       		.byte	0
 2193              		.section	.debug_macro,"G",%progbits,wm4._ansi.h.23.fff5fb436fa813a3c343750c1b5c0dee,comdat
 2194              	.Ldebug_macro5:
 2195 0000 0400     		.2byte	0x4
 2196 0002 00       		.byte	0
 2197 0003 05       		.byte	0x5
 2198 0004 17       		.uleb128 0x17
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 40


 2199 0005 822D0000 		.4byte	.LASF396
 2200 0009 05       		.byte	0x5
 2201 000a 22       		.uleb128 0x22
 2202 000b D0260000 		.4byte	.LASF397
 2203 000f 05       		.byte	0x5
 2204 0010 23       		.uleb128 0x23
 2205 0011 010A0000 		.4byte	.LASF398
 2206 0015 05       		.byte	0x5
 2207 0016 26       		.uleb128 0x26
 2208 0017 840D0000 		.4byte	.LASF399
 2209 001b 05       		.byte	0x5
 2210 001c 32       		.uleb128 0x32
 2211 001d 6F090000 		.4byte	.LASF400
 2212 0021 05       		.byte	0x5
 2213 0022 33       		.uleb128 0x33
 2214 0023 C9170000 		.4byte	.LASF401
 2215 0027 05       		.byte	0x5
 2216 0028 34       		.uleb128 0x34
 2217 0029 74050000 		.4byte	.LASF402
 2218 002d 05       		.byte	0x5
 2219 002e 35       		.uleb128 0x35
 2220 002f 9C100000 		.4byte	.LASF403
 2221 0033 05       		.byte	0x5
 2222 0034 36       		.uleb128 0x36
 2223 0035 FC140000 		.4byte	.LASF404
 2224 0039 05       		.byte	0x5
 2225 003a 37       		.uleb128 0x37
 2226 003b 7E2F0000 		.4byte	.LASF405
 2227 003f 05       		.byte	0x5
 2228 0040 38       		.uleb128 0x38
 2229 0041 612B0000 		.4byte	.LASF406
 2230 0045 05       		.byte	0x5
 2231 0046 39       		.uleb128 0x39
 2232 0047 FB000000 		.4byte	.LASF407
 2233 004b 05       		.byte	0x5
 2234 004c 40       		.uleb128 0x40
 2235 004d 49320000 		.4byte	.LASF408
 2236 0051 05       		.byte	0x5
 2237 0052 41       		.uleb128 0x41
 2238 0053 F8330000 		.4byte	.LASF409
 2239 0057 05       		.byte	0x5
 2240 0058 42       		.uleb128 0x42
 2241 0059 5E280000 		.4byte	.LASF410
 2242 005d 05       		.byte	0x5
 2243 005e 43       		.uleb128 0x43
 2244 005f 912A0000 		.4byte	.LASF411
 2245 0063 05       		.byte	0x5
 2246 0064 45       		.uleb128 0x45
 2247 0065 F1200000 		.4byte	.LASF412
 2248 0069 05       		.byte	0x5
 2249 006a 46       		.uleb128 0x46
 2250 006b 82030000 		.4byte	.LASF413
 2251 006f 05       		.byte	0x5
 2252 0070 47       		.uleb128 0x47
 2253 0071 CD1A0000 		.4byte	.LASF414
 2254 0075 05       		.byte	0x5
 2255 0076 49       		.uleb128 0x49
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 41


 2256 0077 50170000 		.4byte	.LASF415
 2257 007b 05       		.byte	0x5
 2258 007c 4C       		.uleb128 0x4c
 2259 007d 3C100000 		.4byte	.LASF416
 2260 0081 05       		.byte	0x5
 2261 0082 4F       		.uleb128 0x4f
 2262 0083 BE330000 		.4byte	.LASF417
 2263 0087 05       		.byte	0x5
 2264 0088 69       		.uleb128 0x69
 2265 0089 392B0000 		.4byte	.LASF418
 2266 008d 05       		.byte	0x5
 2267 008e 7C       		.uleb128 0x7c
 2268 008f 8C190000 		.4byte	.LASF419
 2269 0093 05       		.byte	0x5
 2270 0094 8401     		.uleb128 0x84
 2271 0096 3D250000 		.4byte	.LASF420
 2272 009a 05       		.byte	0x5
 2273 009b 8501     		.uleb128 0x85
 2274 009d 89240000 		.4byte	.LASF421
 2275 00a1 00       		.byte	0
 2276              		.section	.debug_macro,"G",%progbits,wm4.stdlib.h.13.603ed7eb09a1561ab06840b7c0fcff58,comdat
 2277              	.Ldebug_macro6:
 2278 0000 0400     		.2byte	0x4
 2279 0002 00       		.byte	0
 2280 0003 05       		.byte	0x5
 2281 0004 0D       		.uleb128 0xd
 2282 0005 AB200000 		.4byte	.LASF422
 2283 0009 05       		.byte	0x5
 2284 000a 0E       		.uleb128 0xe
 2285 000b 161B0000 		.4byte	.LASF423
 2286 000f 00       		.byte	0
 2287              		.section	.debug_macro,"G",%progbits,wm4.stddef.h.187.40b3a084f9bc2c020a9e00b9eabe9c14,comdat
 2288              	.Ldebug_macro7:
 2289 0000 0400     		.2byte	0x4
 2290 0002 00       		.byte	0
 2291 0003 05       		.byte	0x5
 2292 0004 BB01     		.uleb128 0xbb
 2293 0006 863F0000 		.4byte	.LASF424
 2294 000a 05       		.byte	0x5
 2295 000b BC01     		.uleb128 0xbc
 2296 000d B21C0000 		.4byte	.LASF425
 2297 0011 05       		.byte	0x5
 2298 0012 BD01     		.uleb128 0xbd
 2299 0014 37030000 		.4byte	.LASF426
 2300 0018 05       		.byte	0x5
 2301 0019 BE01     		.uleb128 0xbe
 2302 001b 2E250000 		.4byte	.LASF427
 2303 001f 05       		.byte	0x5
 2304 0020 BF01     		.uleb128 0xbf
 2305 0022 36160000 		.4byte	.LASF428
 2306 0026 05       		.byte	0x5
 2307 0027 C001     		.uleb128 0xc0
 2308 0029 BA200000 		.4byte	.LASF429
 2309 002d 05       		.byte	0x5
 2310 002e C101     		.uleb128 0xc1
 2311 0030 783D0000 		.4byte	.LASF430
 2312 0034 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 42


 2313 0035 C201     		.uleb128 0xc2
 2314 0037 00000000 		.4byte	.LASF431
 2315 003b 05       		.byte	0x5
 2316 003c C301     		.uleb128 0xc3
 2317 003e E70A0000 		.4byte	.LASF432
 2318 0042 05       		.byte	0x5
 2319 0043 C401     		.uleb128 0xc4
 2320 0045 02120000 		.4byte	.LASF433
 2321 0049 05       		.byte	0x5
 2322 004a C501     		.uleb128 0xc5
 2323 004c 7F140000 		.4byte	.LASF434
 2324 0050 05       		.byte	0x5
 2325 0051 C601     		.uleb128 0xc6
 2326 0053 920B0000 		.4byte	.LASF435
 2327 0057 05       		.byte	0x5
 2328 0058 C701     		.uleb128 0xc7
 2329 005a 78320000 		.4byte	.LASF436
 2330 005e 05       		.byte	0x5
 2331 005f C801     		.uleb128 0xc8
 2332 0061 9D0A0000 		.4byte	.LASF437
 2333 0065 05       		.byte	0x5
 2334 0066 C901     		.uleb128 0xc9
 2335 0068 210A0000 		.4byte	.LASF438
 2336 006c 05       		.byte	0x5
 2337 006d CA01     		.uleb128 0xca
 2338 006f 93170000 		.4byte	.LASF439
 2339 0073 05       		.byte	0x5
 2340 0074 CF01     		.uleb128 0xcf
 2341 0076 7D1C0000 		.4byte	.LASF440
 2342 007a 06       		.byte	0x6
 2343 007b EB01     		.uleb128 0xeb
 2344 007d B21F0000 		.4byte	.LASF441
 2345 0081 05       		.byte	0x5
 2346 0082 8802     		.uleb128 0x108
 2347 0084 42290000 		.4byte	.LASF442
 2348 0088 05       		.byte	0x5
 2349 0089 8902     		.uleb128 0x109
 2350 008b BB080000 		.4byte	.LASF443
 2351 008f 05       		.byte	0x5
 2352 0090 8A02     		.uleb128 0x10a
 2353 0092 632A0000 		.4byte	.LASF444
 2354 0096 05       		.byte	0x5
 2355 0097 8B02     		.uleb128 0x10b
 2356 0099 C2210000 		.4byte	.LASF445
 2357 009d 05       		.byte	0x5
 2358 009e 8C02     		.uleb128 0x10c
 2359 00a0 2F2B0000 		.4byte	.LASF446
 2360 00a4 05       		.byte	0x5
 2361 00a5 8D02     		.uleb128 0x10d
 2362 00a7 D9030000 		.4byte	.LASF447
 2363 00ab 05       		.byte	0x5
 2364 00ac 8E02     		.uleb128 0x10e
 2365 00ae F1140000 		.4byte	.LASF448
 2366 00b2 05       		.byte	0x5
 2367 00b3 8F02     		.uleb128 0x10f
 2368 00b5 402E0000 		.4byte	.LASF449
 2369 00b9 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 43


 2370 00ba 9002     		.uleb128 0x110
 2371 00bc 0E0A0000 		.4byte	.LASF450
 2372 00c0 05       		.byte	0x5
 2373 00c1 9102     		.uleb128 0x111
 2374 00c3 2C1C0000 		.4byte	.LASF451
 2375 00c7 05       		.byte	0x5
 2376 00c8 9202     		.uleb128 0x112
 2377 00ca 82010000 		.4byte	.LASF452
 2378 00ce 05       		.byte	0x5
 2379 00cf 9302     		.uleb128 0x113
 2380 00d1 E9000000 		.4byte	.LASF453
 2381 00d5 05       		.byte	0x5
 2382 00d6 9402     		.uleb128 0x114
 2383 00d8 D8000000 		.4byte	.LASF454
 2384 00dc 05       		.byte	0x5
 2385 00dd 9502     		.uleb128 0x115
 2386 00df F50A0000 		.4byte	.LASF455
 2387 00e3 05       		.byte	0x5
 2388 00e4 9602     		.uleb128 0x116
 2389 00e6 4C0A0000 		.4byte	.LASF456
 2390 00ea 06       		.byte	0x6
 2391 00eb A302     		.uleb128 0x123
 2392 00ed A2030000 		.4byte	.LASF457
 2393 00f1 06       		.byte	0x6
 2394 00f2 D802     		.uleb128 0x158
 2395 00f4 AA180000 		.4byte	.LASF458
 2396 00f8 06       		.byte	0x6
 2397 00f9 9903     		.uleb128 0x199
 2398 00fb 3E240000 		.4byte	.LASF459
 2399 00ff 00       		.byte	0
 2400              		.section	.debug_macro,"G",%progbits,wm4._default_types.h.6.5e12cd604db8ce00b62bb2f02708eaf3,comdat
 2401              	.Ldebug_macro8:
 2402 0000 0400     		.2byte	0x4
 2403 0002 00       		.byte	0
 2404 0003 05       		.byte	0x5
 2405 0004 06       		.uleb128 0x6
 2406 0005 5B190000 		.4byte	.LASF460
 2407 0009 05       		.byte	0x5
 2408 000a 11       		.uleb128 0x11
 2409 000b 29240000 		.4byte	.LASF461
 2410 000f 05       		.byte	0x5
 2411 0010 1B       		.uleb128 0x1b
 2412 0011 6F0B0000 		.4byte	.LASF462
 2413 0015 05       		.byte	0x5
 2414 0016 25       		.uleb128 0x25
 2415 0017 14120000 		.4byte	.LASF463
 2416 001b 05       		.byte	0x5
 2417 001c 2F       		.uleb128 0x2f
 2418 001d E4170000 		.4byte	.LASF464
 2419 0021 05       		.byte	0x5
 2420 0022 3B       		.uleb128 0x3b
 2421 0023 D8120000 		.4byte	.LASF465
 2422 0027 05       		.byte	0x5
 2423 0028 4D       		.uleb128 0x4d
 2424 0029 C7180000 		.4byte	.LASF466
 2425 002d 05       		.byte	0x5
 2426 002e 64       		.uleb128 0x64
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 44


 2427 002f 10100000 		.4byte	.LASF467
 2428 0033 06       		.byte	0x6
 2429 0034 72       		.uleb128 0x72
 2430 0035 C62E0000 		.4byte	.LASF468
 2431 0039 00       		.byte	0
 2432              		.section	.debug_macro,"G",%progbits,wm4.lock.h.2.9bc98482741e5e2a9450b12934a684ea,comdat
 2433              	.Ldebug_macro9:
 2434 0000 0400     		.2byte	0x4
 2435 0002 00       		.byte	0
 2436 0003 05       		.byte	0x5
 2437 0004 02       		.uleb128 0x2
 2438 0005 06330000 		.4byte	.LASF469
 2439 0009 05       		.byte	0x5
 2440 000a 0B       		.uleb128 0xb
 2441 000b 5C100000 		.4byte	.LASF470
 2442 000f 05       		.byte	0x5
 2443 0010 0C       		.uleb128 0xc
 2444 0011 16210000 		.4byte	.LASF471
 2445 0015 05       		.byte	0x5
 2446 0016 0D       		.uleb128 0xd
 2447 0017 A1210000 		.4byte	.LASF472
 2448 001b 05       		.byte	0x5
 2449 001c 0E       		.uleb128 0xe
 2450 001d 81050000 		.4byte	.LASF473
 2451 0021 05       		.byte	0x5
 2452 0022 0F       		.uleb128 0xf
 2453 0023 90070000 		.4byte	.LASF474
 2454 0027 05       		.byte	0x5
 2455 0028 10       		.uleb128 0x10
 2456 0029 CF230000 		.4byte	.LASF475
 2457 002d 05       		.byte	0x5
 2458 002e 11       		.uleb128 0x11
 2459 002f A22E0000 		.4byte	.LASF476
 2460 0033 05       		.byte	0x5
 2461 0034 12       		.uleb128 0x12
 2462 0035 372F0000 		.4byte	.LASF477
 2463 0039 05       		.byte	0x5
 2464 003a 13       		.uleb128 0x13
 2465 003b 15080000 		.4byte	.LASF478
 2466 003f 05       		.byte	0x5
 2467 0040 14       		.uleb128 0x14
 2468 0041 5F0A0000 		.4byte	.LASF479
 2469 0045 05       		.byte	0x5
 2470 0046 15       		.uleb128 0x15
 2471 0047 06010000 		.4byte	.LASF480
 2472 004b 05       		.byte	0x5
 2473 004c 16       		.uleb128 0x16
 2474 004d 16330000 		.4byte	.LASF481
 2475 0051 00       		.byte	0
 2476              		.section	.debug_macro,"G",%progbits,wm4.stddef.h.349.31f4c5baff3fa2689010b32028da9c47,comdat
 2477              	.Ldebug_macro10:
 2478 0000 0400     		.2byte	0x4
 2479 0002 00       		.byte	0
 2480 0003 05       		.byte	0x5
 2481 0004 DD02     		.uleb128 0x15d
 2482 0006 D61E0000 		.4byte	.LASF482
 2483 000a 06       		.byte	0x6
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 45


 2484 000b E402     		.uleb128 0x164
 2485 000d 74040000 		.4byte	.LASF483
 2486 0011 06       		.byte	0x6
 2487 0012 9903     		.uleb128 0x199
 2488 0014 3E240000 		.4byte	.LASF459
 2489 0018 00       		.byte	0
 2490              		.section	.debug_macro,"G",%progbits,wm4.reent.h.16.9e42f0e588b85e70b2bf6572af57ce64,comdat
 2491              	.Ldebug_macro11:
 2492 0000 0400     		.2byte	0x4
 2493 0002 00       		.byte	0
 2494 0003 05       		.byte	0x5
 2495 0004 10       		.uleb128 0x10
 2496 0005 351B0000 		.4byte	.LASF484
 2497 0009 05       		.byte	0x5
 2498 000a 14       		.uleb128 0x14
 2499 000b 910A0000 		.4byte	.LASF485
 2500 000f 05       		.byte	0x5
 2501 0010 45       		.uleb128 0x45
 2502 0011 FD240000 		.4byte	.LASF486
 2503 0015 05       		.byte	0x5
 2504 0016 A601     		.uleb128 0xa6
 2505 0018 2B020000 		.4byte	.LASF487
 2506 001c 05       		.byte	0x5
 2507 001d AA02     		.uleb128 0x12a
 2508 001f D0090000 		.4byte	.LASF488
 2509 0023 05       		.byte	0x5
 2510 0024 AB02     		.uleb128 0x12b
 2511 0026 2D2D0000 		.4byte	.LASF489
 2512 002a 05       		.byte	0x5
 2513 002b AC02     		.uleb128 0x12c
 2514 002d 49110000 		.4byte	.LASF490
 2515 0031 05       		.byte	0x5
 2516 0032 AD02     		.uleb128 0x12d
 2517 0034 B0030000 		.4byte	.LASF491
 2518 0038 05       		.byte	0x5
 2519 0039 AE02     		.uleb128 0x12e
 2520 003b 07140000 		.4byte	.LASF492
 2521 003f 05       		.byte	0x5
 2522 0040 AF02     		.uleb128 0x12f
 2523 0042 9A1C0000 		.4byte	.LASF493
 2524 0046 05       		.byte	0x5
 2525 0047 B002     		.uleb128 0x130
 2526 0049 34110000 		.4byte	.LASF494
 2527 004d 05       		.byte	0x5
 2528 004e BC02     		.uleb128 0x13c
 2529 0050 B22B0000 		.4byte	.LASF495
 2530 0054 05       		.byte	0x5
 2531 0055 BD02     		.uleb128 0x13d
 2532 0057 B2090000 		.4byte	.LASF496
 2533 005b 05       		.byte	0x5
 2534 005c BE02     		.uleb128 0x13e
 2535 005e 353E0000 		.4byte	.LASF497
 2536 0062 05       		.byte	0x5
 2537 0063 FE04     		.uleb128 0x27e
 2538 0065 F93D0000 		.4byte	.LASF498
 2539 0069 05       		.byte	0x5
 2540 006a 9205     		.uleb128 0x292
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 46


 2541 006c B52F0000 		.4byte	.LASF499
 2542 0070 05       		.byte	0x5
 2543 0071 C305     		.uleb128 0x2c3
 2544 0073 2A340000 		.4byte	.LASF500
 2545 0077 05       		.byte	0x5
 2546 0078 8106     		.uleb128 0x301
 2547 007a 1E1A0000 		.4byte	.LASF501
 2548 007e 05       		.byte	0x5
 2549 007f 8206     		.uleb128 0x302
 2550 0081 A71E0000 		.4byte	.LASF502
 2551 0085 05       		.byte	0x5
 2552 0086 8306     		.uleb128 0x303
 2553 0088 56160000 		.4byte	.LASF503
 2554 008c 05       		.byte	0x5
 2555 008d 8406     		.uleb128 0x304
 2556 008f 042F0000 		.4byte	.LASF504
 2557 0093 05       		.byte	0x5
 2558 0094 8506     		.uleb128 0x305
 2559 0096 CB2B0000 		.4byte	.LASF505
 2560 009a 05       		.byte	0x5
 2561 009b 8606     		.uleb128 0x306
 2562 009d 501C0000 		.4byte	.LASF506
 2563 00a1 05       		.byte	0x5
 2564 00a2 8706     		.uleb128 0x307
 2565 00a4 05050000 		.4byte	.LASF507
 2566 00a8 05       		.byte	0x5
 2567 00a9 8906     		.uleb128 0x309
 2568 00ab 89290000 		.4byte	.LASF508
 2569 00af 05       		.byte	0x5
 2570 00b0 8A06     		.uleb128 0x30a
 2571 00b2 49140000 		.4byte	.LASF509
 2572 00b6 05       		.byte	0x5
 2573 00b7 8B06     		.uleb128 0x30b
 2574 00b9 86260000 		.4byte	.LASF510
 2575 00bd 05       		.byte	0x5
 2576 00be 8C06     		.uleb128 0x30c
 2577 00c0 070C0000 		.4byte	.LASF511
 2578 00c4 05       		.byte	0x5
 2579 00c5 8D06     		.uleb128 0x30d
 2580 00c7 0C200000 		.4byte	.LASF512
 2581 00cb 05       		.byte	0x5
 2582 00cc 8E06     		.uleb128 0x30e
 2583 00ce BB140000 		.4byte	.LASF513
 2584 00d2 05       		.byte	0x5
 2585 00d3 8F06     		.uleb128 0x30f
 2586 00d5 57030000 		.4byte	.LASF514
 2587 00d9 05       		.byte	0x5
 2588 00da 9006     		.uleb128 0x310
 2589 00dc E6010000 		.4byte	.LASF515
 2590 00e0 05       		.byte	0x5
 2591 00e1 9106     		.uleb128 0x311
 2592 00e3 8C120000 		.4byte	.LASF516
 2593 00e7 05       		.byte	0x5
 2594 00e8 9206     		.uleb128 0x312
 2595 00ea FC150000 		.4byte	.LASF517
 2596 00ee 05       		.byte	0x5
 2597 00ef 9306     		.uleb128 0x313
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 47


 2598 00f1 F80E0000 		.4byte	.LASF518
 2599 00f5 05       		.byte	0x5
 2600 00f6 9406     		.uleb128 0x314
 2601 00f8 1F140000 		.4byte	.LASF519
 2602 00fc 05       		.byte	0x5
 2603 00fd 9506     		.uleb128 0x315
 2604 00ff 17280000 		.4byte	.LASF520
 2605 0103 05       		.byte	0x5
 2606 0104 9606     		.uleb128 0x316
 2607 0106 072C0000 		.4byte	.LASF521
 2608 010a 05       		.byte	0x5
 2609 010b 9706     		.uleb128 0x317
 2610 010d 54070000 		.4byte	.LASF522
 2611 0111 05       		.byte	0x5
 2612 0112 9806     		.uleb128 0x318
 2613 0114 F1030000 		.4byte	.LASF523
 2614 0118 05       		.byte	0x5
 2615 0119 9906     		.uleb128 0x319
 2616 011b 942C0000 		.4byte	.LASF524
 2617 011f 05       		.byte	0x5
 2618 0120 9A06     		.uleb128 0x31a
 2619 0122 0F150000 		.4byte	.LASF525
 2620 0126 05       		.byte	0x5
 2621 0127 9B06     		.uleb128 0x31b
 2622 0129 823D0000 		.4byte	.LASF526
 2623 012d 05       		.byte	0x5
 2624 012e 9C06     		.uleb128 0x31c
 2625 0130 471B0000 		.4byte	.LASF527
 2626 0134 05       		.byte	0x5
 2627 0135 9D06     		.uleb128 0x31d
 2628 0137 AA3E0000 		.4byte	.LASF528
 2629 013b 05       		.byte	0x5
 2630 013c 9E06     		.uleb128 0x31e
 2631 013e 523F0000 		.4byte	.LASF529
 2632 0142 05       		.byte	0x5
 2633 0143 9F06     		.uleb128 0x31f
 2634 0145 D4100000 		.4byte	.LASF530
 2635 0149 05       		.byte	0x5
 2636 014a A006     		.uleb128 0x320
 2637 014c FD1D0000 		.4byte	.LASF531
 2638 0150 05       		.byte	0x5
 2639 0151 A706     		.uleb128 0x327
 2640 0153 6C290000 		.4byte	.LASF532
 2641 0157 05       		.byte	0x5
 2642 0158 AF06     		.uleb128 0x32f
 2643 015a 781D0000 		.4byte	.LASF533
 2644 015e 05       		.byte	0x5
 2645 015f C106     		.uleb128 0x341
 2646 0161 2D1F0000 		.4byte	.LASF534
 2647 0165 05       		.byte	0x5
 2648 0166 C606     		.uleb128 0x346
 2649 0168 680E0000 		.4byte	.LASF535
 2650 016c 00       		.byte	0
 2651              		.section	.debug_macro,"G",%progbits,wm4.alloca.h.8.dfc0c703c47ec3e69746825b17d9e66d,comdat
 2652              	.Ldebug_macro12:
 2653 0000 0400     		.2byte	0x4
 2654 0002 00       		.byte	0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 48


 2655 0003 05       		.byte	0x5
 2656 0004 08       		.uleb128 0x8
 2657 0005 90220000 		.4byte	.LASF536
 2658 0009 06       		.byte	0x6
 2659 000a 0D       		.uleb128 0xd
 2660 000b C9090000 		.4byte	.LASF537
 2661 000f 05       		.byte	0x5
 2662 0010 10       		.uleb128 0x10
 2663 0011 25320000 		.4byte	.LASF538
 2664 0015 00       		.byte	0
 2665              		.section	.debug_macro,"G",%progbits,wm4.stdlib.h.50.f5923f1950ced340a337f4676566f65a,comdat
 2666              	.Ldebug_macro13:
 2667 0000 0400     		.2byte	0x4
 2668 0002 00       		.byte	0
 2669 0003 05       		.byte	0x5
 2670 0004 32       		.uleb128 0x32
 2671 0005 890E0000 		.4byte	.LASF539
 2672 0009 05       		.byte	0x5
 2673 000a 35       		.uleb128 0x35
 2674 000b B82D0000 		.4byte	.LASF540
 2675 000f 05       		.byte	0x5
 2676 0010 36       		.uleb128 0x36
 2677 0011 B6270000 		.4byte	.LASF541
 2678 0015 05       		.byte	0x5
 2679 0016 38       		.uleb128 0x38
 2680 0017 B1280000 		.4byte	.LASF542
 2681 001b 05       		.byte	0x5
 2682 001c 3C       		.uleb128 0x3c
 2683 001d BE1C0000 		.4byte	.LASF543
 2684 0021 05       		.byte	0x5
 2685 0022 8401     		.uleb128 0x84
 2686 0024 121C0000 		.4byte	.LASF544
 2687 0028 00       		.byte	0
 2688              		.section	.debug_line,"",%progbits
 2689              	.Ldebug_line0:
 2690 0000 43030000 		.section	.debug_str,"MS",%progbits,1
 2690      0200CD02 
 2690      00000201 
 2690      FB0E0D00 
 2690      01010101 
 2691              	.LASF431:
 2692 0000 5F53495A 		.ascii	"_SIZE_T_ \000"
 2692      455F545F 
 2692      2000
 2693              	.LASF120:
 2694 000a 5F5F5054 		.ascii	"__PTRDIFF_MAX__ 2147483647\000"
 2694      52444946 
 2694      465F4D41 
 2694      585F5F20 
 2694      32313437 
 2695              	.LASF380:
 2696 0025 5F4E4557 		.ascii	"_NEWLIB_VERSION \"1.19.0\"\000"
 2696      4C49425F 
 2696      56455253 
 2696      494F4E20 
 2696      22312E31 
 2697              	.LASF115:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 49


 2698 003e 5F5F4C4F 		.ascii	"__LONG_LONG_MAX__ 9223372036854775807LL\000"
 2698      4E475F4C 
 2698      4F4E475F 
 2698      4D41585F 
 2698      5F203932 
 2699              	.LASF220:
 2700 0066 5F5F4445 		.ascii	"__DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD\000"
 2700      4336345F 
 2700      5355424E 
 2700      4F524D41 
 2700      4C5F4D49 
 2701              	.LASF116:
 2702 0097 5F5F5743 		.ascii	"__WCHAR_MAX__ 4294967295U\000"
 2702      4841525F 
 2702      4D41585F 
 2702      5F203432 
 2702      39343936 
 2703              	.LASF185:
 2704 00b1 5F5F4442 		.ascii	"__DBL_DECIMAL_DIG__ 17\000"
 2704      4C5F4445 
 2704      43494D41 
 2704      4C5F4449 
 2704      475F5F20 
 2705              	.LASF14:
 2706 00c8 6F706572 		.ascii	"operator new []\000"
 2706      61746F72 
 2706      206E6577 
 2706      205B5D00 
 2707              	.LASF454:
 2708 00d8 5F5F494E 		.ascii	"__INT_WCHAR_T_H \000"
 2708      545F5743 
 2708      4841525F 
 2708      545F4820 
 2708      00
 2709              	.LASF453:
 2710 00e9 5F5F5F69 		.ascii	"___int_wchar_t_h \000"
 2710      6E745F77 
 2710      63686172 
 2710      5F745F68 
 2710      2000
 2711              	.LASF407:
 2712 00fb 5F564F49 		.ascii	"_VOID void\000"
 2712      4420766F 
 2712      696400
 2713              	.LASF480:
 2714 0106 5F5F6C6F 		.ascii	"__lock_release(lock) (_CAST_VOID 0)\000"
 2714      636B5F72 
 2714      656C6561 
 2714      7365286C 
 2714      6F636B29 
 2715              	.LASF219:
 2716 012a 5F5F4445 		.ascii	"__DEC64_EPSILON__ 1E-15DD\000"
 2716      4336345F 
 2716      45505349 
 2716      4C4F4E5F 
 2716      5F203145 
 2717              	.LASF136:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 50


 2718 0144 5F5F494E 		.ascii	"__INT_LEAST8_MAX__ 127\000"
 2718      545F4C45 
 2718      41535438 
 2718      5F4D4158 
 2718      5F5F2031 
 2719              	.LASF382:
 2720 015b 5F57414E 		.ascii	"_WANT_REGISTER_FINI 1\000"
 2720      545F5245 
 2720      47495354 
 2720      45525F46 
 2720      494E4920 
 2721              	.LASF128:
 2722 0171 5F5F494E 		.ascii	"__INT8_MAX__ 127\000"
 2722      54385F4D 
 2722      41585F5F 
 2722      20313237 
 2722      00
 2723              	.LASF452:
 2724 0182 5F574348 		.ascii	"_WCHAR_T_H \000"
 2724      41525F54 
 2724      5F482000 
 2725              	.LASF145:
 2726 018e 5F5F5549 		.ascii	"__UINT8_C(c) c\000"
 2726      4E54385F 
 2726      43286329 
 2726      206300
 2727              	.LASF130:
 2728 019d 5F5F494E 		.ascii	"__INT32_MAX__ 2147483647L\000"
 2728      5433325F 
 2728      4D41585F 
 2728      5F203231 
 2728      34373438 
 2729              	.LASF34:
 2730 01b7 5F5F5359 		.ascii	"__SYS_CONFIG_H__ \000"
 2730      535F434F 
 2730      4E464947 
 2730      5F485F5F 
 2730      2000
 2731              	.LASF309:
 2732 01c9 5F5F5151 		.ascii	"__QQ_IBIT__ 0\000"
 2732      5F494249 
 2732      545F5F20 
 2732      3000
 2733              	.LASF325:
 2734 01d7 5F5F5544 		.ascii	"__UDQ_IBIT__ 0\000"
 2734      515F4942 
 2734      49545F5F 
 2734      203000
 2735              	.LASF515:
 2736 01e6 5F524545 		.ascii	"_REENT_MP_P5S(ptr) ((ptr)->_p5s)\000"
 2736      4E545F4D 
 2736      505F5035 
 2736      53287074 
 2736      72292028 
 2737              	.LASF172:
 2738 0207 5F5F464C 		.ascii	"__FLT_MAX__ 3.4028234663852886e+38F\000"
 2738      545F4D41 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 51


 2738      585F5F20 
 2738      332E3430 
 2738      32383233 
 2739              	.LASF487:
 2740 022b 5F524545 		.ascii	"_REENT_SMALL_CHECK_INIT(ptr) \000"
 2740      4E545F53 
 2740      4D414C4C 
 2740      5F434845 
 2740      434B5F49 
 2741              	.LASF181:
 2742 0249 5F5F4442 		.ascii	"__DBL_MIN_EXP__ (-1021)\000"
 2742      4C5F4D49 
 2742      4E5F4558 
 2742      505F5F20 
 2742      282D3130 
 2743              	.LASF351:
 2744 0261 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR16_T_LOCK_FREE 1\000"
 2744      435F4154 
 2744      4F4D4943 
 2744      5F434841 
 2744      5231365F 
 2745              	.LASF142:
 2746 0283 5F5F494E 		.ascii	"__INT_LEAST64_MAX__ 9223372036854775807LL\000"
 2746      545F4C45 
 2746      41535436 
 2746      345F4D41 
 2746      585F5F20 
 2747              	.LASF270:
 2748 02ad 5F5F5341 		.ascii	"__SACCUM_MIN__ (-0X1P7HK-0X1P7HK)\000"
 2748      4343554D 
 2748      5F4D494E 
 2748      5F5F2028 
 2748      2D305831 
 2749              	.LASF363:
 2750 02cf 5F5F5349 		.ascii	"__SIZEOF_WINT_T__ 4\000"
 2750      5A454F46 
 2750      5F57494E 
 2750      545F545F 
 2750      5F203400 
 2751              	.LASF389:
 2752 02e3 5F5F474E 		.ascii	"__GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_M"
 2752      55435F50 
 2752      52455245 
 2752      51286D61 
 2752      6A2C6D69 
 2753 0316 494E4F52 		.ascii	"INOR__ >= ((maj) << 16) + (min))\000"
 2753      5F5F203E 
 2753      3D202828 
 2753      6D616A29 
 2753      203C3C20 
 2754              	.LASF426:
 2755 0337 5F53495A 		.ascii	"_SIZE_T \000"
 2755      455F5420 
 2755      00
 2756              	.LASF235:
 2757 0340 5F5F5553 		.ascii	"__USFRACT_MIN__ 0.0UHR\000"
 2757      46524143 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 52


 2757      545F4D49 
 2757      4E5F5F20 
 2757      302E3055 
 2758              	.LASF514:
 2759 0357 5F524545 		.ascii	"_REENT_MP_RESULT_K(ptr) ((ptr)->_result_k)\000"
 2759      4E545F4D 
 2759      505F5245 
 2759      53554C54 
 2759      5F4B2870 
 2760              	.LASF413:
 2761 0382 5F444546 		.ascii	"_DEFUN_VOID(name) name(_NOARGS)\000"
 2761      554E5F56 
 2761      4F494428 
 2761      6E616D65 
 2761      29206E61 
 2762              	.LASF457:
 2763 03a2 5F425344 		.ascii	"_BSD_WCHAR_T_\000"
 2763      5F574348 
 2763      41525F54 
 2763      5F00
 2764              	.LASF491:
 2765 03b0 5F52414E 		.ascii	"_RAND48_MULT_0 (0xe66d)\000"
 2765      4434385F 
 2765      4D554C54 
 2765      5F302028 
 2765      30786536 
 2766              	.LASF44:
 2767 03c8 5F5F474E 		.ascii	"__GNUC_MINOR__ 7\000"
 2767      55435F4D 
 2767      494E4F52 
 2767      5F5F2037 
 2767      00
 2768              	.LASF447:
 2769 03d9 5F5F5743 		.ascii	"__WCHAR_T \000"
 2769      4841525F 
 2769      542000
 2770              	.LASF0:
 2771 03e4 756E7369 		.ascii	"unsigned int\000"
 2771      676E6564 
 2771      20696E74 
 2771      00
 2772              	.LASF523:
 2773 03f1 5F524545 		.ascii	"_REENT_WCTOMB_STATE(ptr) ((ptr)->_new._reent._wctom"
 2773      4E545F57 
 2773      43544F4D 
 2773      425F5354 
 2773      41544528 
 2774 0424 625F7374 		.ascii	"b_state)\000"
 2774      61746529 
 2774      00
 2775              	.LASF147:
 2776 042d 5F5F5549 		.ascii	"__UINT16_C(c) c\000"
 2776      4E543136 
 2776      5F432863 
 2776      29206300 
 2777              	.LASF63:
 2778 043d 5F5F5349 		.ascii	"__SIZEOF_SIZE_T__ 4\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 53


 2778      5A454F46 
 2778      5F53495A 
 2778      455F545F 
 2778      5F203400 
 2779              	.LASF79:
 2780 0451 5F5F4348 		.ascii	"__CHAR16_TYPE__ short unsigned int\000"
 2780      41523136 
 2780      5F545950 
 2780      455F5F20 
 2780      73686F72 
 2781              	.LASF483:
 2782 0474 5F5F6E65 		.ascii	"__need_wint_t\000"
 2782      65645F77 
 2782      696E745F 
 2782      7400
 2783              	.LASF62:
 2784 0482 5F5F5349 		.ascii	"__SIZEOF_LONG_DOUBLE__ 8\000"
 2784      5A454F46 
 2784      5F4C4F4E 
 2784      475F444F 
 2784      55424C45 
 2785              	.LASF43:
 2786 049b 5F5F474E 		.ascii	"__GNUC__ 4\000"
 2786      55435F5F 
 2786      203400
 2787              	.LASF67:
 2788 04a6 5F5F4F52 		.ascii	"__ORDER_BIG_ENDIAN__ 4321\000"
 2788      4445525F 
 2788      4249475F 
 2788      454E4449 
 2788      414E5F5F 
 2789              	.LASF266:
 2790 04c0 5F5F554C 		.ascii	"__ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR\000"
 2790      4C465241 
 2790      43545F4D 
 2790      41585F5F 
 2790      20305846 
 2791              	.LASF224:
 2792 04ec 5F5F4445 		.ascii	"__DEC128_MIN__ 1E-6143DL\000"
 2792      43313238 
 2792      5F4D494E 
 2792      5F5F2031 
 2792      452D3631 
 2793              	.LASF507:
 2794 0505 5F524545 		.ascii	"_REENT_CHECK_SIGNAL_BUF(ptr) \000"
 2794      4E545F43 
 2794      4845434B 
 2794      5F534947 
 2794      4E414C5F 
 2795              	.LASF342:
 2796 0523 5F5F5554 		.ascii	"__UTA_FBIT__ 64\000"
 2796      415F4642 
 2796      49545F5F 
 2796      20363400 
 2797              	.LASF179:
 2798 0533 5F5F4442 		.ascii	"__DBL_MANT_DIG__ 53\000"
 2798      4C5F4D41 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 54


 2798      4E545F44 
 2798      49475F5F 
 2798      20353300 
 2799              	.LASF97:
 2800 0547 5F5F5549 		.ascii	"__UINT_LEAST64_TYPE__ long long unsigned int\000"
 2800      4E545F4C 
 2800      45415354 
 2800      36345F54 
 2800      5950455F 
 2801              	.LASF402:
 2802 0574 5F4E4F41 		.ascii	"_NOARGS void\000"
 2802      52475320 
 2802      766F6964 
 2802      00
 2803              	.LASF473:
 2804 0581 5F5F6C6F 		.ascii	"__lock_init_recursive(lock) (_CAST_VOID 0)\000"
 2804      636B5F69 
 2804      6E69745F 
 2804      72656375 
 2804      72736976 
 2805              	.LASF50:
 2806 05ac 5F5F4154 		.ascii	"__ATOMIC_RELEASE 3\000"
 2806      4F4D4943 
 2806      5F52454C 
 2806      45415345 
 2806      203300
 2807              	.LASF74:
 2808 05bf 5F5F5054 		.ascii	"__PTRDIFF_TYPE__ int\000"
 2808      52444946 
 2808      465F5459 
 2808      50455F5F 
 2808      20696E74 
 2809              	.LASF347:
 2810 05d4 5F5F4348 		.ascii	"__CHAR_UNSIGNED__ 1\000"
 2810      41525F55 
 2810      4E534947 
 2810      4E45445F 
 2810      5F203100 
 2811              	.LASF83:
 2812 05e8 5F5F494E 		.ascii	"__INT16_TYPE__ short int\000"
 2812      5431365F 
 2812      54595045 
 2812      5F5F2073 
 2812      686F7274 
 2813              	.LASF212:
 2814 0601 5F5F4445 		.ascii	"__DEC32_EPSILON__ 1E-6DF\000"
 2814      4333325F 
 2814      45505349 
 2814      4C4F4E5F 
 2814      5F203145 
 2815              	.LASF194:
 2816 061a 5F5F4C44 		.ascii	"__LDBL_DIG__ 15\000"
 2816      424C5F44 
 2816      49475F5F 
 2816      20313500 
 2817              	.LASF367:
 2818 062a 5F5F7468 		.ascii	"__thumb__ 1\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 55


 2818      756D625F 
 2818      5F203100 
 2819              	.LASF113:
 2820 0636 5F5F494E 		.ascii	"__INT_MAX__ 2147483647\000"
 2820      545F4D41 
 2820      585F5F20 
 2820      32313437 
 2820      34383336 
 2821              	.LASF299:
 2822 064d 5F5F4C4C 		.ascii	"__LLACCUM_IBIT__ 32\000"
 2822      41434355 
 2822      4D5F4942 
 2822      49545F5F 
 2822      20333200 
 2823              	.LASF48:
 2824 0661 5F5F4154 		.ascii	"__ATOMIC_SEQ_CST 5\000"
 2824      4F4D4943 
 2824      5F534551 
 2824      5F435354 
 2824      203500
 2825              	.LASF31:
 2826 0674 5F535444 		.ascii	"_STDLIB_H_ \000"
 2826      4C49425F 
 2826      485F2000 
 2827              	.LASF59:
 2828 0680 5F5F5349 		.ascii	"__SIZEOF_SHORT__ 2\000"
 2828      5A454F46 
 2828      5F53484F 
 2828      52545F5F 
 2828      203200
 2829              	.LASF395:
 2830 0693 5F524541 		.ascii	"_READ_WRITE_RETURN_TYPE int\000"
 2830      445F5752 
 2830      4954455F 
 2830      52455455 
 2830      524E5F54 
 2831              	.LASF344:
 2832 06af 5F5F5245 		.ascii	"__REGISTER_PREFIX__ \000"
 2832      47495354 
 2832      45525F50 
 2832      52454649 
 2832      585F5F20 
 2833              	.LASF125:
 2834 06c4 5F5F5549 		.ascii	"__UINTMAX_C(c) c ## ULL\000"
 2834      4E544D41 
 2834      585F4328 
 2834      63292063 
 2834      20232320 
 2835              	.LASF153:
 2836 06dc 5F5F494E 		.ascii	"__INT_FAST16_MAX__ 2147483647\000"
 2836      545F4641 
 2836      53543136 
 2836      5F4D4158 
 2836      5F5F2032 
 2837              	.LASF188:
 2838 06fa 5F5F4442 		.ascii	"__DBL_EPSILON__ double(2.2204460492503131e-16L)\000"
 2838      4C5F4550 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 56


 2838      53494C4F 
 2838      4E5F5F20 
 2838      646F7562 
 2839              	.LASF144:
 2840 072a 5F5F5549 		.ascii	"__UINT_LEAST8_MAX__ 255\000"
 2840      4E545F4C 
 2840      45415354 
 2840      385F4D41 
 2840      585F5F20 
 2841              	.LASF249:
 2842 0742 5F5F4C46 		.ascii	"__LFRACT_IBIT__ 0\000"
 2842      52414354 
 2842      5F494249 
 2842      545F5F20 
 2842      3000
 2843              	.LASF522:
 2844 0754 5F524545 		.ascii	"_REENT_MBTOWC_STATE(ptr) ((ptr)->_new._reent._mbtow"
 2844      4E545F4D 
 2844      42544F57 
 2844      435F5354 
 2844      41544528 
 2845 0787 635F7374 		.ascii	"c_state)\000"
 2845      61746529 
 2845      00
 2846              	.LASF474:
 2847 0790 5F5F6C6F 		.ascii	"__lock_close(lock) (_CAST_VOID 0)\000"
 2847      636B5F63 
 2847      6C6F7365 
 2847      286C6F63 
 2847      6B292028 
 2848              	.LASF94:
 2849 07b2 5F5F5549 		.ascii	"__UINT_LEAST8_TYPE__ unsigned char\000"
 2849      4E545F4C 
 2849      45415354 
 2849      385F5459 
 2849      50455F5F 
 2850              	.LASF21:
 2851 07d5 5F5A6461 		.ascii	"_ZdaPv\000"
 2851      507600
 2852              	.LASF373:
 2853 07dc 5F5F4152 		.ascii	"__ARM_ARCH_6M__ 1\000"
 2853      4D5F4152 
 2853      43485F36 
 2853      4D5F5F20 
 2853      3100
 2854              	.LASF264:
 2855 07ee 5F5F554C 		.ascii	"__ULLFRACT_IBIT__ 0\000"
 2855      4C465241 
 2855      43545F49 
 2855      4249545F 
 2855      5F203000 
 2856              	.LASF47:
 2857 0802 5F5F4154 		.ascii	"__ATOMIC_RELAXED 0\000"
 2857      4F4D4943 
 2857      5F52454C 
 2857      41584544 
 2857      203000
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 57


 2858              	.LASF478:
 2859 0815 5F5F6C6F 		.ascii	"__lock_try_acquire(lock) (_CAST_VOID 0)\000"
 2859      636B5F74 
 2859      72795F61 
 2859      63717569 
 2859      7265286C 
 2860              	.LASF290:
 2861 083d 5F5F4C41 		.ascii	"__LACCUM_MIN__ (-0X1P31LK-0X1P31LK)\000"
 2861      4343554D 
 2861      5F4D494E 
 2861      5F5F2028 
 2861      2D305831 
 2862              	.LASF306:
 2863 0861 5F5F554C 		.ascii	"__ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK\000"
 2863      4C414343 
 2863      554D5F4D 
 2863      41585F5F 
 2863      20305846 
 2864              	.LASF295:
 2865 088d 5F5F554C 		.ascii	"__ULACCUM_MIN__ 0.0ULK\000"
 2865      41434355 
 2865      4D5F4D49 
 2865      4E5F5F20 
 2865      302E3055 
 2866              	.LASF177:
 2867 08a4 5F5F464C 		.ascii	"__FLT_HAS_INFINITY__ 1\000"
 2867      545F4841 
 2867      535F494E 
 2867      46494E49 
 2867      54595F5F 
 2868              	.LASF443:
 2869 08bb 5F5F5743 		.ascii	"__WCHAR_T__ \000"
 2869      4841525F 
 2869      545F5F20 
 2869      00
 2870              	.LASF334:
 2871 08c8 5F5F5441 		.ascii	"__TA_FBIT__ 63\000"
 2871      5F464249 
 2871      545F5F20 
 2871      363300
 2872              	.LASF368:
 2873 08d7 5F5F4152 		.ascii	"__ARMEL__ 1\000"
 2873      4D454C5F 
 2873      5F203100 
 2874              	.LASF156:
 2875 08e3 5F5F5549 		.ascii	"__UINT_FAST8_MAX__ 4294967295U\000"
 2875      4E545F46 
 2875      41535438 
 2875      5F4D4158 
 2875      5F5F2034 
 2876              	.LASF341:
 2877 0902 5F5F5544 		.ascii	"__UDA_IBIT__ 32\000"
 2877      415F4942 
 2877      49545F5F 
 2877      20333200 
 2878              	.LASF135:
 2879 0912 5F5F5549 		.ascii	"__UINT64_MAX__ 18446744073709551615ULL\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 58


 2879      4E543634 
 2879      5F4D4158 
 2879      5F5F2031 
 2879      38343436 
 2880              	.LASF101:
 2881 0939 5F5F494E 		.ascii	"__INT_FAST64_TYPE__ long long int\000"
 2881      545F4641 
 2881      53543634 
 2881      5F545950 
 2881      455F5F20 
 2882              	.LASF41:
 2883 095b 5F5F6370 		.ascii	"__cplusplus 199711L\000"
 2883      6C757370 
 2883      6C757320 
 2883      31393937 
 2883      31314C00 
 2884              	.LASF400:
 2885 096f 5F505452 		.ascii	"_PTR void *\000"
 2885      20766F69 
 2885      64202A00 
 2886              	.LASF1:
 2887 097b 7369676E 		.ascii	"signed char\000"
 2887      65642063 
 2887      68617200 
 2888              	.LASF24:
 2889 0987 5F5F6378 		.ascii	"__cxa_guard_abort\000"
 2889      615F6775 
 2889      6172645F 
 2889      61626F72 
 2889      7400
 2890              	.LASF121:
 2891 0999 5F5F5349 		.ascii	"__SIZE_MAX__ 4294967295U\000"
 2891      5A455F4D 
 2891      41585F5F 
 2891      20343239 
 2891      34393637 
 2892              	.LASF496:
 2893 09b2 5F524545 		.ascii	"_REENT_ASCTIME_SIZE 26\000"
 2893      4E545F41 
 2893      53435449 
 2893      4D455F53 
 2893      495A4520 
 2894              	.LASF537:
 2895 09c9 616C6C6F 		.ascii	"alloca\000"
 2895      636100
 2896              	.LASF488:
 2897 09d0 5F52414E 		.ascii	"_RAND48_SEED_0 (0x330e)\000"
 2897      4434385F 
 2897      53454544 
 2897      5F302028 
 2897      30783333 
 2898              	.LASF305:
 2899 09e8 5F5F554C 		.ascii	"__ULLACCUM_MIN__ 0.0ULLK\000"
 2899      4C414343 
 2899      554D5F4D 
 2899      494E5F5F 
 2899      20302E30 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 59


 2900              	.LASF398:
 2901 0a01 5F454E44 		.ascii	"_END_STD_C }\000"
 2901      5F535444 
 2901      5F43207D 
 2901      00
 2902              	.LASF450:
 2903 0a0e 5F574348 		.ascii	"_WCHAR_T_DEFINED_ \000"
 2903      41525F54 
 2903      5F444546 
 2903      494E4544 
 2903      5F2000
 2904              	.LASF438:
 2905 0a21 5F474343 		.ascii	"_GCC_SIZE_T \000"
 2905      5F53495A 
 2905      455F5420 
 2905      00
 2906              	.LASF107:
 2907 0a2e 5F5F5549 		.ascii	"__UINTPTR_TYPE__ unsigned int\000"
 2907      4E545054 
 2907      525F5459 
 2907      50455F5F 
 2907      20756E73 
 2908              	.LASF456:
 2909 0a4c 5F574348 		.ascii	"_WCHAR_T_DECLARED \000"
 2909      41525F54 
 2909      5F444543 
 2909      4C415245 
 2909      442000
 2910              	.LASF479:
 2911 0a5f 5F5F6C6F 		.ascii	"__lock_try_acquire_recursive(lock) (_CAST_VOID 0)\000"
 2911      636B5F74 
 2911      72795F61 
 2911      63717569 
 2911      72655F72 
 2912              	.LASF485:
 2913 0a91 5F5F4C6F 		.ascii	"__Long long\000"
 2913      6E67206C 
 2913      6F6E6700 
 2914              	.LASF437:
 2915 0a9d 5F5F5F69 		.ascii	"___int_size_t_h \000"
 2915      6E745F73 
 2915      697A655F 
 2915      745F6820 
 2915      00
 2916              	.LASF331:
 2917 0aae 5F5F5341 		.ascii	"__SA_IBIT__ 16\000"
 2917      5F494249 
 2917      545F5F20 
 2917      313600
 2918              	.LASF261:
 2919 0abd 5F5F4C4C 		.ascii	"__LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR\000"
 2919      46524143 
 2919      545F4D41 
 2919      585F5F20 
 2919      30583746 
 2920              	.LASF432:
 2921 0ae7 5F425344 		.ascii	"_BSD_SIZE_T_ \000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 60


 2921      5F53495A 
 2921      455F545F 
 2921      2000
 2922              	.LASF455:
 2923 0af5 5F474343 		.ascii	"_GCC_WCHAR_T \000"
 2923      5F574348 
 2923      41525F54 
 2923      2000
 2924              	.LASF166:
 2925 0b03 5F5F464C 		.ascii	"__FLT_DIG__ 6\000"
 2925      545F4449 
 2925      475F5F20 
 2925      3600
 2926              	.LASF332:
 2927 0b11 5F5F4441 		.ascii	"__DA_FBIT__ 31\000"
 2927      5F464249 
 2927      545F5F20 
 2927      333100
 2928              	.LASF28:
 2929 0b20 6D616C6C 		.ascii	"malloc\000"
 2929      6F6300
 2930              	.LASF378:
 2931 0b27 5F5F5553 		.ascii	"__USES_INITFINI__ 1\000"
 2931      45535F49 
 2931      4E495446 
 2931      494E495F 
 2931      5F203100 
 2932              	.LASF210:
 2933 0b3b 5F5F4445 		.ascii	"__DEC32_MIN__ 1E-95DF\000"
 2933      4333325F 
 2933      4D494E5F 
 2933      5F203145 
 2933      2D393544 
 2934              	.LASF277:
 2935 0b51 5F5F5553 		.ascii	"__USACCUM_EPSILON__ 0x1P-8UHK\000"
 2935      41434355 
 2935      4D5F4550 
 2935      53494C4F 
 2935      4E5F5F20 
 2936              	.LASF462:
 2937 0b6f 5F5F5F69 		.ascii	"___int8_t_defined 1\000"
 2937      6E74385F 
 2937      745F6465 
 2937      66696E65 
 2937      64203100 
 2938              	.LASF36:
 2939 0b83 5F535953 		.ascii	"_SYS__TYPES_H \000"
 2939      5F5F5459 
 2939      5045535F 
 2939      482000
 2940              	.LASF435:
 2941 0b92 5F425344 		.ascii	"_BSD_SIZE_T_DEFINED_ \000"
 2941      5F53495A 
 2941      455F545F 
 2941      44454649 
 2941      4E45445F 
 2942              	.LASF296:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 61


 2943 0ba8 5F5F554C 		.ascii	"__ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK\000"
 2943      41434355 
 2943      4D5F4D41 
 2943      585F5F20 
 2943      30584646 
 2944              	.LASF246:
 2945 0bd2 5F5F5546 		.ascii	"__UFRACT_MAX__ 0XFFFFP-16UR\000"
 2945      52414354 
 2945      5F4D4158 
 2945      5F5F2030 
 2945      58464646 
 2946              	.LASF231:
 2947 0bee 5F5F5346 		.ascii	"__SFRACT_MAX__ 0X7FP-7HR\000"
 2947      52414354 
 2947      5F4D4158 
 2947      5F5F2030 
 2947      58374650 
 2948              	.LASF511:
 2949 0c07 5F524545 		.ascii	"_REENT_RAND48_MULT(ptr) ((ptr)->_new._reent._r48._m"
 2949      4E545F52 
 2949      414E4434 
 2949      385F4D55 
 2949      4C542870 
 2950 0c3a 756C7429 		.ascii	"ult)\000"
 2950      00
 2951              	.LASF375:
 2952 0c3f 5F5F4152 		.ascii	"__ARM_EABI__ 1\000"
 2952      4D5F4541 
 2952      42495F5F 
 2952      203100
 2953              	.LASF388:
 2954 0c4e 5F535953 		.ascii	"_SYS_FEATURES_H \000"
 2954      5F464541 
 2954      54555245 
 2954      535F4820 
 2954      00
 2955              	.LASF6:
 2956 0c5f 6C6F6E67 		.ascii	"long long unsigned int\000"
 2956      206C6F6E 
 2956      6720756E 
 2956      7369676E 
 2956      65642069 
 2957              	.LASF222:
 2958 0c76 5F5F4445 		.ascii	"__DEC128_MIN_EXP__ (-6142)\000"
 2958      43313238 
 2958      5F4D494E 
 2958      5F455850 
 2958      5F5F2028 
 2959              	.LASF257:
 2960 0c91 5F5F554C 		.ascii	"__ULFRACT_EPSILON__ 0x1P-32ULR\000"
 2960      46524143 
 2960      545F4550 
 2960      53494C4F 
 2960      4E5F5F20 
 2961              	.LASF92:
 2962 0cb0 5F5F494E 		.ascii	"__INT_LEAST32_TYPE__ long int\000"
 2962      545F4C45 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 62


 2962      41535433 
 2962      325F5459 
 2962      50455F5F 
 2963              	.LASF154:
 2964 0cce 5F5F494E 		.ascii	"__INT_FAST32_MAX__ 2147483647\000"
 2964      545F4641 
 2964      53543332 
 2964      5F4D4158 
 2964      5F5F2032 
 2965              	.LASF254:
 2966 0cec 5F5F554C 		.ascii	"__ULFRACT_IBIT__ 0\000"
 2966      46524143 
 2966      545F4942 
 2966      49545F5F 
 2966      203000
 2967              	.LASF327:
 2968 0cff 5F5F5554 		.ascii	"__UTQ_IBIT__ 0\000"
 2968      515F4942 
 2968      49545F5F 
 2968      203000
 2969              	.LASF25:
 2970 0d0e 474E5520 		.ascii	"GNU C++ 4.7.4 20130613 (release) [ARM/embedded-4_7-"
 2970      432B2B20 
 2970      342E372E 
 2970      34203230 
 2970      31333036 
 2971 0d41 6272616E 		.ascii	"branch revision 200083]\000"
 2971      63682072 
 2971      65766973 
 2971      696F6E20 
 2971      32303030 
 2972              	.LASF175:
 2973 0d59 5F5F464C 		.ascii	"__FLT_DENORM_MIN__ 1.4012984643248171e-45F\000"
 2973      545F4445 
 2973      4E4F524D 
 2973      5F4D494E 
 2973      5F5F2031 
 2974              	.LASF399:
 2975 0d84 5F4E4F54 		.ascii	"_NOTHROW __attribute__ ((nothrow))\000"
 2975      48524F57 
 2975      205F5F61 
 2975      74747269 
 2975      62757465 
 2976              	.LASF265:
 2977 0da7 5F5F554C 		.ascii	"__ULLFRACT_MIN__ 0.0ULLR\000"
 2977      4C465241 
 2977      43545F4D 
 2977      494E5F5F 
 2977      20302E30 
 2978              	.LASF192:
 2979 0dc0 5F5F4442 		.ascii	"__DBL_HAS_QUIET_NAN__ 1\000"
 2979      4C5F4841 
 2979      535F5155 
 2979      4945545F 
 2979      4E414E5F 
 2980              	.LASF285:
 2981 0dd8 5F5F5541 		.ascii	"__UACCUM_MIN__ 0.0UK\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 63


 2981      4343554D 
 2981      5F4D494E 
 2981      5F5F2030 
 2981      2E30554B 
 2982              	.LASF252:
 2983 0ded 5F5F4C46 		.ascii	"__LFRACT_EPSILON__ 0x1P-31LR\000"
 2983      52414354 
 2983      5F455053 
 2983      494C4F4E 
 2983      5F5F2030 
 2984              	.LASF98:
 2985 0e0a 5F5F494E 		.ascii	"__INT_FAST8_TYPE__ int\000"
 2985      545F4641 
 2985      5354385F 
 2985      54595045 
 2985      5F5F2069 
 2986              	.LASF19:
 2987 0e21 6F706572 		.ascii	"operator delete []\000"
 2987      61746F72 
 2987      2064656C 
 2987      65746520 
 2987      5B5D00
 2988              	.LASF103:
 2989 0e34 5F5F5549 		.ascii	"__UINT_FAST16_TYPE__ unsigned int\000"
 2989      4E545F46 
 2989      41535431 
 2989      365F5459 
 2989      50455F5F 
 2990              	.LASF268:
 2991 0e56 5F5F5341 		.ascii	"__SACCUM_FBIT__ 7\000"
 2991      4343554D 
 2991      5F464249 
 2991      545F5F20 
 2991      3700
 2992              	.LASF535:
 2993 0e68 5F474C4F 		.ascii	"_GLOBAL_REENT _global_impure_ptr\000"
 2993      42414C5F 
 2993      5245454E 
 2993      54205F67 
 2993      6C6F6261 
 2994              	.LASF539:
 2995 0e89 4E554C4C 		.ascii	"NULL 0\000"
 2995      203000
 2996              	.LASF393:
 2997 0e90 5F5F4558 		.ascii	"__EXPORT \000"
 2997      504F5254 
 2997      2000
 2998              	.LASF218:
 2999 0e9a 5F5F4445 		.ascii	"__DEC64_MAX__ 9.999999999999999E384DD\000"
 2999      4336345F 
 2999      4D41585F 
 2999      5F20392E 
 2999      39393939 
 3000              	.LASF240:
 3001 0ec0 5F5F4652 		.ascii	"__FRACT_MIN__ (-0.5R-0.5R)\000"
 3001      4143545F 
 3001      4D494E5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 64


 3001      5F20282D 
 3001      302E3552 
 3002              	.LASF355:
 3003 0edb 5F5F4743 		.ascii	"__GCC_ATOMIC_INT_LOCK_FREE 1\000"
 3003      435F4154 
 3003      4F4D4943 
 3003      5F494E54 
 3003      5F4C4F43 
 3004              	.LASF518:
 3005 0ef8 5F524545 		.ascii	"_REENT_TM(ptr) (&(ptr)->_new._reent._localtime_buf)"
 3005      4E545F54 
 3005      4D287074 
 3005      72292028 
 3005      26287074 
 3006 0f2b 00       		.ascii	"\000"
 3007              	.LASF287:
 3008 0f2c 5F5F5541 		.ascii	"__UACCUM_EPSILON__ 0x1P-16UK\000"
 3008      4343554D 
 3008      5F455053 
 3008      494C4F4E 
 3008      5F5F2030 
 3009              	.LASF279:
 3010 0f49 5F5F4143 		.ascii	"__ACCUM_IBIT__ 16\000"
 3010      43554D5F 
 3010      49424954 
 3010      5F5F2031 
 3010      3600
 3011              	.LASF203:
 3012 0f5b 5F5F4C44 		.ascii	"__LDBL_DENORM_MIN__ 4.9406564584124654e-324L\000"
 3012      424C5F44 
 3012      454E4F52 
 3012      4D5F4D49 
 3012      4E5F5F20 
 3013              	.LASF273:
 3014 0f88 5F5F5553 		.ascii	"__USACCUM_FBIT__ 8\000"
 3014      41434355 
 3014      4D5F4642 
 3014      49545F5F 
 3014      203800
 3015              	.LASF66:
 3016 0f9b 5F5F4F52 		.ascii	"__ORDER_LITTLE_ENDIAN__ 1234\000"
 3016      4445525F 
 3016      4C495454 
 3016      4C455F45 
 3016      4E444941 
 3017              	.LASF364:
 3018 0fb8 5F5F5349 		.ascii	"__SIZEOF_PTRDIFF_T__ 4\000"
 3018      5A454F46 
 3018      5F505452 
 3018      44494646 
 3018      5F545F5F 
 3019              	.LASF230:
 3020 0fcf 5F5F5346 		.ascii	"__SFRACT_MIN__ (-0.5HR-0.5HR)\000"
 3020      52414354 
 3020      5F4D494E 
 3020      5F5F2028 
 3020      2D302E35 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 65


 3021              	.LASF339:
 3022 0fed 5F5F5553 		.ascii	"__USA_IBIT__ 16\000"
 3022      415F4942 
 3022      49545F5F 
 3022      20313600 
 3023              	.LASF259:
 3024 0ffd 5F5F4C4C 		.ascii	"__LLFRACT_IBIT__ 0\000"
 3024      46524143 
 3024      545F4942 
 3024      49545F5F 
 3024      203000
 3025              	.LASF467:
 3026 1010 5F5F5F69 		.ascii	"___int64_t_defined 1\000"
 3026      6E743634 
 3026      5F745F64 
 3026      6566696E 
 3026      65642031 
 3027              	.LASF221:
 3028 1025 5F5F4445 		.ascii	"__DEC128_MANT_DIG__ 34\000"
 3028      43313238 
 3028      5F4D414E 
 3028      545F4449 
 3028      475F5F20 
 3029              	.LASF416:
 3030 103c 5F4C4F4E 		.ascii	"_LONG_LONG_TYPE long long\000"
 3030      475F4C4F 
 3030      4E475F54 
 3030      59504520 
 3030      6C6F6E67 
 3031              	.LASF15:
 3032 1056 5F5A6E77 		.ascii	"_Znwj\000"
 3032      6A00
 3033              	.LASF470:
 3034 105c 5F5F4C4F 		.ascii	"__LOCK_INIT(class,lock) static int lock = 0;\000"
 3034      434B5F49 
 3034      4E495428 
 3034      636C6173 
 3034      732C6C6F 
 3035              	.LASF60:
 3036 1089 5F5F5349 		.ascii	"__SIZEOF_FLOAT__ 4\000"
 3036      5A454F46 
 3036      5F464C4F 
 3036      41545F5F 
 3036      203400
 3037              	.LASF403:
 3038 109c 5F434F4E 		.ascii	"_CONST const\000"
 3038      53542063 
 3038      6F6E7374 
 3038      00
 3039              	.LASF149:
 3040 10a9 5F5F5549 		.ascii	"__UINT32_C(c) c ## UL\000"
 3040      4E543332 
 3040      5F432863 
 3040      29206320 
 3040      23232055 
 3041              	.LASF209:
 3042 10bf 5F5F4445 		.ascii	"__DEC32_MAX_EXP__ 97\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 66


 3042      4333325F 
 3042      4D41585F 
 3042      4558505F 
 3042      5F203937 
 3043              	.LASF530:
 3044 10d4 5F524545 		.ascii	"_REENT_SIGNAL_BUF(ptr) ((ptr)->_new._reent._signal_"
 3044      4E545F53 
 3044      49474E41 
 3044      4C5F4255 
 3044      46287074 
 3045 1107 62756629 		.ascii	"buf)\000"
 3045      00
 3046              	.LASF11:
 3047 110c 73697A65 		.ascii	"size_t\000"
 3047      5F7400
 3048              	.LASF376:
 3049 1113 5F5F4758 		.ascii	"__GXX_TYPEINFO_EQUALITY_INLINE 0\000"
 3049      585F5459 
 3049      5045494E 
 3049      464F5F45 
 3049      5155414C 
 3050              	.LASF494:
 3051 1134 5F52414E 		.ascii	"_RAND48_ADD (0x000b)\000"
 3051      4434385F 
 3051      41444420 
 3051      28307830 
 3051      30306229 
 3052              	.LASF490:
 3053 1149 5F52414E 		.ascii	"_RAND48_SEED_2 (0x1234)\000"
 3053      4434385F 
 3053      53454544 
 3053      5F322028 
 3053      30783132 
 3054              	.LASF348:
 3055 1161 5F5F5743 		.ascii	"__WCHAR_UNSIGNED__ 1\000"
 3055      4841525F 
 3055      554E5349 
 3055      474E4544 
 3055      5F5F2031 
 3056              	.LASF108:
 3057 1176 5F5F4758 		.ascii	"__GXX_WEAK__ 1\000"
 3057      585F5745 
 3057      414B5F5F 
 3057      203100
 3058              	.LASF369:
 3059 1185 5F5F5448 		.ascii	"__THUMBEL__ 1\000"
 3059      554D4245 
 3059      4C5F5F20 
 3059      3100
 3060              	.LASF333:
 3061 1193 5F5F4441 		.ascii	"__DA_IBIT__ 32\000"
 3061      5F494249 
 3061      545F5F20 
 3061      333200
 3062              	.LASF65:
 3063 11a2 5F5F4249 		.ascii	"__BIGGEST_ALIGNMENT__ 8\000"
 3063      47474553 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 67


 3063      545F414C 
 3063      49474E4D 
 3063      454E545F 
 3064              	.LASF289:
 3065 11ba 5F5F4C41 		.ascii	"__LACCUM_IBIT__ 32\000"
 3065      4343554D 
 3065      5F494249 
 3065      545F5F20 
 3065      333200
 3066              	.LASF138:
 3067 11cd 5F5F494E 		.ascii	"__INT_LEAST16_MAX__ 32767\000"
 3067      545F4C45 
 3067      41535431 
 3067      365F4D41 
 3067      585F5F20 
 3068              	.LASF236:
 3069 11e7 5F5F5553 		.ascii	"__USFRACT_MAX__ 0XFFP-8UHR\000"
 3069      46524143 
 3069      545F4D41 
 3069      585F5F20 
 3069      30584646 
 3070              	.LASF433:
 3071 1202 5F53495A 		.ascii	"_SIZE_T_DEFINED_ \000"
 3071      455F545F 
 3071      44454649 
 3071      4E45445F 
 3071      2000
 3072              	.LASF463:
 3073 1214 5F5F5F69 		.ascii	"___int16_t_defined 1\000"
 3073      6E743136 
 3073      5F745F64 
 3073      6566696E 
 3073      65642031 
 3074              	.LASF300:
 3075 1229 5F5F4C4C 		.ascii	"__LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)\000"
 3075      41434355 
 3075      4D5F4D49 
 3075      4E5F5F20 
 3075      282D3058 
 3076              	.LASF110:
 3077 1250 5F5F4758 		.ascii	"__GXX_ABI_VERSION 1002\000"
 3077      585F4142 
 3077      495F5645 
 3077      5253494F 
 3077      4E203130 
 3078              	.LASF54:
 3079 1267 5F5F4F50 		.ascii	"__OPTIMIZE__ 1\000"
 3079      54494D49 
 3079      5A455F5F 
 3079      203100
 3080              	.LASF330:
 3081 1276 5F5F5341 		.ascii	"__SA_FBIT__ 15\000"
 3081      5F464249 
 3081      545F5F20 
 3081      313500
 3082              	.LASF30:
 3083 1285 4E45575F 		.ascii	"NEW_H \000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 68


 3083      482000
 3084              	.LASF516:
 3085 128c 5F524545 		.ascii	"_REENT_MP_FREELIST(ptr) ((ptr)->_freelist)\000"
 3085      4E545F4D 
 3085      505F4652 
 3085      45454C49 
 3085      53542870 
 3086              	.LASF272:
 3087 12b7 5F5F5341 		.ascii	"__SACCUM_EPSILON__ 0x1P-7HK\000"
 3087      4343554D 
 3087      5F455053 
 3087      494C4F4E 
 3087      5F5F2030 
 3088              	.LASF29:
 3089 12d3 66726565 		.ascii	"free\000"
 3089      00
 3090              	.LASF465:
 3091 12d8 5F5F5F69 		.ascii	"___int32_t_defined 1\000"
 3091      6E743332 
 3091      5F745F64 
 3091      6566696E 
 3091      65642031 
 3092              	.LASF99:
 3093 12ed 5F5F494E 		.ascii	"__INT_FAST16_TYPE__ int\000"
 3093      545F4641 
 3093      53543136 
 3093      5F545950 
 3093      455F5F20 
 3094              	.LASF87:
 3095 1305 5F5F5549 		.ascii	"__UINT16_TYPE__ short unsigned int\000"
 3095      4E543136 
 3095      5F545950 
 3095      455F5F20 
 3095      73686F72 
 3096              	.LASF350:
 3097 1328 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR_LOCK_FREE 1\000"
 3097      435F4154 
 3097      4F4D4943 
 3097      5F434841 
 3097      525F4C4F 
 3098              	.LASF384:
 3099 1346 48415645 		.ascii	"HAVE_INITFINI_ARRAY 1\000"
 3099      5F494E49 
 3099      5446494E 
 3099      495F4152 
 3099      52415920 
 3100              	.LASF321:
 3101 135c 5F5F5548 		.ascii	"__UHQ_IBIT__ 0\000"
 3101      515F4942 
 3101      49545F5F 
 3101      203000
 3102              	.LASF90:
 3103 136b 5F5F494E 		.ascii	"__INT_LEAST8_TYPE__ signed char\000"
 3103      545F4C45 
 3103      41535438 
 3103      5F545950 
 3103      455F5F20 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 69


 3104              	.LASF85:
 3105 138b 5F5F494E 		.ascii	"__INT64_TYPE__ long long int\000"
 3105      5436345F 
 3105      54595045 
 3105      5F5F206C 
 3105      6F6E6720 
 3106              	.LASF170:
 3107 13a8 5F5F464C 		.ascii	"__FLT_MAX_10_EXP__ 38\000"
 3107      545F4D41 
 3107      585F3130 
 3107      5F455850 
 3107      5F5F2033 
 3108              	.LASF301:
 3109 13be 5F5F4C4C 		.ascii	"__LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK\000"
 3109      41434355 
 3109      4D5F4D41 
 3109      585F5F20 
 3109      30583746 
 3110              	.LASF302:
 3111 13e8 5F5F4C4C 		.ascii	"__LLACCUM_EPSILON__ 0x1P-31LLK\000"
 3111      41434355 
 3111      4D5F4550 
 3111      53494C4F 
 3111      4E5F5F20 
 3112              	.LASF492:
 3113 1407 5F52414E 		.ascii	"_RAND48_MULT_1 (0xdeec)\000"
 3113      4434385F 
 3113      4D554C54 
 3113      5F312028 
 3113      30786465 
 3114              	.LASF519:
 3115 141f 5F524545 		.ascii	"_REENT_EMERGENCY(ptr) ((ptr)->_emergency)\000"
 3115      4E545F45 
 3115      4D455247 
 3115      454E4359 
 3115      28707472 
 3116              	.LASF509:
 3117 1449 5F524545 		.ascii	"_REENT_RAND_NEXT(ptr) ((ptr)->_new._reent._rand_nex"
 3117      4E545F52 
 3117      414E445F 
 3117      4E455854 
 3117      28707472 
 3118 147c 742900   		.ascii	"t)\000"
 3119              	.LASF434:
 3120 147f 5F53495A 		.ascii	"_SIZE_T_DEFINED \000"
 3120      455F545F 
 3120      44454649 
 3120      4E454420 
 3120      00
 3121              	.LASF255:
 3122 1490 5F5F554C 		.ascii	"__ULFRACT_MIN__ 0.0ULR\000"
 3122      46524143 
 3122      545F4D49 
 3122      4E5F5F20 
 3122      302E3055 
 3123              	.LASF165:
 3124 14a7 5F5F464C 		.ascii	"__FLT_MANT_DIG__ 24\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 70


 3124      545F4D41 
 3124      4E545F44 
 3124      49475F5F 
 3124      20323400 
 3125              	.LASF513:
 3126 14bb 5F524545 		.ascii	"_REENT_MP_RESULT(ptr) ((ptr)->_result)\000"
 3126      4E545F4D 
 3126      505F5245 
 3126      53554C54 
 3126      28707472 
 3127              	.LASF323:
 3128 14e2 5F5F5553 		.ascii	"__USQ_IBIT__ 0\000"
 3128      515F4942 
 3128      49545F5F 
 3128      203000
 3129              	.LASF448:
 3130 14f1 5F574348 		.ascii	"_WCHAR_T_ \000"
 3130      41525F54 
 3130      5F2000
 3131              	.LASF404:
 3132 14fc 5F564F4C 		.ascii	"_VOLATILE volatile\000"
 3132      4154494C 
 3132      4520766F 
 3132      6C617469 
 3132      6C6500
 3133              	.LASF525:
 3134 150f 5F524545 		.ascii	"_REENT_MBRTOWC_STATE(ptr) ((ptr)->_new._reent._mbrt"
 3134      4E545F4D 
 3134      4252544F 
 3134      57435F53 
 3134      54415445 
 3135 1542 6F77635F 		.ascii	"owc_state)\000"
 3135      73746174 
 3135      652900
 3136              	.LASF284:
 3137 154d 5F5F5541 		.ascii	"__UACCUM_IBIT__ 16\000"
 3137      4343554D 
 3137      5F494249 
 3137      545F5F20 
 3137      313600
 3138              	.LASF163:
 3139 1560 5F5F4445 		.ascii	"__DEC_EVAL_METHOD__ 2\000"
 3139      435F4556 
 3139      414C5F4D 
 3139      4554484F 
 3139      445F5F20 
 3140              	.LASF182:
 3141 1576 5F5F4442 		.ascii	"__DBL_MIN_10_EXP__ (-307)\000"
 3141      4C5F4D49 
 3141      4E5F3130 
 3141      5F455850 
 3141      5F5F2028 
 3142              	.LASF274:
 3143 1590 5F5F5553 		.ascii	"__USACCUM_IBIT__ 8\000"
 3143      41434355 
 3143      4D5F4942 
 3143      49545F5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 71


 3143      203800
 3144              	.LASF134:
 3145 15a3 5F5F5549 		.ascii	"__UINT32_MAX__ 4294967295UL\000"
 3145      4E543332 
 3145      5F4D4158 
 3145      5F5F2034 
 3145      32393439 
 3146              	.LASF176:
 3147 15bf 5F5F464C 		.ascii	"__FLT_HAS_DENORM__ 1\000"
 3147      545F4841 
 3147      535F4445 
 3147      4E4F524D 
 3147      5F5F2031 
 3148              	.LASF372:
 3149 15d4 5F5F5448 		.ascii	"__THUMB_INTERWORK__ 1\000"
 3149      554D425F 
 3149      494E5445 
 3149      52574F52 
 3149      4B5F5F20 
 3150              	.LASF238:
 3151 15ea 5F5F4652 		.ascii	"__FRACT_FBIT__ 15\000"
 3151      4143545F 
 3151      46424954 
 3151      5F5F2031 
 3151      3500
 3152              	.LASF517:
 3153 15fc 5F524545 		.ascii	"_REENT_ASCTIME_BUF(ptr) ((ptr)->_new._reent._asctim"
 3153      4E545F41 
 3153      53435449 
 3153      4D455F42 
 3153      55462870 
 3154 162f 655F6275 		.ascii	"e_buf)\000"
 3154      662900
 3155              	.LASF428:
 3156 1636 5F545F53 		.ascii	"_T_SIZE_ \000"
 3156      495A455F 
 3156      2000
 3157              	.LASF162:
 3158 1640 5F5F464C 		.ascii	"__FLT_EVAL_METHOD__ 0\000"
 3158      545F4556 
 3158      414C5F4D 
 3158      4554484F 
 3158      445F5F20 
 3159              	.LASF503:
 3160 1656 5F524545 		.ascii	"_REENT_CHECK_TM(ptr) \000"
 3160      4E545F43 
 3160      4845434B 
 3160      5F544D28 
 3160      70747229 
 3161              	.LASF387:
 3162 166c 5F4C4442 		.ascii	"_LDBL_EQ_DBL 1\000"
 3162      4C5F4551 
 3162      5F44424C 
 3162      203100
 3163              	.LASF102:
 3164 167b 5F5F5549 		.ascii	"__UINT_FAST8_TYPE__ unsigned int\000"
 3164      4E545F46 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 72


 3164      41535438 
 3164      5F545950 
 3164      455F5F20 
 3165              	.LASF385:
 3166 169c 5F415445 		.ascii	"_ATEXIT_DYNAMIC_ALLOC 1\000"
 3166      5849545F 
 3166      44594E41 
 3166      4D49435F 
 3166      414C4C4F 
 3167              	.LASF278:
 3168 16b4 5F5F4143 		.ascii	"__ACCUM_FBIT__ 15\000"
 3168      43554D5F 
 3168      46424954 
 3168      5F5F2031 
 3168      3500
 3169              	.LASF353:
 3170 16c6 5F5F4743 		.ascii	"__GCC_ATOMIC_WCHAR_T_LOCK_FREE 1\000"
 3170      435F4154 
 3170      4F4D4943 
 3170      5F574348 
 3170      41525F54 
 3171              	.LASF215:
 3172 16e7 5F5F4445 		.ascii	"__DEC64_MIN_EXP__ (-382)\000"
 3172      4336345F 
 3172      4D494E5F 
 3172      4558505F 
 3172      5F20282D 
 3173              	.LASF294:
 3174 1700 5F5F554C 		.ascii	"__ULACCUM_IBIT__ 32\000"
 3174      41434355 
 3174      4D5F4942 
 3174      49545F5F 
 3174      20333200 
 3175              	.LASF27:
 3176 1714 2F557365 		.ascii	"/Users/stevenparker/project/lpc1114/arduino\000"
 3176      72732F73 
 3176      74657665 
 3176      6E706172 
 3176      6B65722F 
 3177              	.LASF338:
 3178 1740 5F5F5553 		.ascii	"__USA_FBIT__ 16\000"
 3178      415F4642 
 3178      49545F5F 
 3178      20313600 
 3179              	.LASF415:
 3180 1750 5F4C4F4E 		.ascii	"_LONG_DOUBLE long double\000"
 3180      475F444F 
 3180      55424C45 
 3180      206C6F6E 
 3180      6720646F 
 3181              	.LASF311:
 3182 1769 5F5F4851 		.ascii	"__HQ_IBIT__ 0\000"
 3182      5F494249 
 3182      545F5F20 
 3182      3000
 3183              	.LASF75:
 3184 1777 5F5F5743 		.ascii	"__WCHAR_TYPE__ unsigned int\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 73


 3184      4841525F 
 3184      54595045 
 3184      5F5F2075 
 3184      6E736967 
 3185              	.LASF439:
 3186 1793 5F53495A 		.ascii	"_SIZET_ \000"
 3186      45545F20 
 3186      00
 3187              	.LASF186:
 3188 179c 5F5F4442 		.ascii	"__DBL_MAX__ double(1.7976931348623157e+308L)\000"
 3188      4C5F4D41 
 3188      585F5F20 
 3188      646F7562 
 3188      6C652831 
 3189              	.LASF401:
 3190 17c9 5F414E44 		.ascii	"_AND ,\000"
 3190      202C00
 3191              	.LASF386:
 3192 17d0 5F484156 		.ascii	"_HAVE_LONG_DOUBLE 1\000"
 3192      455F4C4F 
 3192      4E475F44 
 3192      4F55424C 
 3192      45203100 
 3193              	.LASF464:
 3194 17e4 5F5F5F69 		.ascii	"___int_least16_t_defined 1\000"
 3194      6E745F6C 
 3194      65617374 
 3194      31365F74 
 3194      5F646566 
 3195              	.LASF140:
 3196 17ff 5F5F494E 		.ascii	"__INT_LEAST32_MAX__ 2147483647L\000"
 3196      545F4C45 
 3196      41535433 
 3196      325F4D41 
 3196      585F5F20 
 3197              	.LASF164:
 3198 181f 5F5F464C 		.ascii	"__FLT_RADIX__ 2\000"
 3198      545F5241 
 3198      4449585F 
 3198      5F203200 
 3199              	.LASF211:
 3200 182f 5F5F4445 		.ascii	"__DEC32_MAX__ 9.999999E96DF\000"
 3200      4333325F 
 3200      4D41585F 
 3200      5F20392E 
 3200      39393939 
 3201              	.LASF248:
 3202 184b 5F5F4C46 		.ascii	"__LFRACT_FBIT__ 31\000"
 3202      52414354 
 3202      5F464249 
 3202      545F5F20 
 3202      333100
 3203              	.LASF91:
 3204 185e 5F5F494E 		.ascii	"__INT_LEAST16_TYPE__ short int\000"
 3204      545F4C45 
 3204      41535431 
 3204      365F5459 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 74


 3204      50455F5F 
 3205              	.LASF150:
 3206 187d 5F5F5549 		.ascii	"__UINT_LEAST64_MAX__ 18446744073709551615ULL\000"
 3206      4E545F4C 
 3206      45415354 
 3206      36345F4D 
 3206      41585F5F 
 3207              	.LASF458:
 3208 18aa 5F5F6E65 		.ascii	"__need_wchar_t\000"
 3208      65645F77 
 3208      63686172 
 3208      5F7400
 3209              	.LASF137:
 3210 18b9 5F5F494E 		.ascii	"__INT8_C(c) c\000"
 3210      54385F43 
 3210      28632920 
 3210      6300
 3211              	.LASF466:
 3212 18c7 5F5F5F69 		.ascii	"___int_least32_t_defined 1\000"
 3212      6E745F6C 
 3212      65617374 
 3212      33325F74 
 3212      5F646566 
 3213              	.LASF288:
 3214 18e2 5F5F4C41 		.ascii	"__LACCUM_FBIT__ 31\000"
 3214      4343554D 
 3214      5F464249 
 3214      545F5F20 
 3214      333100
 3215              	.LASF247:
 3216 18f5 5F5F5546 		.ascii	"__UFRACT_EPSILON__ 0x1P-16UR\000"
 3216      52414354 
 3216      5F455053 
 3216      494C4F4E 
 3216      5F5F2030 
 3217              	.LASF356:
 3218 1912 5F5F4743 		.ascii	"__GCC_ATOMIC_LONG_LOCK_FREE 1\000"
 3218      435F4154 
 3218      4F4D4943 
 3218      5F4C4F4E 
 3218      475F4C4F 
 3219              	.LASF146:
 3220 1930 5F5F5549 		.ascii	"__UINT_LEAST16_MAX__ 65535\000"
 3220      4E545F4C 
 3220      45415354 
 3220      31365F4D 
 3220      41585F5F 
 3221              	.LASF324:
 3222 194b 5F5F5544 		.ascii	"__UDQ_FBIT__ 64\000"
 3222      515F4642 
 3222      49545F5F 
 3222      20363400 
 3223              	.LASF460:
 3224 195b 5F4D4143 		.ascii	"_MACHINE__DEFAULT_TYPES_H \000"
 3224      48494E45 
 3224      5F5F4445 
 3224      4641554C 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 75


 3224      545F5459 
 3225              	.LASF32:
 3226 1976 5F5F4945 		.ascii	"__IEEE_LITTLE_ENDIAN \000"
 3226      45455F4C 
 3226      4954544C 
 3226      455F454E 
 3226      4449414E 
 3227              	.LASF419:
 3228 198c 5F454C49 		.ascii	"_ELIDABLE_INLINE extern __inline__ _ATTRIBUTE ((__a"
 3228      4441424C 
 3228      455F494E 
 3228      4C494E45 
 3228      20657874 
 3229 19bf 6C776179 		.ascii	"lways_inline__))\000"
 3229      735F696E 
 3229      6C696E65 
 3229      5F5F2929 
 3229      00
 3230              	.LASF326:
 3231 19d0 5F5F5554 		.ascii	"__UTQ_FBIT__ 128\000"
 3231      515F4642 
 3231      49545F5F 
 3231      20313238 
 3231      00
 3232              	.LASF129:
 3233 19e1 5F5F494E 		.ascii	"__INT16_MAX__ 32767\000"
 3233      5431365F 
 3233      4D41585F 
 3233      5F203332 
 3233      37363700 
 3234              	.LASF5:
 3235 19f5 6C6F6E67 		.ascii	"long long int\000"
 3235      206C6F6E 
 3235      6720696E 
 3235      7400
 3236              	.LASF282:
 3237 1a03 5F5F4143 		.ascii	"__ACCUM_EPSILON__ 0x1P-15K\000"
 3237      43554D5F 
 3237      45505349 
 3237      4C4F4E5F 
 3237      5F203078 
 3238              	.LASF501:
 3239 1a1e 5F524545 		.ascii	"_REENT_CHECK_RAND48(ptr) \000"
 3239      4E545F43 
 3239      4845434B 
 3239      5F52414E 
 3239      44343828 
 3240              	.LASF349:
 3241 1a38 5F5F4743 		.ascii	"__GCC_ATOMIC_BOOL_LOCK_FREE 1\000"
 3241      435F4154 
 3241      4F4D4943 
 3241      5F424F4F 
 3241      4C5F4C4F 
 3242              	.LASF200:
 3243 1a56 5F5F4C44 		.ascii	"__LDBL_MAX__ 1.7976931348623157e+308L\000"
 3243      424C5F4D 
 3243      41585F5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 76


 3243      20312E37 
 3243      39373639 
 3244              	.LASF55:
 3245 1a7c 5F5F4649 		.ascii	"__FINITE_MATH_ONLY__ 0\000"
 3245      4E495445 
 3245      5F4D4154 
 3245      485F4F4E 
 3245      4C595F5F 
 3246              	.LASF271:
 3247 1a93 5F5F5341 		.ascii	"__SACCUM_MAX__ 0X7FFFP-7HK\000"
 3247      4343554D 
 3247      5F4D4158 
 3247      5F5F2030 
 3247      58374646 
 3248              	.LASF365:
 3249 1aae 5F5F6172 		.ascii	"__arm__ 1\000"
 3249      6D5F5F20 
 3249      3100
 3250              	.LASF193:
 3251 1ab8 5F5F4C44 		.ascii	"__LDBL_MANT_DIG__ 53\000"
 3251      424C5F4D 
 3251      414E545F 
 3251      4449475F 
 3251      5F203533 
 3252              	.LASF414:
 3253 1acd 5F434153 		.ascii	"_CAST_VOID (void)\000"
 3253      545F564F 
 3253      49442028 
 3253      766F6964 
 3253      2900
 3254              	.LASF317:
 3255 1adf 5F5F5451 		.ascii	"__TQ_IBIT__ 0\000"
 3255      5F494249 
 3255      545F5F20 
 3255      3000
 3256              	.LASF336:
 3257 1aed 5F5F5548 		.ascii	"__UHA_FBIT__ 8\000"
 3257      415F4642 
 3257      49545F5F 
 3257      203800
 3258              	.LASF112:
 3259 1afc 5F5F5348 		.ascii	"__SHRT_MAX__ 32767\000"
 3259      52545F4D 
 3259      41585F5F 
 3259      20333237 
 3259      363700
 3260              	.LASF20:
 3261 1b0f 5F5A646C 		.ascii	"_ZdlPv\000"
 3261      507600
 3262              	.LASF423:
 3263 1b16 5F5F6E65 		.ascii	"__need_wchar_t \000"
 3263      65645F77 
 3263      63686172 
 3263      5F742000 
 3264              	.LASF180:
 3265 1b26 5F5F4442 		.ascii	"__DBL_DIG__ 15\000"
 3265      4C5F4449 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 77


 3265      475F5F20 
 3265      313500
 3266              	.LASF484:
 3267 1b35 5F4E554C 		.ascii	"_NULL 0\000"
 3267      4C203000 
 3268              	.LASF377:
 3269 1b3d 5F5F454C 		.ascii	"__ELF__ 1\000"
 3269      465F5F20 
 3269      3100
 3270              	.LASF527:
 3271 1b47 5F524545 		.ascii	"_REENT_WCRTOMB_STATE(ptr) ((ptr)->_new._reent._wcrt"
 3271      4E545F57 
 3271      4352544F 
 3271      4D425F53 
 3271      54415445 
 3272 1b7a 6F6D625F 		.ascii	"omb_state)\000"
 3272      73746174 
 3272      652900
 3273              	.LASF358:
 3274 1b85 5F5F4743 		.ascii	"__GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1\000"
 3274      435F4154 
 3274      4F4D4943 
 3274      5F544553 
 3274      545F414E 
 3275              	.LASF360:
 3276 1ba9 5F5F4743 		.ascii	"__GCC_HAVE_DWARF2_CFI_ASM 1\000"
 3276      435F4841 
 3276      56455F44 
 3276      57415246 
 3276      325F4346 
 3277              	.LASF243:
 3278 1bc5 5F5F5546 		.ascii	"__UFRACT_FBIT__ 16\000"
 3278      52414354 
 3278      5F464249 
 3278      545F5F20 
 3278      313600
 3279              	.LASF213:
 3280 1bd8 5F5F4445 		.ascii	"__DEC32_SUBNORMAL_MIN__ 0.000001E-95DF\000"
 3280      4333325F 
 3280      5355424E 
 3280      4F524D41 
 3280      4C5F4D49 
 3281              	.LASF49:
 3282 1bff 5F5F4154 		.ascii	"__ATOMIC_ACQUIRE 2\000"
 3282      4F4D4943 
 3282      5F414351 
 3282      55495245 
 3282      203200
 3283              	.LASF544:
 3284 1c12 73747274 		.ascii	"strtodf strtof\000"
 3284      6F646620 
 3284      73747274 
 3284      6F6600
 3285              	.LASF40:
 3286 1c21 5F5F5354 		.ascii	"__STDC__ 1\000"
 3286      44435F5F 
 3286      203100
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 78


 3287              	.LASF451:
 3288 1c2c 5F574348 		.ascii	"_WCHAR_T_DEFINED \000"
 3288      41525F54 
 3288      5F444546 
 3288      494E4544 
 3288      2000
 3289              	.LASF57:
 3290 1c3e 5F5F5349 		.ascii	"__SIZEOF_LONG__ 4\000"
 3290      5A454F46 
 3290      5F4C4F4E 
 3290      475F5F20 
 3290      3400
 3291              	.LASF506:
 3292 1c50 5F524545 		.ascii	"_REENT_CHECK_MISC(ptr) \000"
 3292      4E545F43 
 3292      4845434B 
 3292      5F4D4953 
 3292      43287074 
 3293              	.LASF183:
 3294 1c68 5F5F4442 		.ascii	"__DBL_MAX_EXP__ 1024\000"
 3294      4C5F4D41 
 3294      585F4558 
 3294      505F5F20 
 3294      31303234 
 3295              	.LASF440:
 3296 1c7d 5F5F7369 		.ascii	"__size_t \000"
 3296      7A655F74 
 3296      2000
 3297              	.LASF52:
 3298 1c87 5F5F4154 		.ascii	"__ATOMIC_CONSUME 1\000"
 3298      4F4D4943 
 3298      5F434F4E 
 3298      53554D45 
 3298      203100
 3299              	.LASF493:
 3300 1c9a 5F52414E 		.ascii	"_RAND48_MULT_2 (0x0005)\000"
 3300      4434385F 
 3300      4D554C54 
 3300      5F322028 
 3300      30783030 
 3301              	.LASF425:
 3302 1cb2 5F5F5349 		.ascii	"__SIZE_T__ \000"
 3302      5A455F54 
 3302      5F5F2000 
 3303              	.LASF543:
 3304 1cbe 4D425F43 		.ascii	"MB_CUR_MAX __locale_mb_cur_max()\000"
 3304      55525F4D 
 3304      4158205F 
 3304      5F6C6F63 
 3304      616C655F 
 3305              	.LASF76:
 3306 1cdf 5F5F5749 		.ascii	"__WINT_TYPE__ unsigned int\000"
 3306      4E545F54 
 3306      5950455F 
 3306      5F20756E 
 3306      7369676E 
 3307              	.LASF160:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 79


 3308 1cfa 5F5F494E 		.ascii	"__INTPTR_MAX__ 2147483647\000"
 3308      54505452 
 3308      5F4D4158 
 3308      5F5F2032 
 3308      31343734 
 3309              	.LASF253:
 3310 1d14 5F5F554C 		.ascii	"__ULFRACT_FBIT__ 32\000"
 3310      46524143 
 3310      545F4642 
 3310      49545F5F 
 3310      20333200 
 3311              	.LASF17:
 3312 1d28 73697A65 		.ascii	"size\000"
 3312      00
 3313              	.LASF280:
 3314 1d2d 5F5F4143 		.ascii	"__ACCUM_MIN__ (-0X1P15K-0X1P15K)\000"
 3314      43554D5F 
 3314      4D494E5F 
 3314      5F20282D 
 3314      30583150 
 3315              	.LASF61:
 3316 1d4e 5F5F5349 		.ascii	"__SIZEOF_DOUBLE__ 8\000"
 3316      5A454F46 
 3316      5F444F55 
 3316      424C455F 
 3316      5F203800 
 3317              	.LASF45:
 3318 1d62 5F5F474E 		.ascii	"__GNUC_PATCHLEVEL__ 4\000"
 3318      55435F50 
 3318      41544348 
 3318      4C455645 
 3318      4C5F5F20 
 3319              	.LASF533:
 3320 1d78 5F5F4154 		.ascii	"__ATTRIBUTE_IMPURE_PTR__ \000"
 3320      54524942 
 3320      5554455F 
 3320      494D5055 
 3320      52455F50 
 3321              	.LASF241:
 3322 1d92 5F5F4652 		.ascii	"__FRACT_MAX__ 0X7FFFP-15R\000"
 3322      4143545F 
 3322      4D41585F 
 3322      5F203058 
 3322      37464646 
 3323              	.LASF119:
 3324 1dac 5F5F5749 		.ascii	"__WINT_MIN__ 0U\000"
 3324      4E545F4D 
 3324      494E5F5F 
 3324      20305500 
 3325              	.LASF293:
 3326 1dbc 5F5F554C 		.ascii	"__ULACCUM_FBIT__ 32\000"
 3326      41434355 
 3326      4D5F4642 
 3326      49545F5F 
 3326      20333200 
 3327              	.LASF245:
 3328 1dd0 5F5F5546 		.ascii	"__UFRACT_MIN__ 0.0UR\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 80


 3328      52414354 
 3328      5F4D494E 
 3328      5F5F2030 
 3328      2E305552 
 3329              	.LASF223:
 3330 1de5 5F5F4445 		.ascii	"__DEC128_MAX_EXP__ 6145\000"
 3330      43313238 
 3330      5F4D4158 
 3330      5F455850 
 3330      5F5F2036 
 3331              	.LASF531:
 3332 1dfd 5F524545 		.ascii	"_REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._ge"
 3332      4E545F47 
 3332      45544441 
 3332      54455F45 
 3332      52525F50 
 3333 1e30 74646174 		.ascii	"tdate_err))\000"
 3333      655F6572 
 3333      72292900 
 3334              	.LASF239:
 3335 1e3c 5F5F4652 		.ascii	"__FRACT_IBIT__ 0\000"
 3335      4143545F 
 3335      49424954 
 3335      5F5F2030 
 3335      00
 3336              	.LASF201:
 3337 1e4d 5F5F4C44 		.ascii	"__LDBL_MIN__ 2.2250738585072014e-308L\000"
 3337      424C5F4D 
 3337      494E5F5F 
 3337      20322E32 
 3337      32353037 
 3338              	.LASF22:
 3339 1e73 5F5F6378 		.ascii	"__cxa_guard_acquire\000"
 3339      615F6775 
 3339      6172645F 
 3339      61637175 
 3339      69726500 
 3340              	.LASF205:
 3341 1e87 5F5F4C44 		.ascii	"__LDBL_HAS_INFINITY__ 1\000"
 3341      424C5F48 
 3341      41535F49 
 3341      4E46494E 
 3341      4954595F 
 3342              	.LASF12:
 3343 1e9f 5F5F6775 		.ascii	"__guard\000"
 3343      61726400 
 3344              	.LASF502:
 3345 1ea7 5F524545 		.ascii	"_REENT_CHECK_MP(ptr) \000"
 3345      4E545F43 
 3345      4845434B 
 3345      5F4D5028 
 3345      70747229 
 3346              	.LASF195:
 3347 1ebd 5F5F4C44 		.ascii	"__LDBL_MIN_EXP__ (-1021)\000"
 3347      424C5F4D 
 3347      494E5F45 
 3347      58505F5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 81


 3347      20282D31 
 3348              	.LASF482:
 3349 1ed6 5F57494E 		.ascii	"_WINT_T \000"
 3349      545F5420 
 3349      00
 3350              	.LASF263:
 3351 1edf 5F5F554C 		.ascii	"__ULLFRACT_FBIT__ 64\000"
 3351      4C465241 
 3351      43545F46 
 3351      4249545F 
 3351      5F203634 
 3352              	.LASF362:
 3353 1ef4 5F5F5349 		.ascii	"__SIZEOF_WCHAR_T__ 4\000"
 3353      5A454F46 
 3353      5F574348 
 3353      41525F54 
 3353      5F5F2034 
 3354              	.LASF173:
 3355 1f09 5F5F464C 		.ascii	"__FLT_MIN__ 1.1754943508222875e-38F\000"
 3355      545F4D49 
 3355      4E5F5F20 
 3355      312E3137 
 3355      35343934 
 3356              	.LASF534:
 3357 1f2d 5F524545 		.ascii	"_REENT _impure_ptr\000"
 3357      4E54205F 
 3357      696D7075 
 3357      72655F70 
 3357      747200
 3358              	.LASF70:
 3359 1f40 5F5F464C 		.ascii	"__FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__\000"
 3359      4F41545F 
 3359      574F5244 
 3359      5F4F5244 
 3359      45525F5F 
 3360              	.LASF281:
 3361 1f6d 5F5F4143 		.ascii	"__ACCUM_MAX__ 0X7FFFFFFFP-15K\000"
 3361      43554D5F 
 3361      4D41585F 
 3361      5F203058 
 3361      37464646 
 3362              	.LASF244:
 3363 1f8b 5F5F5546 		.ascii	"__UFRACT_IBIT__ 0\000"
 3363      52414354 
 3363      5F494249 
 3363      545F5F20 
 3363      3000
 3364              	.LASF207:
 3365 1f9d 5F5F4445 		.ascii	"__DEC32_MANT_DIG__ 7\000"
 3365      4333325F 
 3365      4D414E54 
 3365      5F444947 
 3365      5F5F2037 
 3366              	.LASF441:
 3367 1fb2 5F5F6E65 		.ascii	"__need_size_t\000"
 3367      65645F73 
 3367      697A655F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 82


 3367      7400
 3368              	.LASF127:
 3369 1fc0 5F5F5349 		.ascii	"__SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)\000"
 3369      475F4154 
 3369      4F4D4943 
 3369      5F4D494E 
 3369      5F5F2028 
 3370              	.LASF262:
 3371 1fed 5F5F4C4C 		.ascii	"__LLFRACT_EPSILON__ 0x1P-63LLR\000"
 3371      46524143 
 3371      545F4550 
 3371      53494C4F 
 3371      4E5F5F20 
 3372              	.LASF512:
 3373 200c 5F524545 		.ascii	"_REENT_RAND48_ADD(ptr) ((ptr)->_new._reent._r48._ad"
 3373      4E545F52 
 3373      414E4434 
 3373      385F4144 
 3373      44287074 
 3374 203f 642900   		.ascii	"d)\000"
 3375              	.LASF18:
 3376 2042 6F706572 		.ascii	"operator delete\000"
 3376      61746F72 
 3376      2064656C 
 3376      65746500 
 3377              	.LASF198:
 3378 2052 5F5F4C44 		.ascii	"__LDBL_MAX_10_EXP__ 308\000"
 3378      424C5F4D 
 3378      41585F31 
 3378      305F4558 
 3378      505F5F20 
 3379              	.LASF228:
 3380 206a 5F5F5346 		.ascii	"__SFRACT_FBIT__ 7\000"
 3380      52414354 
 3380      5F464249 
 3380      545F5F20 
 3380      3700
 3381              	.LASF80:
 3382 207c 5F5F4348 		.ascii	"__CHAR32_TYPE__ long unsigned int\000"
 3382      41523332 
 3382      5F545950 
 3382      455F5F20 
 3382      6C6F6E67 
 3383              	.LASF13:
 3384 209e 6F706572 		.ascii	"operator new\000"
 3384      61746F72 
 3384      206E6577 
 3384      00
 3385              	.LASF422:
 3386 20ab 5F5F6E65 		.ascii	"__need_size_t \000"
 3386      65645F73 
 3386      697A655F 
 3386      742000
 3387              	.LASF429:
 3388 20ba 5F545F53 		.ascii	"_T_SIZE \000"
 3388      495A4520 
 3388      00
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 83


 3389              	.LASF374:
 3390 20c3 5F5F4152 		.ascii	"__ARM_PCS 1\000"
 3390      4D5F5043 
 3390      53203100 
 3391              	.LASF148:
 3392 20cf 5F5F5549 		.ascii	"__UINT_LEAST32_MAX__ 4294967295UL\000"
 3392      4E545F4C 
 3392      45415354 
 3392      33325F4D 
 3392      41585F5F 
 3393              	.LASF412:
 3394 20f1 5F444546 		.ascii	"_DEFUN(name,arglist,args) name(args)\000"
 3394      554E286E 
 3394      616D652C 
 3394      6172676C 
 3394      6973742C 
 3395              	.LASF471:
 3396 2116 5F5F4C4F 		.ascii	"__LOCK_INIT_RECURSIVE(class,lock) static int lock ="
 3396      434B5F49 
 3396      4E49545F 
 3396      52454355 
 3396      52534956 
 3397 2149 20303B00 		.ascii	" 0;\000"
 3398              	.LASF96:
 3399 214d 5F5F5549 		.ascii	"__UINT_LEAST32_TYPE__ long unsigned int\000"
 3399      4E545F4C 
 3399      45415354 
 3399      33325F54 
 3399      5950455F 
 3400              	.LASF314:
 3401 2175 5F5F4451 		.ascii	"__DQ_FBIT__ 63\000"
 3401      5F464249 
 3401      545F5F20 
 3401      363300
 3402              	.LASF276:
 3403 2184 5F5F5553 		.ascii	"__USACCUM_MAX__ 0XFFFFP-8UHK\000"
 3403      41434355 
 3403      4D5F4D41 
 3403      585F5F20 
 3403      30584646 
 3404              	.LASF472:
 3405 21a1 5F5F6C6F 		.ascii	"__lock_init(lock) (_CAST_VOID 0)\000"
 3405      636B5F69 
 3405      6E697428 
 3405      6C6F636B 
 3405      2920285F 
 3406              	.LASF445:
 3407 21c2 5F545F57 		.ascii	"_T_WCHAR_ \000"
 3407      43484152 
 3407      5F2000
 3408              	.LASF297:
 3409 21cd 5F5F554C 		.ascii	"__ULACCUM_EPSILON__ 0x1P-32ULK\000"
 3409      41434355 
 3409      4D5F4550 
 3409      53494C4F 
 3409      4E5F5F20 
 3410              	.LASF37:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 84


 3411 21ec 5F4D4143 		.ascii	"_MACHINE__TYPES_H \000"
 3411      48494E45 
 3411      5F5F5459 
 3411      5045535F 
 3411      482000
 3412              	.LASF132:
 3413 21ff 5F5F5549 		.ascii	"__UINT8_MAX__ 255\000"
 3413      4E54385F 
 3413      4D41585F 
 3413      5F203235 
 3413      3500
 3414              	.LASF291:
 3415 2211 5F5F4C41 		.ascii	"__LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK\000"
 3415      4343554D 
 3415      5F4D4158 
 3415      5F5F2030 
 3415      58374646 
 3416              	.LASF68:
 3417 2239 5F5F4F52 		.ascii	"__ORDER_PDP_ENDIAN__ 3412\000"
 3417      4445525F 
 3417      5044505F 
 3417      454E4449 
 3417      414E5F5F 
 3418              	.LASF23:
 3419 2253 5F5F6378 		.ascii	"__cxa_guard_release\000"
 3419      615F6775 
 3419      6172645F 
 3419      72656C65 
 3419      61736500 
 3420              	.LASF313:
 3421 2267 5F5F5351 		.ascii	"__SQ_IBIT__ 0\000"
 3421      5F494249 
 3421      545F5F20 
 3421      3000
 3422              	.LASF10:
 3423 2275 63686172 		.ascii	"char\000"
 3423      00
 3424              	.LASF171:
 3425 227a 5F5F464C 		.ascii	"__FLT_DECIMAL_DIG__ 9\000"
 3425      545F4445 
 3425      43494D41 
 3425      4C5F4449 
 3425      475F5F20 
 3426              	.LASF536:
 3427 2290 5F4E4557 		.ascii	"_NEWLIB_ALLOCA_H \000"
 3427      4C49425F 
 3427      414C4C4F 
 3427      43415F48 
 3427      2000
 3428              	.LASF226:
 3429 22a2 5F5F4445 		.ascii	"__DEC128_EPSILON__ 1E-33DL\000"
 3429      43313238 
 3429      5F455053 
 3429      494C4F4E 
 3429      5F5F2031 
 3430              	.LASF118:
 3431 22bd 5F5F5749 		.ascii	"__WINT_MAX__ 4294967295U\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 85


 3431      4E545F4D 
 3431      41585F5F 
 3431      20343239 
 3431      34393637 
 3432              	.LASF318:
 3433 22d6 5F5F5551 		.ascii	"__UQQ_FBIT__ 8\000"
 3433      515F4642 
 3433      49545F5F 
 3433      203800
 3434              	.LASF227:
 3435 22e5 5F5F4445 		.ascii	"__DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000"
 3435      43313238 
 3435      5F535542 
 3435      4E4F524D 
 3435      414C5F4D 
 3436 2318 30303030 		.ascii	"000000001E-6143DL\000"
 3436      30303030 
 3436      31452D36 
 3436      31343344 
 3436      4C00
 3437              	.LASF111:
 3438 232a 5F5F5343 		.ascii	"__SCHAR_MAX__ 127\000"
 3438      4841525F 
 3438      4D41585F 
 3438      5F203132 
 3438      3700
 3439              	.LASF158:
 3440 233c 5F5F5549 		.ascii	"__UINT_FAST32_MAX__ 4294967295U\000"
 3440      4E545F46 
 3440      41535433 
 3440      325F4D41 
 3440      585F5F20 
 3441              	.LASF3:
 3442 235c 73686F72 		.ascii	"short int\000"
 3442      7420696E 
 3442      7400
 3443              	.LASF286:
 3444 2366 5F5F5541 		.ascii	"__UACCUM_MAX__ 0XFFFFFFFFP-16UK\000"
 3444      4343554D 
 3444      5F4D4158 
 3444      5F5F2030 
 3444      58464646 
 3445              	.LASF391:
 3446 2386 5F5F5241 		.ascii	"__RAND_MAX\000"
 3446      4E445F4D 
 3446      415800
 3447              	.LASF216:
 3448 2391 5F5F4445 		.ascii	"__DEC64_MAX_EXP__ 385\000"
 3448      4336345F 
 3448      4D41585F 
 3448      4558505F 
 3448      5F203338 
 3449              	.LASF320:
 3450 23a7 5F5F5548 		.ascii	"__UHQ_FBIT__ 16\000"
 3450      515F4642 
 3450      49545F5F 
 3450      20313600 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 86


 3451              	.LASF84:
 3452 23b7 5F5F494E 		.ascii	"__INT32_TYPE__ long int\000"
 3452      5433325F 
 3452      54595045 
 3452      5F5F206C 
 3452      6F6E6720 
 3453              	.LASF475:
 3454 23cf 5F5F6C6F 		.ascii	"__lock_close_recursive(lock) (_CAST_VOID 0)\000"
 3454      636B5F63 
 3454      6C6F7365 
 3454      5F726563 
 3454      75727369 
 3455              	.LASF7:
 3456 23fb 6C6F6E67 		.ascii	"long int\000"
 3456      20696E74 
 3456      00
 3457              	.LASF197:
 3458 2404 5F5F4C44 		.ascii	"__LDBL_MAX_EXP__ 1024\000"
 3458      424C5F4D 
 3458      41585F45 
 3458      58505F5F 
 3458      20313032 
 3459              	.LASF312:
 3460 241a 5F5F5351 		.ascii	"__SQ_FBIT__ 31\000"
 3460      5F464249 
 3460      545F5F20 
 3460      333100
 3461              	.LASF461:
 3462 2429 5F5F4558 		.ascii	"__EXP(x) __ ##x ##__\000"
 3462      50287829 
 3462      205F5F20 
 3462      23237820 
 3462      23235F5F 
 3463              	.LASF459:
 3464 243e 5F5F6E65 		.ascii	"__need_NULL\000"
 3464      65645F4E 
 3464      554C4C00 
 3465              	.LASF250:
 3466 244a 5F5F4C46 		.ascii	"__LFRACT_MIN__ (-0.5LR-0.5LR)\000"
 3466      52414354 
 3466      5F4D494E 
 3466      5F5F2028 
 3466      2D302E35 
 3467              	.LASF346:
 3468 2468 5F5F474E 		.ascii	"__GNUC_GNU_INLINE__ 1\000"
 3468      55435F47 
 3468      4E555F49 
 3468      4E4C494E 
 3468      455F5F20 
 3469              	.LASF72:
 3470 247e 5F5F474E 		.ascii	"__GNUG__ 4\000"
 3470      55475F5F 
 3470      203400
 3471              	.LASF421:
 3472 2489 5F4E4F49 		.ascii	"_NOINLINE_STATIC _NOINLINE static\000"
 3472      4E4C494E 
 3472      455F5354 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 87


 3472      41544943 
 3472      205F4E4F 
 3473              	.LASF26:
 3474 24ab 6E65772E 		.ascii	"new.cpp\000"
 3474      63707000 
 3475              	.LASF206:
 3476 24b3 5F5F4C44 		.ascii	"__LDBL_HAS_QUIET_NAN__ 1\000"
 3476      424C5F48 
 3476      41535F51 
 3476      55494554 
 3476      5F4E414E 
 3477              	.LASF82:
 3478 24cc 5F5F494E 		.ascii	"__INT8_TYPE__ signed char\000"
 3478      54385F54 
 3478      5950455F 
 3478      5F207369 
 3478      676E6564 
 3479              	.LASF345:
 3480 24e6 5F5F5553 		.ascii	"__USER_LABEL_PREFIX__ \000"
 3480      45525F4C 
 3480      4142454C 
 3480      5F505245 
 3480      4649585F 
 3481              	.LASF486:
 3482 24fd 5F415445 		.ascii	"_ATEXIT_SIZE 32\000"
 3482      5849545F 
 3482      53495A45 
 3482      20333200 
 3483              	.LASF390:
 3484 250d 5F504F49 		.ascii	"_POINTER_INT long\000"
 3484      4E544552 
 3484      5F494E54 
 3484      206C6F6E 
 3484      6700
 3485              	.LASF35:
 3486 251f 5F535953 		.ascii	"_SYS_REENT_H_ \000"
 3486      5F524545 
 3486      4E545F48 
 3486      5F2000
 3487              	.LASF427:
 3488 252e 5F535953 		.ascii	"_SYS_SIZE_T_H \000"
 3488      5F53495A 
 3488      455F545F 
 3488      482000
 3489              	.LASF420:
 3490 253d 5F4E4F49 		.ascii	"_NOINLINE __attribute__ ((__noinline__))\000"
 3490      4E4C494E 
 3490      45205F5F 
 3490      61747472 
 3490      69627574 
 3491              	.LASF139:
 3492 2566 5F5F494E 		.ascii	"__INT16_C(c) c\000"
 3492      5431365F 
 3492      43286329 
 3492      206300
 3493              	.LASF316:
 3494 2575 5F5F5451 		.ascii	"__TQ_FBIT__ 127\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 88


 3494      5F464249 
 3494      545F5F20 
 3494      31323700 
 3495              	.LASF237:
 3496 2585 5F5F5553 		.ascii	"__USFRACT_EPSILON__ 0x1P-8UHR\000"
 3496      46524143 
 3496      545F4550 
 3496      53494C4F 
 3496      4E5F5F20 
 3497              	.LASF159:
 3498 25a3 5F5F5549 		.ascii	"__UINT_FAST64_MAX__ 18446744073709551615ULL\000"
 3498      4E545F46 
 3498      41535436 
 3498      345F4D41 
 3498      585F5F20 
 3499              	.LASF304:
 3500 25cf 5F5F554C 		.ascii	"__ULLACCUM_IBIT__ 32\000"
 3500      4C414343 
 3500      554D5F49 
 3500      4249545F 
 3500      5F203332 
 3501              	.LASF131:
 3502 25e4 5F5F494E 		.ascii	"__INT64_MAX__ 9223372036854775807LL\000"
 3502      5436345F 
 3502      4D41585F 
 3502      5F203932 
 3502      32333337 
 3503              	.LASF233:
 3504 2608 5F5F5553 		.ascii	"__USFRACT_FBIT__ 8\000"
 3504      46524143 
 3504      545F4642 
 3504      49545F5F 
 3504      203800
 3505              	.LASF187:
 3506 261b 5F5F4442 		.ascii	"__DBL_MIN__ double(2.2250738585072014e-308L)\000"
 3506      4C5F4D49 
 3506      4E5F5F20 
 3506      646F7562 
 3506      6C652832 
 3507              	.LASF310:
 3508 2648 5F5F4851 		.ascii	"__HQ_FBIT__ 15\000"
 3508      5F464249 
 3508      545F5F20 
 3508      313500
 3509              	.LASF157:
 3510 2657 5F5F5549 		.ascii	"__UINT_FAST16_MAX__ 4294967295U\000"
 3510      4E545F46 
 3510      41535431 
 3510      365F4D41 
 3510      585F5F20 
 3511              	.LASF337:
 3512 2677 5F5F5548 		.ascii	"__UHA_IBIT__ 8\000"
 3512      415F4942 
 3512      49545F5F 
 3512      203800
 3513              	.LASF510:
 3514 2686 5F524545 		.ascii	"_REENT_RAND48_SEED(ptr) ((ptr)->_new._reent._r48._s"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 89


 3514      4E545F52 
 3514      414E4434 
 3514      385F5345 
 3514      45442870 
 3515 26b9 65656429 		.ascii	"eed)\000"
 3515      00
 3516              	.LASF229:
 3517 26be 5F5F5346 		.ascii	"__SFRACT_IBIT__ 0\000"
 3517      52414354 
 3517      5F494249 
 3517      545F5F20 
 3517      3000
 3518              	.LASF397:
 3519 26d0 5F424547 		.ascii	"_BEGIN_STD_C extern \"C\" {\000"
 3519      494E5F53 
 3519      54445F43 
 3519      20657874 
 3519      65726E20 
 3520              	.LASF58:
 3521 26ea 5F5F5349 		.ascii	"__SIZEOF_LONG_LONG__ 8\000"
 3521      5A454F46 
 3521      5F4C4F4E 
 3521      475F4C4F 
 3521      4E475F5F 
 3522              	.LASF319:
 3523 2701 5F5F5551 		.ascii	"__UQQ_IBIT__ 0\000"
 3523      515F4942 
 3523      49545F5F 
 3523      203000
 3524              	.LASF86:
 3525 2710 5F5F5549 		.ascii	"__UINT8_TYPE__ unsigned char\000"
 3525      4E54385F 
 3525      54595045 
 3525      5F5F2075 
 3525      6E736967 
 3526              	.LASF143:
 3527 272d 5F5F494E 		.ascii	"__INT64_C(c) c ## LL\000"
 3527      5436345F 
 3527      43286329 
 3527      20632023 
 3527      23204C4C 
 3528              	.LASF258:
 3529 2742 5F5F4C4C 		.ascii	"__LLFRACT_FBIT__ 63\000"
 3529      46524143 
 3529      545F4642 
 3529      49545F5F 
 3529      20363300 
 3530              	.LASF174:
 3531 2756 5F5F464C 		.ascii	"__FLT_EPSILON__ 1.1920928955078125e-7F\000"
 3531      545F4550 
 3531      53494C4F 
 3531      4E5F5F20 
 3531      312E3139 
 3532              	.LASF93:
 3533 277d 5F5F494E 		.ascii	"__INT_LEAST64_TYPE__ long long int\000"
 3533      545F4C45 
 3533      41535436 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 90


 3533      345F5459 
 3533      50455F5F 
 3534              	.LASF392:
 3535 27a0 5F5F5241 		.ascii	"__RAND_MAX 0x7fffffff\000"
 3535      4E445F4D 
 3535      41582030 
 3535      78376666 
 3535      66666666 
 3536              	.LASF541:
 3537 27b6 45584954 		.ascii	"EXIT_SUCCESS 0\000"
 3537      5F535543 
 3537      43455353 
 3537      203000
 3538              	.LASF88:
 3539 27c5 5F5F5549 		.ascii	"__UINT32_TYPE__ long unsigned int\000"
 3539      4E543332 
 3539      5F545950 
 3539      455F5F20 
 3539      6C6F6E67 
 3540              	.LASF196:
 3541 27e7 5F5F4C44 		.ascii	"__LDBL_MIN_10_EXP__ (-307)\000"
 3541      424C5F4D 
 3541      494E5F31 
 3541      305F4558 
 3541      505F5F20 
 3542              	.LASF71:
 3543 2802 5F5F5349 		.ascii	"__SIZEOF_POINTER__ 4\000"
 3543      5A454F46 
 3543      5F504F49 
 3543      4E544552 
 3543      5F5F2034 
 3544              	.LASF520:
 3545 2817 5F524545 		.ascii	"_REENT_STRTOK_LAST(ptr) ((ptr)->_new._reent._strtok"
 3545      4E545F53 
 3545      5452544F 
 3545      4B5F4C41 
 3545      53542870 
 3546 284a 5F6C6173 		.ascii	"_last)\000"
 3546      742900
 3547              	.LASF371:
 3548 2851 5F5F5646 		.ascii	"__VFP_FP__ 1\000"
 3548      505F4650 
 3548      5F5F2031 
 3548      00
 3549              	.LASF410:
 3550 285e 5F455850 		.ascii	"_EXPARM(name,proto) (* name) proto\000"
 3550      41524D28 
 3550      6E616D65 
 3550      2C70726F 
 3550      746F2920 
 3551              	.LASF256:
 3552 2881 5F5F554C 		.ascii	"__ULFRACT_MAX__ 0XFFFFFFFFP-32ULR\000"
 3552      46524143 
 3552      545F4D41 
 3552      585F5F20 
 3552      30584646 
 3553              	.LASF328:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 91


 3554 28a3 5F5F4841 		.ascii	"__HA_FBIT__ 7\000"
 3554      5F464249 
 3554      545F5F20 
 3554      3700
 3555              	.LASF542:
 3556 28b1 52414E44 		.ascii	"RAND_MAX __RAND_MAX\000"
 3556      5F4D4158 
 3556      205F5F52 
 3556      414E445F 
 3556      4D415800 
 3557              	.LASF69:
 3558 28c5 5F5F4259 		.ascii	"__BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\000"
 3558      54455F4F 
 3558      52444552 
 3558      5F5F205F 
 3558      5F4F5244 
 3559              	.LASF126:
 3560 28ec 5F5F5349 		.ascii	"__SIG_ATOMIC_MAX__ 2147483647\000"
 3560      475F4154 
 3560      4F4D4943 
 3560      5F4D4158 
 3560      5F5F2032 
 3561              	.LASF359:
 3562 290a 5F5F4743 		.ascii	"__GCC_ATOMIC_POINTER_LOCK_FREE 1\000"
 3562      435F4154 
 3562      4F4D4943 
 3562      5F504F49 
 3562      4E544552 
 3563              	.LASF151:
 3564 292b 5F5F5549 		.ascii	"__UINT64_C(c) c ## ULL\000"
 3564      4E543634 
 3564      5F432863 
 3564      29206320 
 3564      23232055 
 3565              	.LASF442:
 3566 2942 5F5F7763 		.ascii	"__wchar_t__ \000"
 3566      6861725F 
 3566      745F5F20 
 3566      00
 3567              	.LASF292:
 3568 294f 5F5F4C41 		.ascii	"__LACCUM_EPSILON__ 0x1P-31LK\000"
 3568      4343554D 
 3568      5F455053 
 3568      494C4F4E 
 3568      5F5F2030 
 3569              	.LASF532:
 3570 296c 5F4B6D61 		.ascii	"_Kmax (sizeof (size_t) << 3)\000"
 3570      78202873 
 3570      697A656F 
 3570      66202873 
 3570      697A655F 
 3571              	.LASF508:
 3572 2989 5F524545 		.ascii	"_REENT_SIGNGAM(ptr) ((ptr)->_new._reent._gamma_sign"
 3572      4E545F53 
 3572      49474E47 
 3572      414D2870 
 3572      74722920 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 92


 3573 29bc 67616D29 		.ascii	"gam)\000"
 3573      00
 3574              	.LASF232:
 3575 29c1 5F5F5346 		.ascii	"__SFRACT_EPSILON__ 0x1P-7HR\000"
 3575      52414354 
 3575      5F455053 
 3575      494C4F4E 
 3575      5F5F2030 
 3576              	.LASF8:
 3577 29dd 73697A65 		.ascii	"sizetype\000"
 3577      74797065 
 3577      00
 3578              	.LASF322:
 3579 29e6 5F5F5553 		.ascii	"__USQ_FBIT__ 32\000"
 3579      515F4642 
 3579      49545F5F 
 3579      20333200 
 3580              	.LASF329:
 3581 29f6 5F5F4841 		.ascii	"__HA_IBIT__ 8\000"
 3581      5F494249 
 3581      545F5F20 
 3581      3800
 3582              	.LASF9:
 3583 2a04 6C6F6E67 		.ascii	"long unsigned int\000"
 3583      20756E73 
 3583      69676E65 
 3583      6420696E 
 3583      7400
 3584              	.LASF161:
 3585 2a16 5F5F5549 		.ascii	"__UINTPTR_MAX__ 4294967295U\000"
 3585      4E545054 
 3585      525F4D41 
 3585      585F5F20 
 3585      34323934 
 3586              	.LASF352:
 3587 2a32 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR32_T_LOCK_FREE 1\000"
 3587      435F4154 
 3587      4F4D4943 
 3587      5F434841 
 3587      5233325F 
 3588              	.LASF109:
 3589 2a54 5F5F4445 		.ascii	"__DEPRECATED 1\000"
 3589      50524543 
 3589      41544544 
 3589      203100
 3590              	.LASF444:
 3591 2a63 5F574348 		.ascii	"_WCHAR_T \000"
 3591      41525F54 
 3591      2000
 3592              	.LASF133:
 3593 2a6d 5F5F5549 		.ascii	"__UINT16_MAX__ 65535\000"
 3593      4E543136 
 3593      5F4D4158 
 3593      5F5F2036 
 3593      35353335 
 3594              	.LASF64:
 3595 2a82 5F5F4348 		.ascii	"__CHAR_BIT__ 8\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 93


 3595      41525F42 
 3595      49545F5F 
 3595      203800
 3596              	.LASF411:
 3597 2a91 5F455846 		.ascii	"_EXFNPTR(name,proto) (* name) proto\000"
 3597      4E505452 
 3597      286E616D 
 3597      652C7072 
 3597      6F746F29 
 3598              	.LASF124:
 3599 2ab5 5F5F5549 		.ascii	"__UINTMAX_MAX__ 18446744073709551615ULL\000"
 3599      4E544D41 
 3599      585F4D41 
 3599      585F5F20 
 3599      31383434 
 3600              	.LASF242:
 3601 2add 5F5F4652 		.ascii	"__FRACT_EPSILON__ 0x1P-15R\000"
 3601      4143545F 
 3601      45505349 
 3601      4C4F4E5F 
 3601      5F203078 
 3602              	.LASF42:
 3603 2af8 5F5F5354 		.ascii	"__STDC_HOSTED__ 1\000"
 3603      44435F48 
 3603      4F535445 
 3603      445F5F20 
 3603      3100
 3604              	.LASF122:
 3605 2b0a 5F5F494E 		.ascii	"__INTMAX_MAX__ 9223372036854775807LL\000"
 3605      544D4158 
 3605      5F4D4158 
 3605      5F5F2039 
 3605      32323333 
 3606              	.LASF446:
 3607 2b2f 5F545F57 		.ascii	"_T_WCHAR \000"
 3607      43484152 
 3607      2000
 3608              	.LASF418:
 3609 2b39 5F415454 		.ascii	"_ATTRIBUTE(attrs) __attribute__ (attrs)\000"
 3609      52494255 
 3609      54452861 
 3609      74747273 
 3609      29205F5F 
 3610              	.LASF406:
 3611 2b61 5F444F54 		.ascii	"_DOTS , ...\000"
 3611      53202C20 
 3611      2E2E2E00 
 3612              	.LASF370:
 3613 2b6d 5F5F534F 		.ascii	"__SOFTFP__ 1\000"
 3613      46544650 
 3613      5F5F2031 
 3613      00
 3614              	.LASF155:
 3615 2b7a 5F5F494E 		.ascii	"__INT_FAST64_MAX__ 9223372036854775807LL\000"
 3615      545F4641 
 3615      53543634 
 3615      5F4D4158 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 94


 3615      5F5F2039 
 3616              	.LASF379:
 3617 2ba3 5F5F4E45 		.ascii	"__NEWLIB_H__ 1\000"
 3617      574C4942 
 3617      5F485F5F 
 3617      203100
 3618              	.LASF495:
 3619 2bb2 5F524545 		.ascii	"_REENT_EMERGENCY_SIZE 25\000"
 3619      4E545F45 
 3619      4D455247 
 3619      454E4359 
 3619      5F53495A 
 3620              	.LASF505:
 3621 2bcb 5F524545 		.ascii	"_REENT_CHECK_EMERGENCY(ptr) \000"
 3621      4E545F43 
 3621      4845434B 
 3621      5F454D45 
 3621      5247454E 
 3622              	.LASF357:
 3623 2be8 5F5F4743 		.ascii	"__GCC_ATOMIC_LLONG_LOCK_FREE 1\000"
 3623      435F4154 
 3623      4F4D4943 
 3623      5F4C4C4F 
 3623      4E475F4C 
 3624              	.LASF521:
 3625 2c07 5F524545 		.ascii	"_REENT_MBLEN_STATE(ptr) ((ptr)->_new._reent._mblen_"
 3625      4E545F4D 
 3625      424C454E 
 3625      5F535441 
 3625      54452870 
 3626 2c3a 73746174 		.ascii	"state)\000"
 3626      652900
 3627              	.LASF169:
 3628 2c41 5F5F464C 		.ascii	"__FLT_MAX_EXP__ 128\000"
 3628      545F4D41 
 3628      585F4558 
 3628      505F5F20 
 3628      31323800 
 3629              	.LASF51:
 3630 2c55 5F5F4154 		.ascii	"__ATOMIC_ACQ_REL 4\000"
 3630      4F4D4943 
 3630      5F414351 
 3630      5F52454C 
 3630      203400
 3631              	.LASF105:
 3632 2c68 5F5F5549 		.ascii	"__UINT_FAST64_TYPE__ long long unsigned int\000"
 3632      4E545F46 
 3632      41535436 
 3632      345F5459 
 3632      50455F5F 
 3633              	.LASF524:
 3634 2c94 5F524545 		.ascii	"_REENT_MBRLEN_STATE(ptr) ((ptr)->_new._reent._mbrle"
 3634      4E545F4D 
 3634      42524C45 
 3634      4E5F5354 
 3634      41544528 
 3635 2cc7 6E5F7374 		.ascii	"n_state)\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 95


 3635      61746529 
 3635      00
 3636              	.LASF2:
 3637 2cd0 756E7369 		.ascii	"unsigned char\000"
 3637      676E6564 
 3637      20636861 
 3637      7200
 3638              	.LASF208:
 3639 2cde 5F5F4445 		.ascii	"__DEC32_MIN_EXP__ (-94)\000"
 3639      4333325F 
 3639      4D494E5F 
 3639      4558505F 
 3639      5F20282D 
 3640              	.LASF78:
 3641 2cf6 5F5F5549 		.ascii	"__UINTMAX_TYPE__ long long unsigned int\000"
 3641      4E544D41 
 3641      585F5459 
 3641      50455F5F 
 3641      206C6F6E 
 3642              	.LASF38:
 3643 2d1e 5F5F6E65 		.ascii	"__need_wint_t \000"
 3643      65645F77 
 3643      696E745F 
 3643      742000
 3644              	.LASF489:
 3645 2d2d 5F52414E 		.ascii	"_RAND48_SEED_1 (0xabcd)\000"
 3645      4434385F 
 3645      53454544 
 3645      5F312028 
 3645      30786162 
 3646              	.LASF202:
 3647 2d45 5F5F4C44 		.ascii	"__LDBL_EPSILON__ 2.2204460492503131e-16L\000"
 3647      424C5F45 
 3647      5053494C 
 3647      4F4E5F5F 
 3647      20322E32 
 3648              	.LASF106:
 3649 2d6e 5F5F494E 		.ascii	"__INTPTR_TYPE__ int\000"
 3649      54505452 
 3649      5F545950 
 3649      455F5F20 
 3649      696E7400 
 3650              	.LASF396:
 3651 2d82 5F484156 		.ascii	"_HAVE_STDC \000"
 3651      455F5354 
 3651      44432000 
 3652              	.LASF275:
 3653 2d8e 5F5F5553 		.ascii	"__USACCUM_MIN__ 0.0UHK\000"
 3653      41434355 
 3653      4D5F4D49 
 3653      4E5F5F20 
 3653      302E3055 
 3654              	.LASF234:
 3655 2da5 5F5F5553 		.ascii	"__USFRACT_IBIT__ 0\000"
 3655      46524143 
 3655      545F4942 
 3655      49545F5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 96


 3655      203000
 3656              	.LASF540:
 3657 2db8 45584954 		.ascii	"EXIT_FAILURE 1\000"
 3657      5F464149 
 3657      4C555245 
 3657      203100
 3658              	.LASF104:
 3659 2dc7 5F5F5549 		.ascii	"__UINT_FAST32_TYPE__ unsigned int\000"
 3659      4E545F46 
 3659      41535433 
 3659      325F5459 
 3659      50455F5F 
 3660              	.LASF381:
 3661 2de9 5F57414E 		.ascii	"_WANT_IO_LONG_LONG 1\000"
 3661      545F494F 
 3661      5F4C4F4E 
 3661      475F4C4F 
 3661      4E472031 
 3662              	.LASF315:
 3663 2dfe 5F5F4451 		.ascii	"__DQ_IBIT__ 0\000"
 3663      5F494249 
 3663      545F5F20 
 3663      3000
 3664              	.LASF189:
 3665 2e0c 5F5F4442 		.ascii	"__DBL_DENORM_MIN__ double(4.9406564584124654e-324L)"
 3665      4C5F4445 
 3665      4E4F524D 
 3665      5F4D494E 
 3665      5F5F2064 
 3666 2e3f 00       		.ascii	"\000"
 3667              	.LASF449:
 3668 2e40 5F425344 		.ascii	"_BSD_WCHAR_T_ \000"
 3668      5F574348 
 3668      41525F54 
 3668      5F2000
 3669              	.LASF152:
 3670 2e4f 5F5F494E 		.ascii	"__INT_FAST8_MAX__ 2147483647\000"
 3670      545F4641 
 3670      5354385F 
 3670      4D41585F 
 3670      5F203231 
 3671              	.LASF73:
 3672 2e6c 5F5F5349 		.ascii	"__SIZE_TYPE__ unsigned int\000"
 3672      5A455F54 
 3672      5950455F 
 3672      5F20756E 
 3672      7369676E 
 3673              	.LASF303:
 3674 2e87 5F5F554C 		.ascii	"__ULLACCUM_FBIT__ 32\000"
 3674      4C414343 
 3674      554D5F46 
 3674      4249545F 
 3674      5F203332 
 3675              	.LASF16:
 3676 2e9c 5F5A6E61 		.ascii	"_Znaj\000"
 3676      6A00
 3677              	.LASF476:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 97


 3678 2ea2 5F5F6C6F 		.ascii	"__lock_acquire(lock) (_CAST_VOID 0)\000"
 3678      636B5F61 
 3678      63717569 
 3678      7265286C 
 3678      6F636B29 
 3679              	.LASF468:
 3680 2ec6 5F5F4558 		.ascii	"__EXP\000"
 3680      5000
 3681              	.LASF114:
 3682 2ecc 5F5F4C4F 		.ascii	"__LONG_MAX__ 2147483647L\000"
 3682      4E475F4D 
 3682      41585F5F 
 3682      20323134 
 3682      37343833 
 3683              	.LASF354:
 3684 2ee5 5F5F4743 		.ascii	"__GCC_ATOMIC_SHORT_LOCK_FREE 1\000"
 3684      435F4154 
 3684      4F4D4943 
 3684      5F53484F 
 3684      52545F4C 
 3685              	.LASF504:
 3686 2f04 5F524545 		.ascii	"_REENT_CHECK_ASCTIME_BUF(ptr) \000"
 3686      4E545F43 
 3686      4845434B 
 3686      5F415343 
 3686      54494D45 
 3687              	.LASF53:
 3688 2f23 5F5F4F50 		.ascii	"__OPTIMIZE_SIZE__ 1\000"
 3688      54494D49 
 3688      5A455F53 
 3688      495A455F 
 3688      5F203100 
 3689              	.LASF477:
 3690 2f37 5F5F6C6F 		.ascii	"__lock_acquire_recursive(lock) (_CAST_VOID 0)\000"
 3690      636B5F61 
 3690      63717569 
 3690      72655F72 
 3690      65637572 
 3691              	.LASF168:
 3692 2f65 5F5F464C 		.ascii	"__FLT_MIN_10_EXP__ (-37)\000"
 3692      545F4D49 
 3692      4E5F3130 
 3692      5F455850 
 3692      5F5F2028 
 3693              	.LASF405:
 3694 2f7e 5F534947 		.ascii	"_SIGNED signed\000"
 3694      4E454420 
 3694      7369676E 
 3694      656400
 3695              	.LASF117:
 3696 2f8d 5F5F5743 		.ascii	"__WCHAR_MIN__ 0U\000"
 3696      4841525F 
 3696      4D494E5F 
 3696      5F203055 
 3696      00
 3697              	.LASF191:
 3698 2f9e 5F5F4442 		.ascii	"__DBL_HAS_INFINITY__ 1\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 98


 3698      4C5F4841 
 3698      535F494E 
 3698      46494E49 
 3698      54595F5F 
 3699              	.LASF499:
 3700 2fb5 5F524545 		.ascii	"_REENT_INIT(var) { 0, &(var).__sf[0], &(var).__sf[1"
 3700      4E545F49 
 3700      4E495428 
 3700      76617229 
 3700      207B2030 
 3701 2fe8 5D2C2026 		.ascii	"], &(var).__sf[2], 0, \"\", 0, \"C\", 0, _NULL, _NU"
 3701      28766172 
 3701      292E5F5F 
 3701      73665B32 
 3701      5D2C2030 
 3702 3017 4C4C2C20 		.ascii	"LL, 0, _NULL, _NULL, 0, _NULL, { { 0, _NULL, \"\", "
 3702      302C205F 
 3702      4E554C4C 
 3702      2C205F4E 
 3702      554C4C2C 
 3703 3048 7B302C20 		.ascii	"{0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 1, { {_RAND48_SEED_"
 3703      302C2030 
 3703      2C20302C 
 3703      20302C20 
 3703      302C2030 
 3704 307b 302C205F 		.ascii	"0, _RAND48_SEED_1, _RAND48_SEED_2}, {_RAND48_MULT_0"
 3704      52414E44 
 3704      34385F53 
 3704      4545445F 
 3704      312C205F 
 3705 30ae 2C205F52 		.ascii	", _RAND48_MULT_1, _RAND48_MULT_2}, _RAND48_ADD }, {"
 3705      414E4434 
 3705      385F4D55 
 3705      4C545F31 
 3705      2C205F52 
 3706 30e1 302C207B 		.ascii	"0, {0}}, {0, {0}}, {0, {0}}, \"\", \"\", 0, {0, {0}"
 3706      307D7D2C 
 3706      207B302C 
 3706      207B307D 
 3706      7D2C207B 
 3707 3110 7D2C207B 		.ascii	"}, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}} } }, _NUL"
 3707      302C207B 
 3707      307D7D2C 
 3707      207B302C 
 3707      207B307D 
 3708 3143 4C2C207B 		.ascii	"L, {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}, _"
 3708      5F4E554C 
 3708      4C2C2030 
 3708      2C207B5F 
 3708      4E554C4C 
 3709 3176 4E554C4C 		.ascii	"NULL, {_NULL, 0, _NULL} }\000"
 3709      2C207B5F 
 3709      4E554C4C 
 3709      2C20302C 
 3709      205F4E55 
 3710              	.LASF100:
 3711 3190 5F5F494E 		.ascii	"__INT_FAST32_TYPE__ int\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 99


 3711      545F4641 
 3711      53543332 
 3711      5F545950 
 3711      455F5F20 
 3712              	.LASF269:
 3713 31a8 5F5F5341 		.ascii	"__SACCUM_IBIT__ 8\000"
 3713      4343554D 
 3713      5F494249 
 3713      545F5F20 
 3713      3800
 3714              	.LASF178:
 3715 31ba 5F5F464C 		.ascii	"__FLT_HAS_QUIET_NAN__ 1\000"
 3715      545F4841 
 3715      535F5155 
 3715      4945545F 
 3715      4E414E5F 
 3716              	.LASF56:
 3717 31d2 5F5F5349 		.ascii	"__SIZEOF_INT__ 4\000"
 3717      5A454F46 
 3717      5F494E54 
 3717      5F5F2034 
 3717      00
 3718              	.LASF77:
 3719 31e3 5F5F494E 		.ascii	"__INTMAX_TYPE__ long long int\000"
 3719      544D4158 
 3719      5F545950 
 3719      455F5F20 
 3719      6C6F6E67 
 3720              	.LASF123:
 3721 3201 5F5F494E 		.ascii	"__INTMAX_C(c) c ## LL\000"
 3721      544D4158 
 3721      5F432863 
 3721      29206320 
 3721      2323204C 
 3722              	.LASF366:
 3723 3217 5F5F4150 		.ascii	"__APCS_32__ 1\000"
 3723      43535F33 
 3723      325F5F20 
 3723      3100
 3724              	.LASF538:
 3725 3225 616C6C6F 		.ascii	"alloca(size) __builtin_alloca(size)\000"
 3725      63612873 
 3725      697A6529 
 3725      205F5F62 
 3725      75696C74 
 3726              	.LASF408:
 3727 3249 5F455846 		.ascii	"_EXFUN_NOTHROW(name,proto) name proto _NOTHROW\000"
 3727      554E5F4E 
 3727      4F544852 
 3727      4F57286E 
 3727      616D652C 
 3728              	.LASF436:
 3729 3278 5F53495A 		.ascii	"_SIZE_T_DECLARED \000"
 3729      455F545F 
 3729      4445434C 
 3729      41524544 
 3729      2000
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 100


 3730              	.LASF383:
 3731 328a 5F4D425F 		.ascii	"_MB_LEN_MAX 1\000"
 3731      4C454E5F 
 3731      4D415820 
 3731      3100
 3732              	.LASF89:
 3733 3298 5F5F5549 		.ascii	"__UINT64_TYPE__ long long unsigned int\000"
 3733      4E543634 
 3733      5F545950 
 3733      455F5F20 
 3733      6C6F6E67 
 3734              	.LASF184:
 3735 32bf 5F5F4442 		.ascii	"__DBL_MAX_10_EXP__ 308\000"
 3735      4C5F4D41 
 3735      585F3130 
 3735      5F455850 
 3735      5F5F2033 
 3736              	.LASF4:
 3737 32d6 73686F72 		.ascii	"short unsigned int\000"
 3737      7420756E 
 3737      7369676E 
 3737      65642069 
 3737      6E7400
 3738              	.LASF335:
 3739 32e9 5F5F5441 		.ascii	"__TA_IBIT__ 64\000"
 3739      5F494249 
 3739      545F5F20 
 3739      363400
 3740              	.LASF308:
 3741 32f8 5F5F5151 		.ascii	"__QQ_FBIT__ 7\000"
 3741      5F464249 
 3741      545F5F20 
 3741      3700
 3742              	.LASF469:
 3743 3306 5F5F5359 		.ascii	"__SYS_LOCK_H__ \000"
 3743      535F4C4F 
 3743      434B5F48 
 3743      5F5F2000 
 3744              	.LASF481:
 3745 3316 5F5F6C6F 		.ascii	"__lock_release_recursive(lock) (_CAST_VOID 0)\000"
 3745      636B5F72 
 3745      656C6561 
 3745      73655F72 
 3745      65637572 
 3746              	.LASF95:
 3747 3344 5F5F5549 		.ascii	"__UINT_LEAST16_TYPE__ short unsigned int\000"
 3747      4E545F4C 
 3747      45415354 
 3747      31365F54 
 3747      5950455F 
 3748              	.LASF167:
 3749 336d 5F5F464C 		.ascii	"__FLT_MIN_EXP__ (-125)\000"
 3749      545F4D49 
 3749      4E5F4558 
 3749      505F5F20 
 3749      282D3132 
 3750              	.LASF225:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 101


 3751 3384 5F5F4445 		.ascii	"__DEC128_MAX__ 9.999999999999999999999999999999999E"
 3751      43313238 
 3751      5F4D4158 
 3751      5F5F2039 
 3751      2E393939 
 3752 33b7 36313434 		.ascii	"6144DL\000"
 3752      444C00
 3753              	.LASF417:
 3754 33be 5F504152 		.ascii	"_PARAMS(paramlist) paramlist\000"
 3754      414D5328 
 3754      70617261 
 3754      6D6C6973 
 3754      74292070 
 3755              	.LASF394:
 3756 33db 5F5F494D 		.ascii	"__IMPORT \000"
 3756      504F5254 
 3756      2000
 3757              	.LASF199:
 3758 33e5 5F5F4445 		.ascii	"__DECIMAL_DIG__ 17\000"
 3758      43494D41 
 3758      4C5F4449 
 3758      475F5F20 
 3758      313700
 3759              	.LASF409:
 3760 33f8 5F455846 		.ascii	"_EXFUN(name,proto) name proto\000"
 3760      554E286E 
 3760      616D652C 
 3760      70726F74 
 3760      6F29206E 
 3761              	.LASF141:
 3762 3416 5F5F494E 		.ascii	"__INT32_C(c) c ## L\000"
 3762      5433325F 
 3762      43286329 
 3762      20632023 
 3762      23204C00 
 3763              	.LASF500:
 3764 342a 5F524545 		.ascii	"_REENT_INIT_PTR(var) { (var)->_errno = 0; (var)->_s"
 3764      4E545F49 
 3764      4E49545F 
 3764      50545228 
 3764      76617229 
 3765 345d 7464696E 		.ascii	"tdin = &(var)->__sf[0]; (var)->_stdout = &(var)->__"
 3765      203D2026 
 3765      28766172 
 3765      292D3E5F 
 3765      5F73665B 
 3766 3490 73665B31 		.ascii	"sf[1]; (var)->_stderr = &(var)->__sf[2]; (var)->_in"
 3766      5D3B2028 
 3766      76617229 
 3766      2D3E5F73 
 3766      74646572 
 3767 34c3 63203D20 		.ascii	"c = 0; memset(&(var)->_emergency, 0, sizeof((var)->"
 3767      303B206D 
 3767      656D7365 
 3767      74282628 
 3767      76617229 
 3768 34f6 5F656D65 		.ascii	"_emergency)); (var)->_current_category = 0; (var)->"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 102


 3768      7267656E 
 3768      63792929 
 3768      3B202876 
 3768      6172292D 
 3769 3529 5F637572 		.ascii	"_current_locale = \"C\"; (var)->__sdidinit = 0; (va"
 3769      72656E74 
 3769      5F6C6F63 
 3769      616C6520 
 3769      3D202243 
 3770 355a 72292D3E 		.ascii	"r)->__cleanup = _NULL; (var)->_result = _NULL; (var"
 3770      5F5F636C 
 3770      65616E75 
 3770      70203D20 
 3770      5F4E554C 
 3771 358d 292D3E5F 		.ascii	")->_result_k = 0; (var)->_p5s = _NULL; (var)->_free"
 3771      72657375 
 3771      6C745F6B 
 3771      203D2030 
 3771      3B202876 
 3772 35c0 6C697374 		.ascii	"list = _NULL; (var)->_cvtlen = 0; (var)->_cvtbuf = "
 3772      203D205F 
 3772      4E554C4C 
 3772      3B202876 
 3772      6172292D 
 3773 35f3 5F4E554C 		.ascii	"_NULL; (var)->_new._reent._unused_rand = 0; (var)->"
 3773      4C3B2028 
 3773      76617229 
 3773      2D3E5F6E 
 3773      65772E5F 
 3774 3626 5F6E6577 		.ascii	"_new._reent._strtok_last = _NULL; (var)->_new._reen"
 3774      2E5F7265 
 3774      656E742E 
 3774      5F737472 
 3774      746F6B5F 
 3775 3659 742E5F61 		.ascii	"t._asctime_buf[0] = 0; memset(&(var)->_new._reent._"
 3775      73637469 
 3775      6D655F62 
 3775      75665B30 
 3775      5D203D20 
 3776 368c 6C6F6361 		.ascii	"localtime_buf, 0, sizeof((var)->_new._reent._localt"
 3776      6C74696D 
 3776      655F6275 
 3776      662C2030 
 3776      2C207369 
 3777 36bf 696D655F 		.ascii	"ime_buf)); (var)->_new._reent._gamma_signgam = 0; ("
 3777      62756629 
 3777      293B2028 
 3777      76617229 
 3777      2D3E5F6E 
 3778 36f2 76617229 		.ascii	"var)->_new._reent._rand_next = 1; (var)->_new._reen"
 3778      2D3E5F6E 
 3778      65772E5F 
 3778      7265656E 
 3778      742E5F72 
 3779 3725 742E5F72 		.ascii	"t._r48._seed[0] = _RAND48_SEED_0; (var)->_new._reen"
 3779      34382E5F 
 3779      73656564 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 103


 3779      5B305D20 
 3779      3D205F52 
 3780 3758 742E5F72 		.ascii	"t._r48._seed[1] = _RAND48_SEED_1; (var)->_new._reen"
 3780      34382E5F 
 3780      73656564 
 3780      5B315D20 
 3780      3D205F52 
 3781 378b 742E5F72 		.ascii	"t._r48._seed[2] = _RAND48_SEED_2; (var)->_new._reen"
 3781      34382E5F 
 3781      73656564 
 3781      5B325D20 
 3781      3D205F52 
 3782 37be 742E5F72 		.ascii	"t._r48._mult[0] = _RAND48_MULT_0; (var)->_new._reen"
 3782      34382E5F 
 3782      6D756C74 
 3782      5B305D20 
 3782      3D205F52 
 3783 37f1 742E5F72 		.ascii	"t._r48._mult[1] = _RAND48_MULT_1; (var)->_new._reen"
 3783      34382E5F 
 3783      6D756C74 
 3783      5B315D20 
 3783      3D205F52 
 3784 3824 742E5F72 		.ascii	"t._r48._mult[2] = _RAND48_MULT_2; (var)->_new._reen"
 3784      34382E5F 
 3784      6D756C74 
 3784      5B325D20 
 3784      3D205F52 
 3785 3857 742E5F72 		.ascii	"t._r48._add = _RAND48_ADD; (var)->_new._reent._mble"
 3785      34382E5F 
 3785      61646420 
 3785      3D205F52 
 3785      414E4434 
 3786 388a 6E5F7374 		.ascii	"n_state.__count = 0; (var)->_new._reent._mblen_stat"
 3786      6174652E 
 3786      5F5F636F 
 3786      756E7420 
 3786      3D20303B 
 3787 38bd 652E5F5F 		.ascii	"e.__value.__wch = 0; (var)->_new._reent._mbtowc_sta"
 3787      76616C75 
 3787      652E5F5F 
 3787      77636820 
 3787      3D20303B 
 3788 38f0 74652E5F 		.ascii	"te.__count = 0; (var)->_new._reent._mbtowc_state.__"
 3788      5F636F75 
 3788      6E74203D 
 3788      20303B20 
 3788      28766172 
 3789 3923 76616C75 		.ascii	"value.__wch = 0; (var)->_new._reent._wctomb_state._"
 3789      652E5F5F 
 3789      77636820 
 3789      3D20303B 
 3789      20287661 
 3790 3956 5F636F75 		.ascii	"_count = 0; (var)->_new._reent._wctomb_state.__valu"
 3790      6E74203D 
 3790      20303B20 
 3790      28766172 
 3790      292D3E5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 104


 3791 3989 652E5F5F 		.ascii	"e.__wch = 0; (var)->_new._reent._mbrlen_state.__cou"
 3791      77636820 
 3791      3D20303B 
 3791      20287661 
 3791      72292D3E 
 3792 39bc 6E74203D 		.ascii	"nt = 0; (var)->_new._reent._mbrlen_state.__value.__"
 3792      20303B20 
 3792      28766172 
 3792      292D3E5F 
 3792      6E65772E 
 3793 39ef 77636820 		.ascii	"wch = 0; (var)->_new._reent._mbrtowc_state.__count "
 3793      3D20303B 
 3793      20287661 
 3793      72292D3E 
 3793      5F6E6577 
 3794 3a22 3D20303B 		.ascii	"= 0; (var)->_new._reent._mbrtowc_state.__value.__wc"
 3794      20287661 
 3794      72292D3E 
 3794      5F6E6577 
 3794      2E5F7265 
 3795 3a55 68203D20 		.ascii	"h = 0; (var)->_new._reent._mbsrtowcs_state.__count "
 3795      303B2028 
 3795      76617229 
 3795      2D3E5F6E 
 3795      65772E5F 
 3796 3a88 3D20303B 		.ascii	"= 0; (var)->_new._reent._mbsrtowcs_state.__value.__"
 3796      20287661 
 3796      72292D3E 
 3796      5F6E6577 
 3796      2E5F7265 
 3797 3abb 77636820 		.ascii	"wch = 0; (var)->_new._reent._wcrtomb_state.__count "
 3797      3D20303B 
 3797      20287661 
 3797      72292D3E 
 3797      5F6E6577 
 3798 3aee 3D20303B 		.ascii	"= 0; (var)->_new._reent._wcrtomb_state.__value.__wc"
 3798      20287661 
 3798      72292D3E 
 3798      5F6E6577 
 3798      2E5F7265 
 3799 3b21 68203D20 		.ascii	"h = 0; (var)->_new._reent._wcsrtombs_state.__count "
 3799      303B2028 
 3799      76617229 
 3799      2D3E5F6E 
 3799      65772E5F 
 3800 3b54 3D20303B 		.ascii	"= 0; (var)->_new._reent._wcsrtombs_state.__value.__"
 3800      20287661 
 3800      72292D3E 
 3800      5F6E6577 
 3800      2E5F7265 
 3801 3b87 77636820 		.ascii	"wch = 0; (var)->_new._reent._l64a_buf[0] = '\\0'; ("
 3801      3D20303B 
 3801      20287661 
 3801      72292D3E 
 3801      5F6E6577 
 3802 3bb9 76617229 		.ascii	"var)->_new._reent._signal_buf[0] = '\\0'; (var)->_n"
 3802      2D3E5F6E 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 105


 3802      65772E5F 
 3802      7265656E 
 3802      742E5F73 
 3803 3beb 65772E5F 		.ascii	"ew._reent._getd"
 3803      7265656E 
 3803      742E5F67 
 3803      657464
 3804 3bfa 6174655F 		.ascii	"ate_err = 0; (var)->_atexit = _NULL; (var)->_atexit"
 3804      65727220 
 3804      3D20303B 
 3804      20287661 
 3804      72292D3E 
 3805 3c2d 302E5F6E 		.ascii	"0._next = _NULL; (var)->_atexit0._ind = 0; (var)->_"
 3805      65787420 
 3805      3D205F4E 
 3805      554C4C3B 
 3805      20287661 
 3806 3c60 61746578 		.ascii	"atexit0._fns[0] = _NULL; (var)->_atexit0._on_exit_a"
 3806      6974302E 
 3806      5F666E73 
 3806      5B305D20 
 3806      3D205F4E 
 3807 3c93 7267732E 		.ascii	"rgs._fntypes = 0; (var)->_atexit0._on_exit_args._fn"
 3807      5F666E74 
 3807      79706573 
 3807      203D2030 
 3807      3B202876 
 3808 3cc6 61726773 		.ascii	"args[0] = _NULL; (var)->_sig_func = _NULL; (var)->_"
 3808      5B305D20 
 3808      3D205F4E 
 3808      554C4C3B 
 3808      20287661 
 3809 3cf9 5F73676C 		.ascii	"_sglue._next = _NULL; (var)->__sglue._niobs = 0; (v"
 3809      75652E5F 
 3809      6E657874 
 3809      203D205F 
 3809      4E554C4C 
 3810 3d2c 6172292D 		.ascii	"ar)->__sglue._iobs = _NULL; memset(&(var)->__sf, 0,"
 3810      3E5F5F73 
 3810      676C7565 
 3810      2E5F696F 
 3810      6273203D 
 3811 3d5f 2073697A 		.ascii	" sizeof((var)->__sf)); }\000"
 3811      656F6628 
 3811      28766172 
 3811      292D3E5F 
 3811      5F736629 
 3812              	.LASF430:
 3813 3d78 5F5F5349 		.ascii	"__SIZE_T \000"
 3813      5A455F54 
 3813      2000
 3814              	.LASF526:
 3815 3d82 5F524545 		.ascii	"_REENT_MBSRTOWCS_STATE(ptr) ((ptr)->_new._reent._mb"
 3815      4E545F4D 
 3815      42535254 
 3815      4F574353 
 3815      5F535441 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 106


 3816 3db5 7372746F 		.ascii	"srtowcs_state)\000"
 3816      7763735F 
 3816      73746174 
 3816      652900
 3817              	.LASF39:
 3818 3dc4 5F4D4143 		.ascii	"_MACHSTDLIB_H_ \000"
 3818      48535444 
 3818      4C49425F 
 3818      485F2000 
 3819              	.LASF190:
 3820 3dd4 5F5F4442 		.ascii	"__DBL_HAS_DENORM__ 1\000"
 3820      4C5F4841 
 3820      535F4445 
 3820      4E4F524D 
 3820      5F5F2031 
 3821              	.LASF343:
 3822 3de9 5F5F5554 		.ascii	"__UTA_IBIT__ 64\000"
 3822      415F4942 
 3822      49545F5F 
 3822      20363400 
 3823              	.LASF498:
 3824 3df9 5F4E5F4C 		.ascii	"_N_LISTS 30\000"
 3824      49535453 
 3824      20333000 
 3825              	.LASF251:
 3826 3e05 5F5F4C46 		.ascii	"__LFRACT_MAX__ 0X7FFFFFFFP-31LR\000"
 3826      52414354 
 3826      5F4D4158 
 3826      5F5F2030 
 3826      58374646 
 3827              	.LASF340:
 3828 3e25 5F5F5544 		.ascii	"__UDA_FBIT__ 32\000"
 3828      415F4642 
 3828      49545F5F 
 3828      20333200 
 3829              	.LASF497:
 3830 3e35 5F524545 		.ascii	"_REENT_SIGNAL_SIZE 24\000"
 3830      4E545F53 
 3830      49474E41 
 3830      4C5F5349 
 3830      5A452032 
 3831              	.LASF298:
 3832 3e4b 5F5F4C4C 		.ascii	"__LLACCUM_FBIT__ 31\000"
 3832      41434355 
 3832      4D5F4642 
 3832      49545F5F 
 3832      20333100 
 3833              	.LASF217:
 3834 3e5f 5F5F4445 		.ascii	"__DEC64_MIN__ 1E-383DD\000"
 3834      4336345F 
 3834      4D494E5F 
 3834      5F203145 
 3834      2D333833 
 3835              	.LASF361:
 3836 3e76 5F5F5052 		.ascii	"__PRAGMA_REDEFINE_EXTNAME 1\000"
 3836      41474D41 
 3836      5F524544 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 107


 3836      4546494E 
 3836      455F4558 
 3837              	.LASF81:
 3838 3e92 5F5F5349 		.ascii	"__SIG_ATOMIC_TYPE__ int\000"
 3838      475F4154 
 3838      4F4D4943 
 3838      5F545950 
 3838      455F5F20 
 3839              	.LASF528:
 3840 3eaa 5F524545 		.ascii	"_REENT_WCSRTOMBS_STATE(ptr) ((ptr)->_new._reent._wc"
 3840      4E545F57 
 3840      43535254 
 3840      4F4D4253 
 3840      5F535441 
 3841 3edd 7372746F 		.ascii	"srtombs_state)\000"
 3841      6D62735F 
 3841      73746174 
 3841      652900
 3842              	.LASF260:
 3843 3eec 5F5F4C4C 		.ascii	"__LLFRACT_MIN__ (-0.5LLR-0.5LLR)\000"
 3843      46524143 
 3843      545F4D49 
 3843      4E5F5F20 
 3843      282D302E 
 3844              	.LASF33:
 3845 3f0d 5F414E53 		.ascii	"_ANSIDECL_H_ \000"
 3845      49444543 
 3845      4C5F485F 
 3845      2000
 3846              	.LASF267:
 3847 3f1b 5F5F554C 		.ascii	"__ULLFRACT_EPSILON__ 0x1P-64ULLR\000"
 3847      4C465241 
 3847      43545F45 
 3847      5053494C 
 3847      4F4E5F5F 
 3848              	.LASF204:
 3849 3f3c 5F5F4C44 		.ascii	"__LDBL_HAS_DENORM__ 1\000"
 3849      424C5F48 
 3849      41535F44 
 3849      454E4F52 
 3849      4D5F5F20 
 3850              	.LASF529:
 3851 3f52 5F524545 		.ascii	"_REENT_L64A_BUF(ptr) ((ptr)->_new._reent._l64a_buf)"
 3851      4E545F4C 
 3851      3634415F 
 3851      42554628 
 3851      70747229 
 3852 3f85 00       		.ascii	"\000"
 3853              	.LASF424:
 3854 3f86 5F5F7369 		.ascii	"__size_t__ \000"
 3854      7A655F74 
 3854      5F5F2000 
 3855              	.LASF307:
 3856 3f92 5F5F554C 		.ascii	"__ULLACCUM_EPSILON__ 0x1P-32ULLK\000"
 3856      4C414343 
 3856      554D5F45 
 3856      5053494C 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 108


 3856      4F4E5F5F 
 3857              	.LASF214:
 3858 3fb3 5F5F4445 		.ascii	"__DEC64_MANT_DIG__ 16\000"
 3858      4336345F 
 3858      4D414E54 
 3858      5F444947 
 3858      5F5F2031 
 3859              	.LASF46:
 3860 3fc9 5F5F5645 		.ascii	"__VERSION__ \"4.7.4 20130613 (release) [ARM/embedde"
 3860      5253494F 
 3860      4E5F5F20 
 3860      22342E37 
 3860      2E342032 
 3861 3ffb 642D345F 		.ascii	"d-4_7-branch revision 200083]\"\000"
 3861      372D6272 
 3861      616E6368 
 3861      20726576 
 3861      6973696F 
 3862              	.LASF283:
 3863 401a 5F5F5541 		.ascii	"__UACCUM_FBIT__ 16\000"
 3863      4343554D 
 3863      5F464249 
 3863      545F5F20 
 3863      313600
 3864              		.ident	"GCC: (GNU Tools for ARM Embedded Processors) 4.7.4 20130613 (release) [ARM/embedded-4_7-br
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s 			page 109


DEFINED SYMBOLS
                            *ABS*:0000000000000000 new.cpp
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:63     .text._Znwj:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:68     .text._Znwj:0000000000000000 _Znwj
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:89     .text._Znaj:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:94     .text._Znaj:0000000000000000 _Znaj
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:114    .text._ZdlPv:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:119    .text._ZdlPv:0000000000000000 _ZdlPv
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:139    .text._ZdaPv:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:144    .text._ZdaPv:0000000000000000 _ZdaPv
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:164    .text.__cxa_guard_acquire:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:169    .text.__cxa_guard_acquire:0000000000000000 __cxa_guard_acquire
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:185    .text.__cxa_guard_release:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:190    .text.__cxa_guard_release:0000000000000000 __cxa_guard_release
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:204    .text.__cxa_guard_abort:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccYK5LV7.s:209    .text.__cxa_guard_abort:0000000000000000 __cxa_guard_abort
                     .debug_frame:0000000000000010 $d
                           .group:0000000000000000 wm4.1.8ebf1c990d6a0cbee7a5e554ec03ca59
                           .group:0000000000000000 wm4.newlib.h.8.a9901dc52d1357e3e94003403d43f8b5
                           .group:0000000000000000 wm4.features.h.22.b72b3baab2bb2eab3661375590100b6b
                           .group:0000000000000000 wm4.config.h.193.5fb8ef056cdff92dec3dee9552839d8c
                           .group:0000000000000000 wm4._ansi.h.23.fff5fb436fa813a3c343750c1b5c0dee
                           .group:0000000000000000 wm4.stdlib.h.13.603ed7eb09a1561ab06840b7c0fcff58
                           .group:0000000000000000 wm4.stddef.h.187.40b3a084f9bc2c020a9e00b9eabe9c14
                           .group:0000000000000000 wm4._default_types.h.6.5e12cd604db8ce00b62bb2f02708eaf3
                           .group:0000000000000000 wm4.lock.h.2.9bc98482741e5e2a9450b12934a684ea
                           .group:0000000000000000 wm4.stddef.h.349.31f4c5baff3fa2689010b32028da9c47
                           .group:0000000000000000 wm4.reent.h.16.9e42f0e588b85e70b2bf6572af57ce64
                           .group:0000000000000000 wm4.alloca.h.8.dfc0c703c47ec3e69746825b17d9e66d
                           .group:0000000000000000 wm4.stdlib.h.50.f5923f1950ced340a337f4676566f65a

UNDEFINED SYMBOLS
malloc
free
