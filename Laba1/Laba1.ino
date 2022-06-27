}//Определение переменных и вычисление задержки
int arg = 200 + (14 * 10) + 19;
boolean BS;
boolean BL = HIGH;
byte CT = 0;
//Определение устройств
void setup() {
  pinMode(8, INPUT_PULLUP);
  digitalWrite(8, HIGH);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
//Основная программа
void loop() {
  BS = digitalRead(8);
  //При нажатии кнопки начать цикл
  //Каждое действие в цикле происходит спустя вычисленную задержку
  if (BS == LOW && LB == HIGH) {
    CT++;
    if (CT >= 6) {
      CT = 1;
    }
    switch (CT) {
      //Первая фаза
      case 1:
        digitalWrite(9, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
        delay(arg);
        break;
        //Вторая фаза
      case 2:
        digitalWrite(9, LOW);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
        delay(arg);
        break;
        //Третья фаза
      case 3:
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
        delay(arg);
        break;
        //Четвертая фаза
      case 4:
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        delay(arg);
        break;
        //Пятая фаза
      case 5:
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        delay(arg);
        break;
    }
    LB = LOW;
  } else {
    LB = HIGH;
  }
}
