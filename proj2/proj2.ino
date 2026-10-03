
const int bara = 200;

int soudS = 13;
int led = 8;
bool okk = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(soudS, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int szD = analogRead(soudS);
  if (szD > bara) {
    Serial.println(szD);
    if (okk == false) {
      okk = true;
      digitalWrite(led,HIGH);
    } else {
      okk = false;
      digitalWrite(led,LOW);
    }
  }
  delay(1000);
}
