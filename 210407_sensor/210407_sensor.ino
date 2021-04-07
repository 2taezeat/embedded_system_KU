double duration,distance;
int trigPin = 5; 
int echoPin =A0;
int LED = 13;

void setup() {
 Serial.begin(9600); //시리얼 통신을 위해서 (* 나 시작한다!)
 pinMode(LED, OUTPUT);
 pinMode(trigPin,OUTPUT); //초음파 보냄 
 pinMode(echoPin,INPUT); //초음파 받음
}


void loop() {
 digitalWrite(trigPin,LOW); 
 delayMicroseconds(2);//2us 유지
 digitalWrite(trigPin,HIGH); // HIGH 되어서 쏨.
 delayMicroseconds(10); //10us 유지
 digitalWrite(trigPin,LOW);

 //Echo핀으로 돌아오는 펄스의 시간 측정
 duration = pulseIn(echoPin,HIGH); //us단위로 값을 리턴

 //음파가 반사된 시간을 거리로 환산
 //음파의 속도는 340m/s 이므로 1cm를 이동하는데 약 29us.
 //즉, 음파 이동거리 = 왕복시간 / 1cm 이동시간 / 2임. (편도이므로)

 distance = duration / 29 / 2; //센티미터로
 Serial.print(distance);
 Serial.println("cm");
 //delay(1000); //적당히 찍어주도록 

 if(distance<20)//20cm 이내일 때
  digitalWrite(LED,HIGH);
 else
 {
 // delay(5000);
  digitalWrite(LED,LOW);
 //
 }  
 delay(10);//변화를 관찰하기 위해
}
