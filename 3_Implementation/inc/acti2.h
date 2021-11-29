#ifndef _ACT2_H_
#define _ACT2_H_
/**
 * @file act2.h
 * @author Yerra sri Harsha Vardhan(you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <avr/io.h>
/**
 * @brief A function to initialise the analog to digital converter
 * 
 */
void Init_ADC();

/**
 * @brief A function to receive temperature sensor inputs from analog pin and output it to a register ADC which has 2 8 bit registers ADCL and ADCH.
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t ch);




#endif
