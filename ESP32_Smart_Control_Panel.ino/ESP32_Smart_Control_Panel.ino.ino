#define LED_PIN 23
#define POT_PIN 34

void setup()
 {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);

  Serial.println("ESP32 Potentiometer LED Control");
}

void loop() {
  int potValue = analogRead(POT_PIN);

  // ESP32 ADC: 0 to 4095
  // LED brightness: 0 to 255
  int brightness = map(potValue, 0, 4095, 0, 255);

  analogWrite(LED_PIN, brightness);

  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);

  Serial.print("   LED Brightness: ");
  Serial.println(brightness);

  delay(200);
}