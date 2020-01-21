# RobotBil
Arduino project

## Filer

### Robot.ino

Detta är filen som ni skriver c++ koden i, denna fil kompileras av Arduino ide.

### index.html
Denna fil används för att skriva all html och javascript kod. Ni kan använda Live Server för att titta hur sidan ser ut då ni skriver html. Innehållet i index kommer sedan läggas till i c++ koden så den laddas in på webservern. Denna fil kommer innehålla navigering, knappar, admin panel, video mm.

### config.h 

Används för att definera olika pins mm.

### secrets.h

Denna fil innehåller lösenord till wifi. Filen ska ej laddas upp på github.
Ni skapar denna fil själva och denna skall innehålla detta:

    /*
    * secrets.h
    * Denna fil ska ni inte ladda upp på github.
    */

    // SSID_NAME = Nätverkets skrivs in mellan ""
    #define SSID_NAME ""

    // SSID_PASSWORD = Nätverkets password skrivs in mellan ""
    #define SSID_PASSWORD ""