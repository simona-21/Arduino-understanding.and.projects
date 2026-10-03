int poten=A0;
int val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(poten,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(poten);
  Serial.println(val);
  delay(500);
}
