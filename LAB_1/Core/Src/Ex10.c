/*
 * Ex6.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Admin
 */
#include "Ex10.h"
extern int dem;
extern int second;
extern int minute;
extern int hour;
void EX7_RUN(int dem)
{
	switch(dem)
	{
	    case 0:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, SET);
	    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 1:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 2:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 3:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 4:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, SET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 5:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, SET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 6:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, SET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 7:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, SET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 8:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, SET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 9:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, SET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 10:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, SET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	    	break;
	    case 11:
	    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, SET);
	    	break;
	    default:
		    break;
	}
}
void clearAllClock()
{
	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
    HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
}
void setNumberOnClock(int num)
{
	switch(num)
		{
		    case 0:
		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, SET);
//		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
//		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
//		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
//		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
//		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
//		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
//		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
//		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
//		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
//		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
//		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 1:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
//		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 2:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
//		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 3:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);
//		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 4:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, SET);
//		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 5:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, SET);
//		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 6:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, SET);
//		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 7:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, SET);
//		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 8:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, SET);
//		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 9:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, SET);
//		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 10:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, SET);
//		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		    	break;
		    case 11:
//		    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
//		    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
		    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, SET);
		    	break;
		    default:
			    break;
		}

}
void clearNumberOnClock(int num)
{
	switch(num)
			{
			    case 0:
			    	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);

			    	break;
			    case 1:

			    		    	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);

			    	break;
			    case 2:

			    		    	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);

			    	break;
			    case 3:

			    		    	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);

			    	break;
			    case 4:

			    		    	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);

			    	break;
			    case 5:

			    		    	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);

			    	break;
			    case 6:

			    		    	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);

			    	break;
			    case 7:

			    		    	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);

			    	break;
			    case 8:

			    		    	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);

			    	break;
			    case 9:

			    		    	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);

			    	break;
			    case 10:

			    		    	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);

			    	break;
			    case 11:

			    		    	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
			    	break;
			    default:
				    break;
			}
}
void dongho(int num1, int num2, int num3)
{
	setNumberOnClock(num1);
	setNumberOnClock(num2);
	setNumberOnClock(num3);
}
void xoadongho(int num1, int num2, int num3)
{
	clearNumberOnClock(num1);
	clearNumberOnClock(num2);
	clearNumberOnClock(num3);
}
void EX10_RUN()
{
	dongho(second, minute, hour);
	if (dem >= 5)
	{
		xoadongho(second, minute, hour);
		second++;
		dem = 0;
		if (second >= 12)
		{
			minute++;
			second = 0;
			if (minute >= 12)
				{
					hour++;
					minute = 0;
					if (hour >= 12)
					{
						hour = 0;
					}
				}
		}

		dongho(second, minute, hour);
	}
	dem++;

}
