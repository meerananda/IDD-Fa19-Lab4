#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int potentiometer = A0;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}


void loop() {
  // put your main code here, to run repeatedly:
  pos = analogRead(potentiometer);
  pos = map(pos, 0, 1023, 0, 180);
  myservo.write(pos);              // tell servo to go to position in variable 'pos'
  delay(15);                       // waits 15ms for the servo to reach the position
}
