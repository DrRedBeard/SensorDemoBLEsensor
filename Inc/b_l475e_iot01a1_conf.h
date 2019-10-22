/**
  ******************************************************************************
  * @file           : b_l475e_iot01a1_conf.h
  * @brief          : Configuration file
  ******************************************************************************
  ******************************************************************************
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef B_L475E_IOT01A1_CONF_H
#define B_L475E_IOT01A1_CONF_H

#ifdef __cplusplus
 extern "C" {
#endif
/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/** @addtogroup BSP
  * @{
  */
  
/** @addtogroup B_L475E_IOT01A1
  * @{
  */

/** @defgroup B_L475E_IOT01A1_CONFIG Config
  * @{
  */ 
  
/** @defgroup B_L475E_IOT01A1_CONFIG_Exported_Constants
  * @{
  */ 
/* COM Feature define */
#define USE_BSP_COM_FEATURE                 1U

/* COM define */
#define USE_COM_LOG                         1U
   
/* IRQ priorities */
#define BSP_BUTTON_USER_IT_PRIORITY         15U

/* I2C1 Frequeny in Hz  */
#define BUS_I2C1_FREQUENCY                  100000U /* Frequency of I2C1 = 100 KHz*/

/* SPI1 Baud rate in bps  */
#define BUS_SPI1_BAUDRATE                   16000000U /* baud rate of SPIn = 16 Mbps */

/* UART1 Baud rate in bps  */
#define BUS_UART1_BAUDRATE                  9600U /* baud rate of UARTn = 9600 baud */
/**
  * @}
  */

/**
  * @}
  */
  
/**
  * @}
  */
  
/**
  * @}
  */
  
#ifdef __cplusplus
}
#endif   
#endif  /* B_L475E_IOT01A1_CONF_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
