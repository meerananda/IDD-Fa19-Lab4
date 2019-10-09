/*
  Early Worm 
  If there is enough light, the worm will come out of the apple.
 */

// Set up the Servo information
#include <Servo.h> 

#define servoPin  10
#define switchPin 2

#define closePos  110
#define openPos   10

Servo servo;

// Range of values for the photoresistor
const int sensorMin = 0;
const int sensorMax = 1024;

// Input pin for the photoresistor
int sensorPin = A0;    

void setup() {
  // Initialize sensor pins and Servo
  pinMode(sensorPin, INPUT);  
  servo.attach(servoPin);
  servo.write(closePos);

}

void loop() {
  int sensorValue = analogRead(sensorPin);

  if (sensorValue <= 200) {
    servo.write(openPos); // Raise motor handle if bright enough
  }
  
  else if (sensorValue > 200) {
    servo.write(closePos); // Lower motor handle if not bright enough
    
  }

}
