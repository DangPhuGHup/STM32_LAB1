/*
 * EX3.C
 *
 *  Created on: Sep 11, 2024
 *      Author: Admin
 */
#include "Ex3.h"
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

