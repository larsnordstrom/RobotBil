/*
 * Arduino projekt för EEDat. 
 */
// Dessa måste finnas med i projektet.
#include "secrets.h"
#include "config.h"

// Inkludera olika bibliotek
#include "WiFiEsp.h"

/**
 * Här definerar ni funktioner.
 * Lägg till funktioner och namnge dom logiskt.
 */
void initPins();
void blinkStatusLed(int del);
void connectToWiFi(void);

#ifndef HAVE_HWSERIAL1
#include "SoftwareSerial.h"
SoftwareSerial Serial1(6, 7); // Arduino RX -> Esp01 TXD, Arduino TX -> Esp01 RXD.
#endif

/**
* Setup
*/
void setup()
{
  Serial.begin(115200);
  Serial1.begin(9600);
  initPins();
  connectToWiFi();
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

void connectToWiFi(void)
{
  WiFi.init(&Serial1);
  Serial.print("Connecting to ");
  Serial.println(SSID_NAME);

  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED)
  {
    blinkStatusLed(500);
    Serial.print(".");
  }

  digitalWrite(STATUS_LED, HIGH);
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("http://");
  Serial.print(WiFi.localIP());
  Serial.println("/");
}
