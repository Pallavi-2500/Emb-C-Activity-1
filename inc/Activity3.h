/**
 * @file Activity3.h
 * @author Pallavi Sharma (Pallavisharma0025@gmail.com)
 * @brief This file is a header file for Activity3.h file
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY3_H_
#define _ACTIVITY3_H_
#include <avr/io.h>
#include <util/delay.h>

/**
 * Macro Definitions
 */
#define PWM_AT_20_PERCENT (205) /**< Output PWM for 20% duty cycle */
#define PWM_AT_40_PERCENT (410) /**< Output PWM for 40% duty cycle */
#define PWM_AT_70_PERCENT (717) /**< Output PWM for 70% duty cycle */
#define PWM_AT_95_PERCENT (973) /**< Output PWM for 95% duty cycle */

/**
 * @brief Initialize Timer1 registers 
 * 
 */
void timer();

/**
 * @brief Produce duty cycle in PWM according to i/p ADC value
 * 
 * @param[in] pwm The ADC value from activity2
 */
void Act_3(uint16_t x);

#endif 