/**************************************************************************
ZONESTAR 3D PRINTER DIY KIT Firmware Configuaration
http://www.zonestar3d.com/
**************************************************************************/
#ifndef __CONFIG_H__
#define __CONFIG_H__

#include "modellist.h"

/*********************************************************************************************************
//Choose one printer model from the model list
//about the model list, please see the "modellist.h" file
*********************************************************************************************************/
#define	MODEL_NUMBER		Z6
/*********************************************************************************************************/
//common setting for all of model
//Some of the settings may be covered behind
/*********************************************************************************************************/
#define	STRING_CONFIG_H_AUTHOR	"(Redferne)"
#define	SHOW_ZONESTAR_LOGO
#define	INDIVIDUAL_AXIS_HOMING_MENU
//#define	SPINDLE_LASER_ENABLE
//#define	BLTOUCH

/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *    en, an, bg, ca, cn, cz, cz_utf8, de, el, el-gr, es, eu, fi, fr, fr_utf8, gl,
 *    hr, it, kana, kana_utf8, nl, pl, pt, pt_utf8, pt-br, pt-br_utf8, ru, sk_utf8,
 *    tr, uk, zh_CN, zh_TW, test
 *
 * :{ 'en':'English', 'an':'Aragonese', 'bg':'Bulgarian', 'ca':'Catalan', 'cn':'Chinese', 'cz':'Czech',
 	'cz_utf8':'Czech (UTF8)', 'de':'German', 'el':'Greek', 'el-gr':'Greek (Greece)', 'es':'Spanish', 'eu':'Basque-Euskera',
 	'fi':'Finnish', 'fr':'French', 'fr_utf8':'French (UTF8)', 'gl':'Galician', 'hr':'Croatian', 'it':'Italian',
 	'kana':'Japanese', 'kana_utf8':'Japanese (UTF8)', 'nl':'Dutch', 'pl':'Polish', 'pt':'Portuguese', 'pt-br':'Portuguese (Brazilian)',
 	'pt-br_utf8':'Portuguese (Brazilian UTF8)', 'pt_utf8':'Portuguese (UTF8)', 'ru':'Russian', 'sk_utf8':'Slovak (UTF8)', 'tr':'Turkish',
 	'uk':'Ukrainian', 'zh_CN':'Chinese (Simplified)', 'zh_TW':'Chinese (Taiwan)', test':'TEST' }
 */
#define LCD_LANGUAGE en

/*********************************************************************************************************/
//END of common setting
/*********************************************************************************************************/


/*********************************************************************************************************/
//Setting for different model
//Prusa i3, Full Acrylic frame, acrylic hotend
//Z5 Serial
/*********************************************************************************************************/
#if((MODEL_NUMBER == Z5) || (MODEL_NUMBER == Z5S) || (MODEL_NUMBER == Z5X))
//Z5 2nd version, LCD12864 and knob keypad, ZMIB control board, 2-IN-2-OUT HOTEND
#define MOTHERBOARD 				BOARD_ZMIB
#define ZONESTAR_LCD12864
//#define	SHOW_VERSION_ONBOOT
#define	USE_SOFTWARE_SPI			1

#if(MODEL_NUMBER == Z5)
#define CUSTOM_MACHINE_NAME 		"Z5N"
#define	STRING_FIRMWARE_VERSION		"V4"
#define	_FIRMWARE_RELEASE_DATE_		"2019-04-15"
#elif(MODEL_NUMBER == Z5S)
#define CUSTOM_MACHINE_NAME 		"Z5S"
#define	STRING_FIRMWARE_VERSION		"V2.1"
#define	_FIRMWARE_RELEASE_DATE_		"2019-05-10"
#define	IS_ZMIB_V2
#elif(MODEL_NUMBER == Z5X)
#define CUSTOM_MACHINE_NAME 		"Z5X"
#define	STRING_FIRMWARE_VERSION		"V1.1"
#define	_FIRMWARE_RELEASE_DATE_		"2019-05-10"
#define	IS_ZMIB_V2
#endif

#define	EXTRUDERS					1

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false

#if(MODEL_NUMBER == Z5X)
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-30
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-2
#else
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-2
#endif
#define	ADJUST_MIN_POS
#define DISABLE_BEDLEVELING_SENSOR

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					800
#define	MAX_ACC_Z					100

#define	PTFE_TUBE_LENGTH			300

//PID paramter for hotend Z5S
#define  DEFAULT_Kp 				20
#define  DEFAULT_Ki 				1.6
#define  DEFAULT_Kd 				62

#elif((MODEL_NUMBER == Z5_M2) || (MODEL_NUMBER == Z5S_M2)|| (MODEL_NUMBER == Z5X_M2))
//Z5 2nd version, LCD12864 and knob keypad, ZMIB control board, 2-IN-2-OUT HOTEND
#define MOTHERBOARD 				BOARD_ZMIB
#define ZONESTAR_LCD12864
#define	USE_SOFTWARE_SPI			1
//#define	SHOW_VERSION_ONBOOT

#if(MODEL_NUMBER == Z5_M2)
#define CUSTOM_MACHINE_NAME 		"Z5N_M2"
#define	STRING_FIRMWARE_VERSION		"V4"
#define	_FIRMWARE_RELEASE_DATE_		"2019-04-15"
#elif(MODEL_NUMBER == Z5S_M2)
#define CUSTOM_MACHINE_NAME 		"Z5S_M2"
#define	STRING_FIRMWARE_VERSION		"V2.1"
#define	_FIRMWARE_RELEASE_DATE_		"2019-05-10"
#define	IS_ZMIB_V2
#elif(MODEL_NUMBER == Z5X_M2)
#define CUSTOM_MACHINE_NAME 		"Z5XM2"
#define	STRING_FIRMWARE_VERSION		"V1.1"
#define	_FIRMWARE_RELEASE_DATE_		"2019-05-10"
#define	IS_ZMIB_V2
#endif

#define	EXTRUDERS					1
#define MIXING_EXTRUDER

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false

#if(MODEL_NUMBER == Z5X_M2)
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-30
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-2
#else
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-2
#endif
#define	ADJUST_MIN_POS
#define DISABLE_BEDLEVELING_SENSOR

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					800
#define	MAX_ACC_Z					100

#define	PTFE_TUBE_LENGTH			400

//PID paramter for hotend Z5S-M2
#define  DEFAULT_Kp 				46.8
#define  DEFAULT_Ki 				3.86
#define  DEFAULT_Kd 				141.85

/*************************************************************************************************/
//Z6 Serial
/*************************************************************************************************/
#elif ((MODEL_NUMBER == Z6)	|| (MODEL_NUMBER == Z6S))
//Z6 1st version, Single extruder, OLED128x64 and Knob keypad, ZMIB control board, without heatbed
#define MOTHERBOARD 				BOARD_ZMIB
#define ZONESTAR_OLED12864
#define	USE_SOFTWARE_SPI			1

#if(MODEL_NUMBER == Z6)
#define CUSTOM_MACHINE_NAME 		"Z6"
#define	STRING_FIRMWARE_VERSION		"Firmware Ver:V4.2"
#define	_FIRMWARE_RELEASE_DATE_		"2019-07-10"
#define	SHOW_VERSION_ONBOOT
#else
#define CUSTOM_MACHINE_NAME 		"Z6S"
#define	STRING_FIRMWARE_VERSION		"Firmware Ver:V1"
#define	_FIRMWARE_RELEASE_DATE_		"2019-05-08"
#define	IS_ZMIB_V2
#endif

#define	EXTRUDERS					1
#define	PTFE_TUBE_LENGTH			300
#define	DISABLED_HEATBED
#define  DEFAULT_Kp 				20
#define  DEFAULT_Ki 				1.6
#define  DEFAULT_Kd 				62

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					800
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					150
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define Z_MIN_POS 					0
#define	ADJUST_MIN_POS
#define DISABLE_BEDLEVELING_SENSOR
#define FIL_RUNOUT_PIN 		25  //E0_SW_PIN
//#define	Z_DUAL_STEPPER_DRIVERS

#elif ((MODEL_NUMBER == Z6B) || (MODEL_NUMBER == Z6BS))
#define MOTHERBOARD 				BOARD_ZMIB
#define ZONESTAR_OLED12864
#define	USE_SOFTWARE_SPI			1

#if(MODEL_NUMBER == Z6B)
//Z6 1st version, Single extruder, OLED128x64 and Knob keypad, ZMIB control board
#define CUSTOM_MACHINE_NAME 		"Z6B"
#define	STRING_FIRMWARE_VERSION		"Firmware Ver:V4.1"
#define	_FIRMWARE_RELEASE_DATE_		"2019-04-15"
#define	SHOW_VERSION_ONBOOT
#else
//Z6 2nd version, Single extruder, OLED128x64 and Knob keypad, ZMIBV2 control board
#define CUSTOM_MACHINE_NAME 		"Z6BS"
#define	STRING_FIRMWARE_VERSION		"Firmware Ver:V1"
#define	_FIRMWARE_RELEASE_DATE_		"2019-05-08"
#define	IS_ZMIB_V2
#endif

#define	EXTRUDERS					1
#define	PTFE_TUBE_LENGTH			300
#define  DEFAULT_Kp 				20
#define  DEFAULT_Ki 				1.6
#define  DEFAULT_Kd 				62

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					800
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					150
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define Z_MIN_POS 					0
#define	ADJUST_MIN_POS
#define DISABLE_BEDLEVELING_SENSOR
#define	Z_DUAL_STEPPER_DRIVERS
/*************************************************************************************************/
//Z8x Serial
/*************************************************************************************************/
#elif (MODEL_NUMBER == Z8X)
//Z8X 2nd version, ZONESTAR LCD12864 and knob keypad, ZRIBV6 control board
#ifdef BLTOUCH
#define CUSTOM_MACHINE_NAME 		"Z8XS_BLTOUCH"
#else
#define CUSTOM_MACHINE_NAME 		"Z8XS"
#endif

#define	STRING_FIRMWARE_VERSION		"V1.1"
#define	_FIRMWARE_RELEASE_DATE_		"2019-06-04"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define ZONESTAR_LCD12864

#define	EXTRUDERS					1
#define	PTFE_TUBE_LENGTH			500

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					400
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-3
#define	ADJUST_MIN_POS
#define	DISTANCE_TO_CORNER_X		20
#define	DISTANCE_TO_CORNER_Y		20
#define	Z_DUAL_STEPPER_DRIVERS

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define	X_PROBE_OFFSET_FROM_EXTRUDER	30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

//Filament run out detection
#define FIL_RUNOUT_PIN 		58  //E1_SW_PIN
#define FIL_RUNOUT2_PIN 	 2  //X_MAX_PIN
#define FIL_RUNOUT3_PIN     15  //Y_MAX_PIN

/*************************************************************************************************/
//Z8S Serial
/*************************************************************************************************/
#elif (MODEL_NUMBER == Z8S_M3)
//Z8 2nd version, ZONESTAR LCD12864 and knob keypad, ZRIBV6 control board
#ifdef BLTOUCH
#define CUSTOM_MACHINE_NAME 		"Z8S_M3_BLTOUCH"
#else
#define CUSTOM_MACHINE_NAME 		"Z8S_M3"
#endif

#define	STRING_FIRMWARE_VERSION		"V2.1"
#define	_FIRMWARE_RELEASE_DATE_		"2019-04-30"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define ZONESTAR_LCD12864

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	MIXING_3_IN_1_OUT
#define	PTFE_TUBE_LENGTH			500

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					400
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-3
#define	ADJUST_MIN_POS
#define	DISTANCE_TO_CORNER_X		20
#define	DISTANCE_TO_CORNER_Y		20
#define	Z_DUAL_STEPPER_DRIVERS

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define	X_PROBE_OFFSET_FROM_EXTRUDER	30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

//Filament run out detection
#define FIL_RUNOUT_PIN 		58  //E1_SW_PIN
#define FIL_RUNOUT2_PIN 	 2  //X_MAX_PIN
#define FIL_RUNOUT3_PIN     15  //Y_MAX_PIN

#elif (MODEL_NUMBER == Z8S_R2)
//Z8 2nd version, ZONESTAR LCD12864 and knob keypad, ZRIBV6 control board
#ifdef BLTOUCH
#define CUSTOM_MACHINE_NAME 		"Z8S_R2_BLTOUCH"
#else
#define CUSTOM_MACHINE_NAME 		"Z8S_R2"
#endif
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2019-05-16"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define ZONESTAR_LCD12864

#define	EXTRUDERS					2
#define	PTFE_TUBE_LENGTH			500

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					400
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-3
#define	ADJUST_MIN_POS
#define	DISTANCE_TO_CORNER_X		20
#define	DISTANCE_TO_CORNER_Y		20
#define	Z_DUAL_STEPPER_DRIVERS

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define	X_PROBE_OFFSET_FROM_EXTRUDER	30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

//Filament run out detection
#define FIL_RUNOUT_PIN 		58  //E1_SW_PIN
#define FIL_RUNOUT2_PIN 	 2  //X_MAX_PIN

#elif (MODEL_NUMBER == Z8S_R2S)
//Z8 2nd version, ZONESTAR LCD12864 and knob keypad, ZRIBV6 control board
#ifdef BLTOUCH
#define CUSTOM_MACHINE_NAME 		"Z8S_R2S_BLTOUCH"
#else
#define CUSTOM_MACHINE_NAME 		"Z8S_R2S"
#endif
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2019-05-16"

#define MOTHERBOARD 				BOARD_ZRIBV6
#define ZONESTAR_LCD12864

#define	EXTRUDERS					2
#define	SINGLENOZZLE
#define	PTFE_TUBE_LENGTH			500

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					400
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-3
#define	ADJUST_MIN_POS
#define	DISTANCE_TO_CORNER_X		20
#define	DISTANCE_TO_CORNER_Y		20
#define	Z_DUAL_STEPPER_DRIVERS

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define	X_PROBE_OFFSET_FROM_EXTRUDER	30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

//Filament run out detection
#define FIL_RUNOUT_PIN 		58  //E1_SW_PIN
#define FIL_RUNOUT2_PIN 	 2  //X_MAX_PIN

/*************************************************************************************************/
//Z9 Serial
/*************************************************************************************************/
#elif (MODEL_NUMBER == Z9T)
//Z9 2nd Version, LCD12864 and knob keypad, ZRIBV6 control board
#ifdef BLTOUCH
#define CUSTOM_MACHINE_NAME 		"Z9T_BLTOUCH"
#else
#define CUSTOM_MACHINE_NAME 		"Z9T"
#endif
#define CUSTOM_MACHINE_NAME 		"Z9T"
#define	STRING_FIRMWARE_VERSION		"V2"
#define	_FIRMWARE_RELEASE_DATE_		"2019-4-16"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define ZONESTAR_LCD12864
#define	COREXY
#define	COREXY_SWAPXY_MOTOR

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	MIXING_3_IN_1_OUT
#define	PTFE_TUBE_LENGTH			700

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					800
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-20
#define Z_MIN_POS 					0
#define	ADJUST_MIN_POS

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

//Filament run out detection
#define FIL_RUNOUT_PIN 					2//X_MAX_PIN
#define FIL_RUNOUT2_PIN 				15//Y_MAX_PIN
/*************************************************************************************************/
//Z10 Serial
/*************************************************************************************************/
#elif (MODEL_NUMBER == Z10S)
//Z10,
#ifdef BLTOUCH
#define CUSTOM_MACHINE_NAME 		"Z10S_BLTOUCH"
#else
#define CUSTOM_MACHINE_NAME 		"Z10S"
#endif
#define	STRING_FIRMWARE_VERSION		"V2"
#define	_FIRMWARE_RELEASE_DATE_		"2019-4-16"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define ZONESTAR_LCD12864
#define	Z_DUAL_STEPPER_DRIVERS

#define	EXTRUDERS					1
#define	PTFE_TUBE_LENGTH			500

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					400
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-5
#define	ADJUST_MIN_POS
#define	Z_DUAL_ENDSTOPS_ADJUSTMENT	0

#ifndef BLTOUCH
#define	DISABLE_BEDLEVELING_SENSOR
#define	DISTANCE_TO_CORNER_X		15
#define	DISTANCE_TO_CORNER_Y		15
#endif

//Filament run out detection
#define FIL_RUNOUT_PIN 				58//E1_SW_PIN

#elif (MODEL_NUMBER == Z10S_R2S)
//Z10,
#ifdef BLTOUCH
#define CUSTOM_MACHINE_NAME 		"Z10S_R2S_BLTOUCH"
#else
#define CUSTOM_MACHINE_NAME 		"Z10S_R2S"
#endif
#define	STRING_FIRMWARE_VERSION		"V2"
#define	_FIRMWARE_RELEASE_DATE_		"2019-4-16"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define ZONESTAR_LCD12864
#define	Z_DUAL_STEPPER_DRIVERS

#define	EXTRUDERS					2
#define SINGLENOZZLE
#define	PTFE_TUBE_LENGTH			500

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					400
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-5
#define	ADJUST_MIN_POS
#define	Z_DUAL_ENDSTOPS_ADJUSTMENT	0

#ifndef BLTOUCH
#define	DISABLE_BEDLEVELING_SENSOR
#define	DISTANCE_TO_CORNER_X		15
#define	DISTANCE_TO_CORNER_Y		15
#endif

//Filament run out detection
#define FIL_RUNOUT_PIN 				58//E1_SW_PIN
#define FIL_RUNOUT2_PIN 			2//X_MAX_PIN

#elif (MODEL_NUMBER == Z10S_M2)
//Z10,
#ifdef BLTOUCH
#define CUSTOM_MACHINE_NAME 		"Z10S_M2_BLTOUCH"
#else
#define CUSTOM_MACHINE_NAME 		"Z10S_M2"
#endif
#define	STRING_FIRMWARE_VERSION		"V2"
#define	_FIRMWARE_RELEASE_DATE_		"2019-4-16"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define ZONESTAR_LCD12864
#define	Z_DUAL_STEPPER_DRIVERS

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	PTFE_TUBE_LENGTH			500

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					400
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-5
#define	ADJUST_MIN_POS
#define	Z_DUAL_ENDSTOPS_ADJUSTMENT	0

#ifndef BLTOUCH
#define	DISABLE_BEDLEVELING_SENSOR
#define	DISTANCE_TO_CORNER_X		15
#define	DISTANCE_TO_CORNER_Y		15
#endif

//Filament run out detection
#define FIL_RUNOUT_PIN 				58//E1_SW_PIN
#define FIL_RUNOUT2_PIN 			2//X_MAX_PIN

/*********************************************************************************************************
Setting for different model
*********************************************************************************************************/

/*********************************************************************************************************
Setting for special model
*********************************************************************************************************/
#elif(MODEL_NUMBER == Z5S_ZRIBV6)
//Z5 2nd version, LCD12864 and knob keypad, ZRIBV6 control board, Z-IN-1-OUT hotend
#define CUSTOM_MACHINE_NAME 		"Z5S_ZRIBV6"
#define	STRING_FIRMWARE_VERSION		"V1.1"
#define	_FIRMWARE_RELEASE_DATE_		"2018-12-20"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define ZONESTAR_LCD12864
#define	EXTRUDERS					1
#define MIXING_EXTRUDER

#define INVERT_X_DIR 				false
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				true
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define Z_MIN_POS 					0
#define	ADJUST_MIN_POS
#define DISABLE_BEDLEVELING_SENSOR

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					2000
#define	MAX_ACC_Z					100

#define	PTFE_TUBE_LENGTH			400

//PID paramter for hotend Z5NM2
#define  DEFAULT_Kp 				46.8
#define  DEFAULT_Ki 				3.86
#define  DEFAULT_Kd 				141.85

//Filament run out detection
#define FIL_RUNOUT_PIN 				58//E0_SW_PIN
#define FIL_RUNOUT2_PIN 			59//E1_SW_PIN

#elif(MODEL_NUMBER == Z5R2_ZRIBV6)
//Z5 2nd version, LCD12864 and knob keypad, ZRIBV6 control board, Z-IN-2-OUT hotend
#define CUSTOM_MACHINE_NAME 		"Z5SR2_ZRIBV6"
#define	STRING_FIRMWARE_VERSION		"V1.1"
#define	_FIRMWARE_RELEASE_DATE_		"2018-12-20"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define ZONESTAR_LCD12864
#define	EXTRUDERS					2

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define Z_MIN_POS 					0
#define	ADJUST_MIN_POS
#define DISABLE_BEDLEVELING_SENSOR

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					2000
#define	MAX_ACC_Z					100

#define	PTFE_TUBE_LENGTH			400
//Filament run out detection
#define FIL_RUNOUT_PIN 				58//E0_SW_PIN
#define FIL_RUNOUT2_PIN 			59//E1_SW_PIN

#elif(MODEL_NUMBER == Z8XR2_DualZ)
#ifdef BLTOUCH
#define CUSTOM_MACHINE_NAME 		"Z8XR2_DZ_BLTOUCH"
#else
#define CUSTOM_MACHINE_NAME 		"Z8XR2_DualZ"
#endif
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2019-06-05"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS					2
#define	PTFE_TUBE_LENGTH			500

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					400
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-3
#define	ADJUST_MIN_POS
#define	DISTANCE_TO_CORNER_X		20
#define	DISTANCE_TO_CORNER_Y		20
#define	Z_DUAL_STEPPER_DRIVERS

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define	X_PROBE_OFFSET_FROM_EXTRUDER	30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

//Filament run out detection
#define FIL_RUNOUT_PIN 		58  //E1_SW_PIN
#define FIL_RUNOUT2_PIN 	 2  //X_MAX_PIN

#elif(MODEL_NUMBER == Z8XM2_DualZ)
#ifdef BLTOUCH
#define CUSTOM_MACHINE_NAME 		"Z8XM2_DZ_BLTOUCH"
#else
#define CUSTOM_MACHINE_NAME 		"Z8XM2_DualZ"
#endif
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2019-06-05"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	PTFE_TUBE_LENGTH			500

#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				80
#define	MAX_ACC_X					2000
#define	MAX_ACC_Y					400
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-3
#define	ADJUST_MIN_POS
#define	DISTANCE_TO_CORNER_X		20
#define	DISTANCE_TO_CORNER_Y		20
#define	Z_DUAL_STEPPER_DRIVERS

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define	X_PROBE_OFFSET_FROM_EXTRUDER	30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

//Filament run out detection
#define FIL_RUNOUT_PIN 		58  //E1_SW_PIN
#define FIL_RUNOUT2_PIN 	 2  //X_MAX_PIN

#endif
/*********************************************************************************************************
END of Setting for special model
*********************************************************************************************************/


/*********************************************************************************************************
other settings accoring to different control board
*********************************************************************************************************/

#ifndef SHOW_VERSION_ONBOOT
#define	LCD_INFO_MENU
#define	PRINTCOUNTER
#endif

#if (MOTHERBOARD == BOARD_ZMIB)
#if ENABLED(AUTO_BED_LEVELING_LINEAR)
#define	Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#else
#define	DISABLE_BEDLEVELING_SENSOR
#endif
#define FAN_SOFT_PWM
#elif(MOTHERBOARD == BOARD_ZRIBV6)
#define SDCARD_SORT_ALPHA
#define ARC_SUPPORT
#define AUTOTEMP
#define	ADJUST_ATUO_FAN_SPEED
#ifdef Z_DUAL_STEPPER_DRIVERS
#define Z_DUAL_ENDSTOPS
#define	USE_ZMAX_PLUG
#endif
#endif
/*********************************************************************************************************
other settings
*********************************************************************************************************/

#endif // __CONFIG_H__
