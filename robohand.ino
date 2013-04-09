// Sensor locations
#define FLEX_PIN A0

// Sensor values
int flexValue;

void setup() {
    Serial.begin(9600);
}

void loop() {
    flexValue = analogRead(FLEX_PIN);
    Serial.println(flexValue);
}
