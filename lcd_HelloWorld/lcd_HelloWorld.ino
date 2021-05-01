#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int SWITCH1 = 1;
int SWITCH2 = 2;
int SWITCH3 = 3;

void setup()
{
  lcd.init();
  lcd.backlight();
  pinMode(SWITCH1, INPUT_PULLUP);
  pinMode(SWITCH2, INPUT_PULLUP);
  pinMode(SWITCH3, INPUT_PULLUP);

}

void loop()
{  
   
  if (digitalRead(SWITCH1) == LOW){
  
      lcd.setCursor(0, 0);
      lcd.print("Call");
      delay(200); 
      lcd.setCursor(0, 1);
      lcd.print("010-1234-5678!");
      delay(200); 
    }
    
    else if (digitalRead(SWITCH2) == LOW){
      lcd.setCursor(0, 0);
      lcd.print("Emergency!");
      delay(200); 
      lcd.setCursor(0, 1);
      lcd.print("Call 119 !");
      delay(200); 
    }
  
    else if (digitalRead(SWITCH3) == LOW){
      lcd.setCursor(0, 0);
      lcd.print("I'm Speechless disorder, Help me!");
      delay(200); 
      lcd.setCursor(0, 1);
      lcd.print("Help me!");
      delay(200); 
    }

    lcd.clear(); 
  
}
