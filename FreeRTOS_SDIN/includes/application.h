/** 
 *	@file application.h

		@brief Functions for initialize and start application and tasks 

		@author Marina Calvo
		@author Robolabo
		@author www.robolabo.etsit.upm.es
		@date 2013/07/11 

    CREATIVE COMMONS PUBLIC LICENSE:
		
		THE WORK (AS DEFINED BELOW) IS PROVIDED UNDER THE TERMS OF THIS CREATIVE COMMONS PUBLIC LICENSE ("CCPL" OR "LICENSE"). 
		THE WORK IS PROTECTED BY COPYRIGHT AND/OR OTHER APPLICABLE LAW. 
		ANY USE OF THE WORK OTHER THAN AS AUTHORIZED UNDER THIS LICENSE OR COPYRIGHT LAW IS PROHIBITED.

		BY EXERCISING ANY RIGHTS TO THE WORK PROVIDED HERE, YOU ACCEPT AND AGREE TO BE BOUND BY THE TERMS OF THIS LICENSE. 
		TO THE EXTENT THIS LICENSE MAY BE CONSIDERED TO BE A CONTRACT, 
		THE LICENSOR GRANTS YOU THE RIGHTS CONTAINED HERE IN CONSIDERATION OF YOUR ACCEPTANCE OF SUCH TERMS AND CONDITIONS.
*/
#ifndef APPLICATION_H
#define APPLICATION_H
//*****************************************************************
// Includes
//*****************************************************************
#include "halLora.h"
#include "radio.h"
#include "project_config.h"

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

#include "mb.h"
#include "mbport.h"
#include "math.h"

#include "hardware.h"
#include "serie.h"
/*#include "thermocouple.h"*/
#include "rtd.h"
#include "analog.h"
#include "median.h"
#include "sai.h"
#include "eeprom.h"
#include "common.h"

#include "halLora.h"

//*****************************************************************
// Variables
//*****************************************************************
uint8_t applicationBoardID;
uint8_t contadorSeg_TX;								//Tiempo de espera del LoRa en informacion de TX
uint8_t contadorSeg_RX;								//Tiempo de espera del LoRa RX


//Se incorpora para tarea
uint8_t contador200mS;									//Contador Timer 200ms
uint8_t contadorSegSensor;								//contador Tiempo para cargar datos de sensor





//*****************************************************************
// Functions 
//*****************************************************************
/*void Application_Config();*/
void Application_Start();

//*****************************************************************
// Tasks 
//*****************************************************************
xTaskHandle ApplicationConfigTask_Handle;
void Application_Config_Task_Task();

xTaskHandle MODBUSTask_Handle;
void MODBUS_Task();

xTaskHandle ToggleLedTask_Handle;
void ToggleLed_Task();

xTaskHandle TestLoraTask_Handle;
void TestLora_Task();

xTaskHandle TestLoraMultipleTask_Handle;
void TestLoraMultiple_Task();

xTaskHandle TestLoraTimerTask_Handle;
void TestLoraTimer_Task();

xTaskHandle TestLoraTimer2Task_Handle;
void TestLoraTimer2_Task();




#endif
