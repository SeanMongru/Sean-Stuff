/* Lab 1 first file - ID number 96013952 */
#include <p18f452.h>
/* Set configuration bits for use with ICD2 */
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF
unsigned char counter;  //specify counter as unsigned char
void main (void)
{
    TRISB = 0;
    counter = 1;
    
    while(counter < 16){
        PORTB = counter;
        counter += 1;
    }
    //Hey guise its austin32
}
