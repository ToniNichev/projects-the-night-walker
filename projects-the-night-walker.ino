#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include "declarations.h"
#include "rise.h"
#include "walk.h"

#define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates


int tick = 0;
int len = 7;
int mode =  1;


Legs legs;

void setup() {
  Serial.begin(9600);
  Serial.println("Servo walker");
  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(SERVO_FREQ);  // Analog servos run at ~50 Hz updates  
  float trim[] = {0,0,0,0,0,0,0,0};
  legs.init(trim);
  delay(2000);
  Serial.println("Starting ...");
}


void loop() {
  // int size = sizeof(stepsRise)/sizeof(stepsRise[0]);
  // legs.moveLegs(stepsRise, size);

  int size = sizeof(stepsWalk)/sizeof(stepsWalk[0]);
  legs.moveLegs(stepsWalk, size);
  
  delay(10);
}
