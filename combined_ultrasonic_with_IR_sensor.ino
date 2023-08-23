const int irPin = 2;

#define echoPin 3
#define trigPin 4
long duration;
int distance;

void setup() {
  pinMode(irPin, INPUT);
  Serial.begin(9600);

   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);// put your setup code here, to run once:
   Serial.begin(9600);
   Serial.println("Distance measurement using Arduino Uno.");
   delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
   int irValue = digitalRead(irPin);

  if (irValue == HIGH) {
    Serial.println("Object detected!");
  } else {
    Serial.println("No object detected.");
  }

  delay(500);

    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);

    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.0344 / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(100);

}
