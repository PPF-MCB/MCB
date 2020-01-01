/*
 * Sample program for push button.
 * When the button is pressed, we will recive on the Serial Monitor a message that tells us that the button was pressed.
 */

const int buttonPin = 2;     
int buttonState = 0;         

void setup() {

  pinMode(buttonPin, INPUT);
  
}

void loop() {
 
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
  
    Serial.println("Button is pressed!")
  
  } else {
  }
}
