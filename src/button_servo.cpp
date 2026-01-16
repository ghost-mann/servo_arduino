#include <Arduino.h>
#include <Servo.h>
#include "servo.h"

Servo theServo;
int button_a = 2;
int button_b = 3;
int pos = 0;

//input pullup starts high - when pressed becomes low

void button_servo_setup() {
    theServo.attach(9);
    pinMode(button_a,INPUT_PULLUP);
    pinMode(button_b,INPUT_PULLUP);

}

void button_servo_loop() {

    if (digitalRead(button_a) == LOW) {
        pos++;
        delay(5);
        theServo.write(pos);
    }

    if (digitalRead(button_b) == LOW) {
        pos--;
        delay(5);
        theServo.write(pos);
    }

}