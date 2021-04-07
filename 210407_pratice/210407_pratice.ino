// 연습문제: 가변저항을 통해 LED 밝기 제어, 210407
int pot = A0;
int LED = 3; //반드시 아날로그 출력이 가능한 곳에 꽂아주셔야 밝기의 변화가 보입니다.
int brightness;

void setup() {
}


void loop() {

 brightness = map(analogRead(pot), 0, 1023, 0, 255);
 analogWrite(LED, brightness);
 delay(50); 

}   
