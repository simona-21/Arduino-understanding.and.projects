int trig = 10;
int echo = 11;

long duration;
float distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW); //ne asiguram ca e stabil
  delay(10);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10); //microsecunde pt short short delay
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH); //masoara timpul dintre high pana se face low

  distance = duration * 0.017; // /100000*343/2*100 , distanta=(viteza lumini*timp)/2 si *100 pt cm

  Serial.print("Distance: "); //priny simplu fara ent dupa
  Serial.print(distance);
  Serial.println("cm");
  delay(100);
}