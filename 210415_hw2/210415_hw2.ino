double duration,distance;
int trigPin = 6;
int pot = A1;
int echoPin = A0;
int LED = 8;
int piezo = 3;
double max_distance ;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(piezo, OUTPUT);
}

void loop() {

  max_distance = map(analogRead(pot), 0, 1023, 2, 400);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration / 29 / 2;


  if(distance < max_distance ){
    digitalWrite(LED,HIGH);
    delay(1000);
    digitalWrite(LED,LOW);
    delay(1000);
    digitalWrite(piezo,HIGH);
    delay(1000);
    digitalWrite(piezo,LOW);
  }
}
