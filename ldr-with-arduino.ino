const int ledPin = 5; // digital pin 5 
const int ldrPin = A0; // analog pin 0
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}
void loop() {
  int ldrStatus = analogRead(ldrPin);
  if (ldrStatus <= 200) {digitalWrite(ledPin, HIGH);
    Serial.print("LED:");
    Serial.println(ldrStatus);
  } else {
    digitalWrite(ledPin, LOW);
    Serial.print("LED: ");
    Serial.println(ldrStatus);
  }
}
