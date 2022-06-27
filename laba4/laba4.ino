#include <LCD5110_Basic.h>
LCD5110 screen(3, 4, 5, 7, 6);
extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
boolean BS;
boolean LB = HIGH;
byte CT = 0;
int x, y;
void setup() {
Serial.begin(9600);
digitalWrite(8, HIGH);
screen.InitLCD();
pinMode(2, INPUT_PULLUP);
}
void loop() {
x = analogRead(A0);
y = analogRead(A1);
BS = digitalRead(8);
if (BS == LOW && LB == HIGH) {
CT++;
if (CT >= 3) {
CT = 1;
}
LB = LOW;
} else {
LB = HIGH;
}
switch (CT) {
case 1:
screen.clrScr();
screen.setFont(SmallFont);
screen.print("Foto", CENTER, 8);
screen.setFont(MediumNumbers);
screen.print(String(x), CENTER, 30);
delay(500);
break;
case 2:
screen.clrScr();
screen.setFont(SmallFont);
screen.print("Pot", CENTER, 8);
screen.setFont(MediumNumbers);
screen.print(String(y), CENTER, 30);
delay(500);
break;
}
}
