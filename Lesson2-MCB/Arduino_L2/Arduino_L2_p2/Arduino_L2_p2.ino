int led1=13;
int led2=12;
int time_out=1000;
void setup() {
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
  
}
void loop() 
{
  l1on();
  timeout();
  l1off();                  
  timeout();
  l2on();
  timeout();
  l2off();
  timeout();                   
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
