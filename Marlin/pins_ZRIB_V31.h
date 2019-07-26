/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega with RAMPS v1.4 (or v1.3) pin assignments
 *
 * Applies to the following boards:
 *
 *  ZRIB_V1 (X-MOT, Y-MOT, Z-MOT, E0-MOT, E1-MOT, Hotend0, Hotend1, Fan, Bed)
 *  ZRIB_V2 (X-MOT, Y-MOT, Z-MOT, E0-MOT, E1-MOT, Hotend0, Hotend1, Fan, Fan2, Bed)
 *  ZRIB_V3 (X-MOT, Y-MOT, Z-MOT, E0-MOT, E1-MOT, Hotend0, Hotend1, Fan, Fan2, Bed)
 *  ZRIB_V5 (X-MOT, Y-MOT, Z-MOT, E0-MOT, E1-MOT, E2-MOT, Hotend0, Hotend1, Fan, Fan2, Bed)
 *  ZRIB_V6 (X-MOT, Y-MOT, Z-MOT, E0-MOT, E1-MOT, E2-MOT, E3-MOT, Hotend0, Hotend1, Fan, Fan2, Bed)
 */

#if !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif
#define LARGE_FLASH true

#ifndef BOARD_NAME
#define BOARD_NAME "ZONESTAR ZRIB_V31"
#endif

/*
Recv: PIN:   0   Port: E0        RXD                         protected
Recv: PIN:   1   Port: E1        TXD                         protected
Recv: PIN:   2   Port: E4        <unused/unknown>            Input  = 1    TIMER3B   PWM:     0    WGM: 0    COM3B: 0    CS: 2    TCCR3A: 0    TCCR3B: 2    TIMSK3: 2   non-standard PWM mode
Recv: PIN:   3   Port: E5        X_MIN_PIN                   protected
Recv: PIN:   4   Port: G5        <unused/unknown>            Input  = 0    TIMER0B   PWM:   128    WGM: 3    COM0B: 0    CS: 3    TCCR0A: 3    TCCR0B: 3    TIMSK0: 5   compare interrupt enabled   overflow interrupt enabled
Recv: PIN:   5   Port: E3        <unused/unknown>            Input  = 0    TIMER3A   PWM:  -25536    WGM: 0    COM3A: 0    CS: 2    TCCR3A: 0    TCCR3B: 2    TIMSK3: 2   non-standard PWM mode   compare interrupt enabled
Recv: PIN:   6   Port: H3        E0_AUTO_FAN_PIN             protected
Recv: .                          E1_AUTO_FAN_PIN             protected
Recv: PIN:   7   Port: H4        HEATER_1_PIN                protected
Recv: PIN:   8   Port: H5        HEATER_BED_PIN              protected
Recv: .                          RAMPS_D8_PIN                protected
Recv: PIN:   9   Port: H6        FAN_PIN                     protected
Recv: .                          RAMPS_D9_PIN                protected
Recv: PIN:  10   Port: B4        HEATER_0_PIN                protected
Recv: .                          RAMPS_D10_PIN               protected
Recv: PIN:  11   Port: B5        SERVO0_PIN                  Output = 0    TIMER1A   PWM:  2000    WGM: 4    COM1A: 0    CS: 2    TCCR1A: 0    TCCR1B: 10    TIMSK1: 2   non-standard PWM mode   compare interrupt enabled
Recv: PIN:  12   Port: B6        PS_ON_PIN                   protected
Recv: PIN:  13   Port: B7        <unused/unknown>            Output = 0    TIMER0A   PWM:     0    WGM: 3    COM0A: 0    CS: 3    TCCR0A: 3    TCCR0B: 3    TIMSK0: 5   overflow interrupt enabled
Recv:  .                  TIMER1C is also tied to this pin                  TIMER1C   PWM:     0    WGM: 4    COM1C: 0    CS: 2    TCCR1A: 0    TCCR1B: 10    TIMSK1: 2   non-standard PWM mode
Recv: PIN:  14   Port: J1        Y_MIN_PIN                   protected
Recv: PIN:  15   Port: J0        <unused/unknown>            Input  = 1
Recv: PIN:  16   Port: H1        LCD_PINS_RS                 Output = 0
Recv: PIN:  17   Port: H0        LCD_PINS_ENABLE             Output = 0
Recv: PIN:  18   Port: D3        Z_MIN_PIN                   protected
Recv: PIN:  19   Port: D2        Z_MAX_PIN                   protected
Recv: .                          Z_MIN_PROBE_PIN             protected
Recv: PIN:  20   Port: D1        SDA                         Input  = 0
Recv: PIN:  21   Port: D0        SCL                         Input  = 0
Recv: PIN:  22   Port: A0        <unused/unknown>            Input  = 0
Recv: PIN:  23   Port: A1        LCD_PINS_D4                 Output = 1
Recv: PIN:  24   Port: A2        E0_ENABLE_PIN               protected
Recv: PIN:  25   Port: A3        LCD_PINS_D5                 Input  = 0
Recv: PIN:  26   Port: A4        E0_STEP_PIN                 protected
Recv: PIN:  27   Port: A5        LCD_PINS_D6                 Input  = 0
Recv: PIN:  28   Port: A6        E0_DIR_PIN                  protected
Recv: PIN:  29   Port: A7        LCD_PINS_D7                 Input  = 0
Recv: PIN:  30   Port: C7        E1_ENABLE_PIN               protected
Recv: PIN:  31   Port: C6        BTN_EN1                     Input  = 1
Recv: PIN:  32   Port: C5        <unused/unknown>            Input  = 0
Recv: PIN:  33   Port: C4        BTN_EN2                     Input  = 0
Recv: PIN:  34   Port: C3        E1_DIR_PIN                  protected
Recv: PIN:  35   Port: C2        BTN_ENC                     Input  = 1
Recv: PIN:  36   Port: C1        E1_STEP_PIN                 protected
Recv: PIN:  37   Port: C0        BEEPER_PIN                  Output = 0
Recv: PIN:  38   Port: D7        X_ENABLE_PIN                protected
Recv: PIN:  39   Port: G2        <unused/unknown>            Input  = 0
Recv: PIN:  40   Port: G1        Z_CS_PIN                    Input  = 0
Recv: PIN:  41   Port: G0        KILL_PIN                    Input  = 1
Recv: PIN:  42   Port: L7        E0_CS_PIN                   Input  = 0
Recv: PIN:  43   Port: L6        <unused/unknown>            Input  = 0
Recv: PIN:  44   Port: L5        E1_CS_PIN                   Input  = 0    TIMER5C   PWM:     0    WGM: 1    COM5C: 0    CS: 3    TCCR5A: 1    TCCR5B: 3    TIMSK5: 0
Recv: PIN:  45   Port: L4        <unused/unknown>            Input  = 0    TIMER5B   PWM:     0    WGM: 1    COM5B: 0    CS: 3    TCCR5A: 1    TCCR5B: 3    TIMSK5: 0
Recv: PIN:  46   Port: L3        Z_STEP_PIN                  protected
Recv: PIN:  47   Port: L2        <unused/unknown>            Input  = 0
Recv: PIN:  48   Port: L1        Z_DIR_PIN                   protected
Recv: PIN:  49   Port: L0        SD_DETECT_PIN               Input  = 1
Recv: .                          Y_CS_PIN                    Input  = 1
Recv: PIN:  50   Port: B3        AVR_MISO_PIN                Input  = 0
Recv: .                          MISO_PIN                    Input  = 0
Recv: PIN:  51   Port: B2        AVR_MOSI_PIN                Output = 1
Recv: .                          MOSI_PIN                    Output = 1
Recv: PIN:  52   Port: B1        AVR_SCK_PIN                 Output = 0
Recv: .                          SCK_PIN                     Output = 0
Recv: PIN:  53   Port: B0        AVR_SS_PIN                  Output = 1
Recv: .                          SDSS                        Output = 1
Recv: .                          SS_PIN                      Output = 1
Recv: .                          X_CS_PIN                    Output = 1
Recv: PIN:  54   Port: F0 (A 0)  X_STEP_PIN                  protected
Recv: PIN:  55   Port: F1 (A 1)  X_DIR_PIN                   protected
Recv: PIN:  56   Port: F2 (A 2)  Y_ENABLE_PIN                protected
Recv: PIN:  57   Port: F3 (A 3)  <unused/unknown>   Analog in =   465   Input  = 0
Recv: PIN:  58   Port: F4 (A 4)  <unused/unknown>   Analog in =   427   Input  = 0
Recv: PIN:  59   Port: F5 (A 5)  <unused/unknown>   Analog in =   816   Input  = 1
Recv: PIN:  60   Port: F6 (A 6)  Y_STEP_PIN                  protected
Recv: PIN:  61   Port: F7 (A 7)  Y_DIR_PIN                   protected
Recv: PIN:  62   Port: K0 (A 8)  Z_ENABLE_PIN                protected
Recv: PIN:  63   Port: K1 (A 9)  <unused/unknown>   Analog in =   780   Input  = 1
Recv: PIN:  64   Port: K2 (A10)  <unused/unknown>   Analog in =   299   Input  = 0
Recv: PIN:  65   Port: K3 (A11)  FILWIDTH_PIN                Analog in =   303
Recv: PIN:  66   Port: K4 (A12)  MAX6675_SS                  Input  = 0
Recv: PIN:  67   Port: K5 (A13)  TEMP_0_PIN                  protected
Recv: PIN:  68   Port: K6 (A14)  TEMP_BED_PIN                protected
Recv: PIN:  69   Port: K7 (A15)  TEMP_1_PIN                  protected
*/

/**
 D0   Port: E0       AUX_PIN4		RX0
 D1   Port: E1       AUX_PIN3		TX0
 D2   Port: E4       X_MAX_PIN
 D3   Port: E5       X_MIN_PIN
 D4   Port: G5       				XS1_PIN_1
 D5   Port: E3						XS1_PIN_3
 D6   Port: H3		 FAN2_PIN		XS1_PIN_2
 D7   Port: H4       HEATER2_PIN
 D8   Port: H5		 HEAT_BED_PIN
 D9   Port: H6		 FAN_PIN			LASER_PWM
D10   Port: B4		 HEATER1_PIN
D11   Port: B5       				XS1_PIN_4
D12   Port: B6		 PS_ON_PIN
D13   Port: B7		 LED_PIN
D14   Port: J1		 Y_MIN_PIN
D15   Port: J0		 Y_MAX_PIN
D16   Port: H1		 EXP1_PIN_7		TXD2
D17   Port: H0		 EXP1_PIN_8		RXD2
D18   Port: D3		 Z_MIN_PIN
D19   Port: D2		 Z_MAX_PIN
D20   Port: D1		 AUX_PIN1		SDA
D21   Port: D0		 AUX_PIN2		SCL
D22   Port: A0		 E2_EN_PIN
D23   Port: A1		 EXP1_PIN6
D24   Port: A2		 E0_EN_PIN
D25   Port: A3		 EXP1_PIN5
D26   Port: A4		 E0_STEP_PIN
D27   Port: A5		 EXP1_PIN4
D28   Port: A6		 E0_DIR_PIN
D29   Port: A7       EXP1_PIN3
D30   Port: C7		 E1_EN_PIN
D31   Port: C6		 EXP2_PIN8
D32   Port: C5
D33   Port: C4		 EXP2_PIN6
D34   Port: C3		 E1_DIR_PIN
D35   Port: C2		 EXP1_PIN9
D36   Port: C1		 E1_STEP_PIN
D37   Port: C0		 EXP1_PIN10
D38   Port: D7		 X_EN_PIN
D39   Port: G2		 E2_DIR_PIN
D40   Port: G1		 E2_STEP_PIN
D41   Port: G0		 EXP2_PIN3
D42   Port: L7		 E3_EN_PIN
D43   Port: L6		 E2_STEP_PIN
D44   Port: L5		 E3_DIR_PIN
D45   Port: L4
D46   Port: L3		 Z_STEP_PIN
D47   Port: L2
D48   Port: L1		 Z_DIR_PIN
D49   Port: L0		 EXP2_PIN4
D50   Port: B3		 EXP2_PIN10		AVR_SPI_MISO
D51   Port: B2		 EXP2_PIN5		AVR_SPI_MOSI
D52   Port: B1		 EXP2_PIN9		AVR_SPI_SCK
D53   Port: B0		 EXP2_PIN7		AVR_SPI_SS
D54   Port: F0		 X_STEP_PIN		A0
D55   Port: F1		 X_DIR_PIN		A1
D56   Port: F2		 Y_EN_PIN		A2
D57   Port: F3		 E0_SW_PIN		A3
D58   Port: F4		 E1_SW_PIN		A4
D59   Port: F5						A5
D60   Port: F6		 Y_STEP_PIN		A6
D61   Port: F7		 Y_DIR_PIN		A7
D62   Port: K0		 Z_EN_PIN		A8
D63   Port: K1						A9
D64   Port: K2		 EXP2_PIN1		A10		ADC_KEYPAD_PIN
D65   Port: K3						A11
D66   Port: K4						A12
D67   Port: K5		 E0_TEMP		A13
D68   Port: K6		 BED_TEMP		A14
D69   Port: K7		 E1_TEMP		A15
**/



/*===============================================================================

===============================================================================*/


//
// Limit Switches
//
#define X_MIN_PIN           3
#define X_MAX_PIN         	2

#define Y_MIN_PIN          14
#define Y_MAX_PIN          15

#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

//#define	E0_SW_PIN			57
//#define	E1_SW_PIN			58

//
// Z Probe (when not Z_MIN_PIN)
//
#if ENABLED(Z_MIN_PROBE_ENDSTOP)
#define	Z_MIN_PROBE_PIN	   19
#endif

//
// Steppers
//

#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_CS_PIN           53

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_CS_PIN           49

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_CS_PIN           40

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24
#define E0_CS_PIN          42

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30
#define E1_CS_PIN          44

//
// Temperature Sensors
//
#define TEMP_0_PIN         13   // Analog Input
#define TEMP_1_PIN         15   // Analog Input
#define TEMP_BED_PIN       14   // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN       10
#define HEATER_1_PIN 		    7
#define HEATER_BED_PIN		  8
#define FAN_PIN        		  9
#define FAN1_PIN        	  6

//
// Misc. Functions
//
#define SDSS               53
#define LED_PIN            13
#define SD_DETECT_PIN 	   49

//Filament run out detection
#define FILWIDTH_PIN	     11  // Analog Input
#define MAX6675_SS         12


//Power hold pin PS_ON_PIN
//#define SUICIDE_PIN        	12
#define PS_ON_PIN         12

//
// Servos
//
#define SERVO0_PIN        11
#define SERVO1_PIN        -1
#define SERVO2_PIN        -1
#define SERVO3_PIN        -1

//================================================================================
// 							Spindle & Laser control
//================================================================================
#if ENABLED(SPINDLE_LASER_ENABLE)
#define SPINDLE_LASER_ENABLE_PIN	HEATER_0_PIN
#endif

//================================================================================
// 							LCD / Controller
//================================================================================
//LCD 128x64
//================================================================================
#define	LCDSCREEN_NAME	"Reprap LCD12864"
//USE EXP1 & EXP2 CONNECTOR
#define LCD_PINS_RS    	16 // ST7920_CS_PIN	LCD_PIN_RS
#define LCD_PINS_ENABLE 17 // ST7920_DAT_PIN	LCD_PIN_ENABLE
#define LCD_PINS_D4	   	23 // ST7920_CLK_PIN	LCD_PIN_R/W
#define LCD_PINS_D5	   	25
#define LCD_PINS_D6	   	27
#define LCD_PINS_D7	   	29


// Alter timing for graphical display
//#define ST7920_DELAY_1 	DELAY_2_NOP
//#define ST7920_DELAY_2 	DELAY_2_NOP
//#define ST7920_DELAY_3 	DELAY_2_NOP

//SW_SPI
//#define DOGLCD_A0       LCD_PINS_DC		//DC
//#define	DOGLCD_MOSI		35				//SDA
//#define	DOGLCD_SCK		37				//SCK

//================================================================================
//	KEYPAD
//================================================================================
#define BTN_EN1 		31
#define BTN_EN2 		33
#define BTN_ENC 		35
#define BEEPER_PIN 	37
#define KILL_PIN 		41
//================================================================================
// End of LCD / Controller
//================================================================================

