# Paper Puppets

*A lab report by Meera Nanda*

## In this Report

You'll need to describe your design, include a video of your paper display in operation, and upload any code you wrote to make it move.

## Part A. Actuating DC motors

**Link to a video of your virbation motor**\
[Vibration Motor Video](https://youtu.be/w7te0LZEw2c)

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard\
Below is an image of the Servo motor wired to the breadboard.
![Servo](/images/Servo.png)

**a. Which color wires correspond to power, ground and signal?**\
Red - Power\
Orange - Control wire (signal line)\
Brown - Ground

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**\
The signal line should be connected to pin 9 on the Arduino.

**b. What aspects of the Servo code control angle or speed?**\
The pos variable shown below controls the angle of the motor. The delay function changes the time between rotations from one position to the next.

```c
for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);
    delay(15); 
```

[Servo Sweep Video](https://youtu.be/pNdqPd20hBA)

## Part C. Integrating input and output

**Include a photo/movie of your raw circuit in action.**
Below is a photo and a video of the Servo motor being controlled by a potentiometer:
![Servo and Potentiometer](/images/PartC_ServoPotentiometer.png)

[Potentiometer with Servo Video](https://youtu.be/eX3Z4CQxm0Q)

## Part D. Paper puppet

**a. Make a video of your proto puppet.**
[Proto Puppet Video]()

## Part E. Make it your own

**a. Make a video of your final design.**
 
