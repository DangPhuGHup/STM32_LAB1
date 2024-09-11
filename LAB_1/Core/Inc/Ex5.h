/*
 * Ex5.h
 *
 *  Created on: Sep 11, 2024
 *      Author: Admin
 */

#ifndef INC_EX5_H_
#define INC_EX5_H_
#include "main.h"
static int dem = 0;

void LED_Control(GPIO_TypeDef* GPIOx, uint16_t pin_green, uint16_t pin_yellow,
		uint16_t pin_red, uint8_t* state, uint32_t* timer);
static uint8_t state1 = 0; // Trạng thái của pha 1
static uint8_t state2 = 2; // Trạng thái của pha 2
static uint32_t timer1 = 0; // Bộ đếm thời gian cho pha 1
static uint32_t timer2 = 0; // Bộ đếm thời gian cho pha 2
void EX5_RUN();
#endif /* INC_EX5_H_ */
