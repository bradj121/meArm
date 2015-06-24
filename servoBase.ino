
#include <Servo.h> 

int potPin1 = 0;  
int potPin2 = 1;
int potPin3 = 2;
int servoPin1 = 9;
int servoPin2 = 10;
int servoPin3 = 11;
Servo servo1;
Servo servo2;
Servo servo3;
 
void setup() 
{ 
  Serial.begin(9600);
  servo1.attach(servoPin1);  
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
} 
 
void loop() 
{ 
  // BASE
  int reading1 = analogRead(potPin1);     // 0 to 1023
  int angle1 = reading1 / 7;              // 0 to 180-ish
  servo1.write(angle1);  
  // Serial.println(angle1);
  
  // RT SIDE
  int reading2 = analogRead(potPin2);     // 0 to 1023
  int angle2 = reading2 / 7;              // 0 to 180-ish
  servo2.write(angle2);
  // Serial.println(angle2);
  
  // LT SIDE
  int reading3 = analogRead(potPin3);     // 0 to 1023
  int angle3 = reading3 / 6;              // 0 to 180-ish
  servo3.write(angle3);  
  Serial.println(angle3);
} 


