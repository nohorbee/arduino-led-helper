#include "LED.h"

LED::LED(byte pin) {
  this->pin = pin;
  pinMode(this->pin, OUTPUT);
}

void LED::on() {
  digitalWrite(this->pin, HIGH);
}

void LED::off() {
  digitalWrite(this->pin, LOW);
}

void LED::blink(int time) {
  on();
  delay(time/2);
  off();
  delay(time/2);
}
