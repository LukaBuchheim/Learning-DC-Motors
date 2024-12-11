#define ENABLE 5 //pin that tells the motor to turn on wiht intensity 
#define DIRECTIONA 3 
#define DIRECTIONB 4 

void setup() {
  // put your setup code here, to run once:
pinMode(ENABLE, OUTPUT);
pinMode(DIRECTIONA, OUTPUT);
pinMode(DIRECTIONB, OUTPUT);



}

void loop() {
 digitalWrite(ENABLE, 50); //speed is between 0 - 255 
 digitalWrite(DIRECTIONA, LOW);
 digitalWrite(DIRECTIONB, HIGH);
 delay(500);
 digitalWrite(DIRECTIONA, HIGH);
 digitalWrite(DIRECTIONB, LOW);
  delay(500);

}
