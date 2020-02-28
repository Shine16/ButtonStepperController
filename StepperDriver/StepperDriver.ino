//#include <ESP8266WiFi.h>
 
 
int Step = 15;  
int Buttons  = 14;  
int i=0;
 
 
void setup() {
  Serial.begin(115200);
  delay(10);
 pinMode(Step, OUTPUT); //Step pin as output
 pinMode(Buttons,  INPUT);  
 
 digitalWrite(Step, LOW);  
 digitalWrite(Buttons, HIGH);  
 
 
}
 
void loop() {

  
  while (digitalRead(Buttons)== LOW )  { 
          digitalWrite(Step, HIGH);
          delayMicroseconds(500);
          //delay(1);
          digitalWrite(Step, LOW);
          delayMicroseconds(500);
         // delay(1);
         yield();
         
  }
  //delayMicroseconds(500);
 
  
 
}
