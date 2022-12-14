/* Unit2 Embedded C Lab2 Part(1) startup.s
   Author : Anwar Adly 
											*/

#include "app.h"
 
void main(){
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIO_CRH    &= 0xFF0FFFFF;
	GPIO_CRH    |= 0x00200000;
	while(1){
		int i;
		GPIO_ODR |=  GPIOA13;
		for(i=0 ; i<5000 ; i++);
		GPIO_ODR &=~ GPIOA13;
		for(i=0 ; i<5000 ; i++);
	}

}