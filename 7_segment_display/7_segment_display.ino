// #include "SevSeg.h"
// SevSeg sevseg;

// void setup() {
//   //Set to 1 for single digit display
//   byte numDigits = 1;

//   //defines common pins while using multi-digit display. Left empty as we have a single digit display
//   byte digitPins[] = {};

//   //Defines arduino pin connections in order: A, B, C, D, E, F, G, DP
//   byte segmentPins[] = { 3, 2, 8, 7, 6, 5, 13, 9 };
//   bool resistorsOnSegments = true;

//   // Display type
//   // Uncomment appropriate line
//  // byte hardwareConfig = COMMON_ANODE;
//   byte hardwareConfig = COMMON_CATHODE;

//   //Initialize sevseg object
//   sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);

//   sevseg.setBrightness(90);
// }

// void loop() {
//   //Display numbers one by one with 2 seconds delay
//     sevseg.setNumber(2);
//     sevseg.refreshDisplay();
//     delay(1000);
  
// }



int a = 3;
int b = 2;
int c = 8;
int d = 7;
int e = 6;
int g = 5;
int f = 11;
int dp=9;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(dp,OUTPUT);
}

void loop(){
  digitalWrite(a,HIGH);
  delay(1000);

  digitalWrite(b,HIGH);
  delay(1000);

  digitalWrite(c,HIGH);
  delay(1000);

  digitalWrite(d,HIGH);
  delay(1000);

  digitalWrite(e,HIGH);
  delay(1000);

  digitalWrite(f,HIGH);
  delay(1000);

  digitalWrite(g,HIGH);
  delay(1000);

  digitalWrite(dp,HIGH);
  delay(1000);

}