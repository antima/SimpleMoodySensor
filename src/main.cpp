#include <Arduino.h>
#include <MoodyNodeEsp.h>

#define PIR 2

MoodySensor<int> sensor("proximity");


int proximityFunction() {
    return digitalRead(PIR);
}

void setup() {
    Serial.begin(9600);
    pinMode(PIR, INPUT);
    sensor.setAcquireFunction(proximityFunction);
    sensor.begin();
}

void loop()
{
    sensor.loop();
}