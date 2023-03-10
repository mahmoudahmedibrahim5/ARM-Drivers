/*
 * GPIO_Registers.h
 *
 *  Created on: Feb 8, 2023
 *      Author: Mahmoud Ahmed Ibrahim
 */

#ifndef GPIO_GPIO_REGISTERS_H_
#define GPIO_GPIO_REGISTERS_H_

#include "../../Utilities/stm32f401xx.h"

typedef struct{
	volatile uint32_t MODE;		// GPIO port mode register
	volatile uint32_t TYPE;		// GPIO port output type register
	volatile uint32_t SPEED;	// GPIO port output speed register
	volatile uint32_t PUPDR;	// GPIO port pull-up/pull-down register
	volatile uint32_t IDR;		// GPIO port input data register
	volatile uint32_t ODR;		// GPIO port output data register
	volatile uint32_t BSRR;		// GPIO port bit set/reset register
	volatile uint32_t LCKR;		// GPIO port configuration lock register
	volatile uint32_t AFRL;		// GPIO alternate function low register
	volatile uint32_t AFRH;		// GPIO alternate function high register
}st_GPIO_RegDef_t;



#define pGPIOA		((st_GPIO_RegDef_t *)GPIOA_BASE_ADDR)
#define pGPIOB		((st_GPIO_RegDef_t *)GPIOB_BASE_ADDR)
#define pGPIOC		((st_GPIO_RegDef_t *)GPIOC_BASE_ADDR)
#define pGPIOD		((st_GPIO_RegDef_t *)GPIOD_BASE_ADDR)
#define pGPIOE		((st_GPIO_RegDef_t *)GPIOE_BASE_ADDR)
#define pGPIOH		((st_GPIO_RegDef_t *)GPIOH_BASE_ADDR)

#endif /* GPIO_GPIO_REGISTERS_H_ */
