/*
 * Ex4.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Admin
 */
#include "Ex4.h"
extern int dem;
void EX4_RUN()
{
	if (dem >= 10)
	{
		dem = 0;
	}
	switch(dem)
		  {
		      case 0:
		    	          HAL_GPIO_WritePin(GPIOB, ChanB_Pin, GPIO_PIN_RESET);
		    	          HAL_GPIO_WritePin(GPIOB, ChanC_Pin, GPIO_PIN_RESET);
		    	          HAL_GPIO_WritePin(GPIOB, ChanA_Pin, GPIO_PIN_RESET);
		    	          HAL_GPIO_WritePin(GPIOB, ChanD_Pin, GPIO_PIN_RESET);
		    	          HAL_GPIO_WritePin(GPIOB, ChanE_Pin, GPIO_PIN_RESET);
		    	          HAL_GPIO_WritePin(GPIOB, ChanF_Pin, GPIO_PIN_RESET);
		    	          HAL_GPIO_WritePin(GPIOB, ChanG_Pin, GPIO_PIN_SET);
		                  break;
		      case 1:
		                  HAL_GPIO_WritePin(GPIOB, ChanB_Pin, GPIO_PIN_RESET);
		                  HAL_GPIO_WritePin(GPIOB, ChanC_Pin, GPIO_PIN_RESET);
		                  HAL_GPIO_WritePin(GPIOB, ChanA_Pin, GPIO_PIN_SET);
		                  HAL_GPIO_WritePin(GPIOB, ChanD_Pin, GPIO_PIN_SET);
		                  HAL_GPIO_WritePin(GPIOB, ChanE_Pin, GPIO_PIN_SET);
		                  HAL_GPIO_WritePin(GPIOB, ChanF_Pin, GPIO_PIN_SET);
		                  HAL_GPIO_WritePin(GPIOB, ChanG_Pin, GPIO_PIN_SET);
		                  break;
		      case 2:
		      	          HAL_GPIO_WritePin(GPIOB, ChanB_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanC_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanA_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanD_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanE_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanF_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanG_Pin, GPIO_PIN_RESET);
		      	          break;
		      case 3:
		      	          HAL_GPIO_WritePin(GPIOB, ChanB_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanC_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanA_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanD_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanE_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanF_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanG_Pin, GPIO_PIN_RESET);
		      	          break;
		      case 4:
		      	          HAL_GPIO_WritePin(GPIOB, ChanB_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanC_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanA_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanD_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanE_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanF_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanG_Pin, GPIO_PIN_RESET);
		      	          break;
		      case 5:
		      	          HAL_GPIO_WritePin(GPIOB, ChanB_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanC_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanA_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanD_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanE_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanF_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanG_Pin, GPIO_PIN_RESET);
		      	          break;
		      case 6:
		      	          HAL_GPIO_WritePin(GPIOB, ChanB_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanC_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanA_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanD_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanE_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanF_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanG_Pin, GPIO_PIN_RESET);
		      	          break;
		      case 7:
		      	          HAL_GPIO_WritePin(GPIOB, ChanB_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanC_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanA_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanD_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanE_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanF_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanG_Pin, GPIO_PIN_SET);
		      	          break;
		      case 8:
		      	          HAL_GPIO_WritePin(GPIOB, ChanB_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanC_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanA_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanD_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanE_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanF_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanG_Pin, GPIO_PIN_RESET);
		      	          break;
		      case 9:
		      	          HAL_GPIO_WritePin(GPIOB, ChanB_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanC_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanA_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanD_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanE_Pin, GPIO_PIN_SET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanF_Pin, GPIO_PIN_RESET);
		      	          HAL_GPIO_WritePin(GPIOB, ChanG_Pin, GPIO_PIN_RESET);
		      	          break;
		  }
	dem ++;

}

