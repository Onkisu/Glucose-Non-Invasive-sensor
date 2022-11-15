#include <Wire.h>

#define touchpin 6



void setup() {
  
Serial.begin(9600);

pinMode(A0,INPUT);


}

void loop() {

  
      
      

  
      
  int val = analogRead(A0);
  float val1 = val+20.31/2.3+20+19.3;
//  float k1 = (((val*0.003226)-1.65)*922.23-107)*0.0522;
//  float kalibrasi = (k1 - 1022.1)/0.0967;
 Serial.print(val1);
 Serial.println(" mg/dL");
 delay(100);
  // put your main code here, to run repeatedly:

}
