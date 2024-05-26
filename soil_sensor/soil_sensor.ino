void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(A0);
  float moisture = 100 - ((analogValue/ 1023) * 100);
  print("Soil moisture percentage: ");
  println(moisture);
}
