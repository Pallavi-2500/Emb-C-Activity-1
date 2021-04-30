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
#include "Activity3.h"
#include "Activity4.h"
#include <string.h>

void timer()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10); //Set Timer 1 for PWM
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);//Prescale timer1 for 64 and wave generation mode for 10bit digital input
    DDRB |=(1<<PB1);
}

char Act_3(uint16_t x)
{
    char disp_temp;
    if( x>=0 && x<=200){
            OCR1A = PWM_AT_20_PERCENT;//PWM of Duty cycle 20%
            disp_temp=20;
            _delay_ms(200);
        }
        else if(x>=210 && x<=500){
             OCR1A = PWM_AT_40_PERCENT;//PWM of Duty cycle 40%
             disp_temp=25;
            _delay_ms(200);
        }
        else if(x>=510 && x<=700){
             OCR1A = PWM_AT_70_PERCENT;//PWM of Duty cycle 70%
             disp_temp=29;
            _delay_ms(200);
        }
        else if(x>=710 && x<=1024){
             OCR1A = PWM_AT_95_PERCENT;//PWM of Duty cycle 95%
             disp_temp=33;
            _delay_ms(200);
        }
        else{
            OCR1A=0;
            _delay_ms(200);
        }
        return disp_temp;
}