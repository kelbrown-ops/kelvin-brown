// ESP32 Back EMF Detector

int emfPin = 35;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int reading = analogRead(emfPin);
  
  if (reading > 100) {
    Serial.print("EMF: ");
    Serial.println(reading);
  }
  
  delay(100);
}