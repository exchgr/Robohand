// Sensor locations

// Sensor values
int flexValue;

void setup() {
    Serial.begin(9600);
}

void loop() {
    flexValue = analogRead(A0);
    Serial.println(flexValue);
}
