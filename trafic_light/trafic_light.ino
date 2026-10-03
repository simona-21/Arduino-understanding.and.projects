int trig = 10;
int echo = 11;
int v=7;
int g=6;
int r=5;
int buzz=4;

long duration;
float distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(v,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(r,OUTPUT);
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW); //ne asiguram ca e stabil
  digitalWrite(v,LOW);
  digitalWrite(g,LOW);
  digitalWrite(r,LOW);
  digitalWrite(buzz,LOW);
  delay(10);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10); //microsecunde pt short short delay
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH); //masoara timpul dintre high pana se face low

  distance = duration * 0.017; // /100000*343/2*100 , distanta=(viteza lumini*timp)/2 si *100 pt cm

  Serial.print("Distance: "); //priny simplu fara ent dupa
  Serial.print(distance);
  Serial.println("cm");

  if(distance>=15)
  {
    digitalWrite(v,HIGH);
    digitalWrite(g,LOW);
    digitalWrite(r,LOW);
    tone(buzz,400);
  }
  else if(distance<15 && distance>=5)
  {
    digitalWrite(v,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(r,LOW);
    tone(buzz,200);
  }
  else if(distance<5)
  {
    digitalWrite(v,LOW);
    digitalWrite(g,LOW);
    digitalWrite(r,HIGH);
    tone(buzz,50);
  }
  delay(100);
}