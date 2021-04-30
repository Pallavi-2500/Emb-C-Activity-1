/**
 * @file Activity2.h
 * @author Pallavi Sharma (Pallavisharma0025@gmail.com)
 * @brief This file is a header file for Activity2.c file
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY2_H_
#define _ACTIVITY2_H_


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