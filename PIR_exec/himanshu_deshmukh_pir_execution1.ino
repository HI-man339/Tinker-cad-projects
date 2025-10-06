int pirPin = 7;     // PIR sensor output pin
int ledPin = 13;    // LED pin

void setup() {
  pinMode(pirPin, INPUT);   // PIR as input
  pinMode(ledPin, OUTPUT);  // LED as output
}

void loop() {
  int motion = digitalRead(pirPin);  // Read PIR sensor

  if (motion == HIGH) {              // If motion detected
    digitalWrite(ledPin, HIGH);      // Turn LED ON
  } else {                           
    digitalWrite(ledPin, LOW);       // Turn LED OFF
  }
}