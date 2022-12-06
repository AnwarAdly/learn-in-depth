#ifndef _APP_H_
#define _APP_H_

#include "stdint.h"
typedef volatile unsigned int vuint_t;
#define RCC_BASE     0x40021000
#define GPIO_BASE    0x40010800
#define RCC_APB2ENR  *(vuint_t*)(RCC_BASE+0x18)
#define GPIO_CRH     *(vuint_t*)(GPIO_BASE+0x04)
#define GPIO_ODR     *(vuint_t*)(GPIO_BASE+0x0C)
#define RCC_IOPAEN   (1<<2)
#define GPIOA13      (1<<13)

#endif