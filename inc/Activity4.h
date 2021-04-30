/**
 * @file Activity4.h
 * @author Pallavi Sharma (Pallavisharma0025@gmail.com)
 * @brief This file is a header file for Activity4.c file
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY4_H_
#define _ACTIVITY4_H_


#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief Macro which sets Baud low
 * 
 */
#define BAUD_LOW (UBRR0L=ubrr_value)

/**
 * @brief Macro which sets Baud high
 * 
 */
#define BAUD_HIGH (UBRR0H=(ubrr_value>>8)&0x00ff)

/**
 * @brief Macro to set the char data
 * 
 */
#define SET_CHAR (UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00))

/**
 * @brief Macro to enable Transmitter and Receiver
 * 
 */
#define ENABLE_Rx_Tx (UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0))

/**
 * @brief Macro to Read/Write the data
 * 
 */
#define DATA_ReadWrite (UDR0)

/**
 * @brief Macro to wait until Transmitter is ready
 * 
 */
#define WAIT_Tx (!(UCSR0A&(1<<UDRE0)))

/**
 * @brief Function to initialize UART
 * 
 * @param ubrr_value Baud rate
 */
void UART_init(uint16_t ubrr_value);


/**
 * @brief Funtion which writes data through serial transmission
 * 
 * @param val Input data 
 */
void UART_write(char val);

#endif //activity4.h