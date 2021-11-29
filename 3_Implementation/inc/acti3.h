#ifndef _ACT3_H_
#define _ACT3_H_
/**
 * @file act3.h
 * @author Tejaswi devina (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief A macro to set PB1 bit as a fast PWM output port with timer1, A channel
 * 
 */
#define SET_TIMER1A_FAST_PWM TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11)

/**
 * @brief A macro to prescale timer1 for 64 and wave generation mode for 10bit digital input
 * 
 */
#define PRESCALE_TIMER_64 TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10)


#define SET_PWM_AS_OUTPUT DDRB|=(1<<PB1)

/**
 * @brief A function to setup timer1 with channel A for pulse width modulation with wave generation mode of 10 bits fast PWM and prescaling of 64.
 * 
 */
void TimerWaveGenMode(void);

/**
 * @brief A function which receives 10 bit of ADC input from temperature sensor and outputs as a fast PWM waveform.
 * 
 * @param ADC_val 
 */
int outputbyPWM(uint16_t ADC_val);

#endif
