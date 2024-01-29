declare variables
const int motopin = 9;
const int potpin = A0;
int pot int speed;

void setup() {
  // don't need to use pinMode
  //with analogRead and analogWrite

}

void loop() {
  // read potentiometer (0-1023)
  pot = analogRead(potpin);
  //convert to 0-255
  speed = map(pot,0,1023,0,255);
  //set motor speed
  analogWrite(motorpin, speed);

}
