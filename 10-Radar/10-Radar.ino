#include <Servo.h>
int value = 0;
int servo_Speed = 1;
Servo servo;
void setup() {
  // put your setup code here, to run once:
  servo.attach(8);
  servo.write(10);

  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(value == 180){
    servo_Speed = servo_Speed * (-1);
    digitalWrite(12, HIGH);
    }
  if(value == 0){
    servo_Speed = servo_Speed * (-1);
    digitalWrite(12, LOW);
    }
  value += servo_Speed;
  servo.write(value);
  delay(50);
}
