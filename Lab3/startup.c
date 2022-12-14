#include <stdint.h>
extern void main(void) ;
extern unsigned int _E_text ;
extern unsigned int _S_DATA ;
extern unsigned int _E_DATA ;
extern unsigned int _S_bss  ;
extern unsigned int _E_bss ;
void Reset_handler();
void Default_handler(){
	Reset_handler();
}
void NMI_handler   () __attribute__((weak,alias("Default_handler")));;
void Hfault_handler() __attribute__((weak,alias("Default_handler")));;
//reserve stack size by an array
static unsigned int Stack_top [256]; // 256x4=1024B
//Put vector table in .vector section then points the sp to top of stack
void (*const g_p_fn_Vectors[])() __attribute__((section(".vectors"))) = {
	(void (*)())((unsigned int)Stack_top + sizeof(Stack_top)),
	&Reset_handler ,
	&NMI_handler ,
	&Hfault_handler
};


void Reset_handler(){
	unsigned int i;
	// copy .data from flash to ram
	unsigned int Data_size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA ;
	unsigned char* P_src   = (unsigned char*)&_E_text ;
	unsigned char* P_dst   = (unsigned char*)&_S_DATA ;
	for(i=0 ; i<Data_size ; i++)
		*((unsigned char*)P_dst++) = *((unsigned char*)P_src++);
	//init .bss in ram
	unsigned int bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss ;
	P_dst = (unsigned char*)&_S_bss ;
	for(i=0 ; i<bss_size ; i++)
		*((unsigned char*)P_dst++) = (unsigned char)0;
	//jump main()
	main();
}
