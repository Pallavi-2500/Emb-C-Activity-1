/*
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    port1();

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
