/**
 * @file act1.c
 * @author Yerra Sri Harsha Vardhan (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "act1.h"

/**
 * @brief function for declaring peripherals led,button,heater.
 * 
 */
void peripheral_init(){
SET_LED_AS_OUTPUT;
 SET_BUTTON_AS_INPUT;
 SET_HEATER_AS_INPUT;
 PULL_UP_BUTTON;
 PULL_UP_HEATER ;


}

