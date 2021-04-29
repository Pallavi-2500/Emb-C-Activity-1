/**
 * @file Activity3.c
 * @author Pallavi Sharma (Pallavisharma0025@gmail.com) 
 * @brief In this file, the Pulse width modulation for heater system is implemented
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
#include "activity3.h"
#include "activity4.h"
#include <string.h>

void timer()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB |=(1<<PB1);
}

void Act_3(uint16_t x)
{
    timer();
    if( x>=0 && x<=200){
            OCR1A = PWM_AT_20_PERCENT;
            _delay_ms(200);
        }
        else if(x>=210 && x<=500){
             OCR1A = PWM_AT_40_PERCENT;
            _delay_ms(200);
        }
        else if(x>=510 && x<=700){
             OCR1A = PWM_AT_70_PERCENT;
            _delay_ms(200);
        }
        else if(x>=710 && x<=1024){
             OCR1A = PWM_AT_95_PERCENT;
            _delay_ms(200);
        }
        else{
            OCR1A=0;
            _delay_ms(200);
        }

}