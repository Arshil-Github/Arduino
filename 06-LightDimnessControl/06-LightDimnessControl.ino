int value;
int potentiometerPin = A1;
int ledPin = 9;
float V1;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(potentiometerPin);
  V1 = (255./1023.) * value;

  analogWrite(ledPin, V1);
}
