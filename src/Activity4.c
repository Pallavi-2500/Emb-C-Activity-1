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
#include "Activity4.h"

void UART_init(uint16_t ubrr_value)
{
    SetBaudLow;
    SetBaudHigh;
    SetCharBits;
    EnableReceiverAndTransmitter;
}


void WriteCharUSART(char data)
{
    while(WaitForTransmissionReady)
    {
        //Do nothing
    }
    ReadOrWriteData=data;
}