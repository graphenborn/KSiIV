//Преднастройки
void setup() {
Serial.begin(9600);
}
//Основной цикл
void loop() {
//Введение переменных
//Вывод значений фоторезистора
Serial.print(analogRead(A0));
//Отступ
Serial.print('\t');
//Вывод значений потенциометра
Serial.println(analogRead(A1));
//Задержка
delay(100);
}
