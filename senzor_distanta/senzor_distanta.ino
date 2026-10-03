int trig = 10;
int echo = 11;
int led=7;

long duration;
float distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delay(10);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  distance = duration * 0.017;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");

  while(distance<5)
  {
    digitalWrite(led,HIGH);
    delay(200);
    digitalWrite(led,LOW);
    delay(200);


    digitalWrite(trig, LOW);
  delay(10);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  distance = duration * 0.017;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
  }
  delay(500);
}