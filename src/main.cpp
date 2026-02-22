#include <iostream>
int ldrPin=A0;
void setup() {
    serial.begin(9600);
    pinMode(ldrPin,INPUT);

}

void loop() {
    int ldrValue=analogRead(ldrPin);
    int lightPercent=map(ldrValue,0,1023,0,100);
    serial.println(ldrValue);
    delay(1000);
}

