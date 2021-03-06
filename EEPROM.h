/*
 * Author: Jeff Jewett
 * Modification Date: 9/22/20
*/

#ifndef EEPROM
#define EEPROM

//initializes the i2c connection
#include "simpletools.h"

void eepromInitI2C();

void eepromWriteArray(uint16_t address, uint8_t *data, int numBytes);

void eepromWriteUint8(uint16_t address, uint8_t data);

void eepromReadArray(uint16_t address, uint8_t *buffer, int numBytes);

uint8_t eepromReadUint8(uint16_t address);

#endif