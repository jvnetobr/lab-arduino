/***********************************************************
Description: Lit LED, let LED blinks.
Website: blog.vieira.net.br
E-mail: contato@vieira.net.br
Authors: Jose Neto, Jose Filippo e Maria Agnes
Date: 2024/05/25
***********************************************************/
int ledPin=8; //definition digital 8 pins as pin to control the LED
void setup()
{
    pinMode(ledPin,OUTPUT);    //Set the digital 8 port mode, OUTPUT: Output mode
}
void loop()
{  
    digitalWrite(ledPin,HIGH); //HIGH is set to about 5V PIN8
    delay(100);               //Set the delay time, 1000 = 1S
    digitalWrite(ledPin,LOW);  //LOW is set to about 5V PIN8
    delay(1000);               //Set the delay time, 1000 = 1S
} 