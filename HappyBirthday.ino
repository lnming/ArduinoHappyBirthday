/*

  HappyBirthday - A cake of flashing LEDs with "Happy Birthday" as
                  soundtrack
         
  Copyright (C) 2011 Stefano Cotta Ramusino

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see < http://www.gnu.org/licenses/ >.
  
*/

#include <Bounce.h>     // debounces digital inputs and more
                        // ( http://www.arduino.cc/playground/Code/Bounce )
                       
#include <Playtune.h>   // a background polyphonic music generator for Arduino
                        // microprocessor boards 
                        // ( http://code.google.com/p/arduino-playtune )

#include "HappyBD2X.h"  // playtune bytestream of Happy Birthday created by
                        // MIDITONES - http://code.google.com/p/miditones

/* 
  Constants
*/
const byte piezoPin = 9;                   // pin number for the piezo buzzer
const byte buttonPin = 7;                  // pin number for the button
const byte ledPins[] = {3, 5, 12, 8, 10};  // pins number for the LEDs
const byte deBounceDelay = 20;             // button debounce time

/* 
  Variables
*/
boolean animation = false;                      // animation state
boolean someLedsAreOn = false;                  // flag to check if some LEDs are on
Bounce switchButton(buttonPin, deBounceDelay);  // switch button (debounced)
Playtune pt;                                    // playtune object used to play song

/*
  Setup function
*/
void setup()
{
  
  randomSeed(analogRead(0));  // init random number generator reading an unconnected pin
  
  pt.tune_initchan(piezoPin);  // set default output for playtune
  
  // set all digital pins used for LEDs in output mode
  for (int i=0; i<sizeof(ledPins); i++)
    pinMode(ledPins[i], OUTPUT);
  
}

/* 
  Loop function
*/
void loop() 
{
  
  handleSwitchButton();
  setMusic();
  ledAnimation();
    
}

/*
  Handle switch button
*/
void handleSwitchButton()
{
  
  // swap animation state according to the switch button state
  if (switchButton.update())
    if (switchButton.read() == HIGH)
      animation = !animation;
  
}

/*
  Music
*/
void setMusic()
{
  
  if (animation) {
    
    // if no song is running (re)start playing the song
    if (!pt.tune_playing)
      pt.tune_playscore(score);
  
  } else
  
    // if no LED animation is running stop playing the song
    if (pt.tune_playing)
      pt.tune_stopscore();
      
}
  
/* 
  LED animation
*/
void ledAnimation()
{
  
  if (!animation) {
    
    // light off all LEDs if animation is stopped
    if (someLedsAreOn)
      for (int i=0; i<sizeof(ledPins); i++)
        digitalWrite(ledPins[i], LOW);
    
    return;
  }

  int nAnimation = random(1, 6);  // select a random animation to run

  switch (nAnimation) {
  
    case 1:  // light on all LEDs
      for (int i=0; i<sizeof(ledPins); i++)
        digitalWrite(ledPins[i], HIGH);
      someLedsAreOn = true;
      break;
  
    case 2:  // light off all LEDs
      for (int i=0; i<sizeof(ledPins); i++)
        digitalWrite(ledPins[i], LOW);
      someLedsAreOn = false;
      break;
    
    int nLed;
    
    case 3:  // light on a random LED
      nLed = random(0, sizeof(ledPins)-1);
      digitalWrite(ledPins[nLed], HIGH);
      someLedsAreOn = true;
      break;
      
    case 4:  // light off a random LED
      nLed = random(0, sizeof(ledPins)-1);
      digitalWrite(ledPins[nLed], LOW);
      break;
      
    int nLeds;
    
    case 5:   // light on random LEDs
      nLeds = random(1, sizeof(ledPins));
      nLed = random(0, nLeds-1);
      for (int i=0; i<nLeds; i++)
        if (i != nLed) {
          digitalWrite(ledPins[i], HIGH);
          someLedsAreOn = true;
        }
      break;
      
    default:  // light off random LEDs
      nLeds = random(1, sizeof(ledPins));
      nLed = random(0, nLeds-1);
      for (int i=0; i<nLeds; i++)
        if (i != nLed)
          digitalWrite(ledPins[i], LOW);
    
  }
  
  pt.tune_delay(70);  // wait 70 ms to next animation step
  
}
