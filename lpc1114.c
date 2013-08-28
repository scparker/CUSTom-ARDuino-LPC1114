//===========================================================================
// LPC1114 startup
// Wouter van Ooijen - wouter@voti.nl
// license: zlib
//===========================================================================

int main( void );
extern "C" { void __startup( void ); }
void TIMER0_OVF_vect( void );
void UART_IRQHandler ( void );
extern int __stack_end;			

// nr 7 (offset 0x1C) is the vectors checksum
extern void (* const __vectors[ 40 ])(void) 
   __attribute__ ((section(".vectors"))) = {
      (void (*)(void)) & __stack_end,	
      __startup,
      0,          /* NMI Handler */
      0,          /* Hard Fault Handler */
      0,          /* Reserved */
      0,          /* Reserved */
      0,          /* Reserved */
      0,          /* Reserved */
      0,          /* Reserved */
      0,          /* Reserved */
      0,          /* Reserved */
      0,          /* SVCall Handler */
      0,          /* Reserved */
      0,          /* Reserved */
      0,          /* PendSV Handler */
      0,          /* SysTick Handler */
      0,          /* IRQ0 */
      0,          /* IRQ1 */
      0,          /* IRQ2 */
      0,          /* IRQ3 */
      0,          /* IRQ4 */
      0,          /* IRQ5 */
      0,          /* IRQ6 */
      0,          /* IRQ7 */
      0,          /* IRQ8 */
      0,          /* IRQ9 */
      0,          /* IRQ10 */
      0,          /* IRQ11 */
      0,          /* IRQ12 */
      0,          /* IRQ13 */
      0,          /* IRQ14 - SPI1    */
      0,          /* IRQ15 - I2C     */
      TIMER0_OVF_vect,          /* IRQ16 - CT16B0  */
      0,          /* IRQ17 - CT16B1  */
      0,          /* IRQ18 - CT32B0  */
      0,          /* IRQ19 - CT32B1  */
      0,          /* IRQ20 - SPI0    */
      UART_IRQHandler           /* IRQ21 - UART    */

};

void __startup(void){
   extern int __data_init_start;
   extern int __data_start;
   extern int __data_end;
   extern int __bss_start;
   extern int __bss_end;
   extern int __init_array_start;
   extern int __init_array_end;
   
	 int *s, *d, *e;

	 // clear .bss section 
	 d = & __bss_start;
	 e = & __bss_end;
	 while( d != e ){
	    *d++ = 0;
	 }
	 
	 // copy .data section from flash to ram
	 s = & __data_init_start;
	 d = & __data_start;
	 e = & __data_end;
	 while( d != e ){ 
	    *d++ = *s++;
	 } 
	 
	 // call the constructorts of global objects
	 s = & __init_array_start;
	 e = & __init_array_end;
	 while( s != e ){
	    (*((void(**)())s++))();
	 }
  
   // call main   
   (void) main(); 
   
   // when main returns: loop till hell freezes down
   while(1){}	
   
}

// called when a pure virtual method is called
extern "C" void __cxa_pure_virtual( void ){
   while(1){}	
}
