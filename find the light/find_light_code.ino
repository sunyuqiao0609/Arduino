int sensorPin = A0; // select input for LDR
int sensorValue = 0; // variable to store the value coming from the sensor


void setup() {
  Serial.begin(9600); // set serial port for communication

}

void loop() {
  sesorValue = analogRead(sensorPin); // read value from sensor
  Serial.println(sensorValue); // prints the values coming from the sensor on the screen
  delay(100);
}

