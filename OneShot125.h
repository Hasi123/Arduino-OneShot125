/*
  OneShot125.h - Library for generating a OneShot125 signal using timer 1 and timer 2
  Created by David Hasko, 27.01.2023
  Released under the GPL-3.0 license

  The pins are unfortunately fixed:
  pin 9, OC1A, PB1, rear right
  pin 10, OC1B, PB2, front right
  pin 11, OC2A, PB3, front left
  pin 3, OC2B, PD3, rear left
*/

#ifndef _ONESHOT125_h
#define _ONESHOT125_h

#include "Arduino.h"

#if defined(__AVR_ATmega48__) || defined(__AVR_ATmega48P__) || defined(__AVR_ATmega48PB__) \
  || defined(__AVR_ATmega88__) || defined(__AVR_ATmega88P__) || defined(__AVR_ATmega88PB__) \
  || defined(__AVR_ATmega168__) || defined(__AVR_ATmega168P__) || defined(__AVR_ATmega168PB__) \
  || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__) || defined(__AVR_ATmega328PB__)
#else
#error MCU not compatible
#endif

//#define PWM_BLOCKING
#define motorMinPWM 1000

void attachOneShot125(void);
void writeOneShot125(uint16_t (&motorPWM)[4]);

#endif
