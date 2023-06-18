int trigPin = 11;
int echoPin = 13;
float distance, duration;
int ledPin_white = 10;
int ledPin_red = 9;
int ledPin_green = 8; 

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin_white, OUTPUT);
  pinMode(ledPin_red, OUTPUT);
  pinMode(ledPin_green, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = (duration * 0.0343) / 2;

  if(distance > 10){
    digitalWrite(ledPin_white, HIGH);
  }else{
    digitalWrite(ledPin_white, LOW);
  }
  if(distance > 5 && distance <= 10){
    digitalWrite(ledPin_green, HIGH);
  }else{
    digitalWrite(ledPin_green, LOW);
  }
  if(distance < 8){
    digitalWrite(ledPin_red, HIGH);
  }else{
    digitalWrite(ledPin_red, LOW);
  }

    Serial.print("Distance: ");
    Serial.println(distance);
    
    delay(100);
}
