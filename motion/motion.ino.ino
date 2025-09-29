#define PIR_PIN D6   // HW-072 OUT pin
#define LED_PIN D5   // LED with 220Ω resistor

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH) {
    digitalWrite(LED_PIN, HIGH);   // Motion detected → LED ON
    Serial.println("Motion detected!");
  } else {
    digitalWrite(LED_PIN, LOW);    // No motion → LED OFF
    Serial.println("No motion");
  }

  delay(100);
}
