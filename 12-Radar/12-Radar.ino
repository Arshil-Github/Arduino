#include <Servo.h>

int trigPin = 8;
int echoPin = 9;
int rotationPerLoop = 5;

float currentRotation, duration, distance;

float DetectionRange = 5;

Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(10);
  servo.write(0);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  currentRotation = servo.read();
  servo.write(currentRotation + rotationPerLoop);

  if(currentRotation + rotationPerLoop >= 180 || currentRotation + rotationPerLoop <= 0)
  {
    rotationPerLoop = rotationPerLoop * -1;  
  }

  digitalWrite(trigPin, LOW); 
  delay(2); 
  digitalWrite(trigPin, HIGH); 
  delay(10); 
  digitalWrite(trigPin, LOW); 
  duration = pulseIn(echoPin, HIGH); 
  distance = (duration * 0.0343) / 2; 

  if(distance < DetectionRange){
    Serial.println(servo.read());
    delay(3000);
    }

  delay(5);
}
