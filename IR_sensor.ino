const int irPin = 2;

void setup() {
  pinMode(irPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int irValue = digitalRead(irPin);

  if (irValue == HIGH) {
    Serial.println("Object detected!");
  } else {
    Serial.println("No object detected.");
  }

  delay(500);
}