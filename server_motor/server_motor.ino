#include <Servo.h>

Servo myservo;

// void setup() {
//   // put your setup code here, to run once:
//   myservo.attach(3);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   myservo.write(0);
//   delay(1000);
//   myservo.write(90);
//   delay(1000);
//   myservo.write(180);
//   delay(1000);
// }

// void setup() {
//   // put your setup code here, to run once:
//   myservo.attach(3);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   for (int deg = 0; deg <= 180; deg++) {
//     myservo.write(deg);
//     delay(20);
//   }
//   for (int deg = 180; deg >= 0; deg--) {
//     myservo.write(deg);
//     delay(20);
//   }
// }

int pot = A0;
int value;
int angle;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(3);
  pinMode(pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(pot);
  angle = map(value, 0, 1023, 0, 180);
  myservo.write(angle);

}