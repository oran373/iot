  
const int analogPin = A0;  // ESP8266 Analog Pin ADC0 = A0

int sensorValue = 0;  // value read from the potentiometer

void setup() {
  // initialize serial communication at 115200
  Serial.begin(115200);
}

void loop() {
  // read the analog in value
  sensorValue = analogRead(analogPin);
    
  // print the readings in the Serial Monitor
  Serial.print("sensor = ");
  Serial.println(sensorValue);

  delay(1000);
}
