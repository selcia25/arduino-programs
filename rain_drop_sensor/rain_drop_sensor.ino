#define POWER_PIN D7
#define D0_PIN D2
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(POWER_PIN, OUTPUT);
  pinMode(D0_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(POWER_PIN, HIGH);
  delay(10);
  int digitalValue = digitalRead(D0_PIN);
  digitalWrite(POWER_PIN, LOW);
  
  if (digitalValue == HIGH)
    Serial.println("Rain not detected");
  else
    Serial.println("Rain detected");
  delay(1000);
}
