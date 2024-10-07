#include "DigiKeyboard.h"

void setup() {
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
}

void loop() {


  if(digitalRead(0)==HIGH){
   
    DigiKeyboard.print("Mock_Password_No_1");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    
  }

   if(digitalRead(1)==HIGH){
   
    DigiKeyboard.print("Mock_Password_No_1");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    
  }

   if(digitalRead(2)==HIGH){
   
    DigiKeyboard.print("Mock_Password_No_1");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    
  }
  

DigiKeyboard.delay(100);

}
