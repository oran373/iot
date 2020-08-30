const int buttonPin = 4; // Set the pin connected with button
const int LedPin = 5;
int buttonState = 0; 
int old = 0;


void setup() {
  pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input
  pinMode(LedPin, OUTPUT);
  Serial.begin(115200); 
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState==1){
    if(old ==1){
      old = 0;
    }else{
      old = 1;
    }
      Light(old);
  }
  
 // Serial.println(buttonState); 
  delay(500);
}

void Light(int n){
    digitalWrite(LedPin, n);
}
