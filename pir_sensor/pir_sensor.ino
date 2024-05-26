void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, INPUT); //D7
}

void loop() {
  // put your main code here, to run repeatedly:
  long state = digitalRead(13);
  if (state == HIGH) {
    Serial.println("Motion detected");
    delay(1000);
  } else {
    Serial.println("No motion detected");
    delay(1000);
  }
}
