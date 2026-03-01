const int irPin = 2;     // IR sensor OUT pin
const int ledPin = 13;   // Built-in LED

void setup() {
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(irPin);

  if (sensorValue == LOW) {   // Object detected (usually LOW)
    digitalWrite(ledPin, HIGH);
    Serial.println("Object Detected!");
  } 
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Object");
  }

  delay(200);
}
