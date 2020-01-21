# RobotBil
Arduino projekt för elever som läser programmering, elektronik och nätverk på Jämtlands Gymnasium.



## Verktyg
- Arduino IDE. 
- Git.
- Arduino UNO eller valfritt Arduino kompatibelt kort.
- ESP01s Wifi kort eller valfritt Arduino kompatibelt Wifi kort.
- Motordriver kort.
    - ex: 
        - Arduino MotorShield
        - Adafruit MotorShield v2.3
        - Adafruit TB6612
        - Sparkfun TB6612FNG
        - L2930DNE
- Kopplingsbrädor.
- Kopplingskablar.
- Komponentetkit
    - Motstånd, LED, IR, dioder, kondensatorer, tryckknappar etc.
- Batterier
    - Ex: LiPo, LiIon, 9v etc
- Strömförsörjning
- Multimeter

## Kom igång
- Installera Git på din dator.
- Klicka på "fork" knappen för att kopiera repot till ditt github konto.
- Klona projektet från din github till din dator.
- Skapa en ny branch, "develop" lokalt på din dator.
- Skriv kod i develop branch.
- Pusha din kod till ditt repo och gör en pull request för att lägga till kod i detta repo.

## Filer

### Robot.ino

Detta är filen som ni skriver c++ koden i, denna fil kompileras av Arduino ide.

### index.html
Denna fil används för att skriva all html och javascript kod. Ni kan använda Live Server för att titta hur sidan ser ut då ni skriver html. Innehållet i index kommer sedan läggas till i c++ koden så den laddas in på webservern. Denna fil kommer innehålla navigering, knappar, admin panel, video mm.

### config.h 

Används för att definera olika pins mm.

### secrets.h

Denna fil innehåller lösenord till wifi. Filen ska ej laddas upp på github då detta är ett öppen källkod.
Ni skapar denna fil själva och denna skall innehålla detta:

    /*
    * secrets.h
    * Denna fil ska ni inte ladda upp på github.
    */

    // SSID_NAME = Nätverkets skrivs in mellan ""
    #define SSID_NAME ""

    // SSID_PASSWORD = Nätverkets password skrivs in mellan ""
    #define SSID_PASSWORD ""