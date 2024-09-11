/*
 * Ex5.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Admin
 */
#include "Ex5.h"

extern int dem;

void LED_Control(GPIO_TypeDef* GPIOx, uint16_t pin_green, uint16_t pin_yellow, uint16_t pin_red, uint8_t* state, uint32_t* timer)
  {
      *timer += 1;

      switch(*state)
      {
          case 0: // Đèn xanh sáng 3 giây
              HAL_GPIO_WritePin(GPIOx, pin_green, GPIO_PIN_SET);
              HAL_GPIO_WritePin(GPIOx, pin_yellow | pin_red, GPIO_PIN_RESET);
              if (*timer >= 3)
              {
                  *timer = 0;
                  *state = 1;
              }
              break;

          case 1: // Đèn vàng sáng 2 giây
              HAL_GPIO_WritePin(GPIOx, pin_yellow, GPIO_PIN_SET);
              HAL_GPIO_WritePin(GPIOx, pin_green | pin_red, GPIO_PIN_RESET);
              if (*timer >= 2)
              {
                  *timer = 0;
                  *state = 2;
              }
              break;

          case 2: // Đèn đỏ sáng 5 giây
              HAL_GPIO_WritePin(GPIOx, pin_red, GPIO_PIN_SET);
              HAL_GPIO_WritePin(GPIOx, pin_green | pin_yellow, GPIO_PIN_RESET);
              if (*timer >= 5)
              {
                  *timer = 0;
                  *state = 0;
              }
              break;
      }
  }

void EX5_RUN(int dem)
{
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

}


