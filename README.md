# Arduino-OneShot125
A hardware OneShot125 library for 328p based arduinos

It uses timer 1 and 2 to genrate 4 independent OneShot125 signals (for e.g. a quadcopter). This unfortunately means, that the output pins are fixed, so you have to use the following ones:
- pin 9, OC1A, PB1, rear right
- pin 10, OC1B, PB2, front right
- pin 11, OC2A, PB3, front left
- pin 3, OC2B, PD3, rear left

Since OneShot125 is event based, you will have to take care of timing, aka. call the writeOneShot125() function at some interval however often you need it (theoretical maximum is about 3900Hz). It only sends out one pulse on each channel with every function call. For the best results call it immediatelly after you have calculated new values (eg. from a PID controller).

For the sake of compatibility (to standard pwm) you will have to input values between 1000 (for 0%) and 2000 (for 100%) and pass it as an int16_t (unsigned int) array of size 4 (for each output). See example.

## Installation

To install click the DOWNLOAD ZIP button and extract the folder to your arduinosketchfolder/libraries/ folder. You may need to create the libraries subfolder if its your first library. Restart the IDE.
Check this guide if unsuccesful: https://learn.adafruit.com/adafruit-all-about-arduino-libraries-install-use/installing-a-library

## Issues
Please report any issues using GitHubs Issues page

## Donate
<a href="https://paypal.me/davidhasko1/"><img src="https://www.paypalobjects.com/en_US/i/btn/btn_donate_LG.gif"></a>
If you enjoyed this project — or just feeling generous, consider buying me a beer. Cheers! :beers:
