
int buttonPrevious = LOW;
int buttonCurrent = LOW;
int buttonState= LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT_PULLUP);
  Serial.begin(9600);
}
boolean button(){
  buttonCurrent = digitalRead(12); //Stare that we press hte button
  if(buttonCurrent == HIGH && buttonPrevious == LOW){
    
    if(buttonState == HIGH){
      buttonState = LOW;
    }else{
      buttonState = HIGH;
      }
    return buttonState;
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  button();
  Serial.println(buttonState);

  buttonPrevious = buttonCurrent;
  delay(100);
}
