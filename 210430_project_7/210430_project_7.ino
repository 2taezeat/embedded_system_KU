

int piezoPin = 4;
int tempo = 200; // duration 옵션 값 설정 
int SWITCH = 2; 
int notes_1[2] = { C,B }; // 사랑을 했다, 우리가 만나 (아이콘-사랑을했다.)


void setup() { 
 pinMode (piezoPin, OUTPUT); 
 pinMode(SWITCH, INPUT_PULLUP);

} 

void loop() { 
  int a = 0;
  
  if (digitalRead(SWITCH) == LOW) // 스위치를 누를때 마다, 그리고 노래가 끝나면 다시 스위치를 누를 때 까지 재생되지 않아야 함.
  {  
    a = digitalRead(SWITCH)
    while(a == LOW)
    {
      for (int i = 0; i < 2; i++) { 
        tone (piezoPin, notes_1[ i ], tempo); 
      }
      delay(600);
    }
   
  }
}
