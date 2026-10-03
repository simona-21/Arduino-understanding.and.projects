#include "SevSeg.h"
SevSeg sevseg;

int buton = 13;
int count = 0;
int a = 3;
int b = 2;
int c = 8;
int d = 7;
int e = 6;
int g = 5;
int f = 11;
int dp=9;

void setup() {
  // //Defines arduino pin connections in order: A, B, C, D, E, F, G, DP
  // byte segmentPins[] = { 3, 2, 8, 7, 6, 5, 11, 9 };
  // bool resistorsOnSegments = true;
  // Display type
  //byte hardwareConfig = COMMON_CATHODE;
  //Initialize sevseg object
  // sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  // sevseg.setBrightness(90);

  pinMode(buton, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Display numbers one by one with 2 seconds delay
  Serial.println(digitalRead(buton));
  numarDis(count);

  if (digitalRead(buton) == 0) {
    count = count + 1;
  }

  if (count == 10) {
    count = 0;
  }

  delay(150);
}

void numarDis(int nr) {
#define h HIGH
#define l LOW

  switch (nr) {
    case 0:
      digitalWrite(a, h);
      digitalWrite(b, h);
      digitalWrite(c, h);
      digitalWrite(d, h);
      digitalWrite(e, h);
      digitalWrite(f, h);
      digitalWrite(g, l);
      digitalWrite(dp, h);
      break;

    case 1:
      digitalWrite(a, l);
      digitalWrite(b, h);
      digitalWrite(c, h);
      digitalWrite(d, l);
      digitalWrite(e, l);
      digitalWrite(f, l);
      digitalWrite(g, l);
      digitalWrite(dp, h);
      break;

    case 2:
      digitalWrite(a, h);
      digitalWrite(b, h);
      digitalWrite(c, l);
      digitalWrite(d, h);
      digitalWrite(e, h);
      digitalWrite(f, l);
      digitalWrite(g, h);
      digitalWrite(dp, h);
      break;

    case 3:
      digitalWrite(a, h);
      digitalWrite(b, h);
      digitalWrite(c, h);
      digitalWrite(d, h);
      digitalWrite(e, l);
      digitalWrite(f, l);
      digitalWrite(g, h);
      digitalWrite(dp, h);
      break;

    case 4:
      digitalWrite(a, l);
      digitalWrite(b, h);
      digitalWrite(c, h);
      digitalWrite(d, l);
      digitalWrite(e, l);
      digitalWrite(f, h);
      digitalWrite(g, h);
      digitalWrite(dp, h);
      break;

    case 5:
      digitalWrite(a, h);
      digitalWrite(b, l);
      digitalWrite(c, h);
      digitalWrite(d, h);
      digitalWrite(e, l);
      digitalWrite(f, h);
      digitalWrite(g, h);
      digitalWrite(dp, h);
      break;

    case 6:
      digitalWrite(a, h);
      digitalWrite(b, l);
      digitalWrite(c, h);
      digitalWrite(d, h);
      digitalWrite(e, h);
      digitalWrite(f, h);
      digitalWrite(g, h);
      digitalWrite(dp, h);
      break;

    case 7:
      digitalWrite(a, h);
      digitalWrite(b, h);
      digitalWrite(c, h);
      digitalWrite(d, l);
      digitalWrite(e, l);
      digitalWrite(f, l);
      digitalWrite(g, l);
      digitalWrite(dp, h);
      break;

    case 8:
      digitalWrite(a, h);
      digitalWrite(b, h);
      digitalWrite(c, h);
      digitalWrite(d, h);
      digitalWrite(e, h);
      digitalWrite(f, h);
      digitalWrite(g, h);
      digitalWrite(dp, h);
      break;

    case 9:
      digitalWrite(a, h);
      digitalWrite(b, h);
      digitalWrite(c, h);
      digitalWrite(d, h);
      digitalWrite(e, l);
      digitalWrite(f, h);
      digitalWrite(g, h);
      digitalWrite(dp, h);
      break;
  }
}