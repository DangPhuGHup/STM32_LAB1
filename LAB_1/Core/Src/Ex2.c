/*
 * Ex2.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Admin
 */

#include "Ex2.h"

void EX2_RUN()
{
	    static uint32_t timer = 0;
		static uint8_t state = 0;
		timer += 1;
		switch(state)
		{
		    case 0:
		    	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
		    	HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin | LED_RED_Pin, GPIO_PIN_SET);
		    	if (timer >= 3)
		    	{
		    	    timer = 0;
		    	    state = 1;
	            }
		    	    break;
		    case 1:
		    	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
		    	 HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin | LED_RED_Pin, GPIO_PIN_SET);
		    	 if (timer >= 2)
		    	 {
		    	     timer = 0;
		    	     state = 2;
		         }
		    	     break;
		    case 2:
		    	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		    	 HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin | LED_YELLOW_Pin, GPIO_PIN_SET);
		    	 if (timer >= 5)
		    	 {
		    	     timer = 0;
		    	     state = 0;
		    	 }
		    	     break;
		}

}