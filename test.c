#ifndef	__HMI_CONFIG_H
#include "stm32f10x.h"
#include "I2C_EEPROM.h"
//extern u8 Commu_addr;
//extern u8 Locate_addr;
//extern u8 Sensor_1_Init_Freq[2];
//extern u8 Sensor_2_Init_Freq[2];
//extern u8 Sensor_3_Init_Freq[2];
//extern u8 Sensor_4_Init_Freq[2];
//extern u8 Sensor_5_Init_Freq[2];
//extern int RS485_Freq;

void HMI_Read_All_Message(u8* pBuffer);

void HMI_Write_Locate_addr (u8* pBuffer);

void HMI_Write_Sensor_1_Init_Freq (u8* pBuffer);

void HMI_Write_Sensor_2_Init_Freq (u8* pBuffer);

void HMI_Write_Sensor_3_Init_Freq (u8* pBuffer);
	
void HMI_Write_Sensor_4_Init_Freq (u8* pBuffer);

void HMI_Write_Sensor_5_Init_Freq (u8* pBuffer);
void HMI_Default_Set(void);

#endif /* __HMI_CONFIG_H */
