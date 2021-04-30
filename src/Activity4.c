/**
 * @file Activity4.c
 * @author Pallavi Sharma (Pallavisharma0025@gmail.com)
 * @brief In this file, the serial communication using UART protocol is implemented
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
#include "Activity4.h"

void UART_init(uint16_t ubrr_value)
{
    BAUD_LOW; // Set Baud rate low
    BAUD_HIGH;// Set Baud rate high
    SET_CHAR; // Set data bits
    ENABLE_Rx_Tx; // Enable Transmitter and Receiver
}


void UART_write(char val)
{
    while(WAIT_Tx)
    {
        //Do nothing
    }
    DATA_ReadWrite=val;
}