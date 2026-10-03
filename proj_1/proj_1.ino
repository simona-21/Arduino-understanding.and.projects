int G = 13;
int Y = 12;
int R = 11;
int b1 = 8;
int b2 = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(G, OUTPUT);
  pinMode(Y, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("b1");
  Serial.println(digitalRead(b1));
  delay(500);
  Serial.println("b2");
  Serial.println(digitalRead(b2));
  delay(500);

  if (digitalRead(b1) == 0 && digitalRead(b2) == 0) {
    digitalWrite(Y, HIGH);
  } else if (digitalRead(b1) == 0) {
    digitalWrite(G, HIGH);
  } else if (digitalRead(b2) == 0) {
    digitalWrite(R, HIGH);

  } else {
    digitalWrite(Y, LOW);
    digitalWrite(G, LOW);
    digitalWrite(R, LOW);
  }
}
