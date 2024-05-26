#define sensorPin D1
#define led1 D2
#define led2 D3
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(sensorPin) == HIGH)
  {
    blinkLED(led1);
    delay(1000);
  } else {
    blinkLED(led2);
    delay(1000);
  }
}

void blinkLED(int pin)
{
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
}