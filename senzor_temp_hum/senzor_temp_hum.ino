#include <dht.h>
#define out 2

dht DHT;
int okk = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int readDATA = DHT.read11(out);

  float t = DHT.temperature;
  float h = DHT.humidity;

  Serial.println(okk);
  Serial.print("temp:");
  Serial.print(t);
  Serial.println(" C");

  Serial.print("hum:");
  Serial.print(h);
  Serial.println("%");Serial.println(" ");

  okk = okk + 1;
  delay(5000);
}
