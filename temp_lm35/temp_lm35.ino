void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(A0);
  float milliVolts = (analogValue/1024) * 3300;
  float celsius = milliVolts / 10;
  print("Temperature in C: ");
  println(celsius);
  float fahrenheit = ((celsius * 9)/5) + 32;
  print("Temperature in F: ");
  println(fahrenheit);
}
