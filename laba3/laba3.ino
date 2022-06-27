#include<Servo.h>
Servo serv;
void setup(){
  serv.attach(9);
  serial.begin(9600);
}
void loop(){
  serv.write(analogRead(A0));
  delay(200);
}
