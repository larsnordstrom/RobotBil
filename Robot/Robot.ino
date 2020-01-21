/*
 * Arduino projekt för EEDat. 
 */
// Dessa måste finnas med i projektet.
#include "secrets.h"
#include "config.h"

// Inkludera olika bibliotek
#include "WiFi.h"

/**
 * Här definerar ni funktioner.
 * Lägg till funktioner och namnge dom logiskt.
 */
void initPins();
void blinkStatusLed(int del);

/**
* Setup
*/
void setup()
{
  Serial.begin(115200);
  initPins();
}

/**
* loop
*/
void loop()
{
  blinkStatusLed(500);
}

/**
*  Alla pins som skall ha output eller input
*  Här lägger ni till de pins som ska fungera som input/output.
*/
void initPins()
{
  setPinMode(STATUS_LED, OUTPUT);
}

/**
* Denna funktion används för att blink status_led som definertats i config.h
* Modifiera ej denna funktion
*/
void blinkStatusLed(int del)
{
  digitalWrite(STATUS_LED, HIGH);
  delay(del);
  digitalWrite(STATUS_LED, LOW);
  delay(del);
}
