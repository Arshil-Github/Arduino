boolean buttonState;
void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(12);
  Serial.println(buttonState);

  delay(100);
}
