int pirPin = 2;     // PIR sensor output connected to D2
int ldrPin = A0;    // LDR connected to A0
int ledPin = 5;     // LED connected to D5

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);   // Read light level
  int motion = digitalRead(pirPin);    // Read PIR sensor

  Serial.print("LDR: ");
  Serial.print(ldrValue);
  Serial.print("  PIR: ");
  Serial.println(motion);

  // If it is dark AND motion is detected → turn ON light
  if (ldrValue < 500 && motion == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Street Light ON (Motion Detected at Night)");
    delay(5000);  // Keep ON for 5 seconds
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Street Light OFF");
  }

  delay(200); // small delay for stability
}
