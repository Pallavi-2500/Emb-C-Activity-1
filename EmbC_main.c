/**
 * @file EmbC_main.c
 * @author Pallavi Sharma (Pallavisharma0025@gmail.com)
 * @brief This is the main file which controls the car seat temperature 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>

#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

/**
 * @brief Main function
 * 
 * @return int 
 */
int main(void)
{
    Buttons_LED_Init(); //Initialise the button input registers
    Init_ADC(); //Initialise the ADC
    void Act_3(uint16_t x); //Initialise the registers for TIMER1 as fast PWM
    UART_init(103); //Initialise UART registers
    uint16_t x;

    /**
     * @brief Infinite loop to run the microcontroller
     * 
     */
    while(1)
    {
       if(CHECK_BUTTON_ON) //Checking if the input bit to 7th bit of pinB is made 0 from 1 by pressing led
        {
            if(CHECK_HEATER_ON) //Checking if the input bit to 6th bit of pinB is made 0 from 1 by pressing led
            {
                _delay_ms(20);
                LED_SET; //make 0th bit of port B as 1, makes led glow
                x = Read_ADC(0);
                Act_3(x);
                _delay_ms(20);
                
            }
            else
            {
                _delay_ms(20);
                OCR1A = 0; //make PWM output 0 if switch is off
                LED_CLR; // make led off
            }
        }
        else
        {
                
                LED_CLR; //make led off
                OCR1A = 0; //make PWM output 0 if both switches are off
                _delay_ms(20);
        }
    }

 return 0;   
}