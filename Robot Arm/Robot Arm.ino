#include<Servo.h>

Servo base;
Servo horizontal;
Servo vertical;
Servo claw;

void setup() {
  // put your setup code here, to run once:
  base.attach(3);
  horizontal.attach(6);
  vertical.attach(5);
  claw.attach(9);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  vertical.write(90);
}
