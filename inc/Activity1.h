/**
 * @file Activity1.h
 * @author Pallavi Sharma (Pallavisharma0025@gmail.com)
 * @brief This file contains the headers for Activity1.c file
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY1_H_
#define _ACTIVITY1_H_

#include <avr/io.h>

/**
 * @brief A macro to set 0th bit of PORTB as output
 * 
 */
#define LED_OUT DDRB|=(1<<PB0)

/**
 * @brief A macro to set 6th bit of PORTB as input
 * 
 */
#define BUTTON_IN DDRB&=~(1<<PB6)

/**
 * @brief A macro to set 7th bit of PORTB as input
 * 
 */
#define HEATER_IN DDRB&=~(1<<PB7)

/**
 * @brief A macro to set 6th bit of PORTB
 * 
 */
#define BUTTON_SET PORTB|=(1<<PB6)

/**
 * @brief A macro to set 7th bit of PORTB
 * 
 */
#define HEATER_SET PORTB|=(1<<PB7)

/**
 * @brief A macro to check if the button is pressed or not. If pressed, the input to 7th bit of PINB is 0.
 * 
 */
#define CHECK_BUTTON_ON !(PINB&(1<<PB7))

/**
 * @brief A macro to check if the heater is pressed or not. If pressed, the input to 6th bit of PINB is 0.
 * 
 */
#define CHECK_HEATER_ON !(PINB&(1<<PB6))

/**
 * @brief A macro to turn on the LED by setting 0th bit of PORTB
 * 
 */
#define LED_SET PORTB|=(1<<PB0)

/**
 * @brief A macro to turn off the LED by clearing the 0th bit of PORTB
 * 
 */
#define LED_CLR PORTB&=~(1<<PB0)
/**
 * @brief A function to operate the button and heater sensor
 * 
 */
void Buttons_LED_Init();

#endif 