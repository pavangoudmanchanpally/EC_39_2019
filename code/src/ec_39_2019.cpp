#include<Arduino.h>
int X,Y;
int D;
void assign(int D)
{
        digitalWrite(8,D);
}
void setup() 
{
        pinMode(2,INPUT);
        pinMode(3,INPUT);
        pinMode(8,OUTPUT);


}

void loop() 
{
        X = digitalRead(2);
        Y = digitalRead(3);
        D = !(X&&Y) ;
assign(D);        

}
