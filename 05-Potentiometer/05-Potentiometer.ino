int value;
int potentiometerPin = A1;
float V1;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(potentiometerPin);
  V1 = (5./1023.) * value;
  Serial.println(V1);
}
