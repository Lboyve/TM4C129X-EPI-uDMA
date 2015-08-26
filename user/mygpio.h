#ifndef __MYGPIO_H__
#define __MYGPIO_H__

#include <stdint.h>

#define		 EPI_DATA_SIZE			16
#define 	 SYSTEM_CLOCK_120M 	120000000

#define 	 EPI_PORTA_PINS 		GPIO_PORTA_BASE,(GPIO_PIN_7 | GPIO_PIN_6)
#define 	 EPI_PORTC_PINS 		GPIO_PORTC_BASE,(GPIO_PIN_7 | GPIO_PIN_6 | GPIO_PIN_5 | GPIO_PIN_4)
#define 	 EPI_PORTG_PINS 		GPIO_PORTG_BASE,(GPIO_PIN_1 | GPIO_PIN_0)
#define 	 EPI_PORTK_PINS 		GPIO_PORTK_BASE,(GPIO_PIN_3 | GPIO_PIN_2 | GPIO_PIN_1 | GPIO_PIN_0)
#define 	 EPI_PORTM_PINS 		GPIO_PORTM_BASE,GPIO_PIN_3
#define 	 EPI_PORTP_PINS 		GPIO_PORTP_BASE,GPIO_PIN_2

//EPI

#define		 EPI_D0					GPIO_PK0_EPI0S0
#define		 EPI_D1					GPIO_PK1_EPI0S1
#define		 EPI_D2					GPIO_PK2_EPI0S2
#define		 EPI_D3					GPIO_PK3_EPI0S3
#define		 EPI_D4					GPIO_PC7_EPI0S4
#define		 EPI_D5					GPIO_PC6_EPI0S5
#define		 EPI_D6					GPIO_PC5_EPI0S6
#define		 EPI_D7					GPIO_PC4_EPI0S7

#define		 EPI_A0					GPIO_PA6_EPI0S8
#define		 EPI_A1					GPIO_PA7_EPI0S9
#define		 EPI_A2					GPIO_PG1_EPI0S10
#define		 EPI_A3					GPIO_PG0_EPI0S11
#define		 EPI_A4					GPIO_PM3_EPI0S12
#define		 EPI_A5					GPIO_PM2_EPI0S13
#define		 EPI_WR					GPIO_PP2_EPI0S29


extern  uint8_t	 *data;
extern	uint8_t		send_data[EPI_DATA_SIZE];
void		All_GPIOInit(void);

#endif
