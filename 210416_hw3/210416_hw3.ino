#define C 262 // 도 
#define D 294 // 레 
#define E 330 // 미 
#define F 349 // 파 
#define G 392 // 솔 
#define A 440 // 라 
#define B 494 // 시 

int piezoPin = 4;
int tempo = 200; // duration 옵션 값 설정 
int SWITCH = 2; 
int notes_1[11] = { E,D,C,E,G,  E,D,C,E,D }; // 사랑을 했다, 우리가 만나 (아이콘-사랑을했다.)
int notes_2[19] = { D,E,F,E,F,E,F,E,F, D,E,F,E,F,F,F,C,C  }; // (지코-아무노래)

int led_1[11] = {9,8,7,9,11, 9,8,7,9,8};
int led_2[19] = {8,9,10,9,10,9,10,9,10, 8,9,10,9,10,10,10,7,7};

int led_C = 7;
int led_D = 8;
int led_E = 9;
int led_F = 10;
int led_G = 11;
int led_A = 12;
int led_B = 13;

void setup() { 
 pinMode (piezoPin, OUTPUT); 
 pinMode(SWITCH, INPUT_PULLUP);

 pinMode(led_C, OUTPUT);
 pinMode(led_D, OUTPUT);
 pinMode(led_E, OUTPUT);
 pinMode(led_F, OUTPUT);
 pinMode(led_G, OUTPUT);
 pinMode(led_A, OUTPUT);
 pinMode(led_B, OUTPUT);
} 

void loop() { 
  
  if (digitalRead(SWITCH) == LOW) // 스위치를 누를때 마다, 그리고 노래가 끝나면 다시 스위치를 누를 때 까지 재생되지 않아야 함.
  {
    int ran = random(2); // 스위치를 누를 때마다, 가지고 있는 2곡 중 1곡만 랜덤하게 재생
    delay(400); 
    if (ran == 0){
        for (int i = 0; i < 5; i++) { 
          tone (piezoPin, notes_1[ i ], tempo); // 사랑을 했다.
          digitalWrite(led_1[i], HIGH);
          delay (400);
          digitalWrite(led_1[i], LOW); }
        delay(400); 
        for (int i = 5; i < 11; i++) { 
          tone (piezoPin, notes_1[ i ], tempo); // 우리가 만나.
          digitalWrite(led_1[i], HIGH);
          delay (400);
          digitalWrite(led_1[i], LOW); } 
    }
    else if (ran == 1){
        for (int i = 0; i < 9; i++) { 
          tone (piezoPin, notes_2[ i ], tempo); // 왜들그리다운돼있어?
          digitalWrite(led_2[i], HIGH);
          delay (400);
          digitalWrite(led_2[i], LOW); }
        delay(400); 
        for (int i = 9; i < 19; i++) { 
          tone (piezoPin, notes_2[ i ], tempo); //뭐가문제야 say something
          digitalWrite(led_2[i], HIGH);
          delay (400);
          digitalWrite(led_2[i], LOW); }
    }
  }
}