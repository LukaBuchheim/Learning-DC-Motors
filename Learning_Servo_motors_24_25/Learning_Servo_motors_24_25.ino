//Add a libary for using servos 
//how to:
//tools then manage libaries then search libary for Servo 

//tells code to use servo libary 
#include <Servo.h>
#define MICHAEL_PIN 2

//make servo Object 

Servo Michael; 

void setup() {
  // put your setup code here, to run once:

  Michael.attach(MICHAEL_PIN); //connecting servo object to pin  
  Michael.write(90); //set start of propeller to 90 degrees 

}

void loop() {
  // put your main code here, to run repeatedly:
  //range 0-180 
  //negative numbers default to 0 
  //numbers ghreater than 18' default to 180 
  Michael.write(0);
  delay(600);
 Michael.write(180);
delay(600);
}
