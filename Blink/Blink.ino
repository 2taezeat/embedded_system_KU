// 210325_embedded_hw1
int LED_YELLOW = 7;
int LED_RED = 6;
int LED_GREEN = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 int ran = random(3);
 if (ran == 0)
 {
 digitalWrite(LED_GREEN, HIGH);
 delay(300);
 digitalWrite(LED_GREEN, LOW);
 delay(300);
 }
delay(300);

 if (ran == 1)
 {
digitalWrite(LED_RED, HIGH);
delay(300);
digitalWrite(LED_RED, LOW);
delay(300);  
 }
delay(300);

 if (ran == 2)
 {
digitalWrite(LED_YELLOW, HIGH);
delay(300);
digitalWrite(LED_YELLOW, LOW);
delay(300);
 }
delay(300);                    
}
