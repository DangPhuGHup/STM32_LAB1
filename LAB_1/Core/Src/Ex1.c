/*
 * Ex1.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Admin
 */
#include "Ex1.h"
extern int timer_ex1;
extern int trangthai_ex1;
void EX1_RUN()
{
	switch (trangthai_ex1){
	    case 0:
	    	if(timer_ex1 >= 2)
	    	{
	    		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	    		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	    		trangthai_ex1 = 1;
	    		timer_ex1 = 0;
	    	}
	    	break;
	    case 1:
	    	if(timer_ex1 >= 2)
	    	{
	    		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	    	    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	    		trangthai_ex1 = 0;
	    		timer_ex1 = 0;
	    	}
	    	break;
	}
	timer_ex1++;
}
