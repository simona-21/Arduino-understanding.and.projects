int led = 13;
int bA = 8;
int bB = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(bA, INPUT);
  pinMode(bB, INPUT);
  Serial.begin(9600);
}

void loop() {
 // put your main code here, to run repeatedly:
  Serial.println("bA");
  Serial.println(digitalRead(bA));
  delay(500);

  Serial.println("bB");
  Serial.println(digitalRead(bB));
  delay(500);
  
  while (digitalRead(bA) == 1 || digitalRead(bB) == 1) {
    digitalWrite(led, HIGH);
  }
   digitalWrite(led, LOW);
}
