void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(12, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(12);

  if(buttonState == 0){
    digitalWrite(8, HIGH);
  }else{
    digitalWrite(8, LOW);
  }
  
  Serial.println(buttonState);
}
