#ifndef LED_H;
#define LED_H;

#include <Arduino.h>

class LED {
  private: 
  	byte pin;
  public:
    LED13(byte pin);
    void on();
    void off();
    void blink(int time);
};

#endif
