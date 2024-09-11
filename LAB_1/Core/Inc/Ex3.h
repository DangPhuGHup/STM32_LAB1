/*
 * EX3.H
 *
 *  Created on: Sep 11, 2024
 *      Author: Admin
 */

#ifndef INC_EX3_H_
#define INC_EX3_H_
#include "main.h"
void LED_Control(GPIO_TypeDef* GPIOx, uint16_t pin_green, uint16_t pin_yellow,
		uint16_t pin_red, uint8_t* state, uint32_t* timer);
static uint8_t state1 = 0; // Trạng thái của pha 1
static uint8_t state2 = 2; // Trạng thái của pha 2
static uint32_t timer1 = 0; // Bộ đếm thời gian cho pha 1
static uint32_t timer2 = 0; // Bộ đếm thời gian cho pha 2

#endif /* INC_EX3_H_ */
