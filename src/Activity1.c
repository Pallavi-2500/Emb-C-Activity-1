/**
 * @file Activity1.c
 * @author Pallavi Sharma (Pallavisharma0025@gmail.com)
 * @brief In this file, the acknowledgement of button press and seat occupied is implemented.
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"

/**
 * @brief A function to operate the button and heater sensor
 * 
 */
void Buttons_LED_Init()
{
LED_OUT; //set led as output port
BUTTON_IN; //clear bit 6 of DDR B
BUTTON_SET; //Set bit 6 of Port B
HEATER_IN; //clear bit 7 of DDR B
HEATER_SET;//Set bit 7 of DDR B

}