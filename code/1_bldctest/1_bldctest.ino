#include <Servo.h>

Servo esc; 

void setup(){
esc.attach(8);
esc.writeMicroseconds(1000);
}

void loop(){
int val; //Creating a variable val
val= analogRead(A0);
val= map(val, 0, 1023,1000,2000);  //Calibration for every new BLDC
esc.writeMicroseconds(val);
}
