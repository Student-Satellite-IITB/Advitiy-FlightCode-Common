/*
 * common.h
 *
 * Created: 29-05-2019 12:38:15
 *  Author: PRASHANT KURREY
 */ 

#ifndef COMMON_H
#define COMMON_H
#include "avr_compiler.h"
// operational mode
#define PREFLIGHT_MODE 0X4C
#define LAUNCH_MODE 0x70
#define DETUMB_PRE_MODE 0x85
#define DETUMB_POST_MODE 0x86
#define NOM_TRANSMIT_MODE 0x89
#define NOM_UPLINK_MODE 0x8A
#define NOM_IDLE_MODE 0x88
#define LOW_POWER_MODE 0x93
#define EXTREME_LOW_POWER_MODE 0xA3
#define EMERGENCY_MODE 0x91  //to be decided
#define RESTART_MODE 0xB2
#define KILL_MODE 0xBE
//end of operational mode
//constants
#define BAUDRATE 9600
#define V_4V 0x0D9A
#define V_3E5V 0x0C00 
#define V_3E3V 0x0B5C
#define V_THRESHOLD_2 0x0A66 
#define KILL 0x0A		   // Defined randomly
#define RESTART 0xA0	   // Defined randomly
#define W_THRESHOLD 0x12   // Defined randomly
#define EEPROM_ADDRESS 0xA0
#define TWI_BAUDSETTING TWI_BAUD(F_CPU, BAUDRATE)

void POWER_SAVE_ENABLE();
void POWER_SAVE_DISABLE();
void EXTERNAL_INT_PINDO();

#endif 
