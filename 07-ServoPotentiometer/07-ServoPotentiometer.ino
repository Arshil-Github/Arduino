#include <Servo.h>


int potentiometerPin = A1;
int value;
int V1;

Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
  servo.write(0);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(potentiometerPin);
  V1 = (180./ 1023.)*value;
  servo.write(V1);
  Serial.println(V1);
}
