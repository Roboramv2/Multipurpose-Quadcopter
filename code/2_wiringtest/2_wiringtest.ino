#include <Servo.h>

Servo esc1;
Servo esc2;
Servo esc3;
Servo esc4; 
int val1;
int val2;

void setup(){
esc1.attach(10);
esc2.attach(11);
esc3.attach(12);
esc4.attach(13);
esc1.writeMicroseconds(1000);
esc2.writeMicroseconds(1000);
esc3.writeMicroseconds(1000);
esc4.writeMicroseconds(1000);
Serial.begin(9600);
}

void loop(){
int val; //Creating a variable val
val= analogRead(A0);
val1= map(val, 0, 1023,1000,2000);
val2= map(val, 0, 1023,1127,2127);
esc1.writeMicroseconds(val2);
esc2.writeMicroseconds(val2);
esc3.writeMicroseconds(val2);
esc4.writeMicroseconds(val1);
Serial.println(val);
}
