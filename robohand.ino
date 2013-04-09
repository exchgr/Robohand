// Libraries
#include <Servo.h>

// Sensor locations
#define FLEX_PIN A0
#define SERVO_PIN 9

// Sensor values
int flexValue;

// Program objects
Servo finger;
int position;

void setup() {
    Serial.begin(9600);
    finger.attach(SERVO_PIN);
}

void loop() {
    flexValue = analogRead(FLEX_PIN);
    position = map(flexValue, 450, 830, 0, 179);
    finger.write(position);

    Serial.println(flexValue);

    //200
    //560
}
