/*
 * Author: Jeff Jewett
 * Modification Date: 5/10/20
*/

//TODO: abstract packetCount, and byteCheck to different file. 
//EEPROM.h should only have general functions for reading/writing to EEPROM

//initializes the i2c connection
void eepromInitI2C();

//stores pc in the eeprom
void setPacketCount(uint8_t pc);

void incrementPacketCount(uint8_t inc);

//reads pc from eeprom
uint8_t readPacketCount();  

//sets a unique value in eeprom
void setByteCheck();

//resets unique value to 0 in eeprom (use before sending into space)
void resetByteCheck();

//checks if unique value has been set
uint8_t isByteCheckSet();
