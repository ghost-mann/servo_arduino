#include <Arduino.h>
#include <Servo.h>

Servo myservo;

void servo_setup() {
  myservo.attach(9);
  myservo.write(0);
  delay(1000);
}

void servo_loop() {
  for (int i = 0; i <= 180; i++) {
    myservo.write(i);
    delay(15);
  }

  for (int i = 180; i >= 0; i--) {
    myservo.write(i);
    delay(15);
  }

}
