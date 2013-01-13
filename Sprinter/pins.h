#ifndef PINS_H
#define PINS_H


#if MOTHERBOARD == 10 //teensy driving lemon curry
#define KNOWN_BOARD 1

#ifndef __AVR_ATmega32U4__
#error Oops!  Make sure you have 'Teensy 2.0' selected from the boards menu.
#endif


#define X_STEP_PIN          -1
#define X_DIR_PIN           -1
#define X_ENABLE_PIN       -1
#define X_MIN_PIN           -1
#define X_MAX_PIN           -1

#define Y_STEP_PIN         -1
#define Y_DIR_PIN           -1
#define Y_ENABLE_PIN       -1
#define Y_MIN_PIN           -1
#define Y_MAX_PIN          -1

#define Z_STEP_PIN         10
#define Z_DIR_PIN          23
#define Z_ENABLE_PIN        22
#define Z_MIN_PIN          9
#define Z_MAX_PIN          -1//16

#define E_STEP_PIN         -1
#define E_DIR_PIN          -1
#define E_ENABLE_PIN       -1

#define SDPOWER          -1
#define SDSS          -1
#define LED_PIN            11
#define FAN_PIN            14
#define PS_ON_PIN          -1
#define KILL_PIN           -1
#define ALARM_PIN          -1

#define HEATER_0_PIN        12
#define TEMP_0_PIN          9    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define HEATER_1_PIN        -1
#define TEMP_1_PIN          -1    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!


#endif


#ifndef KNOWN_BOARD
#error Unknown MOTHERBOARD value in configuration.h
#endif


//List of pins which to ignore when asked to change by gcode, 0 and 1 are RX and TX, do not mess with those!
//const int sensitive_pins[] = {0, 1, X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, E_STEP_PIN, E_DIR_PIN, E_ENABLE_PIN, LED_PIN, PS_ON_PIN, HEATER_0_PIN, HEATER_1_PIN, FAN_PIN, TEMP_0_PIN, TEMP_1_PIN};

#endif


