const int buttonPin = 2; 
int led1=13;
int led2=12;
int time_out=1000;
int buttonState = 0;
void setup() {
  
  pinMode(buttonPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
  
}
void loop() 
{
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    l1on();
    l2off();
    } 
  
  else {
    l2on();
    l1off();
  } 
     
}

void l1on()
{
  digitalWrite(led1, HIGH);
}

void l1off()
{
    digitalWrite(led1, LOW);
}

void l2on()
{
  digitalWrite(led2, HIGH);
}

void l2off()
{
    digitalWrite(led2, LOW);
}

void timeout()
{
  delay(time_out);
}
