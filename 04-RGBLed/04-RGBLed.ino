int red = 13;
int green = 9;
int blue = 10;

int blueValue = 0;
int greenValue = 255;

boolean blueup = false;
boolean greenup = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:

  if(blueValue != 0){
    blueValue = blueValue - 1;
  }else{
    blueValue = blueValue + 1;
  }

  if(blueValue == 255){
    blueUp 
    }
  
  if(greenValue != 255){
    greenValue = greenValue + 1;
  }else{
    greenValue = 0;
  }
  
  analogWrite(blue, blueValue);
  analogWrite(green, greenValue);

  delay(200);
}
