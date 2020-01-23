/*
 * Arduino projekt för EEDat. 
 */
// Dessa måste finnas med i projektet.
#include "secrets.h"
#include "config.h"
// Inkludera olika bibliotek
#include "WiFiEsp.h"
#include <SoftwareSerial.h>


/**
 * Här definerar ni funktioner.
 * Lägg till funktioner och namnge dom logiskt.
 */
SoftwareSerial Serial1(6, 7);
void initPins();
void blinkStatusLed(int del);
void connectToWiFi(void);
int status = WL_IDLE_STATUS;
/**
* Setup
*/
void setup()
{
 Serial.begin(115200);
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
  pinMode(STATUS_LED, OUTPUT);
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

/**
* Denna funktion används för att ansluta till wifi.
*/
void connectToWiFi(){
  Serial1.begin(9600);

  WiFi.init(&Serial1);

  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    while (true);
  }


  while (status != WL_CONNECTED) Serial.begin(115200);
 

  WiFi.init(&Serial1);

  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    while (true);
  }


  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid, pass);
  }


  Serial.println("You're connected to the network");
  printWifiStatus();

}
void printWifiStatus() {


  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());


  IPAddress ip = WiFi.localIP();
  Serial.print("IP Adress: ");
  Serial.println(ip);

}



