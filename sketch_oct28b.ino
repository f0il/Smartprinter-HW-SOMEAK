#include <SoftwareSerial.h>
String income="";
SoftwareSerial Thermal(5, 6);
void setup() {
  Serial.begin(9600); 
  Thermal.begin(19200); 
}
 
void loop() {
   print_pi();
}

 
void print_pi(){
  while(Serial.available()){    
    income += (char)Serial.read();  
  }
   
  if(income != 0){ 
    Thermal.print(income);
    income = ""; 
  }
  delay(10);
 }

void print_serial(){
  while(Serial.available()){    
    income += (char)Serial.read();  
  }
   
  if(income != 0){ 
    Serial.print(income);
    income = ""; 
  }
  delay(10);
 }


