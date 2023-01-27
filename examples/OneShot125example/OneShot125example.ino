/*
  Example on how to use the OneShot125 Library
  The pins are unfortunately fixed (you can chnage the order):
  pin 9, OC1A, PB1, rear right
  pin 10, OC1B, PB2, front right
  pin 11, OC2A, PB3, front left
  pin 3, OC2B, PD3, rear left
*/

//include the library
#include <OneShot125.h>

void setup() {
  //initialize the library
  attachOneShot125();
}

void loop() {
  //call this function every time you have new motor values (at most 3900 times a second)
  //you'll have to provide a uint16_t (unsigned int) array containing 4 pwm values from 1000 to 2000
  uint16_t motorPWM[4] = { 1000, 1250, 1500, 2000 };
  writeOneShot125(motorPWM);

  //in this case a delay of 1ms will be used to achieve a ~1 kHz output
  delay(1);
}
