/*
* config.h
* 
* Denna fil används för att definera olika pins mm.
*/
// Serial
#define SERIAL_BAUDRATE 115200

// Oled
#define OLED_SCREEN_WIDTH 128
#define OLED_SCREEN_HEIGHT 64
#define OLED_RESET -1

// Led pin
#define STATUS_LED 13

// Wifi
#define SOFTSERIAL_RX 6
#define SOFTSERIAL_RX 7
#define SOFTSERIAL_BAUDRATE 9600
#define SERVER_PORT 8080
// Motor pins
#define MOTOR_LEFT 11
#define MOTOR_RIGHT 12

// Dessa pins behöver ändras till lämplig ledig pin som har PWM.
#define A_MOTOR_PWM 0
#define B_MOTOR_PWM 0
