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
    char Act_3(uint16_t x); //Initialise duty cycle in PWM according to i/p ADC value
    UART_init(103); //Initialise UART registers

    uint16_t x;
    char val;

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
                val= Act_3(x);
                UART_write(val);
                _delay_ms(200);
                
            }
            else
            {
                _delay_ms(20);
                LED_CLR; // make led off
                OCR1A = 0; //make PWM output 0 if switch is off
                val=0;
                UART_write(val);
            }
        }
        else
        {
                
                LED_CLR; //make led off
                OCR1A = 0; //make PWM output 0 if both switches are off
                val=0;
                UART_write(val);
                _delay_ms(20);
        }
    }

 return 0;   
}