int SWITCH = 2;
int LED = 5;
void setup() {

 pinMode(SWITCH,INPUT_PULLUP);
 pinMode(LED,OUTPUT);
 Serial.begin(9600);
}

void loop() {

  Serial.println(digitalRead(SWITCH));
  if(digitalRead(SWITCH))
  {
  digitalWrite(LED,LOW);
  }

  else
  {
  digitalWrite(LED,HIGH);
  }

  delay(10);
}
