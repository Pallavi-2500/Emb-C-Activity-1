/*
 */

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000UL

int main(void)
{
    // Insert code

     while(1)
    {
        if(!(PIND&(1<<PD0))){
            if(!(PIND&(1<<PD1))){
                PORTB|=(1<<PB0);
                _delay_ms(2000);
            }
            else{
                PORTB&=!(1<<PB0);
                _delay_ms(2000);
            }
        }
        else{
            PORTB&=~(1<<PB0);
            _delay_ms(2000);
        }


}
 return 0;
}
