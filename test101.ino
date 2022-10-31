#define SENSOR_PIN 23
#define LED 4

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}
void loop() {
  int input = digitalRead(SENSOR_PIN);
  Serial.print("\n INPUT : ");
  Serial.print(input);
  if (input == HIGH) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
  delay(500);
}
