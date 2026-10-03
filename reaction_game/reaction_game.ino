#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523

int melody[] = {NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_AS4, NOTE_G4, NOTE_C5};

  int durations[] = {8, 8, 8, 4, 4, 4, 2};

int r = 9;
int g = 10;
int v = 11;

int w1 = 8;
int w2 = 12;

int buzz = 7;

int b1 = 6;
int b2 = 13;
int b3 = 3;

bool ok = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(v, OUTPUT);
  pinMode(w1, OUTPUT);
  pinMode(w2, OUTPUT);

  pinMode(buzz, OUTPUT);

  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);

  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(b3)==0){
    delay(1000);

  digitalWrite(v, HIGH);
  tone(buzz, 300);
  delay(100);
  noTone(buzz);
  delay(900);
  digitalWrite(v, LOW);
// aptinde si inchide verde

  digitalWrite(g, HIGH);
  tone(buzz, 500);
  delay(100);
  noTone(buzz);
  delay(900);
  digitalWrite(g, LOW);
//aprinde si inchine galben

  digitalWrite(r, HIGH);
  tone(buzz, 600);
  delay(100);
  noTone(buzz);
  delay(random(900,4901));//random intre 1-5 sec
  digitalWrite(r, LOW);
  tone(buzz,1000);
  delay(100);
  noTone(buzz);

  Serial.println(digitalRead(b1));
  Serial.println(digitalRead(b2));//verificare butoane

  while (ok == 0) {
    digitalWrite(w1, HIGH);
    digitalWrite(w2, HIGH);
    if (digitalRead(b1) == 0) {
      ok = 1;
      digitalWrite(w2, LOW);
    } else if (digitalRead(b2) == 0) {
      ok = 1;
      digitalWrite(w1, LOW);
    } else ok = 0;
  }


  for (int i = 0; i < 7; i++) {
    int wait = 1000 / durations[i];
    tone(buzz, melody[i], wait);
    
    int pause = wait * 1.30;
    delay(pause);
    noTone(buzz);
  }

  delay(3000);
  digitalWrite(w1, LOW);
  digitalWrite(w2, LOW);
  }

  ok = 0;
}
