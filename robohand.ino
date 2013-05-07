// Libraries
#include <Servo.h>

// Sensor locations

// The lowest consecutive pins of 3
int flex_pins[] = {A0, A1, A2};
#define SERVO_START 9 

// Sensor values
int flexValue[3];

// Program objects
Servo hand[3];
int position;

void setup() {
    Serial.begin(9600);
    
    for (int i = 0; i < 3; i++) {
        hand[i].attach(SERVO_START + i);
    }
}

void loop() {
    for (int i = 0; i < 3; i++) {
        flexValue[i] = analogRead(flex_pins[i]);
        hand[i].write(map(flexValue[i], 450, 830, 0, 179));

        Serial.print(i);
        Serial.print(":");
        Serial.print(flexValue[i]);
        Serial.print("\t");
    }
    Serial.println();
}
