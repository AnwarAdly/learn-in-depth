#include "stdint.h"

extern void main();
extern stack_top;
void Reset_handler();
void Default_handler(){
	Reset_handler();
}
void NMI_handler() __attribute__((weak , alias("Default_handler")));;
void HF_handler()  __attribute__((weak , alias("Default_handler")));;
void MMF_handler() __attribute__((weak , alias("Default_handler")));;
void BF_handler()  __attribute__((weak , alias("Default_handler")));;
void UF_handler()  __attribute__((weak , alias("Default_handler")));;
uint32_t vectors[] __attribute__((section(".vectors"))) ={
(uint32_t) &stack_top    ,
(uint32_t) &Reset_handler,
(uint32_t) &NMI_handler  ,
(uint32_t) &HF_handler   ,
(uint32_t) &MMF_handler  ,
(uint32_t) &BF_handler   ,
(uint32_t) &UF_handler   
};
extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;

void Reset_handler(void){
	int i;
	// Copy data section from flash to ram
	unsigned int Data_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data ;
	unsigned char* P_src   = (unsigned char*)&_E_text ;
	unsigned char* P_dst   = (unsigned char*)&_S_data ;
	for(i=0;i<Data_size;i++)
		*((unsigned char*)P_dst++)=*((unsigned char*)P_src++) ;
	// Reserve bss section in ram and initalize it by 0
	unsigned int bss_size  = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss ;
	P_dst 				   = (unsigned char*)&_S_bss ;
	for(i=0;i<bss_size;i++)
		*((unsigned char*)P_dst++)=0 ;
	// Call main function
	main();
}